Derived from:
Feature
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/MeshBody/MeshConvertFeature.h>
This functionality is provided as a preview
				of intended future API capabilities. You are encouraged to use it and report any problems or suggestions using theFusion API and Scriptsforum.Because this is a preview of future functionality, there is the possibility that it will change, which will possibly
		        break any existing programs that use this functionality. Because of that, you should never deliver any programs that use
		        any preview capabilities. For a distributed program, you should wait until it has moved from preview to released state.

Object that represents an existing mesh convert feature in a design. To change the properties of this feature, you need to position the timeline marker to immediately before this feature. This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
MeshConvertFeature.createForAssemblyContext
,
MeshConvertFeature.nativeObject
,
MeshConvertFeatures.add
,
MeshConvertFeatures.item
,
MeshConvertFeatures.itemByName
Introduced in version July 2025
