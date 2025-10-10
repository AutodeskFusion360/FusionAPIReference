Derived from:
CurveSelection
Object
Defined in namespace "adsk::cam" and the header file is <Cam/GeometrySelections/ChainSelection.h>
Represents a chain type of curve selection. Allows B-Rep edges and sketch geometry for the inputGeometry property. The automatic tool side detection is currently disabled when using the API, thus the side is determined based on the direction of the first edge and the z-axis of the tool orientation.
This class overrides the value property of its GeometrySelection parent to return the result edge selection. The result may contain more edges than the input if gaps between the desired start and end edge were automatically filled.
CurveSelections.createNewChainSelection
Introduced in version April 2023
