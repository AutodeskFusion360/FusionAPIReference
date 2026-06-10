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
# ifdef __COMPILING_ADSK_SIM_THERMALSURFACEHEATLOAD_CPP__
# define ADSK_SIM_THERMALSURFACEHEATLOAD_API XI_EXPORT
# else
# define ADSK_SIM_THERMALSURFACEHEATLOAD_API
# endif
#else
# define ADSK_SIM_THERMALSURFACEHEATLOAD_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a thermal surface heat load.
class ThermalSurfaceHeatLoad : public Load {
public:

    /// Gets and sets the heat power value.
    double heatPower() const;
    bool heatPower(double value);

    /// Gets and sets whether or not the load is defined per unit area.
    bool isPerUnitArea() const;
    bool isPerUnitArea(bool value);

    ADSK_SIM_THERMALSURFACEHEATLOAD_API static const char* classType();
    ADSK_SIM_THERMALSURFACEHEATLOAD_API const char* objectType() const override;
    ADSK_SIM_THERMALSURFACEHEATLOAD_API void* queryInterface(const char* id) const override;
    ADSK_SIM_THERMALSURFACEHEATLOAD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double heatPower_raw() const = 0;
    virtual bool heatPower_raw(double value) = 0;
    virtual bool isPerUnitArea_raw() const = 0;
    virtual bool isPerUnitArea_raw(bool value) = 0;
};

// Inline wrappers

inline double ThermalSurfaceHeatLoad::heatPower() const
{
    double res = heatPower_raw();
    return res;
}

inline bool ThermalSurfaceHeatLoad::heatPower(double value)
{
    return heatPower_raw(value);
}

inline bool ThermalSurfaceHeatLoad::isPerUnitArea() const
{
    bool res = isPerUnitArea_raw();
    return res;
}

inline bool ThermalSurfaceHeatLoad::isPerUnitArea(bool value)
{
    return isPerUnitArea_raw(value);
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_THERMALSURFACEHEATLOAD_API