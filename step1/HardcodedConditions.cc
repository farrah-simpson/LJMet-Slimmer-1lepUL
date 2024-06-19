// -*- C++ -*-
//
// Helper class, provides jet tagging eff, scale factors, etc.
// 
// Inspired from BtagHardcodedConditions in LJMET
// 
// by
//
// Sinan Sagir, November 2019
//

#include <cmath>
#include <math.h>
#include <TMath.h>
#include "HardcodedConditions.h"
#include <unordered_map>

using namespace std;

HardcodedConditions::HardcodedConditions() {
}

HardcodedConditions::~HardcodedConditions() {
}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|           B TAGGING SCALE FACTOR SECTION            |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

void HardcodedConditions::GetBtaggingSF(double pt, double eta, double *btagsf, double *btagsfunc, std::string tagger, int jetHFlav, std::string year)
{
  // SF (and unc) applied on a jet-by-jet basis
  *btagsf   = 1.000;
  *btagsfunc = 0.000;
  if( year=="2016APV" ){
  	if      (jetHFlav==5) GetBtaggingSF2016APV(pt, eta, btagsf, btagsfunc, tagger);
  	else if (jetHFlav==4) GetCtaggingSF2016APV(pt, eta, btagsf, btagsfunc, tagger);
  	else                  GetLtaggingSF2016APV(pt, eta, btagsf, btagsfunc, tagger);
  	}
  else if(year=="2016"){
  	if      (jetHFlav==5) GetBtaggingSF2016(pt, eta, btagsf, btagsfunc, tagger);
  	else if (jetHFlav==4) GetCtaggingSF2016(pt, eta, btagsf, btagsfunc, tagger);
  	else                  GetLtaggingSF2016(pt, eta, btagsf, btagsfunc, tagger);
  	}
  else if(year=="2017"){
  	if      (jetHFlav==5) GetBtaggingSF2017(pt, eta, btagsf, btagsfunc, tagger);
  	else if (jetHFlav==4) GetCtaggingSF2017(pt, eta, btagsf, btagsfunc, tagger);
  	else                  GetLtaggingSF2017(pt, eta, btagsf, btagsfunc, tagger);
  	}
  else if(year=="2018"){
  	if      (jetHFlav==5) GetBtaggingSF2018(pt, eta, btagsf, btagsfunc, tagger);
  	else if (jetHFlav==4) GetCtaggingSF2018(pt, eta, btagsf, btagsfunc, tagger);
  	else                  GetLtaggingSF2018(pt, eta, btagsf, btagsfunc, tagger);
  	}
  else{ std::cerr << "Year " << year << " not coded into HardcodedConditions::GetBtaggingSF! Aborting ..." << std::endl; std::abort();}
} //end GetBtaggingSF

// not updated
void HardcodedConditions::GetBtaggingSF2016APV(double pt, double eta, double *btagsf, double *btagsfunc, std::string tagger){
	if( tagger == "DeepCSVMEDIUM"){ 
      *btagsf = 1.0;
      *btagsfunc = 0.0;
  }
  else if( tagger == "DeepJetMEDIUM") { 
    *btagsf = 1.0;
    *btagsfunc = 0.0;
  }
}

// not updated
void HardcodedConditions::GetBtaggingSF2016(double pt, double eta, double *btagsf, double *btagsfunc, std::string tagger){
	if( tagger == "DeepCSVMEDIUM"){ 
      *btagsf = 1.0;
      *btagsfunc = 0.0;
  }
  else if( tagger == "DeepJetMEDIUM") { 
    *btagsf = 1.0;
    *btagsfunc = 0.0;
  }
}

// not updated
void HardcodedConditions::GetCtaggingSF2016APV(double pt, double eta, double *btagsf, double *btagsfunc, std::string tagger){
	if( tagger == "DeepCSVMEDIUM"){ 
      *btagsf = 1.0;
      *btagsfunc = 0.0;
  }
  else if( tagger == "DeepJetMEDIUM") { 
    *btagsf = 1.0;
    *btagsfunc = 0.0;
  }
}

// not updated
void HardcodedConditions::GetCtaggingSF2016(double pt, double eta, double *btagsf, double *btagsfunc, std::string tagger){
	if( tagger == "DeepCSVMEDIUM"){ 
      *btagsf = 1.0;
      *btagsfunc = 0.0;
  }
  else if( tagger == "DeepJetMEDIUM") { 
    *btagsf = 1.0;
    *btagsfunc = 0.0;
  }
}


// not updated
void HardcodedConditions::GetLtaggingSF2016APV(double pt, double eta, double *btagsf, double *btagsfunc, std::string tagger){
	if( tagger == "DeepCSVMEDIUM"){ 
      *btagsf = 1.0;
      *btagsfunc = 0.0;
  }
  else if( tagger == "DeepJetMEDIUM") { 
    *btagsf = 1.0;
    *btagsfunc = 0.0;
  }
}

// not updated
void HardcodedConditions::GetLtaggingSF2016(double pt, double eta, double *btagsf, double *btagsfunc, std::string tagger){
	if( tagger == "DeepCSVMEDIUM"){ 
      *btagsf = 1.0;
      *btagsfunc = 0.0;
  }
  else if( tagger == "DeepJetMEDIUM") { 
    *btagsf = 1.0;
    *btagsfunc = 0.0;
  }
}

// not updated
void HardcodedConditions::GetBtaggingSF2017(double pt, double eta, double *btagsf, double *btagsfunc, std::string tagger){
	if( tagger == "DeepCSVMEDIUM"){ 
      *btagsf = 1.0;
      *btagsfunc = 0.0;
  }
  else if( tagger == "DeepJetMEDIUM") { 
    *btagsf = 1.0;
    *btagsfunc = 0.0;
  }
}

// not updated
void HardcodedConditions::GetCtaggingSF2017(double pt, double eta, double *btagsf, double *btagsfunc, std::string tagger){
	if( tagger == "DeepCSVMEDIUM"){ 
      *btagsf = 1.0;
      *btagsfunc = 0.0;
  }
  else if( tagger == "DeepJetMEDIUM") { 
    *btagsf = 1.0;
    *btagsfunc = 0.0;
  }
}

// not updated
void HardcodedConditions::GetLtaggingSF2017(double pt, double eta, double *btagsf, double *btagsfunc, std::string tagger){
	if( tagger == "DeepCSVMEDIUM"){ 
      *btagsf = 1.0;
      *btagsfunc = 0.0;
  }
  else if( tagger == "DeepJetMEDIUM") { 
    *btagsf = 1.0;
    *btagsfunc = 0.0;
  }
}

// not updated
void HardcodedConditions::GetBtaggingSF2018(double pt, double eta, double *btagsf, double *btagsfunc, std::string tagger){
	if( tagger == "DeepCSVMEDIUM"){ 
      *btagsf = 1.0;
      *btagsfunc = 0.0;
  }
  else if( tagger == "DeepJetMEDIUM") { 
    *btagsf = 1.0;
    *btagsfunc = 0.0;
  }
}

// not updated
void HardcodedConditions::GetCtaggingSF2018(double pt, double eta, double *btagsf, double *btagsfunc, std::string tagger){
	if( tagger == "DeepCSVMEDIUM"){ 
      *btagsf = 1.0;
      *btagsfunc = 0.0;
  }
  else if( tagger == "DeepJetMEDIUM") { 
    *btagsf = 1.0;
    *btagsfunc = 0.0;
  }
}

// not updated
void HardcodedConditions::GetLtaggingSF2018(double pt, double eta, double *btagsf, double *btagsfunc, std::string tagger){
	if( tagger == "DeepCSVMEDIUM"){ 
      *btagsf = 1.0;
      *btagsfunc = 0.0;
  }
  else if( tagger == "DeepJetMEDIUM") { 
    *btagsf = 1.0;
    *btagsfunc = 0.0;
  }
}


/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|            B TAGGING EFFICIENCY SECTION            |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

void HardcodedConditions::GetBtaggingEff(double pt, double *eff, std::string tagger, int jetHFlav, std::string year)
{
  // The main getter for GetBtaggingEff Efficiencies
  // Used in determining the number of jets to (un-)tag for jet-by-jet SF
  *eff = 1.000;
  if(year=="2016APV"){
  	if      (jetHFlav==5) GetBtaggingEff2016APV(pt, eff, tagger);
  	else if (jetHFlav==4) GetCtaggingEff2016APV(pt, eff, tagger);
  	else                  GetLtaggingEff2016APV(pt, eff, tagger);
  	}
  else if(year=="2016"){
  	if      (jetHFlav==5) GetBtaggingEff2016(pt, eff, tagger);
  	else if (jetHFlav==4) GetCtaggingEff2016(pt, eff, tagger);
  	else                  GetLtaggingEff2016(pt, eff, tagger);
  	}
  else if(year=="2017"){
  	if      (jetHFlav==5) GetBtaggingEff2017(pt, eff, tagger);
  	else if (jetHFlav==4) GetCtaggingEff2017(pt, eff, tagger);
  	else                  GetLtaggingEff2017(pt, eff, tagger);
  	}
  else if(year=="2018"){
  	if      (jetHFlav==5) GetBtaggingEff2018(pt, eff, tagger);
  	else if (jetHFlav==4) GetCtaggingEff2018(pt, eff, tagger);
  	else                  GetLtaggingEff2018(pt, eff, tagger);
  	}
  else{ std::cerr << "Year " << year << " not coded into HardcodedConditions::GetBtaggingEff! Aborting ..." << std::endl; std::abort();}
}//end GetBtaggingEff

// not updated
void HardcodedConditions::GetBtaggingEff2016APV(double pt, double *eff, std::string tagger){
  *eff = 1.0;
}

// not updated
void HardcodedConditions::GetBtaggingEff2016(double pt, double *eff, std::string tagger){
  *eff = 1.0;
}
void HardcodedConditions::GetCtaggingEff2016APV(double pt, double *eff, std::string tagger){
  *eff = 1.0;
}

void HardcodedConditions::GetCtaggingEff2016(double pt, double *eff, std::string tagger)
{
  *eff = 1.0;
}

void HardcodedConditions::GetLtaggingEff2016APV(double pt, double *eff, std::string tagger)
{
  *eff = 1.0;
}

void HardcodedConditions::GetLtaggingEff2016(double pt, double *eff, std::string tagger)
{
  *eff = 1.0;
}

void HardcodedConditions::GetBtaggingEff2017(double pt, double *eff, std::string tagger)
{
  *eff = 1.0;
}

void HardcodedConditions::GetCtaggingEff2017(double pt, double *eff, std::string tagger)
{
  *eff = 1.0;
}

void HardcodedConditions::GetLtaggingEff2017(double pt, double *eff, std::string tagger)
{
  *eff = 1.0;
}

void HardcodedConditions::GetBtaggingEff2018(double pt, double *eff, std::string tagger)
{
  *eff = 1.0;
}

void HardcodedConditions::GetCtaggingEff2018(double pt, double *eff, std::string tagger)
{
  *eff = 1.0;
}

void HardcodedConditions::GetLtaggingEff2018(double pt, double *eff, std::string tagger)
{
  *eff = 1.0;
}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|           HOT TAGGER SCALE FACTOR SECTION           |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

void HardcodedConditions::GetHOTtaggingSF(double pt, int njet, double *hotsf, double *hotstatunc, double *hotcspurunc, double *hotclosureunc, std::string year, bool isGenMatched, std::string workingpoint)
{
  //The main getter for GetHOTtaggingSF Scale Factors
  *hotsf   = 1.000;
  *hotstatunc = 0.000;
  *hotcspurunc = 0.000;
  *hotclosureunc = 0.000;
  if(isGenMatched){
  	if      (year=="2016APV") GetHOTtaggingSF2016APV(pt, njet, hotsf, hotstatunc, hotcspurunc, hotclosureunc, workingpoint);
    else if (year=="2016") GetHOTtaggingSF2016(pt, njet, hotsf, hotstatunc, hotcspurunc, hotclosureunc, workingpoint);
  	else if (year=="2017") GetHOTtaggingSF2017(pt, njet, hotsf, hotstatunc, hotcspurunc, hotclosureunc, workingpoint);
  	else if (year=="2018") GetHOTtaggingSF2018(pt, njet, hotsf, hotstatunc, hotcspurunc, hotclosureunc, workingpoint);
  	}
  else{
  	if      (year=="2016APV") GetHOTmistagSF2016APV(pt, njet, hotsf, hotstatunc, hotcspurunc, hotclosureunc, workingpoint);
  	else if (year=="2016") GetHOTmistagSF2016(pt, njet, hotsf, hotstatunc, hotcspurunc, hotclosureunc, workingpoint);
  	else if (year=="2017") GetHOTmistagSF2017(pt, njet, hotsf, hotstatunc, hotcspurunc, hotclosureunc, workingpoint);
  	else if (year=="2018") GetHOTmistagSF2018(pt, njet, hotsf, hotstatunc, hotcspurunc, hotclosureunc, workingpoint);
  	}
}//end GetHOTtaggingSF


void HardcodedConditions::GetHOTtaggingSF2016APV(double pt, int njet, double *hotsf, double *hotstatunc, double *hotcspurunc, double *hotclosureunc, std::string workingpoint)
{
	// VALUES from https://twiki.cern.ch/twiki/bin/viewauth/CMS/SUSYHOTGroup
	ptMins = {0,150,250,300,350,400,450,500,600};
	njetMins = {4,5,6,7,8,9,10};
	if (workingpoint=="1pfake"){
		*hotsf = 1.0234;
		*hotstatunc = 0.0193;
		hotCSpurUncs = {0.0356,0.0011,0.0015,0.002,0.0025,0.0051,0.0077,0.0037,0.0487};
		int bin = findBin(pt, ptMins);
		*hotcspurunc = hotCSpurUncs[bin];
		hotClosureUncs = {0.3032,0.0464,0.0461,0.0515,0.0808,0.1396,0.1744};
		bin = findBin(njet, njetMins);
		*hotclosureunc = hotClosureUncs[bin];
		}
	else if (workingpoint=="2pfake"){
		*hotsf = 1.0470;
		*hotstatunc = 0.0176;
		hotCSpurUncs = {0.0376,0.0007,0.0017,0.002,0.003,0.0042,0.0065,0.0033,0.046};
		int bin = findBin(pt, ptMins);
		*hotcspurunc = hotCSpurUncs[bin];
		hotClosureUncs = {0.0282,0.0282,0.084,0.0561,0.0619,0.0903,0.1053};
		bin = findBin(njet, njetMins);
		*hotclosureunc = hotClosureUncs[bin];
		}
	else if (workingpoint=="5pfake"){
		*hotsf = 1.0055;
		*hotstatunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotcspurunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotclosureunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		}
	else if (workingpoint=="10pfake"){
		*hotsf = 1.0093;
		*hotstatunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotcspurunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotclosureunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		}
	else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingSF2016! Aborting ..." << std::endl; std::abort();}
}

void HardcodedConditions::GetHOTtaggingSF2016(double pt, int njet, double *hotsf, double *hotstatunc, double *hotcspurunc, double *hotclosureunc, std::string workingpoint)
{
	// VALUES from https://twiki.cern.ch/twiki/bin/viewauth/CMS/SUSYHOTGroup
	ptMins = {0,150,250,300,350,400,450,500,600};
	njetMins = {4,5,6,7,8,9,10};
	if (workingpoint=="1pfake"){
		*hotsf = 1.0234;
		*hotstatunc = 0.0193;
		hotCSpurUncs = {0.0356,0.0011,0.0015,0.002,0.0025,0.0051,0.0077,0.0037,0.0487};
		int bin = findBin(pt, ptMins);
		*hotcspurunc = hotCSpurUncs[bin];
		hotClosureUncs = {0.3032,0.0464,0.0461,0.0515,0.0808,0.1396,0.1744};
		bin = findBin(njet, njetMins);
		*hotclosureunc = hotClosureUncs[bin];
		}
	else if (workingpoint=="2pfake"){
		*hotsf = 1.0470;
		*hotstatunc = 0.0176;
		hotCSpurUncs = {0.0376,0.0007,0.0017,0.002,0.003,0.0042,0.0065,0.0033,0.046};
		int bin = findBin(pt, ptMins);
		*hotcspurunc = hotCSpurUncs[bin];
		hotClosureUncs = {0.0282,0.0282,0.084,0.0561,0.0619,0.0903,0.1053};
		bin = findBin(njet, njetMins);
		*hotclosureunc = hotClosureUncs[bin];
		}
	else if (workingpoint=="5pfake"){
		*hotsf = 1.0055;
		*hotstatunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotcspurunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotclosureunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		}
	else if (workingpoint=="10pfake"){
		*hotsf = 1.0093;
		*hotstatunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotcspurunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotclosureunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		}
	else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingSF2016! Aborting ..." << std::endl; std::abort();}
}

void HardcodedConditions::GetHOTmistagSF2016APV(double pt, int njet, double *hotsf, double *hotstatunc, double *hotcspurunc, double *hotclosureunc, std::string workingpoint)
{
	// VALUES from https://twiki.cern.ch/twiki/bin/viewauth/CMS/SUSYHOTGroup
	ptMins = {0,150,250,300,350,400,450,500,600};
	njetMins = {4,5,6,7,8,9,10};
	if (workingpoint=="1pfake"){
		*hotsf = 0.9071;
		*hotstatunc = 0.0070;
		hotCSpurUncs = {0.0278,0.0311,0.0342,0.0376,0.0403,0.0405,0.0375,0.0439,0.0648};
		int bin = findBin(pt, ptMins);
		*hotcspurunc = hotCSpurUncs[bin];
		hotClosureUncs = {0.0531,0.0821,0.0154,0.0779,0.211,0.2536,0.2935};
		bin = findBin(njet, njetMins);
		*hotclosureunc = hotClosureUncs[bin];
		}
	else if (workingpoint=="2pfake"){
		*hotsf = 0.9126;
		*hotstatunc = 0.0053;
		hotCSpurUncs = {0.0168,0.0199,0.0231,0.0262,0.0286,0.0289,0.0268,0.0313,0.0467};
		int bin = findBin(pt, ptMins);
		*hotcspurunc = hotCSpurUncs[bin];
		hotClosureUncs = {0.0306,0.0555,0.0047,0.0758,0.1999,0.2308,0.3003};
		bin = findBin(njet, njetMins);
		*hotclosureunc = hotClosureUncs[bin];
		}
	else if (workingpoint=="5pfake"){
		*hotsf = 0.9298;
		*hotstatunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotcspurunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotclosureunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		}
	else if (workingpoint=="10pfake"){
		*hotsf = 0.9194;
		*hotstatunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotcspurunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotclosureunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		}
	else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTmistagSF2016! Aborting ..." << std::endl; std::abort();}
}

void HardcodedConditions::GetHOTmistagSF2016(double pt, int njet, double *hotsf, double *hotstatunc, double *hotcspurunc, double *hotclosureunc, std::string workingpoint)
{
	// VALUES from https://twiki.cern.ch/twiki/bin/viewauth/CMS/SUSYHOTGroup
	ptMins = {0,150,250,300,350,400,450,500,600};
	njetMins = {4,5,6,7,8,9,10};
	if (workingpoint=="1pfake"){
		*hotsf = 0.9071;
		*hotstatunc = 0.0070;
		hotCSpurUncs = {0.0278,0.0311,0.0342,0.0376,0.0403,0.0405,0.0375,0.0439,0.0648};
		int bin = findBin(pt, ptMins);
		*hotcspurunc = hotCSpurUncs[bin];
		hotClosureUncs = {0.0531,0.0821,0.0154,0.0779,0.211,0.2536,0.2935};
		bin = findBin(njet, njetMins);
		*hotclosureunc = hotClosureUncs[bin];
		}
	else if (workingpoint=="2pfake"){
		*hotsf = 0.9126;
		*hotstatunc = 0.0053;
		hotCSpurUncs = {0.0168,0.0199,0.0231,0.0262,0.0286,0.0289,0.0268,0.0313,0.0467};
		int bin = findBin(pt, ptMins);
		*hotcspurunc = hotCSpurUncs[bin];
		hotClosureUncs = {0.0306,0.0555,0.0047,0.0758,0.1999,0.2308,0.3003};
		bin = findBin(njet, njetMins);
		*hotclosureunc = hotClosureUncs[bin];
		}
	else if (workingpoint=="5pfake"){
		*hotsf = 0.9298;
		*hotstatunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotcspurunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotclosureunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		}
	else if (workingpoint=="10pfake"){
		*hotsf = 0.9194;
		*hotstatunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotcspurunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotclosureunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		}
	else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTmistagSF2016! Aborting ..." << std::endl; std::abort();}
}

void HardcodedConditions::GetHOTtaggingSF2017(double pt, int njet, double *hotsf, double *hotstatunc, double *hotcspurunc, double *hotclosureunc, std::string workingpoint)
{
	// VALUES from https://twiki.cern.ch/twiki/bin/viewauth/CMS/SUSYHOTGroup
	ptMins = {0,150,250,300,350,400,450,500,600};
	njetMins = {4,5,6,7,8,9,10};
	if (workingpoint=="1pfake"){
		*hotsf = 0.9570;
		*hotstatunc = 0.0237;
		hotCSpurUncs = {0.0825,0.0256,0.0276,0.0075,0.0244,0.0265,0.0343,0.0652,0.0095};
		int bin = findBin(pt, ptMins);
		*hotcspurunc = hotCSpurUncs[bin];
		hotClosureUncs = {0.0412,0.0412,0.0865,0.082,0.0375,0.1117,0.0808};
		bin = findBin(njet, njetMins);
		*hotclosureunc = hotClosureUncs[bin];
		}
	else if (workingpoint=="2pfake"){
		*hotsf = 0.9604;
		*hotstatunc = 0.0219;
		hotCSpurUncs = {0.0463,0.026,0.0208,0.0104,0.0247,0.0253,0.0328,0.0486,0.0036};
		int bin = findBin(pt, ptMins);
		*hotcspurunc = hotCSpurUncs[bin];
		hotClosureUncs = {0.0558,0.0558,0.0322,0.0203,0.0548,0.0403,0.0924};
		bin = findBin(njet, njetMins);
		*hotclosureunc = hotClosureUncs[bin];
		}
	else if (workingpoint=="5pfake"){
		*hotsf = 0.9874;
		*hotstatunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotcspurunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotclosureunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		}
	else if (workingpoint=="10pfake"){
		*hotsf = 1.0067;
		*hotstatunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotcspurunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotclosureunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		}
	else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingSF2017! Aborting ..." << std::endl; std::abort();}
}

void HardcodedConditions::GetHOTmistagSF2017(double pt, int njet, double *hotsf, double *hotstatunc, double *hotcspurunc, double *hotclosureunc, std::string workingpoint)
{
	// VALUES from https://twiki.cern.ch/twiki/bin/viewauth/CMS/SUSYHOTGroup
	ptMins = {0,150,250,300,350,400,450,500,600};
	njetMins = {4,5,6,7,8,9,10};
	if (workingpoint=="1pfake"){
		*hotsf = 0.9921;
		*hotstatunc = 0.0099;
		hotCSpurUncs = {0.0303,0.0367,0.0406,0.0431,0.0499,0.0548,0.0623,0.0594,0.0571};
		int bin = findBin(pt, ptMins);
		*hotcspurunc = hotCSpurUncs[bin];
		hotClosureUncs = {0.0369,0.0377,0.0384,0.0986,0.1768,0.2546,0.257};
		bin = findBin(njet, njetMins);
		*hotclosureunc = hotClosureUncs[bin];
		}
	else if (workingpoint=="2pfake"){
		*hotsf = 1.0140;
		*hotstatunc = 0.0074;
		hotCSpurUncs = {0.0189,0.0236,0.0276,0.0309,0.0355,0.0396,0.0459,0.0448,0.0427};
		int bin = findBin(pt, ptMins);
		*hotcspurunc = hotCSpurUncs[bin];
		hotClosureUncs = {0.0875,0.0309,0.064,0.1179,0.1828,0.2453,0.2146};
		bin = findBin(njet, njetMins);
		*hotclosureunc = hotClosureUncs[bin];
		}
	else if (workingpoint=="5pfake"){
		*hotsf = 1.0119;
		*hotstatunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotcspurunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotclosureunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		}
	else if (workingpoint=="10pfake"){
		*hotsf = 1.0012;
		*hotstatunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotcspurunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotclosureunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		}
	else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTmistagSF2017! Aborting ..." << std::endl; std::abort();}
}

void HardcodedConditions::GetHOTtaggingSF2018(double pt, int njet, double *hotsf, double *hotstatunc, double *hotcspurunc, double *hotclosureunc, std::string workingpoint)
{
	// VALUES from https://twiki.cern.ch/twiki/bin/viewauth/CMS/SUSYHOTGroup
	ptMins = {0,150,250,300,350,400,450,500,600};
	njetMins = {4,5,6,7,8,9,10};
	if (workingpoint=="1pfake"){
		*hotsf = 0.9359;
		*hotstatunc = 0.0239;
		hotCSpurUncs = {0.0641,0.1004,0.0416,0.0583,0.0695,0.0457,0.0255,0.0553,0.03};
		int bin = findBin(pt, ptMins);
		*hotcspurunc = hotCSpurUncs[bin];
		hotClosureUncs = {0.0693,0.0693,0.1077,0.1884,0.1159,0.2002,0.0862};
		bin = findBin(njet, njetMins);
		*hotclosureunc = hotClosureUncs[bin];
		}
	else if (workingpoint=="2pfake"){
		*hotsf = 0.9483;
		*hotstatunc = 0.0222;
		hotCSpurUncs = {0.0644,0.0445,0.0437,0.0466,0.0694,0.0415,0.0269,0.0544,0.0133};
		int bin = findBin(pt, ptMins);
		*hotcspurunc = hotCSpurUncs[bin];
		hotClosureUncs = {0.0342,0.0342,0.0356,0.0222,0.1118,0.0935,0.1934};
		bin = findBin(njet, njetMins);
		*hotclosureunc = hotClosureUncs[bin];
		}
	else if (workingpoint=="5pfake"){
		*hotsf = 0.9769;
		*hotstatunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotcspurunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotclosureunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		}
	else if (workingpoint=="10pfake"){
		*hotsf = 0.9922;
		*hotstatunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotcspurunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotclosureunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		}
	else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingSF2018! Aborting ..." << std::endl; std::abort();}
}

void HardcodedConditions::GetHOTmistagSF2018(double pt, int njet, double *hotsf, double *hotstatunc, double *hotcspurunc, double *hotclosureunc, std::string workingpoint)
{
	// VALUES from https://twiki.cern.ch/twiki/bin/viewauth/CMS/SUSYHOTGroup
	ptMins = {0,150,250,300,350,400,450,500,600};
	njetMins = {4,5,6,7,8,9,10};
	if (workingpoint=="1pfake"){
		*hotsf = 0.9036;
		*hotstatunc = 0.0128;
		hotCSpurUncs = {0.0544,0.0523,0.0568,0.0608,0.0667,0.0769,0.0784,0.0732,0.0714};
		int bin = findBin(pt, ptMins);
		*hotcspurunc = hotCSpurUncs[bin];
		hotClosureUncs = {0.0774,0.0179,0.0762,0.1097,0.254,0.3018,0.4417};
		bin = findBin(njet, njetMins);
		*hotclosureunc = hotClosureUncs[bin];
		}
	else if (workingpoint=="2pfake"){
		*hotsf = 0.9532;
		*hotstatunc = 0.0096;
		hotCSpurUncs = {0.032,0.0348,0.0413,0.0439,0.0486,0.0569,0.0586,0.0553,0.0543};
		int bin = findBin(pt, ptMins);
		*hotcspurunc = hotCSpurUncs[bin];
		hotClosureUncs = {0.111,0.0466,0.1185,0.1579,0.3102,0.3314,0.4543};
		bin = findBin(njet, njetMins);
		*hotclosureunc = hotClosureUncs[bin];
		}
	else if (workingpoint=="5pfake"){
		*hotsf = 0.9753;
		*hotstatunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotcspurunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotclosureunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		}
	else if (workingpoint=="10pfake"){
		*hotsf = 0.9703;
		*hotstatunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotcspurunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		*hotclosureunc = 0.0; //NOT PROVIDED in TWIKI, NOV 2019
		}
	else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTmistagSF2018! Aborting ..." << std::endl; std::abort();}
}


/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|            HOT TAGGER EFFICIENCY SECTION            |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

void HardcodedConditions::GetHOTtaggingEff(double pt, double *eff, std::string year, std::string sample, bool isGenMatched, std::string workingpoint, int massIndex)
//TO BE UPDATED FOR UL
{
  //The main getter for GetHOTtaggingEff Efficiencies
  *eff = 1.000;
  if(isGenMatched){
    if      (year=="2016APV") GetHOTtaggingEff2016APV(pt, eff, sample, workingpoint, massIndex);
    else if (year=="2016") GetHOTtaggingEff2016(pt, eff, sample, workingpoint, massIndex);
    else if (year=="2017") GetHOTtaggingEff2017(pt, eff, sample, workingpoint, massIndex);
    else if (year=="2018") GetHOTtaggingEff2018(pt, eff, sample, workingpoint, massIndex);
  }
  else{
    if      (year=="2016APV") GetHOTmistagEff2016APV(pt, eff, sample, workingpoint, massIndex);
    else if (year=="2016") GetHOTmistagEff2016(pt, eff, sample, workingpoint, massIndex);
    else if (year=="2017") GetHOTmistagEff2017(pt, eff, sample, workingpoint, massIndex);
    else if (year=="2018") GetHOTmistagEff2018(pt, eff, sample, workingpoint, massIndex);
  }
}//end GetHOTtaggingEff

void HardcodedConditions::GetHOTtaggingEff2016APV(double pt, double *eff, std::string sample, std::string workingpoint, int massIndex)
{
	if(sample=="singletop"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.205348668416,0.314370717634,0.409574468085,0.44616639478,0.499124343257,0.472885032538,0.375634517766};
		hotEffs2p = {0.33733459885,0.435088351965,0.522606382979,0.551386623165,0.583187390543,0.58568329718,0.472081218274};
		hotEffs5p = {0.52297470828,0.592679408583,0.65469858156,0.677814029364,0.709281961471,0.720173535792,0.583756345178};
		hotEffs10p= {0.664787002401,0.717634331049,0.754875886525,0.783849918434,0.791593695271,0.798264642082,0.654822335025};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="TTVV"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.305842391304,0.399267399267,0.477281055332,0.493034055728,0.537331701346,0.531803542673,0.418008784773};
		hotEffs2p = {0.464266304348,0.535256410256,0.587761084646,0.609907120743,0.645042839657,0.625603864734,0.513909224012};
		hotEffs5p = {0.650815217391,0.6903998779,0.725357273727,0.731682146543,0.74949000408,0.739935587762,0.635431918009};
		hotEffs10p= {0.768614130435,0.791361416361,0.813484792964,0.818885448916,0.825785393717,0.815217391304,0.714494875549};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="TTTX"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.306924101198,0.39515630792,0.47762962963,0.52101910828,0.53066850448,0.537334263782,0.394946808511};
		hotEffs2p = {0.466932978251,0.531199802298,0.59762962963,0.635668789809,0.644383184011,0.630146545708,0.496010638298};
		hotEffs5p = {0.648024855748,0.684047942667,0.733037037037,0.750318471338,0.762232942798,0.738311235171,0.644946808511};
		hotEffs10p= {0.770972037284,0.785617200049,0.815111111111,0.832696390658,0.840799448656,0.813677599442,0.716755319149};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttbarHT500Njet9"){
		ptMins = {0,150,250,300,350,400,450,500,550,600};
		hotEffs1p = {0.407909294843,0.487360654607,0.554943124203,0.585792903693,0.607100158595,0.624351331646,0.610264067903,0.570180155956,0.529164477141,0.417211703959};
		hotEffs2p = {0.568257255093,0.618534948399,0.665471923536,0.685199131064,0.698426253507,0.708109962688,0.696007544797,0.66415703146,0.621650026274,0.499139414802};
		hotEffs5p = {0.736228265173,0.755602546717,0.781532684758,0.791745112238,0.799609613273,0.804949178711,0.792675259352,0.767410594246,0.723068838676,0.618244406196};
		hotEffs10p= {0.834972644315,0.840545199623,0.854462214994,0.860637219406,0.867268512871,0.87095252391,0.857041810751,0.837859639688,0.800840777719,0.702925989673};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttbar"){
		ptMins = {0,150,250,300,350,400,450,500,550,600};
		hotEffs1p = {0.252959824309,0.361397414942,0.459087366036,0.504119254456,0.534357717034,0.550922369278,0.535451420581,0.492177755604,0.438544880534,0.298526640397};
		hotEffs2p = {0.39900220362,0.493794233602,0.574189819563,0.608677624155,0.631207830733,0.641467233281,0.624997572486,0.58401339938,0.523498600847,0.380589343841};
		hotEffs5p = {0.588466684642,0.652158801147,0.707418016666,0.730327047958,0.745084736246,0.749944084098,0.732041248325,0.69227753822,0.632991318074,0.48338187425};
		hotEffs10p= {0.721765531851,0.763493052893,0.801389053122,0.815564800087,0.823962905082,0.823869769432,0.80799331948,0.771996721428,0.718160292746,0.574610244989};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttVjets"){
		ptMins = {0,150,250,300,350,400,450,500,550,600};
		hotEffs1p = {0.25058416855,0.337887212073,0.411016797393,0.443887827299,0.467403702729,0.474528168015,0.454567022539,0.411171171171,0.368152866242,0.247029393371};
		hotEffs2p = {0.395882818686,0.471008737093,0.528383653881,0.553943087332,0.570150039484,0.56903646942,0.539264531435,0.495135135135,0.452229299363,0.330206378987};
		hotEffs5p = {0.582893999961,0.633783425999,0.669388632212,0.683313536126,0.691936474511,0.690506598553,0.664294187426,0.607207207207,0.579617834395,0.430268918074};
		hotEffs10p= {0.715350597686,0.747603918454,0.769958096057,0.777668749677,0.780994998684,0.78288633461,0.749466192171,0.707747747748,0.675796178344,0.522826766729};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttHToNonbb"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.283254772173,0.370313194136,0.441448382126,0.485894673548,0.5044754744,0.51778614773,0.402069297401};
		hotEffs2p = {0.438354561562,0.511728120835,0.561922187982,0.595279851681,0.607948442535,0.61581920904,0.491578440808};
		hotEffs5p = {0.629559054592,0.672112394491,0.70531587057,0.721250688981,0.727980665951,0.726197949362,0.615736284889};
		hotEffs10p= {0.756560692675,0.781452687694,0.800783256292,0.809640727564,0.808628714644,0.80989746809,0.700433108758};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttHTobb"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.306951814618,0.400615427169,0.481797844214,0.522922404017,0.541345583877,0.54735152488,0.417312661499};
		hotEffs2p = {0.468254179889,0.544082564049,0.607585926378,0.636886440953,0.652934202727,0.639200998752,0.502153316107};
		hotEffs5p = {0.662009013093,0.708830342634,0.748525523693,0.759274258869,0.766597510373,0.752452291778,0.617571059432};
		hotEffs10p= {0.786299032026,0.81291705563,0.833384177344,0.84318807711,0.838470657973,0.820581416087,0.699827734711};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="tttt"){
		ptMins = {0,150,250,300,350,400,450,500,550,600};
		hotEffs1p = {0.311329828161,0.390131583914,0.447922957643,0.479768786127,0.503408790045,0.50556497774,0.495245245245,0.459487179487,0.408713227038,0.294583883752};
		hotEffs2p = {0.462714798666,0.528502298755,0.5714845344,0.594583600942,0.609445326979,0.607536569854,0.591257924591,0.557307692308,0.505501908826,0.386393659181};
		hotEffs5p = {0.646111182354,0.686146320104,0.71145025708,0.72575465639,0.731135822081,0.725991096036,0.708375041708,0.674871794872,0.632158095666,0.503302509908};
		hotEffs10p= {0.763352782765,0.788031374799,0.80355831225,0.811025476343,0.811854646545,0.807504769981,0.787287287287,0.762564102564,0.719514933753,0.594671950683};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
        else if(sample=="x53x53H" or sample=="x53x53"){
               if(workingpoint=="1pfake"){*eff = 1.0;}
               else if(workingpoint=="2pfake"){*eff = 1.0;}
               else if(workingpoint=="5pfake"){*eff = 1.0;}
               else if(workingpoint=="10pfake"){*eff = 1.0;}
               else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2016! Aborting ..." << std::endl; std::abort();}
               }

	else{ std::cerr << "The sample " << sample << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}

}

void HardcodedConditions::GetHOTtaggingEff2016(double pt, double *eff, std::string sample, std::string workingpoint, int massIndex)
{
	if(sample=="singletop"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.205348668416,0.314370717634,0.409574468085,0.44616639478,0.499124343257,0.472885032538,0.375634517766};
		hotEffs2p = {0.33733459885,0.435088351965,0.522606382979,0.551386623165,0.583187390543,0.58568329718,0.472081218274};
		hotEffs5p = {0.52297470828,0.592679408583,0.65469858156,0.677814029364,0.709281961471,0.720173535792,0.583756345178};
		hotEffs10p= {0.664787002401,0.717634331049,0.754875886525,0.783849918434,0.791593695271,0.798264642082,0.654822335025};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="TTVV"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.305842391304,0.399267399267,0.477281055332,0.493034055728,0.537331701346,0.531803542673,0.418008784773};
		hotEffs2p = {0.464266304348,0.535256410256,0.587761084646,0.609907120743,0.645042839657,0.625603864734,0.513909224012};
		hotEffs5p = {0.650815217391,0.6903998779,0.725357273727,0.731682146543,0.74949000408,0.739935587762,0.635431918009};
		hotEffs10p= {0.768614130435,0.791361416361,0.813484792964,0.818885448916,0.825785393717,0.815217391304,0.714494875549};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="TTTX"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.306924101198,0.39515630792,0.47762962963,0.52101910828,0.53066850448,0.537334263782,0.394946808511};
		hotEffs2p = {0.466932978251,0.531199802298,0.59762962963,0.635668789809,0.644383184011,0.630146545708,0.496010638298};
		hotEffs5p = {0.648024855748,0.684047942667,0.733037037037,0.750318471338,0.762232942798,0.738311235171,0.644946808511};
		hotEffs10p= {0.770972037284,0.785617200049,0.815111111111,0.832696390658,0.840799448656,0.813677599442,0.716755319149};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttbarHT500Njet9"){
		ptMins = {0,150,250,300,350,400,450,500,550,600};
		hotEffs1p = {0.407909294843,0.487360654607,0.554943124203,0.585792903693,0.607100158595,0.624351331646,0.610264067903,0.570180155956,0.529164477141,0.417211703959};
		hotEffs2p = {0.568257255093,0.618534948399,0.665471923536,0.685199131064,0.698426253507,0.708109962688,0.696007544797,0.66415703146,0.621650026274,0.499139414802};
		hotEffs5p = {0.736228265173,0.755602546717,0.781532684758,0.791745112238,0.799609613273,0.804949178711,0.792675259352,0.767410594246,0.723068838676,0.618244406196};
		hotEffs10p= {0.834972644315,0.840545199623,0.854462214994,0.860637219406,0.867268512871,0.87095252391,0.857041810751,0.837859639688,0.800840777719,0.702925989673};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttbar"){
		ptMins = {0,150,250,300,350,400,450,500,550,600};
		hotEffs1p = {0.252959824309,0.361397414942,0.459087366036,0.504119254456,0.534357717034,0.550922369278,0.535451420581,0.492177755604,0.438544880534,0.298526640397};
		hotEffs2p = {0.39900220362,0.493794233602,0.574189819563,0.608677624155,0.631207830733,0.641467233281,0.624997572486,0.58401339938,0.523498600847,0.380589343841};
		hotEffs5p = {0.588466684642,0.652158801147,0.707418016666,0.730327047958,0.745084736246,0.749944084098,0.732041248325,0.69227753822,0.632991318074,0.48338187425};
		hotEffs10p= {0.721765531851,0.763493052893,0.801389053122,0.815564800087,0.823962905082,0.823869769432,0.80799331948,0.771996721428,0.718160292746,0.574610244989};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttVjets"){
		ptMins = {0,150,250,300,350,400,450,500,550,600};
		hotEffs1p = {0.25058416855,0.337887212073,0.411016797393,0.443887827299,0.467403702729,0.474528168015,0.454567022539,0.411171171171,0.368152866242,0.247029393371};
		hotEffs2p = {0.395882818686,0.471008737093,0.528383653881,0.553943087332,0.570150039484,0.56903646942,0.539264531435,0.495135135135,0.452229299363,0.330206378987};
		hotEffs5p = {0.582893999961,0.633783425999,0.669388632212,0.683313536126,0.691936474511,0.690506598553,0.664294187426,0.607207207207,0.579617834395,0.430268918074};
		hotEffs10p= {0.715350597686,0.747603918454,0.769958096057,0.777668749677,0.780994998684,0.78288633461,0.749466192171,0.707747747748,0.675796178344,0.522826766729};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttHToNonbb"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.283254772173,0.370313194136,0.441448382126,0.485894673548,0.5044754744,0.51778614773,0.402069297401};
		hotEffs2p = {0.438354561562,0.511728120835,0.561922187982,0.595279851681,0.607948442535,0.61581920904,0.491578440808};
		hotEffs5p = {0.629559054592,0.672112394491,0.70531587057,0.721250688981,0.727980665951,0.726197949362,0.615736284889};
		hotEffs10p= {0.756560692675,0.781452687694,0.800783256292,0.809640727564,0.808628714644,0.80989746809,0.700433108758};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttHTobb"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.306951814618,0.400615427169,0.481797844214,0.522922404017,0.541345583877,0.54735152488,0.417312661499};
		hotEffs2p = {0.468254179889,0.544082564049,0.607585926378,0.636886440953,0.652934202727,0.639200998752,0.502153316107};
		hotEffs5p = {0.662009013093,0.708830342634,0.748525523693,0.759274258869,0.766597510373,0.752452291778,0.617571059432};
		hotEffs10p= {0.786299032026,0.81291705563,0.833384177344,0.84318807711,0.838470657973,0.820581416087,0.699827734711};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="tttt"){
		ptMins = {0,150,250,300,350,400,450,500,550,600};
		hotEffs1p = {0.311329828161,0.390131583914,0.447922957643,0.479768786127,0.503408790045,0.50556497774,0.495245245245,0.459487179487,0.408713227038,0.294583883752};
		hotEffs2p = {0.462714798666,0.528502298755,0.5714845344,0.594583600942,0.609445326979,0.607536569854,0.591257924591,0.557307692308,0.505501908826,0.386393659181};
		hotEffs5p = {0.646111182354,0.686146320104,0.71145025708,0.72575465639,0.731135822081,0.725991096036,0.708375041708,0.674871794872,0.632158095666,0.503302509908};
		hotEffs10p= {0.763352782765,0.788031374799,0.80355831225,0.811025476343,0.811854646545,0.807504769981,0.787287287287,0.762564102564,0.719514933753,0.594671950683};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
        else if(sample=="x53x53H" or sample=="x53x53"){
               if(workingpoint=="1pfake"){*eff = 1.0;}
               else if(workingpoint=="2pfake"){*eff = 1.0;}
               else if(workingpoint=="5pfake"){*eff = 1.0;}
               else if(workingpoint=="10pfake"){*eff = 1.0;}
               else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2016! Aborting ..." << std::endl; std::abort();}
               }

	else{ std::cerr << "The sample " << sample << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}

}


void HardcodedConditions::GetHOTmistagEff2016APV(double pt, double *eff, std::string sample, std::string workingpoint, int massIndex)
{
	// VALUES from Slide 20 in https://indico.cern.ch/event/828647/contributions/3468595/attachments/1863710/3063888/ResolvedTopTagger_HOT2.pdf
	ptMins = {0,150,250,300,350,400,450,500,600};
	hotEffs = {0.0015,0.005,0.0095,0.0135,0.0155,0.016,0.0145,0.0115,0.005};
	int bin = findBin(pt, ptMins);
	*eff = hotEffs[bin];
}

void HardcodedConditions::GetHOTmistagEff2016(double pt, double *eff, std::string sample, std::string workingpoint, int massIndex)
{
	// VALUES from Slide 20 in https://indico.cern.ch/event/828647/contributions/3468595/attachments/1863710/3063888/ResolvedTopTagger_HOT2.pdf
	ptMins = {0,150,250,300,350,400,450,500,600};
	hotEffs = {0.0015,0.005,0.0095,0.0135,0.0155,0.016,0.0145,0.0115,0.005};
	int bin = findBin(pt, ptMins);
	*eff = hotEffs[bin];
}

void HardcodedConditions::GetHOTtaggingEff2017(double pt, double *eff, std::string sample, std::string workingpoint, int massIndex)
{
	if(sample=="singletop"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.238703480146,0.344134347664,0.434589800443,0.475746268657,0.518656716418,0.507683863886,0.394703656999};
		hotEffs2p = {0.368731908044,0.464867471993,0.537324464154,0.574419568823,0.607794361526,0.594401756312,0.471626733922};
		hotEffs5p = {0.54382958838,0.612588516432,0.670467743638,0.697968490879,0.713515754561,0.708562019759,0.566204287516};
		hotEffs10p= {0.671183976531,0.722995637209,0.76665610812,0.781301824212,0.790215588723,0.783754116356,0.645649432535};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="TTVV"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.349224166392,0.427451708767,0.499334221039,0.520619877049,0.558111860373,0.56627719581,0.438589981447};
		hotEffs2p = {0.499438758666,0.557317979198,0.607723035952,0.62487192623,0.656287187624,0.656124093473,0.525788497217};
		hotEffs5p = {0.664443710796,0.702674591382,0.731025299601,0.737320696721,0.755850852836,0.757655116841,0.640074211503};
		hotEffs10p= {0.770287223506,0.797288261516,0.814824678207,0.815573770492,0.83141610472,0.818291700242,0.714285714286};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="TTTX"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.354968471407,0.433300637567,0.507690054197,0.538025210084,0.567065073041,0.558911384003,0.447599729547};
		hotEffs2p = {0.501304631442,0.561611083865,0.623553537425,0.64243697479,0.666002656042,0.647195486226,0.540229885057};
		hotEffs5p = {0.670580560992,0.705983325159,0.748498608466,0.754201680672,0.762284196547,0.74709591769,0.651115618661};
		hotEffs10p= {0.775277234181,0.798369298676,0.826717445437,0.829411764706,0.831673306773,0.814802522403,0.73968897904};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttbar"){
		ptMins = {0,150,250,300,350,400,450,500,550,600};
		hotEffs1p = {0.269151562867,0.371040944242,0.46093357409,0.500559342772,0.529478935766,0.537946286717,0.52057549505,0.472972972973,0.420305878017,0.276479750779};
		hotEffs2p = {0.409420532838,0.495800937276,0.567888124784,0.597745149449,0.618724849018,0.621770021734,0.604450288779,0.557548928239,0.499907868067,0.350689808634};
		hotEffs5p = {0.587507414481,0.64446661573,0.694030504437,0.714070966614,0.728097654509,0.725256428181,0.705548679868,0.662488350419,0.602634973282,0.453604806409};
		hotEffs10p= {0.713205263769,0.750500206068,0.784037803988,0.797203286139,0.805845103535,0.799979663688,0.782152433993,0.742684063374,0.683618942325,0.537939474855};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttbarHT500Njet9"){
		ptMins = {0,150,250,300,350,400,450,500,550,600};
		hotEffs1p = {0.420852331885,0.49926498383,0.564610559123,0.591745991624,0.615611535924,0.626310934991,0.615721617224,0.574397250711,0.528376963351,0.407833470282};
		hotEffs2p = {0.581325769815,0.630417434401,0.675020226295,0.692950658632,0.706585025036,0.712875345882,0.700431843785,0.666809858777,0.621465968586,0.492467817036};
		hotEffs5p = {0.747017077753,0.765742585467,0.789658484483,0.799216420697,0.808368590614,0.809209852082,0.796689197647,0.77076733072,0.732251308901,0.610928512736};
		hotEffs10p= {0.842857541777,0.848382142668,0.861767718434,0.866446835523,0.873704537515,0.874150240836,0.861622230567,0.839392149493,0.810261780105,0.699808271706};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttVjets"){
		ptMins = {0,150,250,300,350,400,450,500,550,600};
		hotEffs1p = {0.288452231149,0.373458612278,0.449154067675,0.486258527123,0.509460431655,0.520363614616,0.49159748937,0.45743846998,0.393109061313,0.249461786868};
		hotEffs2p = {0.428064401639,0.49869671282,0.558195344372,0.587842991958,0.599064748201,0.607439746427,0.576331241142,0.543815645085,0.476125881715,0.318622174381};
		hotEffs5p = {0.602006904785,0.646202087487,0.685520158387,0.704814419284,0.709748201439,0.713952514802,0.685260174124,0.654021006427,0.591427021161,0.414962325081};
		hotEffs10p= {0.722776110735,0.751445312065,0.777447804176,0.790576030338,0.789928057554,0.796064828659,0.766045758251,0.734127606208,0.675529028757,0.497039827772};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttHToNonbb"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.322708874232,0.407453342783,0.475704187558,0.514392259134,0.539779313898,0.537583014691,0.427537922987};
		hotEffs2p = {0.470150457177,0.537347249962,0.586948188356,0.615564600648,0.633978790091,0.623717045683,0.508518086348};
		hotEffs5p = {0.646441760333,0.68446513326,0.715626293758,0.730337078652,0.742089219012,0.731183336687,0.613302217036};
		hotEffs10p= {0.760219960975,0.78353521036,0.802904150758,0.811450437495,0.817397277919,0.804789696116,0.697549591599};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttHTobb"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.349631239811,0.446789663388,0.523204501703,0.554238073182,0.572679367653,0.573949497904,0.453166226913};
		hotEffs2p = {0.50534896359,0.580202415134,0.635213978972,0.658452987494,0.667936765302,0.659744564688,0.539797713281};
		hotEffs5p = {0.683611520845,0.726871932718,0.756759958537,0.771607225567,0.771139035266,0.762796139222,0.647317502199};
		hotEffs10p= {0.794689853272,0.818254016739,0.835628609507,0.843584993052,0.841183623835,0.830067271132,0.728671943712};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="tttt"){
		ptMins = {0,150,250,300,350,400,450,500,550,600};
		hotEffs1p = {0.352514194404,0.430878952682,0.49099243151,0.515815708562,0.532235793946,0.536272793993,0.516997674003,0.493587033122,0.429605416764,0.316731141199};
		hotEffs2p = {0.495189202054,0.558040511935,0.602814198913,0.620469579801,0.627792529651,0.625134082312,0.605832886026,0.580408738548,0.519495680598,0.392408123791};
		hotEffs5p = {0.65894332438,0.700410329892,0.727498845184,0.733369048728,0.739281288724,0.730028792412,0.712918232242,0.68245243129,0.623161335512,0.488636363636};
		hotEffs10p= {0.767653758542,0.793288175335,0.809952741357,0.811702226777,0.812143742255,0.805961723028,0.787618536411,0.76067653277,0.704646275975,0.575435203095};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
        else if(sample=="x53x53"){
               ptMins = {0,150,250,300,350,400,450,500,550,600};
               double x53x53_hotEffs1p[12][10] = {{1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//700
                            {1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//800
                             {0.314893617021,0.413458319384,0.471895176605,0.520527116067,0.554501488095,0.585606773283,0.551120663187,0.512454062883,0.463276836158,0.294247787611},//900R
                             {0.300785634119,0.400346620451,0.467854039965,0.509983513464,0.535859269283,0.561092150171,0.558113100313,0.502100840336,0.441786283892,0.275710284114},//1000R
                             {0.265780730897,0.396633941094,0.458075407991,0.500563443768,0.521278991218,0.543859649123,0.537460225629,0.490202939118,0.422093584178,0.265486725664},//1100R
                             {0.260194174757,0.378388554217,0.449330127104,0.503395816354,0.537328094303,0.552534318902,0.527475672582,0.482701812191,0.408281389136,0.247751668117},//1200R
                             {0.289617486339,0.377799415774,0.453774006253,0.47987012987,0.522544042998,0.533135215453,0.532463295269,0.467267059231,0.408633696563,0.238690327418},//1300R
                             {0.307692307692,0.369353916524,0.439037433155,0.486220472441,0.509824561404,0.528890347997,0.503092783505,0.466690673389,0.388328214129,0.221377672209},//1400R
                             {0.278810408922,0.368565545642,0.431551499348,0.453110492108,0.485116653258,0.500192975685,0.469057942452,0.44014084507,0.374010246856,0.202711864407},//1500R
                             {0.269430051813,0.362084456424,0.455304928989,0.458333333333,0.518305439331,0.522366522367,0.491428571429,0.453667105841,0.379805228088,0.208139534884},//1600R
                             {0.321052631579,0.375619425173,0.437992125984,0.473245309243,0.511060692002,0.494986807388,0.496678589678,0.42921686747,0.372156013001,0.20186697783},//1700R
                             {1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//1800
                             };
               double x53x53_hotEffs2p[12][10] = {{1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//700
                             {1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//800
                             {0.442553191489,0.528289253432,0.570262058488,0.615475587092,0.637648809524,0.672389463782,0.632483880872,0.596161698653,0.543628374137,0.351769911504},//900R
                             {0.451178451178,0.511698440208,0.562988705474,0.597362154241,0.622269476126,0.638225255973,0.63768115942,0.575280112045,0.513024986709,0.346538615446},//1000R
                             {0.392026578073,0.507713884993,0.560213843557,0.597025016903,0.613600540419,0.622076023392,0.617008967313,0.568929321204,0.503617945007,0.330156569095},//1100R
                             {0.405825242718,0.501506024096,0.555822741326,0.596577017115,0.61615913556,0.63252375924,0.609330280481,0.564415156507,0.486642920748,0.313606034233},//1200R
                             {0.428961748634,0.484907497566,0.558284948638,0.572402597403,0.610032845626,0.612184249629,0.601305057096,0.540006927607,0.488683989941,0.29792551862},//1300R
                             {0.413919413919,0.485420240137,0.538502673797,0.577559055118,0.592280701754,0.612606697308,0.573883161512,0.546993158084,0.4633611233,0.281235154394},//1400R
                             {0.416356877323,0.476321207962,0.533246414602,0.559888579387,0.566371681416,0.584330374373,0.546708711076,0.51917057903,0.45319049837,0.25581920904},//1500R
                             {0.388601036269,0.483378256963,0.541353383459,0.550724637681,0.587343096234,0.60557960558,0.569047619048,0.533596837945,0.461301896463,0.263023255814},//1600R
                             {0.436842105263,0.497522299306,0.531496062992,0.558026407227,0.600680657969,0.581530343008,0.578436382218,0.508534136546,0.456121343445,0.25764294049},//1700R
                             {1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//1800
                             };
                double x53x53_hotEffs5p[12][10] = {{1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//700
                             {1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//800
                             {0.610212765957,0.663207231336,0.695784276491,0.726980908937,0.735677083333,0.758936970837,0.733804114216,0.702735810535,0.638418079096,0.451327433628},//900R
                             {0.604938271605,0.650129982669,0.686359687228,0.71111925261,0.724144596946,0.735836177474,0.726058539358,0.674369747899,0.614035087719,0.43737494998},//1000R
                             {0.578073089701,0.65301542777,0.683173888576,0.703628577868,0.722810177888,0.712475633528,0.714203066242,0.663750874738,0.613603473227,0.422396187883},//1100R
                             {0.561165048544,0.647213855422,0.687392648574,0.701439826134,0.72568762279,0.727296726505,0.70377790498,0.66194398682,0.587266251113,0.414273281114},//1200R
                             {0.592896174863,0.622200584226,0.68021438142,0.687662337662,0.714541654225,0.716493313522,0.701141924959,0.63179771389,0.595557418273,0.391402149463},//1300R
                             {0.575091575092,0.620926243568,0.65935828877,0.690551181102,0.702456140351,0.704202232436,0.667697594502,0.639899171768,0.58007898201,0.373871733967},//1400R
                             {0.546468401487,0.612903225806,0.663624511082,0.674558960074,0.679002413516,0.692396758008,0.649586125345,0.615805946792,0.557987890079,0.34418079096},//1500R
                             {0.559585492228,0.632524707996,0.655806182122,0.657004830918,0.691945606695,0.700336700337,0.664761904762,0.638120333773,0.56176319836,0.350697674419},//1600R
                             {0.584210526316,0.615460852329,0.657480314961,0.661570535094,0.705615428247,0.701319261214,0.668369954011,0.613453815261,0.561755146262,0.340023337223},//1700R
                             {1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//1800
                             };
                double x53x53_hotEffs10p[12][10] ={{1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//700
                             {1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//800
                             {0.724255319149,0.763642450619,0.780668439043,0.796249366447,0.808407738095,0.830903104421,0.796438440282,0.777460187832,0.714375392341,0.525442477876},//900R
                             {0.718294051627,0.752166377816,0.769113814075,0.786590950724,0.801662478252,0.804778156997,0.80164819551,0.745798319328,0.701754385965,0.531412565026},//1000R
                             {0.705980066445,0.750911640954,0.771806415307,0.788370520622,0.793514974105,0.793372319688,0.791148394562,0.738978306508,0.698022190063,0.505786249149},//1100R
                             {0.691262135922,0.738704819277,0.777739608382,0.780494430861,0.789047151277,0.805174234424,0.775042930738,0.744645799012,0.671415850401,0.485349579344},//1200R
                             {0.680327868852,0.745861733204,0.760607414024,0.768506493506,0.791280979397,0.791381872214,0.787275693312,0.711465188777,0.678541492037,0.477630592352},//1300R
                             {0.714285714286,0.733562035449,0.755614973262,0.779921259843,0.778596491228,0.764609323703,0.743986254296,0.721281958949,0.662132514261,0.462470308789},//1400R
                             {0.68029739777,0.714481811942,0.766623207301,0.766480965645,0.770313757039,0.766885372443,0.735120220733,0.701877934272,0.637633907778,0.426440677966},//1500R            
                             {0.709844559585,0.728661275831,0.75104427736,0.743961352657,0.770920502092,0.782106782107,0.741428571429,0.712340799297,0.652485904664,0.424418604651},//1600R
                             {0.678947368421,0.729435084242,0.747047244094,0.75191104934,0.777651730006,0.771503957784,0.737353091467,0.698293172691,0.645178764897,0.416336056009},//1700R
                             {1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//1800
                             };
               
               hotEffs1p.insert(hotEffs1p.begin(),begin(x53x53_hotEffs1p[massIndex]), end(x53x53_hotEffs1p[massIndex]));
               hotEffs2p.insert(hotEffs2p.begin(),begin(x53x53_hotEffs2p[massIndex]), end(x53x53_hotEffs2p[massIndex]));
               hotEffs5p.insert(hotEffs5p.begin(),begin(x53x53_hotEffs5p[massIndex]), end(x53x53_hotEffs5p[massIndex]));
               hotEffs10p.insert(hotEffs10p.begin(),begin(x53x53_hotEffs10p[massIndex]), end(x53x53_hotEffs10p[massIndex]));


               int bin = findBin(pt, ptMins);
               if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
               else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
               else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
               else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
               else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
               }
        else if(sample=="x53x53H"){
               if(workingpoint=="1pfake"){*eff = 1.0;}
               else if(workingpoint=="2pfake"){*eff = 1.0;}
               else if(workingpoint=="5pfake"){*eff = 1.0;}
               else if(workingpoint=="10pfake"){*eff = 1.0;}
               else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
               }
	else{ std::cerr << "The sample " << sample << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
}

void HardcodedConditions::GetHOTmistagEff2017(double pt, double *eff, std::string sample, std::string workingpoint, int massIndex)
{
	// VALUES from Slide 24 in https://indico.cern.ch/event/828647/contributions/3468595/attachments/1863710/3063888/ResolvedTopTagger_HOT2.pdf
	ptMins = {0,150,250,300,350,400,450,500,600};
	hotEffs = {0.001,0.004,0.008,0.0115,0.013,0.013,0.0125,0.0085,0.0035};
	int bin = findBin(pt, ptMins);
	*eff = hotEffs[bin];
}

void HardcodedConditions::GetHOTtaggingEff2018(double pt, double *eff, std::string sample, std::string workingpoint, int massIndex)
{
	if(sample=="singletop"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.212296119533,0.315031032999,0.406236058097,0.45123586894,0.482085987261,0.467056323061,0.377334993773};
		hotEffs2p = {0.339097202454,0.433202236834,0.510682595549,0.548380915884,0.587579617834,0.550743889479,0.452054794521};
		hotEffs5p = {0.507791822372,0.580153219034,0.640608734447,0.665453151945,0.700835987261,0.664984059511,0.564757160648};
		hotEffs10p= {0.639292830797,0.693213707778,0.738611014723,0.760682123012,0.78523089172,0.751062699256,0.658779576588};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2018! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="TTVV"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.306757547592,0.388706280631,0.457114122887,0.484619395203,0.519713261649,0.516032171582,0.406852649317};
		hotEffs2p = {0.446968914593,0.510106875037,0.567166323452,0.588373305527,0.611954459203,0.603217158177,0.492229919491};
		hotEffs5p = {0.6178181693,0.655854508237,0.693022364829,0.711222627737,0.720851781573,0.70981233244,0.600074892342};
		hotEffs10p= {0.729319425798,0.756411518098,0.784588860687,0.796532846715,0.798545224541,0.788632707775,0.680022467703};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2018! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="TTTX"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.320480258601,0.40133316564,0.479001825928,0.507153534059,0.526281208936,0.531127712558,0.443624161074};
		hotEffs2p = {0.460978988686,0.5288642938,0.592818015825,0.609438394192,0.624835742444,0.624332977588,0.518791946309};
		hotEffs5p = {0.626876010159,0.670230159728,0.720328667072,0.730728165706,0.727003942181,0.731412308787,0.61610738255};
		hotEffs10p= {0.742438235973,0.76895987926,0.798843578819,0.806747811232,0.799605781866,0.797936677339,0.695302013423};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2018! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttbar"){
		ptMins = {0,150,250,300,350,400,450,500,550,600};
		hotEffs1p = {0.239645560484,0.339776636222,0.431088672755,0.472410045883,0.500610192316,0.508911240515,0.495590310442,0.453230420467,0.390272209327,0.257381258023};
		hotEffs2p = {0.373344786383,0.461458384312,0.53720713172,0.569649038075,0.590771367252,0.595406152579,0.577404750706,0.537323905651,0.469086305128,0.332092426187};
		hotEffs5p = {0.550542735949,0.611085074492,0.664600193036,0.688434087311,0.70022023033,0.701194047409,0.683060912512,0.642953527285,0.574382781177,0.424133504493};
		hotEffs10p= {0.680216158719,0.720677490343,0.759026901279,0.774571359575,0.783206385277,0.78032174578,0.762582314205,0.724564149619,0.668917493142,0.512836970475};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2018! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttbarHT500Njet9"){
		ptMins = {0,150,250,300,350,400,450,500,550,600};
		hotEffs1p = {0.382883189333,0.463774763516,0.530534334919,0.564121055076,0.585513888459,0.595023744476,0.582740745664,0.55169669755,0.508245382586,0.387973402718};
		hotEffs2p = {0.541805565004,0.59518344389,0.641367700136,0.664696751167,0.679590004026,0.685399438934,0.671130457899,0.642983004604,0.600043975374,0.476293726511};
		hotEffs5p = {0.711693822709,0.735689977202,0.762616536367,0.775344073142,0.786775255731,0.785309594969,0.771549146009,0.747967941795,0.712401055409,0.592223185892};
		hotEffs10p= {0.814625994966,0.824408134231,0.841727352727,0.848803383284,0.856109167105,0.856488017749,0.843523625972,0.820042062184,0.791886543536,0.68545822492};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttVjets"){
		ptMins = {0,150,250,300,350,400,450,500,550,600};
		hotEffs1p = {0.248203555141,0.336000706936,0.410729173126,0.448669593355,0.469720348827,0.480485326639,0.454306244307,0.427374526706,0.360325061675,0.238377129656};
		hotEffs2p = {0.381978758931,0.457716400911,0.519888105721,0.549423937014,0.563393956206,0.568047337278,0.544023884222,0.50938532184,0.447395153098,0.309558186543};
		hotEffs5p = {0.556277269744,0.607370787841,0.652259589216,0.670757847441,0.677837687893,0.681130834977,0.655399251088,0.614919842101,0.557248585111,0.41264799307};
		hotEffs10p= {0.682254559552,0.716801017202,0.748003610382,0.762206558256,0.764697723608,0.764837726376,0.739904867928,0.700072504632,0.650848933391,0.498123014727};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2018! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttHToNonbb"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.287911917634,0.372938377432,0.444955418438,0.479304265453,0.503111984651,0.511731658956,0.394968553459};
		hotEffs2p = {0.431923831824,0.500676886208,0.555987494003,0.58108570376,0.599653703964,0.601454064772,0.477106918239};
		hotEffs5p = {0.609810268241,0.652403090058,0.68518304081,0.701576191353,0.709906874444,0.712161269002,0.58679245283};
		hotEffs10p= {0.730054061499,0.755174579034,0.776794428545,0.787464147567,0.793766671346,0.791749283983,0.669685534591};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2018! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="ttHTobb"){
		ptMins = {0,150,250,300,350,400,500};
		hotEffs1p = {0.318843650941,0.416048224125,0.492033415169,0.52523214609,0.546462416046,0.548041732671,0.441785091};
		hotEffs2p = {0.473585688679,0.549666357685,0.602642895981,0.62854038954,0.641043334253,0.637242584804,0.526427324857};
		hotEffs5p = {0.653722197204,0.69979676318,0.728575900875,0.744988489692,0.750805041862,0.741628885126,0.631388681127};
		hotEffs10p= {0.771326145886,0.796325616475,0.812805852598,0.82023227542,0.823902842948,0.814606434697,0.71540762902};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2018! Aborting ..." << std::endl; std::abort();}
		}
	else if(sample=="tttt"){
		ptMins = {0,150,250,300,350,400,450,500,550,600};
		hotEffs1p = {0.320831918231,0.3982520778,0.461573343186,0.482859420675,0.502006407014,0.500831411254,0.495233142659,0.45651048408,0.412305671119,0.289095332891};
		hotEffs2p = {0.463894684068,0.525030962526,0.572251519936,0.588138896271,0.601315123925,0.594861342059,0.585283411336,0.549055138493,0.501423253777,0.371156823712};
		hotEffs5p = {0.631604483043,0.670621042055,0.698431359377,0.708920187793,0.715528578655,0.704446709221,0.693534408043,0.660367589956,0.616816290782,0.47401017474};
		hotEffs10p= {0.743712904113,0.767403276186,0.785529542172,0.792209230224,0.794267408531,0.784959502226,0.770150806032,0.746311157132,0.695423691701,0.555629285556};
		int bin = findBin(pt, ptMins);
		if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
		else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
		else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
		else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
		else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2018! Aborting ..." << std::endl; std::abort();}
		}
        else if(sample=="x53x53"){
                ptMins = {0,150,250,300,350,400,450,500,550,600};
                double x53x53_hotEffs1p[12][10] = {{1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//700
                             {1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//800
                             {0.248992747784,0.377145581691,0.438452109963,0.483669548511,0.52090375378,0.547161572052,0.532083211251,0.506193228737,0.411554496724,0.268135411069},//900R
                             {0.300970873786,0.371341197029,0.450376606114,0.476908923643,0.510782980377,0.525222551929,0.514135254989,0.471664906723,0.427858212681,0.255301794454},//1000R
                             {0.261538461538,0.355609232421,0.43766864544,0.47445570166,0.500319488818,0.521811680572,0.496726677578,0.463080521216,0.397149643705,0.243458838545},//1100R
                             {0.25,0.340726577438,0.43906020558,0.476281352236,0.496391752577,0.509883563499,0.51523297491,0.457171991842,0.410472183263,0.232375979112},//1200R
                             {0.26902173913,0.333783783784,0.414100847836,0.448231093801,0.502265005663,0.509193357058,0.500948766603,0.463209530484,0.392732049037,0.217568947906},//1300R
                             {0.24358974359,0.336094674556,0.425774877651,0.447113521891,0.476870748299,0.50819112628,0.493488208377,0.433997050147,0.379385964912,0.213044513211},//1400R
                             {0.25641025641,0.318551367332,0.404746209624,0.439121756487,0.461663286004,0.48203125,0.479248238058,0.426334805299,0.389292196007,0.201186131387},//1500R
                             {0.264840182648,0.313588850174,0.418181818182,0.444509006392,0.461421319797,0.481348314607,0.455956184391,0.418669131238,0.371763556424,0.191597414589},//1600R
                             {0.26404494382,0.342078708375,0.357699805068,0.442846872753,0.444444444444,0.50481041313,0.469085334696,0.429748062016,0.343400447427,0.179292329613},//1700R
                             {1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//1800
                             };
                double x53x53_hotEffs2p[12][10] = {{1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//700
                             {1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//800
                             {0.377921031426,0.492530197076,0.548765540186,0.581492154979,0.60327343889,0.631222707424,0.614122472898,0.578860445912,0.494341870161,0.340139709833},//900R
                             {0.436893203883,0.484709480122,0.549844926894,0.561729530819,0.604041189042,0.607167313399,0.591740576497,0.545934530095,0.500249625562,0.320962479608},//1000R
                             {0.386153846154,0.464036500268,0.526713437669,0.568657038155,0.582747603834,0.606674612634,0.57201309329,0.52990310725,0.476009501188,0.318442884493},//1100R
                             {0.388429752066,0.460803059273,0.53046989721,0.564067611778,0.575773195876,0.598700243704,0.597670250896,0.534330387492,0.491818606826,0.299680881926},//1200R
                             {0.385869565217,0.459009009009,0.51182507809,0.543654657579,0.586353340883,0.602609727165,0.576850094877,0.536089698669,0.466287215412,0.277323799796},//1300R
                             {0.38141025641,0.450887573964,0.518216421968,0.545137543588,0.554761904762,0.598634812287,0.573389651531,0.516961651917,0.458771929825,0.26588907403},//1400R
                             {0.397435897436,0.438285291944,0.493737640079,0.533932135729,0.557809330629,0.566015625,0.552466718872,0.499799277399,0.455081669691,0.257527372263},//1500R
                             {0.369863013699,0.415505226481,0.514876033058,0.538640325392,0.537563451777,0.569887640449,0.539479689639,0.493992606285,0.452369320957,0.25},//1600R
                             {0.449438202247,0.458123107972,0.463937621832,0.527677929547,0.539426523297,0.591397849462,0.537557485948,0.506782945736,0.419463087248,0.240322963667},//1700R
                             {1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//1800
                             };
                double x53x53_hotEffs5p[12][10] = {{1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//700
                             {1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//800
                             {0.54230459307,0.631436745073,0.674662931185,0.695965417867,0.706991638498,0.72903930131,0.707295634339,0.67093311313,0.605122096486,0.429876410532},//900R
                             {0.57645631068,0.618173875055,0.671909614533,0.673597056118,0.708762385856,0.703720611732,0.701496674058,0.650123196058,0.589116325512,0.40660685155},//1000R
                             {0.558461538462,0.611379495437,0.658391797086,0.684199180858,0.687326943557,0.701549463647,0.674304418985,0.641496825927,0.58432304038,0.402680280791},//1100R
                             {0.564049586777,0.606118546845,0.650146842878,0.679389312977,0.685567010309,0.696181965881,0.697729988053,0.637661454793,0.586722767648,0.386422976501},//1200R
                             {0.527173913043,0.591891891892,0.649263721553,0.657254138267,0.697621744054,0.703736654804,0.684060721063,0.638051857043,0.56523642732,0.36848825332},//1300R
                             {0.544871794872,0.58875739645,0.634584013051,0.662533901589,0.671088435374,0.696587030717,0.674410418867,0.625368731563,0.556140350877,0.35277314925},//1400R
                             {0.559829059829,0.577974870658,0.628872775214,0.664670658683,0.66490872211,0.669921875,0.655833985904,0.596146126054,0.55943738657,0.341240875912},//1500R
                             {0.511415525114,0.558362369338,0.628099173554,0.664729808251,0.642639593909,0.668764044944,0.649475125513,0.591497227357,0.556912554958,0.336103416436},//1600R
                             {0.601123595506,0.587285570131,0.59649122807,0.644859813084,0.648745519713,0.688737973967,0.634133878385,0.608527131783,0.532997762864,0.326763239136},//1700R
                             {1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//1800
                             };
                double x53x53_hotEffs10p[12][10] ={{1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//700
                             {1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//800
                             {0.671232876712,0.731722822632,0.760462265803,0.78130003202,0.782423056396,0.803711790393,0.777907998828,0.739471511148,0.681357951161,0.527135948415},//900R
                             {0.703883495146,0.721057230232,0.765396544085,0.756577736891,0.784728968331,0.781784980598,0.772727272727,0.72826469553,0.666500249626,0.493882544861},//1000R
                             {0.698461538462,0.708266237252,0.756341068538,0.768269023496,0.770820021299,0.770917759237,0.747408619749,0.711994654193,0.672209026128,0.478940650925},//1100R
                             {0.688016528926,0.709751434034,0.737151248164,0.767993456925,0.767525773196,0.779582994855,0.766427718041,0.704622705642,0.668536699392,0.469973890339},//1200R
                             {0.654891304348,0.7,0.739848282017,0.748782862707,0.77718006795,0.77846975089,0.759645793801,0.712683952348,0.653677758319,0.442032686415},//1300R
                             {0.660256410256,0.699408284024,0.741163675911,0.744672607516,0.748979591837,0.77337883959,0.741640267511,0.71017699115,0.651754385965,0.43323018329},//1400R
                             {0.688034188034,0.683665927568,0.722478576137,0.756986027944,0.755780933063,0.7453125,0.731401722788,0.686872741871,0.644283121597,0.423357664234},//1500R
                             {0.684931506849,0.66724738676,0.737190082645,0.7623474724,0.734010152284,0.746966292135,0.724783204016,0.674676524954,0.631167562286,0.41135734072},//1600R
                             {0.696629213483,0.70736629667,0.712475633528,0.734004313444,0.740143369176,0.763440860215,0.715380684722,0.690406976744,0.62192393736,0.408454048919},//1700R
                             {1.00, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000, 1.000},//1800
                            };

               hotEffs1p.insert(hotEffs1p.begin(),begin(x53x53_hotEffs1p[massIndex]), end(x53x53_hotEffs1p[massIndex]));
               hotEffs2p.insert(hotEffs2p.begin(),begin(x53x53_hotEffs2p[massIndex]), end(x53x53_hotEffs2p[massIndex]));
               hotEffs5p.insert(hotEffs5p.begin(),begin(x53x53_hotEffs5p[massIndex]), end(x53x53_hotEffs5p[massIndex]));
               hotEffs10p.insert(hotEffs10p.begin(),begin(x53x53_hotEffs10p[massIndex]), end(x53x53_hotEffs10p[massIndex]));

               int bin = findBin(pt, ptMins);
               if(workingpoint=="1pfake"){*eff = hotEffs1p[bin];}
               else if(workingpoint=="2pfake"){*eff = hotEffs2p[bin];}
               else if(workingpoint=="5pfake"){*eff = hotEffs5p[bin];}
               else if(workingpoint=="10pfake"){*eff = hotEffs10p[bin];}
               else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2018! Aborting ..." << std::endl; std::abort();}
               }

        else if(sample=="x53x53H"){
               if(workingpoint=="1pfake"){*eff = 1.0;}
               else if(workingpoint=="2pfake"){*eff = 1.0;}
               else if(workingpoint=="5pfake"){*eff = 1.0;}
               else if(workingpoint=="10pfake"){*eff = 1.0;}
               else{ std::cerr << "Working Point " << workingpoint << " not coded into HardcodedConditions::GetHOTtaggingEff2018! Aborting ..." << std::endl; std::abort();}
               }

	else{ std::cerr << "The sample " << sample << " not coded into HardcodedConditions::GetHOTtaggingEff2018! Aborting ..." << std::endl; std::abort();}
}

void HardcodedConditions::GetHOTmistagEff2018(double pt, double *eff, std::string sample, std::string workingpoint, int massIndex)
{
	// VALUES from Slide 28 in https://indico.cern.ch/event/828647/contributions/3468595/attachments/1863710/3063888/ResolvedTopTagger_HOT2.pdf
	ptMins = {0,150,250,300,350,400,450,500,600};
	hotEffs = {0.001,0.003,0.007,0.009,0.0115,0.012,0.0095,0.008,0.0025};
	int bin = findBin(pt, ptMins);
	*eff = hotEffs[bin];
}
      


/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|           T TAGGING SCALE FACTOR SECTION            |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

void HardcodedConditions::GetTtaggingSF(double pt, double *PNsf, double *PNsfup, double *PNsfdn, std::string year)//double *tau32sf, double *tau32sfup, double *tau32sfdn, std::string year)
{
  //The main getter for GetTtaggingSF Scale Factors
  *PNsf   = 1.000;
  *PNsfup = 0.000;
  *PNsfdn = 0.000;
  if      (year=="2016APV") GetTtaggingSF2016APV(pt, PNsf, PNsfup, PNsfdn);
  else if (year=="2016") GetTtaggingSF2016(pt, PNsf, PNsfup, PNsfdn);
  else if (year=="2017") GetTtaggingSF2017(pt, PNsf, PNsfup, PNsfdn);
  else if (year=="2018") GetTtaggingSF2018(pt, PNsf, PNsfup, PNsfdn);
}//end GetTtaggingSF

// Needs to be updated

//Top,2016-RunFGH,Nominal,1.0,300,400,1.0286204672478074,0.07738336621550035,0.0837428626798436
//
//Top,2016-RunFGH,Nominal,1.0,400,480,0.9861968638399904,0.046,0.05284760599583793
//
//Top,2016-RunFGH,Nominal,1.0,480,600,1.1295417328901183,0.14011597977479784,0.17885647825191325
//
//Top,2016-RunFGH,Nominal,1.0,600,1200,1.3035872134528272,0.2775637935767241,0.31002043724845657
//
//Top,2016-RunBCDEF,Nominal,1.0,300,400,1.2529632568286877,0.1401589562980461,0.14893548637024145
//
//Top,2016-RunBCDEF,Nominal,1.0,400,480,1.140886941405853,0.11013160312991532,0.1453378248525864
//
//Top,2016-RunBCDEF,Nominal,1.0,480,600,1.2321784406468166,0.16845345175872173,0.17834081774322008
//
//Top,2016-RunBCDEF,Nominal,1.0,600,1200,1.3823424969039724,0.3203322566182154,0.35739488023541155

//BCDEF
void HardcodedConditions::GetTtaggingSF2016APV(double pt, double *PNsf, double *PNsfup, double *PNsfdn) {
  if ( pt >= 300.0 and pt <= 400.0 ) {
    *PNsf   = 1.2529632568286877;
    *PNsfup = 0.14893548637024145;
    *PNsfdn = 0.1401589562980461; }
  else if ( pt > 400.0 and pt <= 480.0 ) {
    *PNsf   = 1.140886941405853;
    *PNsfup = 0.1453378248525864;
    *PNsfdn = 0.11013160312991532; }
  else if ( pt > 480.0 and pt <= 600.0 ) {
    *PNsf   = 1.2321784406468166;
    *PNsfup = 0.17834081774322008;
    *PNsfdn = 0.16845345175872173; }
  else if ( pt > 600.0 and pt <= 1200.0 ) {
    *PNsf   = 1.3823424969039724;
    *PNsfup = 0.35739488023541155;
    *PNsfdn = 0.3203322566182154; }
  else {
    *PNsf   = 1.;
    *PNsfup = 0.;
    *PNsfdn = 0.; }
}
//FGH
// Needs to be updated
void HardcodedConditions::GetTtaggingSF2016(double pt, double *PNsf, double *PNsfup, double *PNsfdn){
  if ( pt >= 300.0 and pt <= 400.0 ) {
    *PNsf   =1.0286204672478074;
    *PNsfup =0.0837428626798436;
    *PNsfdn =0.07738336621550035; }
  else if ( pt > 400.0 and pt <= 480.0 ) {
    *PNsf   = 0.9861968638399904;
    *PNsfup = 0.05284760599583793;
    *PNsfdn = 0.046; }
  else if ( pt > 480.0 and pt <= 600.0 ) {
    *PNsf   = 1.1295417328901183;
    *PNsfup = 0.17885647825191325;
    *PNsfdn = 0.14011597977479784; }
  else if ( pt > 600.0 and pt <= 1200.0 ) {
    *PNsf   = 1.3035872134528272;
    *PNsfup = 0.31002043724845657;
    *PNsfdn = 0.2775637935767241; }
  else {
    *PNsf   = 1.;
    *PNsfup = 0.;
    *PNsfdn = 0.; }
}

void HardcodedConditions::GetTtaggingSF2017(double pt, double *PNsf, double *PNsfup, double *PNsfdn) {
// Will be replaced by RunIISummer20UL version
  if ( pt >= 300.0 and pt <= 400.0 ) {
    *PNsf   = 1.2665423171877026;
    *PNsfdn = 0.12594170644336278;
    *PNsfup = 0.13075885577178425; }
  else if ( pt > 400.0 and pt <= 480.0 ) {
    *PNsf   = 1.01651719047938;
    *PNsfdn = 0.04200062224205936;
    *PNsfup = 0.03718799071755147; }
  else if ( pt > 480.0 and pt <= 600.0 ) {
    *PNsf   = 1.0563219429599855;
    *PNsfdn = 0.04406769273143074;
    *PNsfup = 0.12450427752619087; }
  else if ( pt > 600.0 and pt <= 1200.0 ) {
    *PNsf   = 1.004343034237564;
    *PNsfdn = 0.05644574156991433;
    *PNsfup = 0.06164302682382439; }
  else {
    *PNsf   = 1.;
    *PNsfup = 0.;
    *PNsfdn = 0.; }
}

void HardcodedConditions::GetTtaggingSF2018(double pt,double *PNsf, double *PNsfup, double *PNsfdn) { //double *tau32sf, double *tau32sfup, double *tau32sfdn) {
// will be replaced by RunIISummer20UL version
  if ( pt >= 300.0 and pt <= 400.0 ) {
    *PNsf   = 1.1163204630587051;
    *PNsfdn = 0.08589322774156138;
    *PNsfup = 0.1145103421879804; }
  else if ( pt > 400.0 and pt <= 480.0 ) {
    *PNsf   = 0.9878718467695988;
    *PNsfdn = 0.03394913833483326;
    *PNsfup = 0.03536992757274554; }
  else if ( pt > 480.0 and pt <= 600.0 ) {
    *PNsf   = 0.988999891725833;
    *PNsfdn = 0.03135142808228031;
    *PNsfup = 0.03254552277081374; }
  else if ( pt > 600.0 and pt <= 1200.0 ) {
    *PNsf   = 0.9805739808831712;
    *PNsfdn = 0.05931408212949585;
    *PNsfup = 0.051187894522590094; }
  else {
    *PNsf   = 1.;
    *PNsfup = 0.;
    *PNsfdn = 0.; }

}


/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|            T TAGGING EFFICIENCY SECTION             |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

void HardcodedConditions::GetTtaggingEff(double pt, double *eff, std::string year, std::string sample, int massIndex)
//update 2016
{
  //The main getter for GetTtaggingEff Efficiencies
  *eff = 1.000;
  if      (year=="2016APV") GetTtaggingEff2016APV(pt, eff, sample, massIndex);
  else if (year=="2016") GetTtaggingEff2016(pt, eff, sample, massIndex);
  else if (year=="2017") GetTtaggingEff2017(pt, eff, sample, massIndex);
  else if (year=="2018") GetTtaggingEff2018(pt, eff, sample, massIndex);
}//end GetTtaggingEff

void HardcodedConditions::GetTtaggingEff2016APV(double pt, double *eff, std::string sample, int massIndex){
   const int Nbin = 11;
   double ptMins[Nbin] = {300,350,400,450,500,550,600,700,800,1000,1200};
   double ttbarEff[Nbin] = {0.555, 0.803, 0.877, 0.899, 0.909, 0.914, 0.918, 0.922, 0.929, 0.930, 0.929};
   double STEff[Nbin] = {0.520, 0.789, 0.874, 0.901, 0.901, 0.911, 0.922, 0.926, 0.940, 0.924, 0.915}; 
 
   double x53x53Eff[12][Nbin] = {//X53X53
     {0.650, 0.846, 0.904, 0.923, 0.931, 0.924, 0.937, 0.946, 0.944, 0.931, 0.906},//700
     {0.683, 0.842, 0.899, 0.919, 0.933, 0.938, 0.937, 0.936, 0.942, 0.952, 0.929},//800
     {0.676, 0.840, 0.893, 0.920, 0.927, 0.930, 0.936, 0.933, 0.941, 0.939, 0.932},//900R
     {0.696, 0.830, 0.890, 0.911, 0.928, 0.934, 0.934, 0.939, 0.939, 0.938, 0.937},//1000R
     {0.682, 0.828, 0.881, 0.909, 0.920, 0.937, 0.938, 0.940, 0.944, 0.941, 0.936},//1100R
     {0.672, 0.831, 0.885, 0.905, 0.920, 0.927, 0.935, 0.938, 0.942, 0.941, 0.947},//1200R
     {0.721, 0.837, 0.873, 0.900, 0.910, 0.923, 0.934, 0.939, 0.942, 0.942, 0.941},//1300R
     {0.741, 0.835, 0.879, 0.893, 0.908, 0.918, 0.930, 0.937, 0.940, 0.944, 0.938},//1400R
     {0.741, 0.811, 0.874, 0.891, 0.904, 0.914, 0.932, 0.940, 0.940, 0.943, 0.939},//1500R
     {0.660, 0.807, 0.878, 0.898, 0.901, 0.913, 0.924, 0.936, 0.940, 0.946, 0.941},//1600R
     };
    double x53x53EffH[39][Nbin] = {//X53X53
     {0.692, 0.846, 0.891, 0.917, 0.935, 0.927, 0.935, 0.926, 0.937, 1.000, 1.000},
     {0.684, 0.831, 0.891, 0.913, 0.920, 0.932, 0.939, 0.942, 0.954, 0.970, 0.983},
     {0.789, 0.876, 0.893, 0.923, 0.931, 0.944, 0.963, 0.960, 0.974, 0.944, 1.000},
     {0.677, 0.845, 0.893, 0.914, 0.916, 0.927, 0.932, 0.944, 0.940, 0.926, 0.938},
     {0.709, 0.833, 0.884, 0.910, 0.930, 0.921, 0.944, 0.949, 0.964, 0.971, 0.962},
     {0.723, 0.849, 0.892, 0.909, 0.917, 0.926, 0.931, 0.936, 0.940, 0.950, 0.931},
     {0.681, 0.832, 0.879, 0.909, 0.920, 0.929, 0.937, 0.939, 0.949, 0.952, 0.925},
     {0.734, 0.836, 0.892, 0.919, 0.929, 0.924, 0.947, 0.945, 0.945, 0.956, 0.875},
     {0.728, 0.842, 0.887, 0.910, 0.921, 0.930, 0.931, 0.933, 0.941, 0.938, 0.940},
     {0.666, 0.836, 0.893, 0.909, 0.920, 0.922, 0.937, 0.938, 0.948, 0.942, 0.935},
     {0.724, 0.831, 0.882, 0.903, 0.924, 0.933, 0.931, 0.943, 0.951, 0.926, 0.937},
     {0.728, 0.846, 0.889, 0.913, 0.922, 0.928, 0.932, 0.936, 0.936, 0.944, 0.942},
     {0.669, 0.827, 0.890, 0.909, 0.921, 0.930, 0.931, 0.936, 0.940, 0.946, 0.931},
     {0.717, 0.831, 0.877, 0.901, 0.912, 0.920, 0.927, 0.938, 0.939, 0.938, 0.935},
     {0.723, 0.829, 0.883, 0.903, 0.919, 0.928, 0.935, 0.945, 0.949, 0.943, 0.940},
     {0.748, 0.840, 0.890, 0.907, 0.919, 0.924, 0.929, 0.933, 0.936, 0.943, 0.940},
     {0.697, 0.826, 0.885, 0.903, 0.922, 0.931, 0.931, 0.936, 0.936, 0.945, 0.939},
     {0.704, 0.823, 0.876, 0.907, 0.915, 0.925, 0.930, 0.935, 0.943, 0.946, 0.945},
     {0.728, 0.829, 0.874, 0.905, 0.921, 0.922, 0.934, 0.939, 0.947, 0.938, 0.941},     
     {0.752, 0.836, 0.881, 0.904, 0.915, 0.925, 0.932, 0.935, 0.938, 0.947, 0.942},
     {0.694, 0.816, 0.870, 0.899, 0.917, 0.924, 0.932, 0.937, 0.941, 0.947, 0.936},
     {0.701, 0.826, 0.881, 0.902, 0.915, 0.924, 0.926, 0.934, 0.940, 0.946, 0.923},
     {0.712, 0.825, 0.868, 0.895, 0.910, 0.915, 0.927, 0.942, 0.941, 0.953, 0.929},
     {0.725, 0.834, 0.874, 0.901, 0.919, 0.928, 0.936, 0.942, 0.950, 0.953, 0.937},
     {0.742, 0.843, 0.880, 0.900, 0.912, 0.923, 0.929, 0.937, 0.938, 0.945, 0.941},
     {0.695, 0.814, 0.869, 0.895, 0.911, 0.924, 0.930, 0.938, 0.943, 0.941, 0.936},
     {0.699, 0.831, 0.874, 0.902, 0.912, 0.922, 0.933, 0.936, 0.942, 0.943, 0.930},
     {0.722, 0.824, 0.872, 0.897, 0.910, 0.920, 0.929, 0.934, 0.941, 0.941, 0.929},
     {0.730, 0.810, 0.869, 0.892, 0.912, 0.921, 0.933, 0.940, 0.940, 0.948, 0.926},
     {0.741, 0.839, 0.878, 0.895, 0.910, 0.922, 0.929, 0.935, 0.938, 0.943, 0.940},
     {0.693, 0.815, 0.864, 0.891, 0.904, 0.921, 0.933, 0.937, 0.939, 0.944, 0.935},
     {0.692, 0.812, 0.873, 0.902, 0.912, 0.921, 0.927, 0.939, 0.941, 0.938, 0.937},
     {0.734, 0.830, 0.874, 0.896, 0.910, 0.922, 0.928, 0.933, 0.939, 0.950, 0.928},
     {0.722, 0.854, 0.775, 0.875, 0.873, 0.859, 0.931, 0.918, 0.936, 0.909, 1.000},
     {0.738, 0.840, 0.876, 0.888, 0.906, 0.917, 0.928, 0.934, 0.939, 0.943, 0.939},
     {0.694, 0.803, 0.858, 0.883, 0.902, 0.914, 0.926, 0.938, 0.939, 0.945, 0.940},
     {0.693, 0.816, 0.865, 0.889, 0.908, 0.919, 0.931, 0.937, 0.942, 0.948, 0.930},
     {0.732, 0.823, 0.871, 0.893, 0.910, 0.918, 0.933, 0.934, 0.940, 0.943, 0.927},
     {0.729, 0.822, 0.861, 0.897, 0.905, 0.921, 0.919, 0.928, 0.937, 0.943, 0.940},
     };

    for(int ibin = Nbin-1; ibin >= 0; ibin--){
    	if (pt > ptMins[ibin]){
    		if (sample=="tttt") {*eff=1.0;}
    		else if (sample=="ttbar") {*eff=ttbarEff[ibin];}
    		else if (sample=="singletop") {*eff=STEff[ibin];}
    		else if (sample=="x53x53") {*eff=x53x53Eff[massIndex][ibin];}
    		else if (sample=="x53x53H") {*eff=x53x53EffH[massIndex][ibin];}
    		else{ std::cerr << "The sample " << sample << " not coded into HardcodedConditions::GetTtaggingEff2016APV! Aborting ..." << std::endl; std::abort();}
    		break;
    		}
    	}
}

void HardcodedConditions::GetTtaggingEff2016(double pt, double *eff, std::string sample, int massIndex){
   const int Nbin = 11;
   double ptMins[Nbin] = {300,350,400,450,500,550,600,700,800,1000,1200};
   double ttbarEff[Nbin] = {0.561, 0.806, 0.880, 0.904, 0.914, 0.919, 0.923, 0.926, 0.930, 0.931, 0.931};
   double STEff[Nbin] = {0.521, 0.792, 0.871, 0.894, 0.904, 0.905, 0.919, 0.915, 0.907, 0.906, 0.940}; 
 
    double x53x53Eff[12][Nbin] = {//X53X53
     {0.649, 0.843, 0.915, 0.930, 0.932, 0.934, 0.934, 0.936, 0.939, 0.947, 0.934},//700
     {0.691, 0.841, 0.903, 0.920, 0.930, 0.939, 0.942, 0.941, 0.943, 0.946, 0.929},//800
     {0.683, 0.844, 0.899, 0.918, 0.930, 0.927, 0.936, 0.942, 0.943, 0.944, 0.934},//900R
     {0.684, 0.834, 0.885, 0.911, 0.926, 0.934, 0.939, 0.937, 0.939, 0.948, 0.933},//1000R
     {0.712, 0.843, 0.889, 0.913, 0.927, 0.931, 0.938, 0.946, 0.938, 0.944, 0.932},//1100R
     {0.731, 0.834, 0.881, 0.905, 0.922, 0.928, 0.934, 0.941, 0.942, 0.940, 0.943},//1200R
     {0.674, 0.816, 0.876, 0.898, 0.911, 0.924, 0.934, 0.940, 0.941, 0.943, 0.943},//1300R
     {0.693, 0.812, 0.873, 0.895, 0.904, 0.919, 0.929, 0.938, 0.941, 0.944, 0.936},//1400R
     {0.702, 0.840, 0.873, 0.892, 0.908, 0.919, 0.932, 0.943, 0.944, 0.943, 0.939},//1500R
     {0.710, 0.812, 0.875, 0.893, 0.903, 0.917, 0.925, 0.937, 0.942, 0.944, 0.937},//1600R
     };
    double x53x53EffH[39][Nbin] = {//X53X53
     {0.678, 0.839, 0.904, 0.917, 0.927, 0.924, 0.931, 0.947, 0.946, 0.978, 1.000},
     {0.679, 0.838, 0.898, 0.910, 0.913, 0.930, 0.932, 0.944, 0.959, 0.949, 0.956},
     {0.771, 0.865, 0.909, 0.932, 0.934, 0.929, 0.944, 0.950, 0.952, 0.923, 0.800},
     {0.678, 0.845, 0.884, 0.908, 0.922, 0.922, 0.933, 0.935, 0.950, 0.939, 0.963},
     {0.693, 0.840, 0.887, 0.911, 0.928, 0.921, 0.940, 0.926, 0.957, 0.979, 1.000},
     {0.712, 0.842, 0.889, 0.909, 0.924, 0.922, 0.932, 0.932, 0.946, 0.935, 0.942},
     {0.674, 0.821, 0.882, 0.904, 0.917, 0.930, 0.930, 0.940, 0.942, 0.964, 0.972},
     {0.742, 0.854, 0.897, 0.907, 0.925, 0.932, 0.932, 0.938, 0.948, 0.963, 0.902},
     {0.704, 0.842, 0.894, 0.905, 0.920, 0.927, 0.926, 0.935, 0.944, 0.944, 0.932},
     {0.670, 0.839, 0.885, 0.913, 0.920, 0.930, 0.931, 0.937, 0.937, 0.945, 0.933},
     {0.722, 0.835, 0.882, 0.900, 0.918, 0.925, 0.933, 0.937, 0.940, 0.948, 0.881},
     {0.737, 0.843, 0.885, 0.906, 0.922, 0.928, 0.932, 0.931, 0.939, 0.942, 0.929},
     {0.698, 0.831, 0.886, 0.906, 0.919, 0.927, 0.935, 0.938, 0.942, 0.955, 0.935},
     {0.706, 0.826, 0.878, 0.901, 0.918, 0.926, 0.933, 0.933, 0.941, 0.945, 0.923},
     {0.739, 0.848, 0.886, 0.916, 0.920, 0.935, 0.939, 0.935, 0.946, 0.947, 0.930},
     {0.735, 0.842, 0.890, 0.906, 0.917, 0.928, 0.931, 0.935, 0.939, 0.944, 0.938},
     {0.697, 0.825, 0.880, 0.900, 0.920, 0.927, 0.935, 0.933, 0.941, 0.946, 0.941},
     {0.699, 0.824, 0.884, 0.907, 0.914, 0.921, 0.928, 0.936, 0.942, 0.944, 0.931},
     {0.724, 0.837, 0.874, 0.900, 0.910, 0.924, 0.934, 0.935, 0.945, 0.944, 0.940},     
     {0.731, 0.833, 0.881, 0.902, 0.916, 0.922, 0.931, 0.935, 0.938, 0.944, 0.947},
     {0.669, 0.820, 0.871, 0.904, 0.918, 0.924, 0.937, 0.940, 0.937, 0.939, 0.933},
     {0.701, 0.828, 0.874, 0.898, 0.922, 0.921, 0.931, 0.938, 0.941, 0.950, 0.932},
     {0.718, 0.828, 0.876, 0.897, 0.912, 0.927, 0.932, 0.941, 0.942, 0.946, 0.930},
     {0.708, 0.829, 0.886, 0.894, 0.921, 0.920, 0.933, 0.942, 0.940, 0.948, 0.942},
     {0.751, 0.837, 0.880, 0.893, 0.909, 0.923, 0.928, 0.935, 0.938, 0.946, 0.941},
     {0.691, 0.810, 0.868, 0.896, 0.909, 0.922, 0.929, 0.936, 0.936, 0.941, 0.941},
     {0.712, 0.819, 0.875, 0.896, 0.912, 0.921, 0.928, 0.935, 0.941, 0.940, 0.932},
     {0.722, 0.822, 0.873, 0.894, 0.908, 0.917, 0.926, 0.939, 0.943, 0.944, 0.940},
     {0.719, 0.803, 0.874, 0.898, 0.906, 0.922, 0.938, 0.939, 0.953, 0.939, 0.926},
     {0.736, 0.839, 0.878, 0.895, 0.906, 0.914, 0.928, 0.934, 0.940, 0.944, 0.937},
     {0.685, 0.810, 0.859, 0.890, 0.911, 0.918, 0.931, 0.933, 0.939, 0.940, 0.937},
     {0.711, 0.825, 0.868, 0.891, 0.912, 0.926, 0.932, 0.937, 0.943, 0.946, 0.937},
     {0.712, 0.821, 0.875, 0.893, 0.911, 0.921, 0.927, 0.933, 0.937, 0.936, 0.924},
     {0.732, 0.820, 0.865, 0.887, 0.903, 0.918, 0.928, 0.934, 0.940, 0.943, 0.924},
     {0.750, 0.833, 0.873, 0.893, 0.901, 0.915, 0.927, 0.931, 0.937, 0.946, 0.942},
     {0.678, 0.800, 0.859, 0.881, 0.899, 0.915, 0.931, 0.936, 0.941, 0.943, 0.942},
     {0.681, 0.825, 0.847, 0.864, 0.895, 0.914, 0.923, 0.934, 0.943, 0.955, 0.930},
     {0.719, 0.823, 0.871, 0.893, 0.911, 0.921, 0.927, 0.936, 0.939, 0.940, 0.928},
     {0.730, 0.825, 0.869, 0.887, 0.905, 0.912, 0.922, 0.939, 0.941, 0.947, 0.933},
     };

    for(int ibin = Nbin-1; ibin >= 0; ibin--){
    	if (pt > ptMins[ibin]){
    		if (sample=="tttt") {*eff=1.0;}
    		else if (sample=="ttbar") {*eff=ttbarEff[ibin];}
    		else if (sample=="singletop") {*eff=STEff[ibin];}
    		else if (sample=="x53x53") {*eff=x53x53Eff[massIndex][ibin];}
    		else if (sample=="x53x53H") {*eff=x53x53EffH[massIndex][ibin];}
    		else{ std::cerr << "The sample " << sample << " not coded into HardcodedConditions::GetTtaggingEff2016! Aborting ..." << std::endl; std::abort();}
    		break;
    		}
    	}

}
//add lower pT bins
void HardcodedConditions::GetTtaggingEff2017(double pt, double *eff, std::string sample, int massIndex){
   const int Nbin = 11;
   double ptMins[Nbin] = {300,350,400,450,500,550,600,700,800,1000,1200};
   double ttbarEff[Nbin] = {0.537, 0.794, 0.873, 0.898, 0.909, 0.914, 0.919, 0.923, 0.926, 0.932, 0.928};
   double STEff[Nbin] = {0.500, 0.779, 0.862, 0.890, 0.901, 0.911, 0.912, 0.910, 0.922, 0.903, 0.908};

    double x53x53Eff[10][Nbin] = {//X53X53
     {0.641, 0.839, 0.896, 0.919, 0.924, 0.936, 0.937, 0.939, 0.933, 0.937, 0.946},//700
     {0.655, 0.825, 0.900, 0.914, 0.930, 0.935, 0.937, 0.938, 0.936, 0.942, 0.939},//800
     {0.675, 0.832, 0.892, 0.913, 0.923, 0.933, 0.937, 0.936, 0.943, 0.942, 0.947},//900R
     {0.673, 0.827, 0.888, 0.907, 0.922, 0.932, 0.939, 0.940, 0.943, 0.940, 0.937},//1000R
     {0.690, 0.825, 0.885, 0.907, 0.921, 0.926, 0.934, 0.937, 0.936, 0.939, 0.940},//1100R
     {0.687, 0.829, 0.878, 0.904, 0.918, 0.926, 0.936, 0.937, 0.942, 0.943, 0.942},//1200R
     {0.691, 0.820, 0.876, 0.898, 0.909, 0.923, 0.931, 0.938, 0.939, 0.938, 0.940},//1300R
     {0.668, 0.824, 0.878, 0.892, 0.907, 0.918, 0.932, 0.938, 0.941, 0.942, 0.941},//1400R
     {0.673, 0.825, 0.877, 0.885, 0.904, 0.919, 0.925, 0.935, 0.939, 0.946, 0.943},//1500R
     {0.670, 0.816, 0.871, 0.891, 0.899, 0.911, 0.925, 0.936, 0.941, 0.939, 0.937},//1600R
     };
 
    double x53x53EffH[39][Nbin] = {//X53X53
     {0.660, 0.826, 0.884, 0.917, 0.915, 0.926, 0.929, 0.951, 0.947, 0.976, 1.000},
     {0.646, 0.826, 0.881, 0.901, 0.916, 0.918, 0.927, 0.940, 0.937, 0.956, 0.936},
     {0.763, 0.849, 0.886, 0.910, 0.926, 0.937, 0.928, 0.943, 0.950, 0.976, 1.000},
     {0.656, 0.825, 0.879, 0.902, 0.909, 0.917, 0.922, 0.927, 0.935, 0.938, 0.944},
     {0.668, 0.823, 0.882, 0.901, 0.907, 0.913, 0.927, 0.933, 0.942, 0.915, 0.865},
     {0.686, 0.828, 0.883, 0.900, 0.912, 0.916, 0.922, 0.925, 0.933, 0.935, 0.938},
     {0.646, 0.817, 0.877, 0.898, 0.907, 0.919, 0.928, 0.930, 0.934, 0.955, 0.944},
     {0.719, 0.830, 0.883, 0.903, 0.911, 0.928, 0.932, 0.931, 0.940, 0.967, 0.927},
     {0.691, 0.823, 0.879, 0.897, 0.910, 0.915, 0.922, 0.928, 0.930, 0.939, 0.935},
     {0.636, 0.824, 0.882, 0.907, 0.913, 0.923, 0.926, 0.932, 0.935, 0.932, 0.943},
     {0.688, 0.818, 0.875, 0.893, 0.903, 0.919, 0.921, 0.936, 0.937, 0.955, 0.960},
     {0.697, 0.826, 0.872, 0.893, 0.909, 0.915, 0.919, 0.926, 0.932, 0.937, 0.935},
     {0.654, 0.814, 0.875, 0.901, 0.917, 0.921, 0.929, 0.933, 0.937, 0.939, 0.924},
     {0.671, 0.820, 0.868, 0.893, 0.903, 0.913, 0.919, 0.930, 0.941, 0.939, 0.937},
     {0.710, 0.827, 0.877, 0.903, 0.911, 0.923, 0.926, 0.937, 0.940, 0.948, 0.939},
     {0.700, 0.815, 0.859, 0.894, 0.906, 0.913, 0.924, 0.925, 0.933, 0.931, 0.935},
     {0.668, 0.814, 0.870, 0.900, 0.914, 0.921, 0.929, 0.934, 0.936, 0.938, 0.924},
     {0.670, 0.817, 0.866, 0.897, 0.903, 0.917, 0.925, 0.931, 0.933, 0.939, 0.917},
     {0.710, 0.810, 0.868, 0.897, 0.911, 0.920, 0.927, 0.933, 0.940, 0.933, 0.949},     
     {0.713, 0.818, 0.867, 0.892, 0.904, 0.915, 0.921, 0.925, 0.931, 0.939, 0.934},
     {0.676, 0.806, 0.861, 0.891, 0.909, 0.920, 0.927, 0.935, 0.935, 0.939, 0.939},
     {0.674, 0.807, 0.871, 0.898, 0.908, 0.918, 0.923, 0.933, 0.936, 0.934, 0.933},
     {0.699, 0.818, 0.866, 0.887, 0.902, 0.913, 0.921, 0.930, 0.935, 0.936, 0.916},
     {0.706, 0.815, 0.867, 0.892, 0.909, 0.919, 0.929, 0.937, 0.940, 0.946, 0.944},
     {0.747, 0.840, 0.883, 0.901, 0.917, 0.923, 0.933, 0.939, 0.941, 0.944, 0.945},
     {0.698, 0.820, 0.874, 0.902, 0.922, 0.932, 0.937, 0.942, 0.945, 0.950, 0.944},
     {0.716, 0.827, 0.881, 0.908, 0.922, 0.931, 0.937, 0.942, 0.948, 0.947, 0.936},
     {0.701, 0.834, 0.881, 0.899, 0.924, 0.927, 0.937, 0.946, 0.946, 0.959, 0.940},
     {0.736, 0.834, 0.885, 0.903, 0.919, 0.929, 0.940, 0.945, 0.952, 0.954, 0.938},
     {0.733, 0.842, 0.881, 0.897, 0.909, 0.920, 0.932, 0.939, 0.942, 0.946, 0.946},
     {0.695, 0.812, 0.867, 0.896, 0.912, 0.927, 0.938, 0.945, 0.947, 0.950, 0.940},
     {0.721, 0.827, 0.877, 0.903, 0.916, 0.928, 0.938, 0.942, 0.947, 0.947, 0.934},
     {0.727, 0.829, 0.879, 0.902, 0.918, 0.927, 0.933, 0.941, 0.944, 0.945, 0.938},
     {0.738, 0.837, 0.877, 0.895, 0.910, 0.922, 0.934, 0.940, 0.945, 0.946, 0.945},
     {0.707, 0.818, 0.859, 0.881, 0.891, 0.901, 0.918, 0.926, 0.931, 0.935, 0.936},
     {0.648, 0.792, 0.843, 0.874, 0.893, 0.908, 0.921, 0.931, 0.936, 0.940, 0.935},
     {0.681, 0.799, 0.856, 0.881, 0.898, 0.912, 0.925, 0.933, 0.936, 0.943, 0.934},
     {0.701, 0.808, 0.860, 0.884, 0.900, 0.912, 0.924, 0.932, 0.935, 0.940, 0.926},
     {0.706, 0.808, 0.855, 0.878, 0.895, 0.907, 0.919, 0.929, 0.936, 0.940, 0.928},
     };

    for(int ibin = Nbin-1; ibin >= 0; ibin--){
    	if (pt > ptMins[ibin]){
    		if (sample=="tttt") {*eff=1.0;}
    		else if (sample=="ttbar") {*eff=ttbarEff[ibin];}
    		else if (sample=="singletop") {*eff=STEff[ibin];}
    		else if (sample=="x53x53") {*eff=x53x53Eff[massIndex][ibin];}
    		else if (sample=="x53x53H") {*eff=x53x53EffH[massIndex][ibin];}
    		else{ std::cerr << "The sample " << sample << " not coded into HardcodedConditions::GetTtaggingEff2017! Aborting ..." << std::endl; std::abort();}
    		break;
    		}
    	}
}

void HardcodedConditions::GetTtaggingEff2018(double pt, double *eff, std::string sample, int massIndex){
   const int Nbin = 11;
   double ptMins[Nbin] = {300,350,400,450,500,550,600,700,800,1000,1200};
   double ttbarEff[Nbin] = {0.529, 0.790, 0.870, 0.896, 0.907, 0.913, 0.918, 0.922, 0.923, 0.928, 0.927};
   double STEff[Nbin] = {0.496, 0.777, 0.864, 0.890, 0.899, 0.907, 0.911, 0.915, 0.918, 0.912, 0.891}; 

    double x53x53Eff[12][Nbin] = {//X53X53
     {0.624, 0.826, 0.897, 0.919, 0.925, 0.929, 0.933, 0.937, 0.942, 0.937, 0.937},//700
     {0.650, 0.838, 0.892, 0.916, 0.929, 0.931, 0.934, 0.940, 0.938, 0.933, 0.936},//800
     {0.677, 0.827, 0.888, 0.912, 0.925, 0.934, 0.934, 0.934, 0.944, 0.937, 0.930},//900R
     {0.666, 0.825, 0.887, 0.909, 0.918, 0.931, 0.934, 0.936, 0.938, 0.937, 0.938},//1000R
     {0.667, 0.826, 0.882, 0.906, 0.918, 0.928, 0.937, 0.936, 0.940, 0.942, 0.941},//1100R
     {0.667, 0.821, 0.874, 0.900, 0.914, 0.923, 0.933, 0.938, 0.938, 0.943, 0.944},//1200R
     {0.685, 0.827, 0.869, 0.890, 0.906, 0.920, 0.933, 0.938, 0.943, 0.940, 0.938},//1300R
     {0.695, 0.810, 0.872, 0.889, 0.905, 0.916, 0.929, 0.936, 0.940, 0.941, 0.939},//1400R
     {0.691, 0.808, 0.866, 0.889, 0.901, 0.913, 0.926, 0.936, 0.939, 0.939, 0.938},//1500R
     {0.683, 0.814, 0.861, 0.885, 0.895, 0.908, 0.923, 0.935, 0.940, 0.944, 0.939},//1600R
     };

    double x53x53EffH[39][Nbin] = {//X53X53
     {0.656, 0.828, 0.887, 0.909, 0.920, 0.936, 0.936, 0.926, 0.951, 0.991, 0.871},
     {0.650, 0.814, 0.876, 0.898, 0.914, 0.918, 0.927, 0.922, 0.932, 0.963, 0.953},
     {0.759, 0.863, 0.891, 0.906, 0.921, 0.931, 0.934, 0.946, 0.957, 0.950, 1.000},
     {0.663, 0.823, 0.878, 0.901, 0.910, 0.917, 0.926, 0.920, 0.944, 0.943, 0.961},
     {0.678, 0.828, 0.874, 0.897, 0.913, 0.916, 0.932, 0.932, 0.945, 0.953, 0.939},
     {0.679, 0.824, 0.879, 0.901, 0.911, 0.919, 0.923, 0.930, 0.931, 0.937, 0.941},
     {0.657, 0.817, 0.875, 0.897, 0.910, 0.917, 0.924, 0.927, 0.937, 0.950, 0.935},
     {0.708, 0.829, 0.879, 0.902, 0.906, 0.925, 0.934, 0.939, 0.939, 0.959, 0.936},
     {0.681, 0.820, 0.881, 0.894, 0.910, 0.915, 0.923, 0.929, 0.930, 0.934, 0.936},
     {0.655, 0.814, 0.874, 0.902, 0.912, 0.919, 0.928, 0.930, 0.930, 0.942, 0.921},
     {0.674, 0.805, 0.861, 0.892, 0.906, 0.917, 0.923, 0.931, 0.940, 0.942, 0.941},
     {0.702, 0.825, 0.871, 0.894, 0.907, 0.916, 0.922, 0.925, 0.933, 0.936, 0.937},
     {0.648, 0.809, 0.877, 0.900, 0.916, 0.920, 0.927, 0.929, 0.934, 0.927, 0.936},
     {0.680, 0.817, 0.868, 0.891, 0.901, 0.913, 0.923, 0.932, 0.944, 0.945, 0.934},
     {0.704, 0.817, 0.874, 0.898, 0.912, 0.923, 0.927, 0.934, 0.948, 0.955, 0.945},
     {0.704, 0.820, 0.868, 0.891, 0.903, 0.911, 0.921, 0.926, 0.930, 0.935, 0.939},
     {0.665, 0.802, 0.868, 0.896, 0.910, 0.919, 0.927, 0.931, 0.934, 0.935, 0.935},
     {0.679, 0.811, 0.870, 0.896, 0.907, 0.913, 0.924, 0.931, 0.932, 0.940, 0.930},
     {0.702, 0.814, 0.861, 0.892, 0.907, 0.921, 0.926, 0.935, 0.942, 0.944, 0.945},     
     {0.705, 0.819, 0.864, 0.888, 0.902, 0.910, 0.920, 0.925, 0.929, 0.935, 0.939},
     {0.662, 0.796, 0.862, 0.890, 0.907, 0.917, 0.924, 0.933, 0.939, 0.942, 0.941},
     {0.687, 0.813, 0.871, 0.892, 0.908, 0.912, 0.924, 0.930, 0.936, 0.941, 0.921},
     {0.691, 0.806, 0.861, 0.886, 0.897, 0.910, 0.921, 0.931, 0.935, 0.941, 0.929},
     {0.704, 0.807, 0.864, 0.887, 0.910, 0.915, 0.927, 0.940, 0.940, 0.946, 0.946},
     {0.718, 0.814, 0.862, 0.883, 0.900, 0.907, 0.917, 0.924, 0.929, 0.936, 0.936},
     {0.662, 0.796, 0.854, 0.888, 0.903, 0.918, 0.924, 0.929, 0.934, 0.940, 0.931},
     {0.683, 0.804, 0.864, 0.888, 0.907, 0.917, 0.927, 0.932, 0.935, 0.942, 0.928},
     {0.685, 0.810, 0.860, 0.889, 0.901, 0.909, 0.919, 0.929, 0.937, 0.936, 0.921},
     {0.708, 0.808, 0.850, 0.883, 0.901, 0.915, 0.927, 0.934, 0.940, 0.943, 0.938},
     {0.723, 0.817, 0.858, 0.882, 0.893, 0.903, 0.917, 0.924, 0.929, 0.937, 0.936},
     {0.673, 0.786, 0.851, 0.877, 0.899, 0.911, 0.923, 0.930, 0.933, 0.939, 0.933},
     {0.683, 0.803, 0.858, 0.884, 0.901, 0.913, 0.923, 0.934, 0.934, 0.939, 0.929},
     {0.694, 0.809, 0.864, 0.884, 0.901, 0.910, 0.919, 0.930, 0.933, 0.938, 0.925},
     {0.711, 0.803, 0.852, 0.880, 0.895, 0.905, 0.918, 0.929, 0.935, 0.942, 0.933},
     {0.692, 0.812, 0.855, 0.877, 0.890, 0.902, 0.913, 0.926, 0.930, 0.934, 0.936},
     {0.662, 0.786, 0.841, 0.870, 0.892, 0.904, 0.919, 0.929, 0.934, 0.938, 0.935},
     {0.672, 0.800, 0.850, 0.879, 0.894, 0.913, 0.923, 0.929, 0.934, 0.939, 0.933},
     {0.696, 0.804, 0.858, 0.882, 0.896, 0.912, 0.921, 0.930, 0.935, 0.937, 0.925},
     {0.711, 0.808, 0.852, 0.876, 0.898, 0.905, 0.919, 0.928, 0.936, 0.940, 0.928},
     };

    for(int ibin = Nbin-1; ibin >= 0; ibin--){
    	if (pt > ptMins[ibin]){
    		if (sample=="tttt") {*eff=1.0;}
    		else if (sample=="ttbar") {*eff=ttbarEff[ibin];}
    		else if (sample=="singletop") {*eff=STEff[ibin];}
    		else if (sample=="x53x53") {*eff=x53x53Eff[massIndex][ibin];}
    		else if (sample=="x53x53H") {*eff=x53x53EffH[massIndex][ibin];}
    		else{ std::cerr << "The sample " << sample << " not coded into HardcodedConditions::GetTtaggingEff2018! Aborting ..." << std::endl; std::abort();}
    		break;
    		}
    	}

}


/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|           W TAGGING SCALE FACTOR SECTION            |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

void HardcodedConditions::GetWtaggingSF(double pt, double *PNsf, double *PNsfup, double *PNsfdn, std::string year){
  //The main getter for GetWtaggingSF Scale Factors
  *PNsf   = 1.000;
  *PNsfup = 0.000;
  *PNsfdn = 0.000;
  if      (year=="2016APV") GetWtaggingSF2016APV(pt, PNsf, PNsfup, PNsfdn);
  else if (year=="2016") GetWtaggingSF2016(pt, PNsf, PNsfup, PNsfdn);
  else if (year=="2017") GetWtaggingSF2017(pt, PNsf, PNsfup, PNsfdn);
  else if (year=="2018") GetWtaggingSF2018(pt, PNsf, PNsfup, PNsfdn);
}//end GetWtaggingSF

void HardcodedConditions::GetWtaggingSF2016APV(double pt, double *PNsf, double *PNsfup, double *PNsfdn){
  if ( pt >= 200.0 and pt <= 300.0 ) {
    *PNsf   = 1.0112160124733622;
    *PNsfdn = 1.0112160124733622;
    *PNsfup = 0.005465987283177598; }
  else if ( pt > 300.0 and pt <= 400.0 ) {
    *PNsf   = 1.0030071418307132;
    *PNsfdn = 0.0938784945034159;
    *PNsfup = 0.10313623868572142; }
  else if ( pt > 400.0 and pt <= 800.0 ) {
    *PNsf   =1.0529715854028163 ;
    *PNsfdn =0.10026392476050128;
    *PNsfup =0.1004798066677628; }
  else {
    *PNsf   = 1.;
    *PNsfup = 0.;
    *PNsfdn = 0.; }
}
//FGH
void HardcodedConditions::GetWtaggingSF2016(double pt, double *PNsf, double *PNsfup, double *PNsfdn){
  if ( pt >= 200.0 and pt <= 300.0 ) {
    *PNsf   = 1.1277146862875185;
    *PNsfdn = 0.06347493639596635;
    *PNsfup = 0.06355513497258214; }
  else if ( pt > 300.0 and pt <= 400.0 ) {
    *PNsf   = 1.0836717298969585;
    *PNsfdn = 0.049694041648482346;
    *PNsfup = 0.0456811845094115; }
  else if ( pt > 400.0 and pt <= 800.0 ) {
    *PNsf   = 1.155322907991434;
    *PNsfdn = 0.13837723466132212;
    *PNsfup = 0.07985775972577314; }
  else {
    *PNsf   = 1.;
    *PNsfup = 0.;
    *PNsfdn = 0.; }
}

void HardcodedConditions::GetWtaggingSF2017(double pt, double *PNsf, double *PNsfup, double *PNsfdn){
  if ( pt >= 200.0 and pt <= 300.0 ) {
    *PNsf   = 0.9587246533669983;
    *PNsfdn = 0.040422897033849936;
    *PNsfup = 0.04680109244747821; }
  else if ( pt > 300.0 and pt <= 400.0 ) {
    *PNsf   = 0.9439519374013672;
    *PNsfdn = 0.052956710009177455;
    *PNsfup = 0.08460017084174382; }
  else if ( pt > 400.0 and pt <= 800.0 ) {
    *PNsf   = 0.7885701617038146;
    *PNsfdn = 0.09584342583997385;
    *PNsfup = 0.1244672628782863; }
  else {
    *PNsf   = 1.;
    *PNsfup = 0.;
    *PNsfdn = 0.; }
}

void HardcodedConditions::GetWtaggingSF2018(double pt, double *PNsf, double *PNsfup, double *PNsfdn){
  if ( pt >= 200.0 and pt <= 300.0 ) {
    *PNsf   = 1.0207719507098578;
    *PNsfdn = 0.02690925331582794;
    *PNsfup = 0.022482432399033303; }
  else if ( pt > 300.0 and pt <= 400.0 ) {
    *PNsf   = 0.9662561264360947;
    *PNsfdn = 0.05594758980276515;
    *PNsfup = 0.05535242117725969; }
  else if ( pt > 400.0 and pt <= 800.0 ) {
    *PNsf   = 1.0342599879066012;
    *PNsfdn = 0.1560764591233591;
    *PNsfup = 0.059018250935544414; }
  else {
    *PNsf   = 1.;
    *PNsfup = 0.;
    *PNsfdn = 0.; }
}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|            W TAGGING EFFICIENCY SECTION             |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

void HardcodedConditions::GetWtaggingEff(double pt, double *eff, std::string year, std::string sample, int massIndex)
{
  //The main getter for GetWtaggingEff Efficiencies
  *eff = 1.000;
  if      (year=="2016APV") GetWtaggingEff2016APV(pt, eff, sample, massIndex);
  else if (year=="2016") GetWtaggingEff2016(pt, eff, sample, massIndex);
  else if (year=="2017") GetWtaggingEff2017(pt, eff, sample, massIndex);
  else if (year=="2018") GetWtaggingEff2018(pt, eff, sample, massIndex);
}//end GetWtaggingEff

// not updated for UL yet
void HardcodedConditions::GetWtaggingEff2016APV(double pt, double *eff, std::string sample, int massIndex){
    const int NbinB = 12;
    const int NbinS = 14;
    double ptMinsB[NbinB] = {175,200,250,300,350,400,450,500,550,600,700,800};
    double ptMinsS[NbinS] = {175,200,250,300,350,400,450,500,550,600,700,800,1000,1200};
    double ttbarEff[NbinB]= {0.518, 0.643, 0.611, 0.583, 0.559, 0.528, 0.486, 0.450, 0.427, 0.396, 0.355, 0.302}; // ttbar
    double STtEff[NbinB]  = {0.568, 0.681, 0.621, 0.556, 0.511, 0.479, 0.443, 0.415, 0.404, 0.395, 0.400, 0.375};
    double STtWEff[NbinB] = {0.584, 0.718, 0.698, 0.672, 0.664, 0.654, 0.663, 0.660, 0.665, 0.687, 0.702, 0.740};
    double WVEff[NbinB]   = {0.635, 0.737, 0.697, 0.660, 0.631, 0.628, 0.613, 0.606, 0.619, 0.608, 0.615, 0.646}; // WW, WZ, etc. 

    double x53x53Eff[12][NbinS] = {//X53X53
       {0.385, 0.546, 0.561, 0.562, 0.575, 0.603, 0.613, 0.619, 0.627, 0.635, 0.622, 0.608, 0.563, 0.511},//700
       {0.355, 0.509, 0.522, 0.533, 0.561, 0.578, 0.597, 0.611, 0.621, 0.637, 0.636, 0.637, 0.621, 0.637},//800
       {0.319, 0.469, 0.485, 0.504, 0.532, 0.558, 0.575, 0.598, 0.611, 0.627, 0.644, 0.640, 0.648, 0.644},//900R
       {0.280, 0.437, 0.447, 0.472, 0.501, 0.532, 0.563, 0.580, 0.596, 0.623, 0.638, 0.654, 0.660, 0.635},//1000R
       {0.238, 0.404, 0.418, 0.436, 0.468, 0.511, 0.533, 0.556, 0.580, 0.605, 0.631, 0.645, 0.648, 0.669},//1100R
       {0.224, 0.370, 0.392, 0.408, 0.445, 0.472, 0.508, 0.542, 0.559, 0.595, 0.620, 0.642, 0.668, 0.670},//1200R
       {0.201, 0.357, 0.366, 0.383, 0.412, 0.446, 0.487, 0.517, 0.545, 0.577, 0.606, 0.633, 0.656, 0.673},//1300R
       {0.187, 0.340, 0.344, 0.358, 0.389, 0.421, 0.452, 0.492, 0.521, 0.556, 0.583, 0.623, 0.644, 0.669},//1400R
       {0.170, 0.319, 0.330, 0.333, 0.360, 0.387, 0.428, 0.466, 0.492, 0.536, 0.573, 0.610, 0.645, 0.657},//1500R
       {0.150, 0.298, 0.307, 0.316, 0.344, 0.364, 0.400, 0.437, 0.474, 0.515, 0.558, 0.598, 0.629, 0.658},//1600R
      };     
      //I don't use these
    double x53x53EffH[39][NbinS] = {//X53X53
     {0.353, 0.445, 0.416, 0.369, 0.340, 0.296, 0.282, 0.268, 0.251, 0.227, 0.128, 0.137, 0.500, 0.000},//MX500 MH 200
     {0.316, 0.432, 0.415, 0.396, 0.376, 0.367, 0.348, 0.323, 0.349, 0.272, 0.257, 0.229, 0.129, 0.167},//MX600 MH200
     {0.221, 0.307, 0.279, 0.256, 0.237, 0.210, 0.199, 0.197, 0.180, 0.128, 0.118, 0.105, 0.000, 0.000},//MX600 MH400
     {0.261, 0.376, 0.370, 0.360, 0.354, 0.352, 0.348, 0.334, 0.353, 0.321, 0.283, 0.247, 0.247, 0.103},//MX700 MH200
     {0.296, 0.394, 0.373, 0.339, 0.311, 0.294, 0.274, 0.262, 0.247, 0.207, 0.180, 0.117, 0.267, 0.000},//MX700 MH400
     {0.217, 0.327, 0.322, 0.320, 0.320, 0.325, 0.325, 0.347, 0.325, 0.326, 0.321, 0.262, 0.205, 0.167},//MX800 MH200
     {0.270, 0.394, 0.382, 0.373, 0.350, 0.349, 0.319, 0.315, 0.308, 0.278, 0.240, 0.201, 0.135, 0.000},//MX800 MH400
     {0.216, 0.312, 0.305, 0.291, 0.278, 0.272, 0.268, 0.259, 0.244, 0.232, 0.211, 0.145, 0.069, 0.143},//MX800 MH600
     {0.177, 0.280, 0.281, 0.280, 0.286, 0.291, 0.301, 0.299, 0.307, 0.303, 0.285, 0.282, 0.279, 0.229},
     {0.229, 0.360, 0.362, 0.355, 0.353, 0.352, 0.349, 0.335, 0.320, 0.318, 0.304, 0.248, 0.185, 0.250},
     {0.223, 0.336, 0.332, 0.302, 0.296, 0.293, 0.294, 0.270, 0.262, 0.253, 0.263, 0.241, 0.175, 0.071},
     {0.145, 0.245, 0.250, 0.252, 0.255, 0.263, 0.275, 0.282, 0.285, 0.292, 0.277, 0.276, 0.237, 0.211},
     {0.193, 0.320, 0.325, 0.325, 0.327, 0.331, 0.341, 0.336, 0.325, 0.311, 0.311, 0.268, 0.225, 0.093},
     {0.212, 0.338, 0.336, 0.318, 0.321, 0.309, 0.309, 0.303, 0.291, 0.279, 0.259, 0.239, 0.146, 0.205},
     {0.178, 0.283, 0.286, 0.269, 0.267, 0.268, 0.268, 0.268, 0.271, 0.253, 0.221, 0.194, 0.179, 0.115},
     {0.118, 0.209, 0.222, 0.222, 0.226, 0.238, 0.239, 0.253, 0.270, 0.259, 0.257, 0.251, 0.235, 0.179},
     {0.172, 0.294, 0.294, 0.290, 0.295, 0.304, 0.319, 0.319, 0.316, 0.314, 0.303, 0.279, 0.237, 0.223},
     {0.197, 0.318, 0.320, 0.315, 0.311, 0.319, 0.313, 0.326, 0.309, 0.301, 0.277, 0.213, 0.207, 0.107},
     {0.176, 0.294, 0.288, 0.274, 0.272, 0.270, 0.287, 0.267, 0.264, 0.268, 0.264, 0.242, 0.181, 0.116},     
     {0.104, 0.189, 0.196, 0.198, 0.202, 0.209, 0.217, 0.230, 0.236, 0.242, 0.225, 0.238, 0.227, 0.186},
     {0.149, 0.260, 0.265, 0.268, 0.266, 0.278, 0.286, 0.301, 0.292, 0.300, 0.291, 0.279, 0.226, 0.172},
     {0.173, 0.289, 0.295, 0.291, 0.296, 0.301, 0.310, 0.302, 0.311, 0.303, 0.290, 0.261, 0.210, 0.131},
     {0.178, 0.291, 0.292, 0.281, 0.276, 0.279, 0.275, 0.274, 0.278, 0.263, 0.254, 0.237, 0.203, 0.122},
     {0.147, 0.259, 0.258, 0.245, 0.246, 0.248, 0.255, 0.250, 0.240, 0.248, 0.234, 0.205, 0.156, 0.168},
     {0.091, 0.167, 0.176, 0.177, 0.175, 0.193, 0.200, 0.207, 0.211, 0.219, 0.229, 0.216, 0.208, 0.161},
     {0.130, 0.235, 0.240, 0.234, 0.237, 0.245, 0.263, 0.265, 0.277, 0.280, 0.288, 0.278, 0.247, 0.187},
     {0.152, 0.266, 0.270, 0.268, 0.266, 0.279, 0.290, 0.294, 0.292, 0.299, 0.286, 0.267, 0.232, 0.177},
     {0.158, 0.272, 0.280, 0.279, 0.276, 0.279, 0.282, 0.285, 0.287, 0.270, 0.254, 0.233, 0.219, 0.121},
     {0.156, 0.262, 0.257, 0.244, 0.242, 0.234, 0.238, 0.244, 0.255, 0.253, 0.248, 0.211, 0.225, 0.168},
     {0.084, 0.147, 0.159, 0.157, 0.162, 0.171, 0.177, 0.184, 0.198, 0.205, 0.208, 0.206, 0.192, 0.171},
     {0.120, 0.216, 0.218, 0.213, 0.214, 0.225, 0.237, 0.256, 0.255, 0.265, 0.275, 0.258, 0.228, 0.185},
     {0.143, 0.253, 0.250, 0.247, 0.248, 0.252, 0.265, 0.274, 0.284, 0.294, 0.287, 0.247, 0.221, 0.161},
     {0.137, 0.256, 0.259, 0.263, 0.267, 0.273, 0.278, 0.271, 0.275, 0.281, 0.264, 0.257, 0.218, 0.147},
     {0.282, 0.284, 0.263, 0.213, 0.237, 0.271, 0.231, 0.382, 0.207, 0.386, 0.143, 0.389, 0.143, 0.000},
     {0.071, 0.141, 0.148, 0.142, 0.142, 0.152, 0.159, 0.165, 0.175, 0.184, 0.186, 0.194, 0.181, 0.147},
     {0.111, 0.197, 0.200, 0.192, 0.196, 0.208, 0.217, 0.228, 0.233, 0.240, 0.248, 0.243, 0.231, 0.184},
     {0.128, 0.232, 0.235, 0.224, 0.223, 0.238, 0.244, 0.252, 0.253, 0.262, 0.261, 0.248, 0.221, 0.173},
     {0.130, 0.237, 0.240, 0.236, 0.242, 0.253, 0.261, 0.267, 0.271, 0.270, 0.264, 0.243, 0.197, 0.169},
     {0.144, 0.257, 0.246, 0.247, 0.243, 0.264, 0.245, 0.232, 0.242, 0.239, 0.247, 0.204, 0.191, 0.093},
     };

    if(sample=="x53x53" || sample=="TpTp" || sample=="BpBp" || sample=="x53x53H"){
    	for(int ibin = NbinS-1; ibin >= 0; ibin--){
    		if(pt > ptMinsS[ibin]){
    			if(sample=="x53x53") {*eff=x53x53Eff[massIndex][ibin];}
    			else if(sample=="x53x53H") {*eff=x53x53EffH[massIndex][ibin];}
    			else if(sample=="TpTp") {*eff=1;}
    			else if(sample=="BpBp") {*eff=1;}
    			else{ std::cerr << "The sample " << sample << " not coded into HardcodedConditions::GetWtaggingEff2016APV! Aborting ..." << std::endl; std::abort();}
    			break;
    			}
    		}
    	}
    else{
    	for(int ibin = NbinB-1; ibin >= 0; ibin--){
    		if(pt > ptMinsB[ibin]){
    			if(sample=="tttt") {*eff=1;}
    			else if(sample=="ttbar") {*eff=ttbarEff[ibin];}
    			else if(sample=="singletopt") {*eff=STtEff[ibin];}
    			else if(sample=="singletoptW") {*eff=STtWEff[ibin];}
    			else if(sample=="WV") {*eff=WVEff[ibin];}
    			else{ std::cerr << "The sample " << sample << " not coded into HardcodedConditions::GetWtaggingEff2016APV! Aborting ..." << std::endl; std::abort();}
    			break;
    			}
    		}
    	}
 
}

void HardcodedConditions::GetWtaggingEff2016(double pt, double *eff, std::string sample, int massIndex){
    const int NbinB = 12;
    const int NbinS = 14;
    double ptMinsB[NbinB] = {175,200,250,300,350,400,450,500,550,600,700,800};
    double ptMinsS[NbinS] = {175,200,250,300,350,400,450,500,550,600,700,800,1000,1200};
    double ttbarEff[NbinB]= {0.486, 0.614, 0.565, 0.518, 0.484, 0.468, 0.459, 0.443, 0.425, 0.400, 0.368, 0.315}; // ttbar
    double STtEff[NbinB]  = {0.558, 0.683, 0.636, 0.588, 0.564, 0.541, 0.559, 0.534, 0.527, 0.566, 0.564, 0.624}; // single top (s and t channel had 0 boosted tops)
    double STtWEff[NbinB] = {0.577, 0.716, 0.697, 0.671, 0.659, 0.660, 0.672, 0.665, 0.659, 0.684, 0.697, 0.712}; // single top (s and t channel had 0 boosted tops)
    double WVEff[NbinB]   = {0.623, 0.731, 0.697, 0.657, 0.634, 0.627, 0.616, 0.609, 0.612, 0.615, 0.626, 0.609}; // WW, WZ, etc.  


    double x53x53Eff[12][NbinS] = {//X53X53
       {0.394, 0.540, 0.557, 0.567, 0.583, 0.600, 0.614, 0.624, 0.638, 0.642, 0.629, 0.617, 0.584, 0.644},//700
       {0.345, 0.506, 0.521, 0.529, 0.555, 0.578, 0.599, 0.612, 0.630, 0.641, 0.644, 0.648, 0.627, 0.647},//800
       {0.296, 0.462, 0.480, 0.503, 0.532, 0.556, 0.577, 0.597, 0.610, 0.635, 0.646, 0.648, 0.661, 0.637},//900R
       {0.277, 0.437, 0.453, 0.472, 0.498, 0.531, 0.558, 0.576, 0.597, 0.627, 0.644, 0.647, 0.672, 0.674},//1000R
       {0.246, 0.403, 0.415, 0.436, 0.465, 0.509, 0.534, 0.562, 0.591, 0.615, 0.630, 0.656, 0.664, 0.672},//1100R
       {0.240, 0.380, 0.387, 0.407, 0.435, 0.480, 0.509, 0.543, 0.564, 0.592, 0.616, 0.643, 0.672, 0.679},//1200R
       {0.210, 0.353, 0.360, 0.380, 0.407, 0.445, 0.483, 0.515, 0.541, 0.576, 0.611, 0.635, 0.659, 0.678},//1300R
       {0.192, 0.331, 0.344, 0.365, 0.378, 0.417, 0.456, 0.488, 0.524, 0.561, 0.592, 0.622, 0.653, 0.669},//1400R
       {0.160, 0.315, 0.323, 0.331, 0.362, 0.392, 0.425, 0.467, 0.493, 0.540, 0.576, 0.621, 0.648, 0.670},//1500R
       {0.167, 0.304, 0.304, 0.315, 0.337, 0.367, 0.397, 0.439, 0.470, 0.517, 0.562, 0.600, 0.640, 0.664},//1600R
      };     
    double x53x53EffH[39][NbinS] = {//X53X53
     {0.347, 0.443, 0.406, 0.369, 0.338, 0.315, 0.280, 0.259, 0.214, 0.182, 0.107, 0.143, 0.143, 0.000},//MX500 MH 200
     {0.305, 0.422, 0.417, 0.391, 0.379, 0.370, 0.355, 0.333, 0.319, 0.310, 0.247, 0.256, 0.250, 0.125},//MX600 MH200
     {0.234, 0.303, 0.291, 0.250, 0.216, 0.191, 0.202, 0.168, 0.160, 0.185, 0.082, 0.143, 0.000, 0.000},//MX600 MH400
     {0.254, 0.370, 0.364, 0.366, 0.362, 0.358, 0.358, 0.350, 0.340, 0.318, 0.288, 0.245, 0.221, 0.125},//MX700 MH200
     {0.275, 0.393, 0.372, 0.338, 0.314, 0.291, 0.283, 0.265, 0.245, 0.232, 0.217, 0.136, 0.100, 0.143},//MX700 MH400
     {0.213, 0.322, 0.327, 0.320, 0.327, 0.326, 0.328, 0.325, 0.333, 0.333, 0.312, 0.256, 0.270, 0.197},//MX800 MH200
     {0.270, 0.386, 0.383, 0.363, 0.355, 0.344, 0.322, 0.322, 0.303, 0.261, 0.235, 0.196, 0.111, 0.053},//MX800 MH400
     {0.207, 0.313, 0.309, 0.288, 0.275, 0.271, 0.253, 0.280, 0.258, 0.246, 0.201, 0.144, 0.304, 0.000},//MX800 MH600
     {0.169, 0.279, 0.285, 0.283, 0.283, 0.299, 0.296, 0.301, 0.306, 0.308, 0.314, 0.282, 0.229, 0.207},
     {0.222, 0.362, 0.359, 0.359, 0.347, 0.351, 0.347, 0.332, 0.328, 0.307, 0.305, 0.259, 0.140, 0.080},
     {0.224, 0.334, 0.328, 0.299, 0.291, 0.278, 0.282, 0.277, 0.279, 0.268, 0.236, 0.216, 0.180, 0.048},
     {0.142, 0.242, 0.245, 0.243, 0.251, 0.265, 0.267, 0.278, 0.276, 0.278, 0.285, 0.265, 0.228, 0.219},
     {0.189, 0.317, 0.318, 0.325, 0.326, 0.338, 0.328, 0.338, 0.340, 0.322, 0.313, 0.278, 0.235, 0.203},
     {0.210, 0.329, 0.338, 0.331, 0.322, 0.312, 0.314, 0.300, 0.293, 0.285, 0.260, 0.244, 0.181, 0.094},
     {0.178, 0.277, 0.283, 0.276, 0.269, 0.274, 0.260, 0.270, 0.265, 0.255, 0.232, 0.221, 0.133, 0.029},
     {0.122, 0.208, 0.219, 0.219, 0.223, 0.233, 0.250, 0.256, 0.254, 0.263, 0.262, 0.252, 0.227, 0.161},
     {0.169, 0.287, 0.295, 0.289, 0.302, 0.309, 0.311, 0.321, 0.326, 0.321, 0.307, 0.291, 0.271, 0.220},
     {0.187, 0.320, 0.316, 0.311, 0.317, 0.314, 0.317, 0.319, 0.304, 0.305, 0.269, 0.258, 0.186, 0.175},
     {0.193, 0.291, 0.290, 0.270, 0.260, 0.265, 0.267, 0.264, 0.270, 0.267, 0.230, 0.258, 0.197, 0.175},     
     {0.106, 0.187, 0.194, 0.194, 0.198, 0.208, 0.219, 0.236, 0.231, 0.245, 0.246, 0.246, 0.243, 0.202},
     {0.145, 0.254, 0.262, 0.262, 0.266, 0.285, 0.292, 0.303, 0.310, 0.303, 0.293, 0.275, 0.235, 0.180},
     {0.171, 0.287, 0.294, 0.288, 0.295, 0.295, 0.315, 0.309, 0.303, 0.291, 0.295, 0.270, 0.185, 0.102},
     {0.176, 0.294, 0.293, 0.286, 0.281, 0.280, 0.283, 0.277, 0.271, 0.281, 0.254, 0.234, 0.239, 0.213},
     {0.143, 0.257, 0.258, 0.239, 0.241, 0.245, 0.246, 0.259, 0.265, 0.254, 0.242, 0.220, 0.194, 0.105},
     {0.095, 0.164, 0.174, 0.173, 0.181, 0.185, 0.198, 0.204, 0.212, 0.217, 0.229, 0.226, 0.223, 0.158},
     {0.125, 0.236, 0.238, 0.236, 0.243, 0.249, 0.258, 0.265, 0.290, 0.290, 0.272, 0.274, 0.228, 0.191},
     {0.152, 0.260, 0.268, 0.264, 0.272, 0.281, 0.288, 0.295, 0.298, 0.295, 0.290, 0.261, 0.211, 0.142},
     {0.167, 0.274, 0.274, 0.277, 0.280, 0.278, 0.280, 0.284, 0.281, 0.276, 0.263, 0.249, 0.239, 0.184},
     {0.162, 0.268, 0.251, 0.238, 0.239, 0.242, 0.233, 0.244, 0.231, 0.251, 0.236, 0.221, 0.123, 0.100},
     {0.091, 0.152, 0.157, 0.154, 0.162, 0.167, 0.178, 0.187, 0.195, 0.201, 0.213, 0.211, 0.204, 0.183},
     {0.114, 0.215, 0.214, 0.211, 0.218, 0.230, 0.237, 0.248, 0.254, 0.260, 0.262, 0.270, 0.245, 0.202},
     {0.144, 0.245, 0.245, 0.242, 0.243, 0.256, 0.262, 0.274, 0.285, 0.283, 0.267, 0.252, 0.206, 0.188},
     {0.146, 0.247, 0.260, 0.261, 0.268, 0.267, 0.273, 0.277, 0.286, 0.276, 0.263, 0.245, 0.190, 0.176},
     {0.148, 0.259, 0.266, 0.249, 0.247, 0.249, 0.249, 0.240, 0.252, 0.252, 0.242, 0.222, 0.220, 0.183},
     {0.077, 0.139, 0.143, 0.147, 0.140, 0.152, 0.160, 0.169, 0.178, 0.187, 0.194, 0.196, 0.185, 0.172},
     {0.104, 0.200, 0.201, 0.196, 0.191, 0.201, 0.219, 0.225, 0.236, 0.245, 0.247, 0.242, 0.235, 0.207},
     {0.129, 0.228, 0.239, 0.228, 0.220, 0.219, 0.242, 0.251, 0.238, 0.262, 0.259, 0.255, 0.239, 0.202},
     {0.128, 0.231, 0.245, 0.239, 0.244, 0.250, 0.259, 0.268, 0.274, 0.274, 0.260, 0.238, 0.199, 0.160},
     {0.129, 0.241, 0.248, 0.247, 0.242, 0.245, 0.251, 0.251, 0.252, 0.250, 0.245, 0.224, 0.210, 0.139},
     };


    if(sample=="x53x53" || sample=="TpTp" || sample=="BpBp" || sample=="x53x53H"){
    	for(int ibin = NbinS-1; ibin >= 0; ibin--){
    		if(pt > ptMinsS[ibin]){
    			if(sample=="x53x53") {*eff=x53x53Eff[massIndex][ibin];}
    			else if(sample=="x53x53H") {*eff=x53x53EffH[massIndex][ibin];}
    			else if(sample=="TpTp") {*eff=1;}
    			else if(sample=="BpBp") {*eff=1;}
    			else{ std::cerr << "The sample " << sample << " not coded into HardcodedConditions::GetWtaggingEff2016! Aborting ..." << std::endl; std::abort();}
    			break;
    			}
    		}
    	}
    else{
    	for(int ibin = NbinB-1; ibin >= 0; ibin--){
    		if(pt > ptMinsB[ibin]){
    			if(sample=="tttt") {*eff=1;}
    			else if(sample=="ttbar") {*eff=ttbarEff[ibin];}
    			else if(sample=="singletopt") {*eff=STtEff[ibin];}
    			else if(sample=="singletoptW") {*eff=STtWEff[ibin];}
    			else if(sample=="WV") {*eff=WVEff[ibin];}
    			else{ std::cerr << "The sample " << sample << " not coded into HardcodedConditions::GetWtaggingEff2016! Aborting ..." << std::endl; std::abort();}
    			break;
    			}
    		}
    	}
 
}

void HardcodedConditions::GetWtaggingEff2017(double pt, double *eff, std::string sample, int massIndex){
    const int NbinB = 12;
    const int NbinS = 14;
    double ptMinsB[NbinB] = {175,200,250,300,350,400,450,500,550,600,700,800};
    double ptMinsS[NbinS] = {175,200,250,300,350,400,450,500,550,600,700,800,1000,1200};
    double ttbarEff[NbinB]= {0.574, 0.684, 0.658, 0.628, 0.611, 0.601, 0.595, 0.589, 0.584, 0.572, 0.566, 0.536}; // ttbar
    double STtEff[NbinB]  = {0.618, 0.712, 0.679, 0.643, 0.625, 0.606, 0.591, 0.598, 0.604, 0.586, 0.494, 0.588}; // single top (s and t channel had 0 boosted tops)
    double STtWEff[NbinB] = {0.616, 0.727, 0.710, 0.692, 0.687, 0.687, 0.696, 0.697, 0.699, 0.720, 0.721, 0.759}; // single top (s and t channel had 0 boosted tops)
    double WVEff[NbinB]   = {0.643, 0.726, 0.683, 0.646, 0.625, 0.611, 0.604, 0.607, 0.614, 0.612, 0.621, 0.603}; // WW, WZ, etc. 


    double x53x53Eff[12][NbinS] = {//X53X53
       {0.472, 0.608, 0.611, 0.622, 0.637, 0.652, 0.664, 0.678, 0.686, 0.692, 0.696, 0.683, 0.650, 0.645},//700
       {0.460, 0.596, 0.596, 0.606, 0.628, 0.643, 0.664, 0.675, 0.689, 0.701, 0.707, 0.709, 0.721, 0.661},//800
       {0.446, 0.590, 0.581, 0.590, 0.616, 0.636, 0.655, 0.670, 0.683, 0.698, 0.710, 0.717, 0.716, 0.704},//900R
       {0.450, 0.583, 0.574, 0.575, 0.601, 0.622, 0.646, 0.669, 0.683, 0.697, 0.717, 0.728, 0.740, 0.730},//1000R
       {0.468, 0.584, 0.568, 0.567, 0.587, 0.618, 0.639, 0.658, 0.672, 0.689, 0.713, 0.733, 0.737, 0.754},//1100R
       {0.474, 0.587, 0.562, 0.561, 0.575, 0.603, 0.633, 0.647, 0.665, 0.694, 0.711, 0.727, 0.747, 0.747},//1200R
       {0.480, 0.589, 0.563, 0.550, 0.570, 0.594, 0.618, 0.640, 0.662, 0.684, 0.704, 0.726, 0.744, 0.754},//1300R
       {0.462, 0.590, 0.558, 0.548, 0.560, 0.580, 0.608, 0.631, 0.654, 0.674, 0.699, 0.723, 0.745, 0.761},//1400R
       {0.487, 0.589, 0.563, 0.543, 0.552, 0.572, 0.589, 0.622, 0.645, 0.665, 0.694, 0.722, 0.742, 0.762},//1500R
       {0.480, 0.587, 0.556, 0.543, 0.548, 0.567, 0.598, 0.619, 0.636, 0.669, 0.690, 0.716, 0.741, 0.759},//1600R
      };     
 
    double x53x53EffH[39][NbinS] = {//X53X53
     {0.394, 0.494, 0.469, 0.444, 0.408, 0.385, 0.354, 0.329, 0.280, 0.277, 0.315, 0.259, 0.000, 0.000},//MX500 MH 200
     {0.388, 0.500, 0.498, 0.491, 0.481, 0.481, 0.473, 0.452, 0.451, 0.445, 0.419, 0.360, 0.278, 0.200},//MX600 MH200
     {0.243, 0.336, 0.322, 0.306, 0.285, 0.263, 0.286, 0.281, 0.250, 0.212, 0.205, 0.400, 0.000, 0.000},//MX600 MH400
     {0.341, 0.475, 0.480, 0.475, 0.489, 0.496, 0.502, 0.498, 0.496, 0.505, 0.497, 0.476, 0.250, 0.500},//MX700 MH200
     {0.326, 0.439, 0.433, 0.409, 0.394, 0.394, 0.368, 0.333, 0.355, 0.311, 0.265, 0.302, 0.333, 0.000},//MX700 MH400
     {0.329, 0.445, 0.453, 0.455, 0.469, 0.482, 0.483, 0.507, 0.506, 0.491, 0.468, 0.488, 0.390, 0.444},//MX800 MH200
     {0.340, 0.479, 0.475, 0.470, 0.470, 0.464, 0.474, 0.454, 0.424, 0.407, 0.352, 0.272, 0.320, 0.000},//MX800 MH400
     {0.245, 0.365, 0.376, 0.364, 0.372, 0.364, 0.376, 0.374, 0.352, 0.348, 0.312, 0.276, 0.300, 0.000},//MX800 MH600
     {0.314, 0.429, 0.430, 0.432, 0.440, 0.450, 0.461, 0.480, 0.480, 0.496, 0.504, 0.488, 0.514, 0.297},
     {0.329, 0.471, 0.472, 0.482, 0.491, 0.490, 0.511, 0.496, 0.475, 0.454, 0.465, 0.431, 0.303, 0.167},
     {0.284, 0.407, 0.400, 0.391, 0.387, 0.393, 0.392, 0.389, 0.420, 0.374, 0.407, 0.406, 0.200, 1.000},
     {0.306, 0.417, 0.406, 0.407, 0.423, 0.437, 0.446, 0.467, 0.470, 0.483, 0.470, 0.490, 0.472, 0.418},
     {0.310, 0.463, 0.464, 0.471, 0.476, 0.491, 0.510, 0.513, 0.516, 0.513, 0.509, 0.487, 0.401, 0.484},
     {0.289, 0.431, 0.436, 0.426, 0.428, 0.432, 0.446, 0.430, 0.432, 0.437, 0.427, 0.388, 0.405, 0.333},
     {0.243, 0.374, 0.375, 0.383, 0.392, 0.406, 0.393, 0.409, 0.413, 0.423, 0.391, 0.352, 0.347, 0.429},
     {0.308, 0.402, 0.390, 0.389, 0.403, 0.428, 0.429, 0.444, 0.455, 0.475, 0.462, 0.464, 0.452, 0.484},
     {0.302, 0.449, 0.448, 0.451, 0.466, 0.480, 0.488, 0.503, 0.513, 0.519, 0.511, 0.505, 0.460, 0.390},
     {0.291, 0.439, 0.440, 0.437, 0.454, 0.463, 0.456, 0.465, 0.481, 0.457, 0.439, 0.456, 0.364, 0.316},
     {0.266, 0.387, 0.382, 0.380, 0.385, 0.396, 0.405, 0.405, 0.403, 0.406, 0.432, 0.405, 0.356, 0.455},     
     {0.281, 0.406, 0.391, 0.380, 0.382, 0.396, 0.411, 0.415, 0.435, 0.442, 0.457, 0.446, 0.434, 0.441},
     {0.280, 0.442, 0.434, 0.430, 0.444, 0.465, 0.484, 0.498, 0.500, 0.505, 0.519, 0.503, 0.472, 0.333},
     {0.291, 0.435, 0.437, 0.439, 0.455, 0.470, 0.477, 0.485, 0.489, 0.483, 0.482, 0.450, 0.345, 0.265},
     {0.271, 0.406, 0.400, 0.405, 0.404, 0.414, 0.419, 0.417, 0.420, 0.434, 0.426, 0.397, 0.357, 0.343},
     {0.229, 0.366, 0.372, 0.375, 0.380, 0.395, 0.409, 0.410, 0.415, 0.425, 0.438, 0.408, 0.371, 0.294},
     {0.101, 0.173, 0.179, 0.180, 0.187, 0.200, 0.207, 0.218, 0.229, 0.236, 0.245, 0.238, 0.229, 0.190},
     {0.137, 0.241, 0.248, 0.244, 0.251, 0.267, 0.276, 0.281, 0.299, 0.298, 0.298, 0.295, 0.277, 0.218},
     {0.158, 0.270, 0.277, 0.277, 0.281, 0.291, 0.298, 0.307, 0.313, 0.312, 0.298, 0.290, 0.245, 0.182},
     {0.166, 0.286, 0.288, 0.283, 0.282, 0.291, 0.303, 0.287, 0.284, 0.296, 0.289, 0.257, 0.226, 0.213},
     {0.167, 0.272, 0.265, 0.252, 0.250, 0.259, 0.257, 0.256, 0.264, 0.265, 0.248, 0.243, 0.233, 0.193},
     {0.090, 0.158, 0.163, 0.164, 0.166, 0.175, 0.187, 0.197, 0.211, 0.216, 0.227, 0.224, 0.221, 0.202},
     {0.126, 0.220, 0.223, 0.221, 0.227, 0.234, 0.246, 0.258, 0.265, 0.279, 0.284, 0.281, 0.255, 0.212},
     {0.140, 0.254, 0.261, 0.248, 0.260, 0.265, 0.278, 0.284, 0.290, 0.301, 0.293, 0.281, 0.233, 0.193},
     {0.146, 0.259, 0.269, 0.268, 0.277, 0.286, 0.288, 0.293, 0.296, 0.292, 0.282, 0.266, 0.229, 0.173},
     {0.128, 0.226, 0.225, 0.217, 0.209, 0.211, 0.214, 0.220, 0.231, 0.230, 0.233, 0.229, 0.218, 0.203},
     {0.296, 0.409, 0.370, 0.355, 0.342, 0.346, 0.360, 0.377, 0.375, 0.389, 0.398, 0.413, 0.394, 0.401},
     {0.237, 0.406, 0.386, 0.386, 0.389, 0.400, 0.422, 0.442, 0.453, 0.473, 0.482, 0.487, 0.504, 0.477},
     {0.293, 0.447, 0.437, 0.426, 0.416, 0.430, 0.456, 0.463, 0.461, 0.485, 0.491, 0.488, 0.469, 0.380},
     {0.279, 0.423, 0.418, 0.407, 0.414, 0.427, 0.445, 0.456, 0.469, 0.470, 0.475, 0.434, 0.434, 0.352},
     {0.253, 0.404, 0.393, 0.389, 0.393, 0.403, 0.412, 0.421, 0.420, 0.423, 0.412, 0.421, 0.454, 0.409},
     };


    if(sample=="x53x53" || sample=="TpTp" || sample=="BpBp" || sample=="x53x53H"){
    	for(int ibin = NbinS-1; ibin >= 0; ibin--){
    		if(pt > ptMinsS[ibin]){
    			if(sample=="x53x53") {*eff=x53x53Eff[massIndex][ibin];}
    			else if(sample=="x53x53H") {*eff=x53x53EffH[massIndex][ibin];}
    			else if(sample=="TpTp") {*eff=1;}
    			else if(sample=="BpBp") {*eff=1;}
    			else{ std::cerr << "The sample " << sample << " not coded into HardcodedConditions::GetWtaggingEff2017! Aborting ..." << std::endl; std::abort();}
    			break;
    			}
    		}
    	}
    else{
    	for(int ibin = NbinB-1; ibin >= 0; ibin--){
    		if(pt > ptMinsB[ibin]){
    			if(sample=="tttt") {*eff=1;}
    			if(sample=="tttt") {*eff=1;}
    			else if(sample=="ttbar") {*eff=ttbarEff[ibin];}
    			else if(sample=="singletopt") {*eff=STtEff[ibin];}
    			else if(sample=="singletoptW") {*eff=STtWEff[ibin];}
    			else if(sample=="WV") {*eff=WVEff[ibin];}
    			else{ std::cerr << "The sample " << sample << " not coded into HardcodedConditions::GetWtaggingEff2017! Aborting ..." << std::endl; std::abort();}
    			break;
    			}
    		}
    	}
 
}

void HardcodedConditions::GetWtaggingEff2018(double pt, double *eff, std::string sample, int massIndex){
    const int NbinB = 12;
    const int NbinS = 14;
    double ptMinsB[NbinB] = {175,200,250,300,350,400,450,500,550,600,700,800};
    double ptMinsS[NbinS] = {175,200,250,300,350,400,450,500,550,600,700,800,1000,1200};
    double ttbarEff[NbinB]= {0.510, 0.636, 0.586, 0.534, 0.499, 0.478, 0.464, 0.448, 0.431, 0.407, 0.372, 0.319}; // ttbar
    double STtEff[NbinB]  = {0.554, 0.674, 0.618, 0.556, 0.513, 0.476, 0.449, 0.432, 0.419, 0.381, 0.343, 0.320}; // single top (s and t channel had 0 boosted tops)
    double STtWEff[NbinB] = {0.579, 0.715, 0.698, 0.673, 0.664, 0.662, 0.661, 0.670, 0.679, 0.695, 0.703, 0.737}; // single top (s and t channel had 0 boosted tops)
    double WVEff[NbinB]   = {0.625, 0.726, 0.691, 0.655, 0.635, 0.620, 0.615, 0.616, 0.607, 0.611, 0.602, 0.624}; // WW, WZ, etc. 

    double x53x53Eff[12][NbinS] = {//X53X53
       {0.392, 0.541, 0.556, 0.568, 0.585, 0.602, 0.614, 0.630, 0.637, 0.639, 0.629, 0.628, 0.618, 0.588},//700
       {0.338, 0.506, 0.516, 0.535, 0.557, 0.580, 0.600, 0.617, 0.629, 0.639, 0.650, 0.659, 0.638, 0.610},//800
       {0.306, 0.463, 0.483, 0.499, 0.530, 0.558, 0.581, 0.602, 0.614, 0.638, 0.654, 0.664, 0.657, 0.658},//900R
       {0.270, 0.434, 0.448, 0.469, 0.499, 0.531, 0.566, 0.582, 0.601, 0.625, 0.646, 0.663, 0.678, 0.666},//1000R
       {0.239, 0.402, 0.413, 0.433, 0.470, 0.502, 0.538, 0.567, 0.585, 0.608, 0.636, 0.659, 0.673, 0.691},//1100R
       {0.224, 0.370, 0.386, 0.408, 0.440, 0.477, 0.514, 0.544, 0.565, 0.595, 0.622, 0.651, 0.669, 0.689},//1200R
       {0.196, 0.347, 0.361, 0.377, 0.409, 0.446, 0.486, 0.520, 0.548, 0.577, 0.610, 0.642, 0.673, 0.684},//1300R
       {0.180, 0.325, 0.340, 0.350, 0.382, 0.417, 0.458, 0.493, 0.525, 0.561, 0.597, 0.633, 0.661, 0.681},//1400R
       {0.173, 0.309, 0.319, 0.331, 0.356, 0.391, 0.427, 0.467, 0.499, 0.539, 0.581, 0.619, 0.653, 0.688},//1500R
       {0.163, 0.293, 0.306, 0.311, 0.337, 0.366, 0.399, 0.438, 0.476, 0.516, 0.562, 0.607, 0.649, 0.678},//1600R
      };    

    double x53x53EffH[39][NbinS] = {//X53X53
     {0.345, 0.455, 0.416, 0.377, 0.337, 0.310, 0.293, 0.259, 0.217, 0.200, 0.163, 0.108, 0.045, 0.000},
     {0.309, 0.427, 0.416, 0.397, 0.387, 0.370, 0.370, 0.354, 0.320, 0.295, 0.253, 0.252, 0.090, 0.286},
     {0.230, 0.309, 0.288, 0.266, 0.235, 0.221, 0.209, 0.171, 0.180, 0.150, 0.194, 0.164, 0.000, 0.000},
     {0.257, 0.376, 0.376, 0.365, 0.361, 0.363, 0.355, 0.354, 0.346, 0.332, 0.304, 0.251, 0.217, 0.109},
     {0.284, 0.400, 0.375, 0.347, 0.317, 0.297, 0.287, 0.267, 0.230, 0.219, 0.178, 0.160, 0.086, 0.250},
     {0.208, 0.325, 0.327, 0.326, 0.326, 0.330, 0.330, 0.339, 0.336, 0.334, 0.331, 0.293, 0.263, 0.178},
     {0.265, 0.392, 0.391, 0.375, 0.366, 0.353, 0.334, 0.333, 0.309, 0.290, 0.261, 0.188, 0.188, 0.000},
     {0.208, 0.311, 0.310, 0.300, 0.291, 0.278, 0.260, 0.243, 0.245, 0.223, 0.223, 0.190, 0.175, 0.158},
     {0.173, 0.281, 0.284, 0.284, 0.290, 0.300, 0.298, 0.315, 0.320, 0.318, 0.309, 0.300, 0.254, 0.214},
     {0.226, 0.358, 0.363, 0.360, 0.355, 0.360, 0.348, 0.352, 0.347, 0.330, 0.290, 0.246, 0.186, 0.158},
     {0.191, 0.304, 0.294, 0.281, 0.281, 0.283, 0.290, 0.301, 0.300, 0.302, 0.306, 0.289, 0.257, 0.207},
     {0.143, 0.242, 0.252, 0.252, 0.258, 0.270, 0.277, 0.287, 0.287, 0.294, 0.301, 0.284, 0.249, 0.225},
     {0.188, 0.321, 0.327, 0.324, 0.334, 0.342, 0.338, 0.346, 0.344, 0.341, 0.325, 0.301, 0.232, 0.142},
     {0.215, 0.339, 0.339, 0.327, 0.326, 0.315, 0.313, 0.316, 0.295, 0.287, 0.274, 0.257, 0.170, 0.103},
     {0.176, 0.284, 0.286, 0.276, 0.273, 0.275, 0.285, 0.277, 0.267, 0.262, 0.237, 0.221, 0.189, 0.076},
     {0.123, 0.212, 0.219, 0.217, 0.229, 0.245, 0.252, 0.258, 0.262, 0.271, 0.274, 0.269, 0.240, 0.205},
     {0.167, 0.287, 0.292, 0.294, 0.302, 0.312, 0.322, 0.316, 0.325, 0.332, 0.322, 0.310, 0.268, 0.207},
     {0.187, 0.317, 0.323, 0.318, 0.316, 0.322, 0.323, 0.318, 0.324, 0.303, 0.283, 0.256, 0.178, 0.128},
     {0.186, 0.292, 0.289, 0.276, 0.273, 0.273, 0.281, 0.270, 0.277, 0.284, 0.280, 0.241, 0.202, 0.134},     
     {0.103, 0.186, 0.195, 0.199, 0.204, 0.215, 0.226, 0.234, 0.240, 0.247, 0.252, 0.257, 0.236, 0.197},
     {0.151, 0.262, 0.268, 0.263, 0.270, 0.282, 0.291, 0.304, 0.306, 0.308, 0.312, 0.290, 0.265, 0.206},
     {0.165, 0.286, 0.297, 0.291, 0.293, 0.303, 0.311, 0.314, 0.311, 0.307, 0.292, 0.261, 0.225, 0.135},
     {0.179, 0.290, 0.295, 0.285, 0.283, 0.283, 0.283, 0.279, 0.278, 0.273, 0.270, 0.237, 0.204, 0.167},
     {0.156, 0.254, 0.254, 0.250, 0.246, 0.254, 0.256, 0.255, 0.260, 0.259, 0.249, 0.229, 0.170, 0.129},
     {0.091, 0.165, 0.173, 0.176, 0.178, 0.191, 0.198, 0.210, 0.218, 0.227, 0.236, 0.232, 0.218, 0.178},
     {0.126, 0.237, 0.236, 0.236, 0.243, 0.256, 0.266, 0.278, 0.285, 0.291, 0.293, 0.282, 0.249, 0.212},
     {0.151, 0.263, 0.268, 0.268, 0.271, 0.279, 0.288, 0.298, 0.305, 0.300, 0.289, 0.276, 0.241, 0.161},
     {0.159, 0.271, 0.281, 0.282, 0.280, 0.282, 0.285, 0.281, 0.285, 0.268, 0.276, 0.247, 0.213, 0.117},
     {0.158, 0.261, 0.255, 0.240, 0.239, 0.239, 0.247, 0.256, 0.256, 0.258, 0.250, 0.239, 0.211, 0.154},
     {0.085, 0.150, 0.160, 0.155, 0.162, 0.171, 0.179, 0.189, 0.200, 0.206, 0.215, 0.217, 0.206, 0.181},
     {0.116, 0.209, 0.216, 0.212, 0.217, 0.232, 0.238, 0.250, 0.260, 0.267, 0.277, 0.270, 0.251, 0.201},
     {0.139, 0.246, 0.251, 0.248, 0.249, 0.259, 0.268, 0.278, 0.284, 0.289, 0.284, 0.271, 0.242, 0.169},
     {0.141, 0.248, 0.260, 0.258, 0.262, 0.271, 0.277, 0.282, 0.287, 0.280, 0.267, 0.256, 0.222, 0.139},
     {0.147, 0.261, 0.261, 0.254, 0.247, 0.249, 0.252, 0.255, 0.245, 0.256, 0.253, 0.234, 0.216, 0.190},
     {0.073, 0.140, 0.144, 0.143, 0.147, 0.152, 0.161, 0.173, 0.181, 0.189, 0.198, 0.196, 0.194, 0.175},
     {0.109, 0.197, 0.201, 0.193, 0.199, 0.208, 0.217, 0.227, 0.238, 0.247, 0.252, 0.256, 0.243, 0.205},
     {0.124, 0.229, 0.231, 0.228, 0.228, 0.234, 0.248, 0.261, 0.263, 0.270, 0.280, 0.265, 0.227, 0.186},
     {0.126, 0.229, 0.242, 0.239, 0.244, 0.256, 0.260, 0.270, 0.276, 0.277, 0.276, 0.252, 0.213, 0.162},
     {0.132, 0.248, 0.247, 0.246, 0.253, 0.252, 0.256, 0.261, 0.258, 0.252, 0.254, 0.240, 0.187, 0.131},
     };

    if(sample=="x53x53" || sample=="TpTp" || sample=="BpBp" || sample=="x53x53H"){
    	for(int ibin = NbinS-1; ibin >= 0; ibin--){
    		if(pt > ptMinsS[ibin]){
    			if(sample=="x53x53") {*eff=x53x53Eff[massIndex][ibin];}
    			else if(sample=="x53x53H") {*eff=x53x53EffH[massIndex][ibin];}
    			else if(sample=="TpTp") {*eff=1;}
    			else if(sample=="BpBp") {*eff=1;}
    			else{ std::cerr << "The sample " << sample << " not coded into HardcodedConditions::GetWtaggingEff2018! Aborting ..." << std::endl; std::abort();}
    			break;
    			}
    		}
    	}
    else{
    	for(int ibin = NbinB-1; ibin >= 0; ibin--){
    		if(pt > ptMinsB[ibin]){
    			if(sample=="tttt") {*eff=1;}
    			else if(sample=="ttbar") {*eff=ttbarEff[ibin];}
    			else if(sample=="singletopt") {*eff=STtEff[ibin];}
    			else if(sample=="singletoptW") {*eff=STtWEff[ibin];}
    			else if(sample=="WV") {*eff=WVEff[ibin];}
    			else{ std::cerr << "The sample " << sample << " not coded into HardcodedConditions::GetWtaggingEff2018! Aborting ..." << std::endl; std::abort();}
    			break;
    			}
    		}
    	}
 

}


/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|           EGammaGsf SCALE FACTOR SECTION            |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/
// Derived using correctionlib tool and using the RecoAbove20 key

double HardcodedConditions::GetEGammaGsfSF(double pt, double eta, std::string year, std::string shift)
{
  //The main getter for EGammaGsf Scale Factors
  if      (year=="2016APV") return GetEGammaGsfSF2016APV(pt, eta, shift);
  else if (year=="2016") return GetEGammaGsfSF2016(pt, eta, shift);
  else if (year=="2017") return GetEGammaGsfSF2017(pt, eta, shift);
  else if (year=="2018") return GetEGammaGsfSF2018(pt, eta, shift);
  else return 0.;
}

double HardcodedConditions::GetEGammaGsfSF2016APV(double pt, double eta, std::string shift){
  if ( shift == "up" ){
    if ( pt < 45.0 ) {
      if ( eta < -2.0 ) return 1.00017;
      else if ( eta < -1.566 ) return 0.99588;
      else if ( eta < -1.444 ) return 0.97537;
      else if ( eta < -1.0 ) return 0.98784;
      else if ( eta < -0.5 ) return 0.98206;
      else if ( eta < 0.0 ) return 0.97784;
      else if ( eta < 0.5 ) return 0.98918;
      else if ( eta < 1.0 ) return 0.99032;
      else if ( eta < 1.444 ) return 0.99196;
      else if ( eta < 1.566 ) return 0.98933;
      else if ( eta < 2.0 ) return 0.99695;
      else return 1.00338; }
    else if ( pt < 75.0 ) {
      if ( eta < -2.0 ) return 0.99765;
      else if ( eta < -1.566 ) return 0.99495;
      else if ( eta < -1.444 ) return 0.96835;
      else if ( eta < -1.0 ) return 0.98883;
      else if ( eta < -0.5 ) return 0.98472;
      else if ( eta < 0.0 ) return 0.98346;
      else if ( eta < 0.5 ) return 0.99165;
      else if ( eta < 1.0 ) return 0.99088;
      else if ( eta < 1.444 ) return 0.99088;
      else if ( eta < 1.566 ) return 0.98132;
      else if ( eta < 2.0 ) return 0.99294;
      else return 0.99860; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 1.00244;
      else if ( eta < -1.566 ) return 1.00733;
      else if ( eta < -1.444 ) return 1.04290;
      else if ( eta < -1.0 ) return 0.99212;
      else if ( eta < -0.5 ) return 0.99145;
      else if ( eta < 0.0 ) return 0.99497;
      else if ( eta < 0.5 ) return 0.99497;
      else if ( eta < 1.0 ) return 0.99145;
      else if ( eta < 1.444 ) return 0.99212;
      else if ( eta < 1.566 ) return 1.04290;
      else if ( eta < 2.0 ) return 1.00733;
      else return 1.00244; }
    else {
      if ( eta < -2.0 ) return 1.02715;
      else if ( eta < -1.566 ) return 1.02500;
      else if ( eta < -1.444 ) return 1.04118;
      else if ( eta < -1.0 ) return 0.98579;
      else if ( eta < -0.5 ) return 0.99163;
      else if ( eta < 0.0 ) return 0.99674;
      else if ( eta < 0.5 ) return 0.99674;
      else if ( eta < 1.0 ) return 0.99163;
      else if ( eta < 1.444 ) return 0.98579;
      else if ( eta < 1.566 ) return 1.04118;
      else if ( eta < 2.0 ) return 1.02500;
      else return 1.02715; }
  }
  else if ( shift == "down" ){
    if ( pt < 45.0 ) {
      if ( eta < -2.0 ) return 0.99342;
      else if ( eta < -1.566 ) return 0.98957;
      else if ( eta < -1.444 ) return 0.93983;
      else if ( eta < -1.0 ) return 0.98336;
      else if ( eta < -0.5 ) return 0.97683;
      else if ( eta < 0.0 ) return 0.97268;
      else if ( eta < 0.5 ) return 0.98402;
      else if ( eta < 1.0 ) return 0.98509;
      else if ( eta < 1.444 ) return 0.98748;
      else if ( eta < 1.566 ) return 0.95379;
      else if ( eta < 2.0 ) return 0.99065;
      else return 0.99662; }
    else if ( pt < 75.0 ) {
      if ( eta < -2.0 ) return 0.98553;
      else if ( eta < -1.566 ) return 0.99058;
      else if ( eta < -1.444 ) return 0.95598;
      else if ( eta < -1.0 ) return 0.98462;
      else if ( eta < -0.5 ) return 0.97851;
      else if ( eta < 0.0 ) return 0.97560;
      else if ( eta < 0.5 ) return 0.98379;
      else if ( eta < 1.0 ) return 0.98468;
      else if ( eta < 1.444 ) return 0.98667;
      else if ( eta < 1.566 ) return 0.96895;
      else if ( eta < 2.0 ) return 0.98858;
      else return 0.98648; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.97431;
      else if ( eta < -1.566 ) return 0.96193;
      else if ( eta < -1.444 ) return 0.98136;
      else if ( eta < -1.0 ) return 0.97344;
      else if ( eta < -0.5 ) return 0.96176;
      else if ( eta < 0.0 ) return 0.98052;
      else if ( eta < 0.5 ) return 0.98052;
      else if ( eta < 1.0 ) return 0.96176;
      else if ( eta < 1.444 ) return 0.97344;
      else if ( eta < 1.566 ) return 0.98136;
      else if ( eta < 2.0 ) return 0.96193;
      else return 0.97431; }
    else {
      if ( eta < -2.0 ) return 0.99202;
      else if ( eta < -1.566 ) return 1.00775;
      else if ( eta < -1.444 ) return 0.98758;
      else if ( eta < -1.0 ) return 0.97385;
      else if ( eta < -0.5 ) return 0.97809;
      else if ( eta < 0.0 ) return 0.98300;
      else if ( eta < 0.5 ) return 0.98300;
      else if ( eta < 1.0 ) return 0.97809;
      else if ( eta < 1.444 ) return 0.97385;
      else if ( eta < 1.566 ) return 0.98758;
      else if ( eta < 2.0 ) return 1.00775;
      else return 0.99202; }
  }
  else {
    if ( pt < 45.0 ) {
      if ( eta < -2.0 ) return 0.99679;
      else if ( eta < -1.566 ) return 0.99272;
      else if ( eta < -1.444 ) return 0.95760;
      else if ( eta < -1.0 ) return 0.98560;
      else if ( eta < -0.5 ) return 0.97945;
      else if ( eta < 0.0 ) return 0.97526;
      else if ( eta < 0.5 ) return 0.98660;
      else if ( eta < 1.0 ) return 0.98770;
      else if ( eta < 1.444 ) return 0.98972;
      else if ( eta < 1.566 ) return 0.97156;
      else if ( eta < 2.0 ) return 0.99380;
      else return 1.00000; }
    else if ( pt < 75.0 ) {
      if ( eta < -2.0 ) return 0.99159;
      else if ( eta < -1.566 ) return 0.99277;
      else if ( eta < -1.444 ) return 0.96216;
      else if ( eta < -1.0 ) return 0.98672;
      else if ( eta < -0.5 ) return 0.98161;
      else if ( eta < 0.0 ) return 0.97953;
      else if ( eta < 0.5 ) return 0.98772;
      else if ( eta < 1.0 ) return 0.98778;
      else if ( eta < 1.444 ) return 0.98878;
      else if ( eta < 1.566 ) return 0.97514;
      else if ( eta < 2.0 ) return 0.99076;
      else return 0.99254; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.98837;
      else if ( eta < -1.566 ) return 0.98463;
      else if ( eta < -1.444 ) return 1.01213;
      else if ( eta < -1.0 ) return 0.98278;
      else if ( eta < -0.5 ) return 0.97660;
      else if ( eta < 0.0 ) return 0.98774;
      else if ( eta < 0.5 ) return 0.98774;
      else if ( eta < 1.0 ) return 0.97660;
      else if ( eta < 1.444 ) return 0.98278;
      else if ( eta < 1.566 ) return 1.01213;
      else if ( eta < 2.0 ) return 0.98463;
      else return 0.98837; }
    else {
      if ( eta < -2.0 ) return 1.00958;
      else if ( eta < -1.566 ) return 1.01638;
      else if ( eta < -1.444 ) return 1.01438;
      else if ( eta < -1.0 ) return 0.97982;
      else if ( eta < -0.5 ) return 0.98486;
      else if ( eta < 0.0 ) return 0.98987;
      else if ( eta < 0.5 ) return 0.98987;
      else if ( eta < 1.0 ) return 0.98486;
      else if ( eta < 1.444 ) return 0.97982;
      else if ( eta < 1.566 ) return 1.01438;
      else if ( eta < 2.0 ) return 1.01638;
      else return 1.00958; }
  }
}

double HardcodedConditions::GetEGammaGsfSF2016( double pt, double eta, std::string shift ){
  if ( shift == "up" ){
    if ( pt < 45.0 ) {
      if ( eta < -2.0 ) return 1.03893;
      else if ( eta < -1.566 ) return 0.99622;
      else if ( eta < -1.444 ) return 1.01559;
      else if ( eta < -1.0 ) return 0.99026;
      else if ( eta < -0.5 ) return 0.98744;
      else if ( eta < 0.0 ) return 0.98583;
      else if ( eta < 0.5 ) return 0.98583;
      else if ( eta < 1.0 ) return 0.98747;
      else if ( eta < 1.444 ) return 0.98722;
      else if ( eta < 1.566 ) return 1.00252;
      else if ( eta < 2.0 ) return 0.99213;
      else return 0.99499; }
    else if ( pt < 75.0 ) {
      if ( eta < -2.0 ) return 1.02392;
      else if ( eta < -1.566 ) return 0.99142;
      else if ( eta < -1.444 ) return 0.96347;
      else if ( eta < -1.0 ) return 0.98835;
      else if ( eta < -0.5 ) return 0.98788;
      else if ( eta < 0.0 ) return 0.98751;
      else if ( eta < 0.5 ) return 0.98649;
      else if ( eta < 1.0 ) return 0.98889;
      else if ( eta < 1.444 ) return 0.98734;
      else if ( eta < 1.566 ) return 0.96284;
      else if ( eta < 2.0 ) return 0.99047;
      else return 0.99504; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 1.01866;
      else if ( eta < -1.566 ) return 0.99459;
      else if ( eta < -1.444 ) return 1.01381;
      else if ( eta < -1.0 ) return 0.99209;
      else if ( eta < -0.5 ) return 0.99505;
      else if ( eta < 0.0 ) return 0.99087;
      else if ( eta < 0.5 ) return 0.99087;
      else if ( eta < 1.0 ) return 0.99505;
      else if ( eta < 1.444 ) return 0.99209;
      else if ( eta < 1.566 ) return 1.01381;
      else if ( eta < 2.0 ) return 0.99459;
      else return 1.01866; }
    else {
      if ( eta < -2.0 ) return 1.02845;
      else if ( eta < -1.566 ) return 1.00730;
      else if ( eta < -1.444 ) return 1.03123;
      else if ( eta < -1.0 ) return 1.00019;
      else if ( eta < -0.5 ) return 0.99722;
      else if ( eta < 0.0 ) return 0.99372;
      else if ( eta < 0.5 ) return 0.99372;
      else if ( eta < 1.0 ) return 0.99722;
      else if ( eta < 1.444 ) return 1.00019;
      else if ( eta < 1.566 ) return 1.03123;
      else if ( eta < 2.0 ) return 1.00730;
      else return 1.02845; }
  }
  else if ( shift == "down" ){
    if ( pt < 45.0 ) {
      if ( eta < -2.0 ) return 1.03179;
      else if ( eta < -1.566 ) return 0.98917;
      else if ( eta < -1.444 ) return 0.96333;
      else if ( eta < -1.0 ) return 0.98502;
      else if ( eta < -0.5 ) return 0.98390;
      else if ( eta < 0.0 ) return 0.98135;
      else if ( eta < 0.5 ) return 0.98135;
      else if ( eta < 1.0 ) return 0.98393;
      else if ( eta < 1.444 ) return 0.98198;
      else if ( eta < 1.566 ) return 0.95025;
      else if ( eta < 2.0 ) return 0.98507;
      else return 0.98785; }
    else if ( pt < 75.0 ) {
      if ( eta < -2.0 ) return 1.01703;
      else if ( eta < -1.566 ) return 0.98784;
      else if ( eta < -1.444 ) return 0.95583;
      else if ( eta < -1.0 ) return 0.98512;
      else if ( eta < -0.5 ) return 0.98369;
      else if ( eta < 0.0 ) return 0.98398;
      else if ( eta < 0.5 ) return 0.98296;
      else if ( eta < 1.0 ) return 0.98471;
      else if ( eta < 1.444 ) return 0.98412;
      else if ( eta < 1.566 ) return 0.95509;
      else if ( eta < 2.0 ) return 0.98689;
      else return 0.98814; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.98134;
      else if ( eta < -1.566 ) return 0.95197;
      else if ( eta < -1.444 ) return 0.96870;
      else if ( eta < -1.0 ) return 0.97140;
      else if ( eta < -0.5 ) return 0.95835;
      else if ( eta < 0.0 ) return 0.96247;
      else if ( eta < 0.5 ) return 0.96247;
      else if ( eta < 1.0 ) return 0.95835;
      else if ( eta < 1.444 ) return 0.97140;
      else if ( eta < 1.566 ) return 0.96870;
      else if ( eta < 2.0 ) return 0.95197;
      else return 0.98134; }
    else {
      if ( eta < -2.0 ) return 0.99260;
      else if ( eta < -1.566 ) return 0.98657;
      else if ( eta < -1.444 ) return 0.96656;
      else if ( eta < -1.0 ) return 0.98368;
      else if ( eta < -0.5 ) return 0.98463;
      else if ( eta < 0.0 ) return 0.98002;
      else if ( eta < 0.5 ) return 0.98002;
      else if ( eta < 1.0 ) return 0.98463;
      else if ( eta < 1.444 ) return 0.98368;
      else if ( eta < 1.566 ) return 0.96656;
      else if ( eta < 2.0 ) return 0.98657;
      else return 0.99260; }
  }
  else {
    if ( pt < 45.0 ) {
      if ( eta < -2.0 ) return 1.03536;
      else if ( eta < -1.566 ) return 0.99269;
      else if ( eta < -1.444 ) return 0.98946;
      else if ( eta < -1.0 ) return 0.98764;
      else if ( eta < -0.5 ) return 0.98567;
      else if ( eta < 0.0 ) return 0.98359;
      else if ( eta < 0.5 ) return 0.98359;
      else if ( eta < 1.0 ) return 0.98570;
      else if ( eta < 1.444 ) return 0.98460;
      else if ( eta < 1.566 ) return 0.97639;
      else if ( eta < 2.0 ) return 0.98860;
      else return 0.99142; }
    else if ( pt < 75.0 ) {
      if ( eta < -2.0 ) return 1.02047;
      else if ( eta < -1.566 ) return 0.98963;
      else if ( eta < -1.444 ) return 0.95965;
      else if ( eta < -1.0 ) return 0.98673;
      else if ( eta < -0.5 ) return 0.98579;
      else if ( eta < 0.0 ) return 0.98574;
      else if ( eta < 0.5 ) return 0.98473;
      else if ( eta < 1.0 ) return 0.98680;
      else if ( eta < 1.444 ) return 0.98573;
      else if ( eta < 1.566 ) return 0.95896;
      else if ( eta < 2.0 ) return 0.98868;
      else return 0.99159; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 1.00000;
      else if ( eta < -1.566 ) return 0.97328;
      else if ( eta < -1.444 ) return 0.99126;
      else if ( eta < -1.0 ) return 0.98174;
      else if ( eta < -0.5 ) return 0.97670;
      else if ( eta < 0.0 ) return 0.97667;
      else if ( eta < 0.5 ) return 0.97667;
      else if ( eta < 1.0 ) return 0.97670;
      else if ( eta < 1.444 ) return 0.98174;
      else if ( eta < 1.566 ) return 0.99126;
      else if ( eta < 2.0 ) return 0.97328;
      else return 1.00000; }
    else {
      if ( eta < -2.0 ) return 1.01053;
      else if ( eta < -1.566 ) return 0.99694;
      else if ( eta < -1.444 ) return 0.99890;
      else if ( eta < -1.0 ) return 0.99194;
      else if ( eta < -0.5 ) return 0.99093;
      else if ( eta < 0.0 ) return 0.98687;
      else if ( eta < 0.5 ) return 0.98687;
      else if ( eta < 1.0 ) return 0.99093;
      else if ( eta < 1.444 ) return 0.99194;
      else if ( eta < 1.566 ) return 0.99890;
      else if ( eta < 2.0 ) return 0.99694;
      else return 1.01053; }
  }
}
double HardcodedConditions::GetEGammaGsfSF2017(double pt, double eta, std::string shift){
  if ( shift == "up" ){
    if ( pt < 45.0 ) {
      if ( eta < -2.0 ) return 0.98597;
      else if ( eta < -1.566 ) return 0.99242;
      else if ( eta < -1.444 ) return 0.96379;
      else if ( eta < -1.0 ) return 0.98441;
      else if ( eta < -0.5 ) return 0.98939;
      else if ( eta < 0.0 ) return 0.99018;
      else if ( eta < 0.5 ) return 0.99117;
      else if ( eta < 1.0 ) return 0.99446;
      else if ( eta < 1.444 ) return 0.98628;
      else if ( eta < 1.566 ) return 1.01637;
      else if ( eta < 2.0 ) return 0.99342;
      else return 0.99116; }
    else if ( pt < 75.0 ) {
      if ( eta < -2.0 ) return 0.98705;
      else if ( eta < -1.566 ) return 0.99062;
      else if ( eta < -1.444 ) return 0.96929;
      else if ( eta < -1.0 ) return 0.98650;
      else if ( eta < -0.5 ) return 0.99362;
      else if ( eta < 0.0 ) return 0.99233;
      else if ( eta < 0.5 ) return 0.99334;
      else if ( eta < 1.0 ) return 0.99866;
      else if ( eta < 1.444 ) return 0.98736;
      else if ( eta < 1.566 ) return 0.99363;
      else if ( eta < 2.0 ) return 0.99366;
      else return 0.99016; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.99667;
      else if ( eta < -1.566 ) return 1.01696;
      else if ( eta < -1.444 ) return 1.05513;
      else if ( eta < -1.0 ) return 1.00014;
      else if ( eta < -0.5 ) return 1.00607;
      else if ( eta < 0.0 ) return 0.99372;
      else if ( eta < 0.5 ) return 0.99372;
      else if ( eta < 1.0 ) return 1.00607;
      else if ( eta < 1.444 ) return 1.00014;
      else if ( eta < 1.566 ) return 1.05513;
      else if ( eta < 2.0 ) return 1.01696;
      else return 0.99667; }
    else {
      if ( eta < -2.0 ) return 0.99076;
      else if ( eta < -1.566 ) return 0.99555;
      else if ( eta < -1.444 ) return 1.09356;
      else if ( eta < -1.0 ) return 0.99576;
      else if ( eta < -0.5 ) return 0.99990;
      else if ( eta < 0.0 ) return 1.00620;
      else if ( eta < 0.5 ) return 1.00620;
      else if ( eta < 1.0 ) return 0.99990;
      else if ( eta < 1.444 ) return 0.99576;
      else if ( eta < 1.566 ) return 1.09356;
      else if ( eta < 2.0 ) return 0.99555;
      else return 0.99076; }
  }
  else if ( shift == "down" ) {
    if ( pt < 45.0 ) {
      if ( eta < -2.0 ) return 0.97695;
      else if ( eta < -1.566 ) return 0.98088;
      else if ( eta < -1.444 ) return 0.88850;
      else if ( eta < -1.0 ) return 0.97629;
      else if ( eta < -0.5 ) return 0.98394;
      else if ( eta < 0.0 ) return 0.98513;
      else if ( eta < 0.5 ) return 0.98612;
      else if ( eta < 1.0 ) return 0.98901;
      else if ( eta < 1.444 ) return 0.97816;
      else if ( eta < 1.566 ) return 0.94108;
      else if ( eta < 2.0 ) return 0.98189;
      else return 0.98214; }
    else if ( pt < 75.0 ) {
      if ( eta < -2.0 ) return 0.98020;
      else if ( eta < -1.566 ) return 0.98285;
      else if ( eta < -1.444 ) return 0.94552;
      else if ( eta < -1.0 ) return 0.97866;
      else if ( eta < -0.5 ) return 0.98398;
      else if ( eta < 0.0 ) return 0.98517;
      else if ( eta < 0.5 ) return 0.98617;
      else if ( eta < 1.0 ) return 0.98902;
      else if ( eta < 1.444 ) return 0.97952;
      else if ( eta < 1.566 ) return 0.96985;
      else if ( eta < 2.0 ) return 0.98589;
      else return 0.98331; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.95620;
      else if ( eta < -1.566 ) return 0.99123;
      else if ( eta < -1.444 ) return 0.99296;
      else if ( eta < -1.0 ) return 0.97739;
      else if ( eta < -0.5 ) return 0.99189;
      else if ( eta < 0.0 ) return 0.97573;
      else if ( eta < 0.5 ) return 0.97573;
      else if ( eta < 1.0 ) return 0.99189;
      else if ( eta < 1.444 ) return 0.97739;
      else if ( eta < 1.566 ) return 0.99296;
      else if ( eta < 2.0 ) return 0.99123;
      else return 0.95620; }
    else {
      if ( eta < -2.0 ) return 0.96690;
      else if ( eta < -1.566 ) return 0.98011;
      else if ( eta < -1.444 ) return 1.00576;
      else if ( eta < -1.0 ) return 0.98174;
      else if ( eta < -0.5 ) return 0.98997;
      else if ( eta < 0.0 ) return 0.99583;
      else if ( eta < 0.5 ) return 0.99583;
      else if ( eta < 1.0 ) return 0.98997;
      else if ( eta < 1.444 ) return 0.98174;
      else if ( eta < 1.566 ) return 1.00576;
      else if ( eta < 2.0 ) return 0.98011;
      else return 0.96690; }
  }
  else {
    if ( pt < 45.0 ) {
      if ( eta < -2.0 ) return 0.98146;
      else if ( eta < -1.566 ) return 0.98665;
      else if ( eta < -1.444 ) return 0.92614;
      else if ( eta < -1.0 ) return 0.98035;
      else if ( eta < -0.5 ) return 0.98667;
      else if ( eta < 0.0 ) return 0.98765;
      else if ( eta < 0.5 ) return 0.98865;
      else if ( eta < 1.0 ) return 0.99174;
      else if ( eta < 1.444 ) return 0.98222;
      else if ( eta < 1.566 ) return 0.97872;
      else if ( eta < 2.0 ) return 0.98765;
      else return 0.98665; }
    else if ( pt < 75.0 ) {
      if ( eta < -2.0 ) return 0.98362;
      else if ( eta < -1.566 ) return 0.98673;
      else if ( eta < -1.444 ) return 0.95740;
      else if ( eta < -1.0 ) return 0.98258;
      else if ( eta < -0.5 ) return 0.98880;
      else if ( eta < 0.0 ) return 0.98875;
      else if ( eta < 0.5 ) return 0.98975;
      else if ( eta < 1.0 ) return 0.99384;
      else if ( eta < 1.444 ) return 0.98344;
      else if ( eta < 1.566 ) return 0.98174;
      else if ( eta < 2.0 ) return 0.98978;
      else return 0.98673; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.97643;
      else if ( eta < -1.566 ) return 1.00409;
      else if ( eta < -1.444 ) return 1.02404;
      else if ( eta < -1.0 ) return 0.98876;
      else if ( eta < -0.5 ) return 0.99898;
      else if ( eta < 0.0 ) return 0.98473;
      else if ( eta < 0.5 ) return 0.98473;
      else if ( eta < 1.0 ) return 0.99898;
      else if ( eta < 1.444 ) return 0.98876;
      else if ( eta < 1.566 ) return 1.02404;
      else if ( eta < 2.0 ) return 1.00409;
      else return 0.97643; }
    else {
      if ( eta < -2.0 ) return 0.97883;
      else if ( eta < -1.566 ) return 0.98783;
      else if ( eta < -1.444 ) return 1.04966;
      else if ( eta < -1.0 ) return 0.98875;
      else if ( eta < -0.5 ) return 0.99493;
      else if ( eta < 0.0 ) return 1.00102;
      else if ( eta < 0.5 ) return 1.00102;
      else if ( eta < 1.0 ) return 0.99493;
      else if ( eta < 1.444 ) return 0.98875;
      else if ( eta < 1.566 ) return 1.04966;
      else if ( eta < 2.0 ) return 0.98783;
      else return 0.97883; }
  }
}

double HardcodedConditions::GetEGammaGsfSF2018(double pt, double eta, std::string shift){
  if ( shift == "up" ){
    if ( pt < 45.0 ) {
      if ( eta < -2.0 ) return 0.98713;
      else if ( eta < -1.566 ) return 0.99212;
      else if ( eta < -1.444 ) return 0.98010;
      else if ( eta < -1.0 ) return 0.98555;
      else if ( eta < -0.5 ) return 0.99234;
      else if ( eta < 0.0 ) return 0.99038;
      else if ( eta < 0.5 ) return 0.99027;
      else if ( eta < 1.0 ) return 0.99118;
      else if ( eta < 1.444 ) return 0.98227;
      else if ( eta < 1.566 ) return 0.99168;
      else if ( eta < 2.0 ) return 0.99110;
      else return 0.99027; }
    else if ( pt < 75.0 ) {
      if ( eta < -2.0 ) return 0.99204;
      else if ( eta < -1.566 ) return 0.99270;
      else if ( eta < -1.444 ) return 0.97466;
      else if ( eta < -1.0 ) return 0.98908;
      else if ( eta < -0.5 ) return 0.99395;
      else if ( eta < 0.0 ) return 0.99394;
      else if ( eta < 0.5 ) return 0.99175;
      else if ( eta < 1.0 ) return 0.99483;
      else if ( eta < 1.444 ) return 0.98585;
      else if ( eta < 1.566 ) return 0.98294;
      else if ( eta < 2.0 ) return 0.99270;
      else return 0.99412; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 1.00544;
      else if ( eta < -1.566 ) return 0.99867;
      else if ( eta < -1.444 ) return 1.05291;
      else if ( eta < -1.0 ) return 1.00608;
      else if ( eta < -0.5 ) return 0.99775;
      else if ( eta < 0.0 ) return 0.99372;
      else if ( eta < 0.5 ) return 0.99372;
      else if ( eta < 1.0 ) return 0.99775;
      else if ( eta < 1.444 ) return 1.00608;
      else if ( eta < 1.566 ) return 1.05291;
      else if ( eta < 2.0 ) return 0.99867;
      else return 1.00544; }
    else {
      if ( eta < -2.0 ) return 1.00646;
      else if ( eta < -1.566 ) return 1.01418;
      else if ( eta < -1.444 ) return 1.05453;
      else if ( eta < -1.0 ) return 1.00139;
      else if ( eta < -0.5 ) return 1.00122;
      else if ( eta < 0.0 ) return 1.00230;
      else if ( eta < 0.5 ) return 1.00230;
      else if ( eta < 1.0 ) return 1.00122;
      else if ( eta < 1.444 ) return 1.00139;
      else if ( eta < 1.566 ) return 1.05453;
      else if ( eta < 2.0 ) return 1.01418;
      else return 1.00646; }
  }
  else if ( shift == "down" ){
    if ( pt < 45.0 ) {
      if ( eta < -2.0 ) return 0.97995;
      else if ( eta < -1.566 ) return 0.98532;
      else if ( eta < -1.444 ) return 0.97078;
      else if ( eta < -1.0 ) return 0.97922;
      else if ( eta < -0.5 ) return 0.98503;
      else if ( eta < 0.0 ) return 0.98276;
      else if ( eta < 0.5 ) return 0.98265;
      else if ( eta < 1.0 ) return 0.98387;
      else if ( eta < 1.444 ) return 0.97594;
      else if ( eta < 1.566 ) return 0.98235;
      else if ( eta < 2.0 ) return 0.98431;
      else return 0.98309; }
    else if ( pt < 75.0 ) {
      if ( eta < -2.0 ) return 0.98138;
      else if ( eta < -1.566 ) return 0.98487;
      else if ( eta < -1.444 ) return 0.95718;
      else if ( eta < -1.0 ) return 0.97800;
      else if ( eta < -0.5 ) return 0.98153;
      else if ( eta < 0.0 ) return 0.98145;
      else if ( eta < 0.5 ) return 0.97926;
      else if ( eta < 1.0 ) return 0.98240;
      else if ( eta < 1.444 ) return 0.97477;
      else if ( eta < 1.566 ) return 0.96545;
      else if ( eta < 2.0 ) return 0.98487;
      else return 0.98346; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.98842;
      else if ( eta < -1.566 ) return 0.98914;
      else if ( eta < -1.444 ) return 1.01478;
      else if ( eta < -1.0 ) return 0.98978;
      else if ( eta < -0.5 ) return 0.98171;
      else if ( eta < 0.0 ) return 0.98579;
      else if ( eta < 0.5 ) return 0.98579;
      else if ( eta < 1.0 ) return 0.98171;
      else if ( eta < 1.444 ) return 0.98978;
      else if ( eta < 1.566 ) return 1.01478;
      else if ( eta < 2.0 ) return 0.98914;
      else return 0.98842; }
    else {
      if ( eta < -2.0 ) return 0.99151;
      else if ( eta < -1.566 ) return 1.00007;
      else if ( eta < -1.444 ) return 1.00708;
      else if ( eta < -1.0 ) return 0.98627;
      else if ( eta < -0.5 ) return 0.99060;
      else if ( eta < 0.0 ) return 0.98951;
      else if ( eta < 0.5 ) return 0.98951;
      else if ( eta < 1.0 ) return 0.99060;
      else if ( eta < 1.444 ) return 0.98627;
      else if ( eta < 1.566 ) return 1.00708;
      else if ( eta < 2.0 ) return 1.00007;
      else return 0.99151; }
  }
  else {
    if ( pt < 45.0 ) {
      if ( eta < -2.0 ) return 0.98354;
      else if ( eta < -1.566 ) return 0.98872;
      else if ( eta < -1.444 ) return 0.97544;
      else if ( eta < -1.0 ) return 0.98238;
      else if ( eta < -0.5 ) return 0.98868;
      else if ( eta < 0.0 ) return 0.98657;
      else if ( eta < 0.5 ) return 0.98646;
      else if ( eta < 1.0 ) return 0.98753;
      else if ( eta < 1.444 ) return 0.97910;
      else if ( eta < 1.566 ) return 0.98701;
      else if ( eta < 2.0 ) return 0.98770;
      else return 0.98668; }
    else if ( pt < 75.0 ) {
      if ( eta < -2.0 ) return 0.98671;
      else if ( eta < -1.566 ) return 0.98879;
      else if ( eta < -1.444 ) return 0.96592;
      else if ( eta < -1.0 ) return 0.98354;
      else if ( eta < -0.5 ) return 0.98774;
      else if ( eta < 0.0 ) return 0.98769;
      else if ( eta < 0.5 ) return 0.98551;
      else if ( eta < 1.0 ) return 0.98861;
      else if ( eta < 1.444 ) return 0.98031;
      else if ( eta < 1.566 ) return 0.97419;
      else if ( eta < 2.0 ) return 0.98879;
      else return 0.98879; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.99693;
      else if ( eta < -1.566 ) return 0.99390;
      else if ( eta < -1.444 ) return 1.03384;
      else if ( eta < -1.0 ) return 0.99793;
      else if ( eta < -0.5 ) return 0.98973;
      else if ( eta < 0.0 ) return 0.98975;
      else if ( eta < 0.5 ) return 0.98975;
      else if ( eta < 1.0 ) return 0.98973;
      else if ( eta < 1.444 ) return 0.99793;
      else if ( eta < 1.566 ) return 1.03384;
      else if ( eta < 2.0 ) return 0.99390;
      else return 0.99693; }
    else {
      if ( eta < -2.0 ) return 0.99898;
      else if ( eta < -1.566 ) return 1.00713;
      else if ( eta < -1.444 ) return 1.03080;
      else if ( eta < -1.0 ) return 0.99383;
      else if ( eta < -0.5 ) return 0.99591;
      else if ( eta < 0.0 ) return 0.99591;
      else if ( eta < 0.5 ) return 0.99591;
      else if ( eta < 1.0 ) return 0.99591;
      else if ( eta < 1.444 ) return 0.99383;
      else if ( eta < 1.566 ) return 1.03080;
      else if ( eta < 2.0 ) return 1.00713;
      else return 0.99898; }
  }
}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|          ELECTRON ID SCALE FACTOR SECTION           |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/
// derived using correctionlib tool with the wp90noiso key
double HardcodedConditions::GetElectronIdSF(double pt, double eta, std::string year, std::string shift)
{
  if      (year=="2016APV") return GetElectronIdSF2016APV(pt, eta, shift);
  else if (year=="2016") return GetElectronIdSF2016(pt, eta, shift);
  else if (year=="2017") return GetElectronIdSF2017(pt, eta, shift);
  else if (year=="2018") return GetElectronIdSF2018(pt, eta, shift);
  else return 0.;
}
double HardcodedConditions::GetElectronIdSF2016APV(double pt, double eta, std::string shift){
  if ( shift == "up" ){
    if ( pt < 20.0 ) {
      if ( eta < -2.0 ) return 1.03931;
      else if ( eta < -1.566 ) return 1.03014;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 1.02578;
      else if ( eta < 0.0 ) return 0.98096;
      else if ( eta < 0.8 ) return 0.99616;
      else if ( eta < 1.444 ) return 1.04392;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 1.02486;
      else return 1.06473; }
    else if ( pt < 35.0 ) {
      if ( eta < -2.0 ) return 1.00735;
      else if ( eta < -1.566 ) return 0.98737;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 0.97968;
      else if ( eta < 0.0 ) return 0.97034;
      else if ( eta < 0.8 ) return 0.98737;
      else if ( eta < 1.444 ) return 0.99307;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.97742;
      else return 1.00597; }
    else if ( pt < 50.0 ) {
      if ( eta < -2.0 ) return 0.99868;
      else if ( eta < -1.566 ) return 0.98797;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 0.98190;
      else if ( eta < 0.0 ) return 0.96992;
      else if ( eta < 0.8 ) return 0.97926;
      else if ( eta < 1.444 ) return 0.98768;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.98685;
      else return 0.99863; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 1.00592;
      else if ( eta < -1.566 ) return 0.99238;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 0.98291;
      else if ( eta < 0.0 ) return 0.97403;
      else if ( eta < 0.8 ) return 0.98670;
      else if ( eta < 1.444 ) return 0.98754;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.99573;
      else return 1.00353; }
    else {
      if ( eta < -2.0 ) return 1.04034;
      else if ( eta < -1.566 ) return 1.01202;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 1.00176;
      else if ( eta < 0.0 ) return 0.98247;
      else if ( eta < 0.8 ) return 0.99834;
      else if ( eta < 1.444 ) return 1.00524;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.99685;
      else return 1.02679; }
  }
  else if ( shift == "down" ){
    if ( pt < 20.0 ) {
      if ( eta < -2.0 ) return 1.00720;
      else if ( eta < -1.566 ) return 0.99358;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.97928;
      else if ( eta < 0.0 ) return 0.92937;
      else if ( eta < 0.8 ) return 0.94458;
      else if ( eta < 1.444 ) return 0.99726;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.98830;
      else return 1.03262; }
    else if ( pt < 35.0 ) {
      if ( eta < -2.0 ) return 0.98000;
      else if ( eta < -1.566 ) return 0.96554;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.95905;
      else if ( eta < 0.0 ) return 0.95042;
      else if ( eta < 0.8 ) return 0.96745;
      else if ( eta < 1.444 ) return 0.97244;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.95559;
      else return 0.97862; }
    else if ( pt < 50.0 ) {
      if ( eta < -2.0 ) return 0.99183;
      else if ( eta < -1.566 ) return 0.98197;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.97648;
      else if ( eta < 0.0 ) return 0.96379;
      else if ( eta < 0.8 ) return 0.97313;
      else if ( eta < 1.444 ) return 0.98226;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.98085;
      else return 0.99178; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.98939;
      else if ( eta < -1.566 ) return 0.98751;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.97805;
      else if ( eta < 0.0 ) return 0.95559;
      else if ( eta < 0.8 ) return 0.96826;
      else if ( eta < 1.444 ) return 0.98268;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.99085;
      else return 0.98700; }
    else {
      if ( eta < -2.0 ) return 0.98882;
      else if ( eta < -1.566 ) return 0.99235;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.98214;
      else if ( eta < 0.0 ) return 0.96764;
      else if ( eta < 0.8 ) return 0.98350;
      else if ( eta < 1.444 ) return 0.98562;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.97718;
      else return 0.97559; }
  }
  else {
    if ( pt < 20.0 ) {
      if ( eta < -2.0 ) return 1.02326;
      else if ( eta < -1.566 ) return 1.01186;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 1.00253;
      else if ( eta < 0.0 ) return 0.95517;
      else if ( eta < 0.8 ) return 0.97037;
      else if ( eta < 1.444 ) return 1.02059;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 1.00658;
      else return 1.04868; }
    else if ( pt < 35.0 ) {
      if ( eta < -2.0 ) return 0.99368;
      else if ( eta < -1.566 ) return 0.97646;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.96936;
      else if ( eta < 0.0 ) return 0.96038;
      else if ( eta < 0.8 ) return 0.97741;
      else if ( eta < 1.444 ) return 0.98276;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.96650;
      else return 0.99230; }
    else if ( pt < 50.0 ) {
      if ( eta < -2.0 ) return 0.99526;
      else if ( eta < -1.566 ) return 0.98497;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.97919;
      else if ( eta < 0.0 ) return 0.96686;
      else if ( eta < 0.8 ) return 0.97619;
      else if ( eta < 1.444 ) return 0.98497;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.98385;
      else return 0.99520; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.99766;
      else if ( eta < -1.566 ) return 0.98994;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.98048;
      else if ( eta < 0.0 ) return 0.96481;
      else if ( eta < 0.8 ) return 0.97748;
      else if ( eta < 1.444 ) return 0.98511;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.99329;
      else return 0.99527; }
    else {
      if ( eta < -2.0 ) return 1.01458;
      else if ( eta < -1.566 ) return 1.00219;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.99195;
      else if ( eta < 0.0 ) return 0.97506;
      else if ( eta < 0.8 ) return 0.99092;
      else if ( eta < 1.444 ) return 0.99543;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.98701;
      else return 1.00119; }
  }
}

double HardcodedConditions::GetElectronIdSF2016(double pt, double eta, std::string shift){
  if ( shift == "up" ){
    if ( pt < 20.0 ) {
      if ( eta < -2.0 ) return 1.03625;
      else if ( eta < -1.566 ) return 1.01368;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 0.99967;
      else if ( eta < 0.0 ) return 0.99005;
      else if ( eta < 0.8 ) return 0.99139;
      else if ( eta < 1.444 ) return 1.00203;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 1.00742;
      else return 1.00058; }
    else if ( pt < 35.0 ) {
      if ( eta < -2.0 ) return 1.00685;
      else if ( eta < -1.566 ) return 0.96413;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 0.97355;
      else if ( eta < 0.0 ) return 0.98007;
      else if ( eta < 0.8 ) return 0.99875;
      else if ( eta < 1.444 ) return 0.97597;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.95363;
      else return 0.96940; }
    else if ( pt < 50.0 ) {
      if ( eta < -2.0 ) return 1.00325;
      else if ( eta < -1.566 ) return 0.97073;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 0.97275;
      else if ( eta < 0.0 ) return 0.98087;
      else if ( eta < 0.8 ) return 0.99530;
      else if ( eta < 1.444 ) return 0.98063;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.96422;
      else return 0.97145; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 1.00405;
      else if ( eta < -1.566 ) return 0.98522;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 0.98331;
      else if ( eta < 0.0 ) return 0.98783;
      else if ( eta < 0.8 ) return 1.00216;
      else if ( eta < 1.444 ) return 0.99338;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.97333;
      else return 0.98419; }
    else {
      if ( eta < -2.0 ) return 1.09534;
      else if ( eta < -1.566 ) return 1.01827;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 1.03312;
      else if ( eta < 0.0 ) return 1.01027;
      else if ( eta < 0.8 ) return 1.02250;
      else if ( eta < 1.444 ) return 1.01039;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 1.00083;
      else return 1.03101; }
  }
  else if ( shift == "down" ){
    if ( pt < 20.0 ) {
      if ( eta < -2.0 ) return 1.00548;
      else if ( eta < -1.566 ) return 0.95786;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.96259;
      else if ( eta < 0.0 ) return 0.95616;
      else if ( eta < 0.8 ) return 0.95751;
      else if ( eta < 1.444 ) return 0.96531;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.95160;
      else return 0.96981; }
    else if ( pt < 35.0 ) {
      if ( eta < -2.0 ) return 0.98033;
      else if ( eta < -1.566 ) return 0.94307;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.95148;
      else if ( eta < 0.0 ) return 0.95904;
      else if ( eta < 0.8 ) return 0.97772;
      else if ( eta < 1.444 ) return 0.95390;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.93257;
      else return 0.94288; }
    else if ( pt < 50.0 ) {
      if ( eta < -2.0 ) return 0.99675;
      else if ( eta < -1.566 ) return 0.96527;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.96582;
      else if ( eta < 0.0 ) return 0.97454;
      else if ( eta < 0.8 ) return 0.98897;
      else if ( eta < 1.444 ) return 0.97370;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.95877;
      else return 0.96494; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.99123;
      else if ( eta < -1.566 ) return 0.97708;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.96032;
      else if ( eta < 0.0 ) return 0.97235;
      else if ( eta < 0.8 ) return 0.98668;
      else if ( eta < 1.444 ) return 0.97038;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.96499;
      else return 0.97137; }
    else {
      if ( eta < -2.0 ) return 1.04267;
      else if ( eta < -1.566 ) return 0.98826;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 1.01234;
      else if ( eta < 0.0 ) return 0.99639;
      else if ( eta < 0.8 ) return 1.00903;
      else if ( eta < 1.444 ) return 0.98961;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.97112;
      else return 0.97829; }
  }
  else {
    if ( pt < 20.0 ) {
      if ( eta < -2.0 ) return 1.02086;
      else if ( eta < -1.566 ) return 0.98577;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.98113;
      else if ( eta < 0.0 ) return 0.97311;
      else if ( eta < 0.8 ) return 0.97445;
      else if ( eta < 1.444 ) return 0.98367;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.97951;
      else return 0.98520; }
    else if ( pt < 35.0 ) {
      if ( eta < -2.0 ) return 0.99359;
      else if ( eta < -1.566 ) return 0.95360;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.96252;
      else if ( eta < 0.0 ) return 0.96956;
      else if ( eta < 0.8 ) return 0.98824;
      else if ( eta < 1.444 ) return 0.96493;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.94310;
      else return 0.95614; }
    else if ( pt < 50.0 ) {
      if ( eta < -2.0 ) return 1.00000;
      else if ( eta < -1.566 ) return 0.96800;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.96928;
      else if ( eta < 0.0 ) return 0.97770;
      else if ( eta < 0.8 ) return 0.99213;
      else if ( eta < 1.444 ) return 0.97717;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.96149;
      else return 0.96820; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.99764;
      else if ( eta < -1.566 ) return 0.98115;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.97182;
      else if ( eta < 0.0 ) return 0.98009;
      else if ( eta < 0.8 ) return 0.99442;
      else if ( eta < 1.444 ) return 0.98188;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.96916;
      else return 0.97778; }
    else {
      if ( eta < -2.0 ) return 1.06901;
      else if ( eta < -1.566 ) return 1.00327;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 1.02273;
      else if ( eta < 0.0 ) return 1.00333;
      else if ( eta < 0.8 ) return 1.01577;
      else if ( eta < 1.444 ) return 1.00000;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.98598;
      else return 1.00465; }
  }
}
		
double HardcodedConditions::GetElectronIdSF2017(double pt, double eta, std::string shift){
  if ( shift == "up" ){
    if ( pt < 20.0 ) {
      if ( eta < -2.0 ) return 1.00931;
      else if ( eta < -1.566 ) return 0.99385;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 1.00553;
      else if ( eta < 0.0 ) return 0.99899;
      else if ( eta < 0.8 ) return 0.99544;
      else if ( eta < 1.444 ) return 1.00908;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.99023;
      else return 1.02070; }
    else if ( pt < 35.0 ) {
      if ( eta < -2.0 ) return 0.96935;
      else if ( eta < -1.566 ) return 0.94691;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 0.97658;
      else if ( eta < 0.0 ) return 0.97682;
      else if ( eta < 0.8 ) return 0.98051;
      else if ( eta < 1.444 ) return 0.98088;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.94988;
      else return 0.97022; }
    else if ( pt < 50.0 ) {
      if ( eta < -2.0 ) return 0.97576;
      else if ( eta < -1.566 ) return 0.97168;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 0.97744;
      else if ( eta < 0.0 ) return 0.97893;
      else if ( eta < 0.8 ) return 0.98123;
      else if ( eta < 1.444 ) return 0.97957;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.97375;
      else return 0.97123; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.97794;
      else if ( eta < -1.566 ) return 0.98089;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 0.97815;
      else if ( eta < 0.0 ) return 0.97745;
      else if ( eta < 0.8 ) return 0.97970;
      else if ( eta < 1.444 ) return 0.98242;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.98708;
      else return 0.97998; }
    else {
      if ( eta < -2.0 ) return 0.99712;
      else if ( eta < -1.566 ) return 0.99564;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 1.01283;
      else if ( eta < 0.0 ) return 0.99310;
      else if ( eta < 0.8 ) return 0.99852;
      else if ( eta < 1.444 ) return 0.99318;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.99253;
      else return 1.00726; }
  }
  else if ( shift == "down" ){
    if ( pt < 20.0 ) {
      if ( eta < -2.0 ) return 0.98071;
      else if ( eta < -1.566 ) return 0.92868;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.96764;
      else if ( eta < 0.0 ) return 0.96155;
      else if ( eta < 0.8 ) return 0.95799;
      else if ( eta < 1.444 ) return 0.97109;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.92506;
      else return 0.99186; }
    else if ( pt < 35.0 ) {
      if ( eta < -2.0 ) return 0.94760;
      else if ( eta < -1.566 ) return 0.93492;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.95357;
      else if ( eta < 0.0 ) return 0.95806;
      else if ( eta < 0.8 ) return 0.96175;
      else if ( eta < 1.444 ) return 0.95787;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.93789;
      else return 0.94848; }
    else if ( pt < 50.0 ) {
      if ( eta < -2.0 ) return 0.96935;
      else if ( eta < -1.566 ) return 0.96428;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.97168;
      else if ( eta < 0.0 ) return 0.97261;
      else if ( eta < 0.8 ) return 0.97491;
      else if ( eta < 1.444 ) return 0.97381;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.96635;
      else return 0.96482; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.95909;
      else if ( eta < -1.566 ) return 0.97294;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.96726;
      else if ( eta < 0.0 ) return 0.97260;
      else if ( eta < 0.8 ) return 0.97485;
      else if ( eta < 1.444 ) return 0.97153;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.97913;
      else return 0.96113; }
    else {
      if ( eta < -2.0 ) return 0.95642;
      else if ( eta < -1.566 ) return 0.96291;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.99379;
      else if ( eta < 0.0 ) return 0.97873;
      else if ( eta < 0.8 ) return 0.98416;
      else if ( eta < 1.444 ) return 0.97414;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.95980;
      else return 0.96601; }
  }
  else {
    if ( pt < 20.0 ) {
      if ( eta < -2.0 ) return 0.99501;
      else if ( eta < -1.566 ) return 0.96127;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.98659;
      else if ( eta < 0.0 ) return 0.98027;
      else if ( eta < 0.8 ) return 0.97672;
      else if ( eta < 1.444 ) return 0.99009;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.95765;
      else return 1.00628; }
    else if ( pt < 35.0 ) {
      if ( eta < -2.0 ) return 0.95848;
      else if ( eta < -1.566 ) return 0.94091;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.96508;
      else if ( eta < 0.0 ) return 0.96744;
      else if ( eta < 0.8 ) return 0.97113;
      else if ( eta < 1.444 ) return 0.96938;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.94388;
      else return 0.95935; }
    else if ( pt < 50.0 ) {
      if ( eta < -2.0 ) return 0.97256;
      else if ( eta < -1.566 ) return 0.96798;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.97456;
      else if ( eta < 0.0 ) return 0.97577;
      else if ( eta < 0.8 ) return 0.97807;
      else if ( eta < 1.444 ) return 0.97669;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.97005;
      else return 0.96803; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.96851;
      else if ( eta < -1.566 ) return 0.97692;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.97271;
      else if ( eta < 0.0 ) return 0.97503;
      else if ( eta < 0.8 ) return 0.97727;
      else if ( eta < 1.444 ) return 0.97697;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.98310;
      else return 0.97056; }
    else {
      if ( eta < -2.0 ) return 0.97677;
      else if ( eta < -1.566 ) return 0.97927;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 1.00331;
      else if ( eta < 0.0 ) return 0.98592;
      else if ( eta < 0.8 ) return 0.99134;
      else if ( eta < 1.444 ) return 0.98366;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.97617;
      else return 0.98664; }
  }
}

double HardcodedConditions::GetElectronIdSF2018(double pt, double eta, std::string shift){
  if ( shift == "up" ){
    if ( pt < 20.0 ) {
      if ( eta < -2.0 ) return 1.00699;
      else if ( eta < -1.566 ) return 0.98947;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 1.00533;
      else if ( eta < 0.0 ) return 0.97441;
      else if ( eta < 0.8 ) return 0.99214;
      else if ( eta < 1.444 ) return 1.00523;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.99996;
      else return 0.97890; }
    else if ( pt < 35.0 ) {
      if ( eta < -2.0 ) return 0.97178;
      else if ( eta < -1.566 ) return 0.95986;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 0.95613;
      else if ( eta < 0.0 ) return 0.97431;
      else if ( eta < 0.8 ) return 0.98137;
      else if ( eta < 1.444 ) return 0.95808;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.95399;
      else return 0.95758; }
    else if ( pt < 50.0 ) {
      if ( eta < -2.0 ) return 0.97576;
      else if ( eta < -1.566 ) return 0.96937;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 0.97052;
      else if ( eta < 0.0 ) return 0.97480;
      else if ( eta < 0.8 ) return 0.97808;
      else if ( eta < 1.444 ) return 0.97142;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.96721;
      else return 0.96463; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.97502;
      else if ( eta < -1.566 ) return 0.97700;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 0.97512;
      else if ( eta < 0.0 ) return 0.97959;
      else if ( eta < 0.8 ) return 0.98065;
      else if ( eta < 1.444 ) return 0.97494;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.97386;
      else return 0.96724; }
    else {
      if ( eta < -2.0 ) return 1.01362;
      else if ( eta < -1.566 ) return 0.99927;
      else if ( eta < -1.444 ) return 2.00000;
      else if ( eta < -0.8 ) return 0.99917;
      else if ( eta < 0.0 ) return 0.98729;
      else if ( eta < 0.8 ) return 0.99267;
      else if ( eta < 1.444 ) return 0.99585;
      else if ( eta < 1.566 ) return 2.00000;
      else if ( eta < 2.0 ) return 0.99192;
      else return 0.98137; }
  }
  else if ( shift == "down" ){
    if ( pt < 20.0 ) {
      if ( eta < -2.0 ) return 0.97255;
      else if ( eta < -1.566 ) return 0.95438;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.96217;
      else if ( eta < 0.0 ) return 0.95254;
      else if ( eta < 0.8 ) return 0.97027;
      else if ( eta < 1.444 ) return 0.96207;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.96487;
      else return 0.94447; }
    else if ( pt < 35.0 ) {
      if ( eta < -2.0 ) return 0.94654;
      else if ( eta < -1.566 ) return 0.94014;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.94563;
      else if ( eta < 0.0 ) return 0.95576;
      else if ( eta < 0.8 ) return 0.96282;
      else if ( eta < 1.444 ) return 0.94758;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.93428;
      else return 0.93235; }
    else if ( pt < 50.0 ) {
      if ( eta < -2.0 ) return 0.96924;
      else if ( eta < -1.566 ) return 0.96474;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.96532;
      else if ( eta < 0.0 ) return 0.97013;
      else if ( eta < 0.8 ) return 0.97341;
      else if ( eta < 1.444 ) return 0.96622;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.96258;
      else return 0.95811; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.96615;
      else if ( eta < -1.566 ) return 0.97268;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.96136;
      else if ( eta < 0.0 ) return 0.96818;
      else if ( eta < 0.8 ) return 0.96924;
      else if ( eta < 1.444 ) return 0.96118;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.96954;
      else return 0.95837; }
    else {
      if ( eta < -2.0 ) return 0.98192;
      else if ( eta < -1.566 ) return 0.98398;
      else if ( eta < -1.444 ) return 0.00000;
      else if ( eta < -0.8 ) return 0.98334;
      else if ( eta < 0.0 ) return 0.97391;
      else if ( eta < 0.8 ) return 0.97929;
      else if ( eta < 1.444 ) return 0.98003;
      else if ( eta < 1.566 ) return 0.00000;
      else if ( eta < 2.0 ) return 0.97663;
      else return 0.94989; }
  }
  else {
    if ( pt < 20.0 ) {
      if ( eta < -2.0 ) return 0.98977;
      else if ( eta < -1.566 ) return 0.97193;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.98375;
      else if ( eta < 0.0 ) return 0.96348;
      else if ( eta < 0.8 ) return 0.98120;
      else if ( eta < 1.444 ) return 0.98365;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.98242;
      else return 0.96169; }
    else if ( pt < 35.0 ) {
      if ( eta < -2.0 ) return 0.95916;
      else if ( eta < -1.566 ) return 0.95000;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.95088;
      else if ( eta < 0.0 ) return 0.96503;
      else if ( eta < 0.8 ) return 0.97209;
      else if ( eta < 1.444 ) return 0.95283;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.94413;
      else return 0.94496; }
    else if ( pt < 50.0 ) {
      if ( eta < -2.0 ) return 0.97250;
      else if ( eta < -1.566 ) return 0.96706;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.96792;
      else if ( eta < 0.0 ) return 0.97247;
      else if ( eta < 0.8 ) return 0.97574;
      else if ( eta < 1.444 ) return 0.96882;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.96489;
      else return 0.96137; }
    else if ( pt < 100.0 ) {
      if ( eta < -2.0 ) return 0.97059;
      else if ( eta < -1.566 ) return 0.97484;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.96824;
      else if ( eta < 0.0 ) return 0.97388;
      else if ( eta < 0.8 ) return 0.97495;
      else if ( eta < 1.444 ) return 0.96806;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.97170;
      else return 0.96280; }
    else {
      if ( eta < -2.0 ) return 0.99777;
      else if ( eta < -1.566 ) return 0.99162;
      else if ( eta < -1.444 ) return 1.00000;
      else if ( eta < -0.8 ) return 0.99126;
      else if ( eta < 0.0 ) return 0.98060;
      else if ( eta < 0.8 ) return 0.98598;
      else if ( eta < 1.444 ) return 0.98794;
      else if ( eta < 1.566 ) return 1.00000;
      else if ( eta < 2.0 ) return 0.98428;
      else return 0.96563; }
  }
}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|          ELECTRON ISO SCALE FACTOR SECTION          |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

// miniIsolation SF calculated using EGamma TnP
double HardcodedConditions::GetElectronIsoSF(double pt, double eta, std::string year)
{
  //The main getter for Electron Iso Scale Factors
  if      (year=="2016APV") return GetElectronIsoSF2016APV(pt, eta);
  else if (year=="2016") return GetElectronIsoSF2016(pt, eta);
  else if (year=="2017") return GetElectronIsoSF2017(pt, eta);
  else if (year=="2018") return GetElectronIsoSF2018(pt, eta);
  else return 0.;
}

double HardcodedConditions::GetElectronIsoSF2016APV(double pt, double eta){
  if( pt < 20 ){
    if( eta < -2.0 ) return 1.016;
    else if( eta < -1.5660 ) return 1.024;
    else if( eta < -1.4442 ) return 1.046;
    else if( eta < -0.8000 ) return 1.005;
    else if( eta <  0.0000 ) return 0.997;
    else if( eta <  0.8000 ) return 0.999;
    else if( eta <  1.4442 ) return 1.016;
    else if( eta <  1.5660 ) return 1.093;
    else if( eta <  2.0000 ) return 1.019;
    else return 1.023;
  }
  else if( pt < 35 ){
    if( eta < -2.0 ) return 1.013;
    else if( eta < -1.5660 ) return 1.010;
    else if( eta < -1.4442 ) return 1.063;
    else if( eta < -0.8000 ) return 1.004;
    else if( eta <  0.0000 ) return 1.001;
    else if( eta <  0.8000 ) return 1.003;
    else if( eta <  1.4442 ) return 1.005;
    else if( eta <  1.5660 ) return 1.058;
    else if( eta <  2.0000 ) return 1.011;
    else return 1.010;
  }
  else if( pt < 50 ){
    if( eta < -2.0 ) return 1.005;
    else if( eta < -1.5660 ) return 1.003;
    else if( eta < -1.4442 ) return 1.013;
    else if( eta < -0.8000 ) return 1.001;
    else if( eta <  0.0000 ) return 0.998;
    else if( eta <  0.8000 ) return 1.000;
    else if( eta <  1.4442 ) return 1.000;
    else if( eta <  1.5660 ) return 1.008;
    else if( eta <  2.0000 ) return 1.002;
    else return 1.004;
  }
  else if( pt < 100 ){
    if( eta < -2.0 ) return 1.002;
    else if( eta < -1.5660 ) return 1.001;
    else if( eta < -1.4442 ) return 1.013;
    else if( eta < -0.8000 ) return 1.001;
    else if( eta <  0.0000 ) return 0.999;
    else if( eta <  0.8000 ) return 1.000;
    else if( eta <  1.4442 ) return 0.999;
    else if( eta <  1.5660 ) return 1.002;
    else if( eta <  2.0000 ) return 1.001;
    else return 1.004;
  }
  else if( pt < 200 ){
    if( eta < -2.0 ) return 1.002;
    else if( eta < -1.5660 ) return 1.000;
    else if( eta < -1.4442 ) return 1.018;
    else if( eta < -0.8000 ) return 1.000;
    else if( eta <  0.0000 ) return 1.000;
    else if( eta <  0.8000 ) return 1.000;
    else if( eta <  1.4442 ) return 1.000;
    else if( eta <  1.5660 ) return 1.028;
    else if( eta <  2.0000 ) return 1.000;
    else return 0.999;
  }
  else {
    if( eta < -2.0 ) return 0.993;
    else if( eta < -1.5660 ) return 0.998;
    else if( eta < -1.4442 ) return 0.989;
    else if( eta < -0.8000 ) return 1.004;
    else if( eta <  0.0000 ) return 0.999;
    else if( eta <  0.8000 ) return 1.004;
    else if( eta <  1.4442 ) return 1.005;
    else if( eta <  1.5660 ) return 1.027;
    else if( eta <  2.0000 ) return 0.993;
    else return 0.994;
  }
}

double HardcodedConditions::GetElectronIsoSF2016(double pt, double eta){
  if( pt < 20 ){
    if( eta < -2.0 ) return 1.008;
    else if( eta < -1.5660 ) return 1.006;
    else if( eta < -1.4442 ) return 1.074;
    else if( eta < -0.8000 ) return 0.993;
    else if( eta <  0.0000 ) return 0.982;
    else if( eta <  0.8000 ) return 0.990;
    else if( eta <  1.4442 ) return 0.992;
    else if( eta <  1.5660 ) return 0.999;
    else if( eta <  2.0000 ) return 1.008;
    else return 1.015;
  }
  else if( pt < 35 ){
    if( eta < -2.0 ) return 1.008;
    else if( eta < -1.5660 ) return 1.006; 
    else if( eta < -1.4442 ) return 1.054;
    else if( eta < -0.8000 ) return 1.001;
    else if( eta <  0.0000 ) return 0.997;
    else if( eta <  0.8000 ) return 0.997;
    else if( eta <  1.4442 ) return 1.001;
    else if( eta <  1.5660 ) return 1.045;
    else if( eta <  2.0000 ) return 1.007;
    else return 1.007;
  }
  else if( pt < 50 ){
    if( eta < -2.0 ) return 1.003;
    else if( eta < -1.5660 ) return 1.003; 
    else if( eta < -1.4442 ) return 1.020;
    else if( eta < -0.8000 ) return 1.000;
    else if( eta <  0.0000 ) return 0.997;
    else if( eta <  0.8000 ) return 0.998;
    else if( eta <  1.4442 ) return 1.000;
    else if( eta <  1.5660 ) return 1.010;
    else if( eta <  2.0000 ) return 1.002;
    else return 1.002;
  }
  else if( pt < 100 ){
    if( eta < -2.0 ) return 1.001;
    else if( eta < -1.5660 ) return 1.002; 
    else if( eta < -1.4442 ) return 1.021;
    else if( eta < -0.8000 ) return 0.999;
    else if( eta <  0.0000 ) return 0.998;
    else if( eta <  0.8000 ) return 0.999;
    else if( eta <  1.4442 ) return 1.000;
    else if( eta <  1.5660 ) return 1.007;
    else if( eta <  2.0000 ) return 1.000;
    else return 1.002;
  }
  else if( pt < 200 ){
    if( eta < -2.0 ) return 1.000;
    else if( eta < -1.5660 ) return 1.002; 
    else if( eta < -1.4442 ) return 0.984;
    else if( eta < -0.8000 ) return 0.999;
    else if( eta <  0.0000 ) return 1.002;
    else if( eta <  0.8000 ) return 0.996;
    else if( eta <  1.4442 ) return 1.000;
    else if( eta <  1.5660 ) return 1.025;
    else if( eta <  2.0000 ) return 0.999;
    else return 1.000;
  }
  else {
    if( eta < -2.0 ) return 0.991;
    else if( eta < -1.5660 ) return 0.998; 
    else if( eta < -1.4442 ) return 0.990;
    else if( eta < -0.8000 ) return 0.996;
    else if( eta <  0.0000 ) return 0.998;
    else if( eta <  0.8000 ) return 0.999;
    else if( eta <  1.4442 ) return 1.000;
    else if( eta <  1.5660 ) return 0.991;
    else if( eta <  2.0000 ) return 0.997;
    else return 0.989;
  }
}

double HardcodedConditions::GetElectronIsoSF2017(double pt, double eta){
  if( pt < 20 ){
    if( eta < -2.0 ) return 1.015;
    else if( eta < -1.5660 ) return 1.021;
    else if( eta < -1.4442 ) return 1.031;
    else if( eta < -0.8000 ) return 1.006;
    else if( eta <  0.0000 ) return 0.998;
    else if( eta <  0.8000 ) return 1.000;
    else if( eta <  1.4442 ) return 1.013;
    else if( eta <  1.5660 ) return 0.951;
    else if( eta <  2.0000 ) return 1.005;
    else return 1.028;
  }
  else if( pt < 35 ){
    if( eta < -2.0 ) return 1.012;
    else if( eta < -1.5660 ) return 1.011;
    else if( eta < -1.4442 ) return 1.033;
    else if( eta < -0.8000 ) return 1.004;
    else if( eta <  0.0000 ) return 0.998;
    else if( eta <  0.8000 ) return 1.002;
    else if( eta <  1.4442 ) return 1.004;
    else if( eta <  1.5660 ) return 1.033;
    else if( eta <  2.0000 ) return 1.007;
    else return 1.014;
  }
  else if( pt < 50 ){
    if( eta < -2.0 ) return 1.004;
    else if( eta < -1.5660 ) return 1.004;
    else if( eta < -1.4442 ) return 1.012;
    else if( eta < -0.8000 ) return 1.000;
    else if( eta <  0.0000 ) return 0.999;
    else if( eta <  0.8000 ) return 1.001;
    else if( eta <  1.4442 ) return 1.001;
    else if( eta <  1.5660 ) return 1.009;
    else if( eta <  2.0000 ) return 1.003;
    else return 1.006;
  }
  else if( pt < 100 ){
    if( eta < -2.0 ) return 1.002;
    else if( eta < -1.5660 ) return 1.003;
    else if( eta < -1.4442 ) return 1.011;
    else if( eta < -0.8000 ) return 0.999;
    else if( eta <  0.0000 ) return 0.998;
    else if( eta <  0.8000 ) return 1.002;
    else if( eta <  1.4442 ) return 1.000;
    else if( eta <  1.5660 ) return 1.014;
    else if( eta <  2.0000 ) return 1.000;
    else return 1.003;
  }
  else if( pt < 200 ){
    if( eta < -2.0 ) return 1.002;
    else if( eta < -1.5660 ) return 1.000;
    else if( eta < -1.4442 ) return 1.008;
    else if( eta < -0.8000 ) return 1.001;
    else if( eta <  0.0000 ) return 1.004;
    else if( eta <  0.8000 ) return 1.005;
    else if( eta <  1.4442 ) return 1.003;
    else if( eta <  1.5660 ) return 1.018;
    else if( eta <  2.0000 ) return 0.999;
    else return 1.001;
  }
  else {
    if( eta < -2.0 ) return 0.998;
    else if( eta < -1.5660 ) return 1.003;
    else if( eta < -1.4442 ) return 1.014;
    else if( eta < -0.8000 ) return 1.005;
    else if( eta <  0.0000 ) return 1.002;
    else if( eta <  0.8000 ) return 1.000;
    else if( eta <  1.4442 ) return 1.001;
    else if( eta <  1.5660 ) return 0.986;
    else if( eta <  2.0000 ) return 0.999;
    else return 1.009;
  }
}

double HardcodedConditions::GetElectronIsoSF2018(double pt, double eta){
  if( pt < 20 ){
    if( eta < -2.0 ) return 0.998;
    else if( eta < -1.5660 ) return 1.021;
    else if( eta < -1.4442 ) return 1.073;
    else if( eta < -0.8000 ) return 0.987;
    else if( eta <  0.0000 ) return 0.993;
    else if( eta <  0.8000 ) return 0.997;
    else if( eta <  1.4442 ) return 0.992;
    else if( eta <  1.5660 ) return 1.036;
    else if( eta <  2.0000 ) return 1.009;
    else return 1.009;
  }
  else if( pt < 35 ){
    if( eta < -2.0 ) return 1.003;
    else if( eta < -1.5660 ) return 1.005;
    else if( eta < -1.4442 ) return 1.052;
    else if( eta < -0.8000 ) return 0.997;
    else if( eta <  0.0000 ) return 0.998;
    else if( eta <  0.8000 ) return 1.000;
    else if( eta <  1.4442 ) return 0.997;
    else if( eta <  1.5660 ) return 1.048;
    else if( eta <  2.0000 ) return 1.005;
    else return 1.002;
  }
  else if( pt < 50 ){
    if( eta < -2.0 ) return 1.001;
    else if( eta < -1.5660 ) return 1.002;
    else if( eta < -1.4442 ) return 1.031;
    else if( eta < -0.8000 ) return 0.997;
    else if( eta <  0.0000 ) return 0.998;
    else if( eta <  0.8000 ) return 0.999;
    else if( eta <  1.4442 ) return 0.998;
    else if( eta <  1.5660 ) return 1.023;
    else if( eta <  2.0000 ) return 1.001;
    else return 1.001;
  }
  else if( pt < 100 ){
    if( eta < -2.0 ) return 1.003;
    else if( eta < -1.5660 ) return 1.000;
    else if( eta < -1.4442 ) return 1.047;
    else if( eta < -0.8000 ) return 0.998;
    else if( eta <  0.0000 ) return 0.999;
    else if( eta <  0.8000 ) return 0.999;
    else if( eta <  1.4442 ) return 0.998;
    else if( eta <  1.5660 ) return 1.035;
    else if( eta <  2.0000 ) return 1.000;
    else return 1.001;
  }
  else if( pt < 200 ){
    if( eta < -2.0 ) return 1.000;
    else if( eta < -1.5660 ) return 1.000;
    else if( eta < -1.4442 ) return 1.013;
    else if( eta < -0.8000 ) return 1.000;
    else if( eta <  0.0000 ) return 1.001;
    else if( eta <  0.8000 ) return 1.001;
    else if( eta <  1.4442 ) return 1.000;
    else if( eta <  1.5660 ) return 0.996;
    else if( eta <  2.0000 ) return 0.999;
    else return 1.002;
  }
  else {
    if( eta < -2.0 ) return 0.997;
    else if( eta < -1.5660 ) return 1.004;
    else if( eta < -1.4442 ) return 1.011;
    else if( eta < -0.8000 ) return 0.998;
    else if( eta <  0.0000 ) return 0.998;
    else if( eta <  0.8000 ) return 1.002;
    else if( eta <  1.4442 ) return 1.003;
    else if( eta <  1.5660 ) return 1.016;
    else if( eta <  2.0000 ) return 1.000;
    else return 0.996;
  }
}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|        ELECTRON TRIGGER SCALE FACTOR SECTION        |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

double HardcodedConditions::GetElectronTriggerSF(double pt, double eta, std::string year)
{
  //The main getter for Electron Trigger Scale Factors
  if      (year=="2016APV") return GetElectronTriggerSF2016APV(pt, eta);
  else if (year=="2016") return GetElectronTriggerSF2016(pt, eta);
  else if (year=="2017") return GetElectronTriggerSF2017(pt, eta);
  else if (year=="2018") return GetElectronTriggerSF2018(pt, eta);
  else return 1.0;
}//end GetElectronTriggerSF

// using cut-and-count method from triggerX/triggerX_SF.py for 2016APV
// https://github.com/TopBrussels/TopTreeAnalysisBase/blob/CMSSW_80X/Calibrations/LeptonSF/ElectronSF/SF_HLT_Ele32_eta2p1.root
double HardcodedConditions::GetElectronTriggerSF2016APV(double pt, double eta){
  if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.58314;
    else if ( fabs(eta) < 1.4442 ) return 2.06786;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.01020;
    else return 0.38932; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.19383;
    else if ( fabs(eta) < 1.4442 ) return 1.12618;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.95816;
    else return 0.78417; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.23217;
    else if ( fabs(eta) < 1.4442 ) return 1.14523;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.04984;
    else return 0.81113; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.24198;
    else if ( fabs(eta) < 1.4442 ) return 1.17750;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.99915;
    else return 0.82839; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.21713;
    else if ( fabs(eta) < 1.4442 ) return 1.15302;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.97647;
    else return 0.90637; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.22371;
    else if ( fabs(eta) < 1.4442 ) return 1.15888;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96555;
    else return 0.91517; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.20704;
    else if ( fabs(eta) < 1.4442 ) return 1.14614;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.88450;
    else return 0.83138; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.18790;
    else if ( fabs(eta) < 1.4442 ) return 1.10756;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.77335;
    else return 0.62373; }  
}

// using EOY SF for HLT_ele32_eta2p1_WPTight_Gsf_v* approved by KIT for Run 2016
// https://github.com/TopBrussels/TopTreeAnalysisBase/blob/CMSSW_80X/Calibrations/LeptonSF/ElectronSF/SF_HLT_Ele32_eta2p1.root
double HardcodedConditions::GetElectronTriggerSF2016(double pt, double eta){
  double triggerSFHLT;
  if (eta < -1.8){
    if     (pt < 32 ){triggerSFHLT = 0.394531250000;}
    else if(pt < 34 ){triggerSFHLT = 0.721804499626;}
    else if(pt < 36 ){triggerSFHLT = 0.914093971252;}
    else if(pt < 38 ){triggerSFHLT = 0.936031341553;}
    else if(pt < 40 ){triggerSFHLT = 0.942965805531;}
    else if(pt < 42 ){triggerSFHLT = 0.950310587883;}
    else if(pt < 44 ){triggerSFHLT = 0.948529422283;}
    else if(pt < 46 ){triggerSFHLT = 0.947051763535;}
    else if(pt < 48 ){triggerSFHLT = 0.945107400417;}
    else if(pt < 50 ){triggerSFHLT = 0.936018943787;}
    else if(pt < 52 ){triggerSFHLT = 0.961813867092;}
    else if(pt < 54 ){triggerSFHLT = 0.935483872890;}
    else if(pt < 56 ){triggerSFHLT = 0.940023064613;}
    else if(pt < 60 ){triggerSFHLT = 0.954171538353;}
    else if(pt < 65 ){triggerSFHLT = 0.968347012997;}
    else if(pt < 70 ){triggerSFHLT = 0.916943550110;}
    else if(pt < 80 ){triggerSFHLT = 0.928730487823;}
    else if(pt < 90 ){triggerSFHLT = 0.922222197056;}
    else if(pt < 100){triggerSFHLT = 0.925081431866;}
    else if(pt < 120){triggerSFHLT = 0.937701404095;}
    else if(pt < 200){triggerSFHLT = 0.939427316189;}
    else             {triggerSFHLT = 0.918580353260;}
  }
  else if (eta < -1.566){
    if     (pt < 32 ){triggerSFHLT = 0.687804877758;}
    else if(pt < 34 ){triggerSFHLT = 0.827639758587;}
    else if(pt < 36 ){triggerSFHLT = 0.916438341141;}
    else if(pt < 38 ){triggerSFHLT = 0.922470450401;}
    else if(pt < 40 ){triggerSFHLT = 0.919293820858;}
    else if(pt < 42 ){triggerSFHLT = 0.925558328629;}
    else if(pt < 44 ){triggerSFHLT = 0.927710831165;}
    else if(pt < 46 ){triggerSFHLT = 0.933253884315;}
    else if(pt < 48 ){triggerSFHLT = 0.949820816517;}
    else if(pt < 50 ){triggerSFHLT = 0.937278091908;}
    else if(pt < 52 ){triggerSFHLT = 0.942216992378;}
    else if(pt < 54 ){triggerSFHLT = 0.945497632027;}
    else if(pt < 56 ){triggerSFHLT = 0.932242989540;}
    else if(pt < 60 ){triggerSFHLT = 0.936562836170;}
    else if(pt < 65 ){triggerSFHLT = 0.908988773823;}
    else if(pt < 70 ){triggerSFHLT = 0.935972034931;}
    else if(pt < 80 ){triggerSFHLT = 0.937923252583;}
    else if(pt < 90 ){triggerSFHLT = 0.914939999580;}
    else if(pt < 100){triggerSFHLT = 0.908096253872;}
    else if(pt < 120){triggerSFHLT = 0.943584084511;}
    else if(pt < 200){triggerSFHLT = 0.925438582897;}
    else             {triggerSFHLT = 1.011376619339;}
  }
  else if (eta < -1.442){
    if     (pt < 32 ){triggerSFHLT = 0.971014499664;}
    else if(pt < 34 ){triggerSFHLT = 0.883445918560;}
    else if(pt < 36 ){triggerSFHLT = 0.929945051670;}
    else if(pt < 38 ){triggerSFHLT = 0.960422158241;}
    else if(pt < 40 ){triggerSFHLT = 0.970284223557;}
    else if(pt < 42 ){triggerSFHLT = 0.978616356850;}
    else if(pt < 44 ){triggerSFHLT = 0.980295538902;}
    else if(pt < 46 ){triggerSFHLT = 0.990255773067;}
    else if(pt < 48 ){triggerSFHLT = 0.964705884457;}
    else if(pt < 50 ){triggerSFHLT = 0.962352931499;}
    else if(pt < 52 ){triggerSFHLT = 0.965842187405;}
    else if(pt < 54 ){triggerSFHLT = 1.013496875763;}
    else if(pt < 56 ){triggerSFHLT = 0.995169103146;}
    else if(pt < 60 ){triggerSFHLT = 0.974820137024;}
    else if(pt < 65 ){triggerSFHLT = 0.995073914528;}
    else if(pt < 70 ){triggerSFHLT = 0.953917026520;}
    else if(pt < 80 ){triggerSFHLT = 1.048750042915;}
    else if(pt < 90 ){triggerSFHLT = 0.981351971626;}
    else if(pt < 100){triggerSFHLT = 0.998864948750;}
    else if(pt < 120){triggerSFHLT = 0.937290012836;}
    else if(pt < 200){triggerSFHLT = 0.970132768154;}
    else             {triggerSFHLT = 1.139416933060;}
  }
  else if (eta < -1.1){
    if     (pt < 32 ){triggerSFHLT = 0.525862097740;}
    else if(pt < 34 ){triggerSFHLT = 0.781931459904;}
    else if(pt < 36 ){triggerSFHLT = 0.919653892517;}
    else if(pt < 38 ){triggerSFHLT = 0.949519217014;}
    else if(pt < 40 ){triggerSFHLT = 0.956521749496;}
    else if(pt < 42 ){triggerSFHLT = 0.971131622791;}
    else if(pt < 44 ){triggerSFHLT = 0.976109206676;}
    else if(pt < 46 ){triggerSFHLT = 0.976510047913;}
    else if(pt < 48 ){triggerSFHLT = 0.982142865658;}
    else if(pt < 50 ){triggerSFHLT = 0.981153011322;}
    else if(pt < 52 ){triggerSFHLT = 0.979097902775;}
    else if(pt < 54 ){triggerSFHLT = 0.976112902164;}
    else if(pt < 56 ){triggerSFHLT = 0.976034879684;}
    else if(pt < 60 ){triggerSFHLT = 0.965665221214;}
    else if(pt < 65 ){triggerSFHLT = 0.974248945713;}
    else if(pt < 70 ){triggerSFHLT = 0.972310960293;}
    else if(pt < 80 ){triggerSFHLT = 0.972860097885;}
    else if(pt < 90 ){triggerSFHLT = 0.970164597034;}
    else if(pt < 100){triggerSFHLT = 0.984326004982;}
    else if(pt < 120){triggerSFHLT = 0.971428573132;}
    else if(pt < 200){triggerSFHLT = 0.985567033291;}
    else             {triggerSFHLT = 0.984504103661;}
  }
  else if (eta < -0.8){
    if     (pt < 32 ){triggerSFHLT = 0.752212405205;}
    else if(pt < 34 ){triggerSFHLT = 0.908309459686;}
    else if(pt < 36 ){triggerSFHLT = 0.981176495552;}
    else if(pt < 38 ){triggerSFHLT = 0.990794003010;}
    else if(pt < 40 ){triggerSFHLT = 0.996598660946;}
    else if(pt < 42 ){triggerSFHLT = 1.001122355461;}
    else if(pt < 44 ){triggerSFHLT = 1.004459261894;}
    else if(pt < 46 ){triggerSFHLT = 0.998896241188;}
    else if(pt < 48 ){triggerSFHLT = 1.000000000000;}
    else if(pt < 50 ){triggerSFHLT = 0.998911857605;}
    else if(pt < 52 ){triggerSFHLT = 0.993506491184;}
    else if(pt < 54 ){triggerSFHLT = 1.001086950302;}
    else if(pt < 56 ){triggerSFHLT = 0.994640946388;}
    else if(pt < 60 ){triggerSFHLT = 0.986199557781;}
    else if(pt < 65 ){triggerSFHLT = 0.990425527096;}
    else if(pt < 70 ){triggerSFHLT = 1.006417155266;}
    else if(pt < 80 ){triggerSFHLT = 0.979274630547;}
    else if(pt < 90 ){triggerSFHLT = 0.995833337307;}
    else if(pt < 100){triggerSFHLT = 1.006302475929;}
    else if(pt < 120){triggerSFHLT = 0.989680111408;}
    else if(pt < 200){triggerSFHLT = 0.978615045547;}
    else             {triggerSFHLT = 0.967578530312;}
  }
  else if (eta < -0.6){
    if     (pt < 32 ){triggerSFHLT = 0.981308400631;}
    else if(pt < 34 ){triggerSFHLT = 0.964589238167;}
    else if(pt < 36 ){triggerSFHLT = 1.007168412209;}
    else if(pt < 38 ){triggerSFHLT = 1.001162767410;}
    else if(pt < 40 ){triggerSFHLT = 1.015046238899;}
    else if(pt < 42 ){triggerSFHLT = 1.009039521217;}
    else if(pt < 44 ){triggerSFHLT = 1.015748023987;}
    else if(pt < 46 ){triggerSFHLT = 1.013333320618;}
    else if(pt < 48 ){triggerSFHLT = 1.012101173401;}
    else if(pt < 50 ){triggerSFHLT = 1.013172388077;}
    else if(pt < 52 ){triggerSFHLT = 1.001084566116;}
    else if(pt < 54 ){triggerSFHLT = 1.010952949524;}
    else if(pt < 56 ){triggerSFHLT = 1.000000000000;}
    else if(pt < 60 ){triggerSFHLT = 1.000000000000;}
    else if(pt < 65 ){triggerSFHLT = 1.009667038918;}
    else if(pt < 70 ){triggerSFHLT = 0.998936176300;}
    else if(pt < 80 ){triggerSFHLT = 0.992693126202;}
    else if(pt < 90 ){triggerSFHLT = 0.985507249832;}
    else if(pt < 100){triggerSFHLT = 0.987590491772;}
    else if(pt < 120){triggerSFHLT = 0.987654328346;}
    else if(pt < 200){triggerSFHLT = 0.976673424244;}
    else             {triggerSFHLT = 0.996878266335;}
  }
  else if (eta < -0.3){
    if     (pt < 32 ){triggerSFHLT = 1.000000000000;}
    else if(pt < 34 ){triggerSFHLT = 0.954802274704;}
    else if(pt < 36 ){triggerSFHLT = 0.983030319214;}
    else if(pt < 38 ){triggerSFHLT = 0.998805284500;}
    else if(pt < 40 ){triggerSFHLT = 1.004716992378;}
    else if(pt < 42 ){triggerSFHLT = 1.009237885475;}
    else if(pt < 44 ){triggerSFHLT = 1.011428594589;}
    else if(pt < 46 ){triggerSFHLT = 1.011312246323;}
    else if(pt < 48 ){triggerSFHLT = 1.011223316193;}
    else if(pt < 50 ){triggerSFHLT = 1.000000000000;}
    else if(pt < 52 ){triggerSFHLT = 1.003314971924;}
    else if(pt < 54 ){triggerSFHLT = 1.007683873177;}
    else if(pt < 56 ){triggerSFHLT = 0.998910665512;}
    else if(pt < 60 ){triggerSFHLT = 0.990291237831;}
    else if(pt < 65 ){triggerSFHLT = 0.989316225052;}
    else if(pt < 70 ){triggerSFHLT = 1.004305720329;}
    else if(pt < 80 ){triggerSFHLT = 0.990516304970;}
    else if(pt < 90 ){triggerSFHLT = 0.995824635029;}
    else if(pt < 100){triggerSFHLT = 0.987616121769;}
    else if(pt < 120){triggerSFHLT = 1.002094268799;}
    else if(pt < 200){triggerSFHLT = 0.979633390903;}
    else             {triggerSFHLT = 1.009384751320;}
  }
  else if (eta < 0.0){
    if     (pt < 32 ){triggerSFHLT = 1.105882406235;}
    else if(pt < 34 ){triggerSFHLT = 0.889664828777;}
    else if(pt < 36 ){triggerSFHLT = 0.960509538651;}
    else if(pt < 38 ){triggerSFHLT = 0.964285731316;}
    else if(pt < 40 ){triggerSFHLT = 0.984088122845;}
    else if(pt < 42 ){triggerSFHLT = 0.988081037998;}
    else if(pt < 44 ){triggerSFHLT = 0.998816549778;}
    else if(pt < 46 ){triggerSFHLT = 0.995354235172;}
    else if(pt < 48 ){triggerSFHLT = 0.995397031307;}
    else if(pt < 50 ){triggerSFHLT = 1.000000000000;}
    else if(pt < 52 ){triggerSFHLT = 0.998862326145;}
    else if(pt < 54 ){triggerSFHLT = 0.994394600391;}
    else if(pt < 56 ){triggerSFHLT = 1.000000000000;}
    else if(pt < 60 ){triggerSFHLT = 0.996662974358;}
    else if(pt < 65 ){triggerSFHLT = 0.984782636166;}
    else if(pt < 70 ){triggerSFHLT = 0.987012982368;}
    else if(pt < 80 ){triggerSFHLT = 1.003239750862;}
    else if(pt < 90 ){triggerSFHLT = 0.997879087925;}
    else if(pt < 100){triggerSFHLT = 1.018104314804;}
    else if(pt < 120){triggerSFHLT = 0.993717253208;}
    else if(pt < 200){triggerSFHLT = 1.005219221115;}
    else             {triggerSFHLT = 0.968559861183;}
  }
  else if (eta < 0.3){
    if     (pt < 32 ){triggerSFHLT = 1.032967090607;}
    else if(pt < 34 ){triggerSFHLT = 0.883561670780;}
    else if(pt < 36 ){triggerSFHLT = 0.948427677155;}
    else if(pt < 38 ){triggerSFHLT = 0.959558844566;}
    else if(pt < 40 ){triggerSFHLT = 0.975728154182;}
    else if(pt < 42 ){triggerSFHLT = 0.990419149399;}
    else if(pt < 44 ){triggerSFHLT = 0.991755008698;}
    else if(pt < 46 ){triggerSFHLT = 0.990729987621;}
    else if(pt < 48 ){triggerSFHLT = 0.995391726494;}
    else if(pt < 50 ){triggerSFHLT = 0.991999983788;}
    else if(pt < 52 ){triggerSFHLT = 1.002280473709;}
    else if(pt < 54 ){triggerSFHLT = 0.989910304546;}
    else if(pt < 56 ){triggerSFHLT = 0.997745215893;}
    else if(pt < 60 ){triggerSFHLT = 1.001119852066;}
    else if(pt < 65 ){triggerSFHLT = 0.987912058830;}
    else if(pt < 70 ){triggerSFHLT = 0.993435442448;}
    else if(pt < 80 ){triggerSFHLT = 0.991397857666;}
    else if(pt < 90 ){triggerSFHLT = 0.983122348785;}
    else if(pt < 100){triggerSFHLT = 1.005307912827;}
    else if(pt < 120){triggerSFHLT = 0.986344516277;}
    else if(pt < 200){triggerSFHLT = 0.986584126949;}
    else             {triggerSFHLT = 0.965412020683;}
  }
  else if (eta < 0.6){
    if     (pt < 32 ){triggerSFHLT = 0.717391312122;}
    else if(pt < 34 ){triggerSFHLT = 0.891711235046;}
    else if(pt < 36 ){triggerSFHLT = 0.977080821991;}
    else if(pt < 38 ){triggerSFHLT = 0.988151669502;}
    else if(pt < 40 ){triggerSFHLT = 0.994165718555;}
    else if(pt < 42 ){triggerSFHLT = 1.000000000000;}
    else if(pt < 44 ){triggerSFHLT = 1.006872892380;}
    else if(pt < 46 ){triggerSFHLT = 0.998871326447;}
    else if(pt < 48 ){triggerSFHLT = 0.996644318104;}
    else if(pt < 50 ){triggerSFHLT = 0.988974630833;}
    else if(pt < 52 ){triggerSFHLT = 0.994511544704;}
    else if(pt < 54 ){triggerSFHLT = 1.002212405205;}
    else if(pt < 56 ){triggerSFHLT = 0.984815597534;}
    else if(pt < 60 ){triggerSFHLT = 0.990301728249;}
    else if(pt < 65 ){triggerSFHLT = 0.976694941521;}
    else if(pt < 70 ){triggerSFHLT = 0.987165749073;}
    else if(pt < 80 ){triggerSFHLT = 0.986199557781;}
    else if(pt < 90 ){triggerSFHLT = 0.977107167244;}
    else if(pt < 100){triggerSFHLT = 0.975051999092;}
    else if(pt < 120){triggerSFHLT = 0.971074402332;}
    else if(pt < 200){triggerSFHLT = 0.981519520283;}
    else             {triggerSFHLT = 0.981651365757;}
  }
  else if (eta < 0.8){
    if     (pt < 32 ){triggerSFHLT = 0.573248386383;}
    else if(pt < 34 ){triggerSFHLT = 0.887566149235;}
    else if(pt < 36 ){triggerSFHLT = 0.989424228668;}
    else if(pt < 38 ){triggerSFHLT = 0.995354235172;}
    else if(pt < 40 ){triggerSFHLT = 1.002290964127;}
    else if(pt < 42 ){triggerSFHLT = 1.017123341560;}
    else if(pt < 44 ){triggerSFHLT = 1.011198163033;}
    else if(pt < 46 ){triggerSFHLT = 1.006651878357;}
    else if(pt < 48 ){triggerSFHLT = 1.007700800896;}
    else if(pt < 50 ){triggerSFHLT = 1.002181053162;}
    else if(pt < 52 ){triggerSFHLT = 1.000000000000;}
    else if(pt < 54 ){triggerSFHLT = 1.003260850906;}
    else if(pt < 56 ){triggerSFHLT = 0.985074639320;}
    else if(pt < 60 ){triggerSFHLT = 1.001073002815;}
    else if(pt < 65 ){triggerSFHLT = 0.998937308788;}
    else if(pt < 70 ){triggerSFHLT = 0.981269538403;}
    else if(pt < 80 ){triggerSFHLT = 0.982419848442;}
    else if(pt < 90 ){triggerSFHLT = 0.986415863037;}
    else if(pt < 100){triggerSFHLT = 1.003144621849;}
    else if(pt < 120){triggerSFHLT = 0.991684019566;}
    else if(pt < 200){triggerSFHLT = 0.991778016090;}
    else             {triggerSFHLT = 0.985507249832;}
  }
  else if (eta < 1.1){
    if     (pt < 32 ){triggerSFHLT = 0.421686738729;}
    else if(pt < 34 ){triggerSFHLT = 0.835820913315;}
    else if(pt < 36 ){triggerSFHLT = 0.984669804573;}
    else if(pt < 38 ){triggerSFHLT = 0.990836203098;}
    else if(pt < 40 ){triggerSFHLT = 1.001133799553;}
    else if(pt < 42 ){triggerSFHLT = 1.004494428635;}
    else if(pt < 44 ){triggerSFHLT = 1.008918642998;}
    else if(pt < 46 ){triggerSFHLT = 1.005512714386;}
    else if(pt < 48 ){triggerSFHLT = 1.002185821533;}
    else if(pt < 50 ){triggerSFHLT = 0.998915374279;}
    else if(pt < 52 ){triggerSFHLT = 0.998916566372;}
    else if(pt < 54 ){triggerSFHLT = 0.998923599720;}
    else if(pt < 56 ){triggerSFHLT = 1.003236293793;}
    else if(pt < 60 ){triggerSFHLT = 1.000000000000;}
    else if(pt < 65 ){triggerSFHLT = 0.980000019073;}
    else if(pt < 70 ){triggerSFHLT = 1.000000000000;}
    else if(pt < 80 ){triggerSFHLT = 0.980310857296;}
    else if(pt < 90 ){triggerSFHLT = 0.990683257580;}
    else if(pt < 100){triggerSFHLT = 0.985641002655;}
    else if(pt < 120){triggerSFHLT = 0.998968005180;}
    else if(pt < 200){triggerSFHLT = 0.976767659187;}
    else             {triggerSFHLT = 0.982653081417;}
  }
  else if (eta < 1.442){
    if     (pt < 32 ){triggerSFHLT = 0.331125825644;}
    else if(pt < 34 ){triggerSFHLT = 0.722466945648;}
    else if(pt < 36 ){triggerSFHLT = 0.921085059643;}
    else if(pt < 38 ){triggerSFHLT = 0.942720770836;}
    else if(pt < 40 ){triggerSFHLT = 0.952102780342;}
    else if(pt < 42 ){triggerSFHLT = 0.964367806911;}
    else if(pt < 44 ){triggerSFHLT = 0.967305541039;}
    else if(pt < 46 ){triggerSFHLT = 0.974358975887;}
    else if(pt < 48 ){triggerSFHLT = 0.973509907722;}
    else if(pt < 50 ){triggerSFHLT = 0.983425438404;}
    else if(pt < 52 ){triggerSFHLT = 0.973827719688;}
    else if(pt < 54 ){triggerSFHLT = 0.971769809723;}
    else if(pt < 56 ){triggerSFHLT = 0.989130437374;}
    else if(pt < 60 ){triggerSFHLT = 0.975321888924;}
    else if(pt < 65 ){triggerSFHLT = 0.974386334419;}
    else if(pt < 70 ){triggerSFHLT = 0.984042525291;}
    else if(pt < 80 ){triggerSFHLT = 1.004305720329;}
    else if(pt < 90 ){triggerSFHLT = 0.985324919224;}
    else if(pt < 100){triggerSFHLT = 1.024731159210;}
    else if(pt < 120){triggerSFHLT = 0.972533047199;}
    else if(pt < 200){triggerSFHLT = 0.984583735466;}
    else             {triggerSFHLT = 0.967741906643;}
  }
  else if (eta < 1.566){
    if     (pt < 32 ){triggerSFHLT = 0.574297189713;}
    else if(pt < 34 ){triggerSFHLT = 0.796638667583;}
    else if(pt < 36 ){triggerSFHLT = 0.947887301445;}
    else if(pt < 38 ){triggerSFHLT = 0.962716400623;}
    else if(pt < 40 ){triggerSFHLT = 0.975292563438;}
    else if(pt < 42 ){triggerSFHLT = 0.981132090092;}
    else if(pt < 44 ){triggerSFHLT = 0.970588207245;}
    else if(pt < 46 ){triggerSFHLT = 0.998774528503;}
    else if(pt < 48 ){triggerSFHLT = 0.987804889679;}
    else if(pt < 50 ){triggerSFHLT = 0.976019203663;}
    else if(pt < 52 ){triggerSFHLT = 1.000000000000;}
    else if(pt < 54 ){triggerSFHLT = 0.998763918877;}
    else if(pt < 56 ){triggerSFHLT = 0.954815685749;}
    else if(pt < 60 ){triggerSFHLT = 1.017676711082;}
    else if(pt < 65 ){triggerSFHLT = 0.956212997437;}
    else if(pt < 70 ){triggerSFHLT = 0.901766002178;}
    else if(pt < 80 ){triggerSFHLT = 0.997536957264;}
    else if(pt < 90 ){triggerSFHLT = 0.926719307899;}
    else if(pt < 100){triggerSFHLT = 0.960496604443;}
    else if(pt < 120){triggerSFHLT = 0.963045895100;}
    else if(pt < 200){triggerSFHLT = 1.023529410362;}
    else             {triggerSFHLT = 0.929039299488;}
  }
  else if (eta < 1.8){
    if     (pt < 32 ){triggerSFHLT = 0.478260874748;}
    else if(pt < 34 ){triggerSFHLT = 0.773437500000;}
    else if(pt < 36 ){triggerSFHLT = 0.895161271095;}
    else if(pt < 38 ){triggerSFHLT = 0.934926986694;}
    else if(pt < 40 ){triggerSFHLT = 0.923857867718;}
    else if(pt < 42 ){triggerSFHLT = 0.941323339939;}
    else if(pt < 44 ){triggerSFHLT = 0.941463410854;}
    else if(pt < 46 ){triggerSFHLT = 0.948379337788;}
    else if(pt < 48 ){triggerSFHLT = 0.956886231899;}
    else if(pt < 50 ){triggerSFHLT = 0.942555665970;}
    else if(pt < 52 ){triggerSFHLT = 0.949999988079;}
    else if(pt < 54 ){triggerSFHLT = 0.942129611969;}
    else if(pt < 56 ){triggerSFHLT = 0.954869329929;}
    else if(pt < 60 ){triggerSFHLT = 0.956521749496;}
    else if(pt < 65 ){triggerSFHLT = 0.980722904205;}
    else if(pt < 70 ){triggerSFHLT = 0.920045018196;}
    else if(pt < 80 ){triggerSFHLT = 0.938956737518;}
    else if(pt < 90 ){triggerSFHLT = 0.901287555695;}
    else if(pt < 100){triggerSFHLT = 0.940516293049;}
    else if(pt < 120){triggerSFHLT = 0.934282600880;}
    else if(pt < 200){triggerSFHLT = 0.924754619598;}
    else             {triggerSFHLT = 0.946819603443;}
  }
  else {
    if     (pt < 32 ){triggerSFHLT = 0.272727280855;}
    else if(pt < 34 ){triggerSFHLT = 0.656934320927;}
    else if(pt < 36 ){triggerSFHLT = 0.875324666500;}
    else if(pt < 38 ){triggerSFHLT = 0.924066901207;}
    else if(pt < 40 ){triggerSFHLT = 0.926616907120;}
    else if(pt < 42 ){triggerSFHLT = 0.930402934551;}
    else if(pt < 44 ){triggerSFHLT = 0.938405811787;}
    else if(pt < 46 ){triggerSFHLT = 0.939285695553;}
    else if(pt < 48 ){triggerSFHLT = 0.944378674030;}
    else if(pt < 50 ){triggerSFHLT = 0.940281033516;}
    else if(pt < 52 ){triggerSFHLT = 0.944900333881;}
    else if(pt < 54 ){triggerSFHLT = 0.928571403027;}
    else if(pt < 56 ){triggerSFHLT = 0.940420567989;}
    else if(pt < 60 ){triggerSFHLT = 0.921768724918;}
    else if(pt < 65 ){triggerSFHLT = 0.957568824291;}
    else if(pt < 70 ){triggerSFHLT = 0.924191772938;}
    else if(pt < 80 ){triggerSFHLT = 0.932810723782;}
    else if(pt < 90 ){triggerSFHLT = 0.902465164661;}
    else if(pt < 100){triggerSFHLT = 0.922657966614;}
    else if(pt < 120){triggerSFHLT = 0.945945918560;}
    else if(pt < 200){triggerSFHLT = 0.939393937588;}
    else             {triggerSFHLT = 0.935235977173;}
  }
  return triggerSFHLT;
}

double HardcodedConditions::GetElectronTriggerSF2017(double pt, double eta){
  // Trigger Scale Factors, SF2017B_Bkg_LepPtEta_EOR.png & SF2017CDEF_Bkg_LepPtEta_EOR.png
  float sf_B;
  float sf_C;
  float sf_DEF;
  float lumi_B = 4.823;
  float lumi_C = 9.664;
  float lumi_DEF = 27.07;

  if( fabs(eta) < 0.8 ){
    if(      pt < 35.0  ){ sf_B = 1.0;           sf_C = 1.0;            sf_DEF = 0.910508894879; }
    else if( pt < 40.0  ){ sf_B = 1.19235377821; sf_C = 0.961432584122; sf_DEF = 0.953531146324; }
    else if( pt < 45.0  ){ sf_B = 1.15582596391; sf_C = 0.957629044796; sf_DEF = 0.969037828674; }
    else if( pt < 50.0  ){ sf_B = 1.14242389742; sf_C = 0.952084569431; sf_DEF = 0.972670135935; }
    else if( pt < 60.0  ){ sf_B = 1.13798058665; sf_C = 0.972836208578; sf_DEF = 0.97354484058; }
    else if( pt < 100.0 ){ sf_B = 1.11927898325; sf_C = 0.97878084945;  sf_DEF = 0.978742705794; }
    else if( pt < 200.0 ){ sf_B = 1.08208421955; sf_C = 0.97205414899;  sf_DEF = 0.976656543342; }
    else{                  sf_B = 1.05681427994; sf_C = 0.988668281842; sf_DEF = 0.980285171661; }                 
  }
  else if( fabs(eta) < 1.4442 ){
    if(      pt < 35.0  ){ sf_B = 1.0;           sf_C = 1.0;            sf_DEF = 0.751761888491; }
    else if( pt < 40.0  ){ sf_B = 1.15822014397; sf_C = 0.860499625902; sf_DEF = 0.919657299703; }
    else if( pt < 45.0  ){ sf_B = 1.21616929374; sf_C = 0.954195822579; sf_DEF = 0.9416298044; }
    else if( pt < 50.0  ){ sf_B = 1.17221728706; sf_C = 0.95883629846;  sf_DEF = 0.967038221562; }
    else if( pt < 60.0  ){ sf_B = 1.19498750549; sf_C = 0.954662162504; sf_DEF = 0.975886529118; }
    else if( pt < 100.0 ){ sf_B = 1.14500756907; sf_C = 0.973404630486; sf_DEF = 0.981893775663; }
    else if( pt < 200.0 ){ sf_B = 1.08473672928; sf_C = 0.982716650785; sf_DEF = 0.978950786067; }
    else{                  sf_B = 1.04804436988; sf_C = 0.962029353635; sf_DEF = 0.979265291494; }         
  }
  else if( fabs(eta) < 2.0 ){
    if(      pt < 35.0  ){ sf_B = 1.0;            sf_C = 1.0;            sf_DEF = 0.61359340781; }
    else if( pt < 40.0  ){ sf_B = 0.979837673172; sf_C = 0.834393494481; sf_DEF = 0.865218488115; }
    else if( pt < 45.0  ){ sf_B = 1.09592474113;  sf_C = 0.934846351249; sf_DEF = 0.92564191376; }
    else if( pt < 50.0  ){ sf_B = 1.14329944654;  sf_C = 0.962071721753; sf_DEF = 0.910259293332; }
    else if( pt < 60.0  ){ sf_B = 1.12458617216;  sf_C = 0.939378108547; sf_DEF = 0.951179859384; }
    else if( pt < 100.0 ){ sf_B = 1.12172511077;  sf_C = 0.987642127321; sf_DEF = 0.968589861037; }
    else if( pt < 200.0 ){ sf_B = 1.09052141074;  sf_C = 0.985970344843; sf_DEF = 0.967442726925; }
    else{                  sf_B = 1.08883369326;  sf_C = 0.893843409369; sf_DEF = 0.958624277634; }  
  }
  else{
    if(      pt < 35.0  ){ sf_B = 1.0;            sf_C = 1.0;            sf_DEF = 1.34938101512; }
    else if( pt < 40.0  ){ sf_B = 0.852743087035; sf_C = 0.682868604737; sf_DEF = 0.809342108762; }
    else if( pt < 45.0  ){ sf_B = 1.1679917664;   sf_C = 1.0519398793;   sf_DEF = 0.929952818205; }
    else if( pt < 50.0  ){ sf_B = 1.19320302369;  sf_C = 0.983854619602; sf_DEF = 0.996331036879; }
    else if( pt < 60.0  ){ sf_B = 1.08557256937;  sf_C = 0.996753585332; sf_DEF = 0.926442474712; }
    else if( pt < 100.0 ){ sf_B = 1.18448651178;  sf_C = 1.02919877827;  sf_DEF = 1.03147014466; }
    else if( pt < 200.0 ){ sf_B = 1.06393762562;  sf_C = 1.01898572985;  sf_DEF = 0.976709670734; }
    else{                  sf_B = 1.07201980973;  sf_C = 1.06465564707;  sf_DEF = 0.958190082361; }        
  }
  return ( 4.823 * sf_B + 9.664 * sf_C + 27.07 * sf_DEF ) / 41.557;
}

double HardcodedConditions::GetElectronTriggerSF2018( double pt, double eta ){
  if( fabs(eta) < 0.8 ){
    if( pt < 35 )         return 0.913692057441;
    else if( pt <  40.0 ) return 0.971695502732;
    else if( pt <  45.0 ) return 0.973472902604;
    else if( pt <  50.0 ) return 0.975870251002;
    else if( pt <  60.0 ) return 0.972260692149;
    else if( pt < 100.0 ) return 0.978462954775;
    else if( pt < 200.0 ) return 0.982340801275;
    else                  return 0.988277803553;
  }
  else if( fabs(eta) < 1.4442 ){
    if( pt < 35 )         return 0.79130810157;
    else if( pt <  40.0 ) return 0.95794335208;
    else if( pt <  45.0 ) return 0.98584588097;
    else if( pt <  50.0 ) return 0.986921685202;
    else if( pt <  60.0 ) return 1.01257881296;
    else if( pt < 100.0 ) return 0.985749736854;
    else if( pt < 200.0 ) return 0.993225266785;
    else                  return 1.0017169042;
  }
  else if( fabs(eta) < 2.0 ){
    if( pt < 35 )         return 0.784488053273;
    else if( pt <  40.0 ) return 0.923642602884;
    else if( pt <  45.0 ) return 0.949818783052;
    else if( pt <  50.0 ) return 0.994631635079;
    else if( pt <  60.0 ) return 0.971684494245;
    else if( pt < 100.0 ) return 0.975080347642;
    else if( pt < 200.0 ) return 0.945571234252;
    else                  return 0.917539801421;
  }
  else{
    if( pt < 35 )         return 0.771792545521;
    else if( pt <  40.0 ) return 0.877438998912;
    else if( pt <  45.0 ) return 1.05068262187;
    else if( pt <  50.0 ) return 0.963750775537;
    else if( pt <  60.0 ) return 0.944876225901;
    else if( pt < 100.0 ) return 0.954494360964;
    else if( pt < 200.0 ) return 0.940644961626;
    else                  return 0.795593538315;
  }
}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|         HADRON TRIGGER SCALE FACTOR SECTION         |\  | |/|
 | `---' |               (For Electron Channel)                | `---' |
 |       |                                                     |       |
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

double HardcodedConditions::GetIsEHadronTriggerSF(double njets, double ht, std::string year){
  if      (year=="2016APV") return GetIsEHadronTriggerSF2016APV(njets, ht);
  else if (year=="2016") return GetIsEHadronTriggerSF2016(njets, ht);
  else if (year=="2017") return GetIsEHadronTriggerSF2017(njets, ht);
  else if (year=="2018") return GetIsEHadronTriggerSF2018(njets, ht);
  else return 0.;
}

double HardcodedConditions::GetIsEHadronTriggerSF2016APV(double njets, double ht){
  return 1.000; 
}

double HardcodedConditions::GetIsEHadronTriggerSF2016(double njets, double ht){
  return 1.000; 
}

double HardcodedConditions::GetIsEHadronTriggerSF2017(double njets, double ht){
  return 1.000; 
}

double HardcodedConditions::GetIsEHadronTriggerSF2018(double njets, double ht){
  return 1.000; 
}


///*.-----------------------------------------------------------------.
//  /  .-.                                                         .-.  \
// |  /   \                                                       /   \  |
// | |\_.  |                                                     |    /| |
// |\|  | /|          MUON TRIGGER SCALE FACTOR SECTION          |\  | |/|
// | `---' |           (using cross triggers from VLQ)           | `---' |
// |       |                                                     |       | 
// |       |-----------------------------------------------------|       |
// \       |                                                     |       /
//  \     /                                                       \     /
//   `---'                                                         `---'*/
//
//double HardcodedConditions::GetMuonTriggerVlqXSF(double pt, double eta, std::string year)
//{
//  //The main getter for Muon Trigger Scale Factors
//  if      (year=="2016") return GetMuonTriggerVlqXSF2016(pt, eta);
//  else if (year=="2017") return GetMuonTriggerVlqXSF2017(pt, eta);
//  else if (year=="2018") return GetMuonTriggerVlqXSF2018(pt, eta);
//  else return 0.;
//}//end GetMuonTriggerVlqXSF
//
//double HardcodedConditions::GetMuonTriggerVlqXSF2016(double pt, double eta)
//{
//	// TO-BE-IMPLEMENTED!!!!!!!
//	return 1.000;
//
//}
//double HardcodedConditions::GetMuonTriggerVlqXSF2016APV(double pt, double eta)
//{
//	// TO-BE-IMPLEMENTED!!!!!!!
//	return 1.000;
//
//}
//double HardcodedConditions::GetMuonTriggerVlqXSF2017(double leppt, double lepeta)
//{
//	  float triggerSFB = 1.0;
//	  float triggerSFCDEF = 1.0;
//	  float triggerSFBunc = 0.0;
//	  float triggerSFCDEFunc = 0.0;
//	  if (fabs(lepeta) < 0.90){
//		if (leppt < 50.0){
//		  triggerSFB = 1.0; triggerSFBunc = 0.0;
//		  triggerSFCDEF = 1.034; triggerSFCDEFunc = 0.014;
//		}
//		else if (leppt < 60.0){
//		  triggerSFB = 0.905; triggerSFBunc = 0.057;
//		  triggerSFCDEF = 0.980;  triggerSFCDEFunc = 0.015;
//		}
//		else if (leppt < 70.0){
//		  triggerSFB = 0.978; triggerSFBunc = 0.050;
//		  triggerSFCDEF = 0.983;  triggerSFCDEFunc = 0.016;
//		}
//		else if (leppt < 100){
//		  triggerSFB = 0.924; triggerSFBunc = 0.039;
//		  triggerSFCDEF = 1.006;  triggerSFCDEFunc = 0.008;
//		}
//		else if (leppt < 200){
//		  triggerSFB = 0.972; triggerSFBunc = 0.028;
//		  triggerSFCDEF = 0.971;  triggerSFCDEFunc = 0.010;
//		}
//		else{
//		  triggerSFB = 0.976; triggerSFBunc = 0.063;
//		  triggerSFCDEF = 0.976;  triggerSFCDEFunc = 0.024;
//		}
//	  }
//	  else if (fabs(lepeta) < 1.20){
//		if (leppt < 50.0){
//		  triggerSFB = 1.0; triggerSFBunc = 0.0;
//		  triggerSFCDEF = 1.005; triggerSFCDEFunc = 0.028;
//		}
//		else if (leppt < 60.0){
//		  triggerSFB = 0.931; triggerSFBunc = 0.125;
//		  triggerSFCDEF = 1.030;  triggerSFCDEFunc = 0.021;
//		}
//		else if (leppt < 70.0){
//		  triggerSFB = 1.051; triggerSFBunc = 0.008;
//		  triggerSFCDEF = 0.976;  triggerSFCDEFunc = 0.033;
//		}
//		else if (leppt < 100){
//		  triggerSFB = 0.978; triggerSFBunc = 0.048;
//		  triggerSFCDEF = 0.953;  triggerSFCDEFunc = 0.022;
//		}
//		else if (leppt < 200){
//		  triggerSFB = 1.059; triggerSFBunc = 0.014;
//		  triggerSFCDEF = 0.934;  triggerSFCDEFunc = 0.084;
//		}
//		else{
//		  triggerSFB = 1.00; triggerSFBunc = 0.050;
//		  triggerSFCDEF = 1.006;  triggerSFCDEFunc = 0.04;
//		}
//	  }
//	  float triggerSF = (4.823*triggerSFB+36.734*triggerSFCDEF)/41.557;
//	  float triggerSFUncert = sqrt( pow(4.823*triggerSFBunc/41.557,2) + pow(36.734*triggerSFCDEFunc/41.557,2) );
//
//	return triggerSF;
//
//}
//
//double HardcodedConditions::GetMuonTriggerVlqXSF2018(double leppt, double lepeta)
//{
//	float triggSF = 1.0;
//	float triggSFUncert = 1.0;
//	if (fabs(lepeta) < 0.9){
//		if (leppt < 30) {triggSF = 0.995; triggSFUncert = 0.014;}
//		else if (leppt < 40) {triggSF = 1.047; triggSFUncert = 0.013;} 
//		else if (leppt < 50) {triggSF = 1.050; triggSFUncert = 0.012;}
//		else if (leppt < 60) {triggSF = 1.019; triggSFUncert = 0.009;}
//		else if (leppt < 70) {triggSF = 1.035; triggSFUncert = 0.007;}
//		else if (leppt < 100) {triggSF = 0.997; triggSFUncert = 0.007;}
//		else if (leppt < 200) {triggSF = 0.989; triggSFUncert = 0.007;}
//		else {triggSF = 0.960; triggSFUncert = 0.021;}
//	  }	  
//	else if (fabs(lepeta) < 1.2){ 
//		if (leppt < 30) {triggSF = 0.944; triggSFUncert = 0.030;}
//		else if (leppt < 40) {triggSF = 1.017; triggSFUncert = 0.022;}
//		else if (leppt < 50) {triggSF = 0.986; triggSFUncert = 0.024;}
//		else if (leppt < 60) {triggSF = 0.987; triggSFUncert = 0.016;}
//		else if (leppt < 70) {triggSF = 0.988; triggSFUncert = 0.018;}
//		else if (leppt < 100) {triggSF = 0.982; triggSFUncert = 0.013;}
//		else if (leppt < 200) {triggSF = 0.983; triggSFUncert = 0.012;}
//		else {triggSF = 0.997; triggSFUncert = 0.021;}
//	  }
//	else if (fabs(lepeta) < 2.1){ 
//		if (leppt < 30) {triggSF = 0.989; triggSFUncert = 0.021;}
//		else if (leppt < 40) {triggSF = 1.041; triggSFUncert = 0.018;}
//		else if (leppt < 50) {triggSF = 1.050; triggSFUncert = 0.020;}
//		else if (leppt < 60) {triggSF = 1.033; triggSFUncert = 0.012;}
//		else if (leppt < 70) {triggSF = 0.981; triggSFUncert = 0.018;}
//		else if (leppt < 100) {triggSF = 1.008; triggSFUncert = 0.009;}
//		else if (leppt < 200) {triggSF = 1.001; triggSFUncert = 0.010;}
//		else {triggSF = 0.938; triggSFUncert = 0.045;}
//	  }	  
//	else{
//		if (leppt < 30) {triggSF = 0.964; triggSFUncert = 0.078;}
//		else if (leppt < 40) {triggSF = 1.069; triggSFUncert = 0.066;}
//		else if (leppt < 50) {triggSF = 1.088; triggSFUncert = 0.053;}
//		else if (leppt < 60) {triggSF = 1.067; triggSFUncert = 0.055;}
//		else if (leppt < 70) {triggSF = 1.017; triggSFUncert = 0.055;}
//		else if (leppt < 100) {triggSF = 1.128; triggSFUncert = 0.020;}
//		else if (leppt < 200) {triggSF = 0.958; triggSFUncert = 0.067;}
//		else {triggSF = 1.066; triggSFUncert = 0.042;}
//	 }	  
//
//	return triggSF;
//}
//

/*.-----------------------------------------------------------------.
 *
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|      ELECTRON X-TRIGGER SCALE FACTOR SECTION        |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       |
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

double HardcodedConditions::GetElectronTriggerXSF(double ht, double pt, double eta, std::string year){
  if      (year=="2016APV") return GetElectronTriggerXSF2016APV(ht, pt, eta);
  else if (year=="2016") return GetElectronTriggerXSF2016(ht, pt, eta);
  else if (year=="2017") return GetElectronTriggerXSF2017(ht, pt, eta);
  else if (year=="2018") return GetElectronTriggerXSF2018(ht, pt, eta);
  else return 0. ;
}

double HardcodedConditions::GetElectronTriggerXSF2016APV(double ht, double pt, double eta){
if ( ht < 400.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.98686;
    else if ( fabs(eta) < 1.4442 ) return 1.03383;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00846;
    else return 0.91653; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.97506;
    else if ( fabs(eta) < 1.4442 ) return 1.00728;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.97957;
    else return 0.87421; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01868;
    else if ( fabs(eta) < 1.4442 ) return 1.05430;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98086;
    else return 0.83618; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99599;
    else if ( fabs(eta) < 1.4442 ) return 0.98598;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.97215;
    else return 0.86937; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01122;
    else if ( fabs(eta) < 1.4442 ) return 1.00095;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.97755;
    else return 0.83935; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01106;
    else if ( fabs(eta) < 1.4442 ) return 1.00428;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98265;
    else return 0.84171; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00317;
    else if ( fabs(eta) < 1.4442 ) return 0.99208;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96655;
    else return 0.84094; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00136;
    else if ( fabs(eta) < 1.4442 ) return 0.99647;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96687;
    else return 0.85269; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99874;
    else if ( fabs(eta) < 1.4442 ) return 0.99542;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96944;
    else return 0.87699; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99667;
    else if ( fabs(eta) < 1.4442 ) return 0.98639;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.95586;
    else return 0.89543; }
  else {
    if ( fabs(eta) < 0.8000 ) return 0.99026;
    else if ( fabs(eta) < 1.4442 ) return 0.96738;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.91617;
    else return 0.87579; }
}
else if ( ht < 500.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.89651;
    else if ( fabs(eta) < 1.4442 ) return 0.93219;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96698;
    else return 0.92500; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.89397;
    else if ( fabs(eta) < 1.4442 ) return 0.90979;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.94770;
    else return 0.90986; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.95838;
    else if ( fabs(eta) < 1.4442 ) return 0.96195;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.94934;
    else return 0.92400; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00251;
    else if ( fabs(eta) < 1.4442 ) return 1.00583;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.01328;
    else return 0.91933; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01423;
    else if ( fabs(eta) < 1.4442 ) return 1.00793;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.01747;
    else return 0.92394; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01229;
    else if ( fabs(eta) < 1.4442 ) return 1.01322;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.01935;
    else return 0.93054; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99877;
    else if ( fabs(eta) < 1.4442 ) return 0.99092;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.99415;
    else return 0.92363; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00008;
    else if ( fabs(eta) < 1.4442 ) return 0.99629;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98451;
    else return 0.90324; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99789;
    else if ( fabs(eta) < 1.4442 ) return 0.99768;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98188;
    else return 0.89636; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99895;
    else if ( fabs(eta) < 1.4442 ) return 0.99018;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.97092;
    else return 0.90450; }
  else {
    if ( fabs(eta) < 0.8000 ) return 0.99113;
    else if ( fabs(eta) < 1.4442 ) return 0.96684;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.91169;
    else return 0.88242; }
}
else if ( ht < 1000.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.91047;
    else if ( fabs(eta) < 1.4442 ) return 0.94525;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.01094;
    else return 0.97963; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.89466;
    else if ( fabs(eta) < 1.4442 ) return 0.91591;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96763;
    else return 0.94878; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.95379;
    else if ( fabs(eta) < 1.4442 ) return 0.96107;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00053;
    else return 0.94417; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01923;
    else if ( fabs(eta) < 1.4442 ) return 1.02583;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.05061;
    else return 0.93553; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02534;
    else if ( fabs(eta) < 1.4442 ) return 1.01406;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.04633;
    else return 0.94572; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01209;
    else if ( fabs(eta) < 1.4442 ) return 1.01800;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.02686;
    else return 0.97407; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00306;
    else if ( fabs(eta) < 1.4442 ) return 0.99421;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00667;
    else return 0.94595; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00491;
    else if ( fabs(eta) < 1.4442 ) return 1.00475;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.99602;
    else return 0.92523; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00263;
    else if ( fabs(eta) < 1.4442 ) return 0.99098;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98832;
    else return 0.91990; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00062;
    else if ( fabs(eta) < 1.4442 ) return 0.99227;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.97486;
    else return 0.90326; }
  else {
    if ( fabs(eta) < 0.8000 ) return 0.99057;
    else if ( fabs(eta) < 1.4442 ) return 0.97499;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.93902;
    else return 0.90411; }
}
else if ( ht < 2000.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.92754;
    else if ( fabs(eta) < 1.4442 ) return 0.97171;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.13915;
    else return 1.01553; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.94183;
    else if ( fabs(eta) < 1.4442 ) return 0.93631;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96498;
    else return 0.95472; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.97652;
    else if ( fabs(eta) < 1.4442 ) return 0.96674;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.99426;
    else return 0.94060; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01169;
    else if ( fabs(eta) < 1.4442 ) return 1.04041;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.07920;
    else return 1.00112; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.03399;
    else if ( fabs(eta) < 1.4442 ) return 1.06733;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.06565;
    else return 0.99549; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02671;
    else if ( fabs(eta) < 1.4442 ) return 1.03623;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.03970;
    else return 0.96312; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01395;
    else if ( fabs(eta) < 1.4442 ) return 1.01239;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.03373;
    else return 1.00434; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00613;
    else if ( fabs(eta) < 1.4442 ) return 1.00547;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98104;
    else return 0.91949; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00583;
    else if ( fabs(eta) < 1.4442 ) return 0.99159;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98848;
    else return 0.89809; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00069;
    else if ( fabs(eta) < 1.4442 ) return 0.99456;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.99864;
    else return 0.88825; }
  else {
    if ( fabs(eta) < 0.8000 ) return 0.99135;
    else if ( fabs(eta) < 1.4442 ) return 0.97893;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98149;
    else return 0.95202; }
}
else {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.77381;
    else if ( fabs(eta) < 1.4442 ) return 1.13043;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.42857;
    else return 0.80000; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.06557;
    else if ( fabs(eta) < 1.4442 ) return 0.86857;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.83333;
    else return 1.06667; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.13699;
    else if ( fabs(eta) < 1.4442 ) return 1.02564;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.50000;
    else return 0.65000; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.08219;
    else if ( fabs(eta) < 1.4442 ) return 1.01538;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 0.66667; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.06557;
    else if ( fabs(eta) < 1.4442 ) return 1.05000;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.36364;
    else return 1.00000; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.08696;
    else if ( fabs(eta) < 1.4442 ) return 1.08511;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.11111;
    else return 1.75000; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99137;
    else if ( fabs(eta) < 1.4442 ) return 0.99301;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.09091;
    else return 1.25000; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.05051;
    else if ( fabs(eta) < 1.4442 ) return 1.07143;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.08571;
    else return 0.60000; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.97085;
    else if ( fabs(eta) < 1.4442 ) return 1.00938;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.04242;
    else return 1.07692; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00463;
    else if ( fabs(eta) < 1.4442 ) return 1.03704;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.01449;
    else return 0.93750; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00058;
    else if ( fabs(eta) < 1.4442 ) return 0.98923;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.80357;
    else return 1.00000; }
}
}

double HardcodedConditions::GetElectronTriggerXSF2016(double ht, double pt, double eta){
if ( ht < 400.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.61431;
    else if ( fabs(eta) < 1.4442 ) return 1.61952;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.74674;
    else return 1.59281; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.23473;
    else if ( fabs(eta) < 1.4442 ) return 1.28027;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.38066;
    else return 1.32017; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.09948;
    else if ( fabs(eta) < 1.4442 ) return 1.14040;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.17193;
    else return 1.07047; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.05111;
    else if ( fabs(eta) < 1.4442 ) return 1.05953;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.08977;
    else return 1.02717; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.03942;
    else if ( fabs(eta) < 1.4442 ) return 1.04432;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.06641;
    else return 1.01604; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02816;
    else if ( fabs(eta) < 1.4442 ) return 1.03525;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.05550;
    else return 1.01197; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01498;
    else if ( fabs(eta) < 1.4442 ) return 1.00614;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98909;
    else return 0.97014; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00761;
    else if ( fabs(eta) < 1.4442 ) return 1.00419;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.97438;
    else return 0.94755; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00629;
    else if ( fabs(eta) < 1.4442 ) return 1.00380;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96399;
    else return 0.95657; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99550;
    else if ( fabs(eta) < 1.4442 ) return 0.99109;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.89877;
    else return 0.91574; }
  else {
    if ( fabs(eta) < 0.8000 ) return 0.99015;
    else if ( fabs(eta) < 1.4442 ) return 0.95878;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.78558;
    else return 0.81085; }
}
else if ( ht < 500.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.09809;
    else if ( fabs(eta) < 1.4442 ) return 1.12581;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.19394;
    else return 1.16727; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.06105;
    else if ( fabs(eta) < 1.4442 ) return 1.08564;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.12760;
    else return 1.10519; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.04886;
    else if ( fabs(eta) < 1.4442 ) return 1.06455;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.09946;
    else return 1.08306; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.04068;
    else if ( fabs(eta) < 1.4442 ) return 1.05189;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.08029;
    else return 1.06162; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.03537;
    else if ( fabs(eta) < 1.4442 ) return 1.04071;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.07164;
    else return 1.06005; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02772;
    else if ( fabs(eta) < 1.4442 ) return 1.03143;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.04682;
    else return 1.05817; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01453;
    else if ( fabs(eta) < 1.4442 ) return 1.00034;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.97174;
    else return 0.99632; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01208;
    else if ( fabs(eta) < 1.4442 ) return 1.00546;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.95925;
    else return 0.95669; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00692;
    else if ( fabs(eta) < 1.4442 ) return 1.00349;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96671;
    else return 0.96101; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00018;
    else if ( fabs(eta) < 1.4442 ) return 0.99258;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.92619;
    else return 0.91785; }
  else {
    if ( fabs(eta) < 0.8000 ) return 0.98460;
    else if ( fabs(eta) < 1.4442 ) return 0.95969;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.80893;
    else return 0.78227; }
}
else if ( ht < 1000.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.08270;
    else if ( fabs(eta) < 1.4442 ) return 1.11563;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.19326;
    else return 1.17225; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.05995;
    else if ( fabs(eta) < 1.4442 ) return 1.08013;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.14618;
    else return 1.12311; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.05461;
    else if ( fabs(eta) < 1.4442 ) return 1.06636;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.10874;
    else return 1.08068; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.05032;
    else if ( fabs(eta) < 1.4442 ) return 1.06367;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.10035;
    else return 1.07918; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.04625;
    else if ( fabs(eta) < 1.4442 ) return 1.05163;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.08641;
    else return 1.07614; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02337;
    else if ( fabs(eta) < 1.4442 ) return 1.03923;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.06237;
    else return 1.06336; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01174;
    else if ( fabs(eta) < 1.4442 ) return 1.00755;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.97191;
    else return 0.98978; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01039;
    else if ( fabs(eta) < 1.4442 ) return 1.00282;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96936;
    else return 0.95604; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00504;
    else if ( fabs(eta) < 1.4442 ) return 1.00409;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96075;
    else return 0.94515; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99775;
    else if ( fabs(eta) < 1.4442 ) return 0.99565;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.93578;
    else return 0.91874; }
  else {
    if ( fabs(eta) < 0.8000 ) return 0.98455;
    else if ( fabs(eta) < 1.4442 ) return 0.97032;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.82354;
    else return 0.75345; }
}
else if ( ht < 2000.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.11562;
    else if ( fabs(eta) < 1.4442 ) return 1.18097;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.23626;
    else return 1.24418; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.05154;
    else if ( fabs(eta) < 1.4442 ) return 1.05493;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.14904;
    else return 1.16927; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.04460;
    else if ( fabs(eta) < 1.4442 ) return 1.04849;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.08800;
    else return 1.09848; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.06801;
    else if ( fabs(eta) < 1.4442 ) return 1.07435;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.13278;
    else return 1.12188; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.04190;
    else if ( fabs(eta) < 1.4442 ) return 1.06060;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.07528;
    else return 1.03632; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00431;
    else if ( fabs(eta) < 1.4442 ) return 1.06802;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.05135;
    else return 1.00767; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99601;
    else if ( fabs(eta) < 1.4442 ) return 0.99081;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.91331;
    else return 0.95958; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99987;
    else if ( fabs(eta) < 1.4442 ) return 0.99768;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.94050;
    else return 0.96824; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99127;
    else if ( fabs(eta) < 1.4442 ) return 1.00136;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96021;
    else return 0.92454; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99379;
    else if ( fabs(eta) < 1.4442 ) return 0.98477;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.95694;
    else return 0.94108; }
  else {
    if ( fabs(eta) < 0.8000 ) return 0.99294;
    else if ( fabs(eta) < 1.4442 ) return 0.98246;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.87664;
    else return 0.84905; }
}
else {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.08750;
    else if ( fabs(eta) < 1.4442 ) return 1.07143;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.28571;
    else return 1.00000; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.96386;
    else if ( fabs(eta) < 1.4442 ) return 1.02500;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.15789;
    else return 0.50000; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.08696;
    else if ( fabs(eta) < 1.4442 ) return 0.85000;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.23077;
    else return 1.14286; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.08696;
    else if ( fabs(eta) < 1.4442 ) return 1.03704;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 1.07692; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.09589;
    else if ( fabs(eta) < 1.4442 ) return 1.02703;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 1.00000; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.05405;
    else if ( fabs(eta) < 1.4442 ) return 1.07843;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.09091;
    else return 1.00000; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.88184;
    else if ( fabs(eta) < 1.4442 ) return 0.87747;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98913;
    else return 0.75000; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02548;
    else if ( fabs(eta) < 1.4442 ) return 1.10909;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.04167;
    else return 1.08333; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99704;
    else if ( fabs(eta) < 1.4442 ) return 1.05556;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.90519;
    else return 0.92045; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02636;
    else if ( fabs(eta) < 1.4442 ) return 0.93076;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98182;
    else return 0.82707; }
  else {
    if ( fabs(eta) < 0.8000 ) return 0.98095;
    else if ( fabs(eta) < 1.4442 ) return 1.01351;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.92647;
    else return 1.00000; }
}
}

double HardcodedConditions::GetElectronTriggerXSF2017(double ht, double pt, double eta){
  double scaleCDEF = 38.783 / 43.841; 
if ( ht < 400.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 2.56937 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 3.04192 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 2.95386 * scaleCDEF;
    else return 2.84505 * scaleCDEF; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.26863 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 1.92440 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.65988 * scaleCDEF;
    else return 1.60170 * scaleCDEF; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.23194 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 0.27451 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.52069 * scaleCDEF;
    else return 0.44279 * scaleCDEF; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.88995;
    else if ( fabs(eta) < 1.4442 ) return 0.81759;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.89188;
    else return 0.82054; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02554;
    else if ( fabs(eta) < 1.4442 ) return 1.01994;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00371;
    else return 1.02747; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02424;
    else if ( fabs(eta) < 1.4442 ) return 1.02794;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.01130;
    else return 1.03432; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00471;
    else if ( fabs(eta) < 1.4442 ) return 1.00503;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.97898;
    else return 0.98290; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00183;
    else if ( fabs(eta) < 1.4442 ) return 1.00101;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96003;
    else return 0.95740; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00046;
    else if ( fabs(eta) < 1.4442 ) return 0.99883;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96665;
    else return 0.95664; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00292;
    else if ( fabs(eta) < 1.4442 ) return 0.99644;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.94808;
    else return 0.93483; }
  else {
    if ( fabs(eta) < 0.8000 ) return 0.99790;
    else if ( fabs(eta) < 1.4442 ) return 0.98420;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.90570;
    else return 0.86844; }
}
else if ( ht < 500.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.15092 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 1.19041 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.22508 * scaleCDEF;
    else return 1.34063 * scaleCDEF; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.05841 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 1.12623 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.13907 * scaleCDEF;
    else return 1.27515 * scaleCDEF; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.68308 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 0.74209 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.80089 * scaleCDEF;
    else return 0.92773 * scaleCDEF; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.94061;
    else if ( fabs(eta) < 1.4442 ) return 0.90064;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.90402;
    else return 0.89465; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02597;
    else if ( fabs(eta) < 1.4442 ) return 1.02809;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.01289;
    else return 1.03365; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02645;
    else if ( fabs(eta) < 1.4442 ) return 1.03434;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.02146;
    else return 1.03499; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00837;
    else if ( fabs(eta) < 1.4442 ) return 1.01251;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98777;
    else return 0.99240; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00699;
    else if ( fabs(eta) < 1.4442 ) return 1.00591;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98376;
    else return 0.96405; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00840;
    else if ( fabs(eta) < 1.4442 ) return 1.00688;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98341;
    else return 0.98021; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00680;
    else if ( fabs(eta) < 1.4442 ) return 1.00235;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.97077;
    else return 0.95488; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00013;
    else if ( fabs(eta) < 1.4442 ) return 0.99047;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.91257;
    else return 0.88104; }
}
else if ( ht < 1000.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.05854 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 1.08837 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.10258 * scaleCDEF;
    else return 1.20762 * scaleCDEF; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.03356 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 1.06726 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.07953 * scaleCDEF;
    else return 1.15934 * scaleCDEF; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.94699 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 0.98073 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98213 * scaleCDEF;
    else return 1.05588 * scaleCDEF; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02194;
    else if ( fabs(eta) < 1.4442 ) return 1.02441;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00121;
    else return 1.02216; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.03326;
    else if ( fabs(eta) < 1.4442 ) return 1.04711;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.03216;
    else return 1.05949; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.03617;
    else if ( fabs(eta) < 1.4442 ) return 1.04983;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.02980;
    else return 1.05394; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02196;
    else if ( fabs(eta) < 1.4442 ) return 1.02290;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.01415;
    else return 1.02474; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01386;
    else if ( fabs(eta) < 1.4442 ) return 1.01836;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.99703;
    else return 1.00373; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01504;
    else if ( fabs(eta) < 1.4442 ) return 1.01345;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.99358;
    else return 1.00295; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01148;
    else if ( fabs(eta) < 1.4442 ) return 1.00860;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98584;
    else return 0.97820; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00698;
    else if ( fabs(eta) < 1.4442 ) return 0.99701;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.92226;
    else return 0.88482; }
}
else if ( ht < 2000.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.08754 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 1.11569 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.16521 * scaleCDEF;
    else return 1.29130 * scaleCDEF; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.05055 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 1.09866 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.10188 * scaleCDEF;
    else return 1.23199 * scaleCDEF; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.97804 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 0.98771 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98211 * scaleCDEF;
    else return 1.09251 * scaleCDEF; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.03126;
    else if ( fabs(eta) < 1.4442 ) return 1.04096;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.03309;
    else return 1.01873; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.03199;
    else if ( fabs(eta) < 1.4442 ) return 1.05473;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.05993;
    else return 1.05722; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.05283;
    else if ( fabs(eta) < 1.4442 ) return 1.06391;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.07513;
    else return 1.10383; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01675;
    else if ( fabs(eta) < 1.4442 ) return 1.03176;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.02310;
    else return 1.06491; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02326;
    else if ( fabs(eta) < 1.4442 ) return 1.03856;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.01779;
    else return 0.99937; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02607;
    else if ( fabs(eta) < 1.4442 ) return 1.01879;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00217;
    else return 1.01259; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01754;
    else if ( fabs(eta) < 1.4442 ) return 1.01259;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00811;
    else return 0.98548; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.01179;
    else if ( fabs(eta) < 1.4442 ) return 1.00110;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.95619;
    else return 0.92466; }
}
else {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.09890 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 1.12371 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.17500 * scaleCDEF;
    else return 1.29167 * scaleCDEF; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01010 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 1.15000 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.26316 * scaleCDEF;
    else return 1.21739 * scaleCDEF; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01259 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 1.00936 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00000 ;
    else if ( fabs(eta) < 2.0000 ) return 1.06250 * scaleCDEF;
    else return 1.11765 * scaleCDEF; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99247;
    else if ( fabs(eta) < 1.4442 ) return 1.10588;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.86857;
    else return 1.12037; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.05814;
    else if ( fabs(eta) < 1.4442 ) return 1.11458;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 1.12000; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.05970;
    else if ( fabs(eta) < 1.4442 ) return 0.95503;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.82258;
    else return 1.20000; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01197;
    else if ( fabs(eta) < 1.4442 ) return 1.08333;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.12069;
    else return 1.05714; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.05903;
    else if ( fabs(eta) < 1.4442 ) return 0.97645;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 1.09091; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.04592;
    else if ( fabs(eta) < 1.4442 ) return 1.06407;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.01677;
    else return 1.09302; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00636;
    else if ( fabs(eta) < 1.4442 ) return 1.00138;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98701;
    else return 1.02564; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.01175;
    else if ( fabs(eta) < 1.4442 ) return 0.98519;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.93247;
    else return 1.00000; }
}
}

double HardcodedConditions::GetElectronTriggerXSF2018(double ht, double pt, double eta){
if ( ht < 400.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.99255;
    else if ( fabs(eta) < 1.4442 ) return 2.05528;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 2.09188;
    else return 2.17559; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.92404;
    else if ( fabs(eta) < 1.4442 ) return 0.97280;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.81088;
    else return 1.04479; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.69383;
    else if ( fabs(eta) < 1.4442 ) return 0.73802;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.78043;
    else return 1.01835; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.98722;
    else if ( fabs(eta) < 1.4442 ) return 1.00994;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.34255;
    else return 1.44276; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01058;
    else if ( fabs(eta) < 1.4442 ) return 1.00928;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.02954;
    else return 1.04692; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00737;
    else if ( fabs(eta) < 1.4442 ) return 1.01154;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00919;
    else return 1.01270; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00079;
    else if ( fabs(eta) < 1.4442 ) return 0.99317;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96541;
    else return 0.95974; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99289;
    else if ( fabs(eta) < 1.4442 ) return 0.99473;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.95965;
    else return 0.92626; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99577;
    else if ( fabs(eta) < 1.4442 ) return 0.99317;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.95141;
    else return 0.90862; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99440;
    else if ( fabs(eta) < 1.4442 ) return 0.98880;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.92058;
    else return 0.87275; }
  else {
    if ( fabs(eta) < 0.8000 ) return 0.99892;
    else if ( fabs(eta) < 1.4442 ) return 0.97756;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.89913;
    else return 0.85694; }
}
else if ( ht < 500.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.21348;
    else if ( fabs(eta) < 1.4442 ) return 1.27406;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.30639;
    else return 1.43790; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.93419;
    else if ( fabs(eta) < 1.4442 ) return 1.02015;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.95311;
    else return 1.21287; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.66198;
    else if ( fabs(eta) < 1.4442 ) return 0.71947;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.70709;
    else return 0.87846; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.96833;
    else if ( fabs(eta) < 1.4442 ) return 0.96054;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.11972;
    else return 1.14203; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01985;
    else if ( fabs(eta) < 1.4442 ) return 1.02816;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.03420;
    else return 1.05428; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01674;
    else if ( fabs(eta) < 1.4442 ) return 1.02278;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.02540;
    else return 1.02908; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99956;
    else if ( fabs(eta) < 1.4442 ) return 0.99715;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.97303;
    else return 0.96945; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99541;
    else if ( fabs(eta) < 1.4442 ) return 0.99620;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96648;
    else return 0.95760; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00010;
    else if ( fabs(eta) < 1.4442 ) return 1.00037;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.97449;
    else return 0.95552; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00065;
    else if ( fabs(eta) < 1.4442 ) return 0.99853;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.96386;
    else return 0.93321; }
  else {
    if ( fabs(eta) < 0.8000 ) return 0.99798;
    else if ( fabs(eta) < 1.4442 ) return 0.97967;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.91363;
    else return 0.86132; }
}
else if ( ht < 1000.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.04762;
    else if ( fabs(eta) < 1.4442 ) return 1.07603;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.10565;
    else return 1.20687; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.03732;
    else if ( fabs(eta) < 1.4442 ) return 1.05614;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.07436;
    else return 1.14806; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01120;
    else if ( fabs(eta) < 1.4442 ) return 1.02536;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.02318;
    else return 1.09659; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02216;
    else if ( fabs(eta) < 1.4442 ) return 1.03264;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.05035;
    else return 1.07743; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02544;
    else if ( fabs(eta) < 1.4442 ) return 1.03506;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.04079;
    else return 1.06365; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02266;
    else if ( fabs(eta) < 1.4442 ) return 1.03257;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.03279;
    else return 1.04545; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01080;
    else if ( fabs(eta) < 1.4442 ) return 1.01225;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.99294;
    else return 1.00648; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00548;
    else if ( fabs(eta) < 1.4442 ) return 1.00932;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.98438;
    else return 0.99429; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00497;
    else if ( fabs(eta) < 1.4442 ) return 1.00665;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.99010;
    else return 0.98557; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00293;
    else if ( fabs(eta) < 1.4442 ) return 1.00216;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.97533;
    else return 0.96110; }
  else {
    if ( fabs(eta) < 0.8000 ) return 0.99761;
    else if ( fabs(eta) < 1.4442 ) return 0.98700;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.92631;
    else return 0.90028; }
}
else if ( ht < 2000.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.06025;
    else if ( fabs(eta) < 1.4442 ) return 1.09448;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.14707;
    else return 1.27066; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.04968;
    else if ( fabs(eta) < 1.4442 ) return 1.07319;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.09645;
    else return 1.18876; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.04766;
    else if ( fabs(eta) < 1.4442 ) return 1.05445;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.05412;
    else return 1.16373; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.03300;
    else if ( fabs(eta) < 1.4442 ) return 1.05754;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.05915;
    else return 1.10026; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.03232;
    else if ( fabs(eta) < 1.4442 ) return 1.04235;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.05182;
    else return 1.07905; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02933;
    else if ( fabs(eta) < 1.4442 ) return 1.03350;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.04013;
    else return 1.06178; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01113;
    else if ( fabs(eta) < 1.4442 ) return 1.02010;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.99556;
    else return 1.00582; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00433;
    else if ( fabs(eta) < 1.4442 ) return 1.01086;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.99584;
    else return 1.01370; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00189;
    else if ( fabs(eta) < 1.4442 ) return 1.00110;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.99370;
    else return 1.00610; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00230;
    else if ( fabs(eta) < 1.4442 ) return 1.00833;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.99926;
    else return 0.97209; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00080;
    else if ( fabs(eta) < 1.4442 ) return 0.98783;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.93403;
    else return 0.92280; }
}
else {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.09091;
    else if ( fabs(eta) < 1.4442 ) return 1.09836;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.06818;
    else return 1.52308; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.08163;
    else if ( fabs(eta) < 1.4442 ) return 1.10294;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.99429;
    else return 1.17816; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.05495;
    else if ( fabs(eta) < 1.4442 ) return 1.00899;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.07273;
    else return 1.22727; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00119;
    else if ( fabs(eta) < 1.4442 ) return 1.04795;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 1.14258; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.04237;
    else if ( fabs(eta) < 1.4442 ) return 0.99174;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.05882;
    else return 1.26316; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.95192;
    else if ( fabs(eta) < 1.4442 ) return 1.00111;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.91667;
    else return 0.90741; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02355;
    else if ( fabs(eta) < 1.4442 ) return 1.03782;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.04545;
    else return 0.95221; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.92656;
    else if ( fabs(eta) < 1.4442 ) return 0.97347;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.87018;
    else return 1.02632; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00850;
    else if ( fabs(eta) < 1.4442 ) return 0.99484;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.93340;
    else return 1.00533; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.97648;
    else if ( fabs(eta) < 1.4442 ) return 1.00759;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.03349;
    else return 1.03797; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.01231;
    else if ( fabs(eta) < 1.4442 ) return 0.96050;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.02564;
    else return 1.00000; }
}
}
///*.-----------------------------------------------------------------.
//  /  .-.                                                         .-.  \
// |  /   \                                                       /   \  |
// | |\_.  |                                                     |    /| |
// |\|  | /|        ELECTRON TRIGGER SCALE FACTOR SECTION        |\  | |/|
// | `---' |           (using cross triggers from VLQ)           | `---' |
// |       |                                                     |       | 
// |       |-----------------------------------------------------|       |
// \       |                                                     |       /
//  \     /                                                       \     /
//   `---'                                                         `---'*/
//
//double HardcodedConditions::GetElectronTriggerVlqXSF(double pt, double eta, std::string year)
//{
//  //The main getter for Electron Trigger Scale Factors
//  if      (year=="2016") return GetElectronTriggerVlqXSF2016(pt, eta);
//  else if (year=="2017") return GetElectronTriggerVlqXSF2017(pt, eta);
//  else if (year=="2018") return GetElectronTriggerVlqXSF2018(pt, eta);
//  else return 0.;
//}//end GetElectronTriggerVlqXSF
//
//double HardcodedConditions::GetElectronTriggerVlqXSF2016APV(double pt, double eta)
//{
//	// TO-BE-IMPLEMENTED!!!!!!!
//	return 1.000;
//
//}
//double HardcodedConditions::GetElectronTriggerVlqXSF2016(double pt, double eta)
//{
//	// TO-BE-IMPLEMENTED!!!!!!!
//	return 1.000;
//
//}
//
//double HardcodedConditions::GetElectronTriggerVlqXSF2017(double leppt, double lepeta)
//{
//	  // Trigger Scale Factors, SF2017B_Bkg_LepPtEta_EOR.png & SF2017CDEF_Bkg_LepPtEta_EOR.png
//	  float trigSFB = 1.0;
//	  float trigSFCDEF = 1.0;
//	  float trigSFBunc = 0.0;
//	  float trigSFCDEFunc = 0.0;
//	  if (fabs(lepeta) < 0.8){
//	    if (leppt < 50) {trigSFB = 0.697; trigSFBunc = 0.075; trigSFCDEF = 1.051; trigSFCDEFunc = 0.018;}
//	    else if (leppt < 60) {trigSFB = 0.818; trigSFBunc = 0.069; trigSFCDEF = 1.029; trigSFCDEFunc = 0.016;}
//	    else if (leppt < 70) {trigSFB = 0.761; trigSFBunc = 0.081;  trigSFCDEF = 0.988; trigSFCDEFunc = 0.019;}
//	    else if (leppt < 100) {trigSFB = 0.693; trigSFBunc = 0.053;  trigSFCDEF = 0.972; trigSFCDEFunc = 0.012;}
//	    else if (leppt < 200) {trigSFB = 0.679; trigSFBunc = 0.050;  trigSFCDEF = 0.972; trigSFCDEFunc = 0.009;}
//	    else {trigSFB = 0.953; trigSFBunc = 0.066;  trigSFCDEF = 0.964; trigSFCDEFunc = 0.019;}
//	  }else if (fabs(lepeta) < 1.442){
//            if (leppt < 50) {trigSFB = 0.793; trigSFBunc = 0.142;  trigSFCDEF = 1.020; trigSFCDEFunc = 0.029;}
//            else if (leppt < 60) {trigSFB = 0.853; trigSFBunc = 0.112;  trigSFCDEF = 1.063; trigSFCDEFunc = 0.024;}
//            else if (leppt < 70) {trigSFB = 0.721; trigSFBunc = 0.116;  trigSFCDEF = 0.962; trigSFCDEFunc = 0.031;}
//            else if (leppt < 100) {trigSFB = 0.731; trigSFBunc = 0.075;  trigSFCDEF = 0.923; trigSFCDEFunc = 0.020;}
//            else if (leppt < 200) {trigSFB = 0.815; trigSFBunc = 0.060;  trigSFCDEF = 0.957; trigSFCDEFunc = 0.015;}
//            else {trigSFB = 0.801; trigSFBunc = 0.143;  trigSFCDEF = 1.015; trigSFCDEFunc = 0.015;}
//	  }else if (fabs(lepeta) < 1.566) {trigSFB = 1.0; trigSFCDEF = 1.0;}
//	  else if (fabs(lepeta) < 2.0){
//            if (leppt < 50) {trigSFB = 1.024; trigSFBunc = 0.157;  trigSFCDEF = 1.060; trigSFCDEFunc = 0.059;}
//            else if (leppt < 60) {trigSFB = 0.695; trigSFBunc = 0.228;  trigSFCDEF = 1.109; trigSFCDEFunc = 0.045;}
//            else if (leppt < 70) {trigSFB = 0.675; trigSFBunc = 0.202;  trigSFCDEF = 1.061; trigSFCDEFunc = 0.054;}
//            else if (leppt < 100) {trigSFB = 0.752; trigSFBunc = 0.124;  trigSFCDEF = 0.996; trigSFCDEFunc = 0.035;}
//            else if (leppt < 200) {trigSFB = 0.672; trigSFBunc = 0.174;  trigSFCDEF = 0.960; trigSFCDEFunc = 0.039;}
//            else {trigSFB = 1.108; trigSFBunc = 0.022;  trigSFCDEF = 0.924; trigSFCDEFunc = 0.099;}
//	  }else {
//            if (leppt < 50) {trigSFB = 1.026; trigSFBunc = 0.297;  trigSFCDEF = 1.007; trigSFCDEFunc = 0.087;}
//            else if (leppt < 60) {trigSFB = 1.216; trigSFBunc = 0.024;  trigSFCDEF = 0.903; trigSFCDEFunc = 0.092;}
//            else if (leppt < 70) {trigSFB = 1.000; trigSFBunc = 0.050;  trigSFCDEF = 1.037; trigSFCDEFunc = 0.077;}
//            else if (leppt < 100) {trigSFB = 0.977; trigSFBunc = 0.151;  trigSFCDEF = 1.027; trigSFCDEFunc = 0.045;}
//            else if (leppt < 200) {trigSFB = 0.366; trigSFBunc = 0.299;  trigSFCDEF = 0.910; trigSFCDEFunc = 0.071;}
//            else {trigSFB = 1.000; trigSFBunc = 0.050;  trigSFCDEF = 0.440; trigSFCDEFunc = 0.242;}
//	  }
//	  float triggerSF = (4.823*trigSFB + 36.734*trigSFCDEF)/41.557;
//	  float triggerSFUncert = sqrt( pow(4.823*trigSFBunc/41.557,2) + pow(36.734*trigSFCDEFunc/41.557,2) );
//
//	return triggerSF;
//
//}
//
//double HardcodedConditions::GetElectronTriggerVlqXSF2018(double leppt, double lepeta)
//{
//	  //Trigger SF calculated by JHogan, HT > 430, ttbar tag/probe, Id+iso applied
//	float triggSF = 1.0;
//	float triggSFUncert = 1.0;
//	  if (fabs(lepeta) < 0.8){
//	if (leppt < 30) {triggSF = 0.924; triggSFUncert = 0.025;}
//	else if (leppt < 40) {triggSF = 1.030; triggSFUncert = 0.018;}
//		else if (leppt < 50) {triggSF = 1.033; triggSFUncert = 0.015;}
//		else if (leppt < 60) {triggSF = 1.029; triggSFUncert = 0.014;}
//		else if (leppt < 70) {triggSF = 1.001; triggSFUncert = 0.014;}
//		else if (leppt < 100) {triggSF = 1.001; triggSFUncert = 0.010;}
//		else if (leppt < 200) {triggSF = 0.980; triggSFUncert = 0.010;}
//		else {triggSF = 0.983; triggSFUncert = 0.013;}
//  }
//	  else if (fabs(lepeta) < 1.442){
//	if (leppt < 30) {triggSF = 0.929; triggSFUncert = 0.037;}
//		else if (leppt < 40) {triggSF = 1.057; triggSFUncert = 0.025;}
//		else if (leppt < 50) {triggSF = 1.076; triggSFUncert = 0.023;}
//		else if (leppt < 60) {triggSF = 1.035; triggSFUncert = 0.020;}
//		else if (leppt < 70) {triggSF = 1.023; triggSFUncert = 0.021;}
//		else if (leppt < 100) {triggSF = 1.010; triggSFUncert = 0.013;}
//		else if (leppt < 200) {triggSF = 1.002; triggSFUncert = 0.010;}
//		else {triggSF = 0.982; triggSFUncert = 0.021;}
//	  }
//	  else if (fabs(lepeta) < 1.556) {
//	if (leppt < 30) {triggSF = 0.673; triggSFUncert = 0.171;}
//		else if (leppt < 40) {triggSF = 1.197; triggSFUncert = 0.116;}
//		else if (leppt < 50) {triggSF = 1.143; triggSFUncert = 0.087;}
//		else if (leppt < 60) {triggSF = 0.928; triggSFUncert = 0.092;}
//		else if (leppt < 70) {triggSF = 1.082; triggSFUncert = 0.076;}
//		else if (leppt < 100) {triggSF = 0.951; triggSFUncert = 0.054;}
//		else if (leppt < 200) {triggSF = 1.016; triggSFUncert = 0.029;}
//		else {triggSF = 0.978; triggSFUncert = 0.062;}
//  }
//	  else if (fabs(lepeta) < 2.0){ 
//	if (leppt < 30) {triggSF = 0.827; triggSFUncert = 0.073;}
//		else if (leppt < 40) {triggSF = 0.976; triggSFUncert = 0.052;}
//		else if (leppt < 50) {triggSF = 1.114; triggSFUncert = 0.042;}
//		else if (leppt < 60) {triggSF = 1.099; triggSFUncert = 0.041;}
//		else if (leppt < 70) {triggSF = 1.030; triggSFUncert = 0.040;}
//		else if (leppt < 100) {triggSF = 0.990; triggSFUncert = 0.032;}
//		else if (leppt < 200) {triggSF = 1.028; triggSFUncert = 0.022;}
//		else {triggSF = 0.948; triggSFUncert = 0.058;}
//	  }	  
//	  else{ 
//		if (leppt < 30) {triggSF = 1.047; triggSFUncert = 0.093;}
//		else if (leppt < 40) {triggSF = 1.150; triggSFUncert = 0.080;}
//		else if (leppt < 50) {triggSF = 1.094; triggSFUncert = 0.061;}
//		else if (leppt < 60) {triggSF = 1.063; triggSFUncert = 0.060;}
//		else if (leppt < 70) {triggSF = 1.073; triggSFUncert = 0.058;}
//		else if (leppt < 100) {triggSF = 1.005; triggSFUncert = 0.039;}
//		else if (leppt < 200) {triggSF = 0.978; triggSFUncert = 0.041;}
//		else {triggSF = 1.103; triggSFUncert = 0.035;}
//	 }
//
//  return triggSF;
//}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|            MUON ID SCALE FACTOR SECTION             |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

double HardcodedConditions::GetMuonIdSF(double pt, double eta, std::string year, std::string shift){
  if      (year=="2016APV") return GetMuonIdSF2016APV(pt, eta, shift);
  else if (year=="2016") return GetMuonIdSF2017(pt, eta, shift);
  else if (year=="2017") return GetMuonIdSF2017(pt, eta, shift);
  else if (year=="2018") return GetMuonIdSF2018(pt, eta, shift);
  else return 0.;
}

double HardcodedConditions::GetMuonIdSF2016APV(double pt, double eta, std::string shift){
  if ( shift == "up" ){
    if ( pt < 20.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98911;
      else if ( fabs(eta) < 1.2 ) return 0.98401;
      else if ( fabs(eta) < 2.1 ) return 0.99062;
      else return 0.97894; }
    else if ( pt < 25.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99216;
      else if ( fabs(eta) < 1.2 ) return 0.98170;
      else if ( fabs(eta) < 2.1 ) return 0.99093;
      else return 0.97788; }
    else if ( pt < 30.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99304;
      else if ( fabs(eta) < 1.2 ) return 0.98429;
      else if ( fabs(eta) < 2.1 ) return 0.99316;
      else return 0.98115; }
    else if ( pt < 40.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99324;
      else if ( fabs(eta) < 1.2 ) return 0.98629;
      else if ( fabs(eta) < 2.1 ) return 0.99566;
      else return 0.98141; }
    else if ( pt < 50.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99447;
      else if ( fabs(eta) < 1.2 ) return 0.98756;
      else if ( fabs(eta) < 2.1 ) return 0.99880;
      else return 0.98282; }
    else if ( pt < 60.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98940;
      else if ( fabs(eta) < 1.2 ) return 0.98218;
      else if ( fabs(eta) < 2.1 ) return 0.99288;
      else return 0.97842; }
    else {
      if ( fabs(eta) < 0.9 ) return 0.98704;
      else if ( fabs(eta) < 1.2 ) return 0.98107;
      else if ( fabs(eta) < 2.1 ) return 0.99120;
      else return 0.97934; }
  }
  else if ( shift == "down" ){
    if ( pt < 20.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98640;
      else if ( fabs(eta) < 1.2 ) return 0.98059;
      else if ( fabs(eta) < 2.1 ) return 0.98784;
      else return 0.97107; }
    else if ( pt < 25.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98867;
      else if ( fabs(eta) < 1.2 ) return 0.97907;
      else if ( fabs(eta) < 2.1 ) return 0.98837;
      else return 0.97319; }
    else if ( pt < 30.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98510;
      else if ( fabs(eta) < 1.2 ) return 0.97377;
      else if ( fabs(eta) < 2.1 ) return 0.98590;
      else return 0.97049; }
    else if ( pt < 40.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98245;
      else if ( fabs(eta) < 1.2 ) return 0.97575;
      else if ( fabs(eta) < 2.1 ) return 0.98536;
      else return 0.96983; }
    else if ( pt < 50.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98163;
      else if ( fabs(eta) < 1.2 ) return 0.97220;
      else if ( fabs(eta) < 2.1 ) return 0.98303;
      else return 0.96511; }
    else if ( pt < 60.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98479;
      else if ( fabs(eta) < 1.2 ) return 0.97771;
      else if ( fabs(eta) < 2.1 ) return 0.98694;
      else return 0.96790; }
    else {
      if ( fabs(eta) < 0.9 ) return 0.98581;
      else if ( fabs(eta) < 1.2 ) return 0.97718;
      else if ( fabs(eta) < 2.1 ) return 0.98789;
      else return 0.95301; }
  }
  else {
    if ( pt < 20.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98775;
      else if ( fabs(eta) < 1.2 ) return 0.98230;
      else if ( fabs(eta) < 2.1 ) return 0.98923;
      else return 0.97500; }
    else if ( pt < 25.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99042;
      else if ( fabs(eta) < 1.2 ) return 0.98039;
      else if ( fabs(eta) < 2.1 ) return 0.98965;
      else return 0.97554; }
    else if ( pt < 30.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98907;
      else if ( fabs(eta) < 1.2 ) return 0.97903;
      else if ( fabs(eta) < 2.1 ) return 0.98953;
      else return 0.97582; }
    else if ( pt < 40.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98784;
      else if ( fabs(eta) < 1.2 ) return 0.98102;
      else if ( fabs(eta) < 2.1 ) return 0.99051;
      else return 0.97562; }
    else if ( pt < 50.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98805;
      else if ( fabs(eta) < 1.2 ) return 0.97988;
      else if ( fabs(eta) < 2.1 ) return 0.99091;
      else return 0.97397; }
    else if ( pt < 60.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98710;
      else if ( fabs(eta) < 1.2 ) return 0.97994;
      else if ( fabs(eta) < 2.1 ) return 0.98991;
      else return 0.97316; }
    else {
      if ( fabs(eta) < 0.9 ) return 0.98642;
      else if ( fabs(eta) < 1.2 ) return 0.97912;
      else if ( fabs(eta) < 2.1 ) return 0.98955;
      else return 0.96618; }	 
  }
}

double HardcodedConditions::GetMuonIdSF2016( double pt, double eta, std::string shift ){
  if ( shift == "up" ) {
    if ( pt < 20.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99425;
      else if ( fabs(eta) < 1.2 ) return 0.98408;
      else if ( fabs(eta) < 2.1 ) return 0.99544;
      else return 0.98279; }
    else if ( pt < 25.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99075;
      else if ( fabs(eta) < 1.2 ) return 0.98154;
      else if ( fabs(eta) < 2.1 ) return 0.99359;
      else return 0.98093; }
    else if ( pt < 30.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99115;
      else if ( fabs(eta) < 1.2 ) return 0.98625;
      else if ( fabs(eta) < 2.1 ) return 0.99530;
      else return 0.98163; }
    else if ( pt < 40.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98948;
      else if ( fabs(eta) < 1.2 ) return 0.98270;
      else if ( fabs(eta) < 2.1 ) return 0.99442;
      else return 0.98068; }
    else if ( pt < 50.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98982;
      else if ( fabs(eta) < 1.2 ) return 0.98249;
      else if ( fabs(eta) < 2.1 ) return 0.99458;
      else return 0.98054; }
    else if ( pt < 60.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98835;
      else if ( fabs(eta) < 1.2 ) return 0.98205;
      else if ( fabs(eta) < 2.1 ) return 0.99364;
      else return 0.97918; }
    else {
      if ( fabs(eta) < 0.9 ) return 0.98713;
      else if ( fabs(eta) < 1.2 ) return 0.98063;
      else if ( fabs(eta) < 2.1 ) return 0.99372;
      else return 0.98151; }
  }
  else if ( shift == "down" ) {
    if ( pt < 20.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98461;
      else if ( fabs(eta) < 1.2 ) return 0.97390;
      else if ( fabs(eta) < 2.1 ) return 0.98481;
      else return 0.96874; }
    else if ( pt < 25.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98450;
      else if ( fabs(eta) < 1.2 ) return 0.97162;
      else if ( fabs(eta) < 2.1 ) return 0.98531;
      else return 0.96968; }
    else if ( pt < 30.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98469;
      else if ( fabs(eta) < 1.2 ) return 0.97677;
      else if ( fabs(eta) < 2.1 ) return 0.98664;
      else return 0.97057; }
    else if ( pt < 40.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98351;
      else if ( fabs(eta) < 1.2 ) return 0.97474;
      else if ( fabs(eta) < 2.1 ) return 0.98658;
      else return 0.97119; }
    else if ( pt < 50.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98363;
      else if ( fabs(eta) < 1.2 ) return 0.97600;
      else if ( fabs(eta) < 2.1 ) return 0.98846;
      else return 0.97229; }
    else if ( pt < 60.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98199;
      else if ( fabs(eta) < 1.2 ) return 0.97601;
      else if ( fabs(eta) < 2.1 ) return 0.98761;
      else return 0.96484; }
    else {
      if ( fabs(eta) < 0.9 ) return 0.98213;
      else if ( fabs(eta) < 1.2 ) return 0.97602;
      else if ( fabs(eta) < 2.1 ) return 0.98727;
      else return 0.95759; }
  }
  else {
    if ( pt < 20.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98943;
      else if ( fabs(eta) < 1.2 ) return 0.97899;
      else if ( fabs(eta) < 2.1 ) return 0.99012;
      else return 0.97577; }
    else if ( pt < 25.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98763;
      else if ( fabs(eta) < 1.2 ) return 0.97658;
      else if ( fabs(eta) < 2.1 ) return 0.98945;
      else return 0.97531; }
    else if ( pt < 30.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98792;
      else if ( fabs(eta) < 1.2 ) return 0.98151;
      else if ( fabs(eta) < 2.1 ) return 0.99097;
      else return 0.97610; }
    else if ( pt < 40.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98650;
      else if ( fabs(eta) < 1.2 ) return 0.97872;
      else if ( fabs(eta) < 2.1 ) return 0.99050;
      else return 0.97594; }
    else if ( pt < 50.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98673;
      else if ( fabs(eta) < 1.2 ) return 0.97925;
      else if ( fabs(eta) < 2.1 ) return 0.99152;
      else return 0.97642; }
    else if ( pt < 60.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98517;
      else if ( fabs(eta) < 1.2 ) return 0.97903;
      else if ( fabs(eta) < 2.1 ) return 0.99063;
      else return 0.97201; }
    else {
      if ( fabs(eta) < 0.9 ) return 0.98463;
      else if ( fabs(eta) < 1.2 ) return 0.97832;
      else if ( fabs(eta) < 2.1 ) return 0.99049;
      else return 0.96955; } 
  }
}

double HardcodedConditions::GetMuonIdSF2017(double pt, double eta, std::string shift){
  if ( shift == "up" ){
    if ( pt < 20.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99016;
      else if ( fabs(eta) < 1.2 ) return 0.98611;
      else if ( fabs(eta) < 2.1 ) return 0.99158;
      else return 0.97473; }
    else if ( pt < 25.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99115;
      else if ( fabs(eta) < 1.2 ) return 0.98358;
      else if ( fabs(eta) < 2.1 ) return 0.99010;
      else return 0.97615; }
    else if ( pt < 30.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98984;
      else if ( fabs(eta) < 1.2 ) return 0.98235;
      else if ( fabs(eta) < 2.1 ) return 0.99128;
      else return 0.97715; }
    else if ( pt < 40.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98927;
      else if ( fabs(eta) < 1.2 ) return 0.98344;
      else if ( fabs(eta) < 2.1 ) return 0.99110;
      else return 0.97616; }
    else if ( pt < 50.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98875;
      else if ( fabs(eta) < 1.2 ) return 0.98351;
      else if ( fabs(eta) < 2.1 ) return 0.99161;
      else return 0.97628; }
    else if ( pt < 60.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98905;
      else if ( fabs(eta) < 1.2 ) return 0.98337;
      else if ( fabs(eta) < 2.1 ) return 0.99140;
      else return 0.97465; }
    else {
      if ( fabs(eta) < 0.9 ) return 0.98806;
      else if ( fabs(eta) < 1.2 ) return 0.98455;
      else if ( fabs(eta) < 2.1 ) return 0.99186;
      else return 0.97564; }
  }
  else if ( shift == "down" ) {
    if ( pt < 20.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98779;
      else if ( fabs(eta) < 1.2 ) return 0.98162;
      else if ( fabs(eta) < 2.1 ) return 0.98787;
      else return 0.97118; }
    else if ( pt < 25.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98918;
      else if ( fabs(eta) < 1.2 ) return 0.98054;
      else if ( fabs(eta) < 2.1 ) return 0.98873;
      else return 0.97197; }
    else if ( pt < 30.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98906;
      else if ( fabs(eta) < 1.2 ) return 0.98090;
      else if ( fabs(eta) < 2.1 ) return 0.99034;
      else return 0.97491; }
    else if ( pt < 40.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98885;
      else if ( fabs(eta) < 1.2 ) return 0.98192;
      else if ( fabs(eta) < 2.1 ) return 0.99073;
      else return 0.97451; }
    else if ( pt < 50.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98839;
      else if ( fabs(eta) < 1.2 ) return 0.98291;
      else if ( fabs(eta) < 2.1 ) return 0.99111;
      else return 0.97424; }
    else if ( pt < 60.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98730;
      else if ( fabs(eta) < 1.2 ) return 0.98143;
      else if ( fabs(eta) < 2.1 ) return 0.98885;
      else return 0.96607; }
    else {
      if ( fabs(eta) < 0.9 ) return 0.98627;
      else if ( fabs(eta) < 1.2 ) return 0.98085;
      else if ( fabs(eta) < 2.1 ) return 0.98685;
      else return 0.95988; }
  }
  else {
    if ( pt < 20.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98897;
      else if ( fabs(eta) < 1.2 ) return 0.98387;
      else if ( fabs(eta) < 2.1 ) return 0.98973;
      else return 0.97296; }
    else if ( pt < 25.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99016;
      else if ( fabs(eta) < 1.2 ) return 0.98206;
      else if ( fabs(eta) < 2.1 ) return 0.98942;
      else return 0.97406; }
    else if ( pt < 30.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98945;
      else if ( fabs(eta) < 1.2 ) return 0.98163;
      else if ( fabs(eta) < 2.1 ) return 0.99081;
      else return 0.97603; }
    else if ( pt < 40.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98906;
      else if ( fabs(eta) < 1.2 ) return 0.98268;
      else if ( fabs(eta) < 2.1 ) return 0.99092;
      else return 0.97534; }
    else if ( pt < 50.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98857;
      else if ( fabs(eta) < 1.2 ) return 0.98321;
      else if ( fabs(eta) < 2.1 ) return 0.99136;
      else return 0.97526; }
    else if ( pt < 60.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.98817;
      else if ( fabs(eta) < 1.2 ) return 0.98240;
      else if ( fabs(eta) < 2.1 ) return 0.99013;
      else return 0.97036; }
    else {
      if ( fabs(eta) < 0.9 ) return 0.98716;
      else if ( fabs(eta) < 1.2 ) return 0.98270;
      else if ( fabs(eta) < 2.1 ) return 0.98935;
      else return 0.96776; }
  }
}

double HardcodedConditions::GetMuonIdSF2018(double pt, double eta, std::string shift){
  if ( shift == "up" ) {
    if ( pt < 20.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99276;
      else if ( fabs(eta) < 1.2 ) return 0.98563;
      else if ( fabs(eta) < 2.1 ) return 0.99095;
      else return 0.97787; }
    else if ( pt < 25.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99388;
      else if ( fabs(eta) < 1.2 ) return 0.98420;
      else if ( fabs(eta) < 2.1 ) return 0.99066;
      else return 0.97438; }
    else if ( pt < 30.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99296;
      else if ( fabs(eta) < 1.2 ) return 0.98418;
      else if ( fabs(eta) < 2.1 ) return 0.99027;
      else return 0.97376; }
    else if ( pt < 40.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99250;
      else if ( fabs(eta) < 1.2 ) return 0.98463;
      else if ( fabs(eta) < 2.1 ) return 0.99033;
      else return 0.97247; }
    else if ( pt < 50.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99224;
      else if ( fabs(eta) < 1.2 ) return 0.98437;
      else if ( fabs(eta) < 2.1 ) return 0.99071;
      else return 0.97334; }
    else if ( pt < 60.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99244;
      else if ( fabs(eta) < 1.2 ) return 0.98409;
      else if ( fabs(eta) < 2.1 ) return 0.99080;
      else return 0.97171; }
    else {
      if ( fabs(eta) < 0.9 ) return 0.99150;
      else if ( fabs(eta) < 1.2 ) return 0.98308;
      else if ( fabs(eta) < 2.1 ) return 0.98983;
      else return 0.97194; }
  }
  else if ( shift == "down" ) {
    if ( pt < 20.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99042;
      else if ( fabs(eta) < 1.2 ) return 0.98302;
      else if ( fabs(eta) < 2.1 ) return 0.98909;
      else return 0.97208; }
    else if ( pt < 25.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99290;
      else if ( fabs(eta) < 1.2 ) return 0.98218;
      else if ( fabs(eta) < 2.1 ) return 0.98933;
      else return 0.97040; }
    else if ( pt < 30.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99205;
      else if ( fabs(eta) < 1.2 ) return 0.98197;
      else if ( fabs(eta) < 2.1 ) return 0.98936;
      else return 0.97235; }
    else if ( pt < 40.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99216;
      else if ( fabs(eta) < 1.2 ) return 0.98410;
      else if ( fabs(eta) < 2.1 ) return 0.98966;
      else return 0.97113; }
    else if ( pt < 50.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99165;
      else if ( fabs(eta) < 1.2 ) return 0.98362;
      else if ( fabs(eta) < 2.1 ) return 0.99007;
      else return 0.97121; }
    else if ( pt < 60.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99058;
      else if ( fabs(eta) < 1.2 ) return 0.98225;
      else if ( fabs(eta) < 2.1 ) return 0.98868;
      else return 0.96489; }
    else {
      if ( fabs(eta) < 0.9 ) return 0.99052;
      else if ( fabs(eta) < 1.2 ) return 0.98160;
      else if ( fabs(eta) < 2.1 ) return 0.98750;
      else return 0.96003; }
  }
  else {
    if ( pt < 20.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99159;
      else if ( fabs(eta) < 1.2 ) return 0.98433;
      else if ( fabs(eta) < 2.1 ) return 0.99002;
      else return 0.97497; }
    else if ( pt < 25.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99339;
      else if ( fabs(eta) < 1.2 ) return 0.98319;
      else if ( fabs(eta) < 2.1 ) return 0.99000;
      else return 0.97239; }
    else if ( pt < 30.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99251;
      else if ( fabs(eta) < 1.2 ) return 0.98308;
      else if ( fabs(eta) < 2.1 ) return 0.98982;
      else return 0.97306; }
    else if ( pt < 40.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99233;
      else if ( fabs(eta) < 1.2 ) return 0.98436;
      else if ( fabs(eta) < 2.1 ) return 0.99000;
      else return 0.97180; }
    else if ( pt < 50.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99195;
      else if ( fabs(eta) < 1.2 ) return 0.98399;
      else if ( fabs(eta) < 2.1 ) return 0.99039;
      else return 0.97227; }
    else if ( pt < 60.0 ) {
      if ( fabs(eta) < 0.9 ) return 0.99151;
      else if ( fabs(eta) < 1.2 ) return 0.98317;
      else if ( fabs(eta) < 2.1 ) return 0.98974;
      else return 0.96830; }
    else {
      if ( fabs(eta) < 0.9 ) return 0.99101;
      else if ( fabs(eta) < 1.2 ) return 0.98234;
      else if ( fabs(eta) < 2.1 ) return 0.98867;
      else return 0.96598; }
  }
}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|            MUON ISO SCALE FACTOR SECTION            |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

double HardcodedConditions::GetMuonIsoSF(double pt, double eta, std::string year)
{
  //The main getter for Muon Iso Scale Factors
  if      (year=="2016APV") return GetMuonIsoSF2016APV(pt, eta);
  else if (year=="2016") return GetMuonIsoSF2017(pt, eta);
  else if (year=="2017") return GetMuonIsoSF2017(pt, eta);
  else if (year=="2018") return GetMuonIsoSF2018(pt, eta);
  else return 0.;
} //end GetMuonIsoSF

double HardcodedConditions::GetMuonIsoSF2016APV(double pt, double eta){
  if( pt < 30 ){
    if( fabs(eta) < 0.9 ) return 0.991;
    else if( fabs(eta) < 1.2 ) return 0.996;
    else if( fabs(eta) < 2.1 ) return 0.995;
    else return 0.995;
  }
  else if( pt < 40 ){
    if( fabs(eta) < 0.9 ) return 0.997;
    else if( fabs(eta) < 1.2 ) return 0.999;
    else if( fabs(eta) < 2.1 ) return 0.999;
    else return 1.001;
  }
  else if( pt < 50 ){
    if( fabs(eta) < 0.9 ) return 0.998;
    else if( fabs(eta) < 1.2 ) return 0.998;
    else if( fabs(eta) < 2.1 ) return 0.999;
    else return 1.000;
  }
  else if( pt < 60 ){
    if( fabs(eta) < 0.9 ) return 0.999;
    else if( fabs(eta) < 1.2 ) return 0.999;
    else if( fabs(eta) < 2.1 ) return 1.000;
    else return 1.000;
  }
  else {
    if( fabs(eta) < 0.9 ) return 0.999;
    else if( fabs(eta) < 1.2 ) return 1.000;
    else if( fabs(eta) < 2.1 ) return 1.000;
    else return 0.999;
  }
}
  
double HardcodedConditions::GetMuonIsoSF2016(double pt, double eta){
  if( pt < 30 ){
    if( fabs(eta) < 0.9 ) return 0.985;
    else if( fabs(eta) < 1.2 ) return 0.990;
    else if( fabs(eta) < 2.1 ) return 0.993;
    else return 1.000;
  }
  else if( pt < 40 ){
    if( fabs(eta) < 0.9 ) return 0.995;
    else if( fabs(eta) < 1.2 ) return 0.997;
    else if( fabs(eta) < 2.1 ) return 0.999;
    else return 1.000;
  }
  else if( pt < 50 ){
    if( fabs(eta) < 0.9 ) return 0.997;
    else if( fabs(eta) < 1.2 ) return 0.998;
    else if( fabs(eta) < 2.1 ) return 0.998;
    else return 1.000;
  }
  else if( pt < 60 ){
    if( fabs(eta) < 0.9 ) return 0.998;
    else if( fabs(eta) < 1.2 ) return 0.998;
    else if( fabs(eta) < 2.1 ) return 0.998;
    else return 1.001;
  }
  else {
    if( fabs(eta) < 0.9 ) return 1.000;
    else if( fabs(eta) < 1.2 ) return 0.999;
    else if( fabs(eta) < 2.1 ) return 1.000;
    else return 1.001;
  }
}

double HardcodedConditions::GetMuonIsoSF2017(double pt, double eta){
  if( pt < 30 ){
    if( fabs(eta) < 0.9 ) return 0.992;
    else if( fabs(eta) < 1.2 ) return 0.991;
    else if( fabs(eta) < 2.1 ) return 1.001;
    else return 1.004;
  }
  else if( pt < 40 ){
    if( fabs(eta) < 0.9 ) return 0.996;
    else if( fabs(eta) < 1.2 ) return 0.998;
    else if( fabs(eta) < 2.1 ) return 1.001;
    else return 1.002;
  }
  else if( pt < 50 ){
    if( fabs(eta) < 0.9 ) return 0.998;
    else if( fabs(eta) < 1.2 ) return 0.998;
    else if( fabs(eta) < 2.1 ) return 1.000;
    else return 1.001;
  }
  else if( pt < 60 ){
    if( fabs(eta) < 0.9 ) return 0.998;
    else if( fabs(eta) < 1.2 ) return 0.999;
    else if( fabs(eta) < 2.1 ) return 0.999;
    else return 1.000;
  }
  else {
    if( fabs(eta) < 0.9 ) return 0.999;
    else if( fabs(eta) < 1.2 ) return 1.000;
    else if( fabs(eta) < 2.1 ) return 1.000;
    else return 1.000;
  }
}

double HardcodedConditions::GetMuonIsoSF2018(double pt, double eta){
  if( pt < 30 ){
    if( fabs(eta) < 0.9 ) return 0.990;
    else if( fabs(eta) < 1.2 ) return 0.982;
    else if( fabs(eta) < 2.1 ) return 0.998;
    else return 1.001;
  }
  else if( pt < 40 ){
    if( fabs(eta) < 0.9 ) return 0.996;
    else if( fabs(eta) < 1.2 ) return 0.994;
    else if( fabs(eta) < 2.1 ) return 0.999;
    else return 1.001;
  }
  else if( pt < 50 ){
    if( fabs(eta) < 0.9 ) return 0.997;
    else if( fabs(eta) < 1.2 ) return 0.996;
    else if( fabs(eta) < 2.1 ) return 0.999;
    else return 1.001;
  }
  else if( pt < 60 ){
    if( fabs(eta) < 0.9 ) return 0.998;
    else if( fabs(eta) < 1.2 ) return 0.998;
    else if( fabs(eta) < 2.1 ) return 0.999;
    else return 1.001;
  }
  else{
    if( fabs(eta) < 0.9 ) return 0.999;
    else if( fabs(eta) < 1.2 ) return 0.999;
    else if( fabs(eta) < 2.1 ) return 0.999;
    else return 1.003;
  }
}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|          MUON TRIGGER SCALE FACTOR SECTION          |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/
// https://gitlab.cern.ch/cms-nanoAOD/jsonpog-integration/-/tree/master/POG/MUO
// using correctionlib to extract SF
double HardcodedConditions::GetMuonTriggerSF(double pt, double eta, std::string year){
  //The main getter for Muon Trigger Scale Factors
  if      (year=="2016APV") return GetMuonTriggerSF2016APV(pt, eta);
  else if (year=="2016") return GetMuonTriggerSF2016(pt, eta);
  else if (year=="2017") return GetMuonTriggerSF2017(pt, eta);
  else if (year=="2018") return GetMuonTriggerSF2018(pt, eta);
  else return 0.;
}//end GetMuonTriggerSF

// using MUON JSON UL SF with WP: NUM_IsoMu24_or_IsoTkMu24_DEN_CutBasedIdTight_and_PFIsoTight
double HardcodedConditions::GetMuonTriggerSF2016APV(double pt, double eta){
  if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.96304;
    else if ( fabs(eta) < 1.2 ) return 0.95867;
    else if ( fabs(eta) < 2.1 ) return 0.98648;
    else return 0.92194; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.97151;
    else if ( fabs(eta) < 1.2 ) return 0.96745;
    else if ( fabs(eta) < 2.1 ) return 0.99701;
    else return 0.95287; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.97505;
    else if ( fabs(eta) < 1.2 ) return 0.97089;
    else if ( fabs(eta) < 2.1 ) return 1.00065;
    else return 0.96409; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.97619;
    else if ( fabs(eta) < 1.2 ) return 0.97171;
    else if ( fabs(eta) < 2.1 ) return 1.00216;
    else return 0.96804; }
  else if ( pt < 120.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.97734;
    else if ( fabs(eta) < 1.2 ) return 0.96963;
    else if ( fabs(eta) < 2.1 ) return 0.99902;
    else return 0.97116; }
  else {
    if ( fabs(eta) < 0.9 ) return 0.97600;
    else if ( fabs(eta) < 1.2 ) return 0.96280;
    else if ( fabs(eta) < 2.1 ) return 1.00112;
    else return 0.95996; }
}

// using MUON JSON UL SF with WP: NUM_IsoMu24_or_IsoTkMu24_DEN_CutBasedIdTight_and_PFIsoTight
double HardcodedConditions::GetMuonTriggerSF2016(double pt, double eta){
  if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.94981;
    else if ( fabs(eta) < 1.2 ) return 0.94617;
    else if ( fabs(eta) < 2.1 ) return 0.98561;
    else return 0.90565; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.95993;
    else if ( fabs(eta) < 1.2 ) return 0.95966;
    else if ( fabs(eta) < 2.1 ) return 0.99415;
    else return 0.94966; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.96273;
    else if ( fabs(eta) < 1.2 ) return 0.96311;
    else if ( fabs(eta) < 2.1 ) return 0.99637;
    else return 0.96072; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.96474;
    else if ( fabs(eta) < 1.2 ) return 0.96335;
    else if ( fabs(eta) < 2.1 ) return 0.99502;
    else return 0.95925; }
  else if ( pt < 120.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.96407;
    else if ( fabs(eta) < 1.2 ) return 0.96285;
    else if ( fabs(eta) < 2.1 ) return 0.98877;
    else return 0.96697; }
  else {
    if ( fabs(eta) < 0.9 ) return 0.96328;
    else if ( fabs(eta) < 1.2 ) return 0.95071;
    else if ( fabs(eta) < 2.1 ) return 0.98591;
    else return 0.96208; }
}

// using MUON JSON UL SF with WP: NUM_IsoMu27_DEN_CutBasedIdTight_and_PFIsoTight
double HardcodedConditions::GetMuonTriggerSF2017(double pt, double eta){
  if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.97173;
    else if ( fabs(eta) < 1.2 ) return 0.95179;
    else if ( fabs(eta) < 2.1 ) return 1.00589;
    else return 0.86627; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.97484;
    else if ( fabs(eta) < 1.2 ) return 0.95464;
    else if ( fabs(eta) < 2.1 ) return 1.01759;
    else return 0.93978; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.97441;
    else if ( fabs(eta) < 1.2 ) return 0.95416;
    else if ( fabs(eta) < 2.1 ) return 1.01677;
    else return 0.98320; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.97321;
    else if ( fabs(eta) < 1.2 ) return 0.95311;
    else if ( fabs(eta) < 2.1 ) return 1.01198;
    else return 1.00329; }
  else if ( pt < 120.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.97238;
    else if ( fabs(eta) < 1.2 ) return 0.94726;
    else if ( fabs(eta) < 2.1 ) return 1.00865;
    else return 1.00746; }
  else {
    if ( fabs(eta) < 0.9 ) return 0.96768;
    else if ( fabs(eta) < 1.2 ) return 0.93446;
    else if ( fabs(eta) < 2.1 ) return 1.00028;
    else return 1.03201; }
}

// using MUON JSON UL SF with WP: NUM_IsoMu24_DEN_CutBasedIdTight_and_PFIsoTight
double HardcodedConditions::GetMuonTriggerSF2018(double pt, double eta){
  if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.97309;
    else if ( fabs(eta) < 1.2 ) return 0.95852;
    else if ( fabs(eta) < 2.1 ) return 1.00619;
    else return 0.97231; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.97912;
    else if ( fabs(eta) < 1.2 ) return 0.97097;
    else if ( fabs(eta) < 2.1 ) return 1.00731;
    else return 0.99586; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.97978;
    else if ( fabs(eta) < 1.2 ) return 0.97359;
    else if ( fabs(eta) < 2.1 ) return 1.00545;
    else return 1.00743; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.97939;
    else if ( fabs(eta) < 1.2 ) return 0.97318;
    else if ( fabs(eta) < 2.1 ) return 1.00363;
    else return 1.00544; }
  else if ( pt < 120.0 ) {
    if ( fabs(eta) < 0.9 ) return 0.97904;
    else if ( fabs(eta) < 1.2 ) return 0.96896;
    else if ( fabs(eta) < 2.1 ) return 1.00097;
    else return 1.00952; }
  else {
    if ( fabs(eta) < 0.9 ) return 0.97782;
    else if ( fabs(eta) < 1.2 ) return 0.96836;
    else if ( fabs(eta) < 2.1 ) return 1.00110;
    else return 1.01257; }
}


/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|         HADRON TRIGGER SCALE FACTOR SECTION         |\  | |/|
 | `---' |                  (For Muon Channel)                 | `---' |
 |       |                                                     |       |
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

double HardcodedConditions::GetIsMHadronTriggerSF(double njets, double ht, std::string year){
  if      (year=="2016APV") return GetIsMHadronTriggerSF2016APV(njets, ht);
  else if (year=="2016") return GetIsMHadronTriggerSF2017(njets, ht);
  else if (year=="2017") return GetIsMHadronTriggerSF2017(njets, ht);
  else if (year=="2018") return GetIsMHadronTriggerSF2018(njets, ht);
  else return 0.;
}

double HardcodedConditions::GetIsMHadronTriggerSF2016APV(double njets, double ht){
  return 1.0;
}

double HardcodedConditions::GetIsMHadronTriggerSF2016(double njets, double ht){
  return 1.0;
}

double HardcodedConditions::GetIsMHadronTriggerSF2017(double njets, double ht){
  return 1.0;
}

double HardcodedConditions::GetIsMHadronTriggerSF2018(double njets, double ht){
  return 1.0;
}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|         MUON X-TRIGGER SCALE FACTOR SECTION         |\  | |/|
 | `---' |                    (from Nikos)                     | `---' |
 |       |                                                     |       |
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

double HardcodedConditions::GetMuonTriggerXSF(double ht, double pt, double eta, std::string year){
  if      (year=="2016APV") return GetMuonTriggerXSF2016APV(ht, pt, eta);
  else if (year=="2016") return GetMuonTriggerXSF2016(ht, pt, eta);
  else if (year=="2017") return GetMuonTriggerXSF2017(ht, pt, eta);
  else if (year=="2018") return GetMuonTriggerXSF2018(ht, pt, eta);
  else return 0. ;
}

double HardcodedConditions::GetMuonTriggerXSF2016APV(double ht, double pt, double eta){
if ( ht < 400.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.41829;
    else if ( fabs(eta) < 1.4442 ) return 1.40444;
    else if ( fabs(eta) < 1.5660 ) return 1.38017;
    else if ( fabs(eta) < 2.0000 ) return 1.35298;
    else return 1.41306; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99412;
    else if ( fabs(eta) < 1.4442 ) return 0.99220;
    else if ( fabs(eta) < 1.5660 ) return 1.00925;
    else if ( fabs(eta) < 2.0000 ) return 1.00066;
    else return 0.99591; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99661;
    else if ( fabs(eta) < 1.4442 ) return 0.99353;
    else if ( fabs(eta) < 1.5660 ) return 0.99592;
    else if ( fabs(eta) < 2.0000 ) return 0.98886;
    else return 1.00557; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00408;
    else if ( fabs(eta) < 1.4442 ) return 0.98951;
    else if ( fabs(eta) < 1.5660 ) return 1.00188;
    else if ( fabs(eta) < 2.0000 ) return 0.98923;
    else return 0.99940; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99659;
    else if ( fabs(eta) < 1.4442 ) return 0.99465;
    else if ( fabs(eta) < 1.5660 ) return 1.00313;
    else if ( fabs(eta) < 2.0000 ) return 0.99067;
    else return 0.98857; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99668;
    else if ( fabs(eta) < 1.4442 ) return 0.99306;
    else if ( fabs(eta) < 1.5660 ) return 0.99251;
    else if ( fabs(eta) < 2.0000 ) return 0.99353;
    else return 0.99452; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00268;
    else if ( fabs(eta) < 1.4442 ) return 0.99831;
    else if ( fabs(eta) < 1.5660 ) return 1.00454;
    else if ( fabs(eta) < 2.0000 ) return 0.99649;
    else return 0.98803; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00273;
    else if ( fabs(eta) < 1.4442 ) return 0.99735;
    else if ( fabs(eta) < 1.5660 ) return 0.99392;
    else if ( fabs(eta) < 2.0000 ) return 0.99406;
    else return 0.98868; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00177;
    else if ( fabs(eta) < 1.4442 ) return 0.99456;
    else if ( fabs(eta) < 1.5660 ) return 0.98984;
    else if ( fabs(eta) < 2.0000 ) return 0.99241;
    else return 0.99114; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00097;
    else if ( fabs(eta) < 1.4442 ) return 0.99396;
    else if ( fabs(eta) < 1.5660 ) return 0.98420;
    else if ( fabs(eta) < 2.0000 ) return 0.98723;
    else return 0.98986; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00065;
    else if ( fabs(eta) < 1.4442 ) return 0.99125;
    else if ( fabs(eta) < 1.5660 ) return 0.96863;
    else if ( fabs(eta) < 2.0000 ) return 0.99160;
    else return 0.98301; }
}
else if ( ht < 500.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.95504;
    else if ( fabs(eta) < 1.4442 ) return 0.95995;
    else if ( fabs(eta) < 1.5660 ) return 0.93837;
    else if ( fabs(eta) < 2.0000 ) return 0.94676;
    else return 0.96174; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.97235;
    else if ( fabs(eta) < 1.4442 ) return 0.96094;
    else if ( fabs(eta) < 1.5660 ) return 0.95058;
    else if ( fabs(eta) < 2.0000 ) return 0.96169;
    else return 0.95004; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.97915;
    else if ( fabs(eta) < 1.4442 ) return 0.97322;
    else if ( fabs(eta) < 1.5660 ) return 0.95853;
    else if ( fabs(eta) < 2.0000 ) return 0.96349;
    else return 0.95537; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.98864;
    else if ( fabs(eta) < 1.4442 ) return 0.98371;
    else if ( fabs(eta) < 1.5660 ) return 0.97244;
    else if ( fabs(eta) < 2.0000 ) return 0.96950;
    else return 0.97410; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.98897;
    else if ( fabs(eta) < 1.4442 ) return 0.98242;
    else if ( fabs(eta) < 1.5660 ) return 0.98229;
    else if ( fabs(eta) < 2.0000 ) return 0.97018;
    else return 0.97991; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.98819;
    else if ( fabs(eta) < 1.4442 ) return 0.99112;
    else if ( fabs(eta) < 1.5660 ) return 0.97161;
    else if ( fabs(eta) < 2.0000 ) return 0.97607;
    else return 0.97542; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00261;
    else if ( fabs(eta) < 1.4442 ) return 0.99684;
    else if ( fabs(eta) < 1.5660 ) return 0.99688;
    else if ( fabs(eta) < 2.0000 ) return 0.99321;
    else return 0.98793; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00200;
    else if ( fabs(eta) < 1.4442 ) return 0.99683;
    else if ( fabs(eta) < 1.5660 ) return 0.98684;
    else if ( fabs(eta) < 2.0000 ) return 0.98881;
    else return 0.99524; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00285;
    else if ( fabs(eta) < 1.4442 ) return 0.99694;
    else if ( fabs(eta) < 1.5660 ) return 0.98822;
    else if ( fabs(eta) < 2.0000 ) return 0.98979;
    else return 0.99028; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00113;
    else if ( fabs(eta) < 1.4442 ) return 0.99396;
    else if ( fabs(eta) < 1.5660 ) return 0.99152;
    else if ( fabs(eta) < 2.0000 ) return 0.99163;
    else return 0.98723; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00096;
    else if ( fabs(eta) < 1.4442 ) return 0.98986;
    else if ( fabs(eta) < 1.5660 ) return 0.97307;
    else if ( fabs(eta) < 2.0000 ) return 0.98413;
    else return 0.98103; }
}
else if ( ht < 1000.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.88066;
    else if ( fabs(eta) < 1.4442 ) return 0.88214;
    else if ( fabs(eta) < 1.5660 ) return 0.89223;
    else if ( fabs(eta) < 2.0000 ) return 0.87603;
    else return 0.88397; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.96979;
    else if ( fabs(eta) < 1.4442 ) return 0.96395;
    else if ( fabs(eta) < 1.5660 ) return 0.95048;
    else if ( fabs(eta) < 2.0000 ) return 0.96471;
    else return 0.95894; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.98584;
    else if ( fabs(eta) < 1.4442 ) return 0.97645;
    else if ( fabs(eta) < 1.5660 ) return 0.97669;
    else if ( fabs(eta) < 2.0000 ) return 0.96462;
    else return 0.96136; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.98380;
    else if ( fabs(eta) < 1.4442 ) return 0.98213;
    else if ( fabs(eta) < 1.5660 ) return 0.97289;
    else if ( fabs(eta) < 2.0000 ) return 0.97673;
    else return 0.97417; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.98950;
    else if ( fabs(eta) < 1.4442 ) return 0.98699;
    else if ( fabs(eta) < 1.5660 ) return 0.98490;
    else if ( fabs(eta) < 2.0000 ) return 0.97710;
    else return 0.97345; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99385;
    else if ( fabs(eta) < 1.4442 ) return 0.98547;
    else if ( fabs(eta) < 1.5660 ) return 0.97950;
    else if ( fabs(eta) < 2.0000 ) return 0.98450;
    else return 0.97806; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00466;
    else if ( fabs(eta) < 1.4442 ) return 0.99871;
    else if ( fabs(eta) < 1.5660 ) return 0.99977;
    else if ( fabs(eta) < 2.0000 ) return 1.00003;
    else return 0.98731; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00455;
    else if ( fabs(eta) < 1.4442 ) return 0.99990;
    else if ( fabs(eta) < 1.5660 ) return 1.00065;
    else if ( fabs(eta) < 2.0000 ) return 0.99466;
    else return 0.98568; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00422;
    else if ( fabs(eta) < 1.4442 ) return 1.00049;
    else if ( fabs(eta) < 1.5660 ) return 0.99704;
    else if ( fabs(eta) < 2.0000 ) return 0.99669;
    else return 0.99702; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00371;
    else if ( fabs(eta) < 1.4442 ) return 0.99691;
    else if ( fabs(eta) < 1.5660 ) return 0.99191;
    else if ( fabs(eta) < 2.0000 ) return 0.99273;
    else return 0.99108; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00315;
    else if ( fabs(eta) < 1.4442 ) return 0.99681;
    else if ( fabs(eta) < 1.5660 ) return 0.98237;
    else if ( fabs(eta) < 2.0000 ) return 0.99151;
    else return 0.99403; }
}
else if ( ht < 2000.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.85766;
    else if ( fabs(eta) < 1.4442 ) return 0.86197;
    else if ( fabs(eta) < 1.5660 ) return 0.89528;
    else if ( fabs(eta) < 2.0000 ) return 0.91819;
    else return 0.92086; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.97261;
    else if ( fabs(eta) < 1.4442 ) return 0.99067;
    else if ( fabs(eta) < 1.5660 ) return 0.96664;
    else if ( fabs(eta) < 2.0000 ) return 0.96633;
    else return 0.96642; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99057;
    else if ( fabs(eta) < 1.4442 ) return 0.98016;
    else if ( fabs(eta) < 1.5660 ) return 1.00387;
    else if ( fabs(eta) < 2.0000 ) return 0.98758;
    else return 0.99675; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.97538;
    else if ( fabs(eta) < 1.4442 ) return 0.98649;
    else if ( fabs(eta) < 1.5660 ) return 1.01872;
    else if ( fabs(eta) < 2.0000 ) return 1.01915;
    else return 0.99687; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99519;
    else if ( fabs(eta) < 1.4442 ) return 0.99393;
    else if ( fabs(eta) < 1.5660 ) return 0.95908;
    else if ( fabs(eta) < 2.0000 ) return 1.00051;
    else return 0.94302; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99166;
    else if ( fabs(eta) < 1.4442 ) return 0.99859;
    else if ( fabs(eta) < 1.5660 ) return 0.93596;
    else if ( fabs(eta) < 2.0000 ) return 0.98712;
    else return 0.99217; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00590;
    else if ( fabs(eta) < 1.4442 ) return 1.00729;
    else if ( fabs(eta) < 1.5660 ) return 1.00214;
    else if ( fabs(eta) < 2.0000 ) return 0.99661;
    else return 1.00234; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00933;
    else if ( fabs(eta) < 1.4442 ) return 1.00881;
    else if ( fabs(eta) < 1.5660 ) return 1.01411;
    else if ( fabs(eta) < 2.0000 ) return 0.99563;
    else return 1.00434; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00963;
    else if ( fabs(eta) < 1.4442 ) return 0.99650;
    else if ( fabs(eta) < 1.5660 ) return 0.99480;
    else if ( fabs(eta) < 2.0000 ) return 1.00097;
    else return 1.00342; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00632;
    else if ( fabs(eta) < 1.4442 ) return 1.00494;
    else if ( fabs(eta) < 1.5660 ) return 1.00489;
    else if ( fabs(eta) < 2.0000 ) return 0.99935;
    else return 0.99465; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00586;
    else if ( fabs(eta) < 1.4442 ) return 0.99563;
    else if ( fabs(eta) < 1.5660 ) return 0.99228;
    else if ( fabs(eta) < 2.0000 ) return 0.99633;
    else return 1.00000; }
}
else {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.05357;
    else if ( fabs(eta) < 1.4442 ) return 0.94587;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.50000;
    else return 0.75000; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00000;
    else if ( fabs(eta) < 1.4442 ) return 1.05882;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 0.83333; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00000;
    else if ( fabs(eta) < 1.4442 ) return 1.03279;
    else if ( fabs(eta) < 1.5660 ) return 1.07692;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 0.66667; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01739;
    else if ( fabs(eta) < 1.4442 ) return 1.02000;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 1.00000; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01739;
    else if ( fabs(eta) < 1.4442 ) return 1.00000;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.07143;
    else return 1.12500; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00980;
    else if ( fabs(eta) < 1.4442 ) return 1.00000;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 1.12500; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00990;
    else if ( fabs(eta) < 1.4442 ) return 1.00000;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.02941;
    else return 1.09091; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00000;
    else if ( fabs(eta) < 1.4442 ) return 1.00935;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 1.00000; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99540;
    else if ( fabs(eta) < 1.4442 ) return 1.01923;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 0.94706;
    else return 1.00000; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01699;
    else if ( fabs(eta) < 1.4442 ) return 1.00201;
    else if ( fabs(eta) < 1.5660 ) return 0.80000;
    else if ( fabs(eta) < 2.0000 ) return 1.06154;
    else return 1.16667; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.01499;
    else if ( fabs(eta) < 1.4442 ) return 1.02767;
    else if ( fabs(eta) < 1.5660 ) return 1.06667;
    else if ( fabs(eta) < 2.0000 ) return 1.07407;
    else return 1.00000; }
}
}

double HardcodedConditions::GetMuonTriggerXSF2016(double ht, double pt, double eta){
if ( ht < 400.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.76834;
    else if ( fabs(eta) < 1.4442 ) return 1.71800;
    else if ( fabs(eta) < 1.5660 ) return 1.70109;
    else if ( fabs(eta) < 2.0000 ) return 1.68637;
    else return 1.72479; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.04868;
    else if ( fabs(eta) < 1.4442 ) return 1.05242;
    else if ( fabs(eta) < 1.5660 ) return 1.07989;
    else if ( fabs(eta) < 2.0000 ) return 1.08234;
    else return 1.08704; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.03340;
    else if ( fabs(eta) < 1.4442 ) return 1.03611;
    else if ( fabs(eta) < 1.5660 ) return 1.06227;
    else if ( fabs(eta) < 2.0000 ) return 1.05972;
    else return 1.06141; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02571;
    else if ( fabs(eta) < 1.4442 ) return 1.02635;
    else if ( fabs(eta) < 1.5660 ) return 1.04214;
    else if ( fabs(eta) < 2.0000 ) return 1.04636;
    else return 1.04819; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02060;
    else if ( fabs(eta) < 1.4442 ) return 1.02217;
    else if ( fabs(eta) < 1.5660 ) return 1.03191;
    else if ( fabs(eta) < 2.0000 ) return 1.03632;
    else return 1.03861; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01436;
    else if ( fabs(eta) < 1.4442 ) return 1.01662;
    else if ( fabs(eta) < 1.5660 ) return 1.02808;
    else if ( fabs(eta) < 2.0000 ) return 1.02676;
    else return 1.02431; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00479;
    else if ( fabs(eta) < 1.4442 ) return 1.00595;
    else if ( fabs(eta) < 1.5660 ) return 1.01808;
    else if ( fabs(eta) < 2.0000 ) return 1.01796;
    else return 1.01785; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00411;
    else if ( fabs(eta) < 1.4442 ) return 1.00492;
    else if ( fabs(eta) < 1.5660 ) return 1.01066;
    else if ( fabs(eta) < 2.0000 ) return 1.01283;
    else return 1.01368; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00389;
    else if ( fabs(eta) < 1.4442 ) return 1.00402;
    else if ( fabs(eta) < 1.5660 ) return 1.00721;
    else if ( fabs(eta) < 2.0000 ) return 1.01010;
    else return 1.00749; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00325;
    else if ( fabs(eta) < 1.4442 ) return 1.00302;
    else if ( fabs(eta) < 1.5660 ) return 1.00537;
    else if ( fabs(eta) < 2.0000 ) return 1.00752;
    else return 1.00476; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00198;
    else if ( fabs(eta) < 1.4442 ) return 1.00192;
    else if ( fabs(eta) < 1.5660 ) return 1.00381;
    else if ( fabs(eta) < 2.0000 ) return 1.00698;
    else return 1.00093; }
}
else if ( ht < 500.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.09864;
    else if ( fabs(eta) < 1.4442 ) return 1.09492;
    else if ( fabs(eta) < 1.5660 ) return 1.09567;
    else if ( fabs(eta) < 2.0000 ) return 1.09545;
    else return 1.10163; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00905;
    else if ( fabs(eta) < 1.4442 ) return 1.01047;
    else if ( fabs(eta) < 1.5660 ) return 1.01593;
    else if ( fabs(eta) < 2.0000 ) return 1.02086;
    else return 1.01760; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00660;
    else if ( fabs(eta) < 1.4442 ) return 1.00686;
    else if ( fabs(eta) < 1.5660 ) return 1.00936;
    else if ( fabs(eta) < 2.0000 ) return 1.01517;
    else return 1.01492; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00632;
    else if ( fabs(eta) < 1.4442 ) return 1.00648;
    else if ( fabs(eta) < 1.5660 ) return 1.00981;
    else if ( fabs(eta) < 2.0000 ) return 1.01554;
    else return 1.01205; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00566;
    else if ( fabs(eta) < 1.4442 ) return 1.00654;
    else if ( fabs(eta) < 1.5660 ) return 1.00842;
    else if ( fabs(eta) < 2.0000 ) return 1.01517;
    else return 1.01003; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00562;
    else if ( fabs(eta) < 1.4442 ) return 1.00596;
    else if ( fabs(eta) < 1.5660 ) return 1.00895;
    else if ( fabs(eta) < 2.0000 ) return 1.01334;
    else return 1.00980; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00462;
    else if ( fabs(eta) < 1.4442 ) return 1.00458;
    else if ( fabs(eta) < 1.5660 ) return 1.00792;
    else if ( fabs(eta) < 2.0000 ) return 1.01172;
    else return 1.00818; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00450;
    else if ( fabs(eta) < 1.4442 ) return 1.00479;
    else if ( fabs(eta) < 1.5660 ) return 1.00751;
    else if ( fabs(eta) < 2.0000 ) return 1.01140;
    else return 1.00737; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00445;
    else if ( fabs(eta) < 1.4442 ) return 1.00466;
    else if ( fabs(eta) < 1.5660 ) return 1.00716;
    else if ( fabs(eta) < 2.0000 ) return 1.01030;
    else return 1.00780; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00471;
    else if ( fabs(eta) < 1.4442 ) return 1.00380;
    else if ( fabs(eta) < 1.5660 ) return 1.00667;
    else if ( fabs(eta) < 2.0000 ) return 1.00950;
    else return 1.00741; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00353;
    else if ( fabs(eta) < 1.4442 ) return 1.00352;
    else if ( fabs(eta) < 1.5660 ) return 1.00103;
    else if ( fabs(eta) < 2.0000 ) return 1.00510;
    else return 1.01057; }
}
else if ( ht < 1000.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00654;
    else if ( fabs(eta) < 1.4442 ) return 1.01044;
    else if ( fabs(eta) < 1.5660 ) return 1.01161;
    else if ( fabs(eta) < 2.0000 ) return 1.02062;
    else return 1.01681; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00647;
    else if ( fabs(eta) < 1.4442 ) return 1.00831;
    else if ( fabs(eta) < 1.5660 ) return 1.01330;
    else if ( fabs(eta) < 2.0000 ) return 1.01856;
    else return 1.01479; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00600;
    else if ( fabs(eta) < 1.4442 ) return 1.00807;
    else if ( fabs(eta) < 1.5660 ) return 1.01260;
    else if ( fabs(eta) < 2.0000 ) return 1.01955;
    else return 1.01418; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00702;
    else if ( fabs(eta) < 1.4442 ) return 1.00650;
    else if ( fabs(eta) < 1.5660 ) return 1.00941;
    else if ( fabs(eta) < 2.0000 ) return 1.01794;
    else return 1.01224; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00731;
    else if ( fabs(eta) < 1.4442 ) return 1.00839;
    else if ( fabs(eta) < 1.5660 ) return 1.01124;
    else if ( fabs(eta) < 2.0000 ) return 1.01845;
    else return 1.01386; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00735;
    else if ( fabs(eta) < 1.4442 ) return 1.00689;
    else if ( fabs(eta) < 1.5660 ) return 1.01214;
    else if ( fabs(eta) < 2.0000 ) return 1.01873;
    else return 1.01214; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00687;
    else if ( fabs(eta) < 1.4442 ) return 1.00703;
    else if ( fabs(eta) < 1.5660 ) return 1.01191;
    else if ( fabs(eta) < 2.0000 ) return 1.01782;
    else return 1.01197; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00691;
    else if ( fabs(eta) < 1.4442 ) return 1.00696;
    else if ( fabs(eta) < 1.5660 ) return 1.00928;
    else if ( fabs(eta) < 2.0000 ) return 1.01723;
    else return 1.01177; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00686;
    else if ( fabs(eta) < 1.4442 ) return 1.00682;
    else if ( fabs(eta) < 1.5660 ) return 1.00936;
    else if ( fabs(eta) < 2.0000 ) return 1.01718;
    else return 1.01064; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00758;
    else if ( fabs(eta) < 1.4442 ) return 1.00705;
    else if ( fabs(eta) < 1.5660 ) return 1.00984;
    else if ( fabs(eta) < 2.0000 ) return 1.01595;
    else return 1.01023; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00729;
    else if ( fabs(eta) < 1.4442 ) return 1.00641;
    else if ( fabs(eta) < 1.5660 ) return 1.00959;
    else if ( fabs(eta) < 2.0000 ) return 1.01510;
    else return 1.00784; }
}
else if ( ht < 2000.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01026;
    else if ( fabs(eta) < 1.4442 ) return 1.01741;
    else if ( fabs(eta) < 1.5660 ) return 1.02372;
    else if ( fabs(eta) < 2.0000 ) return 1.01761;
    else return 1.02436; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00987;
    else if ( fabs(eta) < 1.4442 ) return 1.01553;
    else if ( fabs(eta) < 1.5660 ) return 1.00364;
    else if ( fabs(eta) < 2.0000 ) return 1.02378;
    else return 1.02857; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01003;
    else if ( fabs(eta) < 1.4442 ) return 1.01164;
    else if ( fabs(eta) < 1.5660 ) return 1.02632;
    else if ( fabs(eta) < 2.0000 ) return 1.02385;
    else return 1.01008; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00557;
    else if ( fabs(eta) < 1.4442 ) return 1.01170;
    else if ( fabs(eta) < 1.5660 ) return 1.01250;
    else if ( fabs(eta) < 2.0000 ) return 1.03451;
    else return 1.01592; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00898;
    else if ( fabs(eta) < 1.4442 ) return 1.01233;
    else if ( fabs(eta) < 1.5660 ) return 1.02088;
    else if ( fabs(eta) < 2.0000 ) return 1.02855;
    else return 1.01855; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01232;
    else if ( fabs(eta) < 1.4442 ) return 1.01071;
    else if ( fabs(eta) < 1.5660 ) return 1.01995;
    else if ( fabs(eta) < 2.0000 ) return 1.02697;
    else return 1.01383; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00806;
    else if ( fabs(eta) < 1.4442 ) return 1.01022;
    else if ( fabs(eta) < 1.5660 ) return 1.01275;
    else if ( fabs(eta) < 2.0000 ) return 1.02378;
    else return 1.02086; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00957;
    else if ( fabs(eta) < 1.4442 ) return 1.01031;
    else if ( fabs(eta) < 1.5660 ) return 1.01463;
    else if ( fabs(eta) < 2.0000 ) return 1.03006;
    else return 1.02616; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00939;
    else if ( fabs(eta) < 1.4442 ) return 1.01046;
    else if ( fabs(eta) < 1.5660 ) return 1.01937;
    else if ( fabs(eta) < 2.0000 ) return 1.02344;
    else return 1.01602; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01145;
    else if ( fabs(eta) < 1.4442 ) return 1.01085;
    else if ( fabs(eta) < 1.5660 ) return 1.01729;
    else if ( fabs(eta) < 2.0000 ) return 1.03456;
    else return 1.02083; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.01182;
    else if ( fabs(eta) < 1.4442 ) return 1.01078;
    else if ( fabs(eta) < 1.5660 ) return 1.01890;
    else if ( fabs(eta) < 2.0000 ) return 1.02256;
    else return 1.01015; }
}
else {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00704;
    else if ( fabs(eta) < 1.4442 ) return 1.00000;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.11538;
    else return 1.06667; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01460;
    else if ( fabs(eta) < 1.4442 ) return 1.02703;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.03704;
    else return 1.00000; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01351;
    else if ( fabs(eta) < 1.4442 ) return 1.03333;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.03571;
    else return 1.00000; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00800;
    else if ( fabs(eta) < 1.4442 ) return 1.01370;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 1.00000; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.95568;
    else if ( fabs(eta) < 1.4442 ) return 1.00000;
    else if ( fabs(eta) < 1.5660 ) return 1.12500;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 1.18182; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.03571;
    else if ( fabs(eta) < 1.4442 ) return 1.00000;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.08333;
    else return 1.00000; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00794;
    else if ( fabs(eta) < 1.4442 ) return 1.00000;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.02778;
    else return 1.00000; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00862;
    else if ( fabs(eta) < 1.4442 ) return 1.00893;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 1.00000; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01631;
    else if ( fabs(eta) < 1.4442 ) return 1.02290;
    else if ( fabs(eta) < 1.5660 ) return 1.03704;
    else if ( fabs(eta) < 2.0000 ) return 1.01220;
    else return 1.05263; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01284;
    else if ( fabs(eta) < 1.4442 ) return 1.01139;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 1.04545; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.01062;
    else if ( fabs(eta) < 1.4442 ) return 1.01846;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 1.00000; }
}
}
  
double HardcodedConditions::GetMuonTriggerXSF2017(double ht, double pt, double eta){
  double scaleCDEF = 38.783 / 43.841;
if ( ht < 400.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.13783 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 1.10289 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.28953 * scaleCDEF;
    else if ( fabs(eta) < 2.0000 ) return 1.33102 * scaleCDEF;
    else return 1.49381 * scaleCDEF; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01915;
    else if ( fabs(eta) < 1.4442 ) return 1.00439;
    else if ( fabs(eta) < 1.5660 ) return 1.01275;
    else if ( fabs(eta) < 2.0000 ) return 1.03100;
    else return 1.05844; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00771;
    else if ( fabs(eta) < 1.4442 ) return 1.00908;
    else if ( fabs(eta) < 1.5660 ) return 1.01665;
    else if ( fabs(eta) < 2.0000 ) return 1.01385;
    else return 1.01174; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00678;
    else if ( fabs(eta) < 1.4442 ) return 1.00775;
    else if ( fabs(eta) < 1.5660 ) return 1.01012;
    else if ( fabs(eta) < 2.0000 ) return 1.01681;
    else return 1.01369; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00665;
    else if ( fabs(eta) < 1.4442 ) return 1.00772;
    else if ( fabs(eta) < 1.5660 ) return 1.00864;
    else if ( fabs(eta) < 2.0000 ) return 1.01331;
    else return 1.01609; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00590;
    else if ( fabs(eta) < 1.4442 ) return 1.00730;
    else if ( fabs(eta) < 1.5660 ) return 1.01062;
    else if ( fabs(eta) < 2.0000 ) return 1.01377;
    else return 1.01546; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00203;
    else if ( fabs(eta) < 1.4442 ) return 1.00348;
    else if ( fabs(eta) < 1.5660 ) return 1.00519;
    else if ( fabs(eta) < 2.0000 ) return 1.00899;
    else return 1.01220; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00222;
    else if ( fabs(eta) < 1.4442 ) return 1.00309;
    else if ( fabs(eta) < 1.5660 ) return 1.00598;
    else if ( fabs(eta) < 2.0000 ) return 1.00848;
    else return 1.01157; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00205;
    else if ( fabs(eta) < 1.4442 ) return 1.00296;
    else if ( fabs(eta) < 1.5660 ) return 1.00437;
    else if ( fabs(eta) < 2.0000 ) return 1.00755;
    else return 1.01052; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00156;
    else if ( fabs(eta) < 1.4442 ) return 1.00124;
    else if ( fabs(eta) < 1.5660 ) return 1.00151;
    else if ( fabs(eta) < 2.0000 ) return 1.00441;
    else return 1.00515; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00141;
    else if ( fabs(eta) < 1.4442 ) return 1.00108;
    else if ( fabs(eta) < 1.5660 ) return 1.00187;
    else if ( fabs(eta) < 2.0000 ) return 1.00398;
    else return 1.00452; }
}
else if ( ht < 500.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.12706 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 1.12342 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.16912 * scaleCDEF;
    else if ( fabs(eta) < 2.0000 ) return 1.20340 * scaleCDEF;
    else return 1.31291 * scaleCDEF; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.98179;
    else if ( fabs(eta) < 1.4442 ) return 0.98807;
    else if ( fabs(eta) < 1.5660 ) return 1.01530;
    else if ( fabs(eta) < 2.0000 ) return 1.02165;
    else return 1.03564; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01086;
    else if ( fabs(eta) < 1.4442 ) return 1.01339;
    else if ( fabs(eta) < 1.5660 ) return 1.01596;
    else if ( fabs(eta) < 2.0000 ) return 1.01988;
    else return 1.02469; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00935;
    else if ( fabs(eta) < 1.4442 ) return 1.01263;
    else if ( fabs(eta) < 1.5660 ) return 1.01834;
    else if ( fabs(eta) < 2.0000 ) return 1.01854;
    else return 1.02326; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00791;
    else if ( fabs(eta) < 1.4442 ) return 1.00978;
    else if ( fabs(eta) < 1.5660 ) return 1.01301;
    else if ( fabs(eta) < 2.0000 ) return 1.01963;
    else return 1.02442; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00715;
    else if ( fabs(eta) < 1.4442 ) return 1.00832;
    else if ( fabs(eta) < 1.5660 ) return 1.01203;
    else if ( fabs(eta) < 2.0000 ) return 1.01695;
    else return 1.01981; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00311;
    else if ( fabs(eta) < 1.4442 ) return 1.00540;
    else if ( fabs(eta) < 1.5660 ) return 1.00582;
    else if ( fabs(eta) < 2.0000 ) return 1.01263;
    else return 1.01416; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00336;
    else if ( fabs(eta) < 1.4442 ) return 1.00503;
    else if ( fabs(eta) < 1.5660 ) return 1.00395;
    else if ( fabs(eta) < 2.0000 ) return 1.01023;
    else return 1.01309; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00340;
    else if ( fabs(eta) < 1.4442 ) return 1.00469;
    else if ( fabs(eta) < 1.5660 ) return 1.00356;
    else if ( fabs(eta) < 2.0000 ) return 1.00867;
    else return 1.01226; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00288;
    else if ( fabs(eta) < 1.4442 ) return 1.00223;
    else if ( fabs(eta) < 1.5660 ) return 1.00261;
    else if ( fabs(eta) < 2.0000 ) return 1.00646;
    else return 1.00859; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00222;
    else if ( fabs(eta) < 1.4442 ) return 1.00198;
    else if ( fabs(eta) < 1.5660 ) return 1.00331;
    else if ( fabs(eta) < 2.0000 ) return 1.00402;
    else return 1.00548; }
}
else if ( ht < 1000.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99490 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 1.00215 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00479 * scaleCDEF;
    else if ( fabs(eta) < 2.0000 ) return 1.01042 * scaleCDEF;
    else return 1.01364 * scaleCDEF; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.96461;
    else if ( fabs(eta) < 1.4442 ) return 0.97431;
    else if ( fabs(eta) < 1.5660 ) return 0.97321;
    else if ( fabs(eta) < 2.0000 ) return 0.98473;
    else return 0.99604; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00602;
    else if ( fabs(eta) < 1.4442 ) return 1.01282;
    else if ( fabs(eta) < 1.5660 ) return 1.01727;
    else if ( fabs(eta) < 2.0000 ) return 1.01827;
    else return 1.01751; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00661;
    else if ( fabs(eta) < 1.4442 ) return 1.01251;
    else if ( fabs(eta) < 1.5660 ) return 1.01436;
    else if ( fabs(eta) < 2.0000 ) return 1.01794;
    else return 1.02187; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00612;
    else if ( fabs(eta) < 1.4442 ) return 1.01233;
    else if ( fabs(eta) < 1.5660 ) return 1.01107;
    else if ( fabs(eta) < 2.0000 ) return 1.01775;
    else return 1.02169; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00678;
    else if ( fabs(eta) < 1.4442 ) return 1.01046;
    else if ( fabs(eta) < 1.5660 ) return 1.01064;
    else if ( fabs(eta) < 2.0000 ) return 1.01517;
    else return 1.01644; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00667;
    else if ( fabs(eta) < 1.4442 ) return 1.00960;
    else if ( fabs(eta) < 1.5660 ) return 1.00860;
    else if ( fabs(eta) < 2.0000 ) return 1.01669;
    else return 1.01841; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00633;
    else if ( fabs(eta) < 1.4442 ) return 1.00879;
    else if ( fabs(eta) < 1.5660 ) return 1.00748;
    else if ( fabs(eta) < 2.0000 ) return 1.01490;
    else return 1.01784; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00649;
    else if ( fabs(eta) < 1.4442 ) return 1.00869;
    else if ( fabs(eta) < 1.5660 ) return 1.00793;
    else if ( fabs(eta) < 2.0000 ) return 1.01516;
    else return 1.01781; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00521;
    else if ( fabs(eta) < 1.4442 ) return 1.00542;
    else if ( fabs(eta) < 1.5660 ) return 1.00316;
    else if ( fabs(eta) < 2.0000 ) return 1.01294;
    else return 1.01390; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00544;
    else if ( fabs(eta) < 1.4442 ) return 1.00408;
    else if ( fabs(eta) < 1.5660 ) return 1.00287;
    else if ( fabs(eta) < 2.0000 ) return 1.01191;
    else return 1.01196; }
}
else if ( ht < 2000.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.99483 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 1.00819 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.00882 * scaleCDEF;
    else if ( fabs(eta) < 2.0000 ) return 1.00689 * scaleCDEF;
    else return 1.02030 * scaleCDEF; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.97862;
    else if ( fabs(eta) < 1.4442 ) return 0.98746;
    else if ( fabs(eta) < 1.5660 ) return 0.98236;
    else if ( fabs(eta) < 2.0000 ) return 1.00495;
    else return 1.01675; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00999;
    else if ( fabs(eta) < 1.4442 ) return 1.02116;
    else if ( fabs(eta) < 1.5660 ) return 1.03417;
    else if ( fabs(eta) < 2.0000 ) return 1.02879;
    else return 1.02923; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01055;
    else if ( fabs(eta) < 1.4442 ) return 1.01811;
    else if ( fabs(eta) < 1.5660 ) return 1.02355;
    else if ( fabs(eta) < 2.0000 ) return 1.02798;
    else return 1.02764; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00950;
    else if ( fabs(eta) < 1.4442 ) return 1.02103;
    else if ( fabs(eta) < 1.5660 ) return 1.03151;
    else if ( fabs(eta) < 2.0000 ) return 1.02330;
    else return 1.03383; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01413;
    else if ( fabs(eta) < 1.4442 ) return 1.01838;
    else if ( fabs(eta) < 1.5660 ) return 1.01645;
    else if ( fabs(eta) < 2.0000 ) return 1.03155;
    else return 1.03347; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01063;
    else if ( fabs(eta) < 1.4442 ) return 1.01509;
    else if ( fabs(eta) < 1.5660 ) return 1.02199;
    else if ( fabs(eta) < 2.0000 ) return 1.02610;
    else return 1.03731; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01196;
    else if ( fabs(eta) < 1.4442 ) return 1.01685;
    else if ( fabs(eta) < 1.5660 ) return 1.01820;
    else if ( fabs(eta) < 2.0000 ) return 1.02156;
    else return 1.02096; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01085;
    else if ( fabs(eta) < 1.4442 ) return 1.01689;
    else if ( fabs(eta) < 1.5660 ) return 1.01258;
    else if ( fabs(eta) < 2.0000 ) return 1.02313;
    else return 1.03278; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00898;
    else if ( fabs(eta) < 1.4442 ) return 1.01164;
    else if ( fabs(eta) < 1.5660 ) return 1.00891;
    else if ( fabs(eta) < 2.0000 ) return 1.02603;
    else return 1.02094; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.01077;
    else if ( fabs(eta) < 1.4442 ) return 1.01280;
    else if ( fabs(eta) < 1.5660 ) return 1.01058;
    else if ( fabs(eta) < 2.0000 ) return 1.01818;
    else return 1.03279; }
}
else {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 0.97809 * scaleCDEF;
    else if ( fabs(eta) < 1.4442 ) return 1.01835 * scaleCDEF;
    else if ( fabs(eta) < 1.5660 ) return 1.03333 * scaleCDEF;
    else if ( fabs(eta) < 2.0000 ) return 0.95881 * scaleCDEF;
    else return 1.03030 * scaleCDEF; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00503;
    else if ( fabs(eta) < 1.4442 ) return 0.96055;
    else if ( fabs(eta) < 1.5660 ) return 1.07692;
    else if ( fabs(eta) < 2.0000 ) return 0.93333;
    else return 0.90909; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00448;
    else if ( fabs(eta) < 1.4442 ) return 1.02804;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.02439;
    else return 1.06667; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.02970;
    else if ( fabs(eta) < 1.4442 ) return 1.01681;
    else if ( fabs(eta) < 1.5660 ) return 1.08333;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 1.08333; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00995;
    else if ( fabs(eta) < 1.4442 ) return 1.00000;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.03226;
    else return 1.00000; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00610;
    else if ( fabs(eta) < 1.4442 ) return 1.00000;
    else if ( fabs(eta) < 1.5660 ) return 1.08333;
    else if ( fabs(eta) < 2.0000 ) return 1.08000;
    else return 1.00000; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00000;
    else if ( fabs(eta) < 1.4442 ) return 1.02577;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.06061;
    else return 1.04000; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01381;
    else if ( fabs(eta) < 1.4442 ) return 1.01667;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00000;
    else return 1.00000; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01173;
    else if ( fabs(eta) < 1.4442 ) return 1.01478;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.02128;
    else return 1.03030; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01767;
    else if ( fabs(eta) < 1.4442 ) return 1.00094;
    else if ( fabs(eta) < 1.5660 ) return 1.01351;
    else if ( fabs(eta) < 2.0000 ) return 1.02190;
    else return 1.06897; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.01122;
    else if ( fabs(eta) < 1.4442 ) return 1.03191;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.05714;
    else return 1.00000; }
}
}

double HardcodedConditions::GetMuonTriggerXSF2018(double ht, double pt, double eta){
if ( ht < 400.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.04331;
    else if ( fabs(eta) < 1.4442 ) return 1.04971;
    else if ( fabs(eta) < 1.5660 ) return 1.06463;
    else if ( fabs(eta) < 2.0000 ) return 1.06107;
    else return 1.06901; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00382;
    else if ( fabs(eta) < 1.4442 ) return 1.00501;
    else if ( fabs(eta) < 1.5660 ) return 1.00749;
    else if ( fabs(eta) < 2.0000 ) return 1.00872;
    else return 1.01183; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00404;
    else if ( fabs(eta) < 1.4442 ) return 1.00521;
    else if ( fabs(eta) < 1.5660 ) return 1.00723;
    else if ( fabs(eta) < 2.0000 ) return 1.00858;
    else return 1.01199; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00379;
    else if ( fabs(eta) < 1.4442 ) return 1.00451;
    else if ( fabs(eta) < 1.5660 ) return 1.00616;
    else if ( fabs(eta) < 2.0000 ) return 1.00745;
    else return 1.01105; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00371;
    else if ( fabs(eta) < 1.4442 ) return 1.00481;
    else if ( fabs(eta) < 1.5660 ) return 1.00540;
    else if ( fabs(eta) < 2.0000 ) return 1.00866;
    else return 1.01043; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00310;
    else if ( fabs(eta) < 1.4442 ) return 1.00364;
    else if ( fabs(eta) < 1.5660 ) return 1.00531;
    else if ( fabs(eta) < 2.0000 ) return 1.00740;
    else return 1.01046; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00140;
    else if ( fabs(eta) < 1.4442 ) return 1.00193;
    else if ( fabs(eta) < 1.5660 ) return 1.00207;
    else if ( fabs(eta) < 2.0000 ) return 1.00584;
    else return 1.00799; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00150;
    else if ( fabs(eta) < 1.4442 ) return 1.00188;
    else if ( fabs(eta) < 1.5660 ) return 1.00226;
    else if ( fabs(eta) < 2.0000 ) return 1.00503;
    else return 1.00822; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00167;
    else if ( fabs(eta) < 1.4442 ) return 1.00175;
    else if ( fabs(eta) < 1.5660 ) return 1.00260;
    else if ( fabs(eta) < 2.0000 ) return 1.00519;
    else return 1.00722; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00120;
    else if ( fabs(eta) < 1.4442 ) return 1.00127;
    else if ( fabs(eta) < 1.5660 ) return 1.00121;
    else if ( fabs(eta) < 2.0000 ) return 1.00273;
    else return 1.00350; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00081;
    else if ( fabs(eta) < 1.4442 ) return 1.00003;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00262;
    else return 1.00348; }
}
else if ( ht < 500.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.07407;
    else if ( fabs(eta) < 1.4442 ) return 1.07787;
    else if ( fabs(eta) < 1.5660 ) return 1.08220;
    else if ( fabs(eta) < 2.0000 ) return 1.08438;
    else return 1.10321; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00896;
    else if ( fabs(eta) < 1.4442 ) return 1.01042;
    else if ( fabs(eta) < 1.5660 ) return 1.01123;
    else if ( fabs(eta) < 2.0000 ) return 1.01735;
    else return 1.02128; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00797;
    else if ( fabs(eta) < 1.4442 ) return 1.00891;
    else if ( fabs(eta) < 1.5660 ) return 1.00920;
    else if ( fabs(eta) < 2.0000 ) return 1.01541;
    else return 1.01804; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00682;
    else if ( fabs(eta) < 1.4442 ) return 1.00687;
    else if ( fabs(eta) < 1.5660 ) return 1.00870;
    else if ( fabs(eta) < 2.0000 ) return 1.01290;
    else return 1.01698; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00563;
    else if ( fabs(eta) < 1.4442 ) return 1.00579;
    else if ( fabs(eta) < 1.5660 ) return 1.00599;
    else if ( fabs(eta) < 2.0000 ) return 1.01120;
    else return 1.01421; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00484;
    else if ( fabs(eta) < 1.4442 ) return 1.00488;
    else if ( fabs(eta) < 1.5660 ) return 1.00463;
    else if ( fabs(eta) < 2.0000 ) return 1.00989;
    else return 1.01194; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00271;
    else if ( fabs(eta) < 1.4442 ) return 1.00281;
    else if ( fabs(eta) < 1.5660 ) return 1.00313;
    else if ( fabs(eta) < 2.0000 ) return 1.00735;
    else return 1.01079; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00267;
    else if ( fabs(eta) < 1.4442 ) return 1.00261;
    else if ( fabs(eta) < 1.5660 ) return 1.00278;
    else if ( fabs(eta) < 2.0000 ) return 1.00680;
    else return 1.00877; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00252;
    else if ( fabs(eta) < 1.4442 ) return 1.00227;
    else if ( fabs(eta) < 1.5660 ) return 1.00168;
    else if ( fabs(eta) < 2.0000 ) return 1.00600;
    else return 1.00755; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00211;
    else if ( fabs(eta) < 1.4442 ) return 1.00148;
    else if ( fabs(eta) < 1.5660 ) return 1.00085;
    else if ( fabs(eta) < 2.0000 ) return 1.00436;
    else return 1.00508; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00177;
    else if ( fabs(eta) < 1.4442 ) return 1.00132;
    else if ( fabs(eta) < 1.5660 ) return 1.00099;
    else if ( fabs(eta) < 2.0000 ) return 1.00273;
    else return 1.00229; }
}
else if ( ht < 1000.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00557;
    else if ( fabs(eta) < 1.4442 ) return 1.00740;
    else if ( fabs(eta) < 1.5660 ) return 1.00674;
    else if ( fabs(eta) < 2.0000 ) return 1.01248;
    else return 1.01714; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00372;
    else if ( fabs(eta) < 1.4442 ) return 1.00362;
    else if ( fabs(eta) < 1.5660 ) return 1.00265;
    else if ( fabs(eta) < 2.0000 ) return 1.01093;
    else return 1.01353; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00450;
    else if ( fabs(eta) < 1.4442 ) return 1.00360;
    else if ( fabs(eta) < 1.5660 ) return 1.00214;
    else if ( fabs(eta) < 2.0000 ) return 1.01063;
    else return 1.01481; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00420;
    else if ( fabs(eta) < 1.4442 ) return 1.00424;
    else if ( fabs(eta) < 1.5660 ) return 1.00306;
    else if ( fabs(eta) < 2.0000 ) return 1.01116;
    else return 1.01299; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00438;
    else if ( fabs(eta) < 1.4442 ) return 1.00400;
    else if ( fabs(eta) < 1.5660 ) return 1.00279;
    else if ( fabs(eta) < 2.0000 ) return 1.01057;
    else return 1.01366; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00389;
    else if ( fabs(eta) < 1.4442 ) return 1.00401;
    else if ( fabs(eta) < 1.5660 ) return 1.00175;
    else if ( fabs(eta) < 2.0000 ) return 1.00978;
    else return 1.01442; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00437;
    else if ( fabs(eta) < 1.4442 ) return 1.00411;
    else if ( fabs(eta) < 1.5660 ) return 1.00239;
    else if ( fabs(eta) < 2.0000 ) return 1.01059;
    else return 1.01235; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00410;
    else if ( fabs(eta) < 1.4442 ) return 1.00418;
    else if ( fabs(eta) < 1.5660 ) return 1.00192;
    else if ( fabs(eta) < 2.0000 ) return 1.00935;
    else return 1.01263; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00418;
    else if ( fabs(eta) < 1.4442 ) return 1.00403;
    else if ( fabs(eta) < 1.5660 ) return 1.00209;
    else if ( fabs(eta) < 2.0000 ) return 1.00910;
    else return 1.01154; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00307;
    else if ( fabs(eta) < 1.4442 ) return 1.00288;
    else if ( fabs(eta) < 1.5660 ) return 1.00078;
    else if ( fabs(eta) < 2.0000 ) return 1.00766;
    else return 1.00822; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00377;
    else if ( fabs(eta) < 1.4442 ) return 1.00260;
    else if ( fabs(eta) < 1.5660 ) return 1.00143;
    else if ( fabs(eta) < 2.0000 ) return 1.00512;
    else return 1.00801; }
}
else if ( ht < 2000.0 ) {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00529;
    else if ( fabs(eta) < 1.4442 ) return 1.00354;
    else if ( fabs(eta) < 1.5660 ) return 1.00224;
    else if ( fabs(eta) < 2.0000 ) return 1.01559;
    else return 1.02640; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00580;
    else if ( fabs(eta) < 1.4442 ) return 1.00774;
    else if ( fabs(eta) < 1.5660 ) return 1.00405;
    else if ( fabs(eta) < 2.0000 ) return 1.01634;
    else return 1.01964; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00772;
    else if ( fabs(eta) < 1.4442 ) return 1.00598;
    else if ( fabs(eta) < 1.5660 ) return 1.00778;
    else if ( fabs(eta) < 2.0000 ) return 1.02023;
    else return 1.02241; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00461;
    else if ( fabs(eta) < 1.4442 ) return 1.00721;
    else if ( fabs(eta) < 1.5660 ) return 1.00662;
    else if ( fabs(eta) < 2.0000 ) return 1.01460;
    else return 1.02206; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00659;
    else if ( fabs(eta) < 1.4442 ) return 1.00549;
    else if ( fabs(eta) < 1.5660 ) return 1.00425;
    else if ( fabs(eta) < 2.0000 ) return 1.01403;
    else return 1.01971; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00821;
    else if ( fabs(eta) < 1.4442 ) return 1.00806;
    else if ( fabs(eta) < 1.5660 ) return 1.00789;
    else if ( fabs(eta) < 2.0000 ) return 1.01741;
    else return 1.02066; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00586;
    else if ( fabs(eta) < 1.4442 ) return 1.00743;
    else if ( fabs(eta) < 1.5660 ) return 1.00674;
    else if ( fabs(eta) < 2.0000 ) return 1.01509;
    else return 1.02173; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00699;
    else if ( fabs(eta) < 1.4442 ) return 1.00402;
    else if ( fabs(eta) < 1.5660 ) return 1.00570;
    else if ( fabs(eta) < 2.0000 ) return 1.01401;
    else return 1.00993; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00607;
    else if ( fabs(eta) < 1.4442 ) return 1.00727;
    else if ( fabs(eta) < 1.5660 ) return 1.00379;
    else if ( fabs(eta) < 2.0000 ) return 1.01622;
    else return 1.02107; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00456;
    else if ( fabs(eta) < 1.4442 ) return 1.00440;
    else if ( fabs(eta) < 1.5660 ) return 1.00409;
    else if ( fabs(eta) < 2.0000 ) return 1.01421;
    else return 1.01375; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00461;
    else if ( fabs(eta) < 1.4442 ) return 1.00603;
    else if ( fabs(eta) < 1.5660 ) return 1.00452;
    else if ( fabs(eta) < 2.0000 ) return 1.01346;
    else return 1.01538; }
}
else {
  if ( pt < 25.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01681;
    else if ( fabs(eta) < 1.4442 ) return 1.00755;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00901;
    else return 1.00000; }
  else if ( pt < 30.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00214;
    else if ( fabs(eta) < 1.4442 ) return 0.96000;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.00935;
    else return 1.03175; }
  else if ( pt < 35.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00825;
    else if ( fabs(eta) < 1.4442 ) return 1.01220;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.01136;
    else return 0.90909; }
  else if ( pt < 40.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00704;
    else if ( fabs(eta) < 1.4442 ) return 1.01938;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.02500;
    else return 1.05882; }
  else if ( pt < 45.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00937;
    else if ( fabs(eta) < 1.4442 ) return 1.01429;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.03509;
    else return 1.07692; }
  else if ( pt < 50.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00748;
    else if ( fabs(eta) < 1.4442 ) return 1.00476;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.02985;
    else return 1.09091; }
  else if ( pt < 60.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00862;
    else if ( fabs(eta) < 1.4442 ) return 1.01031;
    else if ( fabs(eta) < 1.5660 ) return 1.02273;
    else if ( fabs(eta) < 2.0000 ) return 1.03774;
    else return 1.04762; }
  else if ( pt < 70.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.01161;
    else if ( fabs(eta) < 1.4442 ) return 1.00522;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.01250;
    else return 1.02632; }
  else if ( pt < 100.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00786;
    else if ( fabs(eta) < 1.4442 ) return 0.99562;
    else if ( fabs(eta) < 1.5660 ) return 1.01053;
    else if ( fabs(eta) < 2.0000 ) return 1.00952;
    else return 1.02247; }
  else if ( pt < 200.0 ) {
    if ( fabs(eta) < 0.8000 ) return 1.00679;
    else if ( fabs(eta) < 1.4442 ) return 1.01197;
    else if ( fabs(eta) < 1.5660 ) return 1.00685;
    else if ( fabs(eta) < 2.0000 ) return 1.01128;
    else return 1.01695; }
  else {
    if ( fabs(eta) < 0.8000 ) return 1.00758;
    else if ( fabs(eta) < 1.4442 ) return 1.00368;
    else if ( fabs(eta) < 1.5660 ) return 1.00000;
    else if ( fabs(eta) < 2.0000 ) return 1.04167;
    else return 1.00000; }
}
}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|                PILEUP WEIGHT SECTION                |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

void HardcodedConditions::GetPileupWeight(int nTrueInt, float *pileupweight, float *pileupweightup, float *pileupweightdn, std::string year, std::string sample)
{
  //The main getter for Pileup Weight Factors
  *pileupweight   = 1.000;
  *pileupweightup = 1.000;
  *pileupweightdn = 1.000;
  if      (year=="2016APV") GetPileupWeight2016APV(nTrueInt, pileupweight, pileupweightup, pileupweightdn);
  else if (year=="2016") GetPileupWeight2016(nTrueInt, pileupweight, pileupweightup, pileupweightdn);
  else if (year=="2017") GetPileupWeight2017(nTrueInt, pileupweight, pileupweightup, pileupweightdn);
  else if (year=="2018") GetPileupWeight2018(nTrueInt, pileupweight, pileupweightup, pileupweightdn);
}//end GetPileupWeight

void HardcodedConditions::GetPileupWeight2016APV(int nTrueInt, float *pileupweight, float *pileupweightup, float *pileupweightdn){
  std::vector<float> puWeights;
  std::vector<float> puWeightsUP;
  std::vector<float> puWeightsDN;
  puWeights = { 2.397e-01, 3.821e-01, 8.494e-01, 9.920e-01, 1.410e+00, 1.914e+00, 1.843e+00, 1.394e+00, 1.224e+00, 1.179e+00, 1.148e+00, 1.106e+00, 1.074e+00, 1.061e+00, 1.064e+00, 1.080e+00, 1.095e+00, 1.108e+00, 1.113e+00, 1.108e+00, 1.093e+00, 1.076e+00, 1.060e+00, 1.043e+00, 1.022e+00, 9.931e-01, 9.562e-01, 9.136e-01, 8.692e-01, 8.256e-01, 7.834e-01, 7.458e-01, 7.153e-01, 6.907e-01, 6.691e-01, 6.482e-01, 6.306e-01, 6.133e-01, 5.994e-01, 5.878e-01, 5.787e-01, 5.755e-01, 5.819e-01, 5.995e-01, 6.315e-01, 6.620e-01, 7.046e-01, 7.595e-01, 7.931e-01, 8.048e-01, 7.812e-01, 7.440e-01, 6.529e-01, 5.750e-01, 4.733e-01, 3.377e-01, 2.626e-01, 1.636e-01, 1.399e-01, 1.056e-01, 7.550e-02, 6.081e-02, 5.766e-02, 4.566e-02, 2.463e-02, 1.594e-02, 2.412e-02, 1.644e-02, 1.071e-02, 3.100e-02, 4.764e-02, 4.368e-03, 4.237e-03, 2.459e-02, 8.440e-03, 6.855e-04, 4.173e-03, 1.446e-03, 1.000e+00, 2.368e-04, 2.251e-05, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00 };
  puWeightsUP = { 2.093e-01, 3.285e-01, 7.532e-01, 8.673e-01, 1.122e+00, 1.371e+00, 1.464e+00, 1.148e+00, 9.557e-01, 9.038e-01, 8.933e-01, 8.800e-01, 8.663e-01, 8.626e-01, 8.745e-01, 9.101e-01, 9.563e-01, 9.991e-01, 1.031e+00, 1.051e+00, 1.057e+00, 1.057e+00, 1.057e+00, 1.061e+00, 1.063e+00, 1.061e+00, 1.052e+00, 1.036e+00, 1.015e+00, 9.911e-01, 9.651e-01, 9.417e-01, 9.261e-01, 9.194e-01, 9.194e-01, 9.243e-01, 9.381e-01, 9.566e-01, 9.843e-01, 1.020e+00, 1.063e+00, 1.123e+00, 1.207e+00, 1.323e+00, 1.484e+00, 1.658e+00, 1.883e+00, 2.166e+00, 2.415e+00, 2.618e+00, 2.715e+00, 2.762e+00, 2.587e+00, 2.425e+00, 2.117e+00, 1.590e+00, 1.290e+00, 8.276e-01, 7.187e-01, 5.420e-01, 3.820e-01, 3.005e-01, 2.773e-01, 2.144e-01, 1.138e-01, 7.318e-02, 1.113e-01, 7.708e-02, 5.143e-02, 1.533e-01, 2.440e-01, 2.326e-02, 2.351e-02, 1.425e-01, 5.120e-02, 4.361e-03, 2.790e-02, 1.018e-02, 1.000e+00, 1.860e-03, 1.874e-04, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000 };
  puWeightsDN = { 2.772e-01, 4.471e-01, 9.617e-01, 1.150e+00, 1.867e+00, 2.665e+00, 2.280e+00, 1.741e+00, 1.608e+00, 1.551e+00, 1.476e+00, 1.393e+00, 1.339e+00, 1.310e+00, 1.285e+00, 1.256e+00, 1.228e+00, 1.206e+00, 1.180e+00, 1.150e+00, 1.115e+00, 1.078e+00, 1.040e+00, 9.982e-01, 9.488e-01, 8.930e-01, 8.319e-01, 7.699e-01, 7.110e-01, 6.568e-01, 6.067e-01, 5.612e-01, 5.210e-01, 4.844e-01, 4.489e-01, 4.137e-01, 3.808e-01, 3.490e-01, 3.204e-01, 2.944e-01, 2.711e-01, 2.518e-01, 2.376e-01, 2.282e-01, 2.240e-01, 2.186e-01, 2.165e-01, 2.171e-01, 2.108e-01, 1.990e-01, 1.800e-01, 1.604e-01, 1.324e-01, 1.107e-01, 8.767e-02, 6.112e-02, 4.728e-02, 2.979e-02, 2.609e-02, 2.027e-02, 1.489e-02, 1.223e-02, 1.168e-02, 9.196e-03, 4.876e-03, 3.073e-03, 4.496e-03, 2.948e-03, 1.840e-03, 5.084e-03, 7.444e-03, 6.488e-04, 5.967e-04, 3.276e-03, 1.062e-03, 8.119e-05, 4.642e-04, 1.507e-04, 1.000e+00, 2.149e-05, 1.899e-06, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000 };
  *pileupweight = puWeights[nTrueInt];
  *pileupweightup = puWeightsUP[nTrueInt];
  *pileupweightdn = puWeightsDN[nTrueInt];
}

void HardcodedConditions::GetPileupWeight2016(int nTrueInt, float *pileupweight, float *pileupweightup, float *pileupweightdn){
  std::vector<float> puWeights;
  std::vector<float> puWeightsUP;
  std::vector<float> puWeightsDN;
  puWeights = { 2.777e-01, 3.416e-01, 9.148e-01, 6.970e-01, 6.332e-01, 3.420e-01, 1.601e-01, 1.107e-01, 1.110e-01, 1.298e-01, 2.317e-01, 3.666e-01, 4.856e-01, 5.667e-01, 6.208e-01, 6.691e-01, 7.154e-01, 7.568e-01, 7.916e-01, 8.241e-01, 8.593e-01, 9.024e-01, 9.530e-01, 1.007e+00, 1.061e+00, 1.119e+00, 1.182e+00, 1.252e+00, 1.327e+00, 1.406e+00, 1.483e+00, 1.559e+00, 1.637e+00, 1.719e+00, 1.799e+00, 1.874e+00, 1.952e+00, 2.023e+00, 2.094e+00, 2.158e+00, 2.209e+00, 2.254e+00, 2.302e+00, 2.353e+00, 2.414e+00, 2.414e+00, 2.403e+00, 2.376e+00, 2.236e+00, 2.016e+00, 1.721e+00, 1.440e+00, 1.119e+00, 8.937e-01, 6.946e-01, 4.945e-01, 4.086e-01, 2.864e-01, 2.870e-01, 2.588e-01, 2.213e-01, 2.108e-01, 2.322e-01, 2.096e-01, 1.267e-01, 9.046e-02, 1.493e-01, 1.101e-01, 7.696e-02, 2.375e-01, 3.877e-01, 3.761e-02, 3.847e-02, 2.349e-01, 8.472e-02, 7.223e-03, 4.613e-02, 1.677e-02, 1.000e+00, 3.035e-03, 3.042e-04, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00 };
  puWeightsUP = { 2.441e-01, 2.895e-01, 8.507e-01, 6.287e-01, 5.801e-01, 3.108e-01, 1.482e-01, 8.596e-02, 8.725e-02, 8.356e-02, 1.354e-01, 2.315e-01, 3.370e-01, 4.227e-01, 4.849e-01, 5.420e-01, 6.015e-01, 6.600e-01, 7.097e-01, 7.512e-01, 7.898e-01, 8.330e-01, 8.872e-01, 9.515e-01, 1.020e+00, 1.091e+00, 1.168e+00, 1.254e+00, 1.353e+00, 1.464e+00, 1.583e+00, 1.711e+00, 1.856e+00, 2.017e+00, 2.192e+00, 2.381e+00, 2.596e+00, 2.833e+00, 3.107e+00, 3.415e+00, 3.757e+00, 4.151e+00, 4.624e+00, 5.188e+00, 5.872e+00, 6.512e+00, 7.209e+00, 7.941e+00, 8.324e+00, 8.334e+00, 7.850e+00, 7.154e+00, 5.939e+00, 4.916e+00, 3.802e+00, 2.572e+00, 1.935e+00, 1.204e+00, 1.071e+00, 8.760e-01, 7.022e-01, 6.477e-01, 7.100e-01, 6.503e-01, 4.040e-01, 2.992e-01, 5.151e-01, 3.973e-01, 2.913e-01, 9.443e-01, 1.620e+00, 1.653e-01, 1.779e-01, 1.143e+00, 4.338e-01, 3.892e-02, 2.616e-01, 1.001e-01, 1.000e+00, 2.006e-02, 2.116e-03, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000 };
  puWeightsDN = { 3.181e-01, 4.258e-01, 9.716e-01, 7.741e-01, 6.967e-01, 3.742e-01, 1.778e-01, 1.522e-01, 1.457e-01, 2.259e-01, 3.930e-01, 5.612e-01, 6.782e-01, 7.453e-01, 7.832e-01, 8.108e-01, 8.320e-01, 8.521e-01, 8.736e-01, 9.006e-01, 9.345e-01, 9.723e-01, 1.010e+00, 1.048e+00, 1.087e+00, 1.130e+00, 1.175e+00, 1.219e+00, 1.261e+00, 1.298e+00, 1.325e+00, 1.344e+00, 1.357e+00, 1.363e+00, 1.359e+00, 1.341e+00, 1.313e+00, 1.270e+00, 1.217e+00, 1.151e+00, 1.072e+00, 9.884e-01, 9.062e-01, 8.273e-01, 7.549e-01, 6.707e-01, 5.935e-01, 5.237e-01, 4.440e-01, 3.665e-01, 2.944e-01, 2.409e-01, 1.926e-01, 1.668e-01, 1.463e-01, 1.189e-01, 1.104e-01, 8.405e-02, 8.803e-02, 8.028e-02, 6.778e-02, 6.272e-02, 6.644e-02, 5.730e-02, 3.293e-02, 2.232e-02, 3.492e-02, 2.436e-02, 1.612e-02, 4.705e-02, 7.261e-02, 6.661e-03, 6.443e-03, 3.720e-02, 1.269e-02, 1.022e-03, 6.173e-03, 2.121e-03, 1.000e+00, 3.426e-04, 3.240e-05, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000 };
  *pileupweight = puWeights[nTrueInt];
  *pileupweightup = puWeightsUP[nTrueInt];
  *pileupweightdn = puWeightsDN[nTrueInt];
}

void HardcodedConditions::GetPileupWeight2017(int nTrueInt, float *pileupweight, float *pileupweightup, float *pileupweightdn){
  std::vector<float> puWeights;
  std::vector<float> puWeightsUP;
  std::vector<float> puWeightsDN;
  puWeights = { 5.606e-01, 7.357e-01, 5.379e-01, 1.218e+00, 8.023e-01, 9.163e-01, 1.004e+00, 9.252e-01, 6.847e-01, 7.132e-01, 7.505e-01, 8.165e-01, 8.377e-01, 8.464e-01, 8.440e-01, 8.439e-01, 8.666e-01, 8.930e-01, 9.180e-01, 9.358e-01, 9.556e-01, 9.721e-01, 9.812e-01, 9.832e-01, 9.781e-01, 9.760e-01, 9.766e-01, 9.827e-01, 9.904e-01, 9.981e-01, 1.008e+00, 1.019e+00, 1.030e+00, 1.044e+00, 1.053e+00, 1.061e+00, 1.068e+00, 1.071e+00, 1.070e+00, 1.061e+00, 1.043e+00, 1.029e+00, 1.011e+00, 9.898e-01, 9.667e-01, 9.597e-01, 9.605e-01, 9.726e-01, 9.860e-01, 1.020e+00, 1.080e+00, 1.131e+00, 1.175e+00, 1.206e+00, 1.189e+00, 1.175e+00, 1.153e+00, 1.139e+00, 1.149e+00, 1.186e+00, 1.230e+00, 1.284e+00, 1.348e+00, 1.415e+00, 1.489e+00, 1.564e+00, 1.761e+00, 2.497e+00, 3.605e+00, 3.510e+00, 5.546e+00, 1.647e+01, 3.021e+01, 1.596e+02, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00 };
  puWeightsUP = { 5.283e-01, 6.444e-01, 4.356e-01, 1.233e+00, 6.813e-01, 8.174e-01, 9.700e-01, 8.474e-01, 5.507e-01, 4.611e-01, 5.343e-01, 5.670e-01, 6.342e-01, 6.532e-01, 6.458e-01, 6.380e-01, 6.526e-01, 6.895e-01, 7.374e-01, 7.766e-01, 8.149e-01, 8.511e-01, 8.780e-01, 8.934e-01, 8.957e-01, 8.962e-01, 9.014e-01, 9.178e-01, 9.408e-01, 9.671e-01, 9.964e-01, 1.027e+00, 1.058e+00, 1.094e+00, 1.127e+00, 1.155e+00, 1.177e+00, 1.190e+00, 1.193e+00, 1.177e+00, 1.139e+00, 1.090e+00, 1.023e+00, 9.496e-01, 8.837e-01, 8.498e-01, 8.451e-01, 8.750e-01, 9.323e-01, 1.038e+00, 1.204e+00, 1.400e+00, 1.628e+00, 1.877e+00, 2.078e+00, 2.299e+00, 2.510e+00, 2.738e+00, 3.021e+00, 3.379e+00, 3.761e+00, 4.178e+00, 4.621e+00, 5.073e+00, 5.533e+00, 5.970e+00, 6.840e+00, 9.786e+00, 1.413e+01, 1.366e+01, 2.133e+01, 6.250e+01, 1.131e+02, 5.917e+02, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000 };
  puWeightsDN = { 5.978e-01, 8.077e-01, 7.068e-01, 1.168e+00, 9.349e-01, 1.015e+00, 1.047e+00, 1.035e+00, 9.934e-01, 1.062e+00, 1.098e+00, 1.138e+00, 1.099e+00, 1.116e+00, 1.127e+00, 1.137e+00, 1.145e+00, 1.131e+00, 1.120e+00, 1.108e+00, 1.099e+00, 1.092e+00, 1.084e+00, 1.078e+00, 1.069e+00, 1.059e+00, 1.045e+00, 1.031e+00, 1.016e+00, 1.002e+00, 9.908e-01, 9.804e-01, 9.691e-01, 9.613e-01, 9.547e-01, 9.521e-01, 9.538e-01, 9.587e-01, 9.719e-01, 9.945e-01, 1.026e+00, 1.073e+00, 1.111e+00, 1.125e+00, 1.103e+00, 1.065e+00, 1.004e+00, 9.338e-01, 8.524e-01, 7.841e-01, 7.322e-01, 6.749e-01, 6.183e-01, 5.626e-01, 4.956e-01, 4.420e-01, 3.956e-01, 3.605e-01, 3.390e-01, 3.295e-01, 3.249e-01, 3.259e-01, 3.318e-01, 3.417e-01, 3.562e-01, 3.744e-01, 4.249e-01, 6.109e-01, 8.951e-01, 8.834e-01, 1.409e+00, 4.197e+00, 7.666e+00, 4.005e+01, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000 };
  *pileupweight = puWeights[nTrueInt];
  *pileupweightup = puWeightsUP[nTrueInt];
  *pileupweightdn = puWeightsDN[nTrueInt];
}

void HardcodedConditions::GetPileupWeight2018(int nTrueInt, float *pileupweight, float *pileupweightup, float *pileupweightdn){
  std::vector<float> puWeights;
  std::vector<float> puWeightsUP;
  std::vector<float> puWeightsDN;
  puWeights = { 4.760e+00, 1.081e+00, 1.217e+00, 8.809e-01, 7.662e-01, 1.012e+00, 1.323e+00, 1.340e+00, 1.105e+00, 9.124e-01, 8.241e-01, 8.004e-01, 7.908e-01, 8.068e-01, 8.324e-01, 8.564e-01, 8.725e-01, 8.821e-01, 8.947e-01, 9.187e-01, 9.464e-01, 9.664e-01, 9.802e-01, 9.908e-01, 9.926e-01, 9.874e-01, 9.798e-01, 9.813e-01, 9.869e-01, 9.929e-01, 9.982e-01, 1.002e+00, 1.003e+00, 1.005e+00, 1.007e+00, 1.009e+00, 1.012e+00, 1.016e+00, 1.021e+00, 1.028e+00, 1.037e+00, 1.047e+00, 1.058e+00, 1.071e+00, 1.082e+00, 1.095e+00, 1.110e+00, 1.126e+00, 1.142e+00, 1.155e+00, 1.168e+00, 1.177e+00, 1.183e+00, 1.200e+00, 1.197e+00, 1.195e+00, 1.192e+00, 1.209e+00, 1.219e+00, 1.240e+00, 1.253e+00, 1.239e+00, 1.171e+00, 1.082e+00, 1.007e+00, 9.125e-01, 8.601e-01, 7.821e-01, 6.576e-01, 6.309e-01, 5.988e-01, 7.141e-01, 7.152e-01, 5.360e-01, 4.091e-01, 4.283e-01, 4.417e-01, 4.424e-01, 1.035e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00 };
  puWeightsUP = { 4.427e+00, 9.470e-01, 1.017e+00, 7.567e-01, 6.606e-01, 8.755e-01, 1.131e+00, 1.133e+00, 9.294e-01, 7.589e-01, 6.725e-01, 6.433e-01, 6.301e-01, 6.411e-01, 6.618e-01, 6.823e-01, 6.979e-01, 7.103e-01, 7.279e-01, 7.584e-01, 7.959e-01, 8.300e-01, 8.601e-01, 8.864e-01, 9.013e-01, 9.056e-01, 9.037e-01, 9.074e-01, 9.134e-01, 9.195e-01, 9.259e-01, 9.319e-01, 9.379e-01, 9.458e-01, 9.556e-01, 9.688e-01, 9.859e-01, 1.009e+00, 1.037e+00, 1.073e+00, 1.117e+00, 1.169e+00, 1.230e+00, 1.299e+00, 1.375e+00, 1.462e+00, 1.560e+00, 1.668e+00, 1.784e+00, 1.901e+00, 2.024e+00, 2.142e+00, 2.255e+00, 2.387e+00, 2.479e+00, 2.566e+00, 2.645e+00, 2.772e+00, 2.881e+00, 3.024e+00, 3.161e+00, 3.242e+00, 3.188e+00, 3.074e+00, 2.998e+00, 2.856e+00, 2.837e+00, 2.724e+00, 2.420e+00, 2.456e+00, 2.465e+00, 3.108e+00, 3.289e+00, 2.604e+00, 2.099e+00, 2.321e+00, 2.530e+00, 2.682e+00, 6.654e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000 };
  puWeightsDN = { 5.143e+00, 1.252e+00, 1.460e+00, 1.031e+00, 8.940e-01, 1.180e+00, 1.566e+00, 1.600e+00, 1.328e+00, 1.116e+00, 1.029e+00, 1.012e+00, 1.005e+00, 1.026e+00, 1.057e+00, 1.084e+00, 1.097e+00, 1.097e+00, 1.096e+00, 1.103e+00, 1.111e+00, 1.108e+00, 1.100e+00, 1.095e+00, 1.085e+00, 1.074e+00, 1.063e+00, 1.064e+00, 1.069e+00, 1.073e+00, 1.075e+00, 1.072e+00, 1.064e+00, 1.054e+00, 1.040e+00, 1.023e+00, 1.002e+00, 9.783e-01, 9.505e-01, 9.210e-01, 8.897e-01, 8.566e-01, 8.227e-01, 7.887e-01, 7.530e-01, 7.195e-01, 6.880e-01, 6.591e-01, 6.326e-01, 6.064e-01, 5.838e-01, 5.620e-01, 5.418e-01, 5.288e-01, 5.093e-01, 4.913e-01, 4.733e-01, 4.634e-01, 4.491e-01, 4.377e-01, 4.222e-01, 3.969e-01, 3.552e-01, 3.098e-01, 2.717e-01, 2.317e-01, 2.054e-01, 1.757e-01, 1.390e-01, 1.255e-01, 1.122e-01, 1.260e-01, 1.188e-01, 8.375e-02, 6.001e-02, 5.885e-02, 5.669e-02, 5.284e-02, 1.147e-01, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000e+00, 1.000 };
  *pileupweight = puWeights[nTrueInt];
  *pileupweightup = puWeightsUP[nTrueInt];
  *pileupweightdn = puWeightsDN[nTrueInt];
}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|           Njet SF                                   |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

// need to update for UL
float HardcodedConditions::GetNjetSF(int njet, std::string year, std::string variation, bool isTT){
  unsigned int iSF=0;
  if (njet==4){
    iSF=0;
  } else if(njet==5) {
    iSF=1;
  } else if(njet==6) {
    iSF=2;
  } else if(njet==7) {
    iSF=3;
  } else if(njet==8) {
    iSF=4;
  } else if(njet>=9) {
    iSF=5;
  } else return 1.0;
  
  std::vector<float> njetSF16APV = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  std::vector<float> njetSF16APV_err = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
  
  std::vector<float> njetSF16 = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  std::vector<float> njetSF16_err = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
  
  std::vector<float> njetSF17 = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  std::vector<float> njetSF17_err = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
  
  std::vector<float> njetSF18 = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  std::vector<float> njetSF18_err = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

  std::vector<float> njetSF;
  std::vector<float> njetSF_err;

  if (year=="2016APV"){
    njetSF=njetSF16APV;
    njetSF_err=njetSF16APV_err;
  } else if  (year=="2016"){
    njetSF=njetSF16;
    njetSF_err=njetSF16_err;
  } else if  (year=="2017"){
    njetSF=njetSF17;
    njetSF_err=njetSF17_err;
  } else if  (year=="2018"){
    njetSF=njetSF18;
    njetSF_err=njetSF18_err;
  }

  if (variation=="up"){
    return njetSF[iSF]+njetSF_err[iSF];
  } else if (variation=="down"){
    return njetSF[iSF]-njetSF_err[iSF];
  } else {
    return njetSF[iSF];
  }
}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
  |  /   \                                                       /   \  |
  | |\_.  |                                                     |    /| |
  |\|  | /|           Jet pileup ID SF                          |\  | |/|
  | `---' |                                                     | `---' |
  |       |                                                     |       |
  |       |-----------------------------------------------------|       |
  \       |                                                     |       /
   \     /                                                       \     /
    `---'                                                         `---'*/
void HardcodedConditions::GetJetPileupIDSF( double pt, double eta, double *puJetIDsf, double *puJetIDsfUp, double *puJetIDsfDn, std::string year ){
  *puJetIDsf   = 1.0;
  *puJetIDsfUp = 1.0;
  *puJetIDsfDn = 1.0;
  if      ( year == "2016APV" ) GetJetPileupIDSF2016APV( pt, eta, puJetIDsf, puJetIDsfUp, puJetIDsfDn );
  else if ( year == "2016" ) GetJetPileupIDSF2016( pt, eta, puJetIDsf, puJetIDsfUp, puJetIDsfDn );
  else if ( year == "2017" ) GetJetPileupIDSF2017( pt, eta, puJetIDsf, puJetIDsfUp, puJetIDsfDn );
  else if ( year == "2018" ) GetJetPileupIDSF2018( pt, eta, puJetIDsf, puJetIDsfUp, puJetIDsfDn );
}

void HardcodedConditions::GetJetPileupIDSF2016APV( double pt, double eta, double *puJetIDsf, double *puJetIDsfUp, double *puJetIDsfDn ){
  if ( pt < 40.0 ) {
    if ( eta < -2.0 ) {
      *puJetIDsf   = 0.95920;
      *puJetIDsfUp = 0.98838;
      *puJetIDsfDn = 0.93002;
    }
    else if ( eta < -1.479 ){
      *puJetIDsf   = 0.99321;
      *puJetIDsfUp = 1.00404;
      *puJetIDsfDn = 0.98238;
    }
    else if ( eta < 0.0 ){
      *puJetIDsf   = 0.97992;
      *puJetIDsfUp = 0.98665;
      *puJetIDsfDn = 0.97319;
    }
    else if ( eta < 1.479 ){
      *puJetIDsf   = 0.98129;
      *puJetIDsfUp = 0.98782;
      *puJetIDsfDn = 0.97477;
    }
    else if ( eta < 2.0 ){
      *puJetIDsf   = 0.95903;
      *puJetIDsfUp = 0.97867;
      *puJetIDsfDn = 0.93938;
    }
    else {
      *puJetIDsf   = 0.97421;
      *puJetIDsfUp = 0.99375;
      *puJetIDsfDn = 0.95466;
    }
  }
  else if ( pt < 50.0 ) {
    if ( eta < -2.0 ) {
      *puJetIDsf   = 0.96555;
      *puJetIDsfUp = 0.99042;
      *puJetIDsfDn = 0.94068;
    }
    else if ( eta < -1.479 ){
      *puJetIDsf   = 0.98388;
      *puJetIDsfUp = 1.03353;
      *puJetIDsfDn = 0.93424;
    }
    else if ( eta < 0.0 ){
      *puJetIDsf   = 0.98751;
      *puJetIDsfUp = 0.99574;
      *puJetIDsfDn = 0.97929;
    }
    else if ( eta < 1.479 ){
      *puJetIDsf   = 0.99080;
      *puJetIDsfUp = 0.99729;
      *puJetIDsfDn = 0.98431;
    }
    else if ( eta < 2.0 ){
      *puJetIDsf   = 0.97770;
      *puJetIDsfUp = 0.99066;
      *puJetIDsfDn = 0.96475;
    }
    else {
      *puJetIDsf   = 0.97016;
      *puJetIDsfUp = 1.00348;
      *puJetIDsfDn = 0.93684;
    }
  }
  else {
    *puJetIDsf   = 1.0;
    *puJetIDsfUp = 1.0;
    *puJetIDsfDn = 1.0;
  }
}

void HardcodedConditions::GetJetPileupIDSF2016( double pt, double eta, double *puJetIDsf, double *puJetIDsfUp, double *puJetIDsfDn ){
  if ( pt < 40.0 ) {
    if ( eta < -2.0 ) {
      *puJetIDsf   = 0.86771;
      *puJetIDsfUp = 0.88420;
      *puJetIDsfDn = 0.85122;
    }
    else if ( eta < -1.479 ){
      *puJetIDsf   = 0.91153;
      *puJetIDsfUp = 0.92341;
      *puJetIDsfDn = 0.89965;
    }
    else if ( eta < 0.0 ){
      *puJetIDsf   = 0.95379;
      *puJetIDsfUp = 0.95882;
      *puJetIDsfDn = 0.94875;
    }
    else if ( eta < 1.479 ){
      *puJetIDsf   = 0.95773;
      *puJetIDsfUp = 0.96221;
      *puJetIDsfDn = 0.95324;
    }
    else if ( eta < 2.0 ){
      *puJetIDsf   = 0.92001;
      *puJetIDsfUp = 0.92690;
      *puJetIDsfDn = 0.91312;
    }
    else {
      *puJetIDsf   = 0.86779;
      *puJetIDsfUp = 0.89193;
      *puJetIDsfDn = 0.84364;
    }
  }
  else if ( pt < 50.0 ) {
    if ( eta < -2.0 ) {
      *puJetIDsf   = 0.88277;
      *puJetIDsfUp = 0.92261;
      *puJetIDsfDn = 0.84293;
    }
    else if ( eta < -1.479 ){
      *puJetIDsf   = 0.91071;
      *puJetIDsfUp = 0.93824;
      *puJetIDsfDn = 0.88317;
    }
    else if ( eta < 0.0 ){
      *puJetIDsf   = 0.95284;
      *puJetIDsfUp = 0.95935;
      *puJetIDsfDn = 0.94632;
    }
    else if ( eta < 1.479 ){
      *puJetIDsf   = 0.96283;
      *puJetIDsfUp = 0.97546;
      *puJetIDsfDn = 0.95019;
    }
    else if ( eta < 2.0 ){
      *puJetIDsf   = 0.92458;
      *puJetIDsfUp = 0.95390;
      *puJetIDsfDn = 0.89526;
    }
    else {
      *puJetIDsf   = 0.88288;
      *puJetIDsfUp = 0.92152;
      *puJetIDsfDn = 0.84424;
    }
  }
  else {
    *puJetIDsf   = 1.0;
    *puJetIDsfUp = 1.0;
    *puJetIDsfDn = 1.0;
  }
}

void HardcodedConditions::GetJetPileupIDSF2017( double pt, double eta, double *puJetIDsf, double *puJetIDsfUp, double *puJetIDsfDn ){
  if ( pt < 40.0 ) {
    if ( eta < -2.0 ) {
      *puJetIDsf   = 0.90366;
      *puJetIDsfUp = 0.92574;
      *puJetIDsfDn = 0.88157;
    }
    else if ( eta < -1.479 ){
      *puJetIDsf   = 0.93747;
      *puJetIDsfUp = 0.94775;
      *puJetIDsfDn = 0.92719;
    }
    else if ( eta < 0.0 ){
      *puJetIDsf   = 0.97475;
      *puJetIDsfUp = 0.98085;
      *puJetIDsfDn = 0.96864;
    }
    else if ( eta < 1.479 ){
      *puJetIDsf   = 0.98245;
      *puJetIDsfUp = 0.98852;
      *puJetIDsfDn = 0.97638;
    }
    else if ( eta < 2.0 ){
      *puJetIDsf   = 0.92917;
      *puJetIDsfUp = 0.94473;
      *puJetIDsfDn = 0.91360;
    }
    else {
      *puJetIDsf   = 0.88668;
      *puJetIDsfUp = 0.91097;
      *puJetIDsfDn = 0.86240;
    }
  }
  else if ( pt < 50.0 ) {
    if ( eta < -2.0 ) {
      *puJetIDsf   = 0.87745;
      *puJetIDsfUp = 0.91613;
      *puJetIDsfDn = 0.83877;
    }
    else if ( eta < -1.479 ){
      *puJetIDsf   = 0.93925;
      *puJetIDsfUp = 0.95844;
      *puJetIDsfDn = 0.92006;
    }
    else if ( eta < 0.0 ){
      *puJetIDsf   = 0.97620;
      *puJetIDsfUp = 0.98168;
      *puJetIDsfDn = 0.97073;
    }
    else if ( eta < 1.479 ){
      *puJetIDsf   = 0.98366;
      *puJetIDsfUp = 0.99112;
      *puJetIDsfDn = 0.97620;
    }
    else if ( eta < 2.0 ){
      *puJetIDsf   = 0.92853;
      *puJetIDsfUp = 0.94687;
      *puJetIDsfDn = 0.91019;
    }
    else {
      *puJetIDsf   = 0.86179;
      *puJetIDsfUp = 0.89902;
      *puJetIDsfDn = 0.82455;
    }
  }
  else {
    *puJetIDsf   = 1.0;
    *puJetIDsfUp = 1.0;
    *puJetIDsfDn = 1.0;
  }
}

void HardcodedConditions::GetJetPileupIDSF2018( double pt, double eta, double *puJetIDsf, double *puJetIDsfUp, double *puJetIDsfDn ){
  if ( pt < 40.0 ) {
    if ( eta < -2.0 ) {
      *puJetIDsf   = 0.91464;
      *puJetIDsfUp = 0.94989;
      *puJetIDsfDn = 0.87939;
    }
    else if ( eta < -1.479 ){
      *puJetIDsf   = 0.94455;
      *puJetIDsfUp = 0.96187;
      *puJetIDsfDn = 0.92722;
    }
    else if ( eta < 0.0 ){
      *puJetIDsf   = 0.96779;
      *puJetIDsfUp = 0.97529;
      *puJetIDsfDn = 0.96028;
    }
    else if ( eta < 1.479 ){
      *puJetIDsf   = 0.97057;
      *puJetIDsfUp = 0.97880;
      *puJetIDsfDn = 0.96234;
    }
    else if ( eta < 2.0 ){
      *puJetIDsf   = 0.93484;
      *puJetIDsfUp = 0.95405;
      *puJetIDsfDn = 0.91564;
    }
    else {
      *puJetIDsf   = 0.91721;
      *puJetIDsfUp = 0.95018;
      *puJetIDsfDn = 0.88425;
    }
  }
  else if ( pt < 50.0 ) {
    if ( eta < -2.0 ) {
      *puJetIDsf   = 0.88748;
      *puJetIDsfUp = 0.92029;
      *puJetIDsfDn = 0.85468;
    }
    else if ( eta < -1.479 ){
      *puJetIDsf   = 0.93207;
      *puJetIDsfUp = 0.96865;
      *puJetIDsfDn = 0.89549;
    }
    else if ( eta < 0.0 ){
      *puJetIDsf   = 0.96150;
      *puJetIDsfUp = 0.97160;
      *puJetIDsfDn = 0.95140;
    }
    else if ( eta < 1.479 ){
      *puJetIDsf   = 0.96443;
      *puJetIDsfUp = 0.97089;
      *puJetIDsfDn = 0.95798;
    }
    else if ( eta < 2.0 ){
      *puJetIDsf   = 0.93855;
      *puJetIDsfUp = 0.97602;
      *puJetIDsfDn = 0.90108;
    }
    else {
      *puJetIDsf   = 0.89367;
      *puJetIDsfUp = 0.93227;
      *puJetIDsfDn = 0.85506;
    }
  }
  else {
    *puJetIDsf   = 1.0;
    *puJetIDsfUp = 1.0;
    *puJetIDsfDn = 1.0;
  }
}


/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
  |  /   \                                                       /   \  |
  | |\_.  |                                                     |    /| |
  |\|  | /|           Jet pileup ID Efficiency                  |\  | |/|
  | `---' |                                                     | `---' |
  |       |                                                     |       |
  |       |-----------------------------------------------------|       |
  \       |                                                     |       /
   \     /                                                       \     /
    `---'                                                         `---'*/
void HardcodedConditions::GetJetPileupIDEff( double pt, double eta, double *puJetIDEff, std::string year ){
  *puJetIDEff   = 1.0;
  if      ( year == "2016APV" ) GetJetPileupIDEff2016APV( pt, eta, puJetIDEff );
  else if ( year == "2016" ) GetJetPileupIDEff2016( pt, eta, puJetIDEff );
  else if ( year == "2017" ) GetJetPileupIDEff2017( pt, eta, puJetIDEff );
  else if ( year == "2018" ) GetJetPileupIDEff2018( pt, eta, puJetIDEff );
}

void HardcodedConditions::GetJetPileupIDEff2016APV( double pt, double eta, double *puJetIDEff ){
  if ( pt < 40.0 ) {
    if ( eta < -2.0 ) {
      *puJetIDEff   = 0.55150;
    }
    else if ( eta < -1.479 ){
      *puJetIDEff   = 0.69260;
    }
    else if ( eta < 0.0 ){
      *puJetIDEff   = 0.85670;
    }
    else if ( eta < 1.479 ){
      *puJetIDEff   = 0.86070;
    }
    else if ( eta < 2.0 ){
      *puJetIDEff   = 0.72240;
    }
    else {
      *puJetIDEff   = 0.51950;
    }
  }
  else if ( pt < 50.0 ) {
    if ( eta < -2.0 ) {
      *puJetIDEff   = 0.46450;
    }
    else if ( eta < -1.479 ){
      *puJetIDEff   = 0.64530;
    }
    else if ( eta < 0.0 ){
      *puJetIDEff   = 0.83280;
    }
    else if ( eta < 1.479 ){
      *puJetIDEff   = 0.83710;
    }
    else if ( eta < 2.0 ){
      *puJetIDEff   = 0.65480;
    }
    else {
      *puJetIDEff   = 0.44570;
    }
  }
  else {
    *puJetIDEff   = 1.0;
  }
}

void HardcodedConditions::GetJetPileupIDEff2016( double pt, double eta, double *puJetIDEff ){
  if ( pt < 40.0 ) {
    if ( eta < -2.0 ) {
      *puJetIDEff   = 0.57450;
    }
    else if ( eta < -1.479 ){
      *puJetIDEff   = 0.72680;
    }
    else if ( eta < 0.0 ){
      *puJetIDEff   = 0.86340;
    }
    else if ( eta < 1.479 ){
      *puJetIDEff   = 0.86110;
    }
    else if ( eta < 2.0 ){
      *puJetIDEff   = 0.72760;
    }
    else {
      *puJetIDEff   = 0.55290;
    }
  }
  else if ( pt < 50.0 ) {
    if ( eta < -2.0 ) {
      *puJetIDEff   = 0.48280;
    }
    else if ( eta < -1.479 ){
      *puJetIDEff   = 0.66410;
    }
    else if ( eta < 0.0 ){
      *puJetIDEff   = 0.84390;
    }
    else if ( eta < 1.479 ){
      *puJetIDEff   = 0.83390;
    }
    else if ( eta < 2.0 ){
      *puJetIDEff   = 0.66030;
    }
    else {
      *puJetIDEff   = 0.46790;
    }
  }
  else {
    *puJetIDEff   = 1.0;
  }
}

void HardcodedConditions::GetJetPileupIDEff2017( double pt, double eta, double *puJetIDEff ){
  if ( pt < 40.0 ) {
    if ( eta < -2.0 ) {
      *puJetIDEff   = 0.67780;
    }
    else if ( eta < -1.479 ){
      *puJetIDEff   = 0.75160;
    }
    else if ( eta < 0.0 ){
      *puJetIDEff   = 0.85140;
    }
    else if ( eta < 1.479 ){
      *puJetIDEff   = 0.84320;
    }
    else if ( eta < 2.0 ){
      *puJetIDEff   = 0.74260;
    }
    else {
      *puJetIDEff   = 0.64510;
    }
  }
  else if ( pt < 50.0 ) {
    if ( eta < -2.0 ) {
      *puJetIDEff   = 0.62180;
    }
    else if ( eta < -1.479 ){
      *puJetIDEff   = 0.70950;
    }
    else if ( eta < 0.0 ){
      *puJetIDEff   = 0.83630;
    }
    else if ( eta < 1.479 ){
      *puJetIDEff   = 0.82640;
    }
    else if ( eta < 2.0 ){
      *puJetIDEff   = 0.69960;
    }
    else {
      *puJetIDEff   = 0.58460;
    }
  }
  else {
    *puJetIDEff   = 1.0;
  }
}

void HardcodedConditions::GetJetPileupIDEff2018( double pt, double eta, double *puJetIDEff ){
  if ( pt < 40.0 ) {
    if ( eta < -2.0 ) {
      *puJetIDEff   = 0.63850;
    }
    else if ( eta < -1.479 ){
      *puJetIDEff   = 0.71230;
    }
    else if ( eta < 0.0 ){
      *puJetIDEff   = 0.82270;
    }
    else if ( eta < 1.479 ){
      *puJetIDEff   = 0.81550;
    }
    else if ( eta < 2.0 ){
      *puJetIDEff   = 0.71980;
    }
    else {
      *puJetIDEff   = 0.62330;
    }
  }
  else if ( pt < 50.0 ) {
    if ( eta < -2.0 ) {
      *puJetIDEff   = 0.56970;
    }
    else if ( eta < -1.479 ){
      *puJetIDEff   = 0.67130;
    }
    else if ( eta < 0.0 ){
      *puJetIDEff   = 0.80000;
    }
    else if ( eta < 1.479 ){
      *puJetIDEff   = 0.79290;
    }
    else if ( eta < 2.0 ){
      *puJetIDEff   = 0.66230;
    }
    else {
      *puJetIDEff   = 0.56050;
    }
  }
  else {
    *puJetIDEff   = 1.0;
  }
}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
  |  /   \                                                       /   \  |
  | |\_.  |                                                     |    /| |
  |\|  | /|               Jet Veto Map                          |\  | |/|
  | `---' |                                                     | `---' |
  |       |                                                     |       |
  |       |-----------------------------------------------------|       |
  \       |                                                     |       /
   \     /                                                       \     /
    `---'                                                         `---'*/
// Extracted using the correctionlib tool from the JSON POG: https://gitlab.cern.ch/cms-nanoAOD/jsonpog-integration
// Using the analysis recommended working point "jetvetomap": https://twiki.cern.ch/twiki/bin/view/CMS/JECDataMC#Jet_veto_maps

bool HardcodedConditions::GetJetVetoMap( double eta, double phi, std::string year ){
  if      ( year == "2016APV" ) GetJetVetoMap2016( eta, phi ); // 2016preVFP and postVFP use same veto map
  else if ( year == "2016" ) GetJetVetoMap2016( eta, phi );
  else if ( year == "2017" ) GetJetVetoMap2017( eta, phi );
  else if ( year == "2018" ) GetJetVetoMap2018( eta, phi ); // complements the HEM 15/16 electron veto
  return false;
}

bool HardcodedConditions::GetJetVetoMap2016( double eta, double phi ){
  if ( ( eta >= -3.839 && eta < -3.664 ) && ( phi >= -3.142 && phi < -3.054 ) ) return true;
  if ( ( eta >= -3.839 && eta < -3.664 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= -3.664 && eta < -3.489 ) && ( phi >= 1.833 && phi < 1.920 ) ) return true;
  if ( ( eta >= -3.664 && eta < -3.489 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= -2.853 && eta < -2.650 ) && ( phi >= 1.833 && phi < 1.920 ) ) return true;
  if ( ( eta >= -2.650 && eta < -2.500 ) && ( phi >= -1.134 && phi < -1.047 ) ) return true;
  if ( ( eta >= -1.930 && eta < -1.830 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= -1.392 && eta < -1.305 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -1.305 && eta < -1.218 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -1.218 && eta < -1.131 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -1.131 && eta < -1.044 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -1.044 && eta < -0.957 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -0.957 && eta < -0.879 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -0.879 && eta < -0.783 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -0.783 && eta < -0.696 ) && ( phi >= 0.262 && phi < 0.349 ) ) return true;
  if ( ( eta >= -0.783 && eta < -0.696 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -0.696 && eta < -0.609 ) && ( phi >= 0.262 && phi < 0.349 ) ) return true;
  if ( ( eta >= -0.696 && eta < -0.609 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -0.609 && eta < -0.522 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -0.609 && eta < -0.522 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= -0.522 && eta < -0.435 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -0.522 && eta < -0.435 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= -0.435 && eta < -0.348 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -0.348 && eta < -0.261 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -0.261 && eta < -0.174 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -0.174 && eta < -0.087 ) && ( phi >= -1.745 && phi < -1.658 ) ) return true;
  if ( ( eta >= -0.174 && eta < -0.087 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -0.087 && eta < 0.000 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= -0.087 && eta < 0.000 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= -0.087 && eta < 0.000 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= 0.000 && eta < 0.087 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 0.000 && eta < 0.087 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 0.087 && eta < 0.174 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 0.087 && eta < 0.174 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 0.174 && eta < 0.261 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 0.174 && eta < 0.261 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 0.261 && eta < 0.348 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 0.261 && eta < 0.348 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 0.348 && eta < 0.435 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 0.348 && eta < 0.435 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 0.435 && eta < 0.522 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 0.435 && eta < 0.522 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 0.522 && eta < 0.609 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 0.522 && eta < 0.609 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 0.609 && eta < 0.696 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 0.609 && eta < 0.696 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 0.696 && eta < 0.783 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 0.696 && eta < 0.783 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 0.783 && eta < 0.879 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 0.783 && eta < 0.879 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 0.879 && eta < 0.957 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 0.879 && eta < 0.957 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 0.957 && eta < 1.044 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 0.957 && eta < 1.044 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 1.044 && eta < 1.131 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 1.044 && eta < 1.131 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 1.131 && eta < 1.218 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 1.131 && eta < 1.218 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 1.930 && eta < 2.043 ) && ( phi >= -1.745 && phi < -1.658 ) ) return true;
  if ( ( eta >= 1.930 && eta < 2.043 ) && ( phi >= -1.658 && phi < -1.571 ) ) return true;
  if ( ( eta >= 2.172 && eta < 2.322 ) && ( phi >= -1.571 && phi < -1.484 ) ) return true;
  if ( ( eta >= 2.322 && eta < 2.500 ) && ( phi >= -0.611 && phi < -0.524 ) ) return true;
  if ( ( eta >= 2.322 && eta < 2.500 ) && ( phi >= -0.436 && phi < -0.349 ) ) return true;
  if ( ( eta >= 2.650 && eta < 2.853 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 2.650 && eta < 2.853 ) && ( phi >= 2.356 && phi < 2.443 ) ) return true;
  if ( ( eta >= 2.650 && eta < 2.853 ) && ( phi >= 2.443 && phi < 2.531 ) ) return true;
  if ( ( eta >= 2.853 && eta < 2.964 ) && ( phi >= -3.054 && phi < -2.967 ) ) return true;
  if ( ( eta >= 2.853 && eta < 2.964 ) && ( phi >= -2.967 && phi < -2.880 ) ) return true;
  if ( ( eta >= 2.853 && eta < 2.964 ) && ( phi >= 1.047 && phi < 1.134 ) ) return true;
  if ( ( eta >= 2.853 && eta < 2.964 ) && ( phi >= 1.134 && phi < 1.222 ) ) return true;
  if ( ( eta >= 2.853 && eta < 2.964 ) && ( phi >= 1.309 && phi < 1.396 ) ) return true;
  if ( ( eta >= 2.964 && eta < 3.139 ) && ( phi >= -3.054 && phi < -2.967 ) ) return true;
  if ( ( eta >= 2.964 && eta < 3.139 ) && ( phi >= -2.967 && phi < -2.880 ) ) return true;
  if ( ( eta >= 3.139 && eta < 3.314 ) && ( phi >= -3.054 && phi < -2.967 ) ) return true;
  if ( ( eta >= 3.139 && eta < 3.314 ) && ( phi >= -2.967 && phi < -2.880 ) ) return true;
  if ( ( eta >= 3.139 && eta < 3.314 ) && ( phi >= 0.524 && phi < 0.611 ) ) return true;
  if ( ( eta >= 3.314 && eta < 3.489 ) && ( phi >= -3.054 && phi < -2.967 ) ) return true;
  if ( ( eta >= 3.314 && eta < 3.489 ) && ( phi >= -2.967 && phi < -2.880 ) ) return true;
  if ( ( eta >= 3.314 && eta < 3.489 ) && ( phi >= 2.531 && phi < 2.618 ) ) return true;
  if ( ( eta >= 3.489 && eta < 3.664 ) && ( phi >= -3.054 && phi < -2.967 ) ) return true;
  if ( ( eta >= 3.489 && eta < 3.664 ) && ( phi >= -2.967 && phi < -2.880 ) ) return true;
  return false;
}

bool HardcodedConditions::GetJetVetoMap2017( double eta, double phi ){
  if ( ( eta >= -3.139 && eta < -2.964 ) && ( phi >= 2.094 && phi < 2.182 ) ) return true;
  if ( ( eta >= -3.139 && eta < -2.964 ) && ( phi >= 2.182 && phi < 2.269 ) ) return true;
  if ( ( eta >= -3.139 && eta < -2.964 ) && ( phi >= 2.269 && phi < 2.356 ) ) return true;
  if ( ( eta >= -3.139 && eta < -2.964 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= -2.964 && eta < -2.853 ) && ( phi >= 2.094 && phi < 2.182 ) ) return true;
  if ( ( eta >= -2.964 && eta < -2.853 ) && ( phi >= 2.182 && phi < 2.269 ) ) return true;
  if ( ( eta >= -2.964 && eta < -2.853 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= -2.043 && eta < -1.930 ) && ( phi >= -0.349 && phi < -0.262 ) ) return true;
  if ( ( eta >= -2.043 && eta < -1.930 ) && ( phi >= -0.262 && phi < -0.175 ) ) return true;
  if ( ( eta >= -0.696 && eta < -0.609 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -0.609 && eta < -0.522 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -0.522 && eta < -0.435 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -0.087 && eta < 0.000 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= -0.087 && eta < 0.000 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= -0.087 && eta < 0.000 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= -0.087 && eta < 0.000 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= -0.087 && eta < 0.000 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 0.000 && eta < 0.087 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= 0.000 && eta < 0.087 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= 0.000 && eta < 0.087 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= 0.000 && eta < 0.087 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= 0.000 && eta < 0.087 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 0.087 && eta < 0.174 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= 0.087 && eta < 0.174 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= 0.087 && eta < 0.174 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= 0.087 && eta < 0.174 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= 0.087 && eta < 0.174 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 0.174 && eta < 0.261 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= 0.174 && eta < 0.261 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= 0.174 && eta < 0.261 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= 0.174 && eta < 0.261 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= 0.174 && eta < 0.261 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 0.261 && eta < 0.348 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= 0.261 && eta < 0.348 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= 0.261 && eta < 0.348 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= 0.261 && eta < 0.348 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= 0.261 && eta < 0.348 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 0.348 && eta < 0.435 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 0.348 && eta < 0.435 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= 0.348 && eta < 0.435 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= 0.348 && eta < 0.435 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= 0.348 && eta < 0.435 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= 0.348 && eta < 0.435 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 0.435 && eta < 0.522 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= 0.435 && eta < 0.522 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= 0.435 && eta < 0.522 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= 0.435 && eta < 0.522 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= 0.435 && eta < 0.522 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 0.522 && eta < 0.609 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 0.522 && eta < 0.609 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 0.522 && eta < 0.609 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= 0.522 && eta < 0.609 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= 0.522 && eta < 0.609 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= 0.522 && eta < 0.609 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= 0.522 && eta < 0.609 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 0.609 && eta < 0.696 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 0.609 && eta < 0.696 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 0.609 && eta < 0.696 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= 0.609 && eta < 0.696 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= 0.609 && eta < 0.696 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= 0.609 && eta < 0.696 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= 0.609 && eta < 0.696 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 0.696 && eta < 0.783 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 0.696 && eta < 0.783 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 0.696 && eta < 0.783 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= 0.696 && eta < 0.783 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= 0.696 && eta < 0.783 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= 0.696 && eta < 0.783 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= 0.696 && eta < 0.783 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 0.783 && eta < 0.879 ) && ( phi >= -2.531 && phi < -2.443 ) ) return true;
  if ( ( eta >= 0.783 && eta < 0.879 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= 0.783 && eta < 0.879 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= 0.783 && eta < 0.879 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= 0.783 && eta < 0.879 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= 0.783 && eta < 0.879 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 0.879 && eta < 0.957 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= 0.879 && eta < 0.957 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= 0.879 && eta < 0.957 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= 0.879 && eta < 0.957 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= 0.879 && eta < 0.957 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 0.957 && eta < 1.044 ) && ( phi >= -2.443 && phi < -2.356 ) ) return true;
  if ( ( eta >= 0.957 && eta < 1.044 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= 0.957 && eta < 1.044 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= 0.957 && eta < 1.044 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= 0.957 && eta < 1.044 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= 0.957 && eta < 1.044 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 1.044 && eta < 1.131 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= 1.044 && eta < 1.131 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= 1.044 && eta < 1.131 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= 1.044 && eta < 1.131 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= 1.044 && eta < 1.131 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 1.131 && eta < 1.218 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= 1.131 && eta < 1.218 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= 1.131 && eta < 1.218 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= 1.131 && eta < 1.218 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= 1.131 && eta < 1.218 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 1.218 && eta < 1.305 ) && ( phi >= -0.960 && phi < -0.873 ) ) return true;
  if ( ( eta >= 1.218 && eta < 1.305 ) && ( phi >= -0.873 && phi < -0.785 ) ) return true;
  if ( ( eta >= 1.218 && eta < 1.305 ) && ( phi >= -0.785 && phi < -0.698 ) ) return true;
  if ( ( eta >= 1.218 && eta < 1.305 ) && ( phi >= -0.698 && phi < -0.611 ) ) return true;
  if ( ( eta >= 1.218 && eta < 1.305 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= 1.218 && eta < 1.305 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= 1.218 && eta < 1.305 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= 1.218 && eta < 1.305 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= 1.218 && eta < 1.305 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 1.305 && eta < 1.392 ) && ( phi >= -0.960 && phi < -0.873 ) ) return true;
  if ( ( eta >= 1.305 && eta < 1.392 ) && ( phi >= -0.873 && phi < -0.785 ) ) return true;
  if ( ( eta >= 1.305 && eta < 1.392 ) && ( phi >= -0.785 && phi < -0.698 ) ) return true;
  if ( ( eta >= 1.305 && eta < 1.392 ) && ( phi >= -0.698 && phi < -0.611 ) ) return true;
  if ( ( eta >= 1.305 && eta < 1.392 ) && ( phi >= 2.618 && phi < 2.705 ) ) return true;
  if ( ( eta >= 1.305 && eta < 1.392 ) && ( phi >= 2.705 && phi < 2.793 ) ) return true;
  if ( ( eta >= 1.305 && eta < 1.392 ) && ( phi >= 2.793 && phi < 2.880 ) ) return true;
  if ( ( eta >= 1.305 && eta < 1.392 ) && ( phi >= 2.880 && phi < 2.967 ) ) return true;
  if ( ( eta >= 1.305 && eta < 1.392 ) && ( phi >= 2.967 && phi < 3.054 ) ) return true;
  if ( ( eta >= 1.392 && eta < 1.479 ) && ( phi >= -0.960 && phi < -0.873 ) ) return true;
  if ( ( eta >= 1.392 && eta < 1.479 ) && ( phi >= -0.873 && phi < -0.785 ) ) return true;
  if ( ( eta >= 1.392 && eta < 1.479 ) && ( phi >= -0.785 && phi < -0.698 ) ) return true;
  if ( ( eta >= 1.392 && eta < 1.479 ) && ( phi >= -0.698 && phi < -0.611 ) ) return true;
  if ( ( eta >= 1.479 && eta < 1.566 ) && ( phi >= -0.960 && phi < -0.873 ) ) return true;
  if ( ( eta >= 1.479 && eta < 1.566 ) && ( phi >= -0.873 && phi < -0.785 ) ) return true;
  if ( ( eta >= 1.479 && eta < 1.566 ) && ( phi >= -0.785 && phi < -0.698 ) ) return true;
  if ( ( eta >= 1.479 && eta < 1.566 ) && ( phi >= -0.698 && phi < -0.611 ) ) return true;
  if ( ( eta >= 1.566 && eta < 1.653 ) && ( phi >= -0.960 && phi < -0.873 ) ) return true;
  if ( ( eta >= 1.566 && eta < 1.653 ) && ( phi >= -0.873 && phi < -0.785 ) ) return true;
  if ( ( eta >= 1.566 && eta < 1.653 ) && ( phi >= -0.785 && phi < -0.698 ) ) return true;
  if ( ( eta >= 1.566 && eta < 1.653 ) && ( phi >= -0.698 && phi < -0.611 ) ) return true;
  if ( ( eta >= 1.653 && eta < 1.740 ) && ( phi >= -0.960 && phi < -0.873 ) ) return true;
  if ( ( eta >= 1.653 && eta < 1.740 ) && ( phi >= -0.873 && phi < -0.785 ) ) return true;
  if ( ( eta >= 1.653 && eta < 1.740 ) && ( phi >= -0.785 && phi < -0.698 ) ) return true;
  if ( ( eta >= 1.653 && eta < 1.740 ) && ( phi >= -0.698 && phi < -0.611 ) ) return true;
  if ( ( eta >= 1.740 && eta < 1.830 ) && ( phi >= -0.960 && phi < -0.873 ) ) return true;
  if ( ( eta >= 1.740 && eta < 1.830 ) && ( phi >= -0.873 && phi < -0.785 ) ) return true;
  if ( ( eta >= 1.740 && eta < 1.830 ) && ( phi >= -0.785 && phi < -0.698 ) ) return true;
  if ( ( eta >= 1.740 && eta < 1.830 ) && ( phi >= -0.698 && phi < -0.611 ) ) return true;
  if ( ( eta >= 1.830 && eta < 1.930 ) && ( phi >= -0.960 && phi < -0.873 ) ) return true;
  if ( ( eta >= 1.830 && eta < 1.930 ) && ( phi >= -0.873 && phi < -0.785 ) ) return true;
  if ( ( eta >= 1.830 && eta < 1.930 ) && ( phi >= -0.785 && phi < -0.698 ) ) return true;
  if ( ( eta >= 1.830 && eta < 1.930 ) && ( phi >= -0.698 && phi < -0.611 ) ) return true;
  if ( ( eta >= 1.930 && eta < 2.043 ) && ( phi >= -0.960 && phi < -0.873 ) ) return true;
  if ( ( eta >= 1.930 && eta < 2.043 ) && ( phi >= -0.873 && phi < -0.785 ) ) return true;
  if ( ( eta >= 1.930 && eta < 2.043 ) && ( phi >= -0.785 && phi < -0.698 ) ) return true;
  if ( ( eta >= 1.930 && eta < 2.043 ) && ( phi >= -0.698 && phi < -0.611 ) ) return true;
  if ( ( eta >= 2.043 && eta < 2.172 ) && ( phi >= -0.960 && phi < -0.873 ) ) return true;
  if ( ( eta >= 2.043 && eta < 2.172 ) && ( phi >= -0.873 && phi < -0.785 ) ) return true;
  if ( ( eta >= 2.043 && eta < 2.172 ) && ( phi >= -0.785 && phi < -0.698 ) ) return true;
  if ( ( eta >= 2.043 && eta < 2.172 ) && ( phi >= -0.698 && phi < -0.611 ) ) return true;
  if ( ( eta >= 2.172 && eta < 2.322 ) && ( phi >= -0.960 && phi < -0.873 ) ) return true;
  if ( ( eta >= 2.172 && eta < 2.322 ) && ( phi >= -0.873 && phi < -0.785 ) ) return true;
  if ( ( eta >= 2.172 && eta < 2.322 ) && ( phi >= -0.785 && phi < -0.698 ) ) return true;
  if ( ( eta >= 2.172 && eta < 2.322 ) && ( phi >= -0.698 && phi < -0.611 ) ) return true;
  if ( ( eta >= 2.322 && eta < 2.500 ) && ( phi >= -0.960 && phi < -0.873 ) ) return true;
  if ( ( eta >= 2.322 && eta < 2.500 ) && ( phi >= -0.873 && phi < -0.785 ) ) return true;
  if ( ( eta >= 2.322 && eta < 2.500 ) && ( phi >= -0.785 && phi < -0.698 ) ) return true;
  if ( ( eta >= 2.322 && eta < 2.500 ) && ( phi >= -0.698 && phi < -0.611 ) ) return true;
  if ( ( eta >= 2.500 && eta < 2.650 ) && ( phi >= -0.960 && phi < -0.873 ) ) return true;
  if ( ( eta >= 2.500 && eta < 2.650 ) && ( phi >= -0.873 && phi < -0.785 ) ) return true;
  if ( ( eta >= 2.500 && eta < 2.650 ) && ( phi >= -0.785 && phi < -0.698 ) ) return true;
  if ( ( eta >= 2.500 && eta < 2.650 ) && ( phi >= -0.698 && phi < -0.611 ) ) return true;
  if ( ( eta >= 2.650 && eta < 2.853 ) && ( phi >= -0.960 && phi < -0.873 ) ) return true;
  if ( ( eta >= 2.650 && eta < 2.853 ) && ( phi >= -0.873 && phi < -0.785 ) ) return true;
  if ( ( eta >= 2.650 && eta < 2.853 ) && ( phi >= -0.785 && phi < -0.698 ) ) return true;
  if ( ( eta >= 2.650 && eta < 2.853 ) && ( phi >= -0.698 && phi < -0.611 ) ) return true;
  if ( ( eta >= 2.650 && eta < 2.853 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 2.650 && eta < 2.853 ) && ( phi >= 0.698 && phi < 0.785 ) ) return true;
  return false;
}

bool HardcodedConditions::GetJetVetoMap2018( double eta, double phi ){
  if ( ( eta >= -3.139 && eta < -2.964 ) && ( phi >= -1.658 && phi < -1.571 ) ) return true;
  if ( ( eta >= -3.139 && eta < -2.964 ) && ( phi >= -1.571 && phi < -1.484 ) ) return true;
  if ( ( eta >= -3.139 && eta < -2.964 ) && ( phi >= -1.484 && phi < -1.396 ) ) return true;
  if ( ( eta >= -3.139 && eta < -2.964 ) && ( phi >= -1.396 && phi < -1.309 ) ) return true;
  if ( ( eta >= -3.139 && eta < -2.964 ) && ( phi >= -1.309 && phi < -1.222 ) ) return true;
  if ( ( eta >= -3.139 && eta < -2.964 ) && ( phi >= -1.222 && phi < -1.134 ) ) return true;
  if ( ( eta >= -3.139 && eta < -2.964 ) && ( phi >= -1.134 && phi < -1.047 ) ) return true;
  if ( ( eta >= -3.139 && eta < -2.964 ) && ( phi >= -1.047 && phi < -0.960 ) ) return true;
  if ( ( eta >= -2.964 && eta < -2.853 ) && ( phi >= -1.658 && phi < -1.571 ) ) return true;
  if ( ( eta >= -2.964 && eta < -2.853 ) && ( phi >= -1.571 && phi < -1.484 ) ) return true;
  if ( ( eta >= -2.964 && eta < -2.853 ) && ( phi >= -1.484 && phi < -1.396 ) ) return true;
  if ( ( eta >= -2.964 && eta < -2.853 ) && ( phi >= -1.396 && phi < -1.309 ) ) return true;
  if ( ( eta >= -2.964 && eta < -2.853 ) && ( phi >= -1.309 && phi < -1.222 ) ) return true;
  if ( ( eta >= -2.964 && eta < -2.853 ) && ( phi >= -1.222 && phi < -1.134 ) ) return true;
  if ( ( eta >= -2.964 && eta < -2.853 ) && ( phi >= -1.134 && phi < -1.047 ) ) return true;
  if ( ( eta >= -2.964 && eta < -2.853 ) && ( phi >= -1.047 && phi < -0.960 ) ) return true;
  if ( ( eta >= -2.853 && eta < -2.650 ) && ( phi >= -1.658 && phi < -1.571 ) ) return true;
  if ( ( eta >= -2.853 && eta < -2.650 ) && ( phi >= -1.571 && phi < -1.484 ) ) return true;
  if ( ( eta >= -2.853 && eta < -2.650 ) && ( phi >= -1.484 && phi < -1.396 ) ) return true;
  if ( ( eta >= -2.853 && eta < -2.650 ) && ( phi >= -1.396 && phi < -1.309 ) ) return true;
  if ( ( eta >= -2.853 && eta < -2.650 ) && ( phi >= -1.309 && phi < -1.222 ) ) return true;
  if ( ( eta >= -2.853 && eta < -2.650 ) && ( phi >= -1.222 && phi < -1.134 ) ) return true;
  if ( ( eta >= -2.853 && eta < -2.650 ) && ( phi >= -1.134 && phi < -1.047 ) ) return true;
  if ( ( eta >= -2.853 && eta < -2.650 ) && ( phi >= -1.047 && phi < -0.960 ) ) return true;
  if ( ( eta >= -2.650 && eta < -2.500 ) && ( phi >= -1.658 && phi < -1.571 ) ) return true;
  if ( ( eta >= -2.650 && eta < -2.500 ) && ( phi >= -1.571 && phi < -1.484 ) ) return true;
  if ( ( eta >= -2.650 && eta < -2.500 ) && ( phi >= -1.484 && phi < -1.396 ) ) return true;
  if ( ( eta >= -2.650 && eta < -2.500 ) && ( phi >= -1.396 && phi < -1.309 ) ) return true;
  if ( ( eta >= -2.650 && eta < -2.500 ) && ( phi >= -1.309 && phi < -1.222 ) ) return true;
  if ( ( eta >= -2.650 && eta < -2.500 ) && ( phi >= -1.222 && phi < -1.134 ) ) return true;
  if ( ( eta >= -2.650 && eta < -2.500 ) && ( phi >= -1.134 && phi < -1.047 ) ) return true;
  if ( ( eta >= -2.650 && eta < -2.500 ) && ( phi >= -1.047 && phi < -0.960 ) ) return true;
  if ( ( eta >= -2.500 && eta < -2.322 ) && ( phi >= -1.658 && phi < -1.571 ) ) return true;
  if ( ( eta >= -2.500 && eta < -2.322 ) && ( phi >= -1.571 && phi < -1.484 ) ) return true;
  if ( ( eta >= -2.500 && eta < -2.322 ) && ( phi >= -1.484 && phi < -1.396 ) ) return true;
  if ( ( eta >= -2.500 && eta < -2.322 ) && ( phi >= -1.396 && phi < -1.309 ) ) return true;
  if ( ( eta >= -2.500 && eta < -2.322 ) && ( phi >= -1.309 && phi < -1.222 ) ) return true;
  if ( ( eta >= -2.500 && eta < -2.322 ) && ( phi >= -1.222 && phi < -1.134 ) ) return true;
  if ( ( eta >= -2.500 && eta < -2.322 ) && ( phi >= -1.134 && phi < -1.047 ) ) return true;
  if ( ( eta >= -2.500 && eta < -2.322 ) && ( phi >= -1.047 && phi < -0.960 ) ) return true;
  if ( ( eta >= -2.322 && eta < -2.172 ) && ( phi >= -1.658 && phi < -1.571 ) ) return true;
  if ( ( eta >= -2.322 && eta < -2.172 ) && ( phi >= -1.571 && phi < -1.484 ) ) return true;
  if ( ( eta >= -2.322 && eta < -2.172 ) && ( phi >= -1.484 && phi < -1.396 ) ) return true;
  if ( ( eta >= -2.322 && eta < -2.172 ) && ( phi >= -1.396 && phi < -1.309 ) ) return true;
  if ( ( eta >= -2.322 && eta < -2.172 ) && ( phi >= -1.309 && phi < -1.222 ) ) return true;
  if ( ( eta >= -2.322 && eta < -2.172 ) && ( phi >= -1.222 && phi < -1.134 ) ) return true;
  if ( ( eta >= -2.322 && eta < -2.172 ) && ( phi >= -1.134 && phi < -1.047 ) ) return true;
  if ( ( eta >= -2.322 && eta < -2.172 ) && ( phi >= -1.047 && phi < -0.960 ) ) return true;
  if ( ( eta >= -2.172 && eta < -2.043 ) && ( phi >= -1.658 && phi < -1.571 ) ) return true;
  if ( ( eta >= -2.172 && eta < -2.043 ) && ( phi >= -1.571 && phi < -1.484 ) ) return true;
  if ( ( eta >= -2.172 && eta < -2.043 ) && ( phi >= -1.484 && phi < -1.396 ) ) return true;
  if ( ( eta >= -2.172 && eta < -2.043 ) && ( phi >= -1.396 && phi < -1.309 ) ) return true;
  if ( ( eta >= -2.172 && eta < -2.043 ) && ( phi >= -1.309 && phi < -1.222 ) ) return true;
  if ( ( eta >= -2.172 && eta < -2.043 ) && ( phi >= -1.222 && phi < -1.134 ) ) return true;
  if ( ( eta >= -2.172 && eta < -2.043 ) && ( phi >= -1.134 && phi < -1.047 ) ) return true;
  if ( ( eta >= -2.172 && eta < -2.043 ) && ( phi >= -1.047 && phi < -0.960 ) ) return true;
  if ( ( eta >= -2.043 && eta < -1.930 ) && ( phi >= -1.658 && phi < -1.571 ) ) return true;
  if ( ( eta >= -2.043 && eta < -1.930 ) && ( phi >= -1.571 && phi < -1.484 ) ) return true;
  if ( ( eta >= -2.043 && eta < -1.930 ) && ( phi >= -1.484 && phi < -1.396 ) ) return true;
  if ( ( eta >= -2.043 && eta < -1.930 ) && ( phi >= -1.396 && phi < -1.309 ) ) return true;
  if ( ( eta >= -2.043 && eta < -1.930 ) && ( phi >= -1.309 && phi < -1.222 ) ) return true;
  if ( ( eta >= -2.043 && eta < -1.930 ) && ( phi >= -1.222 && phi < -1.134 ) ) return true;
  if ( ( eta >= -2.043 && eta < -1.930 ) && ( phi >= -1.134 && phi < -1.047 ) ) return true;
  if ( ( eta >= -2.043 && eta < -1.930 ) && ( phi >= -1.047 && phi < -0.960 ) ) return true;
  if ( ( eta >= -1.930 && eta < -1.830 ) && ( phi >= -1.658 && phi < -1.571 ) ) return true;
  if ( ( eta >= -1.930 && eta < -1.830 ) && ( phi >= -1.571 && phi < -1.484 ) ) return true;
  if ( ( eta >= -1.930 && eta < -1.830 ) && ( phi >= -1.484 && phi < -1.396 ) ) return true;
  if ( ( eta >= -1.930 && eta < -1.830 ) && ( phi >= -1.396 && phi < -1.309 ) ) return true;
  if ( ( eta >= -1.930 && eta < -1.830 ) && ( phi >= -1.309 && phi < -1.222 ) ) return true;
  if ( ( eta >= -1.930 && eta < -1.830 ) && ( phi >= -1.222 && phi < -1.134 ) ) return true;
  if ( ( eta >= -1.930 && eta < -1.830 ) && ( phi >= -1.134 && phi < -1.047 ) ) return true;
  if ( ( eta >= -1.930 && eta < -1.830 ) && ( phi >= -1.047 && phi < -0.960 ) ) return true;
  if ( ( eta >= -1.830 && eta < -1.740 ) && ( phi >= -1.658 && phi < -1.571 ) ) return true;
  if ( ( eta >= -1.830 && eta < -1.740 ) && ( phi >= -1.571 && phi < -1.484 ) ) return true;
  if ( ( eta >= -1.830 && eta < -1.740 ) && ( phi >= -1.484 && phi < -1.396 ) ) return true;
  if ( ( eta >= -1.830 && eta < -1.740 ) && ( phi >= -1.396 && phi < -1.309 ) ) return true;
  if ( ( eta >= -1.830 && eta < -1.740 ) && ( phi >= -1.309 && phi < -1.222 ) ) return true;
  if ( ( eta >= -1.830 && eta < -1.740 ) && ( phi >= -1.222 && phi < -1.134 ) ) return true;
  if ( ( eta >= -1.830 && eta < -1.740 ) && ( phi >= -1.134 && phi < -1.047 ) ) return true;
  if ( ( eta >= -1.830 && eta < -1.740 ) && ( phi >= -1.047 && phi < -0.960 ) ) return true;
  if ( ( eta >= -1.740 && eta < -1.653 ) && ( phi >= -1.658 && phi < -1.571 ) ) return true;
  if ( ( eta >= -1.740 && eta < -1.653 ) && ( phi >= -1.571 && phi < -1.484 ) ) return true;
  if ( ( eta >= -1.740 && eta < -1.653 ) && ( phi >= -1.484 && phi < -1.396 ) ) return true;
  if ( ( eta >= -1.740 && eta < -1.653 ) && ( phi >= -1.396 && phi < -1.309 ) ) return true;
  if ( ( eta >= -1.740 && eta < -1.653 ) && ( phi >= -1.309 && phi < -1.222 ) ) return true;
  if ( ( eta >= -1.740 && eta < -1.653 ) && ( phi >= -1.222 && phi < -1.134 ) ) return true;
  if ( ( eta >= -1.740 && eta < -1.653 ) && ( phi >= -1.134 && phi < -1.047 ) ) return true;
  if ( ( eta >= -1.740 && eta < -1.653 ) && ( phi >= -1.047 && phi < -0.960 ) ) return true;
  if ( ( eta >= -1.653 && eta < -1.566 ) && ( phi >= -1.658 && phi < -1.571 ) ) return true;
  if ( ( eta >= -1.653 && eta < -1.566 ) && ( phi >= -1.571 && phi < -1.484 ) ) return true;
  if ( ( eta >= -1.653 && eta < -1.566 ) && ( phi >= -1.484 && phi < -1.396 ) ) return true;
  if ( ( eta >= -1.653 && eta < -1.566 ) && ( phi >= -1.396 && phi < -1.309 ) ) return true;
  if ( ( eta >= -1.653 && eta < -1.566 ) && ( phi >= -1.309 && phi < -1.222 ) ) return true;
  if ( ( eta >= -1.653 && eta < -1.566 ) && ( phi >= -1.222 && phi < -1.134 ) ) return true;
  if ( ( eta >= -1.653 && eta < -1.566 ) && ( phi >= -1.134 && phi < -1.047 ) ) return true;
  if ( ( eta >= -1.653 && eta < -1.566 ) && ( phi >= -1.047 && phi < -0.960 ) ) return true;
  if ( ( eta >= -1.566 && eta < -1.479 ) && ( phi >= -1.658 && phi < -1.571 ) ) return true;
  if ( ( eta >= -1.566 && eta < -1.479 ) && ( phi >= -1.571 && phi < -1.484 ) ) return true;
  if ( ( eta >= -1.566 && eta < -1.479 ) && ( phi >= -1.484 && phi < -1.396 ) ) return true;
  if ( ( eta >= -1.566 && eta < -1.479 ) && ( phi >= -1.396 && phi < -1.309 ) ) return true;
  if ( ( eta >= -1.566 && eta < -1.479 ) && ( phi >= -1.309 && phi < -1.222 ) ) return true;
  if ( ( eta >= -1.566 && eta < -1.479 ) && ( phi >= -1.222 && phi < -1.134 ) ) return true;
  if ( ( eta >= -1.566 && eta < -1.479 ) && ( phi >= -1.134 && phi < -1.047 ) ) return true;
  if ( ( eta >= -1.566 && eta < -1.479 ) && ( phi >= -1.047 && phi < -0.960 ) ) return true;
  if ( ( eta >= -1.479 && eta < -1.392 ) && ( phi >= -1.658 && phi < -1.571 ) ) return true;
  if ( ( eta >= -1.479 && eta < -1.392 ) && ( phi >= -1.571 && phi < -1.484 ) ) return true;
  if ( ( eta >= -1.479 && eta < -1.392 ) && ( phi >= -1.484 && phi < -1.396 ) ) return true;
  if ( ( eta >= -1.479 && eta < -1.392 ) && ( phi >= -1.396 && phi < -1.309 ) ) return true;
  if ( ( eta >= -1.479 && eta < -1.392 ) && ( phi >= -1.309 && phi < -1.222 ) ) return true;
  if ( ( eta >= -1.479 && eta < -1.392 ) && ( phi >= -1.222 && phi < -1.134 ) ) return true;
  if ( ( eta >= -1.479 && eta < -1.392 ) && ( phi >= -1.134 && phi < -1.047 ) ) return true;
  if ( ( eta >= -1.479 && eta < -1.392 ) && ( phi >= -1.047 && phi < -0.960 ) ) return true;
  if ( ( eta >= -1.218 && eta < -1.131 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -0.087 && eta < 0.000 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= -0.087 && eta < 0.000 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= -0.087 && eta < 0.000 ) && ( phi >= 0.524 && phi < 0.611 ) ) return true;
  if ( ( eta >= -0.087 && eta < 0.000 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 0.000 && eta < 0.087 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= 0.000 && eta < 0.087 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= 0.000 && eta < 0.087 ) && ( phi >= 0.524 && phi < 0.611 ) ) return true;
  if ( ( eta >= 0.000 && eta < 0.087 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 0.087 && eta < 0.174 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= 0.087 && eta < 0.174 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= 0.087 && eta < 0.174 ) && ( phi >= 0.524 && phi < 0.611 ) ) return true;
  if ( ( eta >= 0.087 && eta < 0.174 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 0.174 && eta < 0.261 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= 0.174 && eta < 0.261 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= 0.174 && eta < 0.261 ) && ( phi >= 0.524 && phi < 0.611 ) ) return true;
  if ( ( eta >= 0.174 && eta < 0.261 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 0.261 && eta < 0.348 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= 0.261 && eta < 0.348 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= 0.261 && eta < 0.348 ) && ( phi >= 0.524 && phi < 0.611 ) ) return true;
  if ( ( eta >= 0.261 && eta < 0.348 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 0.348 && eta < 0.435 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= 0.348 && eta < 0.435 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= 0.348 && eta < 0.435 ) && ( phi >= 0.524 && phi < 0.611 ) ) return true;
  if ( ( eta >= 0.348 && eta < 0.435 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 0.435 && eta < 0.522 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= 0.435 && eta < 0.522 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= 0.435 && eta < 0.522 ) && ( phi >= 0.524 && phi < 0.611 ) ) return true;
  if ( ( eta >= 0.435 && eta < 0.522 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 0.522 && eta < 0.609 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= 0.522 && eta < 0.609 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= 0.522 && eta < 0.609 ) && ( phi >= 0.524 && phi < 0.611 ) ) return true;
  if ( ( eta >= 0.522 && eta < 0.609 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 0.609 && eta < 0.696 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= 0.609 && eta < 0.696 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= 0.609 && eta < 0.696 ) && ( phi >= 0.524 && phi < 0.611 ) ) return true;
  if ( ( eta >= 0.609 && eta < 0.696 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 0.696 && eta < 0.783 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= 0.696 && eta < 0.783 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= 0.696 && eta < 0.783 ) && ( phi >= 0.524 && phi < 0.611 ) ) return true;
  if ( ( eta >= 0.696 && eta < 0.783 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 0.783 && eta < 0.879 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= 0.783 && eta < 0.879 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= 0.783 && eta < 0.879 ) && ( phi >= 0.524 && phi < 0.611 ) ) return true;
  if ( ( eta >= 0.783 && eta < 0.879 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 0.879 && eta < 0.957 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= 0.879 && eta < 0.957 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= 0.879 && eta < 0.957 ) && ( phi >= 0.524 && phi < 0.611 ) ) return true;
  if ( ( eta >= 0.879 && eta < 0.957 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 0.957 && eta < 1.044 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= 0.957 && eta < 1.044 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= 0.957 && eta < 1.044 ) && ( phi >= 0.524 && phi < 0.611 ) ) return true;
  if ( ( eta >= 0.957 && eta < 1.044 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 1.044 && eta < 1.131 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= 1.044 && eta < 1.131 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= 1.044 && eta < 1.131 ) && ( phi >= 0.524 && phi < 0.611 ) ) return true;
  if ( ( eta >= 1.044 && eta < 1.131 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 1.131 && eta < 1.218 ) && ( phi >= 0.349 && phi < 0.436 ) ) return true;
  if ( ( eta >= 1.131 && eta < 1.218 ) && ( phi >= 0.436 && phi < 0.524 ) ) return true;
  if ( ( eta >= 1.131 && eta < 1.218 ) && ( phi >= 0.524 && phi < 0.611 ) ) return true;
  if ( ( eta >= 1.131 && eta < 1.218 ) && ( phi >= 0.611 && phi < 0.698 ) ) return true;
  if ( ( eta >= 1.479 && eta < 1.566 ) && ( phi >= -1.396 && phi < -1.309 ) ) return true;
  if ( ( eta >= 1.566 && eta < 1.653 ) && ( phi >= -1.396 && phi < -1.309 ) ) return true;
  if ( ( eta >= 2.322 && eta < 2.500 ) && ( phi >= -0.611 && phi < -0.524 ) ) return true;
  return false;
}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|           ttHF SF                                   |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/

float HardcodedConditions::GetTtHfSF(bool isTT, bool isTTHF, bool isTTLF){
  if (isTT) {
    if (isTTHF) return 4.7/3.9; 
    if (isTTLF) return 0.989;
  }
  return 1.0;
}

/*.-----------------------------------------------------------------.
  /  .-.                                                         .-.  \
 |  /   \                                                       /   \  |
 | |\_.  |                                                     |    /| |
 |\|  | /|                MET Phi Corrections                  |\  | |/|
 | `---' |                                                     | `---' |
 |       |                                                     |       | 
 |       |-----------------------------------------------------|       |
 \       |                                                     |       /
  \     /                                                       \     /
   `---'                                                         `---'*/
// values taken from https://lathomas.web.cern.ch/lathomas/METStuff/XYCorrections/XYMETCorrection_withUL17andUL18andUL16.h

void HardcodedConditions::GetMETPhiCorrection( Double_t *met, Double_t *met_phi, int nPV, int nRun, std::string era, bool isMC ){
  double met_x_corr(0.); double met_y_corr(0.);
  double pi = 3.14159265359;
  if( era ==  "2016APV" || era == "2016" ) GetMETPhiCorrection2016( &met_x_corr, &met_y_corr, nPV, nRun, era, isMC );
  else if( era == "2017" ) GetMETPhiCorrection2017( &met_x_corr, &met_y_corr, nPV, nRun, isMC );
  else if( era == "2018" ) GetMETPhiCorrection2018( &met_x_corr, &met_y_corr, nPV, nRun, isMC );
  
  met_x_corr += *met * cos( *met_phi );
  met_y_corr += *met * sin( *met_phi );

  double met_corr = sqrt( met_x_corr * met_x_corr + met_y_corr * met_y_corr );
  double met_phi_corr;
  if( met_x_corr == 0 && met_y_corr > 0 ) met_phi_corr = pi;
  else if( met_x_corr == 0 && met_y_corr < 0 ) met_phi_corr = -pi; 
  else if( met_x_corr > 0 ) met_phi_corr = TMath::ATan( met_y_corr / met_x_corr );
  else if( met_x_corr < 0 && met_y_corr > 0 ) met_phi_corr = TMath::ATan( met_y_corr / met_x_corr ) + pi;
  else if( met_x_corr < 0 && met_y_corr < 0 ) met_phi_corr = TMath::ATan( met_y_corr / met_x_corr ) - pi;
  else met_phi_corr = 0;

  *met = met_corr;
  *met_phi = met_phi_corr;
}

void HardcodedConditions::GetMETPhiCorrection2016( double *met_x_corr, double *met_y_corr, double nPV, double nRun, std::string era, bool isMC ){
  if( isMC ){
    if( era == "2016APV" ){
      *met_x_corr = -( -0.188743 * nPV + 0.136539 );
      *met_y_corr = -( 0.0127927 * nPV + 0.117747 );
    }
    else if( era == "2016" ){
      *met_x_corr = -( -0.188743 * nPV + 0.136539);
      *met_y_corr = -( 0.0127927 * nPV + 0.117747);
    }
  }
  else {
    if( nRun >= 272007 && nRun <= 275656 ){
      *met_x_corr = -( -0.0214894 * nPV + -0.188255 );
      *met_y_corr = -( 0.0876624 * nPV + 0.812885 );
    }
    else if( nRun >= 275657 && nRun <= 276283 ){
      *met_x_corr = -( -0.032209 * nPV + 0.067288 );
      *met_y_corr = -( 0.113917 * nPV + 0.743906 );
    }
    else if( nRun >= 276315 && nRun <= 276811 ){
      *met_x_corr = -( -0.0293663 * nPV + 0.21106 );
      *met_y_corr = -( 0.11331 * nPV + 0.815787 );
    }
    else if( nRun >= 276831 && nRun <= 277420 ){
      *met_x_corr = -( -0.0132046 * nPV + 0.20073 );
      *met_y_corr = -( 0.134809 * nPV + 0.679068 );
    }
    else if( ( nRun >= 277772 && nRun <= 278768 ) || nRun == 278770 ){
      *met_x_corr = -( -0.0543566 * nPV + 0.816597 );
      *met_y_corr = -( 0.114225 * nPV + 1.17266 );
    }
    else if( ( nRun >= 278801 && nRun <= 278808 ) || nRun == 278769 ){
      *met_x_corr = -( 0.134616 * nPV + -0.89965 );
      *met_y_corr = -( 0.0397736 * nPV + 1.0385 );
    }
    else if( nRun >= 278820 && nRun <= 280385 ){
      *met_x_corr = -( 0.121809 * nPV + -0.584893 );
      *met_y_corr = -( 0.0558974 * nPV + 0.891234 );
    }
    else if( nRun >= 280919 && nRun <= 284044 ){
      *met_x_corr = -( 0.0868828 * nPV + -0.703489 );
      *met_y_corr = -( 0.0888774 * nPV + 0.902632 );
    }
  }
}

void HardcodedConditions::GetMETPhiCorrection2017( double *met_x_corr, double *met_y_corr, double nPV, double nRun, bool isMC ){
  if( isMC ){
    *met_x_corr = -( -0.300155 * nPV + 1.90608 );
    *met_y_corr = -( 0.300213 * nPV + -2.02232 );
  }
  else {
    if( nRun >= 297020 && nRun <= 299329 ){
      *met_x_corr = -( -0.211161 * nPV + 0.419333 );
      *met_y_corr = -( 0.251789 * nPV + -1.28089 );
    }
    else if( nRun >= 299337 && nRun <= 302029 ){
      *met_x_corr = -( -0.185184 * nPV + -0.164009 );
      *met_y_corr = -( 0.200941 * nPV + -0.56853 );
    }
    else if( nRun >= 302030 && nRun <= 303434 ){
      *met_x_corr = -( -0.201606 * nPV + 0.426502 );
      *met_y_corr = -( 0.188208 * nPV + -0.58313 );
    }
    else if( nRun >= 302435 && nRun <= 304826 ){
      *met_x_corr = -( -0.162472 * nPV + 0.176329 );
      *met_y_corr = -( 0.138076 * nPV + -0.250239 );
    }
    else if( nRun >= 304911 && nRun <= 306462 ){
      *met_x_corr = -( -0.210639 * nPV + 0.72934 );
      *met_y_corr = -( 0.198626 * nPV + 1.028 );
}
  }
}

void HardcodedConditions::GetMETPhiCorrection2018( double *met_x_corr, double *met_y_corr, double nPV, double nRun, bool isMC ){
  if( isMC ){
    *met_x_corr = -( 0.183518 * nPV + 0.546754 );
    *met_y_corr = -( 0.192263 * nPV + -0.42121 );

  }
  else {
    if( nRun >= 315252 && nRun <= 316995 ){
      *met_x_corr = -( 0.263733 * nPV + -1.91115 );
      *met_y_corr = -( 0.0431304 * nPV + -0.112043 );
    }
    else if( nRun >= 316998 && nRun <= 319312 ){
      *met_x_corr = -( 0.400466 * nPV + -3.05914 );
      *met_y_corr = -( 0.146125 * nPV + -0.533233 );
    }
    else if( nRun >= 319313 && nRun <= 320393 ){
      *met_x_corr = -( 0.430911 * nPV + -1.42865 );
      *met_y_corr = -( 0.0620083 * nPV + -1.46021 );
    }
    else if( nRun >= 320394 && nRun <= 325273 ){
      *met_x_corr = -( 0.457327 * nPV + -1.56856 );
      *met_y_corr = -( 0.0684071 * nPV + -0.928372 );
    }
  }
}
