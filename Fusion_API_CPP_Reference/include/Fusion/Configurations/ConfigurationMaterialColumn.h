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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONMATERIALCOLUMN_CPP__
# define ADSK_FUSION_CONFIGURATIONMATERIALCOLUMN_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONMATERIALCOLUMN_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONMATERIALCOLUMN_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationMaterialCell;
    class ConfigurationMaterialTable;
}}

namespace adsk { namespace fusion {

/// Represents a material column in the material table. This defines the material to use for a specific component.
class ConfigurationMaterialColumn : public ConfigurationColumn {
public:

    /// Returns the Component or BRepBody being modified by this column. This property
    /// returns null when the table being queried was obtained from a DataFile object.
    core::Ptr<core::Base> entity() const;

    /// Gets the cell in this column at the specified row. The first row has an
    /// index of 0 and does not include the header row.
    /// rowIndex : The index of the row to return the cell for. The first row has an index of 0.
    /// Returns the specified cell if successful and null if an invalid index was specified.
    core::Ptr<ConfigurationMaterialCell> getCell(size_t rowIndex);

    /// Gets the cell in this column at the row specified by its name.
    /// rowName : The name of the row to return the cell for.
    /// Returns the specified cell if successful and null if the name is not found.
    core::Ptr<ConfigurationMaterialCell> getCellByRowName(const std::string& rowName);

    /// Gets the cell in this column at the row specified by its ID.
    /// rowId : The ID of the row to return the cell for.
    /// Returns the specified cell if successful and null if the id is not found.
    core::Ptr<ConfigurationMaterialCell> getCellByRowId(const std::string& rowId);

    /// Returns the parent material table this column is in.
    core::Ptr<ConfigurationMaterialTable> parentMaterialTable() const;

    ADSK_FUSION_CONFIGURATIONMATERIALCOLUMN_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONMATERIALCOLUMN_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONMATERIALCOLUMN_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONMATERIALCOLUMN_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* entity_raw() const = 0;
    virtual ConfigurationMaterialCell* getCell_raw(size_t rowIndex) = 0;
    virtual ConfigurationMaterialCell* getCellByRowName_raw(const char* rowName) = 0;
    virtual ConfigurationMaterialCell* getCellByRowId_raw(const char* rowId) = 0;
    virtual ConfigurationMaterialTable* parentMaterialTable_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ConfigurationMaterialColumn::entity() const
{
    core::Ptr<core::Base> res = entity_raw();
    return res;
}

inline core::Ptr<ConfigurationMaterialCell> ConfigurationMaterialColumn::getCell(size_t rowIndex)
{
    core::Ptr<ConfigurationMaterialCell> res = getCell_raw(rowIndex);
    return res;
}

inline core::Ptr<ConfigurationMaterialCell> ConfigurationMaterialColumn::getCellByRowName(const std::string& rowName)
{
    core::Ptr<ConfigurationMaterialCell> res = getCellByRowName_raw(rowName.c_str());
    return res;
}

inline core::Ptr<ConfigurationMaterialCell> ConfigurationMaterialColumn::getCellByRowId(const std::string& rowId)
{
    core::Ptr<ConfigurationMaterialCell> res = getCellByRowId_raw(rowId.c_str());
    return res;
}

inline core::Ptr<ConfigurationMaterialTable> ConfigurationMaterialColumn::parentMaterialTable() const
{
    core::Ptr<ConfigurationMaterialTable> res = parentMaterialTable_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONMATERIALCOLUMN_API