Derived from:
Surface
Object
Defined in namespace "adsk::core" and the header file is <Core/Geometry/NurbsSurface.h>
Transient NURBS surface. A transient NURBS surface is not displayed or saved in a document. A transient NURBS surface is used as a wrapper to work with raw NURBS surface information. A transient NURBS surface is bounded by it's natural boundaries and does not support the definition of arbitrary boundaries. A NURBS surface is typically obtained from a BREPFace object, which does have boundary information. They are created statically using the create method of the NurbsSurface class.
NurbsSurface.copy
,
NurbsSurface.create
Introduced in version August 2014
