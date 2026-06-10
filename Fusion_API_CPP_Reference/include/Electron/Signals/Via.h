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
# ifdef __COMPILING_ADSK_ELECTRON_VIA_CPP__
# define ADSK_ELECTRON_VIA_API XI_EXPORT
# else
# define ADSK_ELECTRON_VIA_API
# endif
#else
# define ADSK_ELECTRON_VIA_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Plated through-hole or blind/buried via connecting layers in a PCB board.
class Via : public EcadObject {
public:

    /// Via diameter (copper annulus), in internal units.
    int diameter() const;

    /// Drill hole diameter, in internal units.
    int drill() const;

    /// Symbol used to annotate this via's drill size in drill charts.
    DrillSymbols drillSymbol() const;

    /// Behavioral flags for this via (e.g., solder mask opening).
    ViaFlags flags() const;

    /// Cross-section shape of this via (square, round, or octagon).
    ViaShapes shape() const;

    /// Start layer number (1-based) of the via span.
    int start() const;

    /// End layer number (1-based) of the via span.
    int end() const;

    /// X coordinate of the center point, in internal units.
    int x() const;

    /// Y coordinate of the center point, in internal units.
    int y() const;

    ADSK_ELECTRON_VIA_API static const char* classType();
    ADSK_ELECTRON_VIA_API const char* objectType() const override;
    ADSK_ELECTRON_VIA_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_VIA_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int diameter_raw() const = 0;
    virtual int drill_raw() const = 0;
    virtual DrillSymbols drillSymbol_raw() const = 0;
    virtual ViaFlags flags_raw() const = 0;
    virtual ViaShapes shape_raw() const = 0;
    virtual int start_raw() const = 0;
    virtual int end_raw() const = 0;
    virtual int x_raw() const = 0;
    virtual int y_raw() const = 0;
};

// Inline wrappers

inline int Via::diameter() const
{
    int res = diameter_raw();
    return res;
}

inline int Via::drill() const
{
    int res = drill_raw();
    return res;
}

inline DrillSymbols Via::drillSymbol() const
{
    DrillSymbols res = drillSymbol_raw();
    return res;
}

inline ViaFlags Via::flags() const
{
    ViaFlags res = flags_raw();
    return res;
}

inline ViaShapes Via::shape() const
{
    ViaShapes res = shape_raw();
    return res;
}

inline int Via::start() const
{
    int res = start_raw();
    return res;
}

inline int Via::end() const
{
    int res = end_raw();
    return res;
}

inline int Via::x() const
{
    int res = x_raw();
    return res;
}

inline int Via::y() const
{
    int res = y_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_VIA_API