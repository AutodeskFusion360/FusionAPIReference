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

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Specifies ASME/ANSI sheet sizes for drawing documents.
enum ASMESheetSizes
{
    /// ANSI A (8.5 x 11 in). US letter size.
    AASMESheetSize,
    /// ANSI B (11 x 17 in).
    BASMESheetSize,
    /// ANSI C (17 x 22 in). For assembly drawings.
    CASMESheetSize,
    /// ANSI D (22 x 34 in). Large format.
    DASMESheetSize,
    /// ANSI E (34 x 44 in). Largest ANSI size.
    EASMESheetSize
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Specifies the base document option for drawing creation.
enum BaseDocumentTypes
{
    /// Create drawing from scratch.
    FromScratchBaseDocumentType,
    /// Create drawing from a template file.
    /// Note: This option is not currently supported. Use FromScratchBaseDocumentType instead.
    FromTemplateBaseDocumentType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Center line display options for cylindrical features.
enum CenterLineDisplayTypes
{
    /// No automatic center lines.
    OffCenterLineDisplayType,
    /// Center lines on all cylindrical features.
    AllCylindricalCenterLineDisplayType,
    /// Center lines on holes only.
    AllHolesCenterLineDisplayType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Center mark display options for circular features.
enum CenterMarkDisplayTypes
{
    /// No automatic center marks.
    OffCenterMarkDisplayType,
    /// Center marks on all holes.
    AllHolesCenterMarkDisplayType,
    /// Center marks on all fillet arcs.
    AllFilletsCenterMarkDisplayType,
    /// Center marks on all circular edges.
    AllCircularEdgesCenterMarkDisplayType,
    /// Center marks on all punch features (sheet metal).
    AllPunchesCenterMarkDisplayType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Default origin (datum) point for component dimension placement.
enum DefaultOriginTypes
{
    /// Model's (0,0,0) origin point.
    ModelOriginDefaultOriginType,
    /// Bottom-left corner of bounding box.
    BottomLeftDefaultOriginType,
    /// Bottom-right corner of bounding box.
    BottomRightDefaultOriginType,
    /// Top-left corner of bounding box.
    TopLeftDefaultOriginType,
    /// Top-right corner of bounding box.
    TopRightDefaultOriginType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Dimension placement strategy for automatic dimensioning.
enum DimensionStrategyTypes
{
    /// Overall dimensions showing total extents.
    OverallDimensionStrategyType,
    /// System auto-selects best approach based on geometry.
    AutomaticDimensionStrategyType,
    /// All dimensions reference a common datum. Minimizes tolerance stack-up.
    BaselineDimensionStrategyType,
    /// Dimensions in continuous chain. Shows incremental distances.
    ChainDimensionStrategyType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Specifies the mode of drawing creation.
enum DrawingCreationModes
{
    /// Create automatic drawing.
    AutomaticDrawingCreationMode,
    /// Create manual drawing with user-defined views and annotations.
    /// Note: This option is not currently supported. Use AutomaticDrawingCreationMode instead.
    ManualDrawingCreationMode
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Specifies the different drawing standards that can be used.
/// The standard defines projection angle, dimension styles, title block format, and annotation conventions.
enum DrawingStandardTypes
{
    /// ISO standard using first-angle projection.
    ISODrawingStandardType,
    /// ASME standard using third-angle projection. Common in North America.
    ASMEDrawingStandardType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Specifies the different drawing units that can be used.
/// The unit type affects dimension display, annotations, and measurements throughout the drawing.
enum DrawingUnitTypes
{
    /// Specifies that the drawing uses inch units.
    /// Commonly used with ASME (American Society of Mechanical Engineers) drawing standards.
    /// All dimensions and measurements in the drawing will be displayed in inches.
    InchDrawingUnitType,
    /// Specifies that the drawing uses millimeter units.
    /// Commonly used with ISO (International Organization for Standardization) drawing standards.
    /// All dimensions and measurements in the drawing will be displayed in millimeters.
    MillimeterDrawingUnitType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Visual rendering style for drawing views.
enum DrawingViewStyleTypes
{
    /// Visible edges only (no hidden lines). Default for most views.
    VisibleEdgesDrawingViewStyleType,
    /// Visible and hidden edges (dashed). Default for flat patterns.
    VisibleAndHiddenEdgesDrawingViewStyleType,
    /// Shaded rendering without edges.
    ShadedDrawingViewStyleType,
    /// Shaded rendering with visible edges overlaid.
    ShadedWithVisibleEdgesDrawingViewStyleType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Hole and thread annotation preferences.
enum HolePreferencesTypes
{
    /// Both hole notes and thread notes.
    HoleAndThreadNoteHolePreferencesType,
    /// Hole notes only, no thread callouts.
    HoleNoteOnlyHolePreferencesType,
    /// Thread notes only, no hole callouts.
    ThreadNoteOnlyHolePreferencesType,
    /// No hole or thread annotations.
    NoHoleAnnotationsHolePreferencesType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Used to define sheet sizes to be used by other properties
enum ISOSheetSizes
{
    /// A4 (210 x 297 mm). Smallest size for simple parts.
    A4ISOSheetSize,
    /// A3 (297 x 420 mm).
    A3ISOSheetSize,
    /// A2 (420 x 594 mm). For assembly drawings.
    A2ISOSheetSize,
    /// A1 (594 x 841 mm). Large format for complex assemblies.
    A1ISOSheetSize,
    /// A0 (841 x 1189 mm). Largest A-series size.
    A0ISOSheetSize
};

/// The various options that define which sheets to print.
enum PDFSheetsExport
{
    /// Exports all of the sheets in the drawing as a single PDF file.
    AllPDFSheetsExport,
    /// Exports all of the current selected sheets in the drawing. The
    /// active sheet is always selected but the user can also select
    /// additional sheets.
    SelectedPDFSheetsExport,
    /// Exports the current active sheet.
    CurrentPDFSheetExport,
    /// Exports a defined range of sheets.
    RangePDFSheetsExport
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Specifies which components get drawing sheets generated.
enum SheetCreationTypes
{
    /// Generate sheets for first-level components only (immediate children of root).
    FirstLevelOnlySheetCreationType,
    /// Generate sheets for all components at every hierarchy level.
    AllLevelsSheetCreationType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Specifies the sheet orientation for printing and display.
enum SheetOrientationTypes
{
    /// Landscape (horizontal). Width greater than height.
    LandscapeSheetOrientationType,
    /// Portrait (vertical). Height greater than width.
    PortraitSheetOrientationType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Corner location options for tables on sheets. Used for parts lists, bend tables, and other sheet tables.
enum TableLocationTypes
{
    /// Top-left corner of the sheet.
    TopLeftTableLocationType,
    /// Top-right corner of the sheet.
    TopRightTableLocationType,
    /// Bottom-left corner of the sheet.
    BottomLeftTableLocationType,
    /// Bottom-right corner of the sheet.
    BottomRightTableLocationType
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Tangent edge display options.
enum TangentEdgeDisplayTypes
{
    /// Tangent edges not shown.
    OffTangentEdgeDisplayType,
    /// Tangent edges shown as full lines.
    OnTangentEdgeDisplayType,
    /// Tangent edges shown as partial lines.
    ForeshortenedTangentEdgeDisplayType
};

}// namespace drawing
}// namespace adsk
