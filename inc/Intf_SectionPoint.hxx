// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Intf_SectionPoint_HeaderFile
#define _Intf_SectionPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Intf_PIType_HeaderFile
#include <Intf_PIType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class gp_Pnt;
class gp_Pnt2d;


//! Describes an intersection  point between  polygons  and <br>
//!          polyedra. <br>
class Intf_SectionPoint  {
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

  //! Returns the location of the SectionPoint. <br>
  Standard_EXPORT    const gp_Pnt& Pnt() const;
  //! Returns the cumulated  Parameter of the SectionPoint on the <br>
//!          first element. <br>
//! <br>
        Standard_Real ParamOnFirst() const;
  //! Returns the cumulated Parameter of the section point on the <br>
//!          second element. <br>
//! <br>
        Standard_Real ParamOnSecond() const;
  //! Returns the type of the section point on the first element. <br>
//! <br>
        Intf_PIType TypeOnFirst() const;
  //! Returns  the  type  of the  section  point  on  the  second <br>
//!          element. <br>
//! <br>
        Intf_PIType TypeOnSecond() const;
  
  Standard_EXPORT     void InfoFirst(Intf_PIType& Dim,Standard_Integer& Add1,Standard_Integer& Add2,Standard_Real& Param) const;
  //! Gives the   datas  about   the    first  argument of    the <br>
//!          Interference. <br>
  Standard_EXPORT     void InfoFirst(Intf_PIType& Dim,Standard_Integer& Addr,Standard_Real& Param) const;
  
  Standard_EXPORT     void InfoSecond(Intf_PIType& Dim,Standard_Integer& Add1,Standard_Integer& Add2,Standard_Real& Param) const;
  //! Gives the   datas  about   the    second  argument of    the <br>
//!          Interference. <br>
  Standard_EXPORT     void InfoSecond(Intf_PIType& Dim,Standard_Integer& Addr,Standard_Real& Param) const;
  //! Gives the incidence at  this  section point. The  incidence <br>
//!          between the two triangles is given by the cosine.  The best <br>
//!          incidence is 0. (PI/2).  The worst is 1. (null angle). <br>
  Standard_EXPORT     Standard_Real Incidence() const;
  //! Returns True if the two SectionPoint have the  same logical <br>
//!          informations. <br>
//! <br>
        Standard_Boolean IsEqual(const Intf_SectionPoint& Other) const;
      Standard_Boolean operator==(const Intf_SectionPoint& Other) const
{
  return IsEqual(Other);
}
  //! Returns True if the two SectionPoints are  on the  same edge <br>
//!          of the first or the second element. <br>
  Standard_EXPORT     Standard_Boolean IsOnSameEdge(const Intf_SectionPoint& Other) const;
  
  Standard_EXPORT   Intf_SectionPoint();
  //! Builds  a  SectionPoint    with the  respective  dimensions <br>
//!          (vertex edge or face)  of the concerned arguments and their <br>
//!          addresses in the Topological structure. <br>
  Standard_EXPORT   Intf_SectionPoint(const gp_Pnt& Where,const Intf_PIType DimeO,const Standard_Integer AddrO1,const Standard_Integer AddrO2,const Standard_Real ParamO,const Intf_PIType DimeT,const Standard_Integer AddrT1,const Standard_Integer AddrT2,const Standard_Real ParamT,const Standard_Real Incid);
  //! Builds  a  SectionPoint 2d   with the respective dimensions <br>
//!          (vertex or  edge)  of  the concerned arguments   and  their <br>
//!          addresses in the Topological structure. <br>
  Standard_EXPORT   Intf_SectionPoint(const gp_Pnt2d& Where,const Intf_PIType DimeO,const Standard_Integer AddrO1,const Standard_Real ParamO,const Intf_PIType DimeT,const Standard_Integer AddrT1,const Standard_Real ParamT,const Standard_Real Incid);
  //! Merges two SectionPoints. <br>
  Standard_EXPORT     void Merge(Intf_SectionPoint& Other) ;
  
  Standard_EXPORT     void Dump(const Standard_Integer Indent) const;





protected:





private:



gp_Pnt myPnt;
Intf_PIType DimenObje;
Standard_Integer IndexO1;
Standard_Integer IndexO2;
Standard_Real ParamObje;
Intf_PIType DimenTool;
Standard_Integer IndexT1;
Standard_Integer IndexT2;
Standard_Real ParamTool;
Standard_Real Incide;


};


#include <Intf_SectionPoint.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
