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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONSHEETMETALRULECELL_CPP__
# define ADSK_FUSION_CONFIGURATIONSHEETMETALRULECELL_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONSHEETMETALRULECELL_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONSHEETMETALRULECELL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationSheetMetalRuleColumn;
    class SheetMetalRule;
}}

namespace adsk { namespace fusion {

/// Represents a single cell within a configuration table that controls which sheet metal rule is assigned to a component.
class ConfigurationSheetMetalRuleCell : public ConfigurationCell {
public:

    /// Returns the column this cell is in.
    core::Ptr<ConfigurationSheetMetalRuleColumn> parentColumn() const;

    /// Gets and sets the sheet metal rule defined for this cell.
    core::Ptr<SheetMetalRule> sheetMetalRule() const;
    bool sheetMetalRule(const core::Ptr<SheetMetalRule>& value);

    ADSK_FUSION_CONFIGURATIONSHEETMETALRULECELL_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONSHEETMETALRULECELL_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONSHEETMETALRULECELL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONSHEETMETALRULECELL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationSheetMetalRuleColumn* parentColumn_raw() const = 0;
    virtual SheetMetalRule* sheetMetalRule_raw() const = 0;
    virtual bool sheetMetalRule_raw(SheetMetalRule* value) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationSheetMetalRuleColumn> ConfigurationSheetMetalRuleCell::parentColumn() const
{
    core::Ptr<ConfigurationSheetMetalRuleColumn> res = parentColumn_raw();
    return res;
}

inline core::Ptr<SheetMetalRule> ConfigurationSheetMetalRuleCell::sheetMetalRule() const
{
    core::Ptr<SheetMetalRule> res = sheetMetalRule_raw();
    return res;
}

inline bool ConfigurationSheetMetalRuleCell::sheetMetalRule(const core::Ptr<SheetMetalRule>& value)
{
    return sheetMetalRule_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONSHEETMETALRULECELL_API