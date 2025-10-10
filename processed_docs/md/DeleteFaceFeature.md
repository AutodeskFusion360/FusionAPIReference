Derived from:
Feature
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/Features/DeleteFaceFeature.h>
Object that represents an existing DeleteFaceFeature object in a design.
The SurfaceDeleteFaceFeature and DeleteFaceFeature differ in that the SurfaceDeleteFaceFeature can delete any face without any restrictions. If the body is a solid, it will become a surface when the first face is deleted. The specified face is deleted without any other changes being made to the body. The DeleteFaceFeature deletes the specified face and also modifies the other faces in the body to heal or fill in the area of the deleted face. This means that a solid body will remain solid.
DeleteFaceFeature.createForAssemblyContext
,
DeleteFaceFeature.nativeObject
,
DeleteFaceFeatures.add
,
DeleteFaceFeatures.item
,
DeleteFaceFeatures.itemByName
Introduced in version August 2016
