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
# ifdef __COMPILING_ADSK_ELECTRON_FRAME_CPP__
# define ADSK_ELECTRON_FRAME_API XI_EXPORT
# else
# define ADSK_ELECTRON_FRAME_API
# endif
#else
# define ADSK_ELECTRON_FRAME_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Frame element (drawing border or title block) on a board or sheet.
class Frame : public EcadObject {
public:

    /// Border line width of the frame, in internal units.
    int border() const;

    /// Number of columns in the frame grid.
    int columns() const;

    /// Number of rows in the frame grid.
    int rows() const;

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

    ADSK_ELECTRON_FRAME_API static const char* classType();
    ADSK_ELECTRON_FRAME_API const char* objectType() const override;
    ADSK_ELECTRON_FRAME_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_FRAME_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int border_raw() const = 0;
    virtual int columns_raw() const = 0;
    virtual int rows_raw() const = 0;
    virtual int layer_raw() const = 0;
    virtual int x1_raw() const = 0;
    virtual int y1_raw() const = 0;
    virtual int x2_raw() const = 0;
    virtual int y2_raw() const = 0;
};

// Inline wrappers

inline int Frame::border() const
{
    int res = border_raw();
    return res;
}

inline int Frame::columns() const
{
    int res = columns_raw();
    return res;
}

inline int Frame::rows() const
{
    int res = rows_raw();
    return res;
}

inline int Frame::layer() const
{
    int res = layer_raw();
    return res;
}

inline int Frame::x1() const
{
    int res = x1_raw();
    return res;
}

inline int Frame::y1() const
{
    int res = y1_raw();
    return res;
}

inline int Frame::x2() const
{
    int res = x2_raw();
    return res;
}

inline int Frame::y2() const
{
    int res = y2_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_FRAME_API