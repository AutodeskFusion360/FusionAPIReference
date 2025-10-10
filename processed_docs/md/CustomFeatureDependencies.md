Derived from:
Base
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/Features/CustomFeatureDependencies.h>
This functionality is provided as a preview
				of intended future API capabilities. You are encouraged to use it and report any problems or suggestions using theFusion API and Scriptsforum.Because this is a preview of future functionality, there is the possibility that it will change, which will possibly
		        break any existing programs that use this functionality. Because of that, you should never deliver any programs that use
		        any preview capabilities. For a distributed program, you should wait until it has moved from preview to released state.

A collection of dependencies associated with a particular custom feature. These are the entities that the custom feature is dependent on. If these entities are modified, it will cause the custom feature to recompute so it can be up to date. These dependencies are saved with the custom feature and can be accessed at a later time, typically during the compute, to access and use the entities.
CustomFeature.dependencies
Introduced in version January 2021
