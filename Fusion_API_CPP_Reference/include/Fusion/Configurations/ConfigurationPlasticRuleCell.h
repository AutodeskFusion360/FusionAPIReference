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
#include "ConfigurationCell.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONPLASTICRULECELL_CPP__
# define ADSK_FUSION_CONFIGURATIONPLASTICRULECELL_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONPLASTICRULECELL_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONPLASTICRULECELL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationPlasticRuleColumn;
    class PlasticRule;
}}

namespace adsk { namespace fusion {

/// Represents a single cell within a configuration table that controls which sheet plastic rule is assigned to a component.
class ConfigurationPlasticRuleCell : public ConfigurationCell {
public:

    /// Returns the column this cell is in.
    core::Ptr<ConfigurationPlasticRuleColumn> parentColumn() const;

    /// Gets and sets the plastic rule defined for this cell.
    core::Ptr<PlasticRule> plasticRule() const;
    bool plasticRule(const core::Ptr<PlasticRule>& value);

    ADSK_FUSION_CONFIGURATIONPLASTICRULECELL_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONPLASTICRULECELL_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONPLASTICRULECELL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONPLASTICRULECELL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationPlasticRuleColumn* parentColumn_raw() const = 0;
    virtual PlasticRule* plasticRule_raw() const = 0;
    virtual bool plasticRule_raw(PlasticRule* value) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationPlasticRuleColumn> ConfigurationPlasticRuleCell::parentColumn() const
{
    core::Ptr<ConfigurationPlasticRuleColumn> res = parentColumn_raw();
    return res;
}

inline core::Ptr<PlasticRule> ConfigurationPlasticRuleCell::plasticRule() const
{
    core::Ptr<PlasticRule> res = plasticRule_raw();
    return res;
}

inline bool ConfigurationPlasticRuleCell::plasticRule(const core::Ptr<PlasticRule>& value)
{
    return plasticRule_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONPLASTICRULECELL_API