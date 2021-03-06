// File:	CSLib.cxx
// Created:	Mon Sep 9 11:19:10 1991
// Author:	Michel Chauvat
//		Modif JCV Decembre 1991 :  Ajout des Status
//              Modif JPI Octobre 1996 : Ajout des methodes DNNUV et DNNormal
//              Modif JPI Novembre 1996 : Ajout de la methode Normal pour les cas singuliers

#include <CSLib.ixx>

#include <gp.hxx>
#include <gp_Vec.hxx>
#include <PLib.hxx>
#include <Precision.hxx>
#include <TColgp_Array2OfVec.hxx>
#include <TColStd_Array2OfReal.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <math_FunctionRoots.hxx>
#include <CSLib_NormalPolyDef.hxx>


#define D1uD1vRatioIsNull   CSLib_D1uD1vRatioIsNull 
#define D1vD1uRatioIsNull   CSLib_D1vD1uRatioIsNull
#define D1uIsParallelD1v    CSLib_D1uIsParallelD1v
#define D1IsNull            CSLib_D1IsNull
#define D1uIsNull           CSLib_D1uIsNull
#define D1vIsNull           CSLib_D1vIsNull
#define Done                CSLib_Done

#define D1NuIsNull          CSLib_D1NuIsNull
#define D1NvIsNull          CSLib_D1NvIsNull
#define D1NuIsParallelD1Nv  CSLib_D1NuIsParallelD1Nv
#define D1NIsNull           CSLib_D1NIsNull
#define D1NuNvRatioIsNull   CSLib_D1NuNvRatioIsNull
#define D1NvNuRatioIsNull   CSLib_D1NvNuRatioIsNull
#define InfinityOfSolutions CSLib_InfinityOfSolutions
#define Defined             CSLib_Defined
#define Singular            CSLib_Singular

void CSLib::Normal (

const gp_Vec&        D1U, 
const gp_Vec&        D1V,
const Standard_Real        SinTol, 
CSLib_DerivativeStatus& Status, 
gp_Dir&              Normal
) {

// Fonction: Calcul de la normale a partir des tangentes en u et en v.

  Standard_Real D1UMag = D1U.SquareMagnitude(); 
  Standard_Real D1VMag = D1V.SquareMagnitude();
  gp_Vec D1UvD1V = D1U.Crossed(D1V);

  if (D1UMag <= gp::Resolution() && D1VMag <= gp::Resolution()) {
     Status = D1IsNull;
  }
  else if (D1UMag <= gp::Resolution())           Status = D1uIsNull;
  else if (D1VMag <= gp::Resolution())           Status = D1vIsNull;
//  else if ((D1VMag / D1UMag) <= RealEpsilon())   Status = D1vD1uRatioIsNull;
//  else if ((D1UMag / D1VMag) <= RealEpsilon())   Status = D1uD1vRatioIsNull;
  else  {
    Standard_Real Sin2 = 
    D1UvD1V.SquareMagnitude() / (D1UMag * D1VMag);
    
    if (Sin2 < (SinTol * SinTol))  { Status = D1uIsParallelD1v; }
    else { Normal = gp_Dir (D1UvD1V);   Status = Done; }
  }
}

void CSLib::Normal (

const gp_Vec&    D1U,
const gp_Vec&    D1V,
const gp_Vec&    D2U,
const gp_Vec&    D2V, 
const gp_Vec&    DUV,
const Standard_Real    SinTol,
Standard_Boolean&      Done,
CSLib_NormalStatus& Status,
gp_Dir&          Normal
) {

//  Calcul d'une normale approchee dans le cas d'une normale nulle.
//  On utilise le developpement limite de la normale a l'ordre 1:
//     N(u0+du,v0+dv) = N0 + dN/du(u0,v0) * du + dN/dv(u0,v0) * dv + epsilon
//  -> N ~ dN/du + dN/dv.



  gp_Vec D1Nu = D2U.Crossed (D1V);
  D1Nu.Add (D1U.Crossed (DUV));

  gp_Vec D1Nv = DUV.Crossed (D1V);
  D1Nv.Add (D1U.Crossed (D2V));

  Standard_Real LD1Nu = D1Nu.SquareMagnitude();
  Standard_Real LD1Nv = D1Nv.SquareMagnitude();


  if (LD1Nu <= RealEpsilon() && LD1Nv <= RealEpsilon())  { 
      Status = D1NIsNull;
      Done = Standard_False;
  }
  else if (LD1Nu < RealEpsilon()) {
      Status = D1NuIsNull;
      Done = Standard_True;
      Normal = gp_Dir (D1Nv);
  }
  else if (LD1Nv < RealEpsilon()) {
      Status = D1NvIsNull;
      Done = Standard_True;
      Normal = gp_Dir (D1Nu);
  }
  else if ((LD1Nv / LD1Nu) <= RealEpsilon()) { 
      Status = D1NvNuRatioIsNull;
      Done = Standard_False;
  }
  else if ((LD1Nu / LD1Nv) <= RealEpsilon()) { 
      Status = D1NuNvRatioIsNull; 
      Done = Standard_False;
  }
  else {
    gp_Vec D1NCross = D1Nu.Crossed (D1Nv);
    Standard_Real Sin2 = D1NCross.SquareMagnitude() / (LD1Nu * LD1Nv);

    if (Sin2 < (SinTol * SinTol))  { 
      Status = D1NuIsParallelD1Nv;
      Done = Standard_True;
      Normal = gp_Dir (D1Nu);
    }    
    else { 
      Status = InfinityOfSolutions;
      Done = Standard_False;
    }
  }

}
void CSLib::Normal (

const gp_Vec&        D1U, 
const gp_Vec&        D1V,
const Standard_Real        MagTol, 
CSLib_NormalStatus& Status, 
gp_Dir&              Normal
) {
// Fonction: Calcul de la normale a partir des tangentes en u et en v.

  Standard_Real D1UMag = D1U.Magnitude(); 
  Standard_Real D1VMag = D1V.Magnitude();
  gp_Vec D1UvD1V = D1U.Crossed(D1V);
  Standard_Real NMag =D1UvD1V .Magnitude();

  if (NMag <= MagTol || D1UMag <= MagTol || D1VMag <= MagTol ) {

     Status = Singular;
//     if (D1UMag <= MagTol || D1VMag <= MagTol && NMag > MagTol) MagTol = 2* NMag;
}
  else
     { Normal = gp_Dir (D1UvD1V);   Status = Defined; }
  

}
// Calcul du vecteur normal dans les cas singuliers
//
void CSLib::Normal(const Standard_Integer MaxOrder, 
                   const TColgp_Array2OfVec& DerNUV, 
                   const Standard_Real SinTol, 
                   const Standard_Real U,
                   const Standard_Real V,
                   const Standard_Real Umin,
                   const Standard_Real Umax,
                   const Standard_Real Vmin,
                   const Standard_Real Vmax,
                   CSLib_NormalStatus& Status,
                   gp_Dir& Normal, 
                   Standard_Integer& OrderU, 
                   Standard_Integer& OrderV)
{
//  Standard_Integer i,l,Order=-1;
  Standard_Integer i=0,Order=-1;
  Standard_Boolean Trouve=Standard_False;
//  Status = Singular;
  Standard_Real Norme;
  gp_Vec D;
  //Recherche de k0 tel que toutes des derivee de N=dS/du ^ dS/dv soient nulles
  //jusqu'a l'ordre k0-1
  while(!Trouve && Order < MaxOrder)
  {
    Order++;
    i=Order;
    while((i>=0) && (!Trouve))
    {
      Standard_Integer j=Order-i;
      D=DerNUV(i,j);
      Norme=D.Magnitude();
      Trouve=(Trouve ||(Norme>=SinTol));
      i--;
    }
  }
  OrderU=i+1;
  OrderV=Order-OrderU;
  //Vko premiere derivee de N non nulle : reference
  if(Trouve)
  {
     if(Order == 0) 
     {
         Status = Defined;
         Normal=D.Normalized();
     }
     else
     {
      gp_Vec Vk0;  
      Vk0=DerNUV(OrderU,OrderV);
      TColStd_Array1OfReal Ratio(0,Order);
      //Calcul des lambda i
      i=0;
      Standard_Boolean definie=Standard_False;
      while(i<=Order && !definie)
      {
         if(DerNUV(i,Order-i).Magnitude()<=SinTol) Ratio(i)=0;
         else
         {
            if(DerNUV(i,Order-i).IsParallel(Vk0,1e-6)) 
            {
//            Ratio(i) = DerNUV(i,Order-i).Magnitude() / Vk0.Magnitude();
//            if(DerNUV(i,Order-i).IsOpposite(Vk0,1e-6)) Ratio(i)=-Ratio(i);
               Standard_Real r = DerNUV(i,Order-i).Magnitude() / Vk0.Magnitude();
               if(DerNUV(i,Order-i).IsOpposite(Vk0,1e-6)) r=-r;
               Ratio(i)=r;
          
            }
            else
            {
	      definie=Standard_True;
//
            }
         }
         i++;
      }//fin while
      if(!definie)
      {  //Tout les lambda i existent
         Standard_Integer SP;
         Standard_Real inf,sup;
         inf=0.0-Standard_PI;
         sup=0.0+Standard_PI;
         Standard_Boolean FU,LU,FV,LV;

         //Creation du domaine de definition en fonction de la position
         //du point singulier (milieu, bord, coin).
         FU=(Abs(U-Umin) < Precision::PConfusion());
         LU=(Abs(U-Umax) < Precision::PConfusion() );
         FV=(Abs(V-Vmin) < Precision::PConfusion() );
         LV=(Abs(V-Vmax) < Precision::PConfusion() );
         if(LU)
         {
            inf=Standard_PI/2;
            sup=3*inf;
            if(LV){inf=Standard_PI;}
            if(FV){sup=Standard_PI;}
         }
         else if(FU)
         {
            sup=Standard_PI/2;
	    inf=-sup;
	    if(LV){sup=0;}
	    if(FV){inf=0;}
	 }
	 else if(LV)
	 {
	    inf=0.0-Standard_PI;
	    sup=0;
         }
	 else if(FV)
	 {
            inf=0;
	    sup=Standard_PI;
	 }
	 Standard_Boolean CS=0;
	 Standard_Real Vprec=0,Vsuiv = 0;
	 //Creation du polynome
	 CSLib_NormalPolyDef  Poly(Order,Ratio);
	 //Recherche des zeros de SAPS
	 math_FunctionRoots FindRoots(Poly,inf,sup,200,1e-5,
			           Precision::Confusion(),
                                   Precision::Confusion());
	 //Si il y a des zeros
	 if(FindRoots.IsDone())
	 {
	    if(FindRoots.NbSolutions()>0)
	    {
               //rangement par ordre crossant des racines de SAPS dans Sol0

               TColStd_Array1OfReal Sol0(0,FindRoots.NbSolutions()+1);
               Sol0(1)=FindRoots.Value(1);
               Standard_Integer n=1;
               while(n<=FindRoots.NbSolutions())
               {
	          Standard_Real ASOL=FindRoots.Value(n);
	          Standard_Integer i=n-1;
	          while((i>=1) && (Sol0(i)> ASOL))
                  {
	             Sol0(i+1)=Sol0(i);
	             i--;
	          }
	          Sol0(i+1)=ASOL;
	          n++;
               }//fin while(n
               //Ajouts des bornes du domaines 
               Sol0(0)=inf;
               Sol0(FindRoots.NbSolutions()+1)=sup;
               //Recherche des changement de signe de SAPS par comparaison de ses
               //valeurs a gauche et a droite de chaque racines
               Standard_Integer ifirst=0;
               for (i=0;i<=FindRoots.NbSolutions();i++) 
               {
                   if(Abs(Sol0(i+1)-Sol0(i)) > Precision::PConfusion())
                   {
                      Poly.Value((Sol0(i)+Sol0(i+1))/2.0,Vsuiv);
                      if(ifirst == 0) 
                      {
                         ifirst=i;
                         CS=Standard_False;
                         Vprec=Vsuiv;
                      }
                      else 
                      {
                         CS=(Vprec*Vsuiv)<0;
                         Vprec=Vsuiv;
                      }
                   }
               }
            }
            else
            {
               //SAPS n'a pas de racine donc forcement ne change pas de signe
               CS=Standard_False;
               Poly.Value(inf,Vsuiv);
            }
            //fin if(MFR.NbSolutions()>0)
         }//fin if(MFR>IsDone())
         if(CS)
         //Le polynome change de signe
            SP=0;
	 else if(Vsuiv>0)
	         //Le polynome est toujours positif
                 SP=1;
              else
                 //Le polynome est toujours negatif
                 SP=-1;
         if(SP==0)
             Status = InfinityOfSolutions;
         else
         {
            Status = Defined;
            Normal=SP*Vk0.Normalized();
         }
       }
       else 
       {
         Status = Defined;
         Normal=D.Normalized();
       }
    }
   }
}
//
// Calcul de la derivee du vecteur normal non norme
//
gp_Vec CSLib::DNNUV(const Standard_Integer Nu, 
		    const Standard_Integer Nv,
		    const TColgp_Array2OfVec& DerSurf)
{
  Standard_Integer i,j;
  gp_Vec D(0,0,0),VG,VD,PV;
  PLib::Binomial(Nu);
  PLib::Binomial(Nv);
  for(i=0;i<=Nu;i++)
    for(j=0;j<=Nv;j++){
      VG=DerSurf.Value(i+1,j);
      VD=DerSurf.Value(Nu-i,Nv+1-j);
      PV=VG^VD;
      D=D+PLib::Bin(Nu,i)*PLib::Bin(Nv,j)*PV;
    }
  return D;
}

//=======================================================================
//function : DNNUV
//purpose  : 
//=======================================================================

gp_Vec CSLib::DNNUV(const Standard_Integer Nu,
		    const Standard_Integer Nv,
		    const TColgp_Array2OfVec& DerSurf1,
		    const TColgp_Array2OfVec& DerSurf2) 
{
  Standard_Integer i,j;
  gp_Vec D(0,0,0),VG,VD,PV;
  PLib::Binomial(Nu);
  PLib::Binomial(Nv);
  for(i=0;i<=Nu;i++)
    for(j=0;j<=Nv;j++){
      VG=DerSurf1.Value(i+1,j);
      VD=DerSurf2.Value(Nu-i,Nv+1-j);
      PV=VG^VD;
      D=D+PLib::Bin(Nu,i)*PLib::Bin(Nv,j)*PV;
    }
  return D;
}

//
// CalCul des derivees du vecteur normal norme en fonction des derivees
// du vecteur normal non norme
//
gp_Vec CSLib::DNNormal(const Standard_Integer Nu,
		       const Standard_Integer Nv,
		       const TColgp_Array2OfVec& DerNUV,
		       const Standard_Integer Iduref,
		       const Standard_Integer Idvref)
{
Standard_Integer Kderiv;
Kderiv=Nu+Nv;
TColgp_Array2OfVec DerVecNor(0,Kderiv,0,Kderiv);
TColStd_Array2OfReal TabScal(0,Kderiv,0,Kderiv);
TColStd_Array2OfReal TabNorm(0,Kderiv,0,Kderiv);
Standard_Integer Ideriv,Jderiv,Mderiv,Pderiv,Qderiv;
Standard_Real Scal,Dnorm;
gp_Vec DerNor;
DerNor=(DerNUV.Value(Iduref,Idvref)).Normalized();
DerVecNor.SetValue(0,0,DerNor);
Dnorm=DerNUV.Value(Iduref,Idvref)*DerVecNor.Value(0,0);
TabNorm.SetValue(0,0,Dnorm);
TabScal.SetValue(0,0,0.);
PLib::Binomial(Kderiv + Iduref);
PLib::Binomial(Kderiv + Idvref);
for ( Mderiv = 1;Mderiv <= Kderiv; Mderiv++)
    for ( Pderiv = 0 ; Pderiv <= Mderiv ; Pderiv++)
        {
          Qderiv = Mderiv - Pderiv;
          if (Pderiv <= Nu && Qderiv <= Nv)
            {
//
//  Compute n . derivee(p,q) de n
          Scal = 0.;
          if ( Pderiv > Qderiv )
             { 
                   for (Jderiv=1 ; Jderiv <=Qderiv;Jderiv++)
                         Scal=Scal
                             -PLib::Bin(Qderiv,Jderiv)*
                             (DerVecNor.Value(0,Jderiv)*DerVecNor.Value(Pderiv,Qderiv-Jderiv));
                                
                   for (Jderiv=0 ; Jderiv < Qderiv ; Jderiv++)
                         Scal=Scal
                             -PLib::Bin(Qderiv,Jderiv)*
                             (DerVecNor.Value(Pderiv,Jderiv)*DerVecNor.Value(0,Qderiv-Jderiv));
                            
                   for (Ideriv=1 ; Ideriv < Pderiv;Ideriv++)
                       for (Jderiv =0 ; Jderiv <=Qderiv ; Jderiv++)
                           Scal=  Scal  
                                - PLib::Bin(Pderiv,Ideriv)
                                 *PLib::Bin(Qderiv,Jderiv)
                                 *(DerVecNor.Value(Ideriv,Jderiv)
                                 *DerVecNor.Value(Pderiv-Ideriv,Qderiv-Jderiv));
             }
           else
             {
                   for (Ideriv = 1 ; Ideriv <= Pderiv ; Ideriv++)
                         Scal = Scal - PLib::Bin(Pderiv,Ideriv)*
                                DerVecNor.Value(Ideriv,0)*DerVecNor.Value(Pderiv-Ideriv,Qderiv);
                   for (Ideriv = 0 ; Ideriv < Pderiv ; Ideriv++)
                         Scal = Scal - PLib::Bin(Pderiv,Ideriv)*
                                DerVecNor.Value(Ideriv,Qderiv)*DerVecNor.Value(Pderiv-Ideriv,0);  
 
                   for (Ideriv=0 ; Ideriv <= Pderiv;Ideriv++)
                      for (Jderiv =1 ; Jderiv <Qderiv ; Jderiv++)
                           Scal=  Scal  
                                - PLib::Bin(Pderiv,Ideriv)
                                 *PLib::Bin(Qderiv,Jderiv)
                                 *(DerVecNor.Value(Ideriv,Jderiv)
                                 *DerVecNor.Value(Pderiv-Ideriv,Qderiv-Jderiv));
             }  
          TabScal.SetValue(Pderiv,Qderiv,Scal/2.); 
//
//        Compute the derivative (n,p) of NUV Length
//
          Dnorm=(DerNUV.Value(Pderiv+Iduref,Qderiv+Idvref))*DerVecNor.Value(0,0);
             for (Jderiv = 0 ; Jderiv < Qderiv ; Jderiv++)
                 Dnorm = Dnorm - PLib::Bin(Qderiv+Idvref,Jderiv+Idvref) 
                                *TabNorm.Value(Pderiv,Jderiv)
                                *TabScal.Value(0,Qderiv-Jderiv);                     

             for (Ideriv = 0 ; Ideriv < Pderiv ; Ideriv++)
               for (Jderiv = 0 ; Jderiv <= Qderiv ; Jderiv++)
                 Dnorm = Dnorm - PLib::Bin(Pderiv+Iduref,Ideriv+Iduref)
                                *PLib::Bin(Qderiv+Idvref,Jderiv+Idvref) 
                                *TabNorm.Value(Ideriv,Jderiv)
                                *TabScal.Value(Pderiv-Ideriv,Qderiv-Jderiv);  
          TabNorm.SetValue(Pderiv,Qderiv,Dnorm);
//
//   Compute derivative (p,q) of n
//
          DerNor = DerNUV.Value(Pderiv+Iduref,Qderiv+Idvref);
              for (Jderiv = 1 ; Jderiv <= Qderiv ; Jderiv++)
                DerNor = DerNor - PLib::Bin(Pderiv+Iduref,Iduref)
                                 *PLib::Bin(Qderiv+Idvref,Jderiv+Idvref)
                                 *TabNorm.Value(0,Jderiv)
                                 *DerVecNor.Value(Pderiv,Qderiv-Jderiv);

              for (Ideriv = 1 ; Ideriv <= Pderiv ; Ideriv++)
                   for (Jderiv = 0 ; Jderiv <= Qderiv ; Jderiv++)
                       DerNor = DerNor - PLib::Bin(Pderiv+Iduref,Ideriv+Iduref)
                                        *PLib::Bin(Qderiv+Idvref,Jderiv+Idvref)
                                        *TabNorm.Value(Ideriv,Jderiv)
                                        *DerVecNor.Value(Pderiv-Ideriv,Qderiv-Jderiv); 
          DerNor = DerNor / PLib::Bin(Pderiv+Iduref,Iduref)
                          / PLib::Bin(Qderiv+Idvref,Idvref) 
                          / TabNorm.Value(0,0);
          DerVecNor.SetValue(Pderiv,Qderiv,DerNor);
         }                       
        }
    return DerVecNor.Value(Nu,Nv);
}

#undef D1uD1vRatioIsNull
#undef D1vD1uRatioIsNull
#undef D1uIsParallelD1v
#undef D1uIsNull
#undef D1vIsNull
#undef D1IsNull
#undef Done

#undef D1NuIsNull
#undef D1NvIsNull
#undef D1NuIsParallelD1Nv
#undef D1NIsNull
#undef D1NuNvRatioIsNull
#undef D1NvNuRatioIsNull
#undef InfinityOfSolutions
#undef Resolution
