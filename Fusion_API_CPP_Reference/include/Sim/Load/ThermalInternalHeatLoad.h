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
# ifdef __COMPILING_ADSK_SIM_THERMALINTERNALHEATLOAD_CPP__
# define ADSK_SIM_THERMALINTERNALHEATLOAD_API XI_EXPORT
# else
# define ADSK_SIM_THERMALINTERNALHEATLOAD_API
# endif
#else
# define ADSK_SIM_THERMALINTERNALHEATLOAD_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a thermal internal heat load.
class ThermalInternalHeatLoad : public Load {
public:

    /// Gets and sets the heat power value.
    double heatPower() const;
    bool heatPower(double value);

    /// Gets and sets whether or not the load is defined per unit volume.
    bool isPerUnitVolume() const;
    bool isPerUnitVolume(bool value);

    ADSK_SIM_THERMALINTERNALHEATLOAD_API static const char* classType();
    ADSK_SIM_THERMALINTERNALHEATLOAD_API const char* objectType() const override;
    ADSK_SIM_THERMALINTERNALHEATLOAD_API void* queryInterface(const char* id) const override;
    ADSK_SIM_THERMALINTERNALHEATLOAD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double heatPower_raw() const = 0;
    virtual bool heatPower_raw(double value) = 0;
    virtual bool isPerUnitVolume_raw() const = 0;
    virtual bool isPerUnitVolume_raw(bool value) = 0;
};

// Inline wrappers

inline double ThermalInternalHeatLoad::heatPower() const
{
    double res = heatPower_raw();
    return res;
}

inline bool ThermalInternalHeatLoad::heatPower(double value)
{
    return heatPower_raw(value);
}

inline bool ThermalInternalHeatLoad::isPerUnitVolume() const
{
    bool res = isPerUnitVolume_raw();
    return res;
}

inline bool ThermalInternalHeatLoad::isPerUnitVolume(bool value)
{
    return isPerUnitVolume_raw(value);
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_THERMALINTERNALHEATLOAD_API