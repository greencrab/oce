// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_ListNodeOfListOfCoupleOfInteger_HeaderFile
#define _BOPTools_ListNodeOfListOfCoupleOfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BOPTools_ListNodeOfListOfCoupleOfInteger_HeaderFile
#include <Handle_BOPTools_ListNodeOfListOfCoupleOfInteger.hxx>
#endif

#ifndef _BOPTools_CoupleOfInteger_HeaderFile
#include <BOPTools_CoupleOfInteger.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class BOPTools_CoupleOfInteger;
class BOPTools_ListOfCoupleOfInteger;
class BOPTools_ListIteratorOfListOfCoupleOfInteger;



class BOPTools_ListNodeOfListOfCoupleOfInteger : public TCollection_MapNode {

public:

  
      BOPTools_ListNodeOfListOfCoupleOfInteger(const BOPTools_CoupleOfInteger& I,const TCollection_MapNodePtr& n);
  
        BOPTools_CoupleOfInteger& Value() const;




  DEFINE_STANDARD_RTTI(BOPTools_ListNodeOfListOfCoupleOfInteger)

protected:




private: 


BOPTools_CoupleOfInteger myValue;


};

#define Item BOPTools_CoupleOfInteger
#define Item_hxx <BOPTools_CoupleOfInteger.hxx>
#define TCollection_ListNode BOPTools_ListNodeOfListOfCoupleOfInteger
#define TCollection_ListNode_hxx <BOPTools_ListNodeOfListOfCoupleOfInteger.hxx>
#define TCollection_ListIterator BOPTools_ListIteratorOfListOfCoupleOfInteger
#define TCollection_ListIterator_hxx <BOPTools_ListIteratorOfListOfCoupleOfInteger.hxx>
#define Handle_TCollection_ListNode Handle_BOPTools_ListNodeOfListOfCoupleOfInteger
#define TCollection_ListNode_Type_() BOPTools_ListNodeOfListOfCoupleOfInteger_Type_()
#define TCollection_List BOPTools_ListOfCoupleOfInteger
#define TCollection_List_hxx <BOPTools_ListOfCoupleOfInteger.hxx>

#include <TCollection_ListNode.lxx>

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
