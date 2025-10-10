Derived from:
CustomGraphicsEntity
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/Graphics/CustomGraphicsCurve.h>
This represents custom graphics that are based on any object derived from Curve3D (except InfiniteLine3D). This is useful when drawing curved geometry where the alternative is to stroke the smooth curve and draw it as a series of lines. Using this you can directly use the curve and Fusion will automatically take care of creating the correct display for the current level of detail.
CustomGraphicsGroup.addCurve
Introduced in version September 2017
