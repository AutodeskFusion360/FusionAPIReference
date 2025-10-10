1. Components don't have materials.  Materials are only applied to a body.  When a material is assigned to a component, it is just a short cut to assign it to each of its child bodies.
2. Getting the material from a component is only valid in the case where all of it's child bodies have the same material.
3. A body will default to the appearance defined by the material.
4. An appearance override can be assigned to a body, which overrides the appearance from the material.
5. An appearance override can be assigned to a face, which overrides the appearance from the body.
6. Occurrences can also have an override appearance.  They just override the ??? app
