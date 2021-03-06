// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_ListIteratorOfListOfInterference_HeaderFile
#define _BOPTools_ListIteratorOfListOfInterference_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_BOPTools_ListNodeOfListOfInterference_HeaderFile
#include <Handle_BOPTools_ListNodeOfListOfInterference.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class BOPTools_ListOfInterference;
class BOPTools_Interference;
class BOPTools_ListNodeOfListOfInterference;



class BOPTools_ListIteratorOfListOfInterference  {
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

  
  Standard_EXPORT   BOPTools_ListIteratorOfListOfInterference();
  
  Standard_EXPORT   BOPTools_ListIteratorOfListOfInterference(const BOPTools_ListOfInterference& L);
  
  Standard_EXPORT     void Initialize(const BOPTools_ListOfInterference& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     BOPTools_Interference& Value() const;


friend class BOPTools_ListOfInterference;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item BOPTools_Interference
#define Item_hxx <BOPTools_Interference.hxx>
#define TCollection_ListNode BOPTools_ListNodeOfListOfInterference
#define TCollection_ListNode_hxx <BOPTools_ListNodeOfListOfInterference.hxx>
#define TCollection_ListIterator BOPTools_ListIteratorOfListOfInterference
#define TCollection_ListIterator_hxx <BOPTools_ListIteratorOfListOfInterference.hxx>
#define Handle_TCollection_ListNode Handle_BOPTools_ListNodeOfListOfInterference
#define TCollection_ListNode_Type_() BOPTools_ListNodeOfListOfInterference_Type_()
#define TCollection_List BOPTools_ListOfInterference
#define TCollection_List_hxx <BOPTools_ListOfInterference.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
