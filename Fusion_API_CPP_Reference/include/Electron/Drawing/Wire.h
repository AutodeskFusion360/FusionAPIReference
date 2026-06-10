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
#include "../ElectronTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_WIRE_CPP__
# define ADSK_ELECTRON_WIRE_API XI_EXPORT
# else
# define ADSK_ELECTRON_WIRE_API
# endif
#else
# define ADSK_ELECTRON_WIRE_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Arc;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Straight or curved line segment in a PCB board, schematic sheet, symbol, or package.
class Wire : public EcadObject {
public:

    /// X coordinate of the start point, in internal units.
    int x1() const;

    /// Y coordinate of the start point, in internal units.
    int y1() const;

    /// X coordinate of the end point, in internal units.
    int x2() const;

    /// Y coordinate of the end point, in internal units.
    int y2() const;

    /// Layer number (1-based index into the layer stack).
    int layer() const;

    /// Stroke width of this wire, in internal units.
    int width() const;

    /// Shape applied to the wire endpoints (flat or round cap).
    Caps cap() const;

    /// Dash pattern applied to this wire.
    WireStyles style() const;

    /// Arc curvature in degrees; 0 for straight lines.
    double curve() const;

    /// Arc geometry when wire is curved; null for straight wires (curve=0).
    core::Ptr<Arc> arc() const;

    ADSK_ELECTRON_WIRE_API static const char* classType();
    ADSK_ELECTRON_WIRE_API const char* objectType() const override;
    ADSK_ELECTRON_WIRE_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_WIRE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int x1_raw() const = 0;
    virtual int y1_raw() const = 0;
    virtual int x2_raw() const = 0;
    virtual int y2_raw() const = 0;
    virtual int layer_raw() const = 0;
    virtual int width_raw() const = 0;
    virtual Caps cap_raw() const = 0;
    virtual WireStyles style_raw() const = 0;
    virtual double curve_raw() const = 0;
    virtual Arc* arc_raw() const = 0;
};

// Inline wrappers

inline int Wire::x1() const
{
    int res = x1_raw();
    return res;
}

inline int Wire::y1() const
{
    int res = y1_raw();
    return res;
}

inline int Wire::x2() const
{
    int res = x2_raw();
    return res;
}

inline int Wire::y2() const
{
    int res = y2_raw();
    return res;
}

inline int Wire::layer() const
{
    int res = layer_raw();
    return res;
}

inline int Wire::width() const
{
    int res = width_raw();
    return res;
}

inline Caps Wire::cap() const
{
    Caps res = cap_raw();
    return res;
}

inline WireStyles Wire::style() const
{
    WireStyles res = style_raw();
    return res;
}

inline double Wire::curve() const
{
    double res = curve_raw();
    return res;
}

inline core::Ptr<Arc> Wire::arc() const
{
    core::Ptr<Arc> res = arc_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_WIRE_API