Derived from:
Base
Object
Defined in namespace "adsk::volume" and the header file is <Volume/Volumetric/Graph.h>
This functionality is provided as a preview
				of intended future API capabilities. You are encouraged to use it and report any problems or suggestions using theFusion API and Scriptsforum.Because this is a preview of future functionality, there is the possibility that it will change, which will possibly
		        break any existing programs that use this functionality. Because of that, you should never deliver any programs that use
		        any preview capabilities. For a distributed program, you should wait until it has moved from preview to released state.

The graph that describes the volumetric model. Possible node types: "BoxSDF", "CylinderSDF", "SphereSDF", "TorusSDF", "PlaneSDF", "ReferencedGeometrySDF", "ReferencedCurveLength", "ReferencedCurveCoords", "ReferencedFaceCoords", "GradientVector", "InvertDensity", "PerlinNoiseScalar", "VoronoiNoiseScalar", "Shell", "ConstantScalar", "ConstantColor", "ImageSamplerScalar", "ImageSamplerVector", "ImageSamplerColor", "3DImageSamplerScalar", "SphereCoords", "TorusCoords", "CylinderCoords", "HomogenousTransformCoords", "TransformCoords", "AxisBasedDeformCoords ", "TwistCoords", "ControlPointMapScalarToScalar", "ControlPointMapScalarToColor", "FalloffMapping", "VectorToColor", "CombineScalarsToVector", "CombineScalarsToColor", "SplitVectorToScalars", "SplitColorToScalars", "LengthOfVector", "NormalizeVector", "ExternalColor", "FunctionScalarToScalar", "FunctionVectorToColor", "FunctionVectorToVector", "FunctionVectorToScalar", "BinaryOperatorColor", "BinaryOperatorVector", "BinaryOperatorScalar", "MultiplyColor", "MultiplyVector", "MultiplyScalar"
VolumetricModel.getGraph
Introduced in version May 2025
