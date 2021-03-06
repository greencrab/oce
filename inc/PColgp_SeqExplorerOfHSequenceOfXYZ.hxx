// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_SeqExplorerOfHSequenceOfXYZ_HeaderFile
#define _PColgp_SeqExplorerOfHSequenceOfXYZ_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_PColgp_SeqNodeOfHSequenceOfXYZ_HeaderFile
#include <Handle_PColgp_SeqNodeOfHSequenceOfXYZ.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_PColgp_HSequenceOfXYZ_HeaderFile
#include <Handle_PColgp_HSequenceOfXYZ.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class PColgp_SeqNodeOfHSequenceOfXYZ;
class PColgp_HSequenceOfXYZ;
class Standard_NoSuchObject;
class Standard_OutOfRange;
class gp_XYZ;



class PColgp_SeqExplorerOfHSequenceOfXYZ  {
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

  
  Standard_EXPORT   PColgp_SeqExplorerOfHSequenceOfXYZ(const Handle(PColgp_HSequenceOfXYZ)& S);
  
  Standard_EXPORT     gp_XYZ Value(const Standard_Integer Index) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const gp_XYZ& T) ;
  
  Standard_EXPORT     Standard_Integer Location(const Standard_Integer N,const gp_XYZ& T,const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;
  
  Standard_EXPORT     Standard_Integer Location(const Standard_Integer N,const gp_XYZ& T) ;





protected:





private:



Handle_PColgp_SeqNodeOfHSequenceOfXYZ CurrentItem;
Standard_Integer CurrentIndex;
Handle_PColgp_HSequenceOfXYZ TheSequence;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
