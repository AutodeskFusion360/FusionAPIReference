Derived from:
Base
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/Construction/ConstructionPlaneInput.h>
A ConstructionPlaneInput is a throwaway object used to create a ConstructionPlane The usage pattern is: a. create a ConstructionPlaneInput (ConstructionPlanes.CreateInput) b. call one of the member functions to specify how the ConstructionPlane is created c. create the ConstructionPlane (call ConstructionPlanes.Add) d. stop referencing the ConstructionPlaneInput (so it gets deleted).
ConstructionPlanes.createInput
Introduced in version August 2014
