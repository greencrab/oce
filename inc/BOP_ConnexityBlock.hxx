// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_ConnexityBlock_HeaderFile
#define _BOP_ConnexityBlock_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
class TopTools_ListOfShape;
class TopTools_IndexedMapOfOrientedShape;



//!  Auxiliary class to store data about set <br>
//!  of connex shapes <br>
//! <br>
class BOP_ConnexityBlock  {
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

  
//! Empty constructor; <br>
  Standard_EXPORT   BOP_ConnexityBlock();
  
//! Modifier <br>
  Standard_EXPORT     void SetShapes(const TopTools_ListOfShape& anEdges) ;
  
//! Modifier <br>
  Standard_EXPORT     void SetShapes(const TopTools_IndexedMapOfOrientedShape& nEdges) ;
  
//! Modifier <br>
  Standard_EXPORT     void SetRegularity(const Standard_Boolean aFlag) ;
  
//! Selector <br>
  Standard_EXPORT    const TopTools_ListOfShape& Shapes() const;
  
//! Selector <br>
//! Returns TRUE if all elements in the block are <br>
//! biconnexity <br>
  Standard_EXPORT     Standard_Boolean IsRegular() const;





protected:





private:



Standard_Boolean myRegularity;
TopTools_ListOfShape myShapes;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
