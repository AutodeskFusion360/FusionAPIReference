Derived from:
CommandInput
Object
Defined in namespace "adsk::core" and the header file is <Core/UserInterface/TriadCommandInput.h>
Represents a command input that displays a triad and allows the user to control translation rotation, and scaling. Using properties on the input you can choose which controls are available to the user. This displays inputs in the command dialog where the user can enter values and also displays a manipulator in the graphics window to allow them to graphically set the values. The input boxes are displayed in the dialog when the isVisible property of the command input is true. The manipulator is displayed in the graphics window when both the isVisible and isEnabled properties are true.
It will often be useful to first create a GroupCommandInput and then create the TriadCommandInput within the group so it's apparent to the user these items are related and they can be collapsed to reduce clutter in the dialog. This also allows you to label the set of displayed inputs by using the name of the GroupCommandInput.
CommandInputs.addTriadCommandInput
Introduced in version May 2022
