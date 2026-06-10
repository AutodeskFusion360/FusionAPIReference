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
#include "../EcadDocument/EcadDocument.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_BOARD_CPP__
# define ADSK_ELECTRON_BOARD_API XI_EXPORT
# else
# define ADSK_ELECTRON_BOARD_API
# endif
#else
# define ADSK_ELECTRON_BOARD_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Circles;
    class Classes;
    class Dimensions;
    class EcadAttributes;
    class EcadDesign;
    class ElectronicsExportManager;
    class Elements;
    class Errors;
    class Frames;
    class Grid;
    class Holes;
    class Layers;
    class Libraries;
    class PolyCutouts;
    class PolyShapes;
    class Rectangles;
    class Schematic;
    class Signals;
    class Splines;
    class Texts;
    class VariantDefs;
    class Wires;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents a PCB in an electronics design. Provides access to elements, signals, layers, and design-rule checks.
class Board : public EcadDocument {
public:

    /// Parent design document that this board belongs to, or null if unlinked.
    core::Ptr<EcadDesign> parentDesign() const;

    /// The schematic linked to the same design as this board, or null if unlinked or no schematic exists.
    core::Ptr<Schematic> linkedSchematic() const;

    /// Placed component instances on this board.
    core::Ptr<Elements> elements() const;

    /// Copper trace networks (signals) on this board.
    core::Ptr<Signals> signals() const;

    /// Layer stack available in this board.
    core::Ptr<Layers> layers() const;

    /// Grid settings used in this board.
    core::Ptr<Grid> grid() const;

    /// Polygon shapes on this board.
    core::Ptr<PolyShapes> polyShapes() const;

    /// Polygon cutout regions on this board.
    core::Ptr<PolyCutouts> polyCutouts() const;

    /// Spline curves on this board.
    core::Ptr<Splines> splines() const;

    /// Wires on this board.
    core::Ptr<Wires> wires() const;

    /// Circle shapes on this board.
    core::Ptr<Circles> circles() const;

    /// Rectangle shapes on this board.
    core::Ptr<Rectangles> rectangles() const;

    /// Through-hole drills on this board.
    core::Ptr<Holes> holes() const;

    /// Dimension annotations on this board.
    core::Ptr<Dimensions> dimensions() const;

    /// Frame elements (drawing borders) on this board.
    core::Ptr<Frames> frames() const;

    /// Text annotations on this board.
    core::Ptr<Texts> texts() const;

    /// Document attributes on this board.
    core::Ptr<EcadAttributes> documentAttributes() const;

    /// Assembly variant definitions in this board.
    core::Ptr<VariantDefs> variantDefs() const;

    /// Net class definitions.
    core::Ptr<Classes> classes() const;

    /// Design rule check (DRC) errors detected on this board.
    core::Ptr<Errors> errors() const;

    /// Libraries referenced by this board.
    core::Ptr<Libraries> libraries() const;

    /// Human-readable description of this board.
    std::string description() const;

    /// First line of the description, used as a short title.
    std::string headline() const;

    /// True if the board was recently checked against design rules.
    bool checked() const;

    /// Returns the ExportManager for this design. Use the ExportManager to export the current design in various formats.
    core::Ptr<ElectronicsExportManager> exportManager() const;

    ADSK_ELECTRON_BOARD_API static const char* classType();
    ADSK_ELECTRON_BOARD_API const char* objectType() const override;
    ADSK_ELECTRON_BOARD_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_BOARD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual EcadDesign* parentDesign_raw() const = 0;
    virtual Schematic* linkedSchematic_raw() const = 0;
    virtual Elements* elements_raw() const = 0;
    virtual Signals* signals_raw() const = 0;
    virtual Layers* layers_raw() const = 0;
    virtual Grid* grid_raw() const = 0;
    virtual PolyShapes* polyShapes_raw() const = 0;
    virtual PolyCutouts* polyCutouts_raw() const = 0;
    virtual Splines* splines_raw() const = 0;
    virtual Wires* wires_raw() const = 0;
    virtual Circles* circles_raw() const = 0;
    virtual Rectangles* rectangles_raw() const = 0;
    virtual Holes* holes_raw() const = 0;
    virtual Dimensions* dimensions_raw() const = 0;
    virtual Frames* frames_raw() const = 0;
    virtual Texts* texts_raw() const = 0;
    virtual EcadAttributes* documentAttributes_raw() const = 0;
    virtual VariantDefs* variantDefs_raw() const = 0;
    virtual Classes* classes_raw() const = 0;
    virtual Errors* errors_raw() const = 0;
    virtual Libraries* libraries_raw() const = 0;
    virtual char* description_raw() const = 0;
    virtual char* headline_raw() const = 0;
    virtual bool checked_raw() const = 0;
    virtual ElectronicsExportManager* exportManager_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<EcadDesign> Board::parentDesign() const
{
    core::Ptr<EcadDesign> res = parentDesign_raw();
    return res;
}

inline core::Ptr<Schematic> Board::linkedSchematic() const
{
    core::Ptr<Schematic> res = linkedSchematic_raw();
    return res;
}

inline core::Ptr<Elements> Board::elements() const
{
    core::Ptr<Elements> res = elements_raw();
    return res;
}

inline core::Ptr<Signals> Board::signals() const
{
    core::Ptr<Signals> res = signals_raw();
    return res;
}

inline core::Ptr<Layers> Board::layers() const
{
    core::Ptr<Layers> res = layers_raw();
    return res;
}

inline core::Ptr<Grid> Board::grid() const
{
    core::Ptr<Grid> res = grid_raw();
    return res;
}

inline core::Ptr<PolyShapes> Board::polyShapes() const
{
    core::Ptr<PolyShapes> res = polyShapes_raw();
    return res;
}

inline core::Ptr<PolyCutouts> Board::polyCutouts() const
{
    core::Ptr<PolyCutouts> res = polyCutouts_raw();
    return res;
}

inline core::Ptr<Splines> Board::splines() const
{
    core::Ptr<Splines> res = splines_raw();
    return res;
}

inline core::Ptr<Wires> Board::wires() const
{
    core::Ptr<Wires> res = wires_raw();
    return res;
}

inline core::Ptr<Circles> Board::circles() const
{
    core::Ptr<Circles> res = circles_raw();
    return res;
}

inline core::Ptr<Rectangles> Board::rectangles() const
{
    core::Ptr<Rectangles> res = rectangles_raw();
    return res;
}

inline core::Ptr<Holes> Board::holes() const
{
    core::Ptr<Holes> res = holes_raw();
    return res;
}

inline core::Ptr<Dimensions> Board::dimensions() const
{
    core::Ptr<Dimensions> res = dimensions_raw();
    return res;
}

inline core::Ptr<Frames> Board::frames() const
{
    core::Ptr<Frames> res = frames_raw();
    return res;
}

inline core::Ptr<Texts> Board::texts() const
{
    core::Ptr<Texts> res = texts_raw();
    return res;
}

inline core::Ptr<EcadAttributes> Board::documentAttributes() const
{
    core::Ptr<EcadAttributes> res = documentAttributes_raw();
    return res;
}

inline core::Ptr<VariantDefs> Board::variantDefs() const
{
    core::Ptr<VariantDefs> res = variantDefs_raw();
    return res;
}

inline core::Ptr<Classes> Board::classes() const
{
    core::Ptr<Classes> res = classes_raw();
    return res;
}

inline core::Ptr<Errors> Board::errors() const
{
    core::Ptr<Errors> res = errors_raw();
    return res;
}

inline core::Ptr<Libraries> Board::libraries() const
{
    core::Ptr<Libraries> res = libraries_raw();
    return res;
}

inline std::string Board::description() const
{
    std::string res;

    char* p= description_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Board::headline() const
{
    std::string res;

    char* p= headline_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Board::checked() const
{
    bool res = checked_raw();
    return res;
}

inline core::Ptr<ElectronicsExportManager> Board::exportManager() const
{
    core::Ptr<ElectronicsExportManager> res = exportManager_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_BOARD_API