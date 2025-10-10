Derived from:
Base
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/Features/CustomFeatureDependency.h>
This functionality is provided as a preview
				of intended future API capabilities. You are encouraged to use it and report any problems or suggestions using theFusion API and Scriptsforum.Because this is a preview of future functionality, there is the possibility that it will change, which will possibly
		        break any existing programs that use this functionality. Because of that, you should never deliver any programs that use
		        any preview capabilities. For a distributed program, you should wait until it has moved from preview to released state.

A custom feature dependency defines a dependency the custom feature has on an entity outside the custom feature. For example, a feature might be dependent on a face or a point and if those entities are modified the custom feature needs to recompute to be up to date.
CustomFeatureDependencies.add
,
CustomFeatureDependencies.item
,
CustomFeatureDependencies.itemById
Introduced in version January 2021
