Parent Object:
DrawingDocument
Defined in namespace "adsk::drawing" and the header file is <Drawing/Drawing/DrawingDocument.h>
Saving a document is not supported within any of the Command related events. When a command is running, a transaction is open, and saving a document cannot be transacted and, as a result, cannot be contained within a command transaction.
Introduced in version March 2024
