// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DBC_VArrayNodeOfVArrayOfInteger_HeaderFile
#define _DBC_VArrayNodeOfVArrayOfInteger_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_DBC_VArrayNodeOfVArrayOfInteger_HeaderFile
#include <Handle_DBC_VArrayNodeOfVArrayOfInteger.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _PStandard_ArrayNode_HeaderFile
#include <PStandard_ArrayNode.hxx>
#endif
class DBC_VArrayOfInteger;
class DBC_VArrayTNodeOfVArrayOfInteger;


class DBC_VArrayNodeOfVArrayOfInteger : public PStandard_ArrayNode {

public:

  
  Standard_EXPORT   DBC_VArrayNodeOfVArrayOfInteger();
  
  Standard_EXPORT   DBC_VArrayNodeOfVArrayOfInteger(const Standard_Integer& aValue);
  
  Standard_EXPORT     void SetValue(const Standard_Integer& aValue) ;
  
  Standard_EXPORT     Standard_Address Value() const;

DBC_VArrayNodeOfVArrayOfInteger(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    Standard_Integer _CSFDB_GetDBC_VArrayNodeOfVArrayOfIntegermyValue() const { return myValue; }
    void _CSFDB_SetDBC_VArrayNodeOfVArrayOfIntegermyValue(const Standard_Integer p) { myValue = p; }



  DEFINE_STANDARD_RTTI(DBC_VArrayNodeOfVArrayOfInteger)

protected:




private: 


Standard_Integer myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif