// File:	IntRes2d_Domain.cxx
// Created:	Wed Jun 10 15:06:44 1992
// Author:	Laurent BUCHARD
//		<lbr@sdsun2>

//  modified by Edward AGAPOV (eap)  Jun 7 2002 (occ 438)
//  --- limit infinite points and parameters in order to make
//  --- arithmetic operation on them safe 

#include <IntRes2d_Domain.ixx>
#include <Precision.hxx>

const Standard_Real infVal = Precision::Infinite();

//=======================================================================
//function : LimitInfinite
//purpose  : 
//=======================================================================

static inline Standard_Real LimitInfinite(const Standard_Real Val)
{
  return ( Abs(Val) > infVal ? (Val>0 ? infVal : -infVal) : Val );
}

//=======================================================================
//function : IntRes2d_Domain
//purpose  : 
//=======================================================================

IntRes2d_Domain::IntRes2d_Domain(): 
       status(0),
       first_param(0.0), last_param(0.0),
       first_tol(0.0), last_tol(0.0),
       first_point(0.0, 0.0), last_point(0.0, 0.0),
       periodfirst(0.0),
       periodlast(0.0) { } 


void IntRes2d_Domain::SetValues() {
  status=0;
  periodfirst=periodlast=0.0;
}

//=======================================================================
//function : IntRes2d_Domain
//purpose  : Creates a bounded Domain.
//=======================================================================

IntRes2d_Domain::IntRes2d_Domain(const gp_Pnt2d& Pnt1,
				 const Standard_Real Par1,
				 const Standard_Real Tol1,
				 const gp_Pnt2d& Pnt2,
				 const Standard_Real Par2,
				 const Standard_Real Tol2) {

  SetValues(Pnt1,Par1,Tol1,Pnt2,Par2,Tol2);
}

//=======================================================================
//function : SetValues
//purpose  : Sets the values for a bounded domain.
//=======================================================================

void IntRes2d_Domain::SetValues(const gp_Pnt2d& Pnt1,
				const Standard_Real Par1,
				const Standard_Real Tol1,
				const gp_Pnt2d& Pnt2,
				const Standard_Real Par2,
				const Standard_Real Tol2) {

  status = 3;
  periodfirst = periodlast = 0.0;

  first_param=LimitInfinite(Par1);
  first_point.SetCoord( LimitInfinite(Pnt1.X()), LimitInfinite(Pnt1.Y()) );
  first_tol=Tol1;

  last_param=LimitInfinite(Par2);
  last_point.SetCoord( LimitInfinite(Pnt2.X()), LimitInfinite(Pnt2.Y()) );
  last_tol=Tol2;

}



IntRes2d_Domain::IntRes2d_Domain(const gp_Pnt2d& Pnt,
				 const Standard_Real Par,
				 const Standard_Real Tol,
				 const Standard_Boolean First) :
       first_param(0.0), last_param(0.0),
       first_tol(0.0), last_tol(0.0),
       first_point(0.0, 0.0), last_point(0.0, 0.0)
{
  SetValues(Pnt,Par,Tol,First);
}

void IntRes2d_Domain::SetValues(const gp_Pnt2d& Pnt,
				const Standard_Real Par,
				const Standard_Real Tol,
				const Standard_Boolean First) {
  
  periodfirst=periodlast=0.0;
  if(First) {
    status=1;
    first_param=LimitInfinite(Par);
    first_point.SetCoord( LimitInfinite(Pnt.X()), LimitInfinite(Pnt.Y()) );
    first_tol=Tol;
  }
  else {
    status=2;
    last_param=LimitInfinite(Par);
    last_point.SetCoord( LimitInfinite(Pnt.X()), LimitInfinite(Pnt.Y()) );
    last_tol=Tol;
  }
}



