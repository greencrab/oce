// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus_HeaderFile
#define _TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus_HeaderFile
#include <Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopOpeBRepDS_CheckStatus_HeaderFile
#include <TopOpeBRepDS_CheckStatus.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TColStd_MapIntegerHasher;
class TopOpeBRepDS_DataMapOfCheckStatus;
class TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus;



class TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus : public TCollection_MapNode {

public:

  
      TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus(const Standard_Integer& K,const TopOpeBRepDS_CheckStatus& I,const TCollection_MapNodePtr& n);
  
        Standard_Integer& Key() const;
  
        TopOpeBRepDS_CheckStatus& Value() const;




  DEFINE_STANDARD_RTTI(TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus)

protected:




private: 


Standard_Integer myKey;
TopOpeBRepDS_CheckStatus myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem TopOpeBRepDS_CheckStatus
#define TheItem_hxx <TopOpeBRepDS_CheckStatus.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus
#define TCollection_DataMapNode_hxx <TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus.hxx>
#define TCollection_DataMapIterator TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus
#define TCollection_DataMapIterator_hxx <TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus.hxx>
#define Handle_TCollection_DataMapNode Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus
#define TCollection_DataMapNode_Type_() TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus_Type_()
#define TCollection_DataMap TopOpeBRepDS_DataMapOfCheckStatus
#define TCollection_DataMap_hxx <TopOpeBRepDS_DataMapOfCheckStatus.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
