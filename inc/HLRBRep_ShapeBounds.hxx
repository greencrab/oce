// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_ShapeBounds_HeaderFile
#define _HLRBRep_ShapeBounds_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_HLRTopoBRep_OutLiner_HeaderFile
#include <Handle_HLRTopoBRep_OutLiner.hxx>
#endif
#ifndef _Handle_MMgt_TShared_HeaderFile
#include <Handle_MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class HLRTopoBRep_OutLiner;
class MMgt_TShared;


//! Contains  a Shape and the  bounds of its vertices, <br>
//!          edges and faces in the DataStructure. <br>
class HLRBRep_ShapeBounds  {
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

  
      HLRBRep_ShapeBounds();
  
  Standard_EXPORT   HLRBRep_ShapeBounds(const Handle(HLRTopoBRep_OutLiner)& S,const Handle(MMgt_TShared)& SData,const Standard_Integer nbIso,const Standard_Integer V1,const Standard_Integer V2,const Standard_Integer E1,const Standard_Integer E2,const Standard_Integer F1,const Standard_Integer F2);
  
  Standard_EXPORT   HLRBRep_ShapeBounds(const Handle(HLRTopoBRep_OutLiner)& S,const Standard_Integer nbIso,const Standard_Integer V1,const Standard_Integer V2,const Standard_Integer E1,const Standard_Integer E2,const Standard_Integer F1,const Standard_Integer F2);
  
  Standard_EXPORT     void Translate(const Standard_Integer NV,const Standard_Integer NE,const Standard_Integer NF) ;
  
        void Shape(const Handle(HLRTopoBRep_OutLiner)& S) ;
  
       const Handle_HLRTopoBRep_OutLiner& Shape() const;
  
        void ShapeData(const Handle(MMgt_TShared)& SD) ;
  
       const Handle_MMgt_TShared& ShapeData() const;
  
        void NbOfIso(const Standard_Integer nbIso) ;
  
        Standard_Integer NbOfIso() const;
  
  Standard_EXPORT     void Sizes(Standard_Integer& NV,Standard_Integer& NE,Standard_Integer& NF) const;
  
  Standard_EXPORT     void Bounds(Standard_Integer& V1,Standard_Integer& V2,Standard_Integer& E1,Standard_Integer& E2,Standard_Integer& F1,Standard_Integer& F2) const;
  
  Standard_EXPORT     void UpdateMinMax(const Standard_Address TotMinMax) ;
  
        Standard_Address MinMax() const;





protected:





private:



Handle_HLRTopoBRep_OutLiner myShape;
Handle_MMgt_TShared myShapeData;
Standard_Integer myNbIso;
Standard_Integer myVertStart;
Standard_Integer myVertEnd;
Standard_Integer myEdgeStart;
Standard_Integer myEdgeEnd;
Standard_Integer myFaceStart;
Standard_Integer myFaceEnd;
Standard_Integer myMinMax[16];


};


#include <HLRBRep_ShapeBounds.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
