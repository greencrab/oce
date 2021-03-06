// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdSelect_TextProjector2d_HeaderFile
#define _StdSelect_TextProjector2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StdSelect_TextProjector2d_HeaderFile
#include <Handle_StdSelect_TextProjector2d.hxx>
#endif

#ifndef _Handle_V2d_View_HeaderFile
#include <Handle_V2d_View.hxx>
#endif
#ifndef _Select2D_Projector_HeaderFile
#include <Select2D_Projector.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class V2d_View;
class gp_Trsf2d;
class gp_Pnt2d;
class TCollection_ExtendedString;


//! A projector framework specific to texts in 2D views. <br>
//! For a string of text, an insertion point and a font, it <br>
//! calculates the minimum and maximum points of the text box in the view. <br>
class StdSelect_TextProjector2d : public Select2D_Projector {

public:

  //! Constructs a 2D text projector framework defined by the 2D view aView. <br>
  Standard_EXPORT   StdSelect_TextProjector2d(const Handle(V2d_View)& aView);
  //! Sets the view aView. <br>
        void Set(const Handle(V2d_View)& aView) ;
  //! Sets the transformation atrsf. <br>
//! This transformation is applied to the attachment point <br>
//! of the text, and takes the size and length of the text <br>
//! into account to give the upper right hand point of the text box. <br>
        void Set(const gp_Trsf2d& atrsf) ;
  //! applies the stored trsf to aPointIn to get aPointOut <br>
  Standard_EXPORT   virtual  void Convert(const gp_Pnt2d& aPointIn,gp_Pnt2d& aPointOut) const;
  //!XPos,YPos is the AttachPoint for the text.First, the stored Trsf is <br>
//!         applied to this point, then we get the size and length of text to <br>
//!         give the upper point <br>
  Standard_EXPORT   virtual  void Convert(const TCollection_ExtendedString& aText,const Standard_Real XPos,const Standard_Real YPos,gp_Pnt2d& MinPoint,gp_Pnt2d& MaxPoint,const Standard_Integer afont = -1) const;




  DEFINE_STANDARD_RTTI(StdSelect_TextProjector2d)

protected:




private: 


Handle_V2d_View myview;


};


#include <StdSelect_TextProjector2d.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
