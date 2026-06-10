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

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Simulation constraint types.
enum ConstraintTypes
{
    /// Unknown constraint type.
    UnknownConstraintType,
    /// Fixed constraint type.
    FixedConstraintType,
    /// Frictionless constraint type.
    FrictionlessConstraintType,
    /// Prescribed displacement constraint type.
    PrescribedDisplacementConstraintType,
    /// Pin constraint type.
    PinConstraintType,
    /// Remote constraint type.
    RemoteConstraintType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Contact types
enum ContactTypes
{
    /// Unknown contact type.
    UnknownContactType,
    /// Bonded contact.
    BondedContactType,
    /// Offset bonded contact.
    OffsetBondedContactType,
    /// Separation contact.
    SeparationContactType,
    /// Sliding contact.
    SlidingContactType,
    /// Rough contact.
    RoughContactType,
    /// Free contact.
    FreeContactType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Mesh element order types.
enum ElementOrderTypes
{
    /// Unknown element order type.
    UnknownElementOrderType,
    /// Linear element order type.
    LinearElementOrderType,
    /// Parabolic (quadratic) element order type.
    ParabolicElementOrderType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Determination of the average element size.
enum ElementSizeDeterminationTypes
{
    /// Unknown element size determination type.
    UnknownElementSizeDeterminationType,
    /// Average element size as a proportion of the model size.
    SizeByModelElementSizeDeterminationType,
    /// An absolute value for the average element size.
    AbsoluteElementSizeDeterminationType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Valid force unit types for simulation studies.
enum ForceUnits
{
    /// Read-only value, resolves to the document's currently active force unit.
    DefaultForceUnit,
    /// Unknown force unit type.
    UnknownForceUnit,
    /// Newton (N).
    NewtonForceUnit,
    /// Dyne (dyne).
    DyneForceUnit,
    /// Pound-force (lbforce).
    PoundForceUnit,
    /// Ounce-force (ozforce).
    OunceForceUnit,
    /// Ton-force (tonforce).
    TonForceUnit
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Load types.
enum LoadTypes
{
    /// Unknown load type.
    UnknownLoadType,
    /// Pressure load type.
    PressureLoadType,
    /// Hydrostatic pressure load type.
    HydrostaticPressureLoadType,
    /// Force load type.
    ForceLoadType,
    /// Moment load type.
    MomentLoadType,
    /// Bearing load type.
    BearingLoadType,
    /// Flow rate load type.
    FlowRateLoadType,
    /// Flow velocity load type.
    FlowVelocityLoadType,
    /// Fan attribute load type.
    FanAttributeLoadType,
    /// Heat sink load type.
    HeatSinkLoadType,
    /// Gravity load type.
    GravityLoadType,
    /// Linear global load type.
    LinearGlobalLoadType,
    /// Angular global load type.
    AngularGlobalLoadType,
    /// Temperature load type.
    TemperatureLoadType,
    /// Thermal convection load type.
    ThermalConvectionLoadType,
    /// Thermal emissivity load type.
    RadiationLoadType,
    /// Thermal internal heat load type.
    ThermalInternalHeatLoadType,
    /// Thermal surface heat load type.
    ThermalSurfaceHeatLoadType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Severity level of a pre-check message.
enum PrecheckMessageSeverities
{
    /// Informational message indicating the study passed validation.
    InformationPrecheckMessageSeverity,
    /// Warning message that does not prevent solving but should be reviewed.
    WarningPrecheckMessageSeverity,
    /// Critical error message that prevents the study from being solved.
    ErrorPrecheckMessageSeverity
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Pre-check state indicating whether the study is ready to solve.
enum PrecheckStates
{
    /// The pre-check status has not been computed yet or is unknown.
    UnknownPrecheckState,
    /// The study is ready to solve with no issues.
    ReadyToSolvePrecheckState,
    /// The study is ready to solve but has warnings that should be reviewed.
    ReadyToSolveWithWarningsPrecheckState,
    /// The study is not ready to solve due to errors that must be fixed.
    NotReadyToSolvePrecheckState
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Material safety factor types.
enum SafetyFactorTypes
{
    /// The method to calculate the factor of safety is based on the yield strength.
    YieldStrengthSafetyFactorType,
    /// The method to calculate the factor of safety is based on the ultimate tensile strength.
    UltimateTensileStrengthSafetyFactorType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Predefined unit systems available for simulation studies.
enum SimulationUnitSystems
{
    /// Metric (SI) unit system:
    /// Length: mm, Mass: kg, Time: s, Force: N, Pressure: MPa,
    /// Temperature: K, Energy: J, Power: W, Acceleration: m/s^2, Flow Rate: CMH, Angle: deg,
    /// Velocity: m/s, Viscosity: Ns/m^2.
    MetricSIUnitSystem,
    /// U.S. (in) unit system:
    /// Length: in, Mass: lbmass, Time: s, Force: lbforce, Pressure: psi,
    /// Temperature: F, Energy: Btu, Power: Btu/s, Acceleration: ft/s^2, Flow Rate: CFM, Angle: deg,
    /// Velocity: ft/s, Viscosity: lbforce * s/ft^2.
    ImperialUnitSystem,
    /// Custom unit system that allows any combination of units per quantity.
    CustomUnitSystem
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Simulation study types.
enum StudyTypes
{
    /// Unknown study type.
    UnknownStudyType,
    /// Structural linear static stress simulation study type.
    LinearStaticStressStudyType,
    /// Structural nonlinear static stress simulation study type.
    NonLinearStaticStressStudyType,
    /// Structural dynamic event simulation study type.
    DynamicEventSimulationStudyType,
    /// Modal frequencies simulation study type.
    ModalFrequenciesStudyType,
    /// Electronics cooling simulation study type.
    ElectronicsCoolingStudyType,
    /// Thermal simulation study type.
    ThermalStudyType,
    /// Thermal stress simulation study type.
    ThermalStressStudyType,
    /// Structural buckling simulation study type.
    StructuralBucklingStudyType,
    /// Quasi-static event simulation study type.
    QuasiStaticEventSimulationStudyType,
    /// Shape optimization simulation study type.
    ShapeOptimizationStudyType,
    /// Injection molding simulation study type.
    InjectionMoldingStudyType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Load vector definition types.
enum VectorDefinitionTypes
{
    /// Unknown vector definition type.
    UnknownVectorDefinitionType,
    /// Vector defined by the normal to the applied entity.
    NormalVectorDefinitionType,
    /// Vector defined directly by a vector.
    VectorVectorDefinitionType,
    /// Vector based on rotations around a reference geometry.
    AnglesVectorDefinitionType,
    /// Vector based on a reference geometry.
    ReferenceVectorDefinitionType
};

}// namespace sim
}// namespace adsk
