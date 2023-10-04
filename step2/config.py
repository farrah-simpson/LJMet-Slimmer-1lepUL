eosUserName = "fsimpson"
postfix = ""
years = [ "16APV", "16", "17", "18" ]

haddPath = {
  year: {
    "LPC": "/eos/uscms/store/user/{}/FWLJMET106XUL_singleLep20{}UL_RunIISummer20v2_{}_step1hadds".format( eosUserName, year, postfix ),
    "BRUX": "/isilon/hadoop/store/user/{}/FWLJMET106XUL_singleLep20{}UL_RunIISummer20v2_{}step1hadds".format( eosUserName, year, postfix ) 
  } for year in years
}

step2Path = {
  year: {
    "LPC": "/eos/uscms/store/user/{}/FWLJMET106XUL_singleLep20{}UL_RunIISummer20v2_{}_step2".format( eosUserName, year, postfix ), 
    "BRUX": "/isilon/hadoop/store/user/{}/FWLJMET106XUL_singleLep20{}UL_RunIISummer20v2{}_step2".format( eosUserName, year, postfix )
  } for year in years
}

# https://docs.google.com/presentation/d/1gEF2jExqS1hWs-dlYgxrTT2xQztYbBZcrLdw45Aiy7g/edit#slide=id.ge8cc301637_0_55
lumi = {
  "16APV": 19520., # From PdmV 
  "16": 16810.,    # From PdmV 
  "17": 41480.,    # calculated using brilcalc on GoldenJSON 
  "18": 59832.     # calculated using brilcalc on GoldenJSON
}

JES_shifts = {
  "JER": True,
  "JEC": True, # fully de-correlated, corresponds to total JEC from LJMet
  #"FlavorQCD": True,
  #"RelativeBal": True,
  #"RelativeSample_Era": True,
  #"HF": True,
  #"HF_Era": True,
  #"BBEC1": True,
  #"BBEC1_Era": True,
  #"EC2": True,
  #"EC2_Era": True,
  #"Absolute": True,
  #"Absolute_Era": True
}

xsec_ttbar = 831.8 # +19.8+35.1 -29.2-35.1 https://pdg.lbl.gov/2018/reviews/rpp2018-rev-top-quark.pdf
br_ttbar = {
  "TTToHadronic": 0.457,
  "TTToSemiLeptonic": 0.438,
  "TTTo2L2Nu": 0.105
}
filtEff_ttbar = {
  "Njet9": 0.00617938417682763,
  "Njet9HDdn": 0.005645170035947885,
  "Njet9HDup": 0.006711348259851689,
  "Njet9UEdn": 0.006108623095875414,
  "Njet9UEup": 0.0062286452403598055 
}
k_factor = {
  "WJets": 1.21
}

xsec = {
  "TTTW": 0.0007314, # https://cms-gen-dev.cern.ch/xsdb/?columns=67108863&currentPage=0&pageSize=10&searchQuery=process_name%20%3D%20TTTW,
  "TTTJ": 0.0003974, # https://cms-gen-dev.cern.ch/xsdb/?columns=67108863&currentPage=0&pageSize=10&searchQuery=process_name%20%3D%20TTTJ
  "TTToHadronic": xsec_ttbar * br_ttbar[ "TTToHadronic" ], 
  "TTToSemiLeptonicNjet0": xsec_ttbar * br_ttbar[ "TTToSemiLeptonic" ] * ( 1.0 - filtEff_ttbar[ "Njet9" ] ),
  "TTToSemiLeptonicNjet9": xsec_ttbar * br_ttbar[ "TTToSemiLeptonic" ] * filtEff_ttbar[ "Njet9" ],
  "TTToSemiLeptonHT500": 2.251,
  "TTTo2L2Nu": xsec_ttbar * br_ttbar[ "TTTo2L2Nu" ],
  "TTTT": 0.01197, # https://arxiv.org/pdf/1711.02116.pdf
  "TTWW": 0.00703, # https://cms-gen-dev.cern.ch/xsdb/?columns=67108863&currentPage=0&pageSize=10&searchQuery=process_name%20%3D%20TTWW 
  "TTZZ": 0.001385, # https://cms-gen-dev.cern.ch/xsdb/?columns=67108863&currentPage=0&pageSize=10&searchQuery=process_name%20%3D%20TTZZ
  "TTHH": 0.0006655, # https://cms-gen-dev.cern.ch/xsdb/?columns=67108863&currentPage=0&pageSize=10&searchQuery=process_name%20%3D%20TTHH_TuneCP5
  "TTZH": 0.00113, # https://cms-gen-dev.cern.ch/xsdb/?columns=67108863&currentPage=0&pageSize=10&searchQuery=process_name%20%3D%20TTZH_TuneCP5
  "TTWZ": 0.002453, # https://cms-gen-dev.cern.ch/xsdb/?columns=67108863&currentPage=0&pageSize=10&searchQuery=process_name%20%3D%20TTWZ_TuneCP5
  "TTWH": 0.001141, # https://cms-gen-dev.cern.ch/xsdb/?columns=67108863&currentPage=0&pageSize=10&searchQuery=process_name%20%3D%20TTWH_TuneCP5
  "TTWl": 0.2161, # https://cms-gen-dev.cern.ch/xsdb/?columns=67108863&currentPage=0&pageSize=10&searchQuery=process_name%20%3D%20TTWJetsToLNu_TuneCP5_13TeV
  "TTWq": 0.4377, # https://cms-gen-dev.cern.ch/xsdb/?columns=67108863&currentPage=0&pageSize=10&searchQuery=process_name%20%3D%20TTWJetsToQQ_TuneCP5_13TeV
  "TTZM1to10": 0.05324, # https://cms-gen-dev.cern.ch/xsdb/?columns=67108863&currentPage=0&pageSize=10&searchQuery=process_name%20%3D%20TTZToLL_M-1to10_TuneCP5
  "TTZM10": 0.2439, # https://cms-gen-dev.cern.ch/xsdb/?columns=67108863&currentPage=0&pageSize=10&searchQuery=process_name%20%3D%20TTZToLLNuNu_M-10_TuneCP5_13TeV
  "TTHbb": 0.5269, # https://cms-gen-dev.cern.ch/xsdb/?columns=67108863&currentPage=0&pageSize=10&searchQuery=process_name%20%3D%20ttHTobb_M125_TuneCP5
  "TTHnonbb": 0.5638, # https://cms-gen-dev.cern.ch/xsdb/?columns=67108863&currentPage=0&pageSize=10&searchQuery=process_name%20%3D%20ttHTobb_M125_TuneCP5 
  "ST_tW_top": 35.83, # https://twiki.cern.ch/twiki/bin/view/LHCPhysics/SingleTopRefXsec
  "ST_tW_antitop": 35.83, # https://twiki.cern.ch/twiki/bin/view/LHCPhysics/SingleTopRefXsec
  "ST_t_top": 136.02, # https://twiki.cern.ch/twiki/bin/view/LHCPhysics/SingleTopRefXsec
  "ST_t_antitop": 80.95, # https://twiki.cern.ch/twiki/bin/view/LHCPhysics/SingleTopRefXsec
  "ST_s": 3.44, # https://twiki.cern.ch/twiki/bin/view/LHCPhysics/SingleTopRefXsec
  "WW": 118.7, # https://arxiv.org/pdf/1408.5243.pdf
  "WZ": 47.13, # https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#W_jets
  "ZZ": 16.523, # https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#W_jets
  "DYM50HT200": 54.951, # https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#W_jets
  "DYM50HT400": 7.862, # https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#W_jets
  "DYM50HT600": 1.977, # https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#W_jets
  "DYM50HT800": 0.858, # https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#W_jets
  "DYM50HT1200": 0.191, # https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#W_jets
  "DYM50HT2500": 0.0045, # https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#W_jets
  "WJetsMG200": 359.7 * k_factor[ "WJets" ], # https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#W_jets
  "WJetsMG400": 48.91 * k_factor[ "WJets" ], # https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#W_jets
  "WJetsMG600": 12.05 * k_factor[ "WJets" ], # https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#W_jets
  "WJetsMG800": 5.501 * k_factor[ "WJets" ], # https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#W_jets
  "WJetsMG1200": 1.329 * k_factor[ "WJets" ], # https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#W_jets 
  "WJetsMG2500": 0.03216 * k_factor[ "WJets" ], # https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#W_jets
  "QCDHT200": 1712000, # https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#W_jets
  "QCDHT300": 347700,
  "QCDHT500": 32100,
  "QCDHT700": 6831,
  "QCDHT1000": 1207,
  "QCDHT1500": 119.9,
  "QCDHT2000": 25.24,
  "X53LHM700": 0.455, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53RHM700": 0.455, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53LHM800": 0.196, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53RHM800": 0.196, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53LHM900": 0.0903, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53RHM900": 0.0903, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53LHM1000": 0.0440, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53RHM1000": 0.0440, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53LHM1100": 0.0224, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53RHM1100": 0.0224, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53LHM1200": 0.0118, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53RHM1200": 0.0118, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53LHM1300": 0.00639, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53RHM1300": 0.00639, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53LHM1400": 0.00354, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53RHM1400": 0.00354, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53LHM1500": 0.00200, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53RHM1500": 0.00200, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53LHM1600": 0.001148, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53RHM1600": 0.001148, # from https://twiki.cern.ch/twiki/bin/viewauth/CMS/B2GVHF#Full_NNLO_cross_sections_for_top
  "X53LHM1700": 0.000666,
  "X53RHM1700": 0.000666,
  "X53RHM500MH200": 3.359, 
  "X53RHM600MH200": 1.161, 
  "X53RHM600MH400": 1.161,
  "X53RHM700MH200": 0.455,
  "X53RHM700MH400": 0.455,
  "X53RHM800MH200": 0.196, 
  "X53RHM800MH400": 0.196,
  "X53RHM800MH600": 0.196,
  "X53RHM900MH200": 0.0903, 
  "X53RHM900MH400": 0.0903,
  "X53RHM900MH600": 0.0903,
  "X53RHM1000MH200": 0.0440,
  "X53RHM1000MH400": 0.0440,
  "X53RHM1000MH600": 0.0440,
  "X53RHM1000MH800": 0.0440,
  "X53RHM1100MH200": 0.0224,
  "X53RHM1100MH400": 0.0224,
  "X53RHM1100MH600": 0.0224,
  "X53RHM1100MH800": 0.0224,
  "X53RHM1200MH200": 0.0118, 
  "X53RHM1200MH400": 0.0118, 
  "X53RHM1200MH600": 0.0118,
  "X53RHM1200MH800": 0.0118,
  "X53RHM1200MH1000": 0.0118, 
  "X53RHM1500MH200": 0.00200,
  "X53RHM1500MH400": 0.00200,
  "X53RHM1500MH600": 0.00200,
  "X53RHM1500MH800": 0.00200,
  "X53RHM1500MH1000": 0.00200
}

for syst in [ "HD", "UE" ]:
  for shift in [ "up", "dn" ]:
    xsec[ "TTToSemiLeptonicNjet0" + syst + shift ] = xsec_ttbar * br_ttbar[ "TTToSemiLeptonic" ] * ( 1.0 - filtEff_ttbar[ "Njet9" + syst + shift ] )
    xsec[ "TTToSemiLeptonicNjet9" + syst + shift ] = xsec_ttbar * br_ttbar[ "TTToSemiLeptonic" ] * filtEff_ttbar[ "Njet9" + syst + shift ]
  
nrun = {
  "16APV": {
    "TTTW": 340000.0,
    "TTTJ": 302000.0,
    "TTToHadronic": 93137016.0,
    "TTToSemiLeptonicNjet0": 133661764.0,
    "TTToSemiLeptonicNjet9": 133661764.0,
    "TTToSemiLeptonHT500": 4443604.0,
    "TTTo2L2Nu": 40819800.0,
    "TTTT": 3458180.0,
    "TTWW": 245000.0,
    "TTZZ": 140000.0,
    "TTHH": 140000.0,
    "TTZH": 140000.0,
    "TTWZ": 140000.0,
    "TTWH": 140000.0,
    "TTWl": 1543290.0,
    "TTWq": 148842.0,
    "TTZM1to10": 177656.0, 
    "TTZM10": 2856626.0,
    "TTHbb": 4121294.0,
    "TTHnonbb": 1936276.0,
    "ST_tW_top": 0,
    "ST_tW_antitop": 0,
    "ST_t_top": 0,
    "ST_t_antitop": 0, 
    "ST_s": 0, 
    "WW": 0,
    "WZ": 0,
    "ZZ": 0,
    "DYM50HT200": 0,
    "DYM50HT400": 0,
    "DYM50HT600": 0, 
    "DYM50HT800": 0,
    "DYM50HT1200": 0, 
    "DYM50HT2500": 0,
    "WJetsMG200": 17164198.0,
    "WJetsMG400": 2302057.0,
    "WJetsMG600": 1905536.0,
    "WJetsMG800": 2350331.0, 
    "WJetsMG1200": 1754683.0, 
    "WJetsMG2500": 808649.0,
    "QCDHT200": 0,
    "QCDHT300": 0,
    "QCDHT500": 0,
    "QCDHT700": 0,
    "QCDHT1000": 0,
    "QCDHT1500": 0,
    "QCDHT2000": 0,
    "X53LHM700": 300000.0, 
    "X53RHM700": 300000.0, 
    "X53LHM800": 300000.0, 
    "X53RHM800": 300000.0, 
    "X53LHM900": 300000.0,
    "X53RHM900": 300000.0,
    "X53LHM1000": 300000.0, 
    "X53RHM1000": 300000.0, 
    "X53LHM1100": 300000.0, 
    "X53RHM1100": 300000.0, 
    "X53LHM1200": 300000.0, 
    "X53RHM1200": 300000.0, 
    "X53LHM1300": 300000.0,
    "X53RHM1300": 300000.0,
    "X53LHM1400": 300000.0,
    "X53RHM1400": 300000.0,
    "X53LHM1500": 300000.0,
    "X53RHM1500": 300000.0,
    "X53LHM1600": 300000.0,
    "X53RHM1600": 300000.0,
    "X53LHM1700": 300000.0,
    "X53RHM1700": 300000.0,
    "X53RHM500MH200": 300000.0, 
    "X53RHM600MH200": 300000.0, 
    "X53RHM600MH400": 188000.0,
    "X53RHM700MH200": 300000.0,
    "X53RHM700MH400": 273000.0,
    "X53RHM800MH200": 244000.0, 
    "X53RHM800MH400": 300000.0,
    "X53RHM800MH600": 298000.0,
    "X53RHM900MH200": 288000.0, 
    "X53RHM900MH400": 270000.0,
    "X53RHM900MH600": 268000.0,
    "X53RHM1000MH200": 256000.0,
    "X53RHM1000MH400": 213000.0,
    "X53RHM1000MH600": 300000.0,
    "X53RHM1000MH800": 300000.0,
    "X53RHM1100MH200": 246000.0,
    "X53RHM1100MH400": 280000.0,
    "X53RHM1100MH600": 292000.0,
    "X53RHM1100MH800": 300000.0,
    "X53RHM1200MH200": 300000.0, 
    "X53RHM1200MH400": 224000.0, 
    "X53RHM1200MH600": 279000.0,
    "X53RHM1200MH800": 239000.0,
    "X53RHM1200MH1000":298000.0, 
    "X53RHM1500MH200": 286000.0,
    "X53RHM1500MH400": 266000.0,
    "X53RHM1500MH600": 293000.0,
    "X53RHM1500MH800": 251000.0,
    "X53RHM1500MH1000":228000.0 
  },
  "16": {
    "TTTW": 152000.0,
    "TTTJ": 169000.0,
    "TTToHadronic": 207187204.0,
    "TTToSemiLeptonicNjet0": 148086112.0,
    "TTToSemiLeptonicNjet9": 148086112.0,
    "TTToSemiLeptonHT500": 4603338.0,
    "TTTo2L2Nu": 47141720.0,
    "TTTT": 2264826.0,
    "TTWW": 309000.0,
    "TTZZ": 152000.0,
    "TTHH": 153000.0,
    "TTZH": 160000.0,
    "TTWZ": 159000.0,
    "TTWH": 160000.0,
    "TTWl": 1800823.0,
    "TTWq": 168951.0,
    "TTZM1to10": 177656.0, 
    "TTZM10": 2982392.0,
    "TTHbb": 4834712.0,
    "TTHnonbb": 2194702.0,
    "ST_tW_top": 2490860.0,
    "ST_tW_antitop": 2553882.0,
    "ST_t_antitop": 28810822.0, 
    "ST_t_top": 51822600.0,
    "ST_s": 3468362.0, 
    "WW": 15685000.0,
    "WZ": 7584000.0,
    "ZZ": 1151000.0,
    "DYM50HT200": 5653782.0,
    "DYM50HT400": 2491416.0,
    "DYM50HT600": 2299853.0, 
    "DYM50HT800": 2393976.0,
    "DYM50HT1200": 1970857.0, 
    "DYM50HT2500": 696811.0,
    "WJetsMG200": 15185376.0,
    "WJetsMG400": 2115509.0,
    "WJetsMG600": 2251807.0,
    "WJetsMG800": 2132228.0, 
    "WJetsMG1200": 2090561.0, 
    "WJetsMG2500": 584932.0,
    "QCDHT200": 17569141.0,
    "QCDHT300": 16747056.0,
    "QCDHT500": 15222746.0,
    "QCDHT700": 13905714.0,
    "QCDHT1000": 4365993.0,
    "QCDHT1500": 3217830.0,
    "QCDHT2000": 1847781.0,
    "X53LHM700": 300000.0, 
    "X53RHM700": 300000.0, 
    "X53LHM800": 300000.0, 
    "X53RHM800": 300000.0, 
    "X53LHM900": 300000.0,
    "X53RHM900": 300000.0,
    "X53LHM1000": 300000.0, 
    "X53RHM1000": 300000.0, 
    "X53LHM1100": 300000.0, 
    "X53RHM1100": 300000.0, 
    "X53LHM1200": 300000.0, 
    "X53RHM1200": 300000.0, 
    "X53LHM1300": 300000.0,
    "X53RHM1300": 300000.0,
    "X53LHM1400": 300000.0,
    "X53RHM1400": 300000.0,
    "X53LHM1500": 300000.0,
    "X53RHM1500": 300000.0,
    "X53LHM1600": 300000.0,
    "X53RHM1600": 300000.0,
    "X53LHM1700": 300000.0,
    "X53RHM1700": 300000.0,
    "X53RHM600MH200": 300000.0, 
    "X53RHM600MH400": 300000.0,
    "X53RHM700MH200": 300000.0,
    "X53RHM700MH400": 300000.0,
    "X53RHM800MH200": 300000.0, 
    "X53RHM800MH400": 300000.0,
    "X53RHM800MH600": 300000.0,
    "X53RHM900MH200": 300000.0, 
    "X53RHM900MH400": 300000.0,
    "X53RHM900MH600": 300000.0,
    "X53RHM1000MH200": 300000.0,
    "X53RHM1000MH400": 300000.0,
    "X53RHM1000MH600": 300000.0,
    "X53RHM1000MH800": 300000.0,
    "X53RHM1100MH200": 300000.0,
    "X53RHM1100MH400": 300000.0,
    "X53RHM1100MH600": 300000.0,
    "X53RHM1100MH800": 300000.0,
    "X53RHM1200MH200": 300000.0, 
    "X53RHM1200MH400": 300000.0, 
    "X53RHM1200MH600": 300000.0,
    "X53RHM1200MH800": 300000.0,
    "X53RHM1200MH1000":300000.0, 
    "X53RHM1500MH200": 300000.0,
    "X53RHM1500MH400": 300000.0,
    "X53RHM1500MH600": 300000.0,
    "X53RHM1500MH800": 300000.0,
    "X53RHM1500MH1000":300000.0 
  },
  "17": {
    "TTTW": 360000.0,
    "TTTJ": 354000.0,
    "TTToHadronic": 204641241.0,
    "TTToSemiLeptonic":192551880.0,
    "TTToSemiLeptonicNjet0": 683741954.0,
    "TTToSemiLeptonicNjet9": 683741954.0,
    "TTToSemiLeptonHT500": 17364358.0,
    "TTTo2L2Nu": 99908690.0,
    "TTTT": 6029906.0,
    "TTWW": 698000.0,
    "TTZZ": 327000.0,
    "TTHH": 78000.0,
    "TTZH": 340000.0,
    "TTWZ": 350000.0,
    "TTWH": 523000.0, #Missing?
    "TTWl": 4044869.0,
    "TTWq": 352371.0,
    "TTZM1to10": 388872.0,
    "TTZM10": 6973764.0,
    "TTHbb": 7562928.0,
    "TTHnonbb": 4827425.0,
    "ST_tW_top": 5648712.0,
    "ST_tW_antitop": 5673700.0, 
    "ST_t_top": 121728252.0,
    "ST_t_antitop": 65821722.0, 
    "ST_s": 9037288.0, 
    "WW": 15550000.0,
    "WZ": 7889000.0,
    "ZZ": 2706000.,
    "DYM50HT200": 12183463.0,
    "DYM50HT400": 5543804.0,
    "DYM50HT600": 5278417.0, 
    "DYM50HT800": 4506887.0,
    "DYM50HT1200": 3247028.0, 
    "DYM50HT2500": 1453148.0,
    "WJetsMG200": 42602407.0,
    "WJetsMG400": 5468473.0,
    "WJetsMG600": 5460680.0,
    "WJetsMG800": 4754289.0,
    "WJetsMG1200": 4448318.0, 
    "WJetsMG2500": 1185699.0,
    "QCDHT200": 42714435.,
    "QCDHT300": 43589739.0,
    "QCDHT500": 114877542.0,
    "QCDHT700": 117541006.0,
    "QCDHT1000": 10256089.,
    "QCDHT1500": 7701876.,
    "QCDHT2000": 4112573.,
    "X53LHM700": 300000.0, 
    "X53RHM700": 243000.0, 
    "X53LHM800": 300000.0, 
    "X53RHM800": 249000.0, 
    "X53LHM900": 300000.0,
    "X53RHM900": 240000.0,
    "X53LHM1000": 300000.0, 
    "X53RHM1000": 240000.0, 
    "X53LHM1100": 300000.0, 
    "X53RHM1100": 297000.0, 
    "X53LHM1200": 300000.0, 
    "X53RHM1200": 258000.0, 
    "X53LHM1300": 300000.0,
    "X53RHM1300": 300000.0,
    "X53LHM1400": 300000.0,
    "X53RHM1400": 199000.0,
    "X53LHM1500": 287000.0,
    "X53RHM1500": 187000.0,
    "X53LHM1600": 300000.0,
    "X53RHM1600": 257000.0,
    "X53LHM1700": 300000.0,
    "X53RHM1700": 300000.0,
    "X53RHM500MH200": 300000.0, 
    "X53RHM600MH200": 300000.0, 
    "X53RHM600MH400": 188000.0,
    "X53RHM700MH200": 300000.0,
    "X53RHM700MH400": 273000.0,
    "X53RHM800MH200": 244000.0, 
    "X53RHM800MH400": 300000.0,
    "X53RHM800MH600": 298000.0,
    "X53RHM900MH200": 288000.0, 
    "X53RHM900MH400": 270000.0,
    "X53RHM900MH600": 268000.0,
    "X53RHM1000MH200": 256000.0,
    "X53RHM1000MH400": 213000.0,
    "X53RHM1000MH600": 300000.0,
    "X53RHM1000MH800": 300000.0,
    "X53RHM1100MH200": 246000.0,
    "X53RHM1100MH400": 280000.0,
    "X53RHM1100MH600": 292000.0,
    "X53RHM1100MH800": 300000.0,  
    "X53RHM1200MH200": 300000.0,  
    "X53RHM1200MH400": 224000.0, 
    "X53RHM1200MH600": 279000.0,
    "X53RHM1200MH800": 239000.0,  
    "X53RHM1200MH1000":298000.0, 
    "X53RHM1500MH200": 286000.0,
    "X53RHM1500MH400": 266000.0,
    "X53RHM1500MH600": 293000.0,
    "X53RHM1500MH800": 251000.0,
    "X53RHM1500MH1000":228000.0    
    },
  "18": {
    "TTTW": 494000.0,
    "TTTJ": 500000.0,
    "TTToHadronic": 299325860.0,
    "TTToSemiLeptonic":12647072.0,
    "TTToSemiLeptonicNjet0": 547148148.0,
    "TTToSemiLeptonicNjet9": 547148148.0,
    "TTToSemiLeptonHT500": 16122362.0,
    "TTTo2L2Nu": 144719936.0,
    "TTTT": 4121538.0,
    "TTWW": 944000.0,
    "TTZZ": 498000.0,
    "TTHH": 500000.0,
    "TTZH": 500000.0,
    "TTWZ": 498000.0,
    "TTWH": 497000.0,
    "TTWl": 10469806.0,
    "TTWq": 1060654.0,
    "TTZM1to10": 550706.0, 
    "TTZM10": 9628114.0,
    "TTHbb": 52878.0,
    "TTHnonbb": 7176599.0,
    "ST_tW_top": 7955614.0,
    "ST_tW_antitop": 7748690.0,
    "ST_t_antitop": 90216506.0, 
    "ST_t_top": 167197018.0,
    "ST_s": 12607741.0, 
    "WW": 15583000.0,
    "WZ": 7940000.0,
    "ZZ": 3526000.0,
    "DYM50HT200": 17967695.0,
    "DYM50HT400": 8170219.0,
    "DYM50HT600": 6958591.0, 
    "DYM50HT800": 6678036.0,
    "DYM50HT1200": 6166852.0, 
    "DYM50HT2500": 1128823.0,
    "WJetsMG200": 58331446.0,
    "WJetsMG400": 7356481.0,
    "WJetsMG600": 7718765.0,
    "WJetsMG800": 7306187.0, 
    "WJetsMG1200": 6481518.0, 
    "WJetsMG2500": 2097648.0,
    "QCDHT200": 171453730.0,
    "QCDHT300": 178987557.0,
    "QCDHT500": 150920413.0,
    "QCDHT700": 96903396.0,
    "QCDHT1000": 41499928.0,
    "QCDHT1500": 10871473.0,
    "QCDHT2000": 5374711.0,
    "X53LHM700": 300000.0, 
    "X53RHM700": 300000.0, 
    "X53LHM800": 300000.0, 
    "X53RHM800": 300000.0, 
    "X53LHM900": 300000.0,
    "X53RHM900": 299000.0,
    "X53LHM1000": 300000.0, 
    "X53RHM1000": 300000.0, 
    "X53LHM1100": 300000.0, 
    "X53RHM1100": 300000.0, 
    "X53LHM1200": 300000.0, 
    "X53RHM1200": 300000.0, 
    "X53LHM1300": 300000.0,
    "X53RHM1300": 300000.0,
    "X53LHM1400": 300000.0,
    "X53RHM1400": 295000.0,
    "X53LHM1500": 300000.0,
    "X53RHM1500": 291000.0,
    "X53LHM1600": 300000.0,
    "X53RHM1600": 292000.0,
    "X53LHM1700": 300000.0,
    "X53RHM1700": 300000.0,
    "X53RHM500MH200": 300000.0, 
    "X53RHM600MH200": 300000.0, 
    "X53RHM600MH400": 188000.0,
    "X53RHM700MH200": 300000.0,
    "X53RHM700MH400": 273000.0,
    "X53RHM800MH200": 244000.0, 
    "X53RHM800MH400": 300000.0,
    "X53RHM800MH600": 298000.0,
    "X53RHM900MH200": 288000.0, 
    "X53RHM900MH400": 270000.0,
    "X53RHM900MH600": 268000.0,
    "X53RHM1000MH200": 256000.0,
    "X53RHM1000MH400": 213000.0,
    "X53RHM1000MH600": 300000.0,
    "X53RHM1000MH800": 300000.0,
    "X53RHM1100MH200": 246000.0,
    "X53RHM1100MH400": 280000.0,
    "X53RHM1100MH600": 292000.0,
    "X53RHM1100MH800": 300000.0,
    "X53RHM1200MH200": 300000.0, 
    "X53RHM1200MH400": 224000.0, 
    "X53RHM1200MH600": 279000.0,
    "X53RHM1200MH800": 239000.0,
    "X53RHM1200MH1000":298000.0, 
    "X53RHM1500MH200": 286000.0,
    "X53RHM1500MH400": 266000.0,
    "X53RHM1500MH600": 293000.0,
    "X53RHM1500MH800": 251000.0,
    "X53RHM1500MH1000":228000.0 
  }
}

xsecEff = { year: {} for year in years }
for year in years:
  for sample in nrun[ year ]:
    try: xsecEff[ year ][ sample ] = lumi[ year ] * xsec[ sample ] / nrun[ year ][ sample ] 
    except: xsecEff[ year ][ sample ] = 0.
