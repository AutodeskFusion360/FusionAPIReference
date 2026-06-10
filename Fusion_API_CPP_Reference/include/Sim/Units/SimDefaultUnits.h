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
#include "../SimTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_SIMDEFAULTUNITS_CPP__
# define ADSK_SIM_SIMDEFAULTUNITS_API XI_EXPORT
# else
# define ADSK_SIM_SIMDEFAULTUNITS_API
# endif
#else
# define ADSK_SIM_SIMDEFAULTUNITS_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Controls the default display units for simulation quantities such as force,
/// pressure, and temperature at the document level.
/// 
/// Use the unitSystem property to switch between predefined unit systems
/// (Metric SI, Imperial), or set individual quantity defaults to create a
/// custom unit configuration.
/// 
/// Changes to default units are staged locally and only take effect after
/// calling applyChanges.
class SimDefaultUnits : public core::Base {
public:

    /// Gets or sets the active unit system for the simulation document.
    /// Setting this immediately changes all default units to match the
    /// selected system (Metric SI, Imperial or Custom). Changing unit system
    /// to SI or Imperial clears any not applied changes for custom units.
    SimulationUnitSystems unitSystem() const;
    bool unitSystem(SimulationUnitSystems value);

    /// Commits all pending default-unit changes to the document.
    /// If any individual unit defaults have been set, the active unit system
    /// is automatically switched to CustomUnitSystem.
    /// If all staged values already match the active
    /// system, no switch occurs and no changes are written.
    /// Returns true if the changes were applied successfully.
    bool applyChanges();

    /// Gets or sets the default force units for the simulation.
    /// Setting this stages the change locally; call applyChanges to commit.
    ForceUnits forceUnit() const;
    bool forceUnit(ForceUnits value);

    ADSK_SIM_SIMDEFAULTUNITS_API static const char* classType();
    ADSK_SIM_SIMDEFAULTUNITS_API const char* objectType() const override;
    ADSK_SIM_SIMDEFAULTUNITS_API void* queryInterface(const char* id) const override;
    ADSK_SIM_SIMDEFAULTUNITS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SimulationUnitSystems unitSystem_raw() const = 0;
    virtual bool unitSystem_raw(SimulationUnitSystems value) = 0;
    virtual bool applyChanges_raw() = 0;
    virtual ForceUnits forceUnit_raw() const = 0;
    virtual bool forceUnit_raw(ForceUnits value) = 0;
};

// Inline wrappers

inline SimulationUnitSystems SimDefaultUnits::unitSystem() const
{
    SimulationUnitSystems res = unitSystem_raw();
    return res;
}

inline bool SimDefaultUnits::unitSystem(SimulationUnitSystems value)
{
    return unitSystem_raw(value);
}

inline bool SimDefaultUnits::applyChanges()
{
    bool res = applyChanges_raw();
    return res;
}

inline ForceUnits SimDefaultUnits::forceUnit() const
{
    ForceUnits res = forceUnit_raw();
    return res;
}

inline bool SimDefaultUnits::forceUnit(ForceUnits value)
{
    return forceUnit_raw(value);
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_SIMDEFAULTUNITS_API