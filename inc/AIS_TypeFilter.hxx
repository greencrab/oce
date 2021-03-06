// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_TypeFilter_HeaderFile
#define _AIS_TypeFilter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS_TypeFilter_HeaderFile
#include <Handle_AIS_TypeFilter.hxx>
#endif

#ifndef _AIS_KindOfInteractive_HeaderFile
#include <AIS_KindOfInteractive.hxx>
#endif
#ifndef _SelectMgr_Filter_HeaderFile
#include <SelectMgr_Filter.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_SelectMgr_EntityOwner_HeaderFile
#include <Handle_SelectMgr_EntityOwner.hxx>
#endif
class SelectMgr_EntityOwner;


//! Selects Interactive Objects through their types. The <br>
//! filter questions each Interactive Object in local context <br>
//! to determine whether it has an non-null owner, and if <br>
//! so, whether it is of the desired type. If the object <br>
//! returns true in each case, it is kept. If not, it is rejected. <br>
//! By default, the   interactive object has a None   type <br>
//! and a signature of 0. A filter for type specifies a <br>
//! choice of type out of a range at any level enumerated <br>
//! for type or kind. The choice could be for kind of <br>
//! interactive object, of dimension, of unit, or type of axis, <br>
//! plane or attribute. <br>
//! If you want to give a particular type and signature to <br>
//! your Interactive Object, you must redefine two virtual <br>
//! methods:   Type and Signature. <br>
//! This filter is used in both Neutral Point and open local contexts. <br>
//! In the Collector viewer, you can only locate <br>
//! Interactive Objects which answer positively to the <br>
//! positioned filters when a local context is open. <br>
//! Warning <br>
//! When you close a local context, all temporary <br>
//! interactive objects are deleted, all selection modes <br>
//! concerning the context are cancelled, and all content <br>
//! filters are emptied. <br>
class AIS_TypeFilter : public SelectMgr_Filter {

public:

  //! Initializes filter for type, aGivenKind. <br>
  Standard_EXPORT   AIS_TypeFilter(const AIS_KindOfInteractive aGivenKind);
  //! Returns False if the transient is not an Interactive <br>
//! Object, or if the type of the Interactive Object is not <br>
//! the same as that stored in the filter. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsOk(const Handle(SelectMgr_EntityOwner)& anobj) const;




  DEFINE_STANDARD_RTTI(AIS_TypeFilter)

protected:


AIS_KindOfInteractive myKind;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
