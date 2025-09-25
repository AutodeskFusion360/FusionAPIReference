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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONTHEMECELL_CPP__
# define ADSK_FUSION_CONFIGURATIONTHEMECELL_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONTHEMECELL_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONTHEMECELL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationRow;
    class ConfigurationThemeColumn;
}}

namespace adsk { namespace fusion {

/// Represents an individual cell within a top configuration table that specifies which row in the custom theme table should be used.
class ConfigurationThemeCell : public ConfigurationCell {
public:

    /// Returns the column this cell is in.
    core::Ptr<ConfigurationThemeColumn> parentColumn() const;

    /// Gets and sets the row to use from the referenced table.
    core::Ptr<ConfigurationRow> referencedTableRow() const;
    bool referencedTableRow(const core::Ptr<ConfigurationRow>& value);

    ADSK_FUSION_CONFIGURATIONTHEMECELL_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONTHEMECELL_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONTHEMECELL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONTHEMECELL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationThemeColumn* parentColumn_raw() const = 0;
    virtual ConfigurationRow* referencedTableRow_raw() const = 0;
    virtual bool referencedTableRow_raw(ConfigurationRow* value) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationThemeColumn> ConfigurationThemeCell::parentColumn() const
{
    core::Ptr<ConfigurationThemeColumn> res = parentColumn_raw();
    return res;
}

inline core::Ptr<ConfigurationRow> ConfigurationThemeCell::referencedTableRow() const
{
    core::Ptr<ConfigurationRow> res = referencedTableRow_raw();
    return res;
}

inline bool ConfigurationThemeCell::referencedTableRow(const core::Ptr<ConfigurationRow>& value)
{
    return referencedTableRow_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONTHEMECELL_API