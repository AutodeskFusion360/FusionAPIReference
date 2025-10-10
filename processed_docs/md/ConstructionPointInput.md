Derived from:
Base
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/Construction/ConstructionPointInput.h>
A ConstructionPointInput is a throwaway object used to create a ConstructionPoint The usage pattern is a. create a ConstructionPointInput (ConstructionPoints.CreateInput) b. call one of the member functions to specify how the ConstructionPoint is created c. create the ConstructionPoint (call ConstructionPoints.Add) d. stop referencing the ConstructionPointInput (so it gets deleted).
ConstructionPoints.createInput
Introduced in version August 2014
