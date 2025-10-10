Parent Object:
SketchArcs
Defined in namespace "adsk::fusion" and the header file is <Fusion/Sketch/SketchArcs.h>
Sketch arcs always exist in a counterclockwise direction. Even though you can specify a negative sweep to define an arc in a clockwise direction, the result will still be a counterclockwise arc. This means if you query the created sketch arc, the start and end points may be opposite of what you expect.
Introduced in version August 2014
