// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_IndexedMapOfOwner_HeaderFile
#define _SelectMgr_IndexedMapOfOwner_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_SelectMgr_EntityOwner_HeaderFile
#include <Handle_SelectMgr_EntityOwner.hxx>
#endif
#ifndef _Handle_SelectMgr_IndexedMapNodeOfIndexedMapOfOwner_HeaderFile
#include <Handle_SelectMgr_IndexedMapNodeOfIndexedMapOfOwner.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_OutOfRange;
class SelectMgr_EntityOwner;
class TColStd_MapTransientHasher;
class SelectMgr_IndexedMapNodeOfIndexedMapOfOwner;



class SelectMgr_IndexedMapOfOwner  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   SelectMgr_IndexedMapOfOwner(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     SelectMgr_IndexedMapOfOwner& Assign(const SelectMgr_IndexedMapOfOwner& Other) ;
    SelectMgr_IndexedMapOfOwner& operator =(const SelectMgr_IndexedMapOfOwner& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~SelectMgr_IndexedMapOfOwner()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const Handle(SelectMgr_EntityOwner)& K) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const Handle(SelectMgr_EntityOwner)& K) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(SelectMgr_EntityOwner)& K) const;
  
  Standard_EXPORT    const Handle_SelectMgr_EntityOwner& FindKey(const Standard_Integer I) const;
   const Handle_SelectMgr_EntityOwner& operator ()(const Standard_Integer I) const
{
  return FindKey(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const Handle(SelectMgr_EntityOwner)& K) const;





protected:





private:

  
  Standard_EXPORT   SelectMgr_IndexedMapOfOwner(const SelectMgr_IndexedMapOfOwner& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif