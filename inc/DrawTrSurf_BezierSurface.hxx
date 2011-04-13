// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawTrSurf_BezierSurface_HeaderFile
#define _DrawTrSurf_BezierSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DrawTrSurf_BezierSurface_HeaderFile
#include <Handle_DrawTrSurf_BezierSurface.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Draw_Color_HeaderFile
#include <Draw_Color.hxx>
#endif
#ifndef _DrawTrSurf_Surface_HeaderFile
#include <DrawTrSurf_Surface.hxx>
#endif
#ifndef _Handle_Geom_BezierSurface_HeaderFile
#include <Handle_Geom_BezierSurface.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Draw_Drawable3D_HeaderFile
#include <Handle_Draw_Drawable3D.hxx>
#endif
class Geom_BezierSurface;
class Draw_Color;
class Draw_Display;
class Draw_Drawable3D;



class DrawTrSurf_BezierSurface : public DrawTrSurf_Surface {

public:

  
//!  creates a drawable Bezier curve from a Bezier curve of <br>
//!  package Geom. <br>
  Standard_EXPORT   DrawTrSurf_BezierSurface(const Handle(Geom_BezierSurface)& S);
  
  Standard_EXPORT   DrawTrSurf_BezierSurface(const Handle(Geom_BezierSurface)& S,const Standard_Integer NbUIsos,const Standard_Integer NbVIsos,const Draw_Color& BoundsColor,const Draw_Color& IsosColor,const Draw_Color& PolesColor,const Standard_Boolean ShowPoles,const Standard_Integer Discret,const Standard_Real Deflection,const Standard_Integer DrawMode);
  
  Standard_EXPORT     void DrawOn(Draw_Display& dis) const;
  
  Standard_EXPORT     void ShowPoles() ;
  
  Standard_EXPORT     void ClearPoles() ;
  
  Standard_EXPORT     void FindPole(const Standard_Real X,const Standard_Real Y,const Draw_Display& D,const Standard_Real Prec,Standard_Integer& UIndex,Standard_Integer& VIndex) const;
  
        void SetPolesColor(const Draw_Color& aColor) ;
  
        Draw_Color PolesColor() const;
  //! For variable copy. <br>
  Standard_EXPORT   virtual  Handle_Draw_Drawable3D Copy() const;




  DEFINE_STANDARD_RTTI(DrawTrSurf_BezierSurface)

protected:




private: 


Standard_Boolean drawPoles;
Draw_Color polesLook;


};


#include <DrawTrSurf_BezierSurface.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif