Derived from:
Base
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/Features/Path.h>
The Path object represents a single set of connected curves. The order of the objects within the collection is the same as the connection order of the entities. When using a Path to create a feature, the Path serves as a way to pass in the set of sketch entities and edges. When getting the Path of an existing feature it returns the actual path used to define the feature geometry. In cases like a sweep feature, this can result in using portions of the original input sketch curves or edges and the returned path will provide these "partial" curves as the PathEntity objects.
Features.createPath
,
Path.create
,
Path.createForAssemblyContext
,
Path.nativeObject
,
PathEntity.parentPath
,
PathPatternFeature.path
,
PathPatternFeatureInput.path
,
PipeFeature.path
,
PipeFeatureInput.path
,
SweepFeature.guideRail
,
SweepFeature.path
,
SweepFeatureInput.guideRail
,
SweepFeatureInput.path
Introduced in version November 2014
