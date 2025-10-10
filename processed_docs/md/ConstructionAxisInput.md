Derived from:
Base
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/Construction/ConstructionAxisInput.h>
A ConstructionAxisInput is a throwaway object used to create a ConstructionAxis The usage pattern is: a. create a ConstructionAxisInput (ConstructionAxes.CreateInput) b. call one of the member functions to specify how the ConstructionAxis is created c. create the ConstructionAxis (call ConstructionAxes.Add) d. stop referencing the ConstructionAxisInput (so it gets deleted).
ConstructionAxes.createInput
Introduced in version August 2014
