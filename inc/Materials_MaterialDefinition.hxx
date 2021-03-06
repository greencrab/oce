// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Materials_MaterialDefinition_HeaderFile
#define _Materials_MaterialDefinition_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Materials_MaterialDefinition_HeaderFile
#include <Handle_Materials_MaterialDefinition.hxx>
#endif

#ifndef _Dynamic_FuzzyDefinitionsDictionary_HeaderFile
#include <Dynamic_FuzzyDefinitionsDictionary.hxx>
#endif
#ifndef _Handle_Dynamic_Parameter_HeaderFile
#include <Handle_Dynamic_Parameter.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class Dynamic_Parameter;


//! This  inherited  class  is  useful  to create  the <br>
//!          abstract description  of  a material,  in  term of <br>
//!          authorized properties. <br>
class Materials_MaterialDefinition : public Dynamic_FuzzyDefinitionsDictionary {

public:

  //! Creates the exhaustive definition of a material. <br>
  Standard_EXPORT   Materials_MaterialDefinition();
  //! Starting with the identifier of the parameter <aname>, <br>
//!          the type  of parameter <atype>  and a  string <avalue> <br>
//!          which describes  the values  useful  for  this type of <br>
//!          parameters,  creates and returns  a  Parameter  object <br>
//!          from Dynamic. <br>
  Standard_EXPORT   virtual  Handle_Dynamic_Parameter Switch(const Standard_CString aname,const Standard_CString atype,const Standard_CString avalue) const;




  DEFINE_STANDARD_RTTI(Materials_MaterialDefinition)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
