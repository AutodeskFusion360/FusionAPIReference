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
#include "Load.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_RADIATIONLOAD_CPP__
# define ADSK_SIM_RADIATIONLOAD_API XI_EXPORT
# else
# define ADSK_SIM_RADIATIONLOAD_API
# endif
#else
# define ADSK_SIM_RADIATIONLOAD_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a thermal radiation load.
class RadiationLoad : public Load {
public:

    /// Gets and sets the emissivity value.
    double emissivity() const;
    bool emissivity(double value);

    /// Gets and sets the ambient temperature.
    double ambientTemperature() const;
    bool ambientTemperature(double value);

    ADSK_SIM_RADIATIONLOAD_API static const char* classType();
    ADSK_SIM_RADIATIONLOAD_API const char* objectType() const override;
    ADSK_SIM_RADIATIONLOAD_API void* queryInterface(const char* id) const override;
    ADSK_SIM_RADIATIONLOAD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double emissivity_raw() const = 0;
    virtual bool emissivity_raw(double value) = 0;
    virtual double ambientTemperature_raw() const = 0;
    virtual bool ambientTemperature_raw(double value) = 0;
};

// Inline wrappers

inline double RadiationLoad::emissivity() const
{
    double res = emissivity_raw();
    return res;
}

inline bool RadiationLoad::emissivity(double value)
{
    return emissivity_raw(value);
}

inline double RadiationLoad::ambientTemperature() const
{
    double res = ambientTemperature_raw();
    return res;
}

inline bool RadiationLoad::ambientTemperature(double value)
{
    return ambientTemperature_raw(value);
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_RADIATIONLOAD_API