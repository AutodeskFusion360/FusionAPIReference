Parent Object:
SketchControlPointSpline
Defined in namespace "adsk::fusion" and the header file is <Fusion/Sketch/SketchControlPointSpline.h>
There are cases where Fusion creates a control point spline but does not display the control frame. An example is when you create an offset of a spline.
If the value of the property is false, you can set it to true to cause the control frame to be displayed. If the curve is being controlled by any existing constraints, setting this property to true will fail. For example, if the curve is the result of an offset and the offset constraint still exists, you cannot turn on the control frame. However, if you first delete the constrains so the curve is now independent you can set this property to true and display the control frame.
Setting this property to false will always fail. Turning off the display of the control frame is not supported by Fusion.
This is a read/write property whose value is a boolean.
Introduced in version October 2022
