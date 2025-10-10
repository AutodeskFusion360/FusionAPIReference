Derived from:
GraphNodeProperty
Object
Defined in namespace "adsk::volume" and the header file is <Volume/Volumetric/ColorControlPointMapGraphNodeProperty.h>
This functionality is provided as a preview
				of intended future API capabilities. You are encouraged to use it and report any problems or suggestions using theFusion API and Scriptsforum.Because this is a preview of future functionality, there is the possibility that it will change, which will possibly
		        break any existing programs that use this functionality. Because of that, you should never deliver any programs that use
		        any preview capabilities. For a distributed program, you should wait until it has moved from preview to released state.

A property value that defines a complex mapping curve from an input domain of double values to an output range of color values. The mapping is represented by a set of points ordered by their domain value parameters. For a given input value, the output value is interpolated from the values of the two points before and after it using the specified interpolation function for each point.
Introduced in version May 2025
