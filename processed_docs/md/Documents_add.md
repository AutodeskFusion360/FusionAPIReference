Parent Object:
Documents
Defined in namespace "adsk::core" and the header file is <Core/Application/Documents.h>
Creating a document is not supported within any of the Command related events. When a command is running, a transaction is open, and creating and closing documents cannot be transacted and, as a result, cannot be contained within a command transaction.
Introduced in version November 2014
