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
#include "../../Core/Base.h"
#include "../ElectronTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_ARC_CPP__
# define ADSK_ELECTRON_ARC_API XI_EXPORT
# else
# define ADSK_ELECTRON_ARC_API
# endif
#else
# define ADSK_ELECTRON_ARC_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Circular arc in a PCB board, schematic sheet, symbol, or package.
class Arc : public core::Base {
public:

    /// Start angle in degrees (0.0 – 359.9).
    double angle1() const;

    /// End angle in degrees (0.0 – 719.9).
    double angle2() const;

    /// X coordinate of the start point, in internal units.
    int x1() const;

    /// Y coordinate of the start point, in internal units.
    int y1() const;

    /// X coordinate of the end point, in internal units.
    int x2() const;

    /// Y coordinate of the end point, in internal units.
    int y2() const;

    /// X coordinate of the arc center, in internal units.
    int xc() const;

    /// Y coordinate of the arc center, in internal units.
    int yc() const;

    /// Layer number (1-based index into the layer stack).
    int layer() const;

    /// Radius of this arc, in internal units.
    int radius() const;

    /// Stroke width of this arc, in internal units.
    int width() const;

    /// Shape applied to the arc endpoints (flat or round cap).
    Caps cap() const;

    ADSK_ELECTRON_ARC_API static const char* classType();
    ADSK_ELECTRON_ARC_API const char* objectType() const override;
    ADSK_ELECTRON_ARC_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_ARC_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double angle1_raw() const = 0;
    virtual double angle2_raw() const = 0;
    virtual int x1_raw() const = 0;
    virtual int y1_raw() const = 0;
    virtual int x2_raw() const = 0;
    virtual int y2_raw() const = 0;
    virtual int xc_raw() const = 0;
    virtual int yc_raw() const = 0;
    virtual int layer_raw() const = 0;
    virtual int radius_raw() const = 0;
    virtual int width_raw() const = 0;
    virtual Caps cap_raw() const = 0;
};

// Inline wrappers

inline double Arc::angle1() const
{
    double res = angle1_raw();
    return res;
}

inline double Arc::angle2() const
{
    double res = angle2_raw();
    return res;
}

inline int Arc::x1() const
{
    int res = x1_raw();
    return res;
}

inline int Arc::y1() const
{
    int res = y1_raw();
    return res;
}

inline int Arc::x2() const
{
    int res = x2_raw();
    return res;
}

inline int Arc::y2() const
{
    int res = y2_raw();
    return res;
}

inline int Arc::xc() const
{
    int res = xc_raw();
    return res;
}

inline int Arc::yc() const
{
    int res = yc_raw();
    return res;
}

inline int Arc::layer() const
{
    int res = layer_raw();
    return res;
}

inline int Arc::radius() const
{
    int res = radius_raw();
    return res;
}

inline int Arc::width() const
{
    int res = width_raw();
    return res;
}

inline Caps Arc::cap() const
{
    Caps res = cap_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_ARC_API