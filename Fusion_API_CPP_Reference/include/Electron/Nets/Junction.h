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
# ifdef __COMPILING_ADSK_ELECTRON_JUNCTION_CPP__
# define ADSK_ELECTRON_JUNCTION_API XI_EXPORT
# else
# define ADSK_ELECTRON_JUNCTION_API
# endif
#else
# define ADSK_ELECTRON_JUNCTION_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Connection point where two or more net wires meet on a schematic sheet.
class Junction : public EcadObject {
public:

    /// Junction diameter, in internal units.
    int diameter() const;

    /// X coordinate of the center point, in internal units.
    int x() const;

    /// Y coordinate of the center point, in internal units.
    int y() const;

    ADSK_ELECTRON_JUNCTION_API static const char* classType();
    ADSK_ELECTRON_JUNCTION_API const char* objectType() const override;
    ADSK_ELECTRON_JUNCTION_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_JUNCTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int diameter_raw() const = 0;
    virtual int x_raw() const = 0;
    virtual int y_raw() const = 0;
};

// Inline wrappers

inline int Junction::diameter() const
{
    int res = diameter_raw();
    return res;
}

inline int Junction::x() const
{
    int res = x_raw();
    return res;
}

inline int Junction::y() const
{
    int res = y_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_JUNCTION_API