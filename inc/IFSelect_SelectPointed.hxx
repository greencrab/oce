// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectPointed_HeaderFile
#define _IFSelect_SelectPointed_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_SelectPointed_HeaderFile
#include <Handle_IFSelect_SelectPointed.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TColStd_SequenceOfTransient_HeaderFile
#include <TColStd_SequenceOfTransient.hxx>
#endif
#ifndef _IFSelect_SelectBase_HeaderFile
#include <IFSelect_SelectBase.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfTransient_HeaderFile
#include <Handle_TColStd_HSequenceOfTransient.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Interface_CopyControl_HeaderFile
#include <Handle_Interface_CopyControl.hxx>
#endif
#ifndef _Handle_IFSelect_Transformer_HeaderFile
#include <Handle_IFSelect_Transformer.hxx>
#endif
class Interface_InterfaceError;
class Standard_Transient;
class TColStd_HSequenceOfTransient;
class Interface_CopyControl;
class IFSelect_Transformer;
class Interface_EntityIterator;
class Interface_Graph;
class TCollection_AsciiString;


//! This type of Selection is intended to describe a direct <br>
//!           selection without an explicit criterium, for instance the <br>
//!           result of picking viewed entities on a graphic screen <br>
//! <br>
//!           It can also be used to provide a list as internal alternate <br>
//!           input : this use implies to clear the list once queried <br>
class IFSelect_SelectPointed : public IFSelect_SelectBase {

public:

  //! Creates a SelectPointed <br>
  Standard_EXPORT   IFSelect_SelectPointed();
  //! Clears the list of selected items <br>
//!           Also says the list is unset <br>
//!           All Add* methods and SetList say the list is set <br>
  Standard_EXPORT     void Clear() ;
  //! Tells if the list has been set. Even if empty <br>
  Standard_EXPORT     Standard_Boolean IsSet() const;
  //! As SetList but with only one entity <br>
//!           If <ent> is Null, the list is said as being set but is empty <br>
  Standard_EXPORT     void SetEntity(const Handle(Standard_Transient)& item) ;
  //! Sets a given list to define the list of selected items <br>
//!           <list> can be empty or null : in this case, the list is said <br>
//!           as being set, but it is empty <br>
//! <br>
//!           To use it as an alternate input, one shot : <br>
//!           - SetList or SetEntity to define the input list <br>
//!           - RootResult to get it <br>
//!           - then Clear to drop it <br>
  Standard_EXPORT     void SetList(const Handle(TColStd_HSequenceOfTransient)& list) ;
  //! Adds an item. Returns True if Done, False if <item> is already <br>
//!           in the selected list <br>
  Standard_EXPORT     Standard_Boolean Add(const Handle(Standard_Transient)& item) ;
  //! Removes an item. Returns True if Done, False if <item> was not <br>
//!           in the selected list <br>
  Standard_EXPORT     Standard_Boolean Remove(const Handle(Standard_Transient)& item) ;
  //! Toggles status of an item : adds it if not pointed or removes <br>
//!           it if already pointed. Returns the new status (Pointed or not) <br>
  Standard_EXPORT     Standard_Boolean Toggle(const Handle(Standard_Transient)& item) ;
  //! Adds all the items defined in a list. Returns True if at least <br>
//!           one item has been added, False else <br>
  Standard_EXPORT     Standard_Boolean AddList(const Handle(TColStd_HSequenceOfTransient)& list) ;
  //! Removes all the items defined in a list. Returns True if at <br>
//!           least one item has been removed, False else <br>
  Standard_EXPORT     Standard_Boolean RemoveList(const Handle(TColStd_HSequenceOfTransient)& list) ;
  //! Toggles status of all the items defined in a list : adds it if <br>
//!           not pointed or removes it if already pointed. <br>
  Standard_EXPORT     Standard_Boolean ToggleList(const Handle(TColStd_HSequenceOfTransient)& list) ;
  //! Returns the rank of an item in the selected list, or 0. <br>
  Standard_EXPORT     Standard_Integer Rank(const Handle(Standard_Transient)& item) const;
  //! Returns the count of selected items <br>
  Standard_EXPORT     Standard_Integer NbItems() const;
  //! Returns an item given its rank, or a Null Handle <br>
  Standard_EXPORT     Handle_Standard_Transient Item(const Standard_Integer num) const;
  //! Rebuilds the selected list. Any selected entity which has a <br>
//!           bound result is replaced by this result, else it is removed. <br>
  Standard_EXPORT     void Update(const Handle(Interface_CopyControl)& control) ;
  //! Rebuilds the selected list, by querying a Transformer <br>
//!           (same principle as from a CopyControl) <br>
  Standard_EXPORT     void Update(const Handle(IFSelect_Transformer)& trf) ;
  //! Returns the list of selected items. Only the selected entities <br>
//!           which are present in the graph are given (this result assures <br>
//!           uniqueness). <br>
  Standard_EXPORT     Interface_EntityIterator RootResult(const Interface_Graph& G) const;
  //! Returns a text which identifies the type of selection made. <br>
//!           It is "Pointed Entities" <br>
  Standard_EXPORT     TCollection_AsciiString Label() const;




  DEFINE_STANDARD_RTTI(IFSelect_SelectPointed)

protected:




private: 


Standard_Boolean theset;
TColStd_SequenceOfTransient theitems;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
