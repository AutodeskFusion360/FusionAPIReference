Derived from:
Base
Object
Defined in namespace "adsk::core" and the header file is <Core/Application/UnitsManager.h>
Utility class used to work with Values and control default units. Internal values are held in SI units (e.g. seconds, radians, kg for time, angle, mass) with the exception that all lengths are in cm rather than meter and this affects derived units (e.g. velocity is cm/s, volume is cm^3). Units are specified flexibility via strings (e.g. "cm", "in", "inch", "cm^3", "cm*cm*cm", "mph", "mps" "m/s"). Units like length can be defaulted based on the design settings if the user does not explicitly specify units - so "3" can be 3 inches, mm or cm depending on what the design settings are.
CAM.unitsManager
,
Design.unitsManager
,
Drawing.unitsManager
,
FlatPatternProduct.unitsManager
,
Product.unitsManager
,
WorkingModel.unitsManager
FusionUnitsManager
Introduced in version August 2014
