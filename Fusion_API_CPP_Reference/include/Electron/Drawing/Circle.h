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
# ifdef __COMPILING_ADSK_ELECTRON_CIRCLE_CPP__
# define ADSK_ELECTRON_CIRCLE_API XI_EXPORT
# else
# define ADSK_ELECTRON_CIRCLE_API
# endif
#else
# define ADSK_ELECTRON_CIRCLE_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Circle primitive drawn on a PCB board, schematic sheet, symbol, or package.
class Circle : public EcadObject {
public:

    /// Layer number (1-based index into the layer stack).
    int layer() const;

    /// Radius of this circle, in internal units.
    int radius() const;

    /// Stroke width of this circle, in internal units.
    int width() const;

    /// X coordinate of the center point, in internal units.
    int x() const;

    /// Y coordinate of the center point, in internal units.
    int y() const;

    ADSK_ELECTRON_CIRCLE_API static const char* classType();
    ADSK_ELECTRON_CIRCLE_API const char* objectType() const override;
    ADSK_ELECTRON_CIRCLE_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_CIRCLE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int layer_raw() const = 0;
    virtual int radius_raw() const = 0;
    virtual int width_raw() const = 0;
    virtual int x_raw() const = 0;
    virtual int y_raw() const = 0;
};

// Inline wrappers

inline int Circle::layer() const
{
    int res = layer_raw();
    return res;
}

inline int Circle::radius() const
{
    int res = radius_raw();
    return res;
}

inline int Circle::width() const
{
    int res = width_raw();
    return res;
}

inline int Circle::x() const
{
    int res = x_raw();
    return res;
}

inline int Circle::y() const
{
    int res = y_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_CIRCLE_API