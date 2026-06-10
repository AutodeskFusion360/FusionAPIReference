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
# ifdef __COMPILING_ADSK_ELECTRON_SMD_CPP__
# define ADSK_ELECTRON_SMD_API XI_EXPORT
# else
# define ADSK_ELECTRON_SMD_API
# endif
#else
# define ADSK_ELECTRON_SMD_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Surface-mount (SMD) pad in a package.
class Smd : public EcadObject {
public:

    /// Rotation angle in degrees, counter-clockwise from the positive X axis (0.0–359.9).
    double angle() const;

    /// Width of this SMD pad, in internal units.
    int dx() const;

    /// Height of this SMD pad, in internal units.
    int dy() const;

    /// Behavioral flags for this SMD pad.
    SmdFlags flags() const;

    /// Layer number (1-based index into the layer stack).
    int layer() const;

    /// SMD pad name.
    std::string name() const;

    /// Corner roundness (0-100).
    int roundness() const;

    /// Signal name connected to this pad.
    std::string signal() const;

    /// X coordinate of the center point, in internal units.
    int x() const;

    /// Y coordinate of the center point, in internal units.
    int y() const;

    ADSK_ELECTRON_SMD_API static const char* classType();
    ADSK_ELECTRON_SMD_API const char* objectType() const override;
    ADSK_ELECTRON_SMD_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_SMD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double angle_raw() const = 0;
    virtual int dx_raw() const = 0;
    virtual int dy_raw() const = 0;
    virtual SmdFlags flags_raw() const = 0;
    virtual int layer_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual int roundness_raw() const = 0;
    virtual char* signal_raw() const = 0;
    virtual int x_raw() const = 0;
    virtual int y_raw() const = 0;
};

// Inline wrappers

inline double Smd::angle() const
{
    double res = angle_raw();
    return res;
}

inline int Smd::dx() const
{
    int res = dx_raw();
    return res;
}

inline int Smd::dy() const
{
    int res = dy_raw();
    return res;
}

inline SmdFlags Smd::flags() const
{
    SmdFlags res = flags_raw();
    return res;
}

inline int Smd::layer() const
{
    int res = layer_raw();
    return res;
}

inline std::string Smd::name() const
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

inline int Smd::roundness() const
{
    int res = roundness_raw();
    return res;
}

inline std::string Smd::signal() const
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

inline int Smd::x() const
{
    int res = x_raw();
    return res;
}

inline int Smd::y() const
{
    int res = y_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_SMD_API