Derived from:
Base
Object
Defined in namespace "adsk::core" and the header file is <Core/Geometry/BoundingBox2D.h>
Transient object that represents a 2D bounding box. A 2D bounding box is a rectangle box that is parallel to the x and y axes. The box is defined by a minimum point (smallest x-y values) and maximum point (largest x-y values). This object is a wrapper for these points and serves as a way to pass bounding box information in and out of functions. It also provides some convenience function when working with the bounding box data. They are created statically using the create method of the BoundingBox2D class.
ArrangePlaneResultEnvelope.boundingBox
,
BoundingBox2D.copy
,
BoundingBox2D.create
,
ConstructionPlane.displayBounds
,
SurfaceEvaluator.parametricRange
Introduced in version August 2014
