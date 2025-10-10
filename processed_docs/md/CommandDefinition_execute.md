Parent Object:
CommandDefinition
Defined in namespace "adsk::core" and the header file is <Core/UserInterface/CommandDefinition.h>
The execute method is not supported within any of the Command related events because it results in starting a new command which has the side-effect of terminating the current command, which is your running command.
Introduced in version August 2014
