  &SUBSYS
    &CELL
      A 14.413900       0.0  0.0
      B 0.0       14.413900        0.0
      C 0.0 	   0.0		14.413900
    &END CELL
    &TOPOLOGY
      COORD_FILE_FORMAT xyz
      COORD_FILE_NAME Na-RHO.xyz
    &END TOPOLOGY
    &KIND Si
      BASIS_SET TZV2P-GTH
      POTENTIAL GTH-PBE-q4
      GPW_TYPE
    &END KIND
    &KIND O
      BASIS_SET TZV2P-GTH
      POTENTIAL GTH-PBE-q6
    &END KIND
    &KIND Al
      BASIS_SET TZV2P-GTH
      POTENTIAL GTH-PBE-q3
      GPW_TYPE
    &END KIND
    &KIND Na
      BASIS_SET DZVP-MOLOPT-SR-GTH
      POTENTIAL GTH-PBE-q9
    &END KIND
  &END SUBSYS