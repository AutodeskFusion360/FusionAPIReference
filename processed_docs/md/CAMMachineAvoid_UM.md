The machining mode that is currently set will determine which value the radial and axial offset functions refer to. When set to Machine, the radial and axial offset functions will read/set the stock to leave parameter for the current group. When set to Avoid, the radial and axial offset methods will read/set the clearance value, and the Fixture mode will map to the fixture clearance value. This is supported in the API through the
MachineAvoidDefaultSelection
,
MachineAvoidDirectSelection
, and
MachineAvoidGroups
objects.
