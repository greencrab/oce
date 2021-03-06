// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_TheInterfPolyhedron_HeaderFile
#define _IntPatch_TheInterfPolyhedron_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Intf_Interference_HeaderFile
#include <Intf_Interference.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class IntPatch_Polyhedron;
class IntPatch_PolyhedronTool;
class Intf_TangentZone;



class IntPatch_TheInterfPolyhedron  : public Intf_Interference {
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

  
  Standard_EXPORT   IntPatch_TheInterfPolyhedron();
  
  Standard_EXPORT   IntPatch_TheInterfPolyhedron(const IntPatch_Polyhedron& Obje1,const IntPatch_Polyhedron& Obje2);
  
  Standard_EXPORT   IntPatch_TheInterfPolyhedron(const IntPatch_Polyhedron& Obje);
  
  Standard_EXPORT     void Perform(const IntPatch_Polyhedron& Obje1,const IntPatch_Polyhedron& Obje2) ;
  
  Standard_EXPORT     void Perform(const IntPatch_Polyhedron& Obje) ;





protected:





private:

  
  Standard_EXPORT     void Interference(const IntPatch_Polyhedron& Obje1) ;
  
  Standard_EXPORT     void Interference(const IntPatch_Polyhedron& Obje1,const IntPatch_Polyhedron& Obje2) ;
  
  Standard_EXPORT     void Intersect(const Standard_Integer TriF,const IntPatch_Polyhedron& Obje1,const Standard_Integer TriS,const IntPatch_Polyhedron& Obje2) ;
  
  Standard_EXPORT     Standard_Boolean TangentZoneValue(Intf_TangentZone& TheTZ,const IntPatch_Polyhedron& Obje1,const Standard_Integer Tri1,const IntPatch_Polyhedron& Obje2,const Standard_Integer Tri2) const;




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
