Derived from:
Base
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/Sketch/SharedPointCoincident.h>
An object that is only used when a glyph representing a special type of coincident constraint is selected in the user interface. An example of its use is when two lines are connected at their endpoints. If you hover the mouse over the shared endpoint, a coincident constraint glyph is displayed and highlights the two lines. Selecting the glyph and deleting it will cause the lines to be separate. In this case, there isn't a real coincident constraint, but the two lines share the same sketch point. The UI uses this "fake" coincident constraint to indicate that the lines share the same point. It also supports separating them when the glyph is deleted by creating a new point and moving one of the lines to it.
A selection returns this object when a glyph representing this special type of coincident constraint is selected. It is only used for selections and provides access to the highlighted entities when the glyph is selected.
Introduced in version March 2025
