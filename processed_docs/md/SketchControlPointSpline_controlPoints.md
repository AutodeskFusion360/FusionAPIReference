Parent Object:
SketchControlPointSpline
Defined in namespace "adsk::fusion" and the header file is <Fusion/Sketch/SketchControlPointSpline.h>
There are cases, like when a curve is offset, where a control point spline is created but the control frame is not displayed and the curve is not editable. You can check for this case by checking the value of the isControlFrameDisplayed property. If it is true, this property will return an empty array of control points since they do not currently exist.
This is a read only property whose value is an array of type
SketchPoint
.
Introduced in version July 2022
