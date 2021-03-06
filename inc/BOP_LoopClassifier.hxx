// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_LoopClassifier_HeaderFile
#define _BOP_LoopClassifier_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _Handle_BOP_Loop_HeaderFile
#include <Handle_BOP_Loop.hxx>
#endif
class BOP_Loop;



//!  Root class to classify Loops in order to build Areas <br>
class BOP_LoopClassifier  {
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

  
//! Destructor; <br>
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~BOP_LoopClassifier(){Delete() ; }
  
//! Returns the state of loop <L1> compared with loop <L2>. <br>
  Standard_EXPORT   virtual  TopAbs_State Compare(const Handle(BOP_Loop)& L1,const Handle(BOP_Loop)& L2)  = 0;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
