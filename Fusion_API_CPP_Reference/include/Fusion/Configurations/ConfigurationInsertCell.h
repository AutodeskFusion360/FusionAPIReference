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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONINSERTCELL_CPP__
# define ADSK_FUSION_CONFIGURATIONINSERTCELL_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONINSERTCELL_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONINSERTCELL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationInsertColumn;
    class ConfigurationRow;
}}

namespace adsk { namespace fusion {

/// Represents a single cell within a top or custom theme configuration table that controls which configuration is
/// used for an inserted configured design. Use the parent column to get the feature being suppressed.
class ConfigurationInsertCell : public ConfigurationCell {
public:

    /// Returns the column this cell is in.
    core::Ptr<ConfigurationInsertColumn> parentColumn() const;

    /// Gets and sets which row of the configured design is used for this cell. When setting this property,
    /// the row must come from the configured design used by the occurrence associated with the parent column of this cell.
    core::Ptr<ConfigurationRow> row() const;
    bool row(const core::Ptr<ConfigurationRow>& value);

    ADSK_FUSION_CONFIGURATIONINSERTCELL_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONINSERTCELL_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONINSERTCELL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONINSERTCELL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationInsertColumn* parentColumn_raw() const = 0;
    virtual ConfigurationRow* row_raw() const = 0;
    virtual bool row_raw(ConfigurationRow* value) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationInsertColumn> ConfigurationInsertCell::parentColumn() const
{
    core::Ptr<ConfigurationInsertColumn> res = parentColumn_raw();
    return res;
}

inline core::Ptr<ConfigurationRow> ConfigurationInsertCell::row() const
{
    core::Ptr<ConfigurationRow> res = row_raw();
    return res;
}

inline bool ConfigurationInsertCell::row(const core::Ptr<ConfigurationRow>& value)
{
    return row_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONINSERTCELL_API