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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONPARAMETERCOLUMN_CPP__
# define ADSK_FUSION_CONFIGURATIONPARAMETERCOLUMN_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONPARAMETERCOLUMN_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONPARAMETERCOLUMN_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationParameterCell;
    class ConfigurationTable;
    class Parameter;
}}

namespace adsk { namespace fusion {

/// Represents a parameter column in a top or custom theme configuration table.
class ConfigurationParameterColumn : public ConfigurationColumn {
public:

    /// Returns the parameter being controlled by this column.
    /// 
    /// This property returns null when the table being queried was obtained from a DataFile object.
    core::Ptr<Parameter> parameter() const;

    /// Gets the cell in this column at the specified row. The first row has an index of 0 and does not include the header row.
    /// rowIndex : The index of the row to return the cell for. The first row has an index of 0.
    /// Returns the specified cell if successful and null if an invalid index was specified.
    core::Ptr<ConfigurationParameterCell> getCell(size_t rowIndex);

    /// Gets the cell in this column at the row specified by its name.
    /// rowName : The name of the row to return the cell for.
    /// Returns the specified cell if successful and null if the name is not found.
    core::Ptr<ConfigurationParameterCell> getCellByRowName(const std::string& rowName);

    /// Gets the cell in this column at the row specified by its ID.
    /// rowId : The ID of the row to return the cell for.
    /// Returns the specified cell if successful and null if the id is not found.
    core::Ptr<ConfigurationParameterCell> getCellByRowId(const std::string& rowId);

    /// Returns the parent table, either top or custom theme table, this column is in.
    core::Ptr<ConfigurationTable> parentTable() const;

    ADSK_FUSION_CONFIGURATIONPARAMETERCOLUMN_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONPARAMETERCOLUMN_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONPARAMETERCOLUMN_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONPARAMETERCOLUMN_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Parameter* parameter_raw() const = 0;
    virtual ConfigurationParameterCell* getCell_raw(size_t rowIndex) = 0;
    virtual ConfigurationParameterCell* getCellByRowName_raw(const char* rowName) = 0;
    virtual ConfigurationParameterCell* getCellByRowId_raw(const char* rowId) = 0;
    virtual ConfigurationTable* parentTable_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Parameter> ConfigurationParameterColumn::parameter() const
{
    core::Ptr<Parameter> res = parameter_raw();
    return res;
}

inline core::Ptr<ConfigurationParameterCell> ConfigurationParameterColumn::getCell(size_t rowIndex)
{
    core::Ptr<ConfigurationParameterCell> res = getCell_raw(rowIndex);
    return res;
}

inline core::Ptr<ConfigurationParameterCell> ConfigurationParameterColumn::getCellByRowName(const std::string& rowName)
{
    core::Ptr<ConfigurationParameterCell> res = getCellByRowName_raw(rowName.c_str());
    return res;
}

inline core::Ptr<ConfigurationParameterCell> ConfigurationParameterColumn::getCellByRowId(const std::string& rowId)
{
    core::Ptr<ConfigurationParameterCell> res = getCellByRowId_raw(rowId.c_str());
    return res;
}

inline core::Ptr<ConfigurationTable> ConfigurationParameterColumn::parentTable() const
{
    core::Ptr<ConfigurationTable> res = parentTable_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONPARAMETERCOLUMN_API