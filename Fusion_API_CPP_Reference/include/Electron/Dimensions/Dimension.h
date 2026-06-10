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
# ifdef __COMPILING_ADSK_ELECTRON_DIMENSION_CPP__
# define ADSK_ELECTRON_DIMENSION_API XI_EXPORT
# else
# define ADSK_ELECTRON_DIMENSION_API
# endif
#else
# define ADSK_ELECTRON_DIMENSION_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Dimension annotation on a PCB board or schematic sheet that displays measured distances, angles, or radius.
class Dimension : public EcadObject {
public:

    /// Layer number (1-based index into the layer stack).
    int layer() const;

    /// Character width to height ratio.
    int ratio() const;

    /// Text height (character size), in internal units.
    int size() const;

    /// Unit type for the displayed dimension value.
    GridUnits unit() const;

    /// Number of decimal places in the displayed value.
    int precision() const;

    /// True if the dimension value is visible; false if hidden.
    bool visible() const;

    /// Line width of the dimension stroke, in internal units.
    int width() const;

    /// Width of the extension lines, in internal units.
    int extwidth() const;

    /// Length of the extension lines, in internal units.
    int extlength() const;

    /// Offset of the extension lines from the measured points, in internal units.
    int extoffset() const;

    /// Measurement style of this dimension.
    DimensionTypes dtype() const;

    /// X coordinate of the first measurement point, in internal units.
    int x1() const;

    /// Y coordinate of the first measurement point, in internal units.
    int y1() const;

    /// X coordinate of the second measurement point, in internal units.
    int x2() const;

    /// Y coordinate of the second measurement point, in internal units.
    int y2() const;

    /// X coordinate of the third point, in internal units.
    int x3() const;

    /// Y coordinate of the third point, in internal units.
    int y3() const;

    ADSK_ELECTRON_DIMENSION_API static const char* classType();
    ADSK_ELECTRON_DIMENSION_API const char* objectType() const override;
    ADSK_ELECTRON_DIMENSION_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_DIMENSION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int layer_raw() const = 0;
    virtual int ratio_raw() const = 0;
    virtual int size_raw() const = 0;
    virtual GridUnits unit_raw() const = 0;
    virtual int precision_raw() const = 0;
    virtual bool visible_raw() const = 0;
    virtual int width_raw() const = 0;
    virtual int extwidth_raw() const = 0;
    virtual int extlength_raw() const = 0;
    virtual int extoffset_raw() const = 0;
    virtual DimensionTypes dtype_raw() const = 0;
    virtual int x1_raw() const = 0;
    virtual int y1_raw() const = 0;
    virtual int x2_raw() const = 0;
    virtual int y2_raw() const = 0;
    virtual int x3_raw() const = 0;
    virtual int y3_raw() const = 0;
};

// Inline wrappers

inline int Dimension::layer() const
{
    int res = layer_raw();
    return res;
}

inline int Dimension::ratio() const
{
    int res = ratio_raw();
    return res;
}

inline int Dimension::size() const
{
    int res = size_raw();
    return res;
}

inline GridUnits Dimension::unit() const
{
    GridUnits res = unit_raw();
    return res;
}

inline int Dimension::precision() const
{
    int res = precision_raw();
    return res;
}

inline bool Dimension::visible() const
{
    bool res = visible_raw();
    return res;
}

inline int Dimension::width() const
{
    int res = width_raw();
    return res;
}

inline int Dimension::extwidth() const
{
    int res = extwidth_raw();
    return res;
}

inline int Dimension::extlength() const
{
    int res = extlength_raw();
    return res;
}

inline int Dimension::extoffset() const
{
    int res = extoffset_raw();
    return res;
}

inline DimensionTypes Dimension::dtype() const
{
    DimensionTypes res = dtype_raw();
    return res;
}

inline int Dimension::x1() const
{
    int res = x1_raw();
    return res;
}

inline int Dimension::y1() const
{
    int res = y1_raw();
    return res;
}

inline int Dimension::x2() const
{
    int res = x2_raw();
    return res;
}

inline int Dimension::y2() const
{
    int res = y2_raw();
    return res;
}

inline int Dimension::x3() const
{
    int res = x3_raw();
    return res;
}

inline int Dimension::y3() const
{
    int res = y3_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_DIMENSION_API