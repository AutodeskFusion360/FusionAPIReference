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
#include "ConfigurationColumn.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONPLASTICRULECOLUMN_CPP__
# define ADSK_FUSION_CONFIGURATIONPLASTICRULECOLUMN_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONPLASTICRULECOLUMN_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONPLASTICRULECOLUMN_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Component;
    class ConfigurationPlasticRuleCell;
    class ConfigurationPlasticRuleTable;
}}

namespace adsk { namespace fusion {

/// Represents a plastic rule column in a configuration table. This defines the plastic rule to use for a specific component.
class ConfigurationPlasticRuleColumn : public ConfigurationColumn {
public:

    /// Returns the Component being modified by this column. This property
    /// returns null when the table being queried was obtained from a DataFile object.
    core::Ptr<Component> component() const;

    /// Gets the cell in this column at the specified row. The first row has an index of 0 and does not include the header row.
    /// rowIndex : The index of the row to return the cell for. The first row has an index of 0.
    /// Returns the specified cell if successful and null if an invalid index was specified.
    core::Ptr<ConfigurationPlasticRuleCell> getCell(size_t rowIndex);

    /// Gets the cell in this column at the row specified by its name.
    /// rowName : The name of the row to return the cell for.
    /// Returns the specified cell if successful and null if the name is not found.
    core::Ptr<ConfigurationPlasticRuleCell> getCellByRowName(const std::string& rowName);

    /// Gets the cell in this column at the row specified by its ID.
    /// rowId : The ID of the row to return the cell for.
    /// Returns the specified cell if successful and null if the id is not found.
    core::Ptr<ConfigurationPlasticRuleCell> getCellByRowId(const std::string& rowId);

    /// Returns the parent plastic rule table this column is in.
    core::Ptr<ConfigurationPlasticRuleTable> parentPlasticRuleTable() const;

    ADSK_FUSION_CONFIGURATIONPLASTICRULECOLUMN_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONPLASTICRULECOLUMN_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONPLASTICRULECOLUMN_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONPLASTICRULECOLUMN_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Component* component_raw() const = 0;
    virtual ConfigurationPlasticRuleCell* getCell_raw(size_t rowIndex) = 0;
    virtual ConfigurationPlasticRuleCell* getCellByRowName_raw(const char* rowName) = 0;
    virtual ConfigurationPlasticRuleCell* getCellByRowId_raw(const char* rowId) = 0;
    virtual ConfigurationPlasticRuleTable* parentPlasticRuleTable_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Component> ConfigurationPlasticRuleColumn::component() const
{
    core::Ptr<Component> res = component_raw();
    return res;
}

inline core::Ptr<ConfigurationPlasticRuleCell> ConfigurationPlasticRuleColumn::getCell(size_t rowIndex)
{
    core::Ptr<ConfigurationPlasticRuleCell> res = getCell_raw(rowIndex);
    return res;
}

inline core::Ptr<ConfigurationPlasticRuleCell> ConfigurationPlasticRuleColumn::getCellByRowName(const std::string& rowName)
{
    core::Ptr<ConfigurationPlasticRuleCell> res = getCellByRowName_raw(rowName.c_str());
    return res;
}

inline core::Ptr<ConfigurationPlasticRuleCell> ConfigurationPlasticRuleColumn::getCellByRowId(const std::string& rowId)
{
    core::Ptr<ConfigurationPlasticRuleCell> res = getCellByRowId_raw(rowId.c_str());
    return res;
}

inline core::Ptr<ConfigurationPlasticRuleTable> ConfigurationPlasticRuleColumn::parentPlasticRuleTable() const
{
    core::Ptr<ConfigurationPlasticRuleTable> res = parentPlasticRuleTable_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONPLASTICRULECOLUMN_API