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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONTOPTABLE_CPP__
# define ADSK_FUSION_CONFIGURATIONTOPTABLE_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONTOPTABLE_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONTOPTABLE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationAppearanceTable;
    class ConfigurationColumn;
    class ConfigurationColumns;
    class ConfigurationCustomThemeTable;
    class ConfigurationCustomThemeTables;
    class ConfigurationMaterialTable;
    class ConfigurationPlasticRuleTable;
    class ConfigurationRow;
    class ConfigurationSheetMetalRuleTable;
}}

namespace adsk { namespace fusion {

/// API object representing the top configuration table associated with a configured design.
/// 
/// When obtained from the DataFile object of a configured design, the functionality is limited because it's not
/// loaded in Fusion, and there is no access to the Fusion objects represented in the table. For example, any
/// properties that return a Component or Parameter will return null because those objects aren't available.
class ConfigurationTopTable : public ConfigurationTable {
public:

    /// Gets the name of the table as seen in the user interface.
    std::string name() const;

    /// Returns the columns defined for this table and provides the functionality to create new columns.
    core::Ptr<ConfigurationColumns> columns() const;

    /// Returns the row that is currently active. To set the active row, use the activate method on the
    /// ConfigurationRow object.
    core::Ptr<ConfigurationRow> activeRow() const;

    /// Returns any custom theme tables associated with this top table.
    core::Ptr<ConfigurationCustomThemeTables> customThemeTables() const;

    /// Returns the appearance table associated with this top table. The returned table can be empty
    /// and not have any columns. In this case, the table is not displayed in the user interface.
    /// Use the returned table to add columns.
    core::Ptr<ConfigurationAppearanceTable> appearanceTable() const;

    /// Returns the material table associated with this top table. The returned table can be empty
    /// and not have any columns. In this case, the table is not displayed in the user interface.
    /// Use the returned table to add columns.
    core::Ptr<ConfigurationMaterialTable> materialTable() const;

    /// Returns the plastic rule table associated with this top table. The returned table can be
    /// empty and not have any columns. In this case, the table is not displayed in the user interface.
    /// Use the returned table to add columns.
    core::Ptr<ConfigurationPlasticRuleTable> plasticRuleTable() const;

    /// Returns the sheet metal rule table associated with this top table. The returned table can be
    /// empty and not have any columns. In this case, the table is not displayed in the user interface.
    /// Use the returned table to add columns.
    core::Ptr<ConfigurationSheetMetalRuleTable> sheetMetalRuleTable() const;

    /// Moves the specified columns from one table to another.
    /// columns : An array of the columns within the top table you want to move.
    /// targetTable : The table you want to move the columns to. The target must be a custom theme table.
    /// Returns an array of the columns created due to the move.
    std::vector<core::Ptr<ConfigurationColumn>> moveColumns(const std::vector<core::Ptr<ConfigurationColumn>>& columns, const core::Ptr<ConfigurationCustomThemeTable>& targetTable);

    ADSK_FUSION_CONFIGURATIONTOPTABLE_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONTOPTABLE_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONTOPTABLE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONTOPTABLE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual ConfigurationColumns* columns_raw() const = 0;
    virtual ConfigurationRow* activeRow_raw() const = 0;
    virtual ConfigurationCustomThemeTables* customThemeTables_raw() const = 0;
    virtual ConfigurationAppearanceTable* appearanceTable_raw() const = 0;
    virtual ConfigurationMaterialTable* materialTable_raw() const = 0;
    virtual ConfigurationPlasticRuleTable* plasticRuleTable_raw() const = 0;
    virtual ConfigurationSheetMetalRuleTable* sheetMetalRuleTable_raw() const = 0;
    virtual ConfigurationColumn** moveColumns_raw(ConfigurationColumn** columns, size_t columns_size, ConfigurationCustomThemeTable* targetTable, size_t& return_size) = 0;
};

// Inline wrappers

inline std::string ConfigurationTopTable::name() const
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

inline core::Ptr<ConfigurationColumns> ConfigurationTopTable::columns() const
{
    core::Ptr<ConfigurationColumns> res = columns_raw();
    return res;
}

inline core::Ptr<ConfigurationRow> ConfigurationTopTable::activeRow() const
{
    core::Ptr<ConfigurationRow> res = activeRow_raw();
    return res;
}

inline core::Ptr<ConfigurationCustomThemeTables> ConfigurationTopTable::customThemeTables() const
{
    core::Ptr<ConfigurationCustomThemeTables> res = customThemeTables_raw();
    return res;
}

inline core::Ptr<ConfigurationAppearanceTable> ConfigurationTopTable::appearanceTable() const
{
    core::Ptr<ConfigurationAppearanceTable> res = appearanceTable_raw();
    return res;
}

inline core::Ptr<ConfigurationMaterialTable> ConfigurationTopTable::materialTable() const
{
    core::Ptr<ConfigurationMaterialTable> res = materialTable_raw();
    return res;
}

inline core::Ptr<ConfigurationPlasticRuleTable> ConfigurationTopTable::plasticRuleTable() const
{
    core::Ptr<ConfigurationPlasticRuleTable> res = plasticRuleTable_raw();
    return res;
}

inline core::Ptr<ConfigurationSheetMetalRuleTable> ConfigurationTopTable::sheetMetalRuleTable() const
{
    core::Ptr<ConfigurationSheetMetalRuleTable> res = sheetMetalRuleTable_raw();
    return res;
}

inline std::vector<core::Ptr<ConfigurationColumn>> ConfigurationTopTable::moveColumns(const std::vector<core::Ptr<ConfigurationColumn>>& columns, const core::Ptr<ConfigurationCustomThemeTable>& targetTable)
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

#undef ADSK_FUSION_CONFIGURATIONTOPTABLE_API