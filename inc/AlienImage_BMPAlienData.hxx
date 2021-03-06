// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AlienImage_BMPAlienData_HeaderFile
#define _AlienImage_BMPAlienData_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AlienImage_BMPAlienData_HeaderFile
#include <Handle_AlienImage_BMPAlienData.hxx>
#endif

#ifndef _Handle_Aspect_GenericColorMap_HeaderFile
#include <Handle_Aspect_GenericColorMap.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _AlienImage_AlienImageData_HeaderFile
#include <AlienImage_AlienImageData.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Image_Image_HeaderFile
#include <Handle_Image_Image.hxx>
#endif
#ifndef _Handle_Image_PseudoColorImage_HeaderFile
#include <Handle_Image_PseudoColorImage.hxx>
#endif
#ifndef _Handle_Image_ColorImage_HeaderFile
#include <Handle_Image_ColorImage.hxx>
#endif
class Aspect_GenericColorMap;
class Standard_OutOfRange;
class Standard_TypeMismatch;
class OSD_File;
class Image_Image;
class Image_PseudoColorImage;
class Image_ColorImage;



class AlienImage_BMPAlienData : public AlienImage_AlienImageData {

public:

  
  Standard_EXPORT   AlienImage_BMPAlienData();
  //! Frees memory allocated by BMPAlienData <br>
  Standard_EXPORT     void Clear() ;
~AlienImage_BMPAlienData()
{
  Clear();
}
  //! Read content of a  BMPAlienData object from a file <br>
//!          Returns True if file is a BMP file . <br>
  Standard_EXPORT     Standard_Boolean Read(OSD_File& afile) ;
  //! Write content of a  BMPAlienData object to a file <br>
  Standard_EXPORT     Standard_Boolean Write(OSD_File& afile) const;
  //! convert a BMPAlienData object to a Image object. <br>
  Standard_EXPORT     Handle_Image_Image ToImage() const;
  //! convert a Image object to a BMPAlienData object. <br>
  Standard_EXPORT     void FromImage(const Handle(Image_Image)& anImage) ;



  DEFINE_STANDARD_RTTI(AlienImage_BMPAlienData)

protected:




private: 

  //! convert a Image object to a GIFAlienData object. <br>
  Standard_EXPORT     void FromPseudoColorImage(const Handle(Image_PseudoColorImage)& anImage) ;
  //! convert a Image object to a GIFAlienData object. <br>
  Standard_EXPORT     void FromColorImage(const Handle(Image_ColorImage)& anImage) ;

Handle_Aspect_GenericColorMap myColorMap;
Standard_Address myData;
Standard_Integer myWidth;
Standard_Integer myHeight;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
