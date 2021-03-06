// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_HeaderFile
#define _IGESSolid_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_IGESSolid_Protocol_HeaderFile
#include <Handle_IGESSolid_Protocol.hxx>
#endif
class IGESSolid_Protocol;
class IGESSolid_Block;
class IGESSolid_RightAngularWedge;
class IGESSolid_Cylinder;
class IGESSolid_ConeFrustum;
class IGESSolid_Sphere;
class IGESSolid_Torus;
class IGESSolid_SolidOfRevolution;
class IGESSolid_SolidOfLinearExtrusion;
class IGESSolid_Ellipsoid;
class IGESSolid_BooleanTree;
class IGESSolid_SelectedComponent;
class IGESSolid_SolidAssembly;
class IGESSolid_ManifoldSolid;
class IGESSolid_PlaneSurface;
class IGESSolid_CylindricalSurface;
class IGESSolid_ConicalSurface;
class IGESSolid_SphericalSurface;
class IGESSolid_ToroidalSurface;
class IGESSolid_SolidInstance;
class IGESSolid_VertexList;
class IGESSolid_EdgeList;
class IGESSolid_Loop;
class IGESSolid_Face;
class IGESSolid_Shell;
class IGESSolid_ToolBlock;
class IGESSolid_ToolRightAngularWedge;
class IGESSolid_ToolCylinder;
class IGESSolid_ToolConeFrustum;
class IGESSolid_ToolSphere;
class IGESSolid_ToolTorus;
class IGESSolid_ToolSolidOfRevolution;
class IGESSolid_ToolSolidOfLinearExtrusion;
class IGESSolid_ToolEllipsoid;
class IGESSolid_ToolBooleanTree;
class IGESSolid_ToolSelectedComponent;
class IGESSolid_ToolSolidAssembly;
class IGESSolid_ToolManifoldSolid;
class IGESSolid_ToolPlaneSurface;
class IGESSolid_ToolCylindricalSurface;
class IGESSolid_ToolConicalSurface;
class IGESSolid_ToolSphericalSurface;
class IGESSolid_ToolToroidalSurface;
class IGESSolid_ToolSolidInstance;
class IGESSolid_ToolVertexList;
class IGESSolid_ToolEdgeList;
class IGESSolid_ToolLoop;
class IGESSolid_ToolFace;
class IGESSolid_ToolShell;
class IGESSolid_Protocol;
class IGESSolid_ReadWriteModule;
class IGESSolid_GeneralModule;
class IGESSolid_SpecificModule;
class IGESSolid_TopoBuilder;
class IGESSolid_Array1OfLoop;
class IGESSolid_Array1OfFace;
class IGESSolid_Array1OfShell;
class IGESSolid_Array1OfVertexList;
class IGESSolid_HArray1OfLoop;
class IGESSolid_HArray1OfFace;
class IGESSolid_HArray1OfShell;
class IGESSolid_HArray1OfVertexList;


//! This package consists of B-Rep and CSG Solid entities <br>
class IGESSolid  {
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

  //! Prepares dynamic data (Protocol, Modules) for this package <br>
  Standard_EXPORT   static  void Init() ;
  //! Returns the Protocol for this Package <br>
  Standard_EXPORT   static  Handle_IGESSolid_Protocol Protocol() ;





protected:





private:




friend class IGESSolid_Block;
friend class IGESSolid_RightAngularWedge;
friend class IGESSolid_Cylinder;
friend class IGESSolid_ConeFrustum;
friend class IGESSolid_Sphere;
friend class IGESSolid_Torus;
friend class IGESSolid_SolidOfRevolution;
friend class IGESSolid_SolidOfLinearExtrusion;
friend class IGESSolid_Ellipsoid;
friend class IGESSolid_BooleanTree;
friend class IGESSolid_SelectedComponent;
friend class IGESSolid_SolidAssembly;
friend class IGESSolid_ManifoldSolid;
friend class IGESSolid_PlaneSurface;
friend class IGESSolid_CylindricalSurface;
friend class IGESSolid_ConicalSurface;
friend class IGESSolid_SphericalSurface;
friend class IGESSolid_ToroidalSurface;
friend class IGESSolid_SolidInstance;
friend class IGESSolid_VertexList;
friend class IGESSolid_EdgeList;
friend class IGESSolid_Loop;
friend class IGESSolid_Face;
friend class IGESSolid_Shell;
friend class IGESSolid_ToolBlock;
friend class IGESSolid_ToolRightAngularWedge;
friend class IGESSolid_ToolCylinder;
friend class IGESSolid_ToolConeFrustum;
friend class IGESSolid_ToolSphere;
friend class IGESSolid_ToolTorus;
friend class IGESSolid_ToolSolidOfRevolution;
friend class IGESSolid_ToolSolidOfLinearExtrusion;
friend class IGESSolid_ToolEllipsoid;
friend class IGESSolid_ToolBooleanTree;
friend class IGESSolid_ToolSelectedComponent;
friend class IGESSolid_ToolSolidAssembly;
friend class IGESSolid_ToolManifoldSolid;
friend class IGESSolid_ToolPlaneSurface;
friend class IGESSolid_ToolCylindricalSurface;
friend class IGESSolid_ToolConicalSurface;
friend class IGESSolid_ToolSphericalSurface;
friend class IGESSolid_ToolToroidalSurface;
friend class IGESSolid_ToolSolidInstance;
friend class IGESSolid_ToolVertexList;
friend class IGESSolid_ToolEdgeList;
friend class IGESSolid_ToolLoop;
friend class IGESSolid_ToolFace;
friend class IGESSolid_ToolShell;
friend class IGESSolid_Protocol;
friend class IGESSolid_ReadWriteModule;
friend class IGESSolid_GeneralModule;
friend class IGESSolid_SpecificModule;
friend class IGESSolid_TopoBuilder;
friend class IGESSolid_Array1OfLoop;
friend class IGESSolid_Array1OfFace;
friend class IGESSolid_Array1OfShell;
friend class IGESSolid_Array1OfVertexList;
friend class IGESSolid_HArray1OfLoop;
friend class IGESSolid_HArray1OfFace;
friend class IGESSolid_HArray1OfShell;
friend class IGESSolid_HArray1OfVertexList;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
