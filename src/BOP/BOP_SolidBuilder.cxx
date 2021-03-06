#include <BOP_SolidBuilder.ixx>

#include <TopoDS.hxx>

#include <BOP_ShellFaceClassifier.hxx>
#include <BOP_Loop.hxx>
#include <BOP_SFSCorrector.hxx>



// ==============================================================
// function: BOP_SolidBuilder
// purpose: 
// ==============================================================
  BOP_SolidBuilder::BOP_SolidBuilder()
{
}

// ==============================================================
// function: BOP_SolidBuilder
// purpose: 
// ==============================================================
  BOP_SolidBuilder::BOP_SolidBuilder(BOP_ShellFaceSet&      theSFS,
				     const Standard_Boolean theForceClassFlag)
{
  InitSolidBuilder(theSFS, theForceClassFlag);
}

// ==============================================================
// function: InitSolidBuilder
// purpose: 
// ==============================================================
  void BOP_SolidBuilder::InitSolidBuilder(BOP_ShellFaceSet&      theSFS,
					  const Standard_Boolean theForceClassFlag) 
{
  //
  BOP_SFSCorrector aSFSCor;
  aSFSCor.SetSFS(theSFS);
  aSFSCor.Do();
  BOP_ShellFaceSet& aNewSFS=aSFSCor.NewSFS();
  //
  //MakeLoops(theSFS);
  
  MakeLoops(aNewSFS);
  BOP_ShellFaceClassifier SFC(myBlockBuilder);
  //
  mySolidAreaBuilder.InitSolidAreaBuilder(myLoopSet, SFC, theForceClassFlag);
}

// ==============================================================
// function: InitSolid
// purpose: 
// ==============================================================
  Standard_Integer BOP_SolidBuilder::InitSolid() 
{
  return mySolidAreaBuilder.InitArea();
}

// ==============================================================
// function: MoreSolid
// purpose: 
// ==============================================================
  Standard_Boolean BOP_SolidBuilder::MoreSolid() const
{
  return mySolidAreaBuilder.MoreArea();
}

// ==============================================================
// function: NextSolid
// purpose: 
// ==============================================================
  void BOP_SolidBuilder::NextSolid() 
{
  mySolidAreaBuilder.NextArea();
}

// ==============================================================
// function: InitShell
// purpose: 
// ==============================================================
  Standard_Integer BOP_SolidBuilder::InitShell() 
{
  return mySolidAreaBuilder.InitLoop();
}

// ==============================================================
// function: MoreShell
// purpose: 
// ==============================================================
  Standard_Boolean BOP_SolidBuilder::MoreShell() const
{
  return mySolidAreaBuilder.MoreLoop();
}

// ==============================================================
// function: NextShell
// purpose: 
// ==============================================================
  void BOP_SolidBuilder::NextShell() 
{
  mySolidAreaBuilder.NextLoop();
}

// ==============================================================
// function: IsOldShell
// purpose: 
// ==============================================================
  Standard_Boolean BOP_SolidBuilder::IsOldShell() const
{
  return mySolidAreaBuilder.Loop()->IsShape();  
}

// ==============================================================
// function: OldShell
// purpose: 
// ==============================================================
  TopoDS_Shell BOP_SolidBuilder::OldShell() const
{
  if(!IsOldShell()) {
    Standard_DomainError::Raise("BOP_SolidBuilder::OldShell");
  }
  
  return TopoDS::Shell(mySolidAreaBuilder.Loop()->Shape());
}

// ==============================================================
// function: InitFace
// purpose: 
// ==============================================================
  Standard_Integer BOP_SolidBuilder::InitFace() 
{
  const Handle(BOP_Loop)& aLoop = mySolidAreaBuilder.Loop();
  
  if(aLoop->IsShape())
    Standard_DomainError::Raise("BOP_SolidBuilder::InitFace");
  else {
    myBlockIterator = aLoop->BlockIterator();
    myBlockIterator.Initialize();
  }
  return myBlockIterator.Extent();
}

// ==============================================================
// function: MoreFace
// purpose: 
// ==============================================================
  Standard_Boolean BOP_SolidBuilder::MoreFace() const
{
  return myBlockIterator.More();
}

// ==============================================================
// function: NextFace
// purpose: 
// ==============================================================
  void BOP_SolidBuilder::NextFace() 
{
  myBlockIterator.Next();
}

// ==============================================================
// function: Face
// purpose: 
// ==============================================================
  const TopoDS_Face& BOP_SolidBuilder::Face() const
{
  const TopoDS_Shape& aShape = myBlockBuilder.Element(myBlockIterator);
  return TopoDS::Face(aShape);
}

// ==============================================================
// function: MakeLoops
// purpose: 
// ==============================================================
  void BOP_SolidBuilder::MakeLoops(BOP_ShapeSet& theSFS) 
{
  myBlockBuilder.MakeBlock(theSFS);

  BOP_ListOfLoop& aList = myLoopSet.ChangeListOfLoop();
  aList.Clear();

  // Add shapes of theSFS as shape loops
  for(theSFS.InitShapes(); theSFS.MoreShapes(); theSFS.NextShape()) {
    Handle(BOP_Loop) aShapeLoop = new BOP_Loop(theSFS.Shape());
    aList.Append(aShapeLoop);
  }

  // Add blocks of myBlockBuilder as block loops
  for(myBlockBuilder.InitBlock(); myBlockBuilder.MoreBlock(); myBlockBuilder.NextBlock()) {
    BOP_BlockIterator aBlockIterator = myBlockBuilder.BlockIterator();
    Handle(BOP_Loop) aShapeLoop = new BOP_Loop(aBlockIterator);
    aList.Append(aShapeLoop);
  }
}

