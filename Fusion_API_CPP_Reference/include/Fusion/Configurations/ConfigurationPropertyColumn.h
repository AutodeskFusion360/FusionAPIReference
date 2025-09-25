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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONPROPERTYCOLUMN_CPP__
# define ADSK_FUSION_CONFIGURATIONPROPERTYCOLUMN_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONPROPERTYCOLUMN_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONPROPERTYCOLUMN_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Property;
}}
namespace adsk { namespace fusion {
    class ConfigurationPropertyCell;
    class ConfigurationTable;
}}

namespace adsk { namespace fusion {

/// Represents a property column in a configuration table.
class ConfigurationPropertyColumn : public ConfigurationColumn {
public:

    /// Returns the property whose value is controlled by this column.
    core::Ptr<core::Property> parentProperty() const;

    /// Gets the cell in this column at the specified row. The first row has an index of 0 and does not include the header row.
    /// rowIndex : The index of the row to return the cell for. The first row has an index of 0.
    /// Returns the specified cell if successful and null if an invalid index was specified.
    core::Ptr<ConfigurationPropertyCell> getCell(size_t rowIndex);

    /// Gets the cell in this column at the row specified by its name.
    /// rowName : The name of the row to return the cell for.
    /// Returns the specified cell if successful and null if the name is not found.
    core::Ptr<ConfigurationPropertyCell> getCellByRowName(const std::string& rowName);

    /// Gets the cell in this column at the row specified by its ID.
    /// rowId : The ID of the row to return the cell for.
    /// Returns the specified cell if successful and null if the id is not found.
    core::Ptr<ConfigurationPropertyCell> getCellByRowId(const std::string& rowId);

    /// Returns the parent table this column is in.
    core::Ptr<ConfigurationTable> parentTable() const;

    ADSK_FUSION_CONFIGURATIONPROPERTYCOLUMN_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONPROPERTYCOLUMN_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONPROPERTYCOLUMN_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONPROPERTYCOLUMN_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Property* parentProperty_raw() const = 0;
    virtual ConfigurationPropertyCell* getCell_raw(size_t rowIndex) = 0;
    virtual ConfigurationPropertyCell* getCellByRowName_raw(const char* rowName) = 0;
    virtual ConfigurationPropertyCell* getCellByRowId_raw(const char* rowId) = 0;
    virtual ConfigurationTable* parentTable_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Property> ConfigurationPropertyColumn::parentProperty() const
{
    core::Ptr<core::Property> res = parentProperty_raw();
    return res;
}

inline core::Ptr<ConfigurationPropertyCell> ConfigurationPropertyColumn::getCell(size_t rowIndex)
{
    core::Ptr<ConfigurationPropertyCell> res = getCell_raw(rowIndex);
    return res;
}

inline core::Ptr<ConfigurationPropertyCell> ConfigurationPropertyColumn::getCellByRowName(const std::string& rowName)
{
    core::Ptr<ConfigurationPropertyCell> res = getCellByRowName_raw(rowName.c_str());
    return res;
}

inline core::Ptr<ConfigurationPropertyCell> ConfigurationPropertyColumn::getCellByRowId(const std::string& rowId)
{
    core::Ptr<ConfigurationPropertyCell> res = getCellByRowId_raw(rowId.c_str());
    return res;
}

inline core::Ptr<ConfigurationTable> ConfigurationPropertyColumn::parentTable() const
{
    core::Ptr<ConfigurationTable> res = parentTable_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONPROPERTYCOLUMN_API