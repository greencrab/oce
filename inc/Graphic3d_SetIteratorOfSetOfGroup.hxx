// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_SetIteratorOfSetOfGroup_HeaderFile
#define _Graphic3d_SetIteratorOfSetOfGroup_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Graphic3d_ListIteratorOfSetListOfSetOfGroup_HeaderFile
#include <Graphic3d_ListIteratorOfSetListOfSetOfGroup.hxx>
#endif
#ifndef _Handle_Graphic3d_Group_HeaderFile
#include <Handle_Graphic3d_Group.hxx>
#endif
#ifndef _Handle_Graphic3d_ListNodeOfSetListOfSetOfGroup_HeaderFile
#include <Handle_Graphic3d_ListNodeOfSetListOfSetOfGroup.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class Graphic3d_Group;
class Graphic3d_SetOfGroup;
class Graphic3d_SetListOfSetOfGroup;
class Graphic3d_ListNodeOfSetListOfSetOfGroup;
class Graphic3d_ListIteratorOfSetListOfSetOfGroup;



class Graphic3d_SetIteratorOfSetOfGroup  {
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

  
  Standard_EXPORT   Graphic3d_SetIteratorOfSetOfGroup();
  
  Standard_EXPORT   Graphic3d_SetIteratorOfSetOfGroup(const Graphic3d_SetOfGroup& S);
  
  Standard_EXPORT     void Initialize(const Graphic3d_SetOfGroup& S) ;
  
        Standard_Boolean More() const;
  
        void Next() ;
  
       const Handle_Graphic3d_Group& Value() const;





protected:





private:



Graphic3d_ListIteratorOfSetListOfSetOfGroup myIterator;


};

#define Item Handle_Graphic3d_Group
#define Item_hxx <Graphic3d_Group.hxx>
#define TCollection_SetList Graphic3d_SetListOfSetOfGroup
#define TCollection_SetList_hxx <Graphic3d_SetListOfSetOfGroup.hxx>
#define TCollection_ListNodeOfSetList Graphic3d_ListNodeOfSetListOfSetOfGroup
#define TCollection_ListNodeOfSetList_hxx <Graphic3d_ListNodeOfSetListOfSetOfGroup.hxx>
#define TCollection_ListIteratorOfSetList Graphic3d_ListIteratorOfSetListOfSetOfGroup
#define TCollection_ListIteratorOfSetList_hxx <Graphic3d_ListIteratorOfSetListOfSetOfGroup.hxx>
#define TCollection_ListNodeOfSetList Graphic3d_ListNodeOfSetListOfSetOfGroup
#define TCollection_ListNodeOfSetList_hxx <Graphic3d_ListNodeOfSetListOfSetOfGroup.hxx>
#define TCollection_ListIteratorOfSetList Graphic3d_ListIteratorOfSetListOfSetOfGroup
#define TCollection_ListIteratorOfSetList_hxx <Graphic3d_ListIteratorOfSetListOfSetOfGroup.hxx>
#define TCollection_SetIterator Graphic3d_SetIteratorOfSetOfGroup
#define TCollection_SetIterator_hxx <Graphic3d_SetIteratorOfSetOfGroup.hxx>
#define Handle_TCollection_ListNodeOfSetList Handle_Graphic3d_ListNodeOfSetListOfSetOfGroup
#define TCollection_ListNodeOfSetList_Type_() Graphic3d_ListNodeOfSetListOfSetOfGroup_Type_()
#define Handle_TCollection_ListNodeOfSetList Handle_Graphic3d_ListNodeOfSetListOfSetOfGroup
#define TCollection_ListNodeOfSetList_Type_() Graphic3d_ListNodeOfSetListOfSetOfGroup_Type_()
#define TCollection_Set Graphic3d_SetOfGroup
#define TCollection_Set_hxx <Graphic3d_SetOfGroup.hxx>

#include <TCollection_SetIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_SetList
#undef TCollection_SetList_hxx
#undef TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_hxx
#undef TCollection_ListIteratorOfSetList
#undef TCollection_ListIteratorOfSetList_hxx
#undef TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_hxx
#undef TCollection_ListIteratorOfSetList
#undef TCollection_ListIteratorOfSetList_hxx
#undef TCollection_SetIterator
#undef TCollection_SetIterator_hxx
#undef Handle_TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_Type_
#undef Handle_TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_Type_
#undef TCollection_Set
#undef TCollection_Set_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
