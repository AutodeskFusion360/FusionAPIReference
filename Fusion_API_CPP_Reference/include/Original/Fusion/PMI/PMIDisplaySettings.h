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
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIDISPLAYSETTINGS_CPP__
# define ADSK_FUSION_PMIDISPLAYSETTINGS_API XI_EXPORT
# else
# define ADSK_FUSION_PMIDISPLAYSETTINGS_API
# endif
#else
# define ADSK_FUSION_PMIDISPLAYSETTINGS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents display settings related to the PMIAnnotation display.
/// Includes information such as unit and formatting.
class PMIDisplaySettings : public core::Base {
public:

    /// Create a transient PMIDisplaySettings object.
    /// 
    /// The default values are:
    /// - unitType = UseDocumentUnitPMIUnitType
    /// 
    /// - precision = use document settings
    /// 
    /// - leadingZeros = true
    /// 
    /// - trailingZeros = use document settings
    /// 
    /// - unitAbbreviation = false
    static core::Ptr<PMIDisplaySettings> create();

    /// Gets and sets the unit type to be used in displaying the PMI.
    PMIUnitTypes unitType() const;
    bool unitType(PMIUnitTypes value);

    /// Gets and sets the precision (number of decimal places) to be used when displaying values.
    /// 
    /// The value set should be between 0 and 8 inclusive.
    int precision() const;
    bool precision(int value);

    /// Gets and sets whether to show leading zeros in the display.
    bool hasLeadingZeros() const;
    bool hasLeadingZeros(bool value);

    /// Gets and sets whether to show trailing zeros in the display.
    bool hasTrailingZeros() const;
    bool hasTrailingZeros(bool value);

    /// Gets and sets whether to show unit abbreviation in the display.
    bool hasUnitAbbreviation() const;
    bool hasUnitAbbreviation(bool value);

    ADSK_FUSION_PMIDISPLAYSETTINGS_API static const char* classType();
    ADSK_FUSION_PMIDISPLAYSETTINGS_API const char* objectType() const override;
    ADSK_FUSION_PMIDISPLAYSETTINGS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIDISPLAYSETTINGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_PMIDISPLAYSETTINGS_API static PMIDisplaySettings* create_raw();
    virtual PMIUnitTypes unitType_raw() const = 0;
    virtual bool unitType_raw(PMIUnitTypes value) = 0;
    virtual int precision_raw() const = 0;
    virtual bool precision_raw(int value) = 0;
    virtual bool hasLeadingZeros_raw() const = 0;
    virtual bool hasLeadingZeros_raw(bool value) = 0;
    virtual bool hasTrailingZeros_raw() const = 0;
    virtual bool hasTrailingZeros_raw(bool value) = 0;
    virtual bool hasUnitAbbreviation_raw() const = 0;
    virtual bool hasUnitAbbreviation_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<PMIDisplaySettings> PMIDisplaySettings::create()
{
    core::Ptr<PMIDisplaySettings> res = create_raw();
    return res;
}

inline PMIUnitTypes PMIDisplaySettings::unitType() const
{
    PMIUnitTypes res = unitType_raw();
    return res;
}

inline bool PMIDisplaySettings::unitType(PMIUnitTypes value)
{
    return unitType_raw(value);
}

inline int PMIDisplaySettings::precision() const
{
    int res = precision_raw();
    return res;
}

inline bool PMIDisplaySettings::precision(int value)
{
    return precision_raw(value);
}

inline bool PMIDisplaySettings::hasLeadingZeros() const
{
    bool res = hasLeadingZeros_raw();
    return res;
}

inline bool PMIDisplaySettings::hasLeadingZeros(bool value)
{
    return hasLeadingZeros_raw(value);
}

inline bool PMIDisplaySettings::hasTrailingZeros() const
{
    bool res = hasTrailingZeros_raw();
    return res;
}

inline bool PMIDisplaySettings::hasTrailingZeros(bool value)
{
    return hasTrailingZeros_raw(value);
}

inline bool PMIDisplaySettings::hasUnitAbbreviation() const
{
    bool res = hasUnitAbbreviation_raw();
    return res;
}

inline bool PMIDisplaySettings::hasUnitAbbreviation(bool value)
{
    return hasUnitAbbreviation_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIDISPLAYSETTINGS_API