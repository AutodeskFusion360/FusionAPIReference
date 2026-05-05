//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCOLUMN_CPP__
# define ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCOLUMN_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCOLUMN_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCOLUMN_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationInsertStandardDesignCell;
    class ConfigurationReplaceDesigns;
    class ConfigurationTable;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// This object represents a column in the table that controls which design
/// should be referenced by an occurrence. The column contains a list of
/// designs that have been specified for that column. One of the designs is
/// specified for each cell in the column. That design will be referenced
/// by the occurrence when the row that cell is in is active.
class ConfigurationInsertStandardDesignColumn : public ConfigurationColumn {
public:

    /// Returns the occurrence being controlled by this column.
    /// 
    /// This property returns null when the table being queried was obtained from a DataFile object.
    core::Ptr<Occurrence> occurrence() const;

    /// Provides access to the list of replace designs that have been defined for this column. Using
    /// the returned collection you can define new ConfigurationReplaceDesign objects. Use the
    /// cells in the column to specify which one of the defined replace designs is used for a specific row.
    core::Ptr<ConfigurationReplaceDesigns> replaceDesigns() const;

    /// Gets the cell in this column at the specified row. The first row has an
    /// index of 0 and does not include the header row.
    /// rowIndex : The index of the row to return the cell for. The first row has an index of 0.
    /// Returns the specified cell if successful and null if an invalid index was specified.
    core::Ptr<ConfigurationInsertStandardDesignCell> getCell(size_t rowIndex);

    /// Gets the cell in this column at the row specified by its name.
    /// rowName : The name of the row to return the cell for.
    /// Returns the specified cell if successful and null if the name is not found.
    core::Ptr<ConfigurationInsertStandardDesignCell> getCellByRowName(const std::string& rowName);

    /// Gets the cell in this column at the row specified by its ID.
    /// rowId : The ID of the row to return the cell for.
    /// Returns the specified cell if successful and null if the id is not found.
    core::Ptr<ConfigurationInsertStandardDesignCell> getCellByRowId(const std::string& rowId);

    /// Returns the parent table this column is in.
    core::Ptr<ConfigurationTable> parentTable() const;

    ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCOLUMN_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCOLUMN_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCOLUMN_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCOLUMN_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Occurrence* occurrence_raw() const = 0;
    virtual ConfigurationReplaceDesigns* replaceDesigns_raw() const = 0;
    virtual ConfigurationInsertStandardDesignCell* getCell_raw(size_t rowIndex) = 0;
    virtual ConfigurationInsertStandardDesignCell* getCellByRowName_raw(const char* rowName) = 0;
    virtual ConfigurationInsertStandardDesignCell* getCellByRowId_raw(const char* rowId) = 0;
    virtual ConfigurationTable* parentTable_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Occurrence> ConfigurationInsertStandardDesignColumn::occurrence() const
{
    core::Ptr<Occurrence> res = occurrence_raw();
    return res;
}

inline core::Ptr<ConfigurationReplaceDesigns> ConfigurationInsertStandardDesignColumn::replaceDesigns() const
{
    core::Ptr<ConfigurationReplaceDesigns> res = replaceDesigns_raw();
    return res;
}

inline core::Ptr<ConfigurationInsertStandardDesignCell> ConfigurationInsertStandardDesignColumn::getCell(size_t rowIndex)
{
    core::Ptr<ConfigurationInsertStandardDesignCell> res = getCell_raw(rowIndex);
    return res;
}

inline core::Ptr<ConfigurationInsertStandardDesignCell> ConfigurationInsertStandardDesignColumn::getCellByRowName(const std::string& rowName)
{
    core::Ptr<ConfigurationInsertStandardDesignCell> res = getCellByRowName_raw(rowName.c_str());
    return res;
}

inline core::Ptr<ConfigurationInsertStandardDesignCell> ConfigurationInsertStandardDesignColumn::getCellByRowId(const std::string& rowId)
{
    core::Ptr<ConfigurationInsertStandardDesignCell> res = getCellByRowId_raw(rowId.c_str());
    return res;
}

inline core::Ptr<ConfigurationTable> ConfigurationInsertStandardDesignColumn::parentTable() const
{
    core::Ptr<ConfigurationTable> res = parentTable_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCOLUMN_API