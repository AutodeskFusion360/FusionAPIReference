//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2025 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include "../../Core/Application/DefaultUnitsPreferences.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FUSIONDEFAULTUNITSPREFERENCES_CPP__
# define ADSK_FUSION_FUSIONDEFAULTUNITSPREFERENCES_API XI_EXPORT
# else
# define ADSK_FUSION_FUSIONDEFAULTUNITSPREFERENCES_API
# endif
#else
# define ADSK_FUSION_FUSIONDEFAULTUNITSPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// <p>Fusion Default Units for Design Preferences. The following code can be used to access this object.</p>
/// <pre class="api-code">unitPrefs = app.preferences.defaultUnitsPreferences.itemByName('Design')</pre>
class FusionDefaultUnitsPreferences : public core::DefaultUnitsPreferences {
public:

    /// Gets and sets the default design units for length when creating a new Fusion file.
    /// Setting this property will have the side effect of changing the defaultUnitSystem
    /// property to custom.
    DistanceUnits distanceDisplayUnits() const;
    bool distanceDisplayUnits(DistanceUnits value);

    /// Gets and sets the default design units for mass when creating a new Fusion file.
    /// Setting this property will have the side effect of changing the defaultUnitSystem
    /// property to custom.
    MassUnits massDisplayUnits() const;
    bool massDisplayUnits(MassUnits value);

    /// Gets and sets the default unit system when creating a new Fusion file.
    UnitSystems defaultUnitSystem() const;
    bool defaultUnitSystem(UnitSystems value);

    ADSK_FUSION_FUSIONDEFAULTUNITSPREFERENCES_API static const char* classType();
    ADSK_FUSION_FUSIONDEFAULTUNITSPREFERENCES_API const char* objectType() const override;
    ADSK_FUSION_FUSIONDEFAULTUNITSPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FUSIONDEFAULTUNITSPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DistanceUnits distanceDisplayUnits_raw() const = 0;
    virtual bool distanceDisplayUnits_raw(DistanceUnits value) = 0;
    virtual MassUnits massDisplayUnits_raw() const = 0;
    virtual bool massDisplayUnits_raw(MassUnits value) = 0;
    virtual UnitSystems defaultUnitSystem_raw() const = 0;
    virtual bool defaultUnitSystem_raw(UnitSystems value) = 0;
};

// Inline wrappers

inline DistanceUnits FusionDefaultUnitsPreferences::distanceDisplayUnits() const
{
    DistanceUnits res = distanceDisplayUnits_raw();
    return res;
}

inline bool FusionDefaultUnitsPreferences::distanceDisplayUnits(DistanceUnits value)
{
    return distanceDisplayUnits_raw(value);
}

inline MassUnits FusionDefaultUnitsPreferences::massDisplayUnits() const
{
    MassUnits res = massDisplayUnits_raw();
    return res;
}

inline bool FusionDefaultUnitsPreferences::massDisplayUnits(MassUnits value)
{
    return massDisplayUnits_raw(value);
}

inline UnitSystems FusionDefaultUnitsPreferences::defaultUnitSystem() const
{
    UnitSystems res = defaultUnitSystem_raw();
    return res;
}

inline bool FusionDefaultUnitsPreferences::defaultUnitSystem(UnitSystems value)
{
    return defaultUnitSystem_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FUSIONDEFAULTUNITSPREFERENCES_API