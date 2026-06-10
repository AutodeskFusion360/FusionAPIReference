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
# ifdef __COMPILING_ADSK_ELECTRON_AREA_CPP__
# define ADSK_ELECTRON_AREA_API XI_EXPORT
# else
# define ADSK_ELECTRON_AREA_API
# endif
#else
# define ADSK_ELECTRON_AREA_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Rectangular bounding region defined by corner coordinates.
class Area : public core::Base {
public:

    /// X coordinate of the lower-left corner, in internal units.
    int x1() const;

    /// Y coordinate of the lower-left corner, in internal units.
    int y1() const;

    /// X coordinate of the upper-right corner, in internal units.
    int x2() const;

    /// Y coordinate of the upper-right corner, in internal units.
    int y2() const;

    ADSK_ELECTRON_AREA_API static const char* classType();
    ADSK_ELECTRON_AREA_API const char* objectType() const override;
    ADSK_ELECTRON_AREA_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_AREA_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int x1_raw() const = 0;
    virtual int y1_raw() const = 0;
    virtual int x2_raw() const = 0;
    virtual int y2_raw() const = 0;
};

// Inline wrappers

inline int Area::x1() const
{
    int res = x1_raw();
    return res;
}

inline int Area::y1() const
{
    int res = y1_raw();
    return res;
}

inline int Area::x2() const
{
    int res = x2_raw();
    return res;
}

inline int Area::y2() const
{
    int res = y2_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_AREA_API