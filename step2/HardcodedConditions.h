#ifndef HardcodedConditions_h
#define HardcodedConditions_h

#include <iostream>
#include <vector>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH2.h>
#include <algorithm>

typedef std::map<std::string, TH2F*> SFmap;

class HardcodedConditions{
    
public:

  HardcodedConditions();
  HardcodedConditions( std::string Year );
  ~HardcodedConditions();

  float GetDeepJetRenorm2DSF_HTnj(float HT, int njets, std::string sampleType, std::string sysType );
  float GetCrossSectionEfficiency( TString inputFileName, std::string Year );
  float GetBTagWP( std::string Year, std::string tagger );

  TFile *tfile_HTNJ_SF;

  SFmap hscale_TTTX;
  SFmap hscale_TTNOBB;
  SFmap hscale_TTBB;
  SFmap hscale_TTNOBBHT500;
  SFmap hscale_TTBBHT500;
  SFmap hscale_ST;
  SFmap hscale_QCD;
  SFmap hscale_TTH;
  SFmap hscale_TTXY;
  SFmap hscale_EWK;
  SFmap   hscale_TTToHad0;
  SFmap   hscale_TTToHad700;
  SFmap   hscale_TTToHad1000;
  SFmap   hscale_TTToSemiLep0;
  SFmap   hscale_TTToSemiLep700;
  SFmap   hscale_TTToSemiLep1000;
  SFmap   hscale_TTToLNu0;
  SFmap   hscale_TTToLNu700;
  SFmap   hscale_TTToLNu1000; 
  SFmap hscale_X53RHM700; 
  SFmap hscale_X53RHM800;
  SFmap hscale_X53RHM900;
  SFmap hscale_X53RHM1000; 
  SFmap hscale_X53RHM1100;
  SFmap hscale_X53RHM1200;
  SFmap hscale_X53RHM1300;
  SFmap hscale_X53RHM1400;
  SFmap hscale_X53RHM1500;
  SFmap hscale_X53RHM1600;
  SFmap hscale_X53RHM600MH200;   
  SFmap hscale_X53RHM600MH400; 
  SFmap hscale_X53RHM700MH200; 
  SFmap hscale_X53RHM700MH400; 
  SFmap hscale_X53RHM800MH200; 
  SFmap hscale_X53RHM800MH400; 
  SFmap hscale_X53RHM800MH600; 
  SFmap hscale_X53RHM900MH200; 
  SFmap hscale_X53RHM900MH400; 
  SFmap hscale_X53RHM900MH600; 
  SFmap hscale_X53RHM1000MH200; 
  SFmap hscale_X53RHM1000MH400;
  SFmap hscale_X53RHM1000MH600;
  SFmap hscale_X53RHM1000MH800;
  SFmap hscale_X53RHM1100MH200;
  SFmap hscale_X53RHM1100MH400;
  SFmap hscale_X53RHM1100MH600;
  SFmap hscale_X53RHM1100MH800;
  SFmap hscale_X53RHM1200MH200;
  SFmap hscale_X53RHM1200MH400;
  SFmap hscale_X53RHM1200MH600;
  SFmap hscale_X53RHM1200MH800;
  SFmap hscale_X53RHM1200MH1000;
  SFmap hscale_X53RHM1500MH200;
  SFmap hscale_X53RHM1500MH400;
  SFmap hscale_X53RHM1500MH600;
  SFmap hscale_X53RHM1500MH800;
  SFmap hscale_X53RHM1500MH1000;
};

#endif
