Parent Object:
Data
Defined in namespace "adsk::core" and the header file is <Core/Dashboard/Data.h>
Setting if the data panel is visible is not supported within any of the Command related events. When a command is running, a transaction is open, and changing the visibility of the data panel cannot be transacted and, as a result, cannot be contained within a command transaction.
This is a read/write property whose value is a boolean.
Introduced in version September 2016
