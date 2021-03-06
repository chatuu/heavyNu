*********************************************************
*                                                       *
* This file was generated by HUWFUN.                    *
*                                                       *
*********************************************************
*
*     Ntuple Id:      400  
*     Ntuple Title:   Numu->Nue, All simulated events
*     Creation:       11/09/2015 06.23.01
*
*********************************************************
*
      LOGICAL         CHAIN
      CHARACTER*128   CFILE
      INTEGER         IDNEVT,NCHEVT,ICHEVT
      REAL            OBS(13)
*
      COMMON /PAWIDN/ IDNEVT,OBS
      COMMON /PAWCHN/ CHAIN, NCHEVT, ICHEVT
      COMMON /PAWCHC/ CFILE
*
*--   Ntuple Variable Declarations
*
      REAL XVS,YVS,ZVS,PxLS,PyLS,PzLS,PxHPChgS,PyHPChgS,PzHPChgS
     + ,PxHNChgS,PyHNChgS,PzHNChgS,PxHNeuS,PyHNeuS,PzHNeuS,ENuS,Q2S,W2S
     + ,NuS,XBjS,YBjS,PxFermi,PyFermi,PzFermi,EFermi,McPx(300),McPy(300)
     + ,McPz(300),McEnergy(300)
      INTEGER Run,Event,EvType,ParentID,LeadLepS,ntrkmc,mcid(300)
     + ,McParentNum(300),mcq(300)
*
      COMMON /PAWCR4/ Run,Event,EvType,XVS,YVS,ZVS,PxLS,PyLS,PzLS
     + ,PxHPChgS,PyHPChgS,PzHPChgS,PxHNChgS,PyHNChgS,PzHNChgS,PxHNeuS
     + ,PyHNeuS,PzHNeuS,ENuS,Q2S,W2S,NuS,XBjS,YBjS,PxFermi,PyFermi
     + ,PzFermi,EFermi,ParentID,LeadLepS,ntrkmc,mcid,McPx,McPy,McPz
     + ,McEnergy,McParentNum,mcq
