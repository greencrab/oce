// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccInt_BParab_HeaderFile
#define _GccInt_BParab_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GccInt_BParab_HeaderFile
#include <Handle_GccInt_BParab.hxx>
#endif

#ifndef _gp_Parab2d_HeaderFile
#include <gp_Parab2d.hxx>
#endif
#ifndef _GccInt_Bisec_HeaderFile
#include <GccInt_Bisec.hxx>
#endif
#ifndef _GccInt_IType_HeaderFile
#include <GccInt_IType.hxx>
#endif
class gp_Parab2d;


//! Describes a parabola as a bisecting curve between two <br>
//! 2D geometric objects (such as lines, circles or points). <br>
class GccInt_BParab : public GccInt_Bisec {

public:

  //! Constructs a bisecting curve whose geometry is the 2D parabola Parab. <br>
  Standard_EXPORT   GccInt_BParab(const gp_Parab2d& Parab);
  //! Returns a 2D parabola which is the geometry of this bisecting curve. <br>
  Standard_EXPORT   virtual  gp_Parab2d Parabola() const;
  //! Returns GccInt_Par, which is the type of any GccInt_BParab bisecting curve. <br>
  Standard_EXPORT     GccInt_IType ArcType() const;




  DEFINE_STANDARD_RTTI(GccInt_BParab)

protected:




private: 


gp_Parab2d par;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
