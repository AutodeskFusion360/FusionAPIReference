#### Known Issues

1. When specifying a length or angle, it is using the document units. The API always uses internal units, so length should always be centimeters and angles should always be radians.
1. It’s not returning the correct occurrences when getting the ArrangeOccurrences from an envelope.
1. EnvelopeDefinition.isPartialArrangeAllowed fails if the return is False.
1. Setting the ArrangeComponent.quantity to -1 to indicate it should use the global value fails.
1. Setting the ArrangeComponent.isFiller doesn’t have the expected result.

### Overview of the Arrange Feature

### Creating an Arrange Feature

```
import traceback
import adsk.core
import adsk.fusion

app = adsk.core.Application.get()
ui  = app.userInterface

def run(context):
     try:
         des: adsk.fusion.Design = app.activeProduct
         comp = des.rootComponent
         arrangeFeats = comp.features.arrangeFeatures

         # Create the input.
         arrangeInput: adsk.fusion.ArrangeFeatureInput = arrangeFeats.createInput(
                         adsk.fusion.ArrangeSolverTypes.Arrange2DTrueShapeSolverType)

         # Get the definition object from the input.
         arrangeDefInput: adsk.fusion.ArrangeDefinition2DInput = arrangeInput.definition

         # Modify some of the arrange settings.
         arrangeDefInput.globalRotation = adsk.fusion.ArrangeRotationTypes.AllRotationsArrangeRotationType
         arrangeDefInput.isGlobalDirectionFaceUp = True
         arrangeDefInput.isPartInPartAllowed = True

         # Get the ArrangeComponents collection from the input objects.
         arrComponents = arrangeInput.arrangeComponents
 
         # Get the occurrences to arrange.
         occ1 = comp.allOccurrences.itemByName('Block with Opening:1')
         occ2 = comp.allOccurrences.itemByName('Solid Block:1')
         occ3 = comp.allOccurrences.itemByName('Sketch Circle:1')
 
         # Add each occurence as an arrange component.
         arrComp1 = arrComponents.add(occ1)
         arrComp2 = arrComponents.add(occ2.bRepBodies[0])
         arrComp3 = arrComponents.add(occ3.component.sketches[0].profiles[0])
 
         # Set some properties of each arrange component.
         arrComp1.quantity = 3
         arrComp1.priority = adsk.fusion.ArrangePriorities.VeryHighArrangePriority
         arrComp2.quantity = 4
         arrComp3.isFiller = True
         arrComp3.quantity = 99
 
         # Define a plane envelope.
         planeEnv = arrangeInput.setPlaneEnvelope(comp.xYConstructionPlane, 
                                                 adsk.core.ValueInput.createByString('50 cm'),
                                                 adsk.core.ValueInput.createByString('30 cm'))

         # Modify some additional properties of the envelope.
         planeEnv.originXOffset = adsk.core.ValueInput.createByString('40 cm')
         planeEnv.originYOffset = adsk.core.ValueInput.createByString('0 cm')
         planeEnv.quantity = adsk.core.ValueInput.createByReal(4)
         planeEnv.objectSpacing = adsk.core.ValueInput.createByString('1 cm')
         planeEnv.envelopeSpacing = adsk.core.ValueInput.createByString('0.5 cm')

         # Create the arrange feature.
         arrange = arrangeFeats.add(arrangeInput)
     except:
         ui.messageBox('Failed:\n{}'.format(traceback.format_exc()))
```

### Querying and Editing an Arrange Feature

```
# Get the current position of the timeline marker.
currentPstn = design.timeline.markerPosition

# Reposition the timeline marker to just before the Arrange feature.
arrangeFeature.timelineObject.rollTo(True)

# Make the desired changes to the Arrange feature.
arrangeFeature.definition.grainDirection.value = math.radians(10)
arrangeFeature.envelopeDefinition.frameWidth.value = 0.5
arrangeFeature.envelopeDefinition.isPartialArrangeAllowed = True

# Reposition the timeline marker to its original position.
design.timeline.markerPosition = currentPstn
```

```
import traceback
import adsk.core
import adsk.fusion 

app = adsk.core.Application.get()
ui  = app.userInterface

def run(context):
    try:
        savePstn = des.timeline.markerPosition
        app.log('========== Arrange Features ============')
        for arrange in des.rootComponent.features.arrangeFeatures:
            arrange.timelineObject.rollTo(True)

            app.log(f'   Arrange Feature: {arrange.name}')
            arrangeDef = arrange.definition

            if arrangeDef.solverType == adsk.fusion.ArrangeSolverTypes.Arrange2DTrueShapeSolverType:
                app.log('      Solver Type: 2D True Shape')
            elif arrangeDef.solverType == adsk.fusion.ArrangeSolverTypes.Arrange2DRectangularSolverType:
                app.log('      Solver Type: 2D Rectangular')
            if arrangeDef.solverType == adsk.fusion.ArrangeSolverTypes.Arrange3DSolverType:
                app.log('      Solver Type: 3D')

            app.log(f'      Create Copies: {arrangeDef.isCreateCopies}')
            app.log(f'      Global Direction is Face Up: {arrangeDef.isGlobalDirectionFaceUp}')
            app.log(f'      Global Quantity: {arrangeDef.globalQuantity.value}')
            app.log(f'      Grain Direction: {arrangeDef.grainDirection.value}')

            if arrangeDef.solverType == adsk.fusion.ArrangeSolverTypes.Arrange2DTrueShapeSolverType:
                app.log(f'      Parts in Parts Allowed: {arrangeDef.isPartInPartAllowed}')
            
            if (arrangeDef.solverType == adsk.fusion.ArrangeSolverTypes.Arrange2DTrueShapeSolverType or
                arrangeDef.solverType == adsk.fusion.ArrangeSolverTypes.Arrange2DRectangularSolverType):
                app.log(f'      Global Rotation Type: {GetEnumName(adsk.fusion.ArrangeRotationTypes, arrangeDef.globalRotation)}')

            comps = arrange.arrangeComponents
            app.log(f'      Components ({comps.count})')
            for comp in comps:
                app.log(f'         Occurrence ({comp.occurrence.name})')

                if comp.occurrenceOrFace.objectType == adsk.fusion.Occurrence.classType():
                    app.log('            SelectionType: Occurrence')
                elif comp.occurrenceOrFace.objectType == adsk.fusion.BRepFace.classType():
                    app.log('            SelectionType: Face')         

                if (arrangeDef.solverType == adsk.fusion.ArrangeSolverTypes.Arrange2DTrueShapeSolverType or
                    arrangeDef.solverType == adsk.fusion.ArrangeSolverTypes.Arrange2DRectangularSolverType):
                    app.log(f'            Quantity: {comp.quantity}')
                    app.log(f'            Is Direction Flipped: {comp.isDirectionFlipped}')
                    app.log(f'            Rotation Type: {GetEnumName(adsk.fusion.ArrangeRotationTypes, comp.rotationType)}')
                    app.log(f'            Zero Direction: {comp.zeroDirection.x}, {comp.zeroDirection.y}, {comp.zeroDirection.z}')
                    app.log(f'            Up Direction: {comp.upDirection.x}, {comp.upDirection.y}, {comp.upDirection.z}')
                    app.log(f'            Priority: {GetEnumName(adsk.fusion.ArrangePriorities, comp.priority)}')

                if arrangeDef.solverType == adsk.fusion.ArrangeSolverTypes.Arrange2DTrueShapeSolverType:
                    app.log(f'            Rotation: {comp.rotation}')
                    app.log(f'            Is Filler: {comp.isFiller}')

            app.log('      Envelope Definition')
            envDef = arrange.envelopeDefinition
            app.log(f'         Envelope Type: {envDef.objectType}')
            app.log(f'         Frame Width: {envDef.frameWidth.value}')
            app.log(f'         Frame Width: {envDef.objectSpacing.value}')
            app.log(f'         Frame Width: {envDef.placementClearance.value}')
            # app.log(f'         Is Partial Arrange Allowed: {envDef.isPartialArrangeAllowed}') # This fails if it if False.

            if envDef.objectType == adsk.fusion.ArrangeProfileOrFaceEnvelopeDefinition.classType():
                app.log(f'         == Profile or Face Envelope Definition ==')
                cnt = 0
                for profileOrFace in envDef.profilesAndFaces:
                    cnt += 1
                    app.log(f'            {cnt}. {profileOrFace.objectType}')
                # app.log(f'            Grain Direction: {envDef.grainDirection.value}')
            elif envDef.objectType == adsk.fusion.ArrangePlaneEnvelopeDefinition.classType():
                app.log(f'         == Plane Envelope Definition ==')
                app.log(f'            Construction Plane: {envDef.plane.name}')
                app.log(f'            Length: {envDef.length.value}')
                app.log(f'            Width: {envDef.width.value}')
                app.log(f'            Origin X Offset: {envDef.originXOffset.value}')
                app.log(f'            Origin Y Offset: {envDef.originYOffset.value}')
                app.log(f'            Envelope Spacing: {envDef.envelopeSpacing.value}')
                app.log(f'            Quantity: {envDef.quantity.value}')
            elif arrange.envelopeDefinition.objectType == adsk.fusion.Arrange3DEnvelopeDefinition.classType():
                app.log(f'         == 3D Envelope Definition ==')
                app.log(f'            Construction Plane: {envDef.plane.name}')
                app.log(f'            Length: {envDef.length.value}')
                app.log(f'            Width: {envDef.width.value}')
                app.log(f'            Height: {envDef.height.value}')
                app.log(f'            Origin X Offset: {envDef.originXOffset.value}')
                app.log(f'            Origin Y Offset: {envDef.originYOffset.value}')
                app.log(f'            Ceiling Clearance: {envDef.value}')

            app.log(f'      Result Envelopes ({arrange.resultEnvelopes.count})')
            for resultEnvelope in arrange.resultEnvelopes:
                app.log(f'         Name: {resultEnvelope.name}')
                app.log(f'         Envelope Type: {resultEnvelope.objectType}')

                app.log(f'         Occurrences ({resultEnvelope.occurrences.count})')
                resultOcc: adsk.fusion.ArrangeOccurrenceResult = None
                for resultOcc in resultEnvelope.occurrences:
                    trans: adsk.core.Vector3D = resultOcc.occurrence.transform2.translation
                    app.log(f'            Occurrence: {resultOcc.occurrence.name} ({trans.x}, {trans.y}, {trans.z})')

                if resultEnvelope.objectType == adsk.fusion.ArrangePlaneResultEnvelope.classType():
                    resPlaneEnv: adsk.fusion.ArrangePlaneResultEnvelope = resultEnvelope
                    app.log(f'         Min Bound Point: ({resPlaneEnv.boundingBox.minPoint.x}, {resPlaneEnv.boundingBox.minPoint.y})')
                    app.log(f'         Max Bound Point: ({resPlaneEnv.boundingBox.maxPoint.x}, {resPlaneEnv.boundingBox.maxPoint.y})')
                elif resultEnvelope.objectType == adsk.fusion.Arrange3DResultEnvelope.classType():
                    res3DEnv: adsk.fusion.Arrange3DResultEnvelope = resultEnvelope
                    app.log(f'         Min Bound Point: ({res3DEnv.boundingBox.minPoint.x}, {res3DEnv.boundingBox.minPoint.y}, {res3DEnv.boundingBox.minPoint.z})')
                    app.log(f'         Max Bound Point: ({res3DEnv.boundingBox.maxPoint.x}, {res3DEnv.boundingBox.maxPoint.y}, {res3DEnv.boundingBox.maxPoint.z})')
                elif resultEnvelope.objectType == adsk.fusion.ArrangeProfileOrFaceResultEnvelope.classType():
                    resProfEnv: adsk.fusion.ArrangeProfileOrFaceResultEnvelope = resultEnvelope
                    app.log(f'         Entity Type: {resProfEnv.profileOrFace.objectType}')

                    if resProfEnv.profileOrFace.objectType == adsk.fusion.Profile.classType():
                        prof: adsk.fusion.Profile = resProfEnv.profileOrFace
                        area = prof.areaProperties().area
                    if resultEnvelope.profileOrFace.objectType == adsk.fusion.BRepFace.classType():
                        face: adsk.fusion.BRepFace = resProfEnv.profileOrFace
                        area = face.area
                    
                    app.log(f'         Envelope Area: ({area} cm^2)')

        #des.timeline.markerPosition = savePstn 
    except:
        ui.messageBox('Failed:\n{}'.format(traceback.format_exc()))
```

```
import traceback
import adsk.core
import adsk.fusion 

app = adsk.core.Application.get()
ui  = app.userInterface

def run(context):
    try:
        # Create a new document and get the Design object.
        doc = app.documents.add(adsk.core.DocumentTypes.FusionDesignDocumentType)
        des: adsk.fusion.Design = doc.products.itemByProductType('DesignProductType')
        root = des.rootComponent

        ## Part 1, A rectangle with a large interior opening.

        # Create a new component.
        trans = adsk.core.Matrix3D.create()
        occ1 = root.occurrences.addNewComponent(trans)
        comp = occ1.component
        comp.name = "Block with Opening"

        sk = comp.sketches.add(comp.xYConstructionPlane)
        sk.sketchCurves.sketchLines.addTwoPointRectangle(adsk.core.Point3D.create(0, 0, 0),
                                                        adsk.core.Point3D.create(20, 15, 0))
        
        sk.sketchCurves.sketchLines.addTwoPointRectangle(adsk.core.Point3D.create(2, 2, 0),
                                                        adsk.core.Point3D.create(18, 13, 0))

        # Find the profile that has two loops.
        goodProf = None
        for prof in sk.profiles:
            if prof.profileLoops.count == 2:
                goodProf = prof
                break

        if goodProf:
            ext = comp.features.extrudeFeatures.addSimple(goodProf, adsk.core.ValueInput.createByReal(1), adsk.fusion.FeatureOperations.NewBodyFeatureOperation)

        ## Part 2, A solid rectangular block.

        # Create a new component.
        trans = adsk.core.Matrix3D.create()
        trans.translation = adsk.core.Vector3D.create(22, 0, 0)
        occ2 = root.occurrences.addNewComponent(trans)
        comp = occ2.component
        comp.name = "Solid Block"

        sk = comp.sketches.add(comp.xYConstructionPlane)
        sk.sketchCurves.sketchLines.addTwoPointRectangle(adsk.core.Point3D.create(0, 0, 0),
                                                        adsk.core.Point3D.create(6, 4, 0))  

        ext = comp.features.extrudeFeatures.addSimple(sk.profiles[0], adsk.core.ValueInput.createByReal(1), adsk.fusion.FeatureOperations.NewBodyFeatureOperation)

        ## Part 3, A round sketch.

        # Create a new component.
        trans = adsk.core.Matrix3D.create()
        trans.translation = adsk.core.Vector3D.create(30, 0, 0)
        occ3 = root.occurrences.addNewComponent(trans)
        comp = occ3.component
        comp.name = "Sketch Circle"

        sk = comp.sketches.add(comp.xYConstructionPlane)
        sk.sketchCurves.sketchCircles.addByCenterRadius(adsk.core.Point3D.create(3, 3, 0), 3) 

        return (occ1, occ2, occ3)
    except:
        ui.messageBox('Failed:\n{}'.format(traceback.format_exc()))
```
