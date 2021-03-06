// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccEnt_QualifiedLin_HeaderFile
#define _GccEnt_QualifiedLin_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _GccEnt_Position_HeaderFile
#include <GccEnt_Position.hxx>
#endif
#ifndef _gp_Lin2d_HeaderFile
#include <gp_Lin2d.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class gp_Lin2d;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(GccEnt_QualifiedLin);

//! Describes a qualified 2D line. <br>
//! A qualified 2D line is a line (gp_Lin2d line) with a <br>
//! qualifier which specifies whether the solution of a <br>
//! construction algorithm using the qualified line (as an argument): <br>
//! -   is 'enclosed' by the line, or <br>
//! -   is built so that both the line and it are external to one another, or <br>
//! -   is undefined (all solutions apply). <br>
//! Note: the interior of a line is defined as the left-hand <br>
//! side of the line in relation to its orientation (i.e. when <br>
//! moving from the start to the end of the curve). <br>
class GccEnt_QualifiedLin  {

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

  
//! Constructs a qualified line by assigning the qualifier <br>
//! Qualifier to the line Qualified. <br>
//! Qualifier may be: <br>
//! -   GccEnt_enclosed if the solution is enclosed by the line, or <br>
//! -   GccEnt_outside if both the solution and the line are external to one another, or <br>
//! -   GccEnt_unqualified if all solutions apply. <br>
//! Note : the interior of a line is defined as the left-hand <br>
//! side of the line in relation to its orientation. <br>
  Standard_EXPORT   GccEnt_QualifiedLin(const gp_Lin2d& Qualified,const GccEnt_Position Qualifier);
  //! Returns a 2D line to which the qualifier is assigned. <br>
  Standard_EXPORT     gp_Lin2d Qualified() const;
  
//! Returns the qualifier of this qualified line, if it is "enclosed" or <br>
//!   "outside", or <br>
//! -   GccEnt_noqualifier if it is unqualified. <br>
  Standard_EXPORT     GccEnt_Position Qualifier() const;
  //! Returns true if the solution is unqualified and false in <br>
//!          the other cases. <br>
  Standard_EXPORT     Standard_Boolean IsUnqualified() const;
  //! Returns true if the solution is Enclosed in the Lin2d and false in <br>
//!          the other cases. <br>
  Standard_EXPORT     Standard_Boolean IsEnclosed() const;
  //! Returns true if the solution is Outside the Lin2d and false in <br>
//!          the other cases. <br>
  Standard_EXPORT     Standard_Boolean IsOutside() const;
  GccEnt_QualifiedLin( )
{
  
}
    GccEnt_Position _CSFDB_GetGccEnt_QualifiedLinTheQualifier() const { return TheQualifier; }
    void _CSFDB_SetGccEnt_QualifiedLinTheQualifier(const GccEnt_Position p) { TheQualifier = p; }
    const gp_Lin2d& _CSFDB_GetGccEnt_QualifiedLinTheQualified() const { return TheQualified; }



protected:




private: 


GccEnt_Position TheQualifier;
gp_Lin2d TheQualified;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
