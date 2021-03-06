// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMesh_DiscretFactory_HeaderFile
#define _BRepMesh_DiscretFactory_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepMesh_PluginEntryType_HeaderFile
#include <BRepMesh_PluginEntryType.hxx>
#endif
#ifndef _BRepMesh_FactoryError_HeaderFile
#include <BRepMesh_FactoryError.hxx>
#endif
#ifndef _TColStd_MapOfAsciiString_HeaderFile
#include <TColStd_MapOfAsciiString.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Plugin_MapOfFunctions_HeaderFile
#include <Plugin_MapOfFunctions.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_BRepMesh_DiscretRoot_HeaderFile
#include <Handle_BRepMesh_DiscretRoot.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TColStd_MapOfAsciiString;
class TCollection_AsciiString;
class BRepMesh_DiscretRoot;
class TopoDS_Shape;



//! This class intended to setup / retrieve default triangulation algorithm. <br>
//! Use BRepMesh_DiscretFactory::Get() static method to retrieve global Factory instance. <br>
//! Use BRepMesh_DiscretFactory::Discret() method to retrieve meshing tool. <br>
class BRepMesh_DiscretFactory  {
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

  
//! Returns the global factory instance. <br>
  Standard_EXPORT   static  BRepMesh_DiscretFactory& Get() ;
  
//! Returns the list of registered meshing algorithms. <br>
  Standard_EXPORT    const TColStd_MapOfAsciiString& Names() const;
  
//! Setup meshing algorithm by name. <br>
//! Returns true if requested tool is available. <br>
//! On fail Factory will continue to use previous algo. <br>
  Standard_EXPORT     Standard_Boolean SetDefaultName(const TCollection_AsciiString& theName) ;
  
//! Returns name for current meshing algorithm. <br>
  Standard_EXPORT    const TCollection_AsciiString& DefaultName() const;
  
//! Advanced function. Changes function name to retrieve from plugin. <br>
//! Returns true if requested tool is available. <br>
//! On fail Factory will continue to use previous algo. <br>
  Standard_EXPORT     Standard_Boolean SetFunctionName(const TCollection_AsciiString& theFuncName) ;
  
//! Setup meshing algorithm that should be created by this Factory. <br>
//! Returns true if requested tool is available. <br>
//! On fail Factory will continue to use previous algo. <br>
//! Call ::ErrorStatus() method to retrieve fault reason. <br>
  Standard_EXPORT     Standard_Boolean SetDefault(const TCollection_AsciiString& theName,const TCollection_AsciiString& theFuncName = "DISCRETALGO") ;
  
//! Returns function name that should be exported by plugin. <br>
  Standard_EXPORT    const TCollection_AsciiString& FunctionName() const;
  
//! Returns triangulation algorithm instance. <br>
  Standard_EXPORT     Handle_BRepMesh_DiscretRoot Discret(const TopoDS_Shape& theShape,const Standard_Real theDeflection,const Standard_Real theAngle) ;
  
//! Returns error status for last meshing algorithm switch. <br>
  Standard_EXPORT     BRepMesh_FactoryError ErrorStatus() const;





protected:

  
  Standard_EXPORT   BRepMesh_DiscretFactory();
Standard_EXPORT virtual ~BRepMesh_DiscretFactory();
  
  Standard_EXPORT     void Clear() ;


BRepMesh_PluginEntryType myPluginEntry;
BRepMesh_FactoryError myErrorStatus;
TColStd_MapOfAsciiString myNames;
TCollection_AsciiString myDefaultName;
TCollection_AsciiString myFunctionName;
Plugin_MapOfFunctions myFactoryMethods;


private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
