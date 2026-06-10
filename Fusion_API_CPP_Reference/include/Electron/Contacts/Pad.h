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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_PAD_CPP__
# define ADSK_ELECTRON_PAD_API XI_EXPORT
# else
# define ADSK_ELECTRON_PAD_API
# endif
#else
# define ADSK_ELECTRON_PAD_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Through-hole pad in a package.
class Pad : public EcadObject {
public:

    /// Rotation angle in degrees, counter-clockwise from the positive X axis (0.0–359.9).
    double angle() const;

    /// Pad diameter, in internal units.
    int diameter() const;

    /// Drill hole diameter, in internal units.
    int drill() const;

    /// Symbol used to annotate this pad's drill size in drill charts.
    DrillSymbols drillSymbol() const;

    /// Elongation percentage for long or offset shapes.
    int elongation() const;

    /// Behavioral flags for this pad.
    PadFlags flags() const;

    /// Pad name.
    std::string name() const;

    /// Copper shape of this pad.
    PadShapes shape() const;

    /// Signal name connected to this pad.
    std::string signal() const;

    /// X coordinate of the center point, in internal units.
    int x() const;

    /// Y coordinate of the center point, in internal units.
    int y() const;

    ADSK_ELECTRON_PAD_API static const char* classType();
    ADSK_ELECTRON_PAD_API const char* objectType() const override;
    ADSK_ELECTRON_PAD_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_PAD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double angle_raw() const = 0;
    virtual int diameter_raw() const = 0;
    virtual int drill_raw() const = 0;
    virtual DrillSymbols drillSymbol_raw() const = 0;
    virtual int elongation_raw() const = 0;
    virtual PadFlags flags_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual PadShapes shape_raw() const = 0;
    virtual char* signal_raw() const = 0;
    virtual int x_raw() const = 0;
    virtual int y_raw() const = 0;
};

// Inline wrappers

inline double Pad::angle() const
{
    double res = angle_raw();
    return res;
}

inline int Pad::diameter() const
{
    int res = diameter_raw();
    return res;
}

inline int Pad::drill() const
{
    int res = drill_raw();
    return res;
}

inline DrillSymbols Pad::drillSymbol() const
{
    DrillSymbols res = drillSymbol_raw();
    return res;
}

inline int Pad::elongation() const
{
    int res = elongation_raw();
    return res;
}

inline PadFlags Pad::flags() const
{
    PadFlags res = flags_raw();
    return res;
}

inline std::string Pad::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline PadShapes Pad::shape() const
{
    PadShapes res = shape_raw();
    return res;
}

inline std::string Pad::signal() const
{
    std::string res;

    char* p= signal_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline int Pad::x() const
{
    int res = x_raw();
    return res;
}

inline int Pad::y() const
{
    int res = y_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_PAD_API