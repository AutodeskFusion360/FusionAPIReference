Derived from:
UnitsManager
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/Fusion/FusionUnitsManager.h>
Utility class used to work with Values and control default design units. Internal values are held in SI units (e.g. seconds, radians, kg for time, angle, mass) with the exception that all lengths are in cm rather than meter and this affects derived units (e.g. velocity is cm/s, volume is cm^3). Units are specified flexibly via strings (e.g. "cm", "in", "inch", "cm^3", "cm*cm*cm", "mph", "mps" "m/s").
Design.fusionUnitsManager
,
FlatPatternProduct.fusionUnitsManager
,
WorkingModel.fusionUnitsManager
Introduced in version August 2014
