Derived from:
EventArgs
Object
Defined in namespace "adsk::core" and the header file is <Core/UserInterface/ActiveSelectionEventArgs.h>
The ActiveSelectionEventArgs provides information associated with the active selection changing. The event fires whenever the contents of the active selection changes. This occurs as the user selects or unselects entities while using the Fusion Select command. The Select command is the default command that is always running if no other command is active. Pressing Escape terminates the currently active command and starts the Select command. If the Select command is running and you press Escape, it terminates the current Select command and starts a new one.
An array or list of all the currently selected entities is returned. This is the same set of entities accessed through the UserInterface.activeSelection object. An empty array can be returned in the case where the selection has been cleared which can occur by the user unselecting and entity, terminating the select command pressing Escape or running another command or clicking the mouse in an open area of the canvas.
Introduced in version August 2020
