Derived from:
CurveSelection
Object
Defined in namespace "adsk::cam" and the header file is <Cam/GeometrySelections/PocketSelection.h>
Pocket type for a curve selection. Allows planar BREP face selections for the input geometry. Overrides the GeometrySelection's the value property to include other faces if isSelectingSamePlaneFaces is set to true and the selection has been applied. The result of the value property call may contain duplicates. Note: selecting arbitrary faces, only planar faces are actually added to the list of faces to work with.
CurveSelections.createNewPocketSelection
Introduced in version April 2023
