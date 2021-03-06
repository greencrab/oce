// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_RLine_HeaderFile
#define _IntPatch_RLine_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IntPatch_RLine_HeaderFile
#include <Handle_IntPatch_RLine.hxx>
#endif

#ifndef _Handle_Adaptor2d_HCurve2d_HeaderFile
#include <Handle_Adaptor2d_HCurve2d.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_IntSurf_LineOn2S_HeaderFile
#include <Handle_IntSurf_LineOn2S.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _IntPatch_SequenceOfPoint_HeaderFile
#include <IntPatch_SequenceOfPoint.hxx>
#endif
#ifndef _IntPatch_Line_HeaderFile
#include <IntPatch_Line.hxx>
#endif
#ifndef _IntSurf_TypeTrans_HeaderFile
#include <IntSurf_TypeTrans.hxx>
#endif
#ifndef _IntSurf_Situation_HeaderFile
#include <IntSurf_Situation.hxx>
#endif
class Adaptor2d_HCurve2d;
class IntSurf_LineOn2S;
class Standard_DomainError;
class Standard_OutOfRange;
class IntPatch_Point;
class IntSurf_PntOn2S;


//! Implementation of an intersection line described by a <br>
//!          restriction line on one of the surfaces. <br>
class IntPatch_RLine : public IntPatch_Line {

public:

  //! Creates a restriction as an intersection line <br>
//!          when the transitions are In or Out. <br>
  Standard_EXPORT   IntPatch_RLine(const Standard_Boolean Tang,const IntSurf_TypeTrans Trans1,const IntSurf_TypeTrans Trans2);
  //! Creates a restriction as an intersection line <br>
//!          when the transitions are Touch. <br>
  Standard_EXPORT   IntPatch_RLine(const Standard_Boolean Tang,const IntSurf_Situation Situ1,const IntSurf_Situation Situ2);
  //! Creates a restriction as an intersection line <br>
//!          when the transitions are Undecided. <br>
  Standard_EXPORT   IntPatch_RLine(const Standard_Boolean Tang);
  //! To add a vertex in the list. <br>
        void AddVertex(const IntPatch_Point& Pnt) ;
  //! Replaces the element of range Index in the list <br>
//!          of points. <br>
        void Replace(const Standard_Integer Index,const IntPatch_Point& Pnt) ;
  
        void SetFirstPoint(const Standard_Integer IndFirst) ;
  
        void SetLastPoint(const Standard_Integer IndLast) ;
  
        void Add(const Handle(IntSurf_LineOn2S)& L) ;
  //! Returns True if the intersection is on the domain of the <br>
//!          first patch. <br>
//!          Returns False if the intersection is on the domain of <br>
//!          the second patch. <br>
        Standard_Boolean IsArcOnS1() const;
  //! Returns True if the intersection is on the domain of the <br>
//!          first patch. <br>
//!          Returns False if the intersection is on the domain of <br>
//!          the second patch. <br>
        Standard_Boolean IsArcOnS2() const;
  
  Standard_EXPORT     void SetArcOnS1(const Handle(Adaptor2d_HCurve2d)& A) ;
  
  Standard_EXPORT     void SetArcOnS2(const Handle(Adaptor2d_HCurve2d)& A) ;
  
  Standard_EXPORT     void SetParamOnS1(const Standard_Real p1,const Standard_Real p2) ;
  
  Standard_EXPORT     void SetParamOnS2(Standard_Real& p1,Standard_Real& p2) ;
  //! Returns the concerned arc. <br>
       const Handle_Adaptor2d_HCurve2d& ArcOnS1() const;
  //! Returns the concerned arc. <br>
       const Handle_Adaptor2d_HCurve2d& ArcOnS2() const;
  
  Standard_EXPORT     void ParamOnS1(Standard_Real& p1,Standard_Real& p2) const;
  
  Standard_EXPORT     void ParamOnS2(Standard_Real& p1,Standard_Real& p2) const;
  //! Returns True if the line has a known First point. <br>
//!          This point is given by the method FirstPoint(). <br>
        Standard_Boolean HasFirstPoint() const;
  //! Returns True if the line has a known Last point. <br>
//!          This point is given by the method LastPoint(). <br>
        Standard_Boolean HasLastPoint() const;
  //! Returns the IntPoint corresponding to the FirstPoint. <br>
//!          An exception is raised when HasFirstPoint returns False. <br>
       const IntPatch_Point& FirstPoint() const;
  //! Returns the IntPoint corresponding to the LastPoint. <br>
//!          An exception is raised when HasLastPoint returns False. <br>
       const IntPatch_Point& LastPoint() const;
  
        Standard_Integer NbVertex() const;
  //! Returns the vertex of range Index on the line. <br>
       const IntPatch_Point& Vertex(const Standard_Integer Index) const;
  
        Standard_Boolean HasPolygon() const;
  //! Returns the number of intersection points. <br>
        Standard_Integer NbPnts() const;
  //! Returns the intersection point of range Index. <br>
       const IntSurf_PntOn2S& Point(const Standard_Integer Index) const;
  //! Set the Point of index <Index> in the LineOn2S <br>
  Standard_EXPORT     void SetPoint(const Standard_Integer Index,const IntPatch_Point& Pnt) ;
  //! Set the parameters of all the vertex on the line. <br>
//!          if a vertex is already in the line, <br>
//!             its parameter is modified <br>
//!          else a new point in the line is inserted. <br>
  Standard_EXPORT     void ComputeVertexParameters(const Standard_Real Tol) ;




  DEFINE_STANDARD_RTTI(IntPatch_RLine)

protected:




private: 


Handle_Adaptor2d_HCurve2d theArcOnS1;
Handle_Adaptor2d_HCurve2d theArcOnS2;
Standard_Boolean onS1;
Standard_Boolean onS2;
Standard_Real ParamInf1;
Standard_Real ParamSup1;
Standard_Real ParamInf2;
Standard_Real ParamSup2;
Handle_IntSurf_LineOn2S curv;
Standard_Boolean fipt;
Standard_Boolean lapt;
Standard_Integer indf;
Standard_Integer indl;
IntPatch_SequenceOfPoint svtx;


};


#include <IntPatch_RLine.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
