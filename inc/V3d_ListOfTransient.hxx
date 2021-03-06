// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _V3d_ListOfTransient_HeaderFile
#define _V3d_ListOfTransient_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TColStd_ListOfTransient_HeaderFile
#include <TColStd_ListOfTransient.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class Standard_Transient;



class V3d_ListOfTransient  : public TColStd_ListOfTransient {
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

  
  Standard_EXPORT   V3d_ListOfTransient();
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(Standard_Transient)& aTransient) const;
  
  Standard_EXPORT     void Remove(const Handle(Standard_Transient)& aTransient) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
