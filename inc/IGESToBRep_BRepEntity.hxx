// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESToBRep_BRepEntity_HeaderFile
#define _IGESToBRep_BRepEntity_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _IGESToBRep_CurveAndSurface_HeaderFile
#include <IGESToBRep_CurveAndSurface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_IGESSolid_VertexList_HeaderFile
#include <Handle_IGESSolid_VertexList.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_IGESSolid_EdgeList_HeaderFile
#include <Handle_IGESSolid_EdgeList.hxx>
#endif
#ifndef _Handle_IGESSolid_Loop_HeaderFile
#include <Handle_IGESSolid_Loop.hxx>
#endif
#ifndef _Handle_IGESSolid_Face_HeaderFile
#include <Handle_IGESSolid_Face.hxx>
#endif
#ifndef _Handle_IGESSolid_Shell_HeaderFile
#include <Handle_IGESSolid_Shell.hxx>
#endif
#ifndef _Handle_IGESSolid_ManifoldSolid_HeaderFile
#include <Handle_IGESSolid_ManifoldSolid.hxx>
#endif
class IGESToBRep_CurveAndSurface;
class TopoDS_Shape;
class IGESData_IGESEntity;
class TopoDS_Vertex;
class IGESSolid_VertexList;
class IGESSolid_EdgeList;
class IGESSolid_Loop;
class TopoDS_Face;
class gp_Trsf2d;
class IGESSolid_Face;
class IGESSolid_Shell;
class IGESSolid_ManifoldSolid;


//! Provides methods to transfer BRep entities <br>
//!           ( VertexList 502, EdgeList 504, Loop 508, <br>
//!             Face 510, Shell 514, ManifoldSolid 186) <br>
//!           from IGES to CASCADE. <br>
class IGESToBRep_BRepEntity  : public IGESToBRep_CurveAndSurface {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Creates  a tool BRepEntity  ready  to  run, with <br>
//!           epsilons  set  to  1.E-04,  TheModeTopo  to  True,  the <br>
//!           optimization of  the continuity to False. <br>
  Standard_EXPORT   IGESToBRep_BRepEntity();
  //! Creates a tool BRepEntity ready to run and sets its <br>
//!           fields as CS's. <br>
  Standard_EXPORT   IGESToBRep_BRepEntity(const IGESToBRep_CurveAndSurface& CS);
  //! Creates a tool BRepEntity ready to run. <br>
  Standard_EXPORT   IGESToBRep_BRepEntity(const Standard_Real eps,const Standard_Real epsGeom,const Standard_Real epsCoeff,const Standard_Boolean mode,const Standard_Boolean modeapprox,const Standard_Boolean optimized);
  //! Transfer the BRepEntity" : Face, Shell or ManifoldSolid. <br>
  Standard_EXPORT     TopoDS_Shape TransferBRepEntity(const Handle(IGESData_IGESEntity)& start) ;
  //! Transfer the entity number "index" of the VertexList "start" <br>
  Standard_EXPORT     TopoDS_Vertex TransferVertex(const Handle(IGESSolid_VertexList)& start,const Standard_Integer index) ;
  //! Transfer the entity number "index" of the EdgeList "start". <br>
  Standard_EXPORT     TopoDS_Shape TransferEdge(const Handle(IGESSolid_EdgeList)& start,const Standard_Integer index) ;
  //! Transfer the Loop Entity <br>
  Standard_EXPORT     TopoDS_Shape TransferLoop(const Handle(IGESSolid_Loop)& start,const TopoDS_Face& Face,const gp_Trsf2d& trans,const Standard_Real uFact) ;
  //! Transfer the Face Entity <br>
  Standard_EXPORT     TopoDS_Shape TransferFace(const Handle(IGESSolid_Face)& start) ;
  //! Transfer the Shell Entity <br>
  Standard_EXPORT     TopoDS_Shape TransferShell(const Handle(IGESSolid_Shell)& start) ;
  //! Transfer the ManifoldSolid Entity <br>
  Standard_EXPORT     TopoDS_Shape TransferManifoldSolid(const Handle(IGESSolid_ManifoldSolid)& start) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
