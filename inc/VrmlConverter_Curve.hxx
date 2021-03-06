// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _VrmlConverter_Curve_HeaderFile
#define _VrmlConverter_Curve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_VrmlConverter_Drawer_HeaderFile
#include <Handle_VrmlConverter_Drawer.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Adaptor3d_Curve;
class VrmlConverter_Drawer;


//! Curve - computes the presentation of objects to be <br>
//!          seen  as curves  (the  computation  will  be  made <br>
//!          with a constant  number  of  points),  converts this one <br>
//!          into  VRML  objects  and  writes (adds) them  into <br>
//!          anOStream.   All  requested   properties  of   the <br>
//!          representation are specify  in aDrawer  of  Drawer <br>
//!          class (VrmlConverter). <br>
//!          This kind of the presentation is converted into <br>
//!          IndexedLineSet ( VRML ). <br>
class VrmlConverter_Curve  {
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

  //! adds to the OStream the drawing of the curve aCurve. <br>
//!          The aspect is defined by LineAspect in aDrawer. <br>
//! <br>
  Standard_EXPORT   static  void Add(const Adaptor3d_Curve& aCurve,const Handle(VrmlConverter_Drawer)& aDrawer,Standard_OStream& anOStream) ;
  //! adds to the OStream the drawing of the curve aCurve. <br>
//!          The aspect is defined by LineAspect in aDrawer. <br>
//!          The drawing will be limited between the points of parameter <br>
//!          U1 and U2. <br>
  Standard_EXPORT   static  void Add(const Adaptor3d_Curve& aCurve,const Standard_Real U1,const Standard_Real U2,const Handle(VrmlConverter_Drawer)& aDrawer,Standard_OStream& anOStream) ;
  //! adds to the OStream the drawing of the curve aCurve. <br>
//!          The aspect is the current aspect. <br>
//!          The drawing will be limited between the points of parameter <br>
//!          U1 and U2. aNbPoints defines  number of points on  one interval. <br>
  Standard_EXPORT   static  void Add(const Adaptor3d_Curve& aCurve,const Standard_Real U1,const Standard_Real U2,Standard_OStream& anOStream,const Standard_Integer aNbPoints) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
