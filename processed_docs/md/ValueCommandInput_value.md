Parent Object:
ValueCommandInput
Defined in namespace "adsk::core" and the header file is <Core/UserInterface/ValueCommandInput.h>
The isValidExpression property should be checked before using this value within the command because if the expression can't be evaluated there isn't a valid value. Fusion won't allow the execution of a command that contains ValueCommandInput object with invalid expressions so you can dependably use the value in the execute event of the command.
This is a read/write property whose value is a double.
Introduced in version August 2014
