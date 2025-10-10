Custom Graphics Overview
Object Model
Triangle Meshes
Line Graphics
Point Graphics
Text Graphics
B-Rep Body Graphics
CurveGraphics
Graphics Colors
Solid Color Effect
Basic Material Color Effect
Appearance Color Effect
Vertex Color Effect
Show Through Color Effect
Additional Graphics Behaviors
Orientation
Size
Combining Orientation and Size
Position
```
# Create a graphics group on the root component.
graphics = root.customGraphicsGroups.add()
```

```
import adsk.core, adsk.fusion, traceback
import math

def run(context):
    try:
        des = adsk.fusion.Design.cast(_app.activeProduct)
        root = des.rootComponent

        # Check to see if a custom graphics groups already exists and delete it.
        if root.customGraphicsGroups.count > 0:
            root.customGraphicsGroups.item(0).deleteMe()
            _ui.messageBox('Deleted existing graphics.')
            _app.activeViewport.refresh()
            return

        # Define the size of the pyramid.
        pyramidSize = 10
        pyramidWidth = math.sqrt(pyramidSize**2 - (pyramidSize/2)**2)
        pyramidHeight = 6
        
        # Create a graphics group on the root component.
        graphics = root.customGraphicsGroups.add()
        
        # Create graphics coordinates for the four points used to define the triangles.
        # An array of the x,y,z components of the coordinates is first defined and then
        # that is passed into the CustomGraphicsCoordinates.create method to create
        # the graphics coordinates.
        coordArray = [0, 0, 0, 
                      pyramidSize, 0, 0, 
                      pyramidSize/2, pyramidWidth, 0, 
                      pyramidSize/2, pyramidWidth*(1/3), pyramidHeight]
        coords = adsk.fusion.CustomGraphicsCoordinates.create(coordArray)
        
        # Create the index list to define how the coordinates are connected
        # into the four triangles.
        vertexIndices = [0,1,2, 0,1,3, 1,2,3, 2,0,3]
        
        # Create the triangle normal vectors. This creates vectors along two of the 
        # edges of each triangle and then uses the vector crossproduct function to 
        # calculate the normal vector.
        vec1 = coords.getCoordinate(0).vectorTo(coords.getCoordinate(1))
        vec2 = coords.getCoordinate(0).vectorTo(coords.getCoordinate(3))
        normal1 = vec1.crossProduct(vec2)
        
        vec1 = coords.getCoordinate(1).vectorTo(coords.getCoordinate(2))
        vec2 = coords.getCoordinate(1).vectorTo(coords.getCoordinate(3))
        normal2 = vec1.crossProduct(vec2)

        vec1 = coords.getCoordinate(2).vectorTo(coords.getCoordinate(0))
        vec2 = coords.getCoordinate(2).vectorTo(coords.getCoordinate(3))
        normal3 = vec1.crossProduct(vec2)

        normals = [0,0,-1,
                   normal1.x, normal1.y, normal1.z, 
                   normal2.x, normal2.y, normal2.z,
                   normal3.x, normal3.y, normal3.z]
        
        # Create the index list to define how the normals are assigned to the vertices.
        normalIndices = [0,0,0, 1,1,1, 2,2,2, 3,3,3]
        
        # Create the mesh.
        mesh = graphics.addMesh(coords, vertexIndices, normals, normalIndices)
                
        # Refresh the graphics.
        _app.activeViewport.refresh()
    except:
        if _ui:
            _ui.messageBox('Failed:\n{}'.format(traceback.format_exc()))
```

```
# Create the index list to define how the lines connect the coordinates.
lineIndices = [0,1, 1,2, 2,0, 0,3, 1,3, 2,3]
lines = graphics.addLines(coords, lineIndices, False)
lines.weight = 2
```

```
# Create a point set to draw points at each vertex of the pyramid.
pointIndices = [0,1,2,3]
points = graphics.addPointSet(coords, pointIndices, 
                   adsk.fusion.CustomGraphicsPointTypes.UserDefinedCustomGraphicsPointType,
                   'TestPoint.png')
```

```
# Draw some text. 
text = 'This is the text'
matrix = adsk.core.Matrix3D.create()
graphicsText = graphics.addText(text, 'Arial', 3, matrix)
```

```
text = 'This is the text.'
matrix = adsk.core.Matrix3D.create()
graphicsText = graphics.addText(text, 'Arial', 3, matrix)

text = 'This is some \Lunderlined\l text.'
matrix.translation = adsk.core.Vector3D.create(0,-5,0)
graphicsText = graphics.addText(text, 'Arial', 3, matrix)

text = 'This is some \H5;larger\H3; text.'
matrix.translation = adsk.core.Vector3D.create(0,-15,0)
graphicsText = graphics.addText(text, 'Arial', 3, matrix)

text = 'This is some \Ooverstrike\o text.'
matrix.translation = adsk.core.Vector3D.create(0,-20,0)
graphicsText = graphics.addText(text, 'Arial', 3, matrix)

text = 'This is some \Q20;slanting\Q0; text.'
matrix.translation = adsk.core.Vector3D.create(0,-25,0)
graphicsText = graphics.addText(text, 'Arial', 3, matrix)

text = 'This is a \W0.5;different\W1; width.'
matrix.translation = adsk.core.Vector3D.create(0,-30,0)
graphicsText = graphics.addText(text, 'Arial', 3, matrix)

text = 'This has \T.75;different \T1.5; spacing \T2;between \T1;the characters.'
matrix.translation = adsk.core.Vector3D.create(0,-35,0)
graphicsText = graphics.addText(text, 'Arial', 3, matrix)

text = 'This is a single text graphics\P with \Pmultiple \Pparagraphs.'
matrix.translation = adsk.core.Vector3D.create(0,-58,0)
graphicsText = graphics.addText(text, 'Arial', 3, matrix)
```

```
import adsk.core, adsk.fusion, traceback

def run(context):
    try:
        des = adsk.fusion.Design.cast(_app.activeProduct)
        root = des.rootComponent

        # Check to see if a custom graphics groups already exists and delete it.
        if root.customGraphicsGroups.count > 0:
            root.customGraphicsGroups.item(0).deleteMe()
            _ui.messageBox('Deleted existing graphics.')
            _app.activeViewport.refresh()
            return

        # Get the first body in the root component.
        body = root.bRepBodies.item(0)
        
        # Create a graphics group on the root component.
        graphics = root.customGraphicsGroups.add()
        
        # Create the graphics body.
        graphicBody = graphics.addBRepBody(body)
        
        # Move the graphics over the width of the body.
        matrix = graphicBody.transform
        matrix.setCell(0, 3, matrix.getCell(0,3) + body.boundingBox.maxPoint.x -
                       body.boundingBox.minPoint.x + 1) 
        graphicBody.transform = matrix
                       
        # Refresh the graphics.
        _app.activeViewport.refresh()
    except:
        if _ui:
            _ui.messageBox('Failed:\n{}'.format(traceback.format_exc()))
```

```
import adsk.core, adsk.fusion, traceback
import math

def run(context):
    try:
        des = adsk.fusion.Design.cast(_app.activeProduct)
        root = des.rootComponent

        # Check to see if a custom graphics groups already exists and delete it.
        if root.customGraphicsGroups.count > 0:
            root.customGraphicsGroups.item(0).deleteMe()
            _ui.messageBox('Deleted existing graphics.')
            _app.activeViewport.refresh()
            return
        
        # Create a graphics group on the root component.
        graphics = root.customGraphicsGroups.add()

        # Create an Arc3D object.
        arc = adsk.core.Arc3D.createByCenter(adsk.core.Point3D.create(0,0,0),
                                             adsk.core.Vector3D.create(0,0,1),
                                             adsk.core.Vector3D.create(1,0,0),
                                             5,
                                             math.pi * 0.5,
                                             math.pi * 1.75)
        
        # Create a Circle3D object.
        circle = adsk.core.Circle3D.createByCenter(adsk.core.Point3D.create(10,0,0),
                                                   adsk.core.Vector3D.create(0,0,1), 5)

        # Create an Ellipse3D.
        ellipse = adsk.core.Ellipse3D.create(adsk.core.Point3D.create(0,10,0),
                                             adsk.core.Vector3D.create(0,0,1),
                                             adsk.core.Vector3D.create(1,0,0),
                                             6, 3)
                                             
        # Create an EllipticalArc3D.
        ellipticalArc = adsk.core.EllipticalArc3D.create(adsk.core.Point3D.create(13,10,0),
                                                         adsk.core.Vector3D.create(0,0,1),
                                                         adsk.core.Vector3D.create(1,0.25,0),
                                                         5, 3, math.pi * 0.25, math.pi * 1.5)

        # Create a Line3D.
        line = adsk.core.Line3D.create(adsk.core.Point3D.create(18,-5,0),
                                       adsk.core.Point3D.create(18,15,0))
        
        # Create a NurbsCurve3D.
        points = [adsk.core.Point3D.create(20,-5,0), adsk.core.Point3D.create(25,-5,0),
                  adsk.core.Point3D.create(25,15,0), adsk.core.Point3D.create(30,15,0)] 
        curve = adsk.core.NurbsCurve3D.createNonRational(points, 3, [0,0,0,0, 1,1,1,1], False)
        
        # Create the custom graphics using the curves.
        arcGraphics = graphics.addCurve(arc)
        arcGraphics.weight = 1.3
        circleGraphics = graphics.addCurve(circle)
        circleGraphics.weight = 1.3
        ellipseGraphics = graphics.addCurve(ellipse)
        ellipseGraphics.weight = 1.3
        arcGraphics = graphics.addCurve(ellipticalArc)
        arcGraphics.weight = 1.3
        lineGraphics = graphics.addCurve(line)
        lineGraphics.weight = 1.3
        curveGraphics = graphics.addCurve(curve)
        curveGraphics.weight = 1.3
        
        # Refresh the graphics.
        _app.activeViewport.refresh()
    except:
        if _ui:
            _ui.messageBox('Failed:\n{}'.format(traceback.format_exc()))
```

```
import adsk.core, adsk.fusion, traceback

def run(context):
    try:
        des = adsk.fusion.Design.cast(_app.activeProduct)
        root = des.rootComponent

        # Check to see if a custom graphics groups already exists and delete it.
        if root.customGraphicsGroups.count > 0:
            root.customGraphicsGroups.item(0).deleteMe()
            _app.activeViewport.refresh()
            return
        
        # Create a graphics group on the root component.
        graphics = root.customGraphicsGroups.add()

        # Get the first body in the root component.
        body = root.bRepBodies.item(0)
        
        # Get the display mesh from the body.
        bodyMesh = body.meshManager.displayMeshes.bestMesh
        
        # Draw the mesh using custom graphics triangles.
        coords = adsk.fusion.CustomGraphicsCoordinates.create(bodyMesh.nodeCoordinatesAsDouble)
        mesh = graphics.addMesh(coords, bodyMesh.nodeIndices, 
                                bodyMesh.normalVectorsAsDouble, bodyMesh.nodeIndices)
        
        # Draw a series of lines.
        linePoints = [12,-10,0, 14,10,0, 16,8,0, 17,0,0, 16,-8,0, 18,-8,0, 19,10,0]
        lineCoords = adsk.fusion.CustomGraphicsCoordinates.create(linePoints)
        lines = graphics.addLines(lineCoords, [], True)
        lines.weight = 1.5
                
        # Refresh the graphics.
        _app.activeViewport.refresh()
    except:
        if _ui:
            _ui.messageBox('Failed:\n{}'.format(traceback.format_exc()))
```

```
# Create the color effect.
redColor = adsk.core.Color.create(255,0,0,255)
solidColor = adsk.fusion.CustomGraphicsSolidColorEffect.create(redColor)

# Assign the effect to the graphics entities.
mesh.color = solidColor
lines.color = solidColor
```

```
# Create the color effect.
diffuse = adsk.core.Color.create(255,0,0,255)
ambient = adsk.core.Color.create(255,0,0,255)
specular = adsk.core.Color.create(255,255,255,255)
emissive = adsk.core.Color.create(0,0,0,255)
glossy = 60
opacity = 1.0
redBasicMaterial = adsk.fusion.CustomGraphicsBasicMaterialColorEffect.create(diffuse,
                                                                             ambient,
                                                                             specular,
                                                                             emissive,
                                                                             glossy,
                                                                             opacity)
# Assign the effect to the graphics entities.
mesh.color = redBasicMaterial
lines.color = redBasicMaterial
```

```
# Check to see if the appearance already exists in the design.
myCarbon = des.appearances.itemByName('My Carbon')
if not myCarbon:
    # The appearance doesn't exist, so copy it in from the library.
    library = _app.materialLibraries.itemByName('Fusion Appearance Library')
            
    carbon = library.appearances.itemByName('Carbon Fiber - Plain')
    myCherry = des.appearances.addByCopy(carbon, 'My Carbon')

# Create an appearance color effect using the appearance.           
carbonColor = adsk.fusion.CustomGraphicsAppearanceColorEffect.create(myCherry)

# Assign the color effect to the graphics entities.
mesh.color = carbonColor
lines.color = carbonColor
```

```
# Build up an array of colors for the coordinates based on their Y height for the mesh.
maxY = body.boundingBox.maxPoint.y
minY = body.boundingBox.minPoint.y
colorInfo = []
coord = adsk.core.Point3D.cast(None)
for coord in bodyMesh.nodeCoordinates:
    # Set the color information for the current vertex.  It's computed by
    # determining the percentage of the total Y range of the body this vertex
    # is within.  A color between red and blue is computed based on this percentage.
    # Blue is at the minimum Z and Red is at the maximum Y with blending between.
    red = ((coord.y - minY) / (maxY-minY)) * 255
    blue = ((maxY - coord.y) / (maxY-minY)) * 255
            
    colorInfo.extend([int(red), 0, int(blue), 255])
                       
# Assign colors to the coordinates.
coords.colors = colorInfo

# Set the mesh to be colored using a vertex color effect.
vertexColor = adsk.fusion.CustomGraphicsVertexColorEffect.create()
mesh.color = vertexColor
```

```
# Create the show through color effect.
showThrough = adsk.fusion.CustomGraphicsShowThroughColorEffect.create(adsk.core.Color.create(255, 0, 0, 255), 0.2)
graphicsBody.color = showThrough

# Set the mesh to be colored using the show through color effect.
mesh.color = showThrough
```

```
import adsk.core, adsk.fusion, traceback

def run(context):
    try:
        des = adsk.fusion.Design.cast(_app.activeProduct)
        root = des.rootComponent

        # Check to see if a custom graphics groups already exists and delete it.
        if root.customGraphicsGroups.count > 0:
            root.customGraphicsGroups.item(0).deleteMe()
            _app.activeViewport.refresh()
            return
        
        # Create a graphics group on the root component.
        graphics = root.customGraphicsGroups.add()

        trianglePoints = [0,0,0, 4,0,0, 0,2,0]
        triangleCoords = adsk.fusion.CustomGraphicsCoordinates.create(trianglePoints)
        
        # Create the mesh.
        mesh = graphics.addMesh(triangleCoords, [], [], [])
        
        diffuse = adsk.core.Color.create(0,255,0,255)
        ambient = adsk.core.Color.create(0,255,0,255)
        specular = adsk.core.Color.create(255,255,255,255)
        emissive = adsk.core.Color.create(0,0,0,255)
        glossy = 60
        opacity = 1.0
        greenBasicMaterial = adsk.fusion.CustomGraphicsBasicMaterialColorEffect.create(diffuse,
                                                                                       ambient,
                                                                                       specular,
                                                                                       emissive,
                                                                                       glossy,
                                                                                       opacity)
                                                                                     
        mesh.color = greenBasicMaterial
                
        # Refresh the graphics.
        _app.activeViewport.refresh()
    except:
        if _ui:
            _ui.messageBox('Failed:\n{}'.format(traceback.format_exc()))
```

```
# Set the mesh to be front foacing and anchored at (0,0,0).
billBoard = adsk.fusion.CustomGraphicsBillBoard.create(adsk.core.Point3D.create(0,0,0))
billBoard.billBoardStyle = adsk.fusion.CustomGraphicsBillBoardStyles.ScreenBillBoardStyle
mesh.billBoarding = billBoard
```

```
# Set the mesh to use view scaling.
viewScale = adsk.fusion.CustomGraphicsViewScale.create(50, adsk.core.Point3D.create(0,0,0))
mesh.viewScale = viewScale
```

```
# Set the mesh to be front foacing and anchored at (0,0,0).
billBoard = adsk.fusion.CustomGraphicsBillBoard.create(adsk.core.Point3D.create(0,0,0))
billBoard.billBoardStyle = adsk.fusion.CustomGraphicsBillBoardStyles.ScreenBillBoardStyle 
mesh.billBoarding = billBoard

# Set the mesh to use view scaling.
viewScale = adsk.fusion.CustomGraphicsViewScale.create(50, adsk.core.Point3D.create(0,0,0))
mesh.viewScale = viewScale
viewPlace = adsk.fusion.CustomGraphicsViewPlacement.create(adsk.core.Point3D.create(0,0,0),
                                              adsk.fusion.ViewCorners.lowerRightViewCorner, 
                                              adsk.core.Point2D.create(210, 10))
mesh.viewPlacement = viewPlace
```
