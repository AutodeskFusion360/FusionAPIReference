This sample script demonstrates how to find and machine engravings in the Z+ direction using pocket recognition.

The script will first open an example model via its URN. Using pocket recognition, it will identify pockets that may be engravings based on their dimensions.

We assume here that an engraving pocket is:Made with a flat bottom face and no fillet.A closed pocket.Have a Z height less than 2 mmWe demonstrate creating selection sets in both design and manufacture workspaces and use one of the selection sets as an operation geometry selection input to generate an engraving operation.The engraving toolpath can be seen by expanding the setup and selecting the operation.
