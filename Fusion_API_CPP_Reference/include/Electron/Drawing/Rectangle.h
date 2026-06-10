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
# ifdef __COMPILING_ADSK_ELECTRON_RECTANGLE_CPP__
# define ADSK_ELECTRON_RECTANGLE_API XI_EXPORT
# else
# define ADSK_ELECTRON_RECTANGLE_API
# endif
#else
# define ADSK_ELECTRON_RECTANGLE_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Rectangle primitive drawn on a PCB board, schematic sheet, symbol, or package.
class Rectangle : public EcadObject {
public:

    /// Rotation angle in degrees, counter-clockwise from the positive X axis (0.0–359.9).
    double angle() const;

    /// Layer number (1-based index into the layer stack).
    int layer() const;

    /// X coordinate of the lower-left corner, in internal units.
    int x1() const;

    /// Y coordinate of the lower-left corner, in internal units.
    int y1() const;

    /// X coordinate of the upper-right corner, in internal units.
    int x2() const;

    /// Y coordinate of the upper-right corner, in internal units.
    int y2() const;

    ADSK_ELECTRON_RECTANGLE_API static const char* classType();
    ADSK_ELECTRON_RECTANGLE_API const char* objectType() const override;
    ADSK_ELECTRON_RECTANGLE_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_RECTANGLE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double angle_raw() const = 0;
    virtual int layer_raw() const = 0;
    virtual int x1_raw() const = 0;
    virtual int y1_raw() const = 0;
    virtual int x2_raw() const = 0;
    virtual int y2_raw() const = 0;
};

// Inline wrappers

inline double Rectangle::angle() const
{
    double res = angle_raw();
    return res;
}

inline int Rectangle::layer() const
{
    int res = layer_raw();
    return res;
}

inline int Rectangle::x1() const
{
    int res = x1_raw();
    return res;
}

inline int Rectangle::y1() const
{
    int res = y1_raw();
    return res;
}

inline int Rectangle::x2() const
{
    int res = x2_raw();
    return res;
}

inline int Rectangle::y2() const
{
    int res = y2_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_RECTANGLE_API