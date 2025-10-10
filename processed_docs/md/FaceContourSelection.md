Derived from:
CurveSelection
Object
Defined in namespace "adsk::cam" and the header file is <Cam/GeometrySelections/FaceContourSelection.h>
Represents a face type of curve selection. It allows BRepFace objects for the input geometry. Overrides the GeometrySelection's value method to include other faces if the isSelectingSamePlaneFaces property is true and the selection has been applied. The result of the value property call may contain duplicates.
CurveSelections.createNewFaceContourSelection
Introduced in version April 2023
