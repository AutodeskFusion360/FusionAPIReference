Derived from:
Event
Object
Defined in namespace "adsk::core" and the header file is <Core/UserInterface/ActiveSelectionEvent.h>
This event fires whenever the contents of the active selection changes. This occurs as the user selects or unselects entities while using the Fusion Select command. The Select command is the default command that is always running if no other command is active. Pressing Escape terminates the currently active command and starts the Select command. If the Select command is running and you press Escape, it terminates the current Select command and starts a new one.
This event is only associated with the selection associated with the Select command and does not fire when any other command is running. The event fires when there is any change to the active selection, including when the selection is cleared when the Select command is terminated. It is also fired when the user clicks in an open area of the canvas to clear the current selection.
UserInterface.activeSelectionChanged
Introduced in version August 2020
