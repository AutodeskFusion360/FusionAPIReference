Derived from:
Base
Object
Defined in namespace "adsk::core" and the header file is <Core/UserInterface/CommandDefinition.h>
The CommandDefinition is the base class of the various types of commands. Command types are based on the type of control used to execute them in the user-interface. For example, most commands will use a ButtonDefinition since they're executed using a button in the user-interface. A command definition contains the information that defines the user-interface. For example, the name and icon. The command definition and also gets the notification when the user interacts with the associated control.
ApplicationCommandEventArgs.commandDefinition
,
Command.parentCommandDefinition
,
CommandControl.commandDefinition
,
CommandDefinitions.addButtonDefinition
,
CommandDefinitions.addCheckBoxDefinition
,
CommandDefinitions.addListDefinition
,
CommandDefinitions.item
,
CommandDefinitions.itemById
,
SplitButtonControl.additionalDefinitions
,
SplitButtonControl.defaultCommandDefinition
Introduced in version August 2014
