Derived from:
Base
Object
Defined in namespace "adsk::core" and the header file is <Core/Application/Camera.h>
The Camera class represents the information that specifies how a model is displayed within a viewport. It's analogous to a real camera, which has a position in space, is pointed towards a specific point, is oriented in a particular way, and has a specific type of lens.
Whether a camera is created statically using the Camera.create() method or obtained from a Viewport, a Camera object is always temporary and not associated with anything. This means when you get it from a Viewport, the Camera object captures the current state of the Viewport and stores it but doesn't save where it came from, so it is completely independent.
To update the camera settings associated with a Viewport, get a Camera object from a Viewport or create a new Camera using Camera.create(), modify the Camera object to define the view you want, and assign it to the Viewport.
Camera.create
,
NamedView.camera
,
Viewport.camera
Introduced in version August 2014
