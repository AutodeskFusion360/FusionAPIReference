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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONINSERTCOLUMN_CPP__
# define ADSK_FUSION_CONFIGURATIONINSERTCOLUMN_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONINSERTCOLUMN_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONINSERTCOLUMN_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationInsertCell;
    class ConfigurationTable;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Represents a column where a configured design has been inserted in this design.
class ConfigurationInsertColumn : public ConfigurationColumn {
public:

    /// Returns the occurrence that is associated with this configuration insertion.
    /// 
    /// This property returns null when the table being queried was obtained from a DataFile object.
    core::Ptr<Occurrence> occurrence() const;

    /// Gets the cell in this column at the specified row. The first row has an index of 0 and does not include the header row.
    /// rowIndex : The index of the row to return the cell for. The first row has an index of 0.
    /// Returns the specified cell if successful and null if an invalid index was specified.
    core::Ptr<ConfigurationInsertCell> getCell(size_t rowIndex);

    /// Gets the cell in this column at the row specified by its name.
    /// rowName : The name of the row to return the cell for.
    /// Returns the specified cell if successful and null if the name is not found.
    core::Ptr<ConfigurationInsertCell> getCellByRowName(const std::string& rowName);

    /// Gets the cell in this column at the row specified by its ID.
    /// rowId : The ID of the row to return the cell for.
    /// Returns the specified cell if successful and null if the name is not found.
    core::Ptr<ConfigurationInsertCell> getCellByRowId(const std::string& rowId);

    /// Returns the parent table, either top or custom theme table, this column is in.
    core::Ptr<ConfigurationTable> parentTable() const;

    ADSK_FUSION_CONFIGURATIONINSERTCOLUMN_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONINSERTCOLUMN_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONINSERTCOLUMN_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONINSERTCOLUMN_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Occurrence* occurrence_raw() const = 0;
    virtual ConfigurationInsertCell* getCell_raw(size_t rowIndex) = 0;
    virtual ConfigurationInsertCell* getCellByRowName_raw(const char* rowName) = 0;
    virtual ConfigurationInsertCell* getCellByRowId_raw(const char* rowId) = 0;
    virtual ConfigurationTable* parentTable_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Occurrence> ConfigurationInsertColumn::occurrence() const
{
    core::Ptr<Occurrence> res = occurrence_raw();
    return res;
}

inline core::Ptr<ConfigurationInsertCell> ConfigurationInsertColumn::getCell(size_t rowIndex)
{
    core::Ptr<ConfigurationInsertCell> res = getCell_raw(rowIndex);
    return res;
}

inline core::Ptr<ConfigurationInsertCell> ConfigurationInsertColumn::getCellByRowName(const std::string& rowName)
{
    core::Ptr<ConfigurationInsertCell> res = getCellByRowName_raw(rowName.c_str());
    return res;
}

inline core::Ptr<ConfigurationInsertCell> ConfigurationInsertColumn::getCellByRowId(const std::string& rowId)
{
    core::Ptr<ConfigurationInsertCell> res = getCellByRowId_raw(rowId.c_str());
    return res;
}

inline core::Ptr<ConfigurationTable> ConfigurationInsertColumn::parentTable() const
{
    core::Ptr<ConfigurationTable> res = parentTable_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONINSERTCOLUMN_API