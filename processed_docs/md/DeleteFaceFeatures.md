Derived from:
Base
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/Features/DeleteFaceFeatures.h>
Collection that provides access to all of the existing DeleteFaceFeature features in a component and supports the ability to create new DeleteFaceFeature features.
The SurfaceDeleteFaceFeature and DeleteFaceFeature differ in that the SurfaceDeleteFaceFeature can delete any face without any restrictions. If the body is a solid, it will become a surface when the first face is deleted. The specified face is deleted without any other changes being made to the body. The DeleteFaceFeature deletes the specified face and also modifies the other faces in the body to heal or fill in the area of the deleted face. This means that a solid body will remain solid.
Features.deleteFaceFeatures
Introduced in version August 2016
