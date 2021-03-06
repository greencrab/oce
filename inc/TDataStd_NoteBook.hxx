// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_NoteBook_HeaderFile
#define _TDataStd_NoteBook_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDataStd_NoteBook_HeaderFile
#include <Handle_TDataStd_NoteBook.hxx>
#endif

#ifndef _TDF_Attribute_HeaderFile
#include <TDF_Attribute.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TDataStd_Real_HeaderFile
#include <Handle_TDataStd_Real.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TDataStd_Integer_HeaderFile
#include <Handle_TDataStd_Integer.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_RelocationTable_HeaderFile
#include <Handle_TDF_RelocationTable.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TDF_Label;
class Standard_GUID;
class TDataStd_Real;
class TDataStd_Integer;
class TDF_Attribute;
class TDF_RelocationTable;


//! NoteBook Object attribute <br>
class TDataStd_NoteBook : public TDF_Attribute {

public:

  //! class methods <br>
//!          ============= <br>//! try to retrieve a NoteBook attribute at <current> label <br>
//!           or in  fathers  label of  <current>. Returns True  if <br>
//!          found and set <N>. <br>
  Standard_EXPORT   static  Standard_Boolean Find(const TDF_Label& current,Handle(TDataStd_NoteBook)& N) ;
  //!  Create  an  enpty   NoteBook attribute,  located  at <br>
//!          <label>. Raises if <label> has attribute <br>
  Standard_EXPORT   static  Handle_TDataStd_NoteBook New(const TDF_Label& label) ;
  //! NoteBook methods <br>
//!          =============== <br>
  Standard_EXPORT   static const Standard_GUID& GetID() ;
  
  Standard_EXPORT   TDataStd_NoteBook();
  //!  Tool to Create  an  Integer  attribute from  <value>, <br>
//!          Insert it in   a  new son  label   of <me>. The   Real <br>
//!          attribute is returned. <br>
  Standard_EXPORT     Handle_TDataStd_Real Append(const Standard_Real value,const Standard_Boolean isExported = Standard_False) ;
  //! Tool to Create  an Real attribute from <value>, Insert <br>
//!          it  in a new son label  of <me>. The Integer attribute <br>
//!          is returned. <br>
  Standard_EXPORT     Handle_TDataStd_Integer Append(const Standard_Integer value,const Standard_Boolean isExported = Standard_False) ;
  
  Standard_EXPORT    const Standard_GUID& ID() const;
  
  Standard_EXPORT     void Restore(const Handle(TDF_Attribute)& with) ;
  
  Standard_EXPORT     Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT     void Paste(const Handle(TDF_Attribute)& into,const Handle(TDF_RelocationTable)& RT) const;
  
  Standard_EXPORT   virtual  Standard_OStream& Dump(Standard_OStream& anOS) const;




  DEFINE_STANDARD_RTTI(TDataStd_NoteBook)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
