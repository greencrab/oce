// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_Zone_HeaderFile
#define _MAT_Zone_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MAT_Zone_HeaderFile
#include <Handle_MAT_Zone.hxx>
#endif

#ifndef _MAT_SequenceOfArc_HeaderFile
#include <MAT_SequenceOfArc.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_MAT_BasicElt_HeaderFile
#include <Handle_MAT_BasicElt.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_MAT_Arc_HeaderFile
#include <Handle_MAT_Arc.hxx>
#endif
#ifndef _Handle_MAT_Node_HeaderFile
#include <Handle_MAT_Node.hxx>
#endif
#ifndef _MAT_Side_HeaderFile
#include <MAT_Side.hxx>
#endif
class MAT_BasicElt;
class MAT_Arc;
class MAT_Node;



//!          Definition of Zone of Proximity of a BasicElt : <br>
//!          ---------------------------------------------- <br>
//!          A Zone of proximity is the set of the points which are <br>
//!          more near from the BasicElt than any other. <br>
//! <br>
class MAT_Zone : public MMgt_TShared {

public:

  
  Standard_EXPORT   MAT_Zone();
  //! Compute the frontier of the Zone of proximity. <br>
  Standard_EXPORT   MAT_Zone(const Handle(MAT_BasicElt)& aBasicElt);
  //! Compute the frontier of the Zone of proximity. <br>
  Standard_EXPORT     void Perform(const Handle(MAT_BasicElt)& aBasicElt) ;
  //! Return the number Of Arcs On the frontier of <me>. <br>
  Standard_EXPORT     Standard_Integer NumberOfArcs() const;
  //! Return the  Arc number <Index>  on the frontier. <br>
//!  of  <me>. <br>
  Standard_EXPORT     Handle_MAT_Arc ArcOnFrontier(const Standard_Integer Index) const;
  //! Return TRUE if <me> is not empty . <br>
  Standard_EXPORT     Standard_Boolean NoEmptyZone() const;
  //! Return TRUE if <me> is Limited. <br>
  Standard_EXPORT     Standard_Boolean Limited() const;




  DEFINE_STANDARD_RTTI(MAT_Zone)

protected:




private: 

  
  Standard_EXPORT     Handle_MAT_Node NodeForTurn(const Handle(MAT_Arc)& anArc,const Handle(MAT_BasicElt)& aBasicElt,const MAT_Side aSide) const;

MAT_SequenceOfArc frontier;
Standard_Boolean limited;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
