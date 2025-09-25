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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMN_CPP__
# define ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMN_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMN_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMN_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationAppearanceCell;
    class ConfigurationAppearanceTable;
}}

namespace adsk { namespace fusion {

/// Represents an appearance column in the appearance table. This defines the appearance to
/// use for a specific component.
class ConfigurationAppearanceColumn : public ConfigurationColumn {
public:

    /// Returns the Component or BRepBody being controlled by this column. This property returns
    /// null when the table being queried was obtained from a DataFile object.
    core::Ptr<core::Base> entity() const;

    /// Gets the cell in this column at the specified row. The first row has an index of 0
    /// and does not include the header row.
    /// rowIndex : The index of the row to return the cell for. The first row has an index of 0.
    /// Returns the specified cell if successful and null if an invalid index was specified.
    core::Ptr<ConfigurationAppearanceCell> getCell(size_t rowIndex);

    /// Gets the cell in this column at the row specified by its name.
    /// rowName : The name of the row to return the cell for.
    /// Returns the specified cell if successful and null if the name is not found.
    core::Ptr<ConfigurationAppearanceCell> getCellByRowName(const std::string& rowName);

    /// Gets the cell in this column at the row specified by its ID.
    /// rowId : The ID of the row to return the cell for.
    /// Returns the specified cell if successful and null if the id is not found.
    core::Ptr<ConfigurationAppearanceCell> getCellByRowId(const std::string& rowId);

    /// Returns the parent appearance table this column is in.
    core::Ptr<ConfigurationAppearanceTable> parentAppearanceTable() const;

    ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMN_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMN_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMN_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMN_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* entity_raw() const = 0;
    virtual ConfigurationAppearanceCell* getCell_raw(size_t rowIndex) = 0;
    virtual ConfigurationAppearanceCell* getCellByRowName_raw(const char* rowName) = 0;
    virtual ConfigurationAppearanceCell* getCellByRowId_raw(const char* rowId) = 0;
    virtual ConfigurationAppearanceTable* parentAppearanceTable_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ConfigurationAppearanceColumn::entity() const
{
    core::Ptr<core::Base> res = entity_raw();
    return res;
}

inline core::Ptr<ConfigurationAppearanceCell> ConfigurationAppearanceColumn::getCell(size_t rowIndex)
{
    core::Ptr<ConfigurationAppearanceCell> res = getCell_raw(rowIndex);
    return res;
}

inline core::Ptr<ConfigurationAppearanceCell> ConfigurationAppearanceColumn::getCellByRowName(const std::string& rowName)
{
    core::Ptr<ConfigurationAppearanceCell> res = getCellByRowName_raw(rowName.c_str());
    return res;
}

inline core::Ptr<ConfigurationAppearanceCell> ConfigurationAppearanceColumn::getCellByRowId(const std::string& rowId)
{
    core::Ptr<ConfigurationAppearanceCell> res = getCellByRowId_raw(rowId.c_str());
    return res;
}

inline core::Ptr<ConfigurationAppearanceTable> ConfigurationAppearanceColumn::parentAppearanceTable() const
{
    core::Ptr<ConfigurationAppearanceTable> res = parentAppearanceTable_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMN_API