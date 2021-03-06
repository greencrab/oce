// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Image_BilinearPixelInterpolation_HeaderFile
#define _Image_BilinearPixelInterpolation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Image_PixelInterpolation_HeaderFile
#include <Image_PixelInterpolation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Image_Image_HeaderFile
#include <Handle_Image_Image.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Image_DColorImage_HeaderFile
#include <Handle_Image_DColorImage.hxx>
#endif
#ifndef _Handle_Image_DIndexedImage_HeaderFile
#include <Handle_Image_DIndexedImage.hxx>
#endif
class Image_Image;
class Aspect_Pixel;
class Image_DColorImage;
class Aspect_ColorPixel;
class Image_DIndexedImage;
class Aspect_IndexPixel;


//! The class BilinearPixelInterpolation is used to compute a <br>
//!            SubPixel value on non integer Image coordinate <br>
//!          BilinearPixelInterpolation redefined a new method to compute <br>
//!	      a SubPixel value . <br>
//!	    The value is the bilinear interpolation of the <br>
//!	      four nearest Image Pixel. <br>
//!	    If V1, V2, V3, V4 is the value  and (X1,Y1) , (X2,Y2), <br>
//!              (X3,Y3), (X4,Y4) the coordinates of the four nearest <br>
//!		Image Pixel then first we solve : <br>
//!		V1 = a*X1 + b*Y1 + c*X1*Y1 + d <br>
//!		V2 = a*X2 + b*Y2 + c*X2*Y2 + d <br>
//!		V3 = a*X3 + b*Y3 + c*X3*Y3 + d <br>
//!		V1 = a*X4 + b*Y4 + c*X4*Y4 + d <br>
class Image_BilinearPixelInterpolation  : public Image_PixelInterpolation {
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

  //! Create a BilinearPixelInterpolation  object. <br>
  Standard_EXPORT   Image_BilinearPixelInterpolation();
  //! Redefined the method to compute SubPixel's value <br>
//!	      on non integer Image coordinate. <br>
//!	    LowerX,LowerY,UpperX,UpperY is the Image Min Max, it's used <br>
//!	      to check if the SubPixel coordinate FX,FY is outside of <br>
//!	      image. <br>
//!          Return True  if Interpolation Succes. <br>
//!	    Return False if the SubPixel is out from Image. <br>
  Standard_EXPORT   virtual  Standard_Boolean Interpolate(const Handle(Image_Image)& aImage,const Standard_Real FX,const Standard_Real FY,const Standard_Integer LowerX,const Standard_Integer LowerY,const Standard_Integer UpperX,const Standard_Integer UpperY,Aspect_Pixel& RetPixel) const;
  //! Compute SubPixel's value on non integer Image coordinate for <br>
//!	      DColorImage and ColorPixel. <br>
//!	    LowerX,LowerY,UpperX,UpperY is the Image Min Max, it's used <br>
//!	      to check if the SubPixel coordinate FX,FY is outside of <br>
//!	      image. <br>
//!          Return True  if Interpolation Succes. <br>
//!	    Return False if the SubPixel is out from Image. <br>
  Standard_EXPORT   virtual  Standard_Boolean Interpolate(const Handle(Image_DColorImage)& aImage,const Standard_Real FX,const Standard_Real FY,const Standard_Integer LowerX,const Standard_Integer LowerY,const Standard_Integer UpperX,const Standard_Integer UpperY,Aspect_ColorPixel& RetPixel) const;
  //! Compute SubPixel's value on non integer Image coordinate for <br>
//!	      DIndexedImage and IndexPixel. <br>
//!	    LowerX,LowerY,UpperX,UpperY is the Image Min Max, it's used <br>
//!	      to check if the SubPixel coordinate X,Y is outside of <br>
//!	      image. <br>
//!          Return True  if Interpolation Succes. <br>
//!	    Return False if the SubPixel is out from Image. <br>
  Standard_EXPORT   virtual  Standard_Boolean Interpolate(const Handle(Image_DIndexedImage)& aImage,const Standard_Real FX,const Standard_Real FY,const Standard_Integer LowerX,const Standard_Integer LowerY,const Standard_Integer UpperX,const Standard_Integer UpperY,Aspect_IndexPixel& RetPixel) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
