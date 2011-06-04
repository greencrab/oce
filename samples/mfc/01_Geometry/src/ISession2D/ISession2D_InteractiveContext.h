// File generated by CPPExt (Transient)
//
//                     Copyright (C) 1991,1995 by
//  
//                      MATRA DATAVISION, FRANCE
//  
// This software is furnished in accordance with the terms and conditions
// of the contract and with the inclusion of the above copyright notice.
// This software or any other copy thereof may not be provided or otherwise
// be made available to any other person. No title to an ownership of the
// software is hereby transferred.
//  
// At the termination of the contract, the software and all copies of this
// software must be deleted.
//
#ifndef _ISession2D_InteractiveContext_HeaderFile
#define _ISession2D_InteractiveContext_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>

#include <Handle_V2d_Viewer.hxx>
#include <Handle_PrsMgr_PresentationManager2d.hxx>
#include <Handle_SelectMgr_SelectionManager.hxx>
#include <Handle_StdSelect_ViewerSelector2d.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_SelectMgr_SelectableObject.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_V2d_View.hxx>
#include <Graphic2d_Buffer.hxx>

class V2d_Viewer;
class PrsMgr_PresentationManager2d;
class SelectMgr_SelectionManager;
#include <StdSelect_ViewerSelector2d.hxx>
class SelectMgr_SelectableObject;
class V2d_View;
#include "TColStd_MapOfTransient.hxx"
DEFINE_STANDARD_HANDLE(ISession2D_InteractiveContext,MMgt_TShared)
class ISession2D_InteractiveContext : public MMgt_TShared {

public:
	void EraseAll();

 // Methods PUBLIC
 // 
ISession2D_InteractiveContext();
ISession2D_InteractiveContext(const Handle(V2d_Viewer)& aViewer);
void Initialize(const Handle(V2d_Viewer)& aViewer) ;
void Display(const Handle(AIS_InteractiveObject)& anObject,const Standard_Boolean Redraw = Standard_True) ;
void Erase(const Handle(AIS_InteractiveObject)& anObject,const Standard_Boolean Redraw = Standard_True) ;
virtual  void Move(const Handle(V2d_View)& aView,const Standard_Integer x1,const Standard_Integer y1) ;
void Pick(const Handle(V2d_View)& aView,
          const Standard_Integer x1,
          const Standard_Integer y1);

void DisplayAreas() ;
void ClearAreas() ;

DEFINE_STANDARD_RTTI(ISession2D_InteractiveContext)

protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 
	TColStd_MapOfTransient myMapOfObject;

 // Methods PRIVATE
 // 


 // Fields PRIVATE
 //
Handle(V2d_Viewer) myViewer;
Handle_PrsMgr_PresentationManager2d myPrsmgr;
Handle_SelectMgr_SelectionManager mySelectionManager;
Handle_StdSelect_ViewerSelector2d mySelector;


// for dynamic selection 
Handle(Graphic2d_Buffer) aBuffer;


};


// other inline functions and methods (like "C++: function call" methods)
//


#endif