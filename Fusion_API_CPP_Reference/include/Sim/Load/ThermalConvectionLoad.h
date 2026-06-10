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
# ifdef __COMPILING_ADSK_SIM_THERMALCONVECTIONLOAD_CPP__
# define ADSK_SIM_THERMALCONVECTIONLOAD_API XI_EXPORT
# else
# define ADSK_SIM_THERMALCONVECTIONLOAD_API
# endif
#else
# define ADSK_SIM_THERMALCONVECTIONLOAD_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a thermal convection load.
class ThermalConvectionLoad : public Load {
public:

    /// Gets and sets the convective heat transfer coefficient.
    double convectionCoefficient() const;
    bool convectionCoefficient(double value);

    /// Gets and sets the ambient temperature.
    double ambientTemperature() const;
    bool ambientTemperature(double value);

    ADSK_SIM_THERMALCONVECTIONLOAD_API static const char* classType();
    ADSK_SIM_THERMALCONVECTIONLOAD_API const char* objectType() const override;
    ADSK_SIM_THERMALCONVECTIONLOAD_API void* queryInterface(const char* id) const override;
    ADSK_SIM_THERMALCONVECTIONLOAD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double convectionCoefficient_raw() const = 0;
    virtual bool convectionCoefficient_raw(double value) = 0;
    virtual double ambientTemperature_raw() const = 0;
    virtual bool ambientTemperature_raw(double value) = 0;
};

// Inline wrappers

inline double ThermalConvectionLoad::convectionCoefficient() const
{
    double res = convectionCoefficient_raw();
    return res;
}

inline bool ThermalConvectionLoad::convectionCoefficient(double value)
{
    return convectionCoefficient_raw(value);
}

inline double ThermalConvectionLoad::ambientTemperature() const
{
    double res = ambientTemperature_raw();
    return res;
}

inline bool ThermalConvectionLoad::ambientTemperature(double value)
{
    return ambientTemperature_raw(value);
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_THERMALCONVECTIONLOAD_API