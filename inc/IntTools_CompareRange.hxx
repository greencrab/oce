// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_CompareRange_HeaderFile
#define _IntTools_CompareRange_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class IntTools_Range;


//! Auxiliary class to provide a sorting Ranges, <br>
//!          taking  into  account a value of Left . <br>
class IntTools_CompareRange  {
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

  
//! Empty constructor <br>
  Standard_EXPORT   IntTools_CompareRange();
  
//! Initializes me by tolerance <br>
  Standard_EXPORT   IntTools_CompareRange(const Standard_Real aTol);
  
//! Returns True if <Left> is lower than <Right>. <br>
  Standard_EXPORT     Standard_Boolean IsLower(const IntTools_Range& Left,const IntTools_Range& Right) const;
  
//! Returns True if <Left> is greater than <Right>. <br>
  Standard_EXPORT     Standard_Boolean IsGreater(const IntTools_Range& Left,const IntTools_Range& Right) const;
  
//! Returns True when <Right> and <Left> are equal. <br>
  Standard_EXPORT     Standard_Boolean IsEqual(const IntTools_Range& Left,const IntTools_Range& Right) const;





protected:





private:



Standard_Real myTol;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
