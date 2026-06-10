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

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Visibility mode for attribute text.
enum AttributeDisplayModes
{
    /// Attribute is hidden.
    NoneAttributeDisplayMode = 0,
    /// Display value only.
    ValueAttributeDisplayMode = 1,
    /// Display name only.
    NameAttributeDisplayMode = 2,
    /// Display both name and value.
    BothAttributeDisplayMode = 3
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Shape applied to the endpoints of an open stroke (wire or arc).
enum Caps
{
    /// Flat (butt) cap; stroke ends exactly at the endpoint.
    FlatCap = 0,
    /// Round (semicircular) cap; stroke extends a half-width past the endpoint.
    RoundCap = 1
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Measurement and annotation style for dimension objects.
enum DimensionTypes
{
    /// Dimension measured along the line between the two points.
    ParallelDimensionType = 0,
    /// Horizontal distance between two points.
    HorizontalDimensionType = 1,
    /// Vertical distance between two points.
    VerticalDimensionType = 2,
    /// Radius of a circle or arc.
    RadiusDimensionType = 3,
    /// Diameter of a circle or arc.
    DiameterDimensionType = 4,
    /// Angle between two lines.
    AngleDimensionType = 5,
    /// Leader line with text annotation (no measured value).
    LeaderDimensionType = 6
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Symbol used to annotate drill sizes in drill charts.
enum DrillSymbols
{
    /// No symbol; drill size not annotated.
    NoneDrillSymbol = -1,
    /// Plus-shaped symbol.
    PlusDrillSymbol = 0,
    /// Cross-shaped symbol.
    CrossDrillSymbol = 1,
    /// Square-shaped symbol.
    SquareDrillSymbol = 2,
    /// Diamond-shaped symbol.
    DiamondDrillSymbol = 3,
    /// Triangle with vertex up.
    TriVDrillSymbol = 4,
    /// Triangle with vertex to the side.
    TriHDrillSymbol = 5,
    /// Triangle rotated 45 degrees.
    Tri45DrillSymbol = 6,
    /// Triangle rotated 135 degrees.
    Tri135DrillSymbol = 7,
    /// Star with point up.
    StarVDrillSymbol = 8,
    /// Star with point to the side.
    StarHDrillSymbol = 9,
    /// Upward arrow symbol.
    UpDrillSymbol = 10,
    /// Downward arrow symbol.
    DownDrillSymbol = 11,
    /// Right-pointing arrow symbol.
    RightDrillSymbol = 12,
    /// Left-pointing arrow symbol.
    LeftDrillSymbol = 13,
    /// Circle symbol.
    CircleDrillSymbol = 14,
    /// Double circle symbol.
    Circle2DrillSymbol = 15,
    /// Mark (crosshair) symbol.
    MarkDrillSymbol = 16,
    /// Alternative mark symbol.
    Mark2DrillSymbol = 17
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Approval status of an error in the errors panel.
enum ErrorStates
{
    /// Active (unresolved; not yet processed).
    ActiveErrorState = 0,
    /// Processed (marked as reviewed).
    ProcessedErrorState = 1,
    /// Approved (accepted by the user).
    ApprovedErrorState = 2
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Severity or category of a design rule or electrical rule check error.
enum ErrorTypes
{
    /// Warning (non-critical; design may still function).
    WarningErrorType = 0,
    /// Failure (critical error that should be fixed).
    FailureErrorType = 1,
    /// Consistency violation between schematic and board (e.g., part or attribute mismatch).
    ConsistencyErrorType = 2,
    /// Unrouted airwire (board only).
    AirwireErrorType = 3
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Fill pattern used when displaying a layer.
enum FillPatterns
{
    /// No fill (transparent).
    EmptyFillPattern = 0,
    /// Solid (opaque) fill pattern.
    SolidFillPattern = 1,
    /// Line fill pattern.
    LineFillPattern = 2,
    /// Light slash fill pattern.
    LtSlashFillPattern = 3,
    /// Slash fill pattern.
    SlashFillPattern = 4,
    /// Backslash fill pattern.
    BkSlashFillPattern = 5,
    /// Light backslash fill pattern.
    LtBkSlashFillPattern = 6,
    /// Hatch fill pattern.
    HatchFillPattern = 7,
    /// Cross-hatch fill pattern.
    XHatchFillPattern = 8,
    /// Interleave fill pattern.
    InterleaveFillPattern = 9,
    /// Wide dot fill pattern.
    WideDotFillPattern = 10,
    /// Close dot fill pattern.
    CloseDotFillPattern = 11,
    /// Stipple pattern 1 (predefined dither).
    Stipple1FillPattern = 12,
    /// Stipple pattern 2 (predefined dither).
    Stipple2FillPattern = 13,
    /// Stipple pattern 3 (predefined dither).
    Stipple3FillPattern = 14,
    /// Stipple pattern 4 (predefined dither).
    Stipple4FillPattern = 15,
    /// User-defined fill pattern.
    UserFillPattern = 16
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Rendering style for text (vector, proportional, or fixed).
enum Fonts
{
    /// Vector (stroke-based) font; scales without pixelation.
    VectorFont = 0,
    /// Proportional (variable-width) font; characters have different widths.
    ProportionalFont = 1,
    /// Fixed-width (monospace) font; all characters have equal width.
    FixedFont = 2
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// When a gate is added when placing a multi-gate device (e.g., IC with multiple symbols).
enum GateAddLevels
{
    /// Gate must appear whenever any gate from the device is placed; cannot be deleted until all others are removed.
    MustGateAddLevel = 0,
    /// Gate is optional; only added with INVOKE if the device also has Next-gates, or with ADD if the device has only Can and Request gates.
    CanGateAddLevel = 1,
    /// Default: if the device has more than one gate, symbols are placed with this level first.
    NextGateAddLevel = 2,
    /// Gate is added only when explicitly invoked (e.g., power-symbol); not counted for gate naming.
    RequestGateAddLevel = 3,
    /// Like Must, but the gate can be deleted and re-invoked with INVOKE.
    AlwaysGateAddLevel = 4
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Unit types for grid spacing and display.
enum GridUnits
{
    /// Grid spacing in microns (µm).
    MICGridUnit = 0,
    /// Grid spacing in millimeters (mm).
    MMGridUnit = 1,
    /// Grid spacing in mils (1/1000 inch).
    MILGridUnit = 2,
    /// Grid spacing in inches (in).
    INCHGridUnit = 3
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Object ID mode for queries.
enum ObjectIdMode
{
    /// Runtime sequence number (session-scoped).
    RuntimeSequence = 0,
    /// Unique object ID (persistent).
    UniqueObjectId = 1
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Behavioral flags for through-hole pads.
enum PadFlags
{
    /// No flags set.
    NonePadFlag = 0,
    /// When set, generates solder stop mask opening for this pad.
    StopPadFlag = 1,
    /// When set, generates thermal relief connections for supply layer pads.
    ThermalsPadFlag = 2,
    /// When set, uses the first (primary) pad shape from the shape list.
    FirstPadFlag = 4
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Copper shape of a through-hole pad.
enum PadShapes
{
    /// Square pad shape.
    SquarePadShape = 0,
    /// Round (circular) pad shape.
    RoundPadShape = 1,
    /// Octagonal pad shape.
    OctagonPadShape = 2,
    /// Long oblong pad shape for elongated holes.
    LongPadShape = 3,
    /// Offset elongated pad shape (asymmetric along one axis).
    OffsetPadShape = 4,
    /// Annulus (ring) pad shape; used on supply layers only.
    AnnulusPadShape = 5,
    /// Thermal relief pad shape; used on supply layers only.
    ThermalPadShape = 6
};

/// Electrical direction of a pin (input, output, power, etc.).
enum PinDirections
{
    /// Not connected (no electrical connection).
    NCPinDirection = 0,
    /// Input pin that receives signals.
    InPinDirection = 1,
    /// Output pin (totem-pole).
    OutPinDirection = 2,
    /// Bidirectional in/output pin.
    IOPinDirection = 3,
    /// Open-collector output pin.
    OCPinDirection = 4,
    /// Power input pin.
    PwrPinDirection = 5,
    /// Passive pin with no inherent electrical direction.
    PasPinDirection = 6,
    /// High-impedance output pin.
    HizPinDirection = 7,
    /// Supply pin (e.g., VCC, GND in power symbols).
    SupPinDirection = 8
};

/// Graphical symbol (inverter or clock) drawn next to a pin.
enum PinFunctions
{
    /// No graphical symbol (inverter or clock) next to the pin.
    NonePinFunction = 0,
    /// Inverter (bubble) symbol.
    DotPinFunction = 1,
    /// Clock symbol drawn next to the pin.
    ClkPinFunction = 2
};

/// Graphical length of the pin wire in the symbol.
enum PinLengths
{
    /// No wire (point).
    PointPinLength = 0,
    /// 0.1 inch wire (short).
    ShortPinLength = 1,
    /// 0.2 inch wire (middle).
    MiddlePinLength = 2,
    /// 0.3 inch wire (long).
    LongPinLength = 3
};

/// Which name is displayed for the pin.
enum PinVisibles
{
    /// No name drawn.
    OffPinVisible = 0,
    /// Pad name drawn.
    PadPinVisible = 1,
    /// Pin name drawn.
    PinPinVisible = 2
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Side of the module symbol where a port is placed.
enum PortBorderSides
{
    /// Bottom side of the module symbol.
    BottomBorderSide = 0,
    /// Right side of the module symbol.
    RightBorderSide = 1,
    /// Top side of the module symbol.
    TopBorderSide = 2,
    /// Left side of the module symbol.
    LeftBorderSide = 3
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Signal flow direction for a port; used for ERC.
enum PortDirections
{
    /// Not connected (no electrical direction).
    NCPortDirection = 0,
    /// Input (signal flows in).
    InPortDirection = 1,
    /// Output (totem-pole).
    OutPortDirection = 2,
    /// Input/output (bidirectional); default.
    IOPortDirection = 3,
    /// Open collector or open drain.
    OCPortDirection = 4,
    /// Power input (e.g., Vcc, Gnd, Vdd).
    PwrPortDirection = 5,
    /// Passive (e.g., resistors, capacitors).
    PasPortDirection = 6,
    /// High-impedance output.
    HizPortDirection = 7
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// How a contact reference connects when the element has multiple gates.
enum RouteConnect
{
    /// Connect to all gates (default); any gate can fulfill the connection.
    AllRouteConnect = 0,
    /// Connect to a specific gate only; routetag specifies which gate and pin.
    AnyRouteConnect = 1
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Behavioral flags for SMD pads (stop mask, thermals, cream mask).
enum SmdFlags
{
    /// No flags set.
    NoneSmdFlag = 0,
    /// When set, generates solder stop mask opening for this pad.
    StopSmdFlag = 1,
    /// When set, generates thermal relief connections for supply layer pads.
    ThermalsSmdFlag = 2,
    /// When set, generates solder cream (paste) mask opening for this pad.
    CreamSmdFlag = 4
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Horizontal and vertical alignment of text relative to its anchor point.
enum TextAlignments
{
    /// Text aligned to the bottom-left corner.
    BottomLeftTextAlignment = 0,
    /// Text aligned to the bottom-center.
    BottomCenterTextAlignment = 1,
    /// Text aligned to the bottom-right corner.
    BottomRightTextAlignment = 2,
    /// Text aligned to the center-left.
    CenterLeftTextAlignment = 3,
    /// Text centered both horizontally and vertically.
    CenterTextAlignment = 4,
    /// Text aligned to the center-right.
    CenterRightTextAlignment = 5,
    /// Text aligned to the top-left corner.
    TopLeftTextAlignment = 6,
    /// Text aligned to the top-center.
    TopCenterTextAlignment = 7,
    /// Text aligned to the top-right corner.
    TopRightTextAlignment = 8
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Orientation of vertically drawn text (upward or downward).
enum VerticalTextModes
{
    /// Text oriented upward (default).
    UpVerticalTextMode = 0,
    /// Text oriented downward.
    DownVerticalTextMode = 1
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Behavioral flags for a via (e.g., solder mask opening).
enum ViaFlags
{
    /// Default via treatment; no solder mask or other flags set.
    NoneViaFlag = 0,
    /// Solder mask (stop mask) opening; when set, the via gets a solder mask opening.
    StopViaFlag = 1
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Cross-section shape of a via.
enum ViaShapes
{
    /// Square via cross-section.
    SquareViaShape = 0,
    /// Round via cross-section.
    RoundViaShape = 1,
    /// Octagonal via cross-section.
    OctagonViaShape = 2
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Dash pattern applied to a wire stroke.
enum WireStyles
{
    /// Solid continuous line (no dashes).
    ContinuousWireStyle = 0,
    /// Long dashes with gaps between.
    LongDashWireStyle = 1,
    /// Short dashes with gaps between.
    ShortDashWireStyle = 2,
    /// Alternating dash and dot pattern.
    DashDotWireStyle = 3
};

}// namespace electron
}// namespace adsk
