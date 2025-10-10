Derived from:
Event
Object
Defined in namespace "adsk::core" and the header file is <Core/Application/CustomEvent.h>
A CustomEvent is primarily used to send an event from a worker thread you've created back to your add-in, which is running in the primary thread. It's also possible for add-ins to cooperate and another add-in can trigger this event in your add-in by knowing the custom event id.
Application.registerCustomEvent
Introduced in version January 2017
