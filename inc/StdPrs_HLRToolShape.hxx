// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdPrs_HLRToolShape_HeaderFile
#define _StdPrs_HLRToolShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_HLRBRep_Data_HeaderFile
#include <Handle_HLRBRep_Data.hxx>
#endif
#ifndef _HLRAlgo_EdgeIterator_HeaderFile
#include <HLRAlgo_EdgeIterator.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class HLRBRep_Data;
class TopoDS_Shape;
class HLRAlgo_Projector;
class BRepAdaptor_Curve;



class StdPrs_HLRToolShape  {
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

  
  Standard_EXPORT   StdPrs_HLRToolShape(const TopoDS_Shape& TheShape,const HLRAlgo_Projector& TheProjector);
  
  Standard_EXPORT     Standard_Integer NbEdges() const;
  
  Standard_EXPORT     void InitVisible(const Standard_Integer EdgeNumber) ;
  
  Standard_EXPORT     Standard_Boolean MoreVisible() const;
  
  Standard_EXPORT     void NextVisible() ;
  
  Standard_EXPORT     void Visible(BRepAdaptor_Curve& TheEdge,Standard_Real& U1,Standard_Real& U2) ;
  
  Standard_EXPORT     void InitHidden(const Standard_Integer EdgeNumber) ;
  
  Standard_EXPORT     Standard_Boolean MoreHidden() const;
  
  Standard_EXPORT     void NextHidden() ;
  
  Standard_EXPORT     void Hidden(BRepAdaptor_Curve& TheEdge,Standard_Real& U1,Standard_Real& U2) ;





protected:





private:



Handle_HLRBRep_Data MyData;
HLRAlgo_EdgeIterator myEdgeIterator;
Standard_Integer MyCurrentEdgeNumber;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
