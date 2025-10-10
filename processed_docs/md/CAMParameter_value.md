Parent Object:
CAMParameter
Defined in namespace "adsk::cam" and the header file is <Cam/Operations/CAMParameter.h>
Within CAM operations, floating point values (via FloatParameterValue) are returned and set using a standardized set of "internal" units, rather than using the document units. The units used depend on the type of parameter. For reference, the units used are:
- Length - centimeters (cm)
- Angle - radians (rad)
- Linear velocity - millimeters/minute (mm/min)
- Rotational velocity - revolutions per minute (rpm)
- Time - seconds (s)
- Weight - kilograms (kg)
- Power - Watts (W)
- Flow rate - liters/minute (l/min)
- Area - square centimeters (cm²)
- Volume - cubic centimeters (cm³)
- Temperature - degrees Celsius (C)

This is a read only property whose value is a
ParameterValue
.
Introduced in version November 2021
