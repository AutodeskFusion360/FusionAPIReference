#### Test of the Prism Javascript Library

This page is to get the integration of the
Prism Javasript Library
in the Fusion help system.
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

To allow this to work, the following was added to APIHelp.css to make the line numbers and the code
the same size so they line up.
```
/* This is to allow line numbers with the prism library to display the
   same size as the code. */
pre[class*=language-]
{
    font-size: 13.5px!important;
}
```

And, the following is added below the
element.
```
<body>
<link rel="stylesheet" href="../Style/APIHelp.css">
<link rel="stylesheet" href="../Style/prism.css">
<script src="../Scripts/prism.js"><!--filler--></script> 
<style>
pre.line-numbers [aria-hidden=true]
{
    display: block!important;
}
</style>
```
