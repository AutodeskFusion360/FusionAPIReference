Derived from:
Base
Object
Defined in namespace "adsk::cam" and the header file is <Cam/MachineAvoidSelections/MachineAvoidGroups.h>
Collection of all the mutually exclusive surface groups to be passed to a toolpath with stock to leave and avoid clearances associated to them. This is a read-only container that gets passed to CadMachineAvoidGroupsParameterValue object. It returns the groups associated with the parent parameter value object, but does not write to it. To apply changes done to the collection and the selections it contains, CadMachineAvoidGroupsParameterValue.applyMachineAvoidGroups() needs to be called.
CadMachineAvoidGroupsParameterValue.getMachineAvoidGroups
Introduced in version September 2024
