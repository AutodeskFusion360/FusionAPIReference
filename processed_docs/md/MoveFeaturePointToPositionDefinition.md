Derived from:
MoveFeatureDefinition
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/Features/MoveFeaturePointToPositionDefinition.h>
The MoveFeaturePointToPositionDefinition object defines a move feature described by a point and an offset. The distances define offsets in the X, Y, and Z directions in either design or component space. To not move the input entities at all the offset distances should be set to the current location of the point in either design or component space. Adding or subtracting to those values will then move the entities that distance. It's best to experiment with the command interactively to understand the behavior.
Introduced in version January 2023
