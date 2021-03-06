// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PBRep_CurveOn2Surfaces_HeaderFile
#define _PBRep_CurveOn2Surfaces_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PBRep_CurveOn2Surfaces_HeaderFile
#include <Handle_PBRep_CurveOn2Surfaces.hxx>
#endif

#ifndef _Handle_PGeom_Surface_HeaderFile
#include <Handle_PGeom_Surface.hxx>
#endif
#ifndef _PTopLoc_Location_HeaderFile
#include <PTopLoc_Location.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _PBRep_CurveRepresentation_HeaderFile
#include <PBRep_CurveRepresentation.hxx>
#endif
class PGeom_Surface;
class Standard_NullObject;
class PTopLoc_Location;


class PBRep_CurveOn2Surfaces : public PBRep_CurveRepresentation {

public:

  
  Standard_EXPORT   PBRep_CurveOn2Surfaces(const Handle(PGeom_Surface)& S1,const Handle(PGeom_Surface)& S2,const PTopLoc_Location& L1,const PTopLoc_Location& L2,const GeomAbs_Shape C);
  
  Standard_EXPORT     Handle_PGeom_Surface Surface() const;
  
  Standard_EXPORT     Handle_PGeom_Surface Surface2() const;
  
  Standard_EXPORT     PTopLoc_Location Location2() const;
  
  Standard_EXPORT     GeomAbs_Shape Continuity() const;
  //! Returns True. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsRegularity() const;

  PBRep_CurveOn2Surfaces( )
{
  
}
PBRep_CurveOn2Surfaces(const Storage_stCONSTclCOM& a) : PBRep_CurveRepresentation(a)
{
  
}
    Handle(PGeom_Surface) _CSFDB_GetPBRep_CurveOn2SurfacesmySurface() const { return mySurface; }
    void _CSFDB_SetPBRep_CurveOn2SurfacesmySurface(const Handle(PGeom_Surface)& p) { mySurface = p; }
    Handle(PGeom_Surface) _CSFDB_GetPBRep_CurveOn2SurfacesmySurface2() const { return mySurface2; }
    void _CSFDB_SetPBRep_CurveOn2SurfacesmySurface2(const Handle(PGeom_Surface)& p) { mySurface2 = p; }
    const PTopLoc_Location& _CSFDB_GetPBRep_CurveOn2SurfacesmyLocation2() const { return myLocation2; }
    GeomAbs_Shape _CSFDB_GetPBRep_CurveOn2SurfacesmyContinuity() const { return myContinuity; }
    void _CSFDB_SetPBRep_CurveOn2SurfacesmyContinuity(const GeomAbs_Shape p) { myContinuity = p; }



  DEFINE_STANDARD_RTTI(PBRep_CurveOn2Surfaces)

protected:




private: 


Handle_PGeom_Surface mySurface;
Handle_PGeom_Surface mySurface2;
PTopLoc_Location myLocation2;
GeomAbs_Shape myContinuity;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
