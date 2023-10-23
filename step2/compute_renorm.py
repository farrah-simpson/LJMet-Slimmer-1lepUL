import sys, os
import numpy as np
import argparse
import array
import config

parser = argparse.ArgumentParser()
parser.add_argument( "-y", "--year", default = "17" )
parser.add_argument( "-loc", "--location", required = True, help = "BRUX,LPC,LOCAL" )
args = parser.parse_args()

from ROOT import TFile, TTree, TH2F

labels = {
  "TTTX": "TTTX_renorm.root",
  #"TTNOBB": "TTNOBB_renorm.root",
  #"TTBB": "TTBB_renorm.root",
  #"TTNOBBHT500": "TTNOBBHT500_renorm.root",
  #"TTBBHT500": "TTBBHT500_renorm.root",
  "ST": "ST_renorm.root",
  "TTH": "TTH_renorm.root",
  "QCD": "QCD_renorm.root",
  "TTXY": "TTXY_renorm.root",
  "EWK": "EWK_renorm.root"
#  "TTTW": "TTTW_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
#  "TTTJ": "TTTJ_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
#  "TTTT": "TTTT_TuneCP5_13TeV-amcatnlo-pythia8_1_hadd.root",
  "TTToSemiLep1000": "TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8_Mtt1000toInf_hadd.root",
  "TTToSemiLep700": "TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8_Mtt700to1000_hadd.root",
  "TTToSemiLep0": "TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8_Mtt0to700_hadd.root",
  "TTToHad1000": "TTToHadronic_TuneCP5_13TeV-powheg-pythia8_Mtt1000toInf_hadd.root",
  "TTToHad700": "TTToHadronic_TuneCP5_13TeV-powheg-pythia8_Mtt700to1000_hadd.root",
  "TTToHad0": "TTToHadronic_TuneCP5_13TeV-powheg-pythia8_Mtt0to700_hadd.root",
  "TTToLNu1000": "TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8_Mtt1000toInf_hadd.root",
  "TTToLNu700": "TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8_Mtt700to1000_hadd.root",
  "TTToLNu0": "TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8_Mtt0to700_hadd.root",
  #"ttjj": "TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8_HT0Njet0_ttjj_1_hadd.root",
  #"ttbb": "TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8_HT0Njet0_ttbb_hadd.root",
  #"ttcc": "TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8_HT0Njet0_ttcc_hadd.root",
  #"tt2b": "TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8_HT0Njet0_tt2b_hadd.root",
  #"tt1b": "TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8_HT0Njet0_tt1b_hadd.root",
  #"HT500ttjj": "TTToSemiLepton_HT500Njet9_TuneCP5_13TeV-powheg-pythia8_ttjj_hadd.root",
  #"HT500ttbb": "TTToSemiLepton_HT500Njet9_TuneCP5_13TeV-powheg-pythia8_ttbb_hadd.root",
  #"HT500ttcc": "TTToSemiLepton_HT500Njet9_TuneCP5_13TeV-powheg-pythia8_ttcc_hadd.root",
  #"HT500tt2b": "TTToSemiLepton_HT500Njet9_TuneCP5_13TeV-powheg-pythia8_tt2b_hadd.root",
  #"HT500tt1b": "TTToSemiLepton_HT500Njet9_TuneCP5_13TeV-powheg-pythia8_tt1b_hadd.root",
#  "STs": "ST_s-channel_4f_leptonDecays_TuneCP5_13TeV-amcatnlo-pythia8_hadd.root",
#  "STtW": "ST_tW_top_5f_inclusiveDecays_TuneCP5_13TeV-powheg-pythia8_hadd.root",
#  "STt": "ST_t-channel_top_4f_InclusiveDecays_TuneCP5_13TeV-powheg-madspin-pythia8_hadd.root", 
#  "WJets": "WJetsToLNu_HT_renorm.root",
#  "QCD": "QCD_HT_renorm.root",
#  "DYM": "DYJetsToLL_M-50_renorm.root",
#  "TTHBB": "ttHTobb_M125_TuneCP5_13TeV-powheg-pythia8_hadd.root",
#  "TTHnonBB": "ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_hadd.root",
#  "TTHH": "TTHH_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM700":"PairVLQ_x53x53_tWtW_narrow_RH_M700_TuneCP5_13TeV-madgraph-pythia8_hadd.root",        
  "X53RHM800":"PairVLQ_x53x53_tWtW_narrow_RH_M800_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM900":"PairVLQ_x53x53_tWtW_narrow_RH_M900_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1000":"PairVLQ_x53x53_tWtW_narrow_RH_M1000_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1100":"PairVLQ_x53x53_tWtW_narrow_RH_M1100_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1200":"PairVLQ_x53x53_tWtW_narrow_RH_M1200_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1300":"PairVLQ_x53x53_tWtW_narrow_RH_M1300_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1400":"PairVLQ_x53x53_tWtW_narrow_RH_M1400_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1500":"PairVLQ_x53x53_tWtW_narrow_RH_M1500_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1600":"PairVLQ_x53x53_tWtW_narrow_RH_M1600_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM500MH200":"PairVLQ_x53x53_tHtH_narrow_RH_MX500_MH200_TuneCP5_13TeV-madgraph-pythia8_hadd.root",          
  "X53RHM600MH200":"PairVLQ_x53x53_tHtH_narrow_RH_MX600_MH200_TuneCP5_13TeV-madgraph-pythia8_hadd.root",       
  "X53RHM600MH400":"PairVLQ_x53x53_tHtH_narrow_RH_MX600_MH400_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM700MH200":"PairVLQ_x53x53_tHtH_narrow_RH_MX700_MH200_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM700MH400":"PairVLQ_x53x53_tHtH_narrow_RH_MX700_MH400_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM800MH200":"PairVLQ_x53x53_tHtH_narrow_RH_MX800_MH200_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM800MH400":"PairVLQ_x53x53_tHtH_narrow_RH_MX800_MH400_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM800MH600":"PairVLQ_x53x53_tHtH_narrow_RH_MX800_MH600_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM900MH200":"PairVLQ_x53x53_tHtH_narrow_RH_MX900_MH200_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM900MH400":"PairVLQ_x53x53_tHtH_narrow_RH_MX900_MH400_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM900MH600":"PairVLQ_x53x53_tHtH_narrow_RH_MX900_MH600_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1000MH200":"PairVLQ_x53x53_tHtH_narrow_RH_MX1000_MH200_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
  "X53RHM1000MH400":"PairVLQ_x53x53_tHtH_narrow_RH_MX1000_MH400_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1000MH600":"PairVLQ_x53x53_tHtH_narrow_RH_MX1000_MH600_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1000MH800":"PairVLQ_x53x53_tHtH_narrow_RH_MX1000_MH800_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1100MH200":"PairVLQ_x53x53_tHtH_narrow_RH_MX1100_MH200_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1100MH400":"PairVLQ_x53x53_tHtH_narrow_RH_MX1100_MH400_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1100MH600":"PairVLQ_x53x53_tHtH_narrow_RH_MX1100_MH600_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1100MH800":"PairVLQ_x53x53_tHtH_narrow_RH_MX1100_MH800_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1200MH200":"PairVLQ_x53x53_tHtH_narrow_RH_MX1200_MH200_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1200MH400":"PairVLQ_x53x53_tHtH_narrow_RH_MX1200_MH400_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1200MH600":"PairVLQ_x53x53_tHtH_narrow_RH_MX1200_MH600_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1200MH800":"PairVLQ_x53x53_tHtH_narrow_RH_MX1200_MH800_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1200MH1000":"PairVLQ_x53x53_tHtH_narrow_RH_MX1200_MH1000_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
  "X53RHM1500MH200":"PairVLQ_x53x53_tHtH_narrow_RH_MX1500_MH200_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
  "X53RHM1500MH400":"PairVLQ_x53x53_tHtH_narrow_RH_MX1500_MH400_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1500MH600":"PairVLQ_x53x53_tHtH_narrow_RH_MX1500_MH600_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1500MH800":"PairVLQ_x53x53_tHtH_narrow_RH_MX1500_MH800_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
  "X53RHM1500MH1000":"PairVLQ_x53x53_tHtH_narrow_RH_MX1500_MH1000_TuneCP5_13TeV-madgraph-pythia8_hadd.root"
}

if not os.path.exists( "renorm/UL{}/".format( args.year ) ): os.system( "mkdir -vp renorm/UL{}/".format( args.year ) )

if args.location == "LPC":
  haddPath = "root://cmsxrootd.fnal.gov/" + config.haddPath[ args.year ][ "LPC" ].split( "uscms" )[-1] + "/nominal/"
elif args.location == "BRUX":
  haddPath = config.haddPath[ args.year ][ "BRUX" ] + "/nominal/"

limits = {
  "NJ": [4,4,8],
  "HT": [50,350,4000]
}

for label in labels:
  if os.path.exists( "renorm/UL{}/{}".format( args.year, "Weights_{}_extended_HT_cuts_sys.root".format( label ) ) ): 
    print( "[INFO] {} weights already exist, skipping...".format( label ) )
    continue
  
  print( "[START] Computing deepJet renormalization weight for: {}".format( label ) )
  if args.location == "LOCAL":
    tfile = TFile.Open( args.file )
  else:
    tfile = TFile.Open( os.path.join( haddPath, labels[ label ] ) )

  fout = TFile( "Weights_{}_extended_HT_cuts_sys.root".format( str( label ) ), "RECREATE" )

  systematics = []
  for shift in [ "up", "dn" ]:
    for systematic in [ "HF", "LF", "jes", "hfstats1", "hfstats2", "lfstats1", "lfstats2", "cferr1", "cferr2" ]:
      systematics.append( systematic + shift )
  h2D = { "origin": {}, "weight": {}, "scale": {} }

  h2D[ "origin" ][ "nominal" ] = TH2F( "h2D_origin", "h2D_origin", limits["NJ"][0], limits["NJ"][1], limits["NJ"][2], limits["HT"][0], limits["HT"][1], limits["HT"][2] )
  h2D[ "origin" ][ "nominal" ].Sumw2()
  h2D[ "weight" ][ "nominal" ] = TH2F( "h2D_weight", "h2D_weight", limits["NJ"][0], limits["NJ"][1], limits["NJ"][2], limits["HT"][0], limits["HT"][1], limits["HT"][2] )
  h2D[ "weight" ][ "nominal" ].Sumw2()

  # the nominal h2d[ "origin" ] gets cloned for the systematics scales
  for systematic in systematics:
    h2D[ "weight" ][ systematic ] = TH2F( "h2D_weight_{}".format( systematic ), "h2D_{}".format( systematic ), limits["NJ"][0], limits["NJ"][1], limits["NJ"][2], limits["HT"][0], limits["HT"][1], limits["HT"][2] )
    h2D[ "weight" ][ systematic ].Sumw2()

  ttree = tfile.Get( "ljmet" )

  ttree.SetBranchStatus( "*", 0 )
  ttree.SetBranchStatus( "NJets_JetSubCalc*", 1 )
  ttree.SetBranchStatus( "AK4HT*", 1 )
  ttree.SetBranchStatus( "btagDeepJetWeight*", 1 )
  ttree.SetBranchStatus( "leptonPt_MultiLepCalc*", 1 )
  ttree.SetBranchStatus( "isElectron*", 1 )
  ttree.SetBranchStatus( "isMuon*", 1 )
  ttree.SetBranchStatus( "corr_met_MultiLepCalc*", 1 )
  ttree.SetBranchStatus( "MCPastTrigger*", 1 )

  nEvents = ttree.GetEntries()
  checkpoints = np.linspace( 0, nEvents, 11 ).round() 
  nPassed = 0

  for i in range( nEvents ):
    ttree.GetEntry(i)
    if i in checkpoints: print( "  >> Finished processing {:.0f}% ({}/{}) events".format( 100.* float( i ) / float ( nEvents ), i, nEvents ) )
    if not ( ( ttree.leptonPt_MultiLepCalc > 20 and ttree.isElectron ) or ( ttree.leptonPt_MultiLepCalc > 20 and ttree.isMuon ) ): continue
    if not ( ttree.MCPastTriggerX ): continue 
    njet = getattr( ttree, "NJets_JetSubCalc" ) 
    HT = getattr( ttree, "AK4HT" )
    if njet > 8: njet = 8

    h2D[ "origin" ][ "nominal" ].Fill( njet, HT ) # this gets cloned by the other systematics
    h2D[ "weight" ][ "nominal" ].Fill( njet, HT, getattr( ttree, "btagDeepJetWeight" ) )

    for systematic in systematics:
      h2D[ "weight" ][ systematic ].Fill( njet, HT, getattr( ttree, "btagDeepJetWeight_{}".format( systematic ) ) )

    nPassed += 1

  h2D[ "scale" ][ "nominal" ] = h2D[ "origin" ][ "nominal" ].Clone()
  h2D[ "scale" ][ "nominal" ].SetTitle( "h2D_scale" )
  h2D[ "scale" ][ "nominal" ].Divide( h2D[ "weight" ][ "nominal" ] )
  fout.WriteTObject( h2D[ "origin" ][ "nominal" ], "h2D_origin" )
  fout.WriteTObject( h2D[ "weight" ][ "nominal" ], "h2D_weight" )
  fout.WriteTObject( h2D[ "scale" ][ "nominal" ], "h2D_scale" )

  for systematic in systematics:
    h2D[ "scale" ][ systematic ] = h2D[ "origin" ][ "nominal" ].Clone()
    h2D[ "scale" ][ systematic ].SetTitle( "h2D_scale_{}".format( systematic ) ) 
    h2D[ "scale" ][ systematic ].Divide( h2D[ "weight" ][ systematic ] )
    fout.WriteTObject( h2D[ "scale" ][ systematic ], "h2D_scale_{}".format( systematic ) )

  fout.Close()
  print( "[DONE] {}/{} events passed".format( nPassed, nEvents ) )
  os.system( "mv {} renorm/UL{}/".format( "Weights_{}_extended_HT_cuts_sys.root".format( label ), args.year ) )
