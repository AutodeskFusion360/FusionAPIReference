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
#include "../Core/EcadObject.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_POLYPOUR_CPP__
# define ADSK_ELECTRON_POLYPOUR_API XI_EXPORT
# else
# define ADSK_ELECTRON_POLYPOUR_API
# endif
#else
# define ADSK_ELECTRON_POLYPOUR_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Wires;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Copper pour polygon belonging to a signal; filled (solid or hatched) copper area.
class PolyPour : public EcadObject {
public:

    /// Layer number (1-based index into the layer stack).
    int layer() const;

    /// Polygon outline width, in internal units.
    int width() const;

    /// Wires forming the polygon outline.
    core::Ptr<Wires> wires() const;

    /// Isolation clearance (minimum distance to other signals), in internal units.
    int isolate() const;

    /// True if orphaned (electrically disconnected) polygon regions are kept.
    bool orphans() const;

    /// True if the pour is hatched (grid pattern); False if solid.
    bool hatched() const;

    /// Rank for polygon priority; lower-rank polygons are subtracted from higher-rank ones.
    int rank() const;

    /// Spacing between hatch fill lines, in internal units (used when hatched).
    int spacing() const;

    /// True if thermal relief connections are used at pads.
    bool thermals() const;

    /// Width of thermal relief connections at pads, in internal units.
    int thermalWidth() const;

    ADSK_ELECTRON_POLYPOUR_API static const char* classType();
    ADSK_ELECTRON_POLYPOUR_API const char* objectType() const override;
    ADSK_ELECTRON_POLYPOUR_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_POLYPOUR_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int layer_raw() const = 0;
    virtual int width_raw() const = 0;
    virtual Wires* wires_raw() const = 0;
    virtual int isolate_raw() const = 0;
    virtual bool orphans_raw() const = 0;
    virtual bool hatched_raw() const = 0;
    virtual int rank_raw() const = 0;
    virtual int spacing_raw() const = 0;
    virtual bool thermals_raw() const = 0;
    virtual int thermalWidth_raw() const = 0;
};

// Inline wrappers

inline int PolyPour::layer() const
{
    int res = layer_raw();
    return res;
}

inline int PolyPour::width() const
{
    int res = width_raw();
    return res;
}

inline core::Ptr<Wires> PolyPour::wires() const
{
    core::Ptr<Wires> res = wires_raw();
    return res;
}

inline int PolyPour::isolate() const
{
    int res = isolate_raw();
    return res;
}

inline bool PolyPour::orphans() const
{
    bool res = orphans_raw();
    return res;
}

inline bool PolyPour::hatched() const
{
    bool res = hatched_raw();
    return res;
}

inline int PolyPour::rank() const
{
    int res = rank_raw();
    return res;
}

inline int PolyPour::spacing() const
{
    int res = spacing_raw();
    return res;
}

inline bool PolyPour::thermals() const
{
    bool res = thermals_raw();
    return res;
}

inline int PolyPour::thermalWidth() const
{
    int res = thermalWidth_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_POLYPOUR_API