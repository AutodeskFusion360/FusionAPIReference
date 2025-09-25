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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMN_CPP__
# define ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMN_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMN_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMN_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Component;
    class ConfigurationSheetMetalRuleCell;
    class ConfigurationSheetMetalRuleTable;
}}

namespace adsk { namespace fusion {

/// Represents a sheet metal rule column in a configuration table. This defines the sheet metal rule to use for a specific component.
class ConfigurationSheetMetalRuleColumn : public ConfigurationColumn {
public:

    /// Returns the Component being modified by this column. This property
    /// returns null when the table being queried was obtained from a DataFile object.
    core::Ptr<Component> component() const;

    /// Returns the name of the component associated with this column. This is useful when
    /// the table is obtained from a DataFile object, and the component object is unavailable.
    std::string componentName() const;

    /// Gets the cell in this column at the specified row. The first row has an index of 0 and does not include the header row.
    /// rowIndex : The index of the row to return the cell for. The first row has an index of 0.
    /// Returns the specified cell if successful and null if an invalid index was specified.
    core::Ptr<ConfigurationSheetMetalRuleCell> getCell(size_t rowIndex);

    /// Gets the cell in this column at the row specified by its name.
    /// rowName : The name of the row to return the cell for.
    /// Returns the specified cell if successful and null if the name is not found.
    core::Ptr<ConfigurationSheetMetalRuleCell> getCellByRowName(const std::string& rowName);

    /// Gets the cell in this column at the row specified by its ID.
    /// rowId : The ID of the row to return the cell for.
    /// Returns the specified cell if successful and null if the id is not found.
    core::Ptr<ConfigurationSheetMetalRuleCell> getCellByRowId(const std::string& rowId);

    /// Returns the parent sheet metal rule table this column is in.
    core::Ptr<ConfigurationSheetMetalRuleTable> parentSheetMetalRuleTable() const;

    ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMN_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMN_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMN_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMN_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Component* component_raw() const = 0;
    virtual char* componentName_raw() const = 0;
    virtual ConfigurationSheetMetalRuleCell* getCell_raw(size_t rowIndex) = 0;
    virtual ConfigurationSheetMetalRuleCell* getCellByRowName_raw(const char* rowName) = 0;
    virtual ConfigurationSheetMetalRuleCell* getCellByRowId_raw(const char* rowId) = 0;
    virtual ConfigurationSheetMetalRuleTable* parentSheetMetalRuleTable_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Component> ConfigurationSheetMetalRuleColumn::component() const
{
    core::Ptr<Component> res = component_raw();
    return res;
}

inline std::string ConfigurationSheetMetalRuleColumn::componentName() const
{
    std::string res;

    char* p= componentName_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<ConfigurationSheetMetalRuleCell> ConfigurationSheetMetalRuleColumn::getCell(size_t rowIndex)
{
    core::Ptr<ConfigurationSheetMetalRuleCell> res = getCell_raw(rowIndex);
    return res;
}

inline core::Ptr<ConfigurationSheetMetalRuleCell> ConfigurationSheetMetalRuleColumn::getCellByRowName(const std::string& rowName)
{
    core::Ptr<ConfigurationSheetMetalRuleCell> res = getCellByRowName_raw(rowName.c_str());
    return res;
}

inline core::Ptr<ConfigurationSheetMetalRuleCell> ConfigurationSheetMetalRuleColumn::getCellByRowId(const std::string& rowId)
{
    core::Ptr<ConfigurationSheetMetalRuleCell> res = getCellByRowId_raw(rowId.c_str());
    return res;
}

inline core::Ptr<ConfigurationSheetMetalRuleTable> ConfigurationSheetMetalRuleColumn::parentSheetMetalRuleTable() const
{
    core::Ptr<ConfigurationSheetMetalRuleTable> res = parentSheetMetalRuleTable_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMN_API