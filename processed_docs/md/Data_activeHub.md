Parent Object:
Data
Defined in namespace "adsk::core" and the header file is <Core/Dashboard/Data.h>
Setting the active hub is not supported within any of the Command related events. When a command is running, a transaction is open, and changing the active hub cannot be transacted and, as a result, cannot be contained within a command transaction.
This is a read/write property whose value is a
DataHub
.
Introduced in version September 2016
