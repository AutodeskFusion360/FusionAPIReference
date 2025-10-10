1. A component contains geometry, whereas an occurrence has no geometry of it own, but merely displays the geometry contained in the component it references.
1. Component geometry is always defined with respect to model space and cannot be repositioned or constrained.  Occurrences can be reoriented, repositioned and constrained anywhere in the design.
1. Components are not shown directly in the browser or graphics window (with the exception of the root component).  Occurrences are shown in the browser and the graphics window.
1. An occurrence can have an appearance override that can distinguish it from other occurrences.  Applying an appearance to a body in a component would in turn affect all of the occurrences that reference that component.
