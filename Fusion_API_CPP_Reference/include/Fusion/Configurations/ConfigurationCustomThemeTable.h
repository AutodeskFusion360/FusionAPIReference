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
#include "ConfigurationTable.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLE_CPP__
# define ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLE_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLE_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationColumn;
    class ConfigurationColumns;
    class ConfigurationThemeColumn;
}}

namespace adsk { namespace fusion {

/// API object representing a custom theme configuration table associated with a top table.
class ConfigurationCustomThemeTable : public ConfigurationTable {
public:

    /// Gets and sets the name of the table as seen in the user interface.
    std::string name() const;
    bool name(const std::string& value);

    /// Returns the columns in this table.
    core::Ptr<ConfigurationColumns> columns() const;

    /// Deletes this custom theme table from the configuration.
    /// deleteColumns : If true, this deletes the columns in the custom theme table. If false, it moves them back to the top table.
    /// Returns true if the delete was successful.
    bool deleteMe(bool deleteColumns);

    /// Returns the column in the top table that references this custom theme table.
    core::Ptr<ConfigurationThemeColumn> parentTableColumn() const;

    /// Moves the specified columns from one table to another.
    /// columns : An array of the columns within this table that you want to move.
    /// targetTable : The table you want to move the columns to. The target must be either a top table or a custom theme table.
    /// Returns an array of the columns created due to the move.
    std::vector<core::Ptr<ConfigurationColumn>> moveColumns(const std::vector<core::Ptr<ConfigurationColumn>>& columns, const core::Ptr<ConfigurationTable>& targetTable);

    ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLE_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLE_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual ConfigurationColumns* columns_raw() const = 0;
    virtual bool deleteMe_raw(bool deleteColumns) = 0;
    virtual ConfigurationThemeColumn* parentTableColumn_raw() const = 0;
    virtual ConfigurationColumn** moveColumns_raw(ConfigurationColumn** columns, size_t columns_size, ConfigurationTable* targetTable, size_t& return_size) = 0;
};

// Inline wrappers

inline std::string ConfigurationCustomThemeTable::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ConfigurationCustomThemeTable::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<ConfigurationColumns> ConfigurationCustomThemeTable::columns() const
{
    core::Ptr<ConfigurationColumns> res = columns_raw();
    return res;
}

inline bool ConfigurationCustomThemeTable::deleteMe(bool deleteColumns)
{
    bool res = deleteMe_raw(deleteColumns);
    return res;
}

inline core::Ptr<ConfigurationThemeColumn> ConfigurationCustomThemeTable::parentTableColumn() const
{
    core::Ptr<ConfigurationThemeColumn> res = parentTableColumn_raw();
    return res;
}

inline std::vector<core::Ptr<ConfigurationColumn>> ConfigurationCustomThemeTable::moveColumns(const std::vector<core::Ptr<ConfigurationColumn>>& columns, const core::Ptr<ConfigurationTable>& targetTable)
{
    std::vector<core::Ptr<ConfigurationColumn>> res;
    size_t s;
    ConfigurationColumn** columns_ = new ConfigurationColumn*[columns.size()];
    for(size_t i=0; i<columns.size(); ++i)
        columns_[i] = columns[i].get();

    ConfigurationColumn** p= moveColumns_raw(columns_, columns.size(), targetTable.get(), s);
    delete[] columns_;
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLE_API