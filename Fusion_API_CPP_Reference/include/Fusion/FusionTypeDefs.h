//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2025 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once

namespace adsk { namespace fusion {

/// Defines the different types of arrange priorities that are supported.
enum ArrangePriorities
{
    /// Very low arrange priority.
    VeryLowArrangePriority,
    /// Low arrange priority.
    LowArrangePriority,
    /// Medium arrange priority.
    MediumArrangePriority,
    /// High arrange priority.
    HighArrangePriority,
    /// Very high arrange priority.
    VeryHighArrangePriority
};

/// Defines the different types of rotations supported.
enum ArrangeRotationTypes
{
    /// Specifies that a component is using the global rotation type.
    GlobalArrangeRotationType,
    /// Specifies that all rotation types are allowed.
    AllRotationsArrangeRotationType,
    /// Specifies that no rotation is allowed.
    NoneArrangeRotationType,
    /// Specifies that only 180 deg rotation is allowed.
    Only180ArrangeRotationType,
    /// Specifies that only 90 and 270 deg rotation is allowed.
    Only90And270ArrangeRotationType
};

/// Defines the different types of arrangement solvers that are supported.
enum ArrangeSolverTypes
{
    /// True Shape 2D arrangement solver. This is an arrangement type where the components
    /// are arranged on a plane so they fit tightly together honoring the
    /// arrangement definition.
    Arrange2DTrueShapeSolverType,
    /// Rectangular 2D arrangement solver. This is an arrangement type where the rectangular bounding box
    /// of the component is used to calculate the arrangement, not the actual shape of the part.
    Arrange2DRectangularSolverType,
    /// 3D arrangement solver. This is an arrangement type where the parts are arranged within a
    /// 3D rectangular volume where the bounding box of the parts is used to determine the size of the part.
    Arrange3DSolverType
};

/// The bend relief shapes used for a single bend.
enum BendReliefShapes
{
    /// Straight shape for the bend relief.
    StraightBendReliefShape,
    /// Tear shape for the bend relief.
    TearBendReliefShape,
    /// Round shape for the bend relief.
    RoundBendReliefShape
};

/// Defines the different type of boolean operations that are supported.
enum BooleanTypes
{
    /// Subtracts the tool body from the target body.
    DifferenceBooleanType,
    /// Intersection the tool body with the target body.
    IntersectionBooleanType,
    /// Unions the tool body with the target body.
    UnionBooleanType
};

/// List of different types of boss alignment shape types.
enum BossAlignmentTypes
{
    /// Boss flat alignment.
    BossAlignFlat,
    /// Boss with step out.
    BossAlignStepOut,
    /// Boss with step in.
    BossAlignStepIn
};

/// List of the different types of boss hole extent types.
enum BossHoleExtentTypes
{
    /// Hole through all body.
    BossHoleThrough,
    /// Blind hole of max depth with offset from bottom.
    BossBlindFull,
    /// Blind hole set by hole depth.
    BossBlindDepth
};

/// List of different types of boss rib extent type.
enum BossRibExtentTypes
{
    /// Boss rib has given shape and length as specified.
    RibSizeByLength,
    /// Boss rib has shape of web and extents to next face.
    RibSizeToNext,
    /// Boss rib is suppressed.
    RibSuppressed
};

/// List of different types of boss rib shape.
enum BossRibShapeTypes
{
    /// Boss with no ribs.
    BossRibShapeNone,
    /// Boss with chamfered ribs.
    BossRibShapeChamfer,
    /// Boss with filleted ribs
    BossRibShapeFillet
};

/// List of different boss shank shape types.
enum BossShapeTypes
{
    /// Blank boss with no hole and constant diameter.
    BossBlank,
    /// Boss with constant outer shank diameter.
    BossConstDiameter,
    /// Boss with constant shank thickness. Not supported yet.
    BossConstThickness
};

/// Specifies the various types of entities that can be included in bounding box calculations.
/// This is a bitwise friendly enum so types can be combined to specify more than one type.
enum BoundingBoxEntityTypes
{
    /// Will include all types of geometry in the calculation.
    AllEntitiesBoundingBoxEntityType = 0,
    /// Includes Solid B-Rep bodies in the bounding box calculation.
    SolidBRepBodyBoundingBoxEntityType = 1,
    /// Includes B-Rep bodies that are not watertight (surfaces) in the
    /// bounding box calculation.
    SurfaceBodyBoundingBoxEntityType = 2,
    /// Includes mesh bodies in the bounding box calculation.
    MeshBodyBoundingBoxEntityType = 4,
    /// Includes sketch geometry in the bounding box calculation.
    SketchBoundingBoxEntityType = 8,
    /// Includes the visible portion of construction geometry in the bounding box calculation.
    ConstructionBoundingBoxEntityType = 16
};

/// Defines the various options when converting the geometry of a B-Rep body or face
/// to NURBS. This is used by the convert method of the BRepBody and BRepFace objects.
enum BRepConvertOptions
{
    /// Converts all procedurally calculated faces and edges into NURBS within the
    /// base tolerance. For example, an edge that is the intersection of two faces
    /// is represented as the exact analytical intersection of the two faces. This
    /// is converted into a NURBS curve as part of the conversion.
    ProceduralToNURBSConversion = 0,
    /// Converts all analytic surfaces (cylinder, elliptical cylinder, cone, elliptical cone,
    /// sphere, and torus) except planes to NURBS surfaces.
    AnalyticsToNURBSConversion = 1,
    /// Converts all planar faces to NURBS surfaces.
    PlanesToNURBSConversion = 2,
    /// Splits any periodic surfaces so they become open surfaces.
    SplitPeriodicFacesConversion = 4
};

/// Used by the findBRepUsingRay and findBRepUsingPoint methods to specify the desired return type.
enum BRepEntityTypes
{
    /// Specifies that BRepBody objects should be returned.
    BRepBodyEntityType,
    /// Specifies that BRepFace objects should be returned.
    BRepFaceEntityType,
    /// Specifies that BRepEdge objects should be returned.
    BRepEdgeEntityType,
    /// Specifies that BRepVertex objects should be returned.
    BRepVertexEntityType
};

/// The different accuracy settings for calculating area and physical property related values.
/// The higher the accuracy setting, the longer it will take to perform the calculations.
enum CalculationAccuracy
{
    /// Sets the calculation accuracy to low, which returns results within a +/- 1% error margin.
    LowCalculationAccuracy,
    /// Sets the calculation accuracy to medium, which returns results within a +/- 0.5% error margin.
    MediumCalculationAccuracy,
    /// Sets the calculation accuracy to high, which returns results within a +/- 0.1% error margin.
    HighCalculationAccuracy,
    /// Sets the calculation accuracy to very high, which returns results within a +/- 0.01% error margin.
    VeryHighCalculationAccuracy
};

/// Controls options used when creating a Path and determining the rules for how curves are
/// considered to be chained or connected.
enum ChainedCurveOptions
{
    /// No chaining is done. This is useful when inputting a single entity and you don't want any chaining to be done.
    noChainedCurves,
    /// Will find curves that are geometrically connected without regards to the
    /// geometry condition at the connection. This is limited to sketch curves.
    connectedChainedCurves,
    /// Will find curves that are geometrically connected and tangent at the connection.
    /// This will work for both sketch curves and edges.
    tangentChainedCurves,
    /// Will find edges that are geometrically end connected and are open edges of an open BRepBody.
    openEdgesChainedCurves,
    /// Will find edges that are geometrically end connected, are tangent at the connection, and are
    /// open edges of an open BRepBody.
    tangentAndOpenEdgesChainedCurves
};

/// Specifies the type of corner to model when multiple edges come together at a vertex.
enum ChamferCornerTypes
{
    /// The default corner type, where a small patch is created at the corner.
    ChamferCornerType,
    /// The chamfer surfaces extend and intersect one another to create the corner.
    MiterCornerType,
    /// A blend surface is created to define the corner.
    BlendCornertype
};

/// List of the different ways a chamfer can be defined.
enum ChamferTypes
{
    /// chamfer feature created using one equal distance
    EqualDistanceChamferType,
    /// chamfer feature created using two distances
    TwoDistancesChamferType,
    /// chamfer feature created using a distance and an angle
    DistanceAndAngleChamferType
};

/// List of the section positions of coil feature.
enum CoilFeatureSectionPositions
{
    /// The coil section is inside of the profile.
    InsideCoilFeatureSectionPosition,
    /// The coil section center is on the profile.
    OnCenterCoilFeatureSectionPosition,
    /// The coil section is outside of the profile.
    OutsideCoilFeatureSectionPosition
};

/// List of the section types of coil primitive feature.
enum CoilFeatureSectionTypes
{
    /// The coil section is circular.
    CircularCoilFeatureSectionType,
    /// The coil section is square.
    SquareCoilFeatureSectionType,
    /// The coil section is triangular (external).
    TriangularExternalCoilFeatureSectionType,
    /// The coil section is triangular (internal).
    TriangularInternalCoilFeatureSectionType
};

/// List of the coil types.
enum CoilFeatureTypes
{
    /// Coil is defined by specifying revolutions, height and angle.
    RevolutionsAndHeightCoilFeatureType,
    /// Coil is defined by specifying revolutions, pitch and angle.
    RevolutionsAndPitchCoilFeatureType,
    /// Coil is defined by specifying height, pitch and angle.
    HeightAndPitchCoilFeatureType,
    /// Coil is defined by specifying revolutions and pitch.
    SpiralCoilFeatureType
};

/// Enum that defines the valid combinations of clearance hole columns that can be configured.
enum ConfigurationClearanceHoleColumns
{
    /// Defines that the clearance hole standard, fastener type, and and size will be used to define the clearance hole.
    /// The fit is defined separately.
    Standard_Type_Size_ClearanceHoleColumns,
    /// Defines that the clearance hole fastener type, and size will be used to partially define the clearance hole.
    /// The Hole feature controls the standard, and the fit is defined separately.
    Type_Size_ClearanceHoleColumns,
    /// Defines that the clearance hole size and fit will be used to partially define the clearance hole.
    /// The Hole feature controls the standard and fastener type, and the fit is defined separately.
    Size_ClearanceHoleColumns
};

/// Defines a list of all of the different aspects of a feature that can be configured.
enum ConfigurationFeatureAspectTypes
{
    /// A feature aspect that defines the thread type of a thread or tapped hole.
    ThreadTypeFeatureAspectType,
    /// A feature aspect that defines the thread size of a thread or tapped hole.
    ThreadSizeFeatureAspectType,
    /// A feature aspect that defines the thread designation of a thread or tapped hole.
    ThreadDesignationFeatureAspectType,
    /// A feature aspect that defines the thread class of a thread or tapped hole.
    ThreadClassFeatureAspectType,
    /// A feature aspect that defines if the thread is cosmetic or modeled.
    ThreadModeledFeatureAspectType,
    /// A feature aspect that defines if the thread goes the full length of the cylinder.
    ThreadFullLengthFeatureAspectType,
    /// A feature aspect that defines if the thread is right or left handed.
    ThreadIsRightHandedFeatureAspectType,
    /// A feature aspect that controls if a joint is flipped.
    JointFlipFeatureAspectType,
    /// A feature aspect that defines the snap to the first occurrence of a joint.
    JointSnapOneFeatureAspectType,
    /// A feature aspect that defines the snap to the second occurrence of a joint.
    JointSnapTwoFeatureAspectType,
    /// A feature aspect that defines the standard for a clearance hole.
    ClearanceHoleStandardFeatureAspectType,
    /// A feature aspect that defines the fastener type of a clearance hole.
    ClearanceHoleTypeFeatureAspectType,
    /// A feature aspect that defines the size of a clearance hole.
    ClearanceHoleSizeFeatureAspectType,
    /// A feature aspect that defines the fit of a clearance hole.
    ClearanceHoleFitFeatureAspectType
};

/// Enum that defines the valid combinations of thread columns that can be configured.
enum ConfigurationThreadColumns
{
    /// Defines that the thread type, size, designation, and class will fully define the thread on
    /// the thread feature or tapped hole.
    ThreadType_Size_Designation_ClassColumns,
    /// Defines that the thread size, designation, and class will be used to partially define
    /// the thread. The Thread feature or tapped hole controls the thread type.
    ThreadSize_Designation_ClassColumns,
    /// Defines that the thread designation and class will be used to partially define the thread.
    /// The Thread feature or tapped hole controls the thread type and size.
    ThreadDesignation_ClassColumns,
    /// Defines that the thread class will be used to partially define the thread.
    /// The Thread feature or tapped hole controls the thread type, size, and designation.
    ThreadClassColumns,
    /// Defines that the thread type, size, and designation will fully define a tapered tapped hole.
    TaperedThreadType_Size_DesignationColumns,
    /// Defines that the size and designation will be used to partially define a tapered tapped hole.
    /// The tapped hole controls the thread type.
    TaperedSize_DesignationColumns,
    /// Defines that the designation will be used to partially define a tapered tapped hole.
    /// The tapped hole controls thread type and size.
    TaperedDesignationColumns
};

/// Specifies the different styles that can be used to control billboarding.
enum CustomGraphicsBillBoardStyles
{
    /// Billboards relative to the screen, so the x-y plane of the graphics will always remain parallel to the view plane.
    /// and the graphics X axis will align with the view's x axis.
    ScreenBillBoardStyle = 1,
    /// Sets the billboarding so that the graphics X axis will align with a defined axis.
    AxialBillBoardStyle = 2,
    /// Sets the billboarding so that graphics can never be viewed from the back. As the view is rotated, the
    /// graphics will be automatically flipped so they are always viewed from the front.
    RightReadingBillBoardStyle = 3
};

/// The various culling modes supported by custom graphics.
enum CustomGraphicsCullModes
{
    /// Cull the graphics that are front facing.
    CustomGraphicsCullFront,
    /// Cull the graphics that are back facing.
    CustomGraphicsCullBack,
    /// Do not perform any culling.
    CustomGraphicsCullNone
};

/// A list of predefined point images that you can use for a CustomGraphicsPointSet.
enum CustomGraphicsPointTypes
{
    /// Specifies that the type of point is user defined, which means you supply the image.
    UserDefinedCustomGraphicsPointType,
    /// Displays the point using a single pixel. This is the most efficient point display type
    /// and can be used to display very large quantities of points.
    PointCloudCustomGraphicsPointType
};

/// The valid options for the default modeling type setting.
enum DefaultDesignTypeOptions
{
    /// Prompt the user for the design type.
    PromptForDesignTypeOption,
    /// Create a direct edit (non-parametric) design.
    DirectDesignTypeOption,
    /// Create a parametric design.
    ParametricDesignTypeOption
};

/// The valid options for the Default workspaces setting.
enum DefaultWorkspaces
{
    /// The model workspace.
    ModelWorkspace,
    /// The sculpt workspace.
    SculptWorkspace,
    /// The patch workspace.
    PatchWorkspace
};

/// Specific error types for DeleteMe methods.
enum DeleteMeError
{
    /// The parameter is referenced by another parameter.
    ParameterReferencedByOtherParameterError = 200
};

/// Fusion design types
enum DesignTypes
{
    /// Direct modeling design.
    DirectDesignType,
    /// Parametric modeling design.
    ParametricDesignType
};

/// The different dimension orientations.
enum DimensionOrientations
{
    /// The dimension is aligned to the entity being dimensioned.
    AlignedDimensionOrientation,
    /// The dimension is horizontal.
    HorizontalDimensionOrientation,
    /// The dimension is vertical.
    VerticalDimensionOrientation
};

/// Valid unit types for distance.
enum DistanceUnits
{
    /// Millimeter
    MillimeterDistanceUnits,
    /// Centimeter
    CentimeterDistanceUnits,
    /// Meter
    MeterDistanceUnits,
    /// Inch
    InchDistanceUnits,
    /// Foot
    FootDistanceUnits,
    /// Yard
    YardDistanceUnits,
    /// Micron
    MicronDistanceUnits,
    /// Hectometer
    HectometerDistanceUnits,
    /// Mile
    MileDistanceUnits,
    /// Mil (One thousandth of an inch)
    MilDistanceUnits,
    /// Nautical Mile
    NauticalMileDistanceUnits
};

/// The expression of the parameter. Setting this can fail because of an invalid expression or
/// because a cyclic reference is created between parameters.
enum ExpressionError
{
    /// A cyclical parametric reference occurred.
    CyclicParameterReferenceError = 200
};

/// List of the valid extent directions.
enum ExtentDirections
{
    /// Feature extent in the positive direction. For sketch based features this is typically in
    /// the same direction as the sketch normal.
    PositiveExtentDirection,
    /// Feature extent in the negative direction. For sketch based features this is typically in
    /// the direction opposite the sketch normal.
    NegativeExtentDirection,
    /// Feature extent in both directions.
    SymmetricExtentDirection
};

/// Used to indicate which type of extent is used for a feature.
enum FeatureExtentTypes
{
    /// Specifies a feature extent that is defined in a single direction.
    OneSideFeatureExtentType,
    /// Specifies a feature extent that is defined in two directions.
    TwoSidesFeatureExtentType,
    /// Specifies a feature extent that is defined symmetrically in two directions.
    SymmetricFeatureExtentType
};

/// The various states that a feature can be in. This is used for the
/// states of modeling features, construction geometry, and sketches.
enum FeatureHealthStates
{
    /// The feature, construction geometry, or sketch is successfully computed.
    HealthyFeatureHealthState = 0,
    /// The feature, construction geometry, or sketch has a warning. Use the errorOrWarningMessage property to get the message.
    WarningFeatureHealthState = 1,
    /// The feature, construction geometry, or sketch has an error. Use the errorOrWarningMessage property to get the message.
    ErrorFeatureHealthState = 2,
    /// The feature, construction geometry, or sketch is suppressed so it has not computed.
    SuppressedFeatureHealthState = 3,
    /// The feature, construction geometry, or sketch is rolled back so it has not computed.
    RolledBackFeatureHealthState = 4,
    /// The state of the object is unknown. This can occur in the case where the object being queried
    /// is a TimelineObject whose associated entity does not have a health state. For example, if it
    /// is a TimelineGroup or an position snapshot.
    UnknownFeatureHealthState = 5
};

/// List of the different operations a feature can perform.
enum FeatureOperations
{
    /// The feature joins or adds material.
    JoinFeatureOperation,
    /// The feature cuts or removes materials.
    CutFeatureOperation,
    /// The feature intersects with an existing body and the result is the intersecting volume.
    IntersectFeatureOperation,
    /// Results in the creation of a new body.
    NewBodyFeatureOperation,
    /// Results in the creation of a new component that contains the new body.
    NewComponentFeatureOperation
};

/// List of the valid edge positions for holes.
enum HoleEdgePositions
{
    /// The start point of an Edge.
    EdgeStartPointPosition,
    /// The midpoint of an Edge.
    EdgeMidPointPosition,
    /// The end point of an Edge.
    EdgeEndPointPosition
};

/// List of the different types of holes.
enum HoleTypes
{
    /// A simple drilled hole.
    SimpleHoleType,
    /// A counterbore hole.
    CounterboreHoleType,
    /// a countersink hole.
    CountersinkHoleType
};

/// Specifies the different types of directions that can be used to define directions of a joint.
enum JointDirections
{
    /// Defines a direction in the X-axis of the joints coordinate system.
    XAxisJointDirection,
    /// Defines a direction in the Y-axis of the joints coordinate system.
    YAxisJointDirection,
    /// Defines a direction in the Z-axis of the joints coordinate system.
    ZAxisJointDirection,
    /// Defines that the joint direction is custom and is defined by an entity.
    CustomJointDirection
};

/// List of the different types of ways that geometry for a joint can be defined.
enum JointGeometryTypes
{
    /// Joint geometry defined by a construction point.
    JointConstructionPointGeometry,
    /// Joint geometry defined by a sketch point.
    JointSketchPointGeometry,
    /// Joint geometry defined by a B-Rep Vertex.
    JointBRepVertexGeometry,
    /// Joint geometry defined by a B-Rep edge.
    JointBRepEdgeGeometry,
    /// Joint geometry defined by a sketch curve.
    JointSketchCurveGeometry,
    /// Joint geometry defined by a profile.
    JointProfileGeometry,
    /// Joint geometry defined by a planar B-Rep face.
    JointPlanarBRepFaceGeometry,
    /// Joint geometry defined by a non-planar B-Rep face.
    JointNonPlanarBRepFaceGeometry,
    /// Joint geometry defined between two planes.
    JointBetweenTwoPlanesGeometry,
    /// Joint geometry defined by two edge intersection.
    JointByTwoEdgeIntersectionGeometry,
    /// Joint geometry defined by tangent faces: cylinder or cone, sphere, torus and spline
    JointTangentBRepFaceGeometry,
    /// Joint geometry defined by tangent face and edge.
    JointTangentBRepFaceEdgeGeometry
};

/// List of the various keypoints of geometry that can be used when defining joint geometry.
enum JointKeyPointTypes
{
    /// Specifies the position of the keypoint at the start of the entity.
    StartKeyPoint,
    /// Specifies the position of the keypoint at the middle of the entity.
    MiddleKeyPoint,
    /// Specifies the position of the keypoint at the end of the entity.
    EndKeyPoint,
    /// Specifies the position of the keypoint at the center of the entity.
    /// This applies to entities like circles, ellipses, planar faces, and profiles.
    CenterKeyPoint
};

/// List of the various angle types of geometry that can be used when defining joint geometry
/// on cylinder or cone, sphere and torus
enum JointQuadrantAngleTypes
{
    /// Specifies the angle at the start point of a circle
    StartJointQuadrantAngleType,
    /// Specifies the angle at the quarter point of a circle
    QuarterJointQuadrantAngleType,
    /// Specifies the angle at the half point of a circle
    MiddleJointQuadrantAngleType,
    /// Specifies the angle at the third quarter point of a circle
    ThirdQuarterJointQuadrantAngleType
};

/// List of the tangent face types, including cylinder or cone, sphere, torus and spline.
enum JointTangentFaceEdgePointTypes
{
    /// Specifies the start point of the edge.
    StartJointTangentFaceEdgePointType,
    /// Specifies the point at the quarter of whole length of the edge.
    QuarterJointTangentFaceEdgePointType,
    /// Specifies the middle point of the edge.
    MiddleJointTangentFaceEdgePointType,
    /// Specifies the point at third quarter of whole length of the edge.
    ThirdQuarterJointTangentFaceEdgePointType,
    /// Specifies the end point of the edge.
    EndJointTangentFaceEdgePointType
};

/// List of the tangent face types, including cylinder or cone, sphere, torus and spline.
enum JointTangentFaceTypes
{
    /// Specifies the tangent face type for cyliner or cone
    NoneJointTangentFaceType,
    /// Specifies the tangent face type for cyliner or cone
    CylinderOrConeJointTangentFaceType,
    /// Specifies the tangent face type for sphere
    SphereJointTangentFaceType,
    /// Specifies the tangent face type for torus
    TorusJointTangentFaceType,
    /// Specifies the tangent face type for spline
    SplineJointTangentFaceType
};

/// List of the various types of joints.
enum JointTypes
{
    /// Specifies a rigid type of joint.
    RigidJointType,
    /// Specifies a revolute type of joint.
    RevoluteJointType,
    /// Specifies a slider type of joint.
    SliderJointType,
    /// Specifies a cylindrical type of joint.
    CylindricalJointType,
    /// Specifies a pin-slot type of joint.
    PinSlotJointType,
    /// Specifies a planar type of joint.
    PlanarJointType,
    /// Specifies a ball type of joint.
    BallJointType,
    /// Specifies a joint that is inferred from the input geometry.
    InferredJointType
};

/// Specifies the line styles that can be applied to custom graphics lines and curves.
enum LineStylePatterns
{
    /// A solid line with no breaks.
    continuousLineStylePattern,
    /// A center line type of pattern which is a series of long and short lines.
    centerLineStylePattern,
    /// A center line type of pattern made of a series of short lines.
    dashedLineStylePattern,
    /// A center line type of pattern made of a series of dots.
    dotLineStylePattern,
    /// A center line type of pattern made of a series of short lines.
    hiddenLineStylePattern,
    /// A center line type of pattern made of a series of a long line and two short lines.
    phantomLineStylePattern,
    /// A center line type of pattern made of a single continuous line and many short perpendicular lines.
    tracksLineStylePattern,
    /// A center line type of pattern made of a series of 45 degree lines to create a zig-zag pattern.
    zigzagLineStylePattern
};

/// The different states of a local rendering.
enum LocalRenderStates
{
    /// Indicates the rendering is queued, waiting to start.
    QueuedLocalRenderState,
    /// Indicates the rendering is processing.
    ProcessingLocalRenderState,
    /// Indicates the rendering has finished.
    FinishedLocalRenderState,
    /// Indicates the rendering has failed and is no longer processing.
    FailedLocalRenderState
};

/// List of Loft Edge Alignment Options
enum LoftEdgeAlignments
{
    /// Specifies the loft edges are not influenced by edges or faces the loft starts or ends at.
    FreeEdgesLoftEdgeAlignment,
    /// Specifies the edges of the loft are aligned with the edges of the face the loft starts or ends at.
    AlignEdgesLoftEdgeAlignment,
    /// Specifies the edges of the loft are aligned with the face the loft starts or ends at.
    AlignToSurfaceLoftEdgeAlignment
};

/// Defines the different conditions that can be applied to a loft rail
/// when the rail entity is defined by BRepEdge objects.
enum LoftRailEdgeConditions
{
    /// Defines a G0 or connected edge condition.
    G0LoftRailEdgeCondition,
    /// Defines a G1 or tangent edge condition.
    G1LoftRailEdgeCondition,
    /// Defines a G2 or curvature continuous edge condition.
    G2LoftRailEdgeCondition
};

/// Valid unit types for mass.
enum MassUnits
{
    /// Grams
    GramMassUnits,
    /// Kilograms
    KilogramMassUnits,
    /// Pounds
    PoundMassUnits,
    /// Ounces
    OunceMassUnits,
    /// Tons
    TonMassUnits,
    /// Slugs
    SlugMassUnits
};

/// Specify the combine method for the mesh.
enum MeshCombineOperationTypes
{
    /// Combines multiple mesh bodies into a single mesh body by enclosing their volumes.
    JoinMeshCombineType,
    /// Removes overlapping areas from target body.
    CutMeshCombineType,
    /// Combines overlapping areas into a mesh body.
    IntersectMeshCombineType,
    /// Combines multiple mesh bodies into a single mesh body without altering the faces of the original mesh.
    MergeMeshCombineType
};

/// Specify the resolution for the organic mesh conversion if ByAccuracyMeshConvertResolutionType is selected
enum MeshConvertAccuracyTypes
{
    /// Converts the body with low accuracy compared to the original mesh body. (Fastest)
    LowMeshConvertAccuracyType,
    /// Converts the body with medium accuracy compared to the original mesh body. (Fast)
    MediumMeshConvertAccuracyType,
    /// Converts the body with high accuracy compared to the original mesh body. (Average)
    HighMeshConvertAccuracyType,
    /// Converts the body with the highest possible accuracy compared to the original mesh body. (Slowest)
    PreciseMeshConvertAccuracyType
};

/// Specify the convert method for the mesh.
enum MeshConvertMethodTypes
{
    /// Converts individual faces on the mesh body to individual faces on the new solid or surface body.
    FacetedMeshConvertMethodType,
    /// Merges groups of faces in prismatic features into singular faces on the new solid or surface body. Face
    /// groups are used to infer prismatic features.
    PrismaticMeshConvertMethodType,
    /// This converts the mesh body to an organically shaped solid or surface body. Only accessible if the product design extension is active.
    OrganicMeshConvertMethodType
};

/// Specify the operation method for the mesh conversion.
enum MeshConvertOperationTypes
{
    /// A parametric MeshConvert feature is created after the operation.
    ParametricFeatureMeshConvertOperationType,
    /// A base feature is created after the operation.
    BaseFeatureMeshConvertOperationType
};

/// Specify the resolution method for the organic mesh conversion.
enum MeshConvertResolutionTypes
{
    /// Creates a solid or surface body that matches the shape of the original mesh body more or less accurately,
    /// based on the resolution you select.
    ByAccuracyMeshConvertResolutionType,
    /// Creates solid or surface body with a specific number of faces.
    ByFacetNumberMeshConvertResolutionType
};

/// Specify the generate face group method for the mesh.
enum MeshGenerateFaceGroupsMethodTypes
{
    /// Generates face groups based on an angle threshold between faces.
    /// Prioritizes speed over accuracy.
    FastGenerateFaceGroupsType,
    /// Generates face groups by matching mesh faces to simple geometric primitives.
    /// Prioritizes accuracy over speed.
    AccurateGenerateFaceGroupsType
};

/// Specify the method of filling the plane.
enum MeshPlaneCutFillTypes
{
    /// Does not add mesh faces to close mesh body.
    NoFillMeshPlaneCutFillType,
    /// Adds a minimal number of mesh faces to close mesh body.
    MinimalMeshPlaneCutFillType,
    /// Adds a uniform set of mesh faces to close mesh body.
    UniformMeshPlaneCutFillType
};

/// Specify the plane cut method for the mesh.
enum MeshPlaneCutTypes
{
    /// Splits mesh faces along the cut plane, then removes one side of the mesh body.
    TrimMeshPlaneCutType,
    /// Splits mesh faces along the cut plane, then separates the mesh body into two mesh bodies.
    SplitBodyMeshPlaneCutType,
    /// Splits mesh faces along the cut plane and maintains a single mesh body.
    SplitFacesMeshPlaneCutType
};

/// Specify the reduce method for the mesh.
enum MeshReduceMethodTypes
{
    /// Creates smaller(larger) faces in areas of high (low) detail.
    AdaptiveReduceType,
    /// Creates faces of similar size in all areas.
    UniformReduceType
};

/// Specify what the target criteria for the reduction should be.
enum MeshReduceTargetTypes
{
    /// Reduces mesh by merging faces within a maximum deviation from the original mesh shape. If this
    /// criteria type is used, the reduce method type is ignored and the adaptive method is always
    /// applied.
    MaximumDeviationMeshReduceTargetType,
    /// Reduces mesh to a given proportion of the number of faces on the original mesh.
    ProportionMeshReduceTargetType,
    /// Reduces mesh to a given specific number of faces.
    FaceCountMeshReduceTargetType
};

/// The different refinement settings supported when exporting the design as an STL or 3MF file.
enum MeshRefinementSettings
{
    /// Sets the various settings to the values associated with a high quality export.
    MeshRefinementHigh,
    /// Sets the various settings to the values associated with a medium quality export.
    MeshRefinementMedium,
    /// Sets the various settings to the values associated with a low quality export.
    MeshRefinementLow,
    /// Indicates that the settings are not predefined values associated with high, medium, or low quality export.
    MeshRefinementCustom
};

/// Specify the re-mesh method for the mesh.
enum MeshRemeshMethodTypes
{
    /// Creates smaller(larger) faces in areas of high (low) detail.
    AdaptiveRemeshType,
    /// Creates faces of similar size in all areas.
    UniformRemeshType
};

/// Specify the method for the rebuild type of mesh repair. If AccurateMeshRepairRebuildType is chosen,
/// an offset can be set.
enum MeshRepairRebuildTypes
{
    /// Rebuilds mesh body quickly, but not accurately.
    FastMeshRepairRebuildType,
    /// Rebuilding the mesh, while preserving sharp edges.
    PreserveSharpEdgesMeshRepairRebuildType,
    /// Rebuilds mesh body as accurately as possible.
    AccurateMeshRepairRebuildType,
    /// The mesh will be rebuild in a blocky style.
    BlockyMeshRepairRebuildType
};

/// Specify the main repair type for the mesh. If RebuildMeshRepairType is chosen, other parameters can be set.
enum MeshRepairTypes
{
    /// Simplest and fastest type of repair, only close holes and fix flipped triangles are used to fix the part.
    CloseHolesMeshRepairType,
    /// Makes the same changes as CloseHolesMeshRepairType, and also stitches triangles, removes double
    /// triangles, removes degenerated faces, and removes tiny shells.
    StitchAndRemoveMeshRepairType,
    /// Uses in addition to the methods in StitchAndRemoveMeshRepairType also the wrapped method.
    /// This methods takes time and removes internal structure.
    WrapMeshRepairType,
    /// Reconstructs the mesh body using one of 4 MeshRepairRebuildTypes. All inner structures are destroyed.
    RebuildMeshRepairType
};

/// Specifies the output options for separating a mesh body. Only valid if the input is a mesh body.
enum MeshSeparateTypes
{
    /// Separates all mesh shells into independent mesh bodies.
    ShellMeshSeparateType,
    /// Separates all face groups into independent mesh bodies.
    FaceGroupMeshSeparateType
};

/// The unit types that can be specified when importing a .stl or .obj file as a mesh.
enum MeshUnits
{
    /// Interpret the coordinate data using centimeters.
    CentimeterMeshUnit,
    /// Interpret the coordinate data using millimeters.
    MillimeterMeshUnit,
    /// Interpret the coordinate data using meters.
    MeterMeshUnit,
    /// Interpret the coordinate data using inches.
    InchMeshUnit,
    /// Interpret the coordinate data using feet.
    FootMeshUnit
};

/// Specifies the different types of corners that can be created when offsetting a wire body.
/// These settings are used when the curves are offset outwards, which creates a gap at the
/// corner. These represent the three ways the gap is filled.
enum OffsetCornerTypes
{
    /// Creates an arc at the corner to fill the gap. This is similar to filleting the corner
    /// with a fillet that is the same radius as the offset.
    CircularOffsetCornerType,
    /// Creates lines that are tangent to the offset curves and connect at the corner.
    LinearOffsetCornerType,
    /// Extends the offset curves so the connect at the corner.
    ExtendedOffsetCornerType
};

/// List of the compute options for mirroring and patterning features in the parametric modeling environment.
enum PatternComputeOptions
{
    /// Optimized pattern compute. This is the fastest of all compute options. This option may fail or give wrong results in
    /// some very rare cases (e.g. when patterning a Split feature)
    OptimizedPatternCompute,
    /// Identical pattern compute. Used when you want force the resulting mirror or pattern to create identical results
    /// regardless of the dependencies that define the feature being copied.
    IdenticalPatternCompute,
    /// Adjust pattern compute. This is the slowest of all compute options. It can almost never produce a wrong result
    /// (e.g. works well even on Split features)
    AdjustPatternCompute
};

/// Defines the different ways to specify the spacing between elements in a pattern.
enum PatternDistanceType
{
    /// The total distance of the pattern is specified with the quantity evenly spaced within that distance.
    ExtentPatternDistanceType,
    /// The distance between each pattern element is specified.
    SpacingPatternDistanceType
};

/// Specifies the different types of entities that can be patterned.
enum PatternEntityTypes
{
    /// Pattern of faces
    FacesPatternType,
    /// Pattern of features
    FeaturesPatternType,
    /// Pattern of bodies
    BodiesPatternType,
    /// Pattern of occurrences
    OccurrencesPatternType
};

/// List of the different section types of a Pipe.
enum PipeSectionTypes
{
    /// Pipe section has a circular shape.
    CircularPipeSectionType,
    /// Pipe section has a square shape.
    SquarePipeSectionType,
    /// Pipe section has a triangular shape.
    TriangularPipeSectionType
};

/// Types that define the nature of the relationship between a point and a containing entity.
enum PointContainment
{
    /// The point lies inside.
    PointInsidePointContainment,
    /// The point lies on the boundary.
    PointOnPointContainment,
    /// The point lies outside.
    PointOutsidePointContainment,
    /// The containment relationship is unknown.
    UnknownPointContainment
};

/// Types that indicate the output aspect ratio when rendering a scene. This is
/// used with in-canvas rendering, to allow you to define a different aspect
/// ratio than the current active viewport.
enum RenderAspectRatios
{
    /// Specifies that the Current Viewport aspect ratio is used.
    CurrentViewportRenderAspectRatio,
    /// Specifies a 1:1 square aspect ratio.
    Square1to1RenderAspectRatio,
    /// Specifies a 4:3 presentation aspect ratio.
    Presentation4to3RenderAspectRatio,
    /// Specifies a 16:9 wide screen aspect ratio.
    Widescreen16to9RenderAspectRatio,
    /// Specifies a 5:4 landscape aspect ratio.
    Landscape5to4RenderAspectRatio,
    /// Specifies a 4:5 portrait aspect ratio.
    Portrait4to5RenderAspectRatio,
    /// Specifies that a custom aspect ratio is used.
    CustomRenderAspectRatio
};

/// The different standard resolutions supported when rendering.
enum RenderResolutions
{
    /// 800x600 resolution. Commonly used for low-res images shown in a browser.
    Web800x600RenderResolution,
    /// 1024x768 resolution. Commonly used for images shown in a browser.
    Web1024x768RenderResolution,
    /// 1152x864 resolution. Commonly used for images shown in a browser.
    Web1152x864RenderResolution,
    /// 1280x1024 resolution. Commonly used for images shown in a browser.
    Web1280x1024RenderResolution,
    /// 1600x1200 resolution. Commonly used for images shown in a browser.
    Web1600x1200RenderResolution,
    /// 960x640 resolution. Commonly used for images shown on a mobile device.
    Mobile960x640RenderResolution,
    /// 1136x640 resolution. Commonly used for images shown on a mobile device.
    Mobile1136x640RenderResolution,
    /// 1334x750 resolution. Commonly used for images shown on a mobile device.
    Mobile1334x750RenderResolution,
    /// 1920x1080 resolution. Commonly used for images shown on a mobile device.
    Mobile1920x1080RenderResolution,
    /// 2048x1536 resolution. Commonly used for images shown on a mobile device.
    Mobile2048x1536RenderResolution,
    /// 1800x1200 resolution. Commonly used for images that will be printed.
    Print1800x1200RenderResolution,
    /// 2100x1500 resolution. Commonly used for images that will be printed.
    Print2100x1500RenderResolution,
    /// 3000x2400 resolution. Commonly used for images that will be printed.
    Print3000x2400RenderResolution,
    /// 3300x2550 resolution. Commonly used for images that will be printed.
    Print3300x2550RenderResolution,
    /// 854x480 resolution. Commonly used for images that will be used for video.
    Video854x480RenderResolution,
    /// 1280x720 resolution. Commonly used for images that will be used for video.
    Video1280x720RenderResolution,
    /// 1920x1080 resolution. Commonly used for images that will be used for video.
    Video1920x1080RenderResolution,
    /// Custom resolution.
    CustomRenderResolution
};

/// Types that indicate the type of background being used to render the scene.
enum RenderSceneBackgroundTypes
{
    /// Specifies that an environment is being used as the background
    /// of the scene.
    EnvironmentRenderSceneBackgroundType,
    /// Specifies that a solid color is being used as the background
    /// of the scene.
    SolidColorRenderSceneBackgroundType
};

/// Specifies the different ways a Rip feature can be defined.
enum RipFeatureDefinitionTypes
{
    /// The rip type is undefined. This occurs when a new RipFeatureInput is created
    /// and before a specific type has been defined.
    UndefinedRipFeatureDefinitionType,
    /// Rips an entire face.
    FaceRipFeatureDefinitionType,
    /// Rips along an edge.
    AlongEdgeRipFeatureDefinitionType,
    /// Rips between two points on a face.
    /// The points may be defined either by vertices,
    /// or by an edge and an offset along that edge.
    BetweenPointsRipFeatureDefinitionType
};

/// List of Ruled Surface corner types.
enum RuledSurfaceCornerTypes
{
    /// The corners will be rounded.
    RoundedRuledSurfaceCornerType,
    /// The corners will be mitered.
    MiteredRuledSurfaceCornerType
};

/// List of Ruled Surface Types.
enum RuledSurfaceTypes
{
    /// Create Ruled Surface from edges or sketch curves
    TangentRuledSurfaceType,
    /// Creates new faces tangent to the current faces.
    NormalRuledSurfaceType,
    /// Creates new faces perpendicular to the current faces.
    DirectionRuledSurfaceType
};

/// List of Shell Types
enum ShellTypes
{
    /// Use sharp corners when creating the shell. (Legacy)
    SharpOffsetShellType,
    /// Use rounded corners when creating the shell.
    RoundedOffsetShellType
};

/// List of Silhouette Split feature operations.
enum SilhouetteSplitOperations
{
    /// Split only the faces of a solid
    SilhouetteSplitFacesOnlyOperation,
    /// Split a shelled body
    SilhouetteSplitShelledBodyOperation,
    /// Split a solid body
    SilhouetteSplitSolidBodyOperation
};

/// Used by the Sketch.setConstructionState method setting the construction state on sketch curves.
enum SketchCurveConstructionStates
{
    /// Specifies that the construction state should be toggled from its current state.
    ToggleSketchCurveConstructionState,
    /// Specifies that the construction state should be set to construction.
    ConstructionSketchCurveConstructionState,
    /// Specifies that the construction state should be set to normal.
    NormalSketchCurveConstructionState
};

/// Used by the Sketch.setCenterlineState method setting the centerline state on sketch lines.
enum SketchLineCenterlineStates
{
    /// Specifies that the centerline state should be toggled from its current state.
    ToggleSketchLineCenterlineState,
    /// Specifies that the centerline state should be set to centerline.
    CenterlineSketchLineCenterlineState,
    /// Specifies that the centerline state should be set to normal.
    NormalSketchLineCenterlineState
};

/// Defines the options used when specifying the degree of a spline.
enum SplineDegrees
{
    /// Defines a degree 1 spline.
    SplineDegreeOne = 1,
    /// Defines a degree 2 spline.
    SplineDegreeTwo = 2,
    /// Defines a degree 3 spline.
    SplineDegreeThree = 3,
    /// Defines a degree 4 spline.
    SplineDegreeFour = 4,
    /// Defines a degree 5 spline.
    SplineDegreeFive = 5,
    /// Defines a degree 6 spline.
    SplineDegreeSix = 6,
    /// Defines a degree 7 spline.
    SplineDegreeSeven = 7,
    /// Defines a degree 8 spline.
    SplineDegreeEight = 8,
    /// Defines a degree 9 spline.
    SplineDegreeNine = 9
};

/// List of the ways to split a face using the split face feature.
enum SplitFaceSplitTypes
{
    /// Split face using a surface-to-surface intersection as the
    /// split curve.
    surfaceIntersectionSplitType,
    /// Split a face using a projection of the split tool along a
    /// specified direction.
    alongVectorSplitType,
    /// Split a face by projecting the split tool to the closest
    /// point on the faces being split.
    closestPointSplitType
};

/// List of Surface Continuity Types.
enum SurfaceContinuityTypes
{
    /// Creates a surface with G0 edges (connected at an angle).
    ConnectedSurfaceContinuityType,
    /// Creates a surface with G1 edges (tangential).
    TangentSurfaceContinuityType,
    /// Creates a surface with G2 edges (blended with continuous curvature).
    CurvatureSurfaceContinuityType
};

/// List of Surface Extend Alignments
enum SurfaceExtendAlignment
{
    /// The extended edges are not aligned with the existing surface edges.
    FreeEdges,
    /// The extended edges are aligned with the natural direction of the existing surface edges.
    AlignEdges
};

/// List of Surface Extend Types.
enum SurfaceExtendTypes
{
    /// Extends the current faces.
    NaturalSurfaceExtendType,
    /// Creates new faces tangent to the current faces.
    TangentSurfaceExtendType,
    /// Creates new faces perpendicular to the current faces.
    PerpendicularSurfaceExtendType
};

/// Used by the Sketch.projectToSurface method when defined how to project a curve onto a surface.
enum SurfaceProjectTypes
{
    /// Projects the curve using the closest point on the surface to the curve.
    ClosestPointSurfaceProjectType,
    /// Projects the curve along a defined vector.
    AlongVectorSurfaceProjectType
};

/// List of the types of sweep extent.
enum SweepExtentTypes
{
    /// Perpendicular to Path extent type.
    PerpendicularToPathExtentType,
    /// Full extents extent type.
    FullExtentsExtentType
};

/// List of the types of sweep orientation.
enum SweepOrientationTypes
{
    /// Parallel orientation type.
    ParallelOrientationType,
    /// Perpendicular orientation type.
    PerpendicularOrientationType
};

/// List of the sweep profile scaling options.
enum SweepProfileScalingOptions
{
    /// Scale profile option.
    SweepProfileScaleOption,
    /// Stretch profile option.
    SweepProfileStretchOption,
    /// Stretch profile option.
    SweepProfileNoScalingOption
};

/// The various orientation types when doing a solid sweep.
enum SweepSolidOrientationTypes
{
    /// Maintain the orientation of the tool body relative to the sweep path. As the tool body
    /// sweeps along the path, it will rotate to maintain the same relative angle to the path.
    PerpendicularSolidOrientationType,
    /// The orientation of the tool body does not change as it is swept along the path.
    /// The tool will be translated but not rotated.
    RigidSolidOrientationType,
    /// Keep the orientation of the tool body aligned to a direction vector. The tool
    /// may rotate around this vector as it is swept along the path.
    AlignedSolidOrientationType
};

/// Specify the refinement setting type for the tessellation process.
enum TessellateRefinementTypes
{
    /// Applies a preset with high refinement settings to tessellate the body.
    HighTessellateRefinementType,
    /// Applies a preset with medium refinement settings to tessellate the body.
    MediumTessellateRefinementType,
    /// Applies a preset with low refinement settings to tessellate the body.
    LowTessellateRefinementType,
    /// Applies custom refinement settings to tessellate the body.
    CustomTessellateRefinementType
};

/// Defines the nine key points that exist for a sketch text box and
/// can be used as the origin when rotating the text. The named positions
/// are with respect to the text box. For example when the text box has
/// not been rotated the top-left key point will be the point in the upper-left
/// corner of the text box. If the text box has been rotated 180 degrees,
/// the top-left key point will be the point in the lower-right corner of
/// the text box.
enum TextBoxKeyPoints
{
    /// The key point in the upper-left corner of the text box.
    TopLeftTextBoxKeyPoint,
    /// The key point at the midpoint of the upper line of the text box.
    TopMiddleTextBoxKeyPoint,
    /// The key point in the upper-right corner of the text box.
    TopRightTextBoxKeyPoint,
    /// The key point at the midpoint of the left line of the text box.
    MiddleLeftTextBoxKeyPoint,
    /// The key point in the center of the text box.
    MiddleTextBoxKeyPoint,
    /// The key point at the midpoint of the right line of the text box.
    MiddleRightTextBoxKeyPoint,
    /// The key point at the bottom-left corner of the text box.
    BottomLeftTextBoxKeyPoint,
    /// The key point at the midpoint of the bottom line of the text box.
    BottomMiddleTextBoxKeyPoint,
    /// The key point at the bottom-right corner of the text box.
    BottomRightTextBoxKeyPoint
};

/// Defines the various text style formatting options that can be applied to text. These are
/// bitwise values to they can be combined.
enum TextStyles
{
    /// Specifies that the text has bold text style.
    TextStyleBold = 1,
    /// Specifies that the text has italic text style.
    TextStyleItalic = 2,
    /// Specifies that the text has underline text style.
    /// Not currently supported.
    TextStyleUnderline = 4
};

/// List of Thin Extrude Wall Locations
enum ThinExtrudeWallLocation
{
    /// The wall location type where the thin extrude is offset towards one side of the profile
    Side1,
    /// The wall location type where the thin extrude is centered on the profile
    Center,
    /// The wall location type where the thin extrude is offset towards one side of the profile
    Side2
};

/// List of the positions of a thread feature when it is not full length.
enum ThreadLocations
{
    /// Position thread at the high end of the cylinder. You can determine the high end in the model by using the geometry
    /// property of the cylindrical BRepFace object, which will return a Cylinder object. The axis property of the Cylinder
    /// is a vector and the high end of the cylinder is at the far end of the cylinder with respect to the axis vector.
    HighEndThreadLocation,
    /// Position thread at the low end of the cylinder. You can determine the low end in the model by using the geometry
    /// property of the cylindrical BRepFace object, which will return a Cylinder object. The axis property of the Cylinder
    /// is a vector and the low end of the cylinder is at the near end of the cylinder with respect to the axis vector.
    LowEndThreadLocation
};

/// The bend relief shapes used when three bends intersect.
enum ThreeBendReliefShapes
{
    /// No replacement for the bend relief.
    NoReplacementThreeBendReliefShape,
    /// Intersection bend relief.
    IntersectionThreeBendReliefShape,
    /// Full round bend relief.
    FullRoundThreeBendReliefShape,
    /// Round radius bend relief.
    RoundWithRadiusThreeBendReliefShape
};

/// Types that indicate the level of quality of a triangle mesh.
enum TriangleMeshQualityOptions
{
    /// Low quality
    LowQualityTriangleMesh = 8,
    /// Normal quality
    NormalQualityTriangleMesh = 11,
    /// High quality
    HighQualityTriangleMesh = 13,
    /// Very high quality
    VeryHighQualityTriangleMesh = 15
};

/// The placement options for a two bend relief.
enum TwoBendReliefPlacements
{
    /// Specifies that no two bend relief placement is defined. This is returned for all two bend relief shapes except
    /// for round and square shapes.
    NoTwoBendReliefPlacement,
    /// Specifies that the center point of the two bend relief shape is located at the intersection of the bend center lines.
    /// This is the only valid placement option for square two bend relief shapes. For round shapes, this and tangent placement
    /// is valid.
    IntersectionTwoBendReliefPlacement,
    /// Specifies that the shape of the two bend relief is tangential to the flange sides. This is only used for round to bend
    /// relief shapes where this or intersection placement is valid.
    TangentTwoBendReliefPlacement
};

/// The bend relief shapes used when two bends intersect.
enum TwoBendReliefShapes
{
    /// Round shape for the bend relief.
    RoundTwoBendReliefShape,
    /// Square shape for the bend relief.
    SquareTwoBendReliefShape,
    /// Tear shape for the bend relief.
    TearTwoBendReliefShape,
    /// Trim to the bends for the bend relief.
    TrimToBendTwoBendReliefShape,
    /// Linear weld for the bend relief.
    LinearWeldTwoBendReliefShape,
    /// Arc weld for the bend relief.
    ArcWeldTwoBendReliefShape
};

/// Predefined combinations of length and mass units used
/// for units in the design.
enum UnitSystems
{
    /// A custom unit system that supports any combination of
    /// distance and mass units as the default units of the design.
    CustomUnitSystem,
    /// Specifies millimeters as the default distance units and grams
    /// as the default mass units of the design.
    MillimeterGramUnitSystem,
    /// Specifies centimeters as the default distance units and grams
    /// as the default mass units of the design.
    CentimeterGramUnitSystem,
    /// Specifies meters as the default distance units and kilograms
    /// as the default mass units of the design.
    MeterKilogramUnitSystem,
    /// Specifies inches as the default distance units and ounces
    /// as the default mass units of the design.
    InchOunceUnitSystem,
    /// Specifies feet as the default distance units and pounds
    /// as the default mass units of the design.
    FootPoundUnitSystem
};

/// List of Untrim Loop Types.
enum UntrimLoopTypes
{
    /// Untrim all loops of faces
    AllLoopsUntrimType,
    /// Untrim external loops of faces
    ExternalLoopsUntrimType,
    /// Untrim internal loops of faces
    InternalLoopsUntrimType,
    /// Untrim manually selected loops
    ManualLoopsUntrimType
};

/// Specifies which of the four view corners custom graphics will be drawn in relation to. The
/// notUsedViewCorner setting indicates the graphics are not positioned with respect to the view.
enum ViewCorners
{
    /// Indicates that custom graphics are positioned with respect to the upper-left corner of the view.
    upperLeftViewCorner,
    /// Indicates that custom graphics are positioned with respect to the upper-right corner of the view.
    upperRightViewCorner,
    /// Indicates that custom graphics are positioned with respect to the lower-left corner of the view.
    lowerLeftViewCorner,
    /// Indicates that custom graphics are positioned with respect to the lower-right corner of the view.
    lowerRightViewCorner
};

/// List of Meshing Approaches for converting a volumetric model to a mesh.
enum VolumetricMeshingApproachTypes
{
    /// Mesh the volumetric model using advanced techniques that preserve sharp features on the boundary of the model.
    VolumetricMeshingAdvancedType,
    /// Mesh the volumetric model using the original meshing techniques.
    VolumetricMeshingOriginalType
};

/// List of Volumetric Model to Mesh Refinement Types.
enum VolumetricMeshRefinementTypes
{
    /// Creates a high resolution mesh from the volumetric model.
    VolumetricMeshRefinementHighType,
    /// Creates a medium resolution mesh from the volumetric model.
    VolumetricMeshRefinementMediumType,
    /// Creates a low resolution mesh from the volumetric model.
    VolumetricMeshRefinementLowType,
    /// Creates a custom resolution mesh from the volumetric model.
    VolumetricMeshRefinementCustomType
};

}// namespace fusion
}// namespace adsk
