//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The valid analysis types for an additive FEA simulation.
enum AdditiveFEAAnalysisType
{
    /// The `Thermal` analysis type is for transient thermal conduction analyses.
    Thermal = 2,
    /// The `Mechanical` analysis type is for quasi-static mechanical analyses.
    Mechanical = 4,
    /// The `ThermoMechanical` analysis type combines both thermal and mechanical analyses in a single operation.
    ThermoMechanical = 24
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The valid keyword card names for an AdditiveFEADeckBuilderCard in an AdditiveFEADeckBuilder.  Any cards not in this enum can still be made using createGenericCard.
enum AdditiveFEACard
{
    /// The *TITL card sets the title.
    TitleCard,
    /// The *STOL card sets the STL gap tolerance.
    STLToleranceCard,
    /// The *PBPA card sets the number of layers per element.
    LayersPerElementCard,
    /// The *AMBI card sets the ambient temperature.
    AmbientTemperatureCard,
    /// The *FINT card sets the final temperature.
    FinalTemperatureCard,
    /// The *DDM! card sets the top and bottom z bounds of the build plate.
    BuildPlateZBoundsCard,
    /// The *STLM card maps STL files to configurations, PRMs, materials, and volume fractions.
    STLMapCard,
    /// The *CONV card sets the temperature-dependent convection coefficients.
    ConvectionCard,
    /// The *PBPF card sets the list of PRM file names.  Currently only one PRM file is supported by this API.
    PRMsCard,
    /// The *STLF card sets the list of STL files.
    STLsCard,
    /// The *SBXY card sets the extension of the build plate in the x and y directions relative to the overall parts bounding box.
    BuildPlateXYExtensionCard,
    /// The *ADAP card sets the number of adaptive mesh levels.
    AdaptivityCard,
    /// The *ANTP card sets the analysis type as one of the AdditiveFEAAnalysisType enum values.
    AnalysisTypeCard,
    /// The *BINA card enables binary file format output from a thermal model to be used by a subsequent mechanical model.
    BinaryOutputCard,
    /// The *ENSI card enables Ensight gold case file output.
    EnsightOutputCard,
    /// The *NOFC card disables off-core memory management.
    NoOffCoreCard,
    /// The *OFC1 card enables on-core level 1 memory management.
    OnCore1Card,
    /// The *PBLR card sets the number of coarsening generations.
    CoarseningGenerationsCard,
    /// The *END card marks the end of the input file deck.
    EndCard,
    /// The *MATE card defines material properties.
    MaterialCard,
    /// The *LSRP card creates a laser path in a rectangular patch for PRM generation.
    LaserPathGenerationCard,
    /// The *TRAN card defines transient analysis timing control.
    TransientCard,
    /// The *DDM1 card defines material property scaling factors for quiet elements and powder elements.
    PropertyScalingCard,
    /// The *PTYP card sets the powder material type as one of the AdditiveFEAPowderType enum values.
    PowderTypeCard,
    /// The *ADP1 card controls the number of fine layers beneath the deposition when coarsening.
    FineLayerCountCard,
    /// The *TAUT card automates time incrementation based on the heat source radius.
    AutomaticTimingCard,
    /// The *IOBN card enables or disables the disk check that occurs at the beginning of each simulation.
    DiskCheckCard,
    /// The *GOLD card defines the shape of the heat source for Goldak's double ellipsoid model.
    GoldakCard,
    /// The *DDMP card enables powder modeling for moving-source simulations.
    PowderCard,
    /// The *AUTM card automatically generates an input mesh for moving-source analyses, including PRM generation.
    AutomaticMeshingCard,
    /// The *PBSY card sets symmetry boundary conditions on the y-axis sides of the substrate.
    PowderBedYSymmetryCard,
    /// The *NAPL card enables the new method of PRM generation, in which faces remain free at the last time increment.
    NewPRMGenerationMethodCard,
    /// The *INIT card sets the initial temperature.
    InitialTemperatureCard,
    /// The *EVAP card specifies the evaporation temperature for the deposited material.
    EvaporationTemperatureCard,
    /// The *RELA card defines parameters for numerical relaxation of the Newton-Raphson method for stability and improved convergence.
    RelaxationCard,
    /// The *OWFC card sets the output file write frequency for PRM generation.
    OutputFileFrequencyCard,
    /// The *SOLU card defines the convergence criteria for the Newton-Raphson method.
    SolutionParametersCard,
    /// The *RELM card defines parameters for numerical relaxation, similar to *RELA, but only for the mechanical analysis.
    MechanicalRelaxationCard
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The valid generation types for an additive FEA simulation.
enum AdditiveFEAGenerationType
{
    /// Perform a mesh preview.
    MeshPreCheck,
    /// Generate a PRM file containing the thermal and mechanical response performed by a small moving source model for a specific set of processing parameters and a specific material.  The generated PRM file can later be used in a part scale simulation.
    PRM,
    /// Generate the full set of simulation results.
    Result
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The valid materials for PRM generation.  For subsequent part scale models, material properties are automatically loaded from the PRM file.
enum AdditiveFEAMaterial
{
    AISI4340AlloySteel,
    AlSi10Mg,
    CobaltChrome,
    Inconel625,
    Inconel718,
    Inconel718Plus,
    SAE304,
    StainlessSteel174PH,
    StainlessSteel316,
    Ti6Al4V
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The valid types for the PowderTypeCard.
enum AdditiveFEAPowderType
{
    /// Automatically calculated material properties using default recommended scaling factors.
    Automatic = 0,
    /// Custom scaling factors for material properties.
    Scaled = 1,
    /// Fully custom material properties.
    Custom = 2
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The STL configuration IDs for the *STLM card.
enum AdditiveFEASTLConfiguration
{
    /// A part geometry body.
    Part = 1,
    /// A custom non-rectangular build plate geometry.  Default rectangular build plates can be modeled without an explicit STL geometry.
    BuildPlate = 2,
    /// A support structure geometry.
    Support = 3,
    /// A ghost part input geometry.
    Ghost = 4
};

/// List of technologies a additive machine could have
enum AdditiveTechnologies
{
    /// Fused filament fabrication additive manufacturing process.
    FFFTechnology,
    /// Directed energy deposition additive manufacturing process.
    DEDTechnology,
    /// Machine powder bed fusion additive manufacturing process.
    MPBFTechnology,
    /// Multi fusion jet additive manufacturing process
    MFJTechnology,
    /// Multi fusion jet additive manufacturing process
    BinderJettingTechnology,
    /// Stereo lithographic apparatus additive manufacturing process
    SLATechnology,
    /// Selective laser sintering additive manufacturing process
    SLSTechnology,
    /// Non Additive Technology, meaning this is not a additive machine
    NATechnology,
    /// Every other additive manufacturing process not covered by the types above
    OtherTechnology,
    /// Electron Beam Technology
    EbeamTechnology
};

/// Enum for the types of priority for an arrange selection.
enum ArrangePriorityTypes
{
    /// Very high arrange priority
    VeryHighArrangePriorityType,
    /// High arrange priority
    HighArrangePriorityType,
    /// Medium arrange priority
    MediumArrangePriorityType,
    /// Low arrange priority
    LowArrangePriorityType,
    /// Very low arrange priority
    VeryLowArrangePriorityType
};

/// Defines the automatic generation during the creation of an operation using OperationInput or createFromCAMTemplate2.
enum AutomaticGenerationModes
{
    /// Generate newly created operations.
    ForceGeneration,
    /// Do not generate newly created operations.
    SkipGeneration,
    /// Generate operations based on the preference set in the options UI.
    UserPreference
};

/// Sets how the support should be included into the 3mf
/// Options are not to be included, as 3mf support object or as 3mf model object
enum CAM3MFSupportInclusionType
{
    /// Don't include the support.
    NotIncluded,
    /// Include the support as 3mf support object
    IncludeAsSupportType,
    /// Include the support as 3mf model object
    IncludeAsModelType
};

/// Enum specifying the types of additive containers available in Fusion.
/// Some additive containers not listed here are available via other API classes, i.e. PrintSetting
enum CAMAdditiveContainerTypes
{
    /// Contains all support operations.
    SupportCAMAdditiveContainerType,
    /// Contains all optimized orientation operations.
    OptimizedOrientationCAMAdditiveContainerType,
    /// Contains all body presets used in the setup. Containers of this type cannot be deleted.
    BodyPresetCAMAdditiveContainerType,
    /// Contains all additive process simulation studies. Containers of this type cannot be deleted.
    AdditiveProcessSimulationCAMAdditiveContainerType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// CAMEventChangeType defining what kind of change API users can expect in the event.
enum CAMEventChangeType
{
    /// Error change type used in case an error occurs.
    ErrorCAMEventChangeType = 0,
    /// Change type used if a change is triggered in the UI or API that exclusively affects the tool.
    /// I.e. a tool change via the "Edit Tool" command or while an Operation Command is open
    ToolCAMEventChangeType = 1,
    /// Change type used if a change is triggered in the UI or API that exclusively affects the tool.
    /// I.e. a tool change via the "Edit Tool" command or while an Operation Command is open
    ToolSwitchCAMEventChangeType = 2,
    /// Change type used if a change is triggered in the UI or API that exclusively affects the name of an OperationBase
    NameCAMEventChangeType = 4,
    /// Change type used if a change is triggered in the UI or API that exclusively affects parameters.
    ParameterCAMEventChangeType = 8
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// State of the event being raised.
enum CAMEventState
{
    CAMEventStateSuccessful = 0,
    CAMEventStateDeferred = 1,
    CAMEventStateErrorMissingOperation = 2,
    CAMEventStateErrorMissingDocument = 4,
    CAMEventStateErrorOther = 8
};

/// Types of default groups. Used to specify which default group to be retrieved by defaultGroup method.
enum DefaultGroupType
{
    /// Group containing surfaces belonging to the fixture. Some of these may have been defined in the setup.
    Fixture_GroupType,
    /// Group containing surfaces belonging to the model. These have been defined in the setup or using the model override selector.
    Model_GroupType,
    /// Group containing Drive surfaces.
    Drive_GroupType,
    /// Group containing Floor surfaces.
    Floor_GroupType,
    /// Group containing Wall surfaces.
    Wall_GroupType,
    /// Group containing Adjacent surfaces.
    Adjacent_GroupType
};

/// Enum for the types of extension methods for a chain selection. It defines how open curves are extended on their open end.
enum ExtensionMethods
{
    /// Tangent type of extension.
    TangentExtensionMethod,
    /// Closest boundary type of extension.
    ClosestBoundaryExtensionMethod,
    /// Parallel type of extension.
    ParallelExtensionMethod
};

/// Enum for types of extension capping.
enum ExtensionTypes
{
    /// Caps the extended curves at the stock.
    BoundaryExtensionType,
    /// Caps the extended curves depending on the startExtensionLength and endExtensionLength properties.
    DistanceExtensionType
};

/// Defines the type of a FloatParameterValue.
enum FloatParameterValueTypes
{
    /// Unspecified type can reprecent any type
    UnspecifiedValueType,
    /// Length in centimeters (cm)
    LengthValueType,
    /// Angle in radians (rad)
    AngleValueType,
    /// Linear velocity in millimeters/minute (mm/min)
    LinearVelocityValueType,
    /// Rotational velocity in revolutions per minute (rpm)
    RotationalVelocityValueType,
    /// Time in seconds (s)
    TimeValueType,
    /// Weight in kilograms (kg)
    WeightValueType,
    /// Power in Watts (W)
    PowerValueType,
    /// Flow rate in liters/minute (l/min)
    FlowRateValueType,
    /// Area in square centimeters (cm²)
    AreaValueType,
    /// Volume in cubic centimeters (cm³)
    VolumeValueType,
    /// Temperature in degrees Celsius (C)
    TemperatureValueType
};

/// Enum to define the behavior when posting to Fusion hub.
enum FusionHubExecutionBehaviors
{
    /// Post to Fusion Hub while setting the parent document as a relationship.
    /// In the UI this will raise a "save document" dialog if the parent document's save state is not up to date. Cancelling the dialog, or if none is shown, will result in the document not being saved and the post result not being exported.
    FusionHubExecutionBehavior_ForceExportWithRelationship,
    /// Post to Fusion Hub while setting the parent document as a relationship.
    /// The document and post result are both saved in the Fusion Hub folder specified. If the document has not been saved before, then a new document named "NCProgramPostProcess_YYYYMMDD_HH:MM:SS" will be created with YYYYMMDD_HH:MM:SS being substituted with the current date time.
    FusionHubExecutionBehavior_SilentForceExportWithRelationship,
    /// Post to Fusion Hub while setting the parent document as a relationship.
    /// In the UI this will raise a "save document" dialog if the parent document's save state is not up to date. Cancelling the dialog, or if none is shown, will result in the document not being saved and the post result being exported without setting the relationship in Fusion Hub. This is the default value.
    FusionHubExecutionBehavior_ExportWithRelationship,
    /// Post to Fusion Hub without setting the parent document as a relationship. The parent document does not need to be saved to post to Fusion Hub.
    FusionHubExecutionBehavior_SkipRelationship
};

/// Enum for the identifiers of generated results an OperationBase object can have
enum GeneratedDataType
{
    /// Optimized orientation identifier
    OptimizedOrientationGeneratedDataType,
    /// Additive FEA identifier.
    AdditiveFEAGeneratedDataType
};

/// Represents the recognized geometric shape of a hole segment.
enum HoleSegmentType
{
    /// Hole segment is cylindrical in shape.
    HoleSegmentTypeCylinder,
    /// Hole segment is conical in shape.
    HoleSegmentTypeCone,
    /// Hole segment is flat in shape, i.e. planar and perpendicular to the hole axis.
    HoleSegmentTypeFlat,
    /// Hole segment is toroidal in shape.
    HoleSegmentTypeTorus
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Summarize state of measured inspection point.
/// Compares the deviation from the nominal position, or the projected position
/// (if using projection), to the contact position relative to the upper or lower tolerances.
/// Further information can be found in the online help
enum InspectionPointState
{
    /// Within Tolerance. The deviation is between upper and lower tolerance.
    WithinTolerance,
    /// Above Tolerance. The deviation is above the upper tolerance, possibly indicating that not
    /// enough material has been removed.
    AboveTolerance,
    /// Below Tolerance. The deviation is below the lower tolerance, possibly indicating that too
    /// much material has been removed.
    BelowTolerance,
    /// Point failed to project when using projection.
    Unprojected
};

/// List of locations representing folders in the library dialogs.
enum LibraryLocations
{
    /// Represents the local folder in the library.
    LocalLibraryLocation,
    /// Represents the cloud folder in the library.
    CloudLibraryLocation,
    /// Represents the network folder in the library.
    /// For internal use only.
    NetworkLibraryLocation,
    /// Represents the online samples folder in the library.
    /// For internal use only.
    OnlineSamplesLibraryLocation,
    /// Represents an external folder that is not in the library.
    ExternalLibraryLocation,
    /// Represents the fusion 360 folder in the library.
    Fusion360LibraryLocation,
    /// Represents the hub libraries folder in the library.
    HubLibraryLocation
};

/// Enum to define the type of loop for a face contour selection.
enum LoopTypes
{
    /// Specifies inside and outside loops of the selected geometry.
    AllLoops,
    /// Specifies only the outer contours of the loop. There is only one outer contour per entity.
    OnlyOutsideLoops,
    /// Specifies only the inner contours. There can be none or any number of inner contours per entity.
    OnlyInsideLoops
};

/// Preference for rotary axis starting angles.
enum MachineAnglePreferences
{
    /// No preference, use any solution.
    MachineAngleNoPreference,
    /// Prefer starting rotary axis with a negative tilt.
    MachineAnglePreferNegative,
    /// Prefer starting rotary axis with a positive tilt.
    MachineAnglePreferPositive
};

/// Options to control which coordinate is used for post processing, independent of the axis direction.
/// Instructs the post processor to treat the axis as X, Y, or Z for linear and A, B, or C for rotary.
enum MachineAxisCoordinates
{
    /// Axis has no coordinate set.
    MachineCoordinate_None,
    /// Axis coordinate Linear X, Rotary A
    MachineCoordinate_X_A,
    /// Axis coordinate Linear Y, Rotary B
    MachineCoordinate_Y_B,
    /// Axis coordinate Linear X, Rotary C
    MachineCoordinate_Z_C
};

/// List of machine axis types for MachineAxis
enum MachineAxisTypes
{
    /// An axis that moves in a straight line
    LinearMachineAxisType,
    /// An axis that rotates about a point
    RotaryMachineAxisType
};

/// Enumeration of possible coolants that a machine can use.
enum MachineCoolant
{
    MachineCoolant_FLOOD,
    MachineCoolant_MIST,
    MachineCoolant_THROUGH_TOOL,
    MachineCoolant_AIR,
    MachineCoolant_AIR_THROUGH_TOOL,
    MachineCoolant_SUCTION,
    MachineCoolant_FLOOD_MIST,
    MachineCoolant_FLOOD_THROUGH_TOOL
};

/// Enumeration of the types of machine element inputs that can be created.
enum MachineElementInputType
{
    MultiAxisElement,
    ToolingCapabilityElement,
    ExtruderElement,
    LaserElement
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Type of the realized input object
enum MachineInputTypes
{
    MachineInputFromTemplate,
    MachineInputFromFile,
    MachineInputFromLibrary
};

/// Enumeration of possible MachineItem types.
enum MachineItemType
{
    MachineItemType_TOOL,
    MachineItemType_TOOL_CUTTER,
    MachineItemType_TOOL_NONCUTTER,
    MachineItemType_STOCK,
    MachineItemType_FIXTURE,
    MachineItemType_MODEL,
    MachineItemType_MACHINE_PART,
    MachineItemType_TURRET_ACTIVE_TOOL,
    MachineItemType_TURRET_INACTIVE_TOOL,
    MachineItemType_INVALID
};

/// Interpolation modes available for non-TCP motions.
enum MachineNonTCPInterpolationMode
{
    /// Moves the axes independently at maximum speed,
    /// potentially resulting in different completion times for each axis
    MachineNonTCPInterpolationMode_SynchronizedAxes,
    /// Moves the axes together, completing the motion simultaneously,
    /// although the tool's tip may deviate from the direct line between the start and finish points.
    MachineNonTCPInterpolationMode_IndependentAxes
};

/// List of part types for MachinePart
enum MachinePartTypes
{
    /// Basic type for machine parts. Can be used to represent non-moving elements of the
    /// machine such as the machine's base or an enclosure.
    BasicMachinePartType,
    /// Part type for a part that represents a machine axis.
    AxisMachinePartType,
    /// Part type for a part that represents the attachment point and orientation for a
    /// tool or tool holder.
    ToolAttachmentMachinePartType,
    /// Part type for a part that represents the attachment point and orientation for
    /// work holding.
    FixtureAttachmentMachinePartType
};

/// Axis reset preference options for MachineAxisConfiguration.whenToReset.
enum MachineResetOptions
{
    /// Remember axis position from previous operation
    MachineResetNever,
    /// Reset axis to zero before each operation begins.
    MachineResetBeforeEveryOperation,
    /// Reset axis to zero during automated rewinds.
    MachineResetOnRewind,
    /// Reset axis to zero before each operation begins and during automated rewinds.
    MachineResetBeforeOpAndOnRewind
};

/// Interpolation modes available for TCP motions.
enum MachineTCPInterpolationMode
{
    /// Moves the axes independently at maximum speed,
    /// potentially resulting in different completion times for each axis
    MachineTCPInterpolationMode_SynchronizedAxes,
    /// Moves the axes together, completing the motion simultaneously,
    /// although the tool's tip may deviate from the direct line between the start and finish points.
    MachineTCPInterpolationMode_IndependentAxes,
    /// Adjusts the linear axes to keep the tool's tip positioned along the direct line between the start and finish points.
    MachineTCPInterpolationMode_ToolTip
};

/// List of the machine templates to create a machine from.
enum MachineTemplate
{
    /// Represents a generic 2 axis turning machine.
    GenericLathe,
    /// Represents a generic 3 axis machine with 3 linear axes.
    Generic3Axis,
    /// Represents a generic 4 axis machine with 3 linear axes and 1 rotary.
    /// Default rotary axis is A.
    Generic4Axis,
    /// Represents a generic 5 axis machine with 3 linear axes and 2 rotary.
    /// Default rotary axes are A and C in a Head-Head configuration.
    Generic5AxisHeadHead,
    /// Represents a generic 5 axis machine with 3 linear axes and 2 rotary.
    /// Default rotary axes are A and C in a Head-Table configuration.
    Generic5AxisHeadTable,
    /// Represents a generic 5 axis machine with 3 linear axes and 2 rotary.
    /// Default rotary axes are A and C in a Table-Table configuration.
    Generic5AxisTableTable,
    /// Represents a generic FFF machine with two extruders.
    /// The default build room dimension is 300mm by 300mm by 300mm.
    GenericFFF
};

/// Specifies how to treat a surface group
enum MachiningMode
{
    /// The tool avoids these surfaces while it machines nearby surfaces. The tool stays clear from the avoid surfaces by the specified clearances.
    Avoid_MachiningMode,
    /// The tool machines the selected surfaces leaving stock on them according to the stock to leave value.
    Machine_MachiningMode,
    /// The tool does not actively avoid or machine these surfaces. However, if these surfaces are on the path of the tool then it may gouge and cut through them.
    Gouge_MachiningMode,
    /// The tool avoids these surfaces by the specified clearances.
    Fixture_MachiningMode
};

/// Types of provided ModifyUtility.
enum ModifyUtilityTypes
{
    /// Utility for modifications of additive setups. Corresponds to AdditiveSetupUtility.
    AdditiveSetupModifyUtility
};

/// Enumeration of the multi-axis degrees per minute types that can be used in MultiAxisDPMFeedrateSettings and its specializations.
enum MultiAxisDegreesPerMinuteType
{
    /// Sets the feedrate based on the diameter of the cutting operation and calculates the degrees of the move. Used for most rotary axes.
    MultiAxisDegreesPerMinuteType_Standard,
    /// Sets the feedrate as a combination of degrees per minute and linear feed per minute. Used typically for machines that require a form of degrees per minute feedrates.
    MultiAxisDegreesPerMinuteType_Combination
};

/// Enumeration of the multi-axis feed modes that can be used in MultiAxisFeedrateSettings and its specializations.
enum MultiAxisFeedMode
{
    /// Sets the time for completing a move as an inverse of the feedrate. The smaller the value, the faster the move.
    MultiAxisFeedMode_InverseTime,
    /// Sets the feedrate based on the diameter of the cutting operation and calculates the degrees of the move. Used for most rotary axes.
    MultiAxisFeedMode_DegreesPerMinute,
    /// Applies the programmed feedrates without adjustments.
    MultiAxisFeedMode_ProgrammerdFeedrate
};

/// The time unit used to calculate the feedrate for the MultiAxisInverseTimeFeedrateSettings
enum MultiAxisInverseTimeUnit
{
    MultiAxisInverseTimeUnit_Seconds,
    MultiAxisInverseTimeUnit_Minutes
};

/// Enumeration of the multi-axis retract preferences that can be used in MultiAxisRetractAndReconfigureSettings.
enum MultiAxisRetractPreference
{
    /// Always retract when repositioning rotary axes.
    MultiAxisRetractPreference_RetractAtApex,
    /// Allows the tool to stay down without retracting when the rotary axes are repositioned.
    /// The tool must be perpendicular to the rotary axis rotational vector (so that only one rotary axis will move) and TCP must be enabled for this axis.
    MultiAxisRetractPreference_StayAtApex
};

/// Enumeration of the multi-axis rewind preferences that can be used in MultiAxisRetractAndReconfigureSettings.
enum MultiAxisRewindPreference
{
    /// It can retract at any point, including cutting moves.
    MultiAxisRewindPreference_RewindAtLinear,
    /// Allows the retract and rewind to occur at a rapid (non-cutting) move instead of at the limits of the rotary axis when possible.
    /// It may not be possible in all cases to retract and rewind at a rapid move, in this case the rewind occurs at a cutting move.
    MultiAxisRewindPreference_RewindAtRapid
};

/// Enum for the types of multi-axis rotation for an arrange selection.
enum MultiAxisRotationTypes
{
    /// Does not combine rotations, only allows single axis rotations.
    MultiAxisRotationType_SingleAxis,
    /// Combines rotations for all enabled axes.
    MultiAxisRotationType_AllAxes,
    /// Combines rotations for X and Y axis only. Both need to be enabled.
    MultiAxisRotationType_XYAxes,
    /// Combines rotations for X and Z axis only. Both need to be enabled.
    MultiAxisRotationType_XZAxes,
    /// Combines rotations for Y and Z axis only. Both need to be enabled.
    MultiAxisRotationType_YZAxes
};

/// The linearization method the MultiAxisSingularitySettings should use.
/// Different values will be used in different MultiAxisSingularitySettings specializations.
enum MultiAxisSingularityLinearizeMethod
{
    /// Moves the tool end point along the straight line by adding points to the toolpath. It keeps the tool within the specified Linearization Tolerance.
    MultiAxisSingularityLinearize_Linear,
    /// Applies a linear shape to the moves around the singularity by adding points to the toolpath. It keeps the tool within the specified Linearization Tolerance.
    /// The rotary linearization optimizes the tool for revolved movement as if the tool were moving around a cylinder or other object created by revolution.
    MultiAxisSingularityLinearize_Rotary
};

/// Available colors for the note icon.
enum NoteIconColors
{
    Gray,
    Red,
    Blue,
    Green,
    Yellow
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Type of the event. This serves to distinguish between event types if users register the same handler for multiple events.
enum OperationBaseEventTypes
{
    ErrorOperationBaseEventType,
    CommandStartedOperationBaseEventType,
    GenerationStartedOperationBaseEventType,
    ChangeOperationBaseEventType,
    GenerationStartingOperationBaseEventType,
    CommandButtonPressedOperationBaseEventType
};

/// The possible states of an operation. Some operations do not generate toolpaths, their state ignores the potential toolpath states.
enum OperationStates
{
    /// Indicates the state where the operation is valid and is up to date and the toolpath exists if applicable.
    IsValidOperationState,
    /// Indicates the state where the operation or its toolpath is invalid.
    IsInvalidOperationState,
    /// Indicates the state where the operation is suppressed. Toolpaths do not exist for suppressed operations.
    SuppressedOperationState,
    /// Indicates the state where the toolpath does not exist for an operation. Not applicable for operations that do not generate toolpaths.
    NoToolpathOperationState
};

/// !!!!! Warning !!!!!
/// ! This has been retired; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The valid options for the Strategy Type of an operation.
enum OperationStrategyTypes
{
    /// A 2D strategy that creates a roughing operation that uses a more optimized toolpath that avoids abrupt direction changes.
    AdaptiveClearing2D,
    /// A 2D strategy that creates a roughing operation that uses toolpaths parallel to selected geometry.
    Pocket2D,
    /// A 2D strategy that produces quick part facing to prepare raw stock for machining.
    Face,
    /// A 2D strategy that creates toolpaths based on a 2D contour.  Contours can be open or closed and can be on
    /// different Z-levels, but each contour is flat (2D).
    Contour2D,
    /// A 2D strategy that mills a slot by following the center line of the slot.
    Slot,
    /// A 2D strategy that machines along contours with varying Z values and with, or without,
    /// left and right side compensation.
    Trace,
    /// A 2D strategy for thread milling cylindrical pockets and islands.
    Thread,
    /// A 2D strategy for milling cylindrical pockets and islands by selecting the cylindrical geometry directly.
    Bore,
    /// A 2D strategy for milling cylindrical pockets and islands.
    Circular,
    /// A 2D strategy that machines along contours with V-shaped chamfered walls.
    Engrave,
    /// A 3D roughing strategy for clearing large quantities of material effectively.
    AdaptiveClearing,
    /// A 3D conventional roughing strategy for clearing large quantities of material effectively.
    PocketClearing,
    /// A 3D finishing strategy.  The passes are parallel in the XY-plane and follow the surface in the Z-direction.
    Parallel,
    /// A 3D strategy for finishing steep walls, but can be used for semi-finish and finish machining on the more
    /// vertical areas of a part.
    Contour,
    /// A 3D finishing strategy intended for steep areas similar to the contour strategy.
    /// However, this strategy ramps down walls rather than machining them with a constant Z, as contour does.
    Ramp,
    /// A 3D strategy that automatically detects all the flat areas of the part and clears them with an offsetting path.
    Horizontal,
    /// A 3D strategy that creates toolpaths along internal corners and fillets with small radii,
    /// removing material that no other tool can reach.
    Pencil,
    /// A 3D strategy that creates passes at a constant distance from one another by offsetting them inwards along the
    /// surface.  The passes follow sloping and vertical walls to maintain the stepover.
    Scallop,
    /// A 3D strategy that creates a spiral toolpath from a given center point, generating a constant contact as it machines
    /// within a given boundary.
    Spiral,
    /// A 3D strategy similar to Spiral machining.  This operation also starts from a center point, providing the ability to
    /// machine radial parts.  It also provides the option to stop short of the center of the radial passes, where they become
    /// very dense.
    Radial,
    /// A 3D strategy similar to Spiral except that this operation generates the spiral from the selected boundary as
    /// opposed to Spiral which trims the generated passes to the machining boundary.
    MorphedSpiral,
    /// A finishing strategy that allows you to machine along contours with the center of the tool.
    /// The provided contours are automatically projected onto the surface, so they do not have to actually lie on the surface.
    Projection,
    /// A strategy that supports a wide range of drilling, tapping and hole making operations such as counterbores and
    /// countersinks.
    Drilling,
    /// A strategy that creates a 2D toolpath for waterjet, laser, and plasma cutting processes.
    Jet2D,
    /// The turning chamfer strategy is used for chamfering sharp corners that have not been chamfered in the design.
    TurningChamfer,
    /// The face strategy is used for machining the front side of the part.
    TurningFace,
    /// The turning groove strategy is used for grooving at selected positions only. This can for instance be used to make a groove on the backside before threading.
    TurningGroove,
    /// This strategy is used for cutting off the part once the part has been fully machined or for machining it on another spindle.
    TurningPart,
    /// The turning profile strategy is used for both roughing and finishing of the part using general turning tools.
    TurningProfile,
    /// The turning groove strategy is used for both roughing and finishing of the part using groove tools.
    TurningProfileGroove,
    /// The turning stock transfer strategy is intended for automatic stock transfer between the two spindles. No toolpath is associated with this strategy.
    /// The post is responsible for outputting the desired NC code.
    TurningStockTransfer,
    /// This strategy is used for turning threads. Both cylindrical and conical threads are supported.
    /// The CNC control must have built-in support for synchronizing the spindle and feed.
    TurningThread,
    /// A 3D finishing strategy that uses Contour passes for steep areas and Parallel or Scallop passes for
    /// shallow areas.
    SteepAndShallow,
    /// A 3D finishing strategy which follows the isocurves of a surface to machine parts with curved surfaces.
    /// Flow is a 3-Axis toolpath by default but can be used in multi-axis modes.
    Flow,
    /// A 3D finishing strategy which follows the isocurves of a surface to machine parts with curved surfaces.
    /// Flow is a 3-Axis toolpath by default but can be used in multi-axis modes.
    Flow2,
    /// A multi-axis machining strategy that lets you machine along and around a rotating axis.
    /// Rotary Finishing can be used for parts that are machined most efficiently when utilizing the 4th Machine Axis.
    RotaryFinishing,
    /// A 2D machining strategy that machines along contours creating a chamfered surface.
    Chamfer2D,
    /// A 3D finishing strategy for machining shallow areas between selected contours with a consistent cutting direction.
    Morph,
    /// A multi-axis strategy for machining with the tip of the tool along a given contact curve.
    MultiAxisContour,
    /// A multi-axis strategy for machining shallow areas between selected contours with a consistent cutting direction.
    MultiAxisMorph,
    /// A finishing operation to machine any remaining stock left from previous operations.
    RestFinishing,
    /// A multi-axis strategy for machining with the side of the tool.
    Swarf,
    /// A strategy for the inspection of geometry using probe.
    SurfaceInspection,
    /// Manual inspection.
    ManualInspection,
    /// Probe WCS operation
    ProbeWCS,
    /// Probe Geometry operation
    ProbeGeometry,
    /// Part alignment.
    PartAlignment,
    /// A surface inspection measurement with a results folder.
    PathMeasure,
    /// Recorded results of a manual inspection.
    ManualMeasure
};

/// The valid options for the Operation Type of a Setup.
enum OperationTypes
{
    /// Specifies a milling type operation
    MillingOperation,
    /// Specifies a turning type operation
    TurningOperation,
    /// Specifies a Jet type operation
    JetOperation,
    /// Specifies an additive type operation
    AdditiveOperation
};

/// List of capabilities a post configuration can support.
/// These capabilities represent either a class of operations (milling, turning, etc.) or some additional functionality (e.g. machine simulation).
enum PostCapabilities
{
    /// Undefined, default when query is created.
    Undefined = 0,
    /// Post supports milling operations.
    Milling = 1,
    /// Post supports turning operations.
    Turning = 2,
    /// Post creates a setup sheet rather than NC code.
    SetupSheet = 4,
    /// Post outputs data in an intermediate format intended for processing by another application rather than NC code for a machine.
    Intermediate = 8,
    /// Post supports jet cutting operations (e.g. water jet, plasma, or laser).
    Jet = 16,
    /// Post configuration is intended to run as a complement to another post that produces NC code to pass additional data to an external application.
    Cascading = 32,
    /// Post supports additive operations.
    Additive = 64,
    /// Post supports surface inspection operations.
    Inspection = 128,
    /// Post configuration provides additional data to support machine simulation.
    MachineSimulation = 256
};

/// List of the valid options for the outputUnit property on a PostProcessInput object .
enum PostOutputUnitOptions
{
    /// Post the toolpath in the document units
    DocumentUnitsOutput,
    /// Post the toolpath in inches
    InchesOutput,
    /// Post the toolpath in millimeters
    MillimetersOutput
};

enum PostProcessExecutionBehaviors
{
    /// Default value, post process only valid operations containing toolpath data.
    PostProcessExecutionBehavior_OmitInvalidAndEmptyOperations,
    /// If any issue with an operation arises, the post processing should throw an exception.
    PostProcessExecutionBehavior_Fail,
    /// Post process all operations disregarding their state.
    PostProcessExecutionBehavior_PostAll
};

/// Enum that represents the types of CAMParameters.
/// Represents the General and Exporter parameters type in PrintSetting.
enum PrintSettingItemTypes
{
    GENERAL,
    EXPORTER
};

/// Types of pocket bottoms that can exist. Flat represents a standard flat bottom with sharp
/// edges at the walls. (Flat may also have some portions that are through, but may not have any
/// portions that are chamfered or filleted.) Through represents a pocket with no bottom
/// anywhere along the boundary and sharp edges at the walls. Chamfer and fillet represent pockets
/// where that type of feature goes around all edges of the boundary and islands, between the bottom
/// and the walls.  Other represents any other cases, such as a mix of different bottom types for
/// different edges.
enum RecognizedPocketBottomType
{
    RecognizedPocketBottomTypeFlat,
    RecognizedPocketBottomTypeThrough,
    RecognizedPocketBottomTypeChamfer,
    RecognizedPocketBottomTypeFillet,
    RecognizedPocketBottomTypeOther
};

/// List of setup change event types.
enum SetupChangeEventType
{
    /// Arbitrary change
    Arbitrary,
    /// Selection of print setting
    PrintSettingSelection
};

/// List of the formats to choose from when generating setup sheets
enum SetupSheetFormats
{
    /// Generates an HTML document
    HTMLFormat,
    /// Generates an Excel document
    ExcelFormat
};

/// List of setup stock modes.
enum SetupStockModes
{
    /// Fixed Size Box
    FixedBoxStock,
    /// Relative Size Box
    RelativeBoxStock,
    /// Fixed Size Cylinder
    FixedCylinderStock,
    /// Relative Size Cylinder
    RelativeCylinderStock,
    /// Fixed Size Tube
    FixedTubeStock,
    /// Relative Size Tube
    RelativeTubeStock,
    /// From Solid
    SolidStock,
    /// From Preceding Setup
    PreviousSetupStock
};

/// Enum for the order of loops.
enum SideTypes
{
    /// AlwaysOutside
    AlwaysOutsideSideType,
    /// AlwaysInside
    AlwaysInsideSideType,
    /// StartOutside has the order outside - inside - outside ...
    StartOutsideSideType,
    /// StartInside has the order inside - outside - inside ...
    StartInsideSideType
};

/// Split support behavior depending on the type of support.
enum SplitSupportTypes
{
    /// Solid and open support into one single mesh body.
    SolidOpenMergedSplitSupportType,
    /// Solid and open support into two separate mesh bodies.
    SolidOpenSeparateSplitSupportType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// The custom strategy command definitions to specify the entry points in the UI.
enum StrategyRegistrationIssues
{
    /// Skips all non critical issues by not adding conflicting and unsupported parameters.
    SkipAll_StrategyRegistrationIssues,
    /// Skips all non critical issues, but cancels the registration when trying to add parameters with the same name.
    CancelOnParameterCollisions_StrategyRegistrationIssues,
    /// Skips all non critical issues, but cancels the registration when trying to add metaparameters with the same name.
    CancelOnMetaparameterCollisions_StrategyRegistrationIssues,
    /// Skips all non critical issues, but cancels the registration when trying to add unsuppored metaparameters.
    CancelOnUnsupporedMetaparameters_StrategyRegistrationIssues,
    /// Cancels the registration on any detected issue.
    CancelOnAll_StrategyRegistrationIssues
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Identifies the type of joint origin for tool assembly components.
/// Joint origins define the coordinate systems and attachment points that position and orient tool components within a tool assembly.
enum ToolJointType
{
    /// The Cutting Side Work Coordinate System (CSW) joint origin.
    /// This defines the attachment point on the cutting/tool side of the component.
    CuttingSideJoint,
    /// The Machine Side Work Coordinate System (MCS) joint origin.
    /// This defines the attachment point on machine side of the component.
    MachineSideJoint,
    /// The Tool Holder Work Coordinate System (THWCS) joint origin.
    /// This defines the attachment point for the tool holder.
    ToolHolderJoint
};

}// namespace cam
}// namespace adsk
