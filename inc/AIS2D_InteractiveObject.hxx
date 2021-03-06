// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS2D_InteractiveObject_HeaderFile
#define _AIS2D_InteractiveObject_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS2D_InteractiveObject_HeaderFile
#include <Handle_AIS2D_InteractiveObject.hxx>
#endif

#ifndef _Handle_AIS2D_InteractiveContext_HeaderFile
#include <Handle_AIS2D_InteractiveContext.hxx>
#endif
#ifndef _Handle_Prs2d_Drawer_HeaderFile
#include <Handle_Prs2d_Drawer.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _AIS2D_TypeOfDetection_HeaderFile
#include <AIS2D_TypeOfDetection.hxx>
#endif
#ifndef _AIS2D_DataMapOfPrimAspects_HeaderFile
#include <AIS2D_DataMapOfPrimAspects.hxx>
#endif
#ifndef _Handle_AIS2D_HSequenceOfPrimArchit_HeaderFile
#include <Handle_AIS2D_HSequenceOfPrimArchit.hxx>
#endif
#ifndef _Graphic2d_GraphicObject_HeaderFile
#include <Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Handle_Prs2d_AspectRoot_HeaderFile
#include <Handle_Prs2d_AspectRoot.hxx>
#endif
#ifndef _Handle_Graphic2d_Primitive_HeaderFile
#include <Handle_Graphic2d_Primitive.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Prs2d_AspectName_HeaderFile
#include <Prs2d_AspectName.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
#ifndef _Aspect_IFStream_HeaderFile
#include <Aspect_IFStream.hxx>
#endif
class AIS2D_InteractiveContext;
class Prs2d_Drawer;
class AIS2D_HSequenceOfPrimArchit;
class Prs2d_AspectRoot;
class Graphic2d_Primitive;


//! Class Interactive Object defines a class of objects <br>
//!          with display and selection services. <br>
//! Using visualization and selection machanisms, <br>
//! interactive objects are used to display datum, curves, <br>
//! shapes, markers, dimensions, etc. Interactive objects <br>
//! also provide links to the interactive context. <br>
class AIS2D_InteractiveObject : public Graphic2d_GraphicObject {

public:

  //! Initialize the Interactive Object <br>
  Standard_EXPORT   AIS2D_InteractiveObject();
  //! Returns the attributes settings <br>
        Handle_Prs2d_Drawer Attributes() const;
  //! Initializes the drawing tool <aDrawer> <br>
  Standard_EXPORT   virtual  void SetAttributes(const Handle(Prs2d_Drawer)& aDrawer) ;
  //! Clears settings provided by the drawing tool <aDrawer> <br>
  Standard_EXPORT   virtual  void UnsetAttributes() ;
  //! Sets the attributes from Aspect <anAspect> <br>
//!          to all primitives appropriate this Aspect. <br>
  Standard_EXPORT     void SetAspect(const Handle(Prs2d_AspectRoot)& anAspect) ;
  //! Sets the attributes from Aspect <anAspect> <br>
//!          to primitive <aPrimitive> <br>
//!          Method works only for objects are linked <br>
//!          with InteractiveContext <br>
  Standard_EXPORT     void SetAspect(const Handle(Prs2d_AspectRoot)& anAspect,const Handle(Graphic2d_Primitive)& aPrimitive) ;
  //! Returns Aspect for primitive <aPrimitive> <br>
//!          Method works only for objects are linked <br>
//!          with InteractiveContext <br>
  Standard_EXPORT     Handle_Prs2d_AspectRoot GetAspect(const Handle(Graphic2d_Primitive)& aPrimitive) const;
  //! Returns true if primitive <aPrimitive> <br>
//!          is linked with an aspect <br>
  Standard_EXPORT     Standard_Boolean HasAspect(const Handle(Graphic2d_Primitive)& aPrimitive) const;
  //! Indicates whether the Interactive Object has a pointer <br>
//!          to an interactive context. <br>
  Standard_EXPORT     Standard_Boolean HasInteractiveContext() const;
  //! Returns the context pointer to the interactive context. <br>
  Standard_EXPORT     Handle_AIS2D_InteractiveContext GetContext() const;
  //! Places a link to <aCnTx>. The drawer of AIS2D_InteractiveObject <br>
//!          is connected to the Default Drawer Of <aCntx>. <br>
//!          That Means that this method has to be redefined if <br>
//!          computations depend on drawer values. <br>
  Standard_EXPORT   virtual  void SetContext(const Handle(AIS2D_InteractiveContext)& aCntx) ;
  //! Indicates the display mode of the Interactive Object <br>
        Standard_Integer DisplayMode() const;
  //! Returns True if the Interactive Object has <br>
//!          a display mode setting. Otherwise, it is <br>
//!          displayed in Neutral Point. <br>
        Standard_Boolean HasDisplayMode() const;
  //! Allows to provide a setting <aMode> for an <br>
//!          Interactive Object's display mode. <br>
        void SetDisplayMode(const Standard_Integer aMode) ;
  //! Removes display mode settings from the Interactive object <br>
        void UnsetDisplayMode() ;
  //! Returns the default display mode. This method is to be <br>
//!          implemented when the main mode is not mode 0. <br>
      virtual  Standard_Integer DefaultDisplayMode() const;
  //! Returns true if the class of objects accepts the display mode <aMode> <br>
      virtual  Standard_Boolean AcceptDisplayMode(const Standard_Integer aMode) const;
  //! Returns the setting for highlight mode. <br>
        AIS2D_TypeOfDetection HighlightMode() const;
  //! Returns true if the Interactive Object is in highlight mode <br>
        Standard_Boolean HasHighlightMode() const;
  //! Allows to provide settings for highlight mode. <br>
        void SetHighlightMode(const AIS2D_TypeOfDetection aMode) ;
  //! Removes settings for highlight mode <br>
        void UnsetHighlightMode() ;
  //! Returns the default highlight mode <br>
      virtual  AIS2D_TypeOfDetection DefaultHighlightMode() const;
  //! Indicates the selection mode of the Interactive Object <br>
        Standard_Integer SelectionMode() const;
  //! Allows you to change the selection mode of an Interactive Object <br>
        Standard_Boolean HasSelectionMode() const;
  //! Allows to provide a setting <aMode> for an <br>
//!          Interactive Object's selection mode. <br>
        void SetSelectionMode(const Standard_Integer aMode) ;
  //! Removes settings for selection mode <br>
        void UnsetSelectionMode() ;
  //! Returns the default selection mode <br>
      virtual  Standard_Integer DefaultSelectionMode() const;
  
        Standard_Integer State() const;
  
        void SetState(const Standard_Integer aState) ;
  //!  Selects primitive  with  index( TOD_PRIMITIVE  mode  only  ) <br>
  Standard_EXPORT     void SelectPrimitive(const Standard_Integer anIndex,const Standard_Boolean append) ;
  
  Standard_EXPORT   virtual  void Save(Aspect_FStream& aFStream) const;
  
  Standard_EXPORT   virtual  void Retrieve(Aspect_IFStream& anIFStream) const;


friend class AIS2D_InteractiveContext;


  DEFINE_STANDARD_RTTI(AIS2D_InteractiveObject)

protected:


Handle_Prs2d_Drawer myDrawer;
AIS2D_TypeOfDetection myHighlightMode;


private: 

  
  Standard_EXPORT     Standard_Boolean PrimitiveExist(const Prs2d_AspectName aName) const;
  
  Standard_EXPORT     void AddDetectPrim(const Handle(Graphic2d_Primitive)& aPrim,const Standard_Integer anInd) ;
  
  Standard_EXPORT     void AddSelectPrim(const Handle(Graphic2d_Primitive)& aPrim,const Standard_Integer anInd) ;
  
  Standard_EXPORT     void RemoveSelectPrim(const Handle(Graphic2d_Primitive)& aPrim,const Standard_Integer anInd) ;
  
  Standard_EXPORT     void SetSelSeqPrim(const Handle(AIS2D_HSequenceOfPrimArchit)& aSeq) ;
  
  Standard_EXPORT     void ClearSeqDetPrim() ;
  
  Standard_EXPORT     void ClearSeqSelPrim() ;
  
  Standard_EXPORT     Handle_AIS2D_HSequenceOfPrimArchit GetDetectSeqPrim() const;
  
  Standard_EXPORT     Handle_AIS2D_HSequenceOfPrimArchit GetSelectedSeqPrim() const;

Handle_AIS2D_InteractiveContext myICTX;
Standard_Integer myDisplayMode;
Standard_Integer mySelectionMode;
AIS2D_DataMapOfPrimAspects myAspects;
Standard_Integer myState;
Handle_AIS2D_HSequenceOfPrimArchit myDetectedPrimSeq;
Handle_AIS2D_HSequenceOfPrimArchit mySelectedPrimSeq;


};


#include <AIS2D_InteractiveObject.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
