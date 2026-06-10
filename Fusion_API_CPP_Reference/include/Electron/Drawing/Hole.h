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
# ifdef __COMPILING_ADSK_ELECTRON_HOLE_CPP__
# define ADSK_ELECTRON_HOLE_API XI_EXPORT
# else
# define ADSK_ELECTRON_HOLE_API
# endif
#else
# define ADSK_ELECTRON_HOLE_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Non-plated through-hole drill in a PCB board or package.
class Hole : public EcadObject {
public:

    /// Hole diameter, in internal units.
    int diameter() const;

    /// Drill hole diameter, in internal units.
    int drill() const;

    /// Symbol used to annotate this drill size in drill charts.
    DrillSymbols drillSymbol() const;

    /// X coordinate of the center point, in internal units.
    int x() const;

    /// Y coordinate of the center point, in internal units.
    int y() const;

    ADSK_ELECTRON_HOLE_API static const char* classType();
    ADSK_ELECTRON_HOLE_API const char* objectType() const override;
    ADSK_ELECTRON_HOLE_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_HOLE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int diameter_raw() const = 0;
    virtual int drill_raw() const = 0;
    virtual DrillSymbols drillSymbol_raw() const = 0;
    virtual int x_raw() const = 0;
    virtual int y_raw() const = 0;
};

// Inline wrappers

inline int Hole::diameter() const
{
    int res = diameter_raw();
    return res;
}

inline int Hole::drill() const
{
    int res = drill_raw();
    return res;
}

inline DrillSymbols Hole::drillSymbol() const
{
    DrillSymbols res = drillSymbol_raw();
    return res;
}

inline int Hole::x() const
{
    int res = x_raw();
    return res;
}

inline int Hole::y() const
{
    int res = y_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_HOLE_API