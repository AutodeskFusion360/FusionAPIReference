It becomes a problem when an add-in wants to continue to run and not give up the main thread.  This blocks Fusion from doing any other work. For example, if an add-in wants to monitor a known file to see if it's modified date changes.  One way to do this is to have a loop that continuously checks the date of the file.  However, if you have a function in an add-in that does this, it will block the use of Fusion because it is monopolizing the main thread.  Fusion does support a doEvents function which temporarily returns control back to Fusion to allow any queued up actions to be processed and then it goes back to the running function.  It's not appropriate to use this in a long term loop and will likely result in Fusion crashing at some point.  The better solution is to have the add-in start a new worker thread that will do whatever work needs to be done and set up a custom event so the worker thread can notify the add-in of it's progress or when it's complete.  When the worker thread causes the event to be fired, the add-in then gains control of the main thread where it can do whatever is appropriate.

1. 
1. 
1. 
1.
