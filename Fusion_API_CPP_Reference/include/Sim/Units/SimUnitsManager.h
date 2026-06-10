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
#include "../../Core/Application/UnitsManager.h"
#include "../SimTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_SIMUNITSMANAGER_CPP__
# define ADSK_SIM_SIMUNITSMANAGER_API XI_EXPORT
# else
# define ADSK_SIM_SIMUNITSMANAGER_API
# endif
#else
# define ADSK_SIM_SIMUNITSMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Extends the base UnitsManager with helpers for converting simulation-specific
/// unit enums into unit strings that the base UnitsManager methods accept.
/// 
/// Use the inherited methods (evaluateExpression, convert, formatValue, etc.)
/// for expression evaluation, unit conversion, and value formatting. The
/// helper methods on this class translate typed enums (e.g. ForceUnits) into
/// the string identifiers those inherited methods expect.
/// 
/// Inherited methods that accept an optional units parameter
/// (evaluateExpression, formatValue, standardizeExpression) default to
/// the document's default length unit when units are omitted. Always
/// pass an explicit unit string for non-length quantities.
/// 
/// Internal values are held in SI units (e.g. seconds, radians, kg for time, angle, mass)
/// with the exception that all lengths are in cm rather than meter and this affects derived
/// units (e.g. force is kg * cm / s^2 -> 0.01N).
class SimUnitsManager : public core::UnitsManager {
public:

    /// Returns the unit string corresponding to the given force unit enum value.
    /// The returned string (e.g. "N", "lbforce") can be passed to base UnitsManager
    /// methods such as evaluateExpression, convert, and formatValue.
    /// units : Optional, the force unit to convert to a string.
    /// The unit string for the specified force unit, or null on error.
    /// With no argument: string for default force unit will be returned.
    std::string getForceUnitString(ForceUnits units = adsk::sim::DefaultForceUnit) const;

    ADSK_SIM_SIMUNITSMANAGER_API static const char* classType();
    ADSK_SIM_SIMUNITSMANAGER_API const char* objectType() const override;
    ADSK_SIM_SIMUNITSMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_SIM_SIMUNITSMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* getForceUnitString_raw(ForceUnits units) const = 0;
};

// Inline wrappers

inline std::string SimUnitsManager::getForceUnitString(ForceUnits units) const
{
    std::string res;

    char* p= getForceUnitString_raw(units);
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_SIMUNITSMANAGER_API