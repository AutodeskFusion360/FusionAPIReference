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
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONFEATUREASPECTCOLUMN_CPP__
# define ADSK_FUSION_CONFIGURATIONFEATUREASPECTCOLUMN_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONFEATUREASPECTCOLUMN_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONFEATUREASPECTCOLUMN_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationCell;
    class ConfigurationTable;
}}

namespace adsk { namespace fusion {

/// Represents a feature aspect column in a configuration table. Feature aspects are properties
/// of a feature that are unique to a particular type of feature. This includes various thread
/// and joint settings.
class ConfigurationFeatureAspectColumn : public ConfigurationColumn {
public:

    /// Returns the feature being controlled by this column.
    /// 
    /// This property returns null when the table being queried was obtained from a DataFile object.
    core::Ptr<core::Base> feature() const;

    /// Gets the type of feature aspect this column is controlling.
    ConfigurationFeatureAspectTypes aspectType() const;

    /// Gets the cell in this column at the specified row. Depending on the type of data in the
    /// cells within the column a ConfigurationFeatureAspectBooleanCell or ConfigurationFeatureAspectStringCell
    /// will be returned. The first row has an index of 0 and does not include the header row.
    /// rowIndex : The index of the row to return the cell for. The first row has an index of 0.
    /// Returns the specified cell if successful and null if an invalid index was specified.
    core::Ptr<ConfigurationCell> getCell(size_t rowIndex);

    /// Gets the cell in this column at the row specified by its name. Depending on the type of data in the
    /// cells within the column a ConfigurationFeatureAspectBooleanCell or ConfigurationFeatureAspectStringCell
    /// will be returned.
    /// rowName : The name of the row to return the cell for.
    /// Returns the specified cell if successful and null if the name is not found.
    core::Ptr<ConfigurationCell> getCellByRowName(const std::string& rowName);

    /// This method returns the cell in this column at the row identified by its ID. Depending on the type of data in the
    /// cells within the column, a ConfigurationFeatureAspectBooleanCell or ConfigurationFeatureAspectStringCell will be returned.
    /// rowId : The ID of the row to return the cell for.
    /// Returns the specified cell if successful and null if the id is not found.
    core::Ptr<ConfigurationCell> getCellByRowId(const std::string& rowId);

    /// This property returns the parent table, either the top or custom theme table this column is in.
    core::Ptr<ConfigurationTable> parentTable() const;

    ADSK_FUSION_CONFIGURATIONFEATUREASPECTCOLUMN_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONFEATUREASPECTCOLUMN_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONFEATUREASPECTCOLUMN_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONFEATUREASPECTCOLUMN_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* feature_raw() const = 0;
    virtual ConfigurationFeatureAspectTypes aspectType_raw() const = 0;
    virtual ConfigurationCell* getCell_raw(size_t rowIndex) = 0;
    virtual ConfigurationCell* getCellByRowName_raw(const char* rowName) = 0;
    virtual ConfigurationCell* getCellByRowId_raw(const char* rowId) = 0;
    virtual ConfigurationTable* parentTable_raw() const = 0;
    virtual void placeholderConfigurationFeatureAspectColumn0() {}
    virtual void placeholderConfigurationFeatureAspectColumn1() {}
    virtual void placeholderConfigurationFeatureAspectColumn2() {}
    virtual void placeholderConfigurationFeatureAspectColumn3() {}
    virtual void placeholderConfigurationFeatureAspectColumn4() {}
    virtual void placeholderConfigurationFeatureAspectColumn5() {}
    virtual void placeholderConfigurationFeatureAspectColumn6() {}
    virtual void placeholderConfigurationFeatureAspectColumn7() {}
    virtual void placeholderConfigurationFeatureAspectColumn8() {}
    virtual void placeholderConfigurationFeatureAspectColumn9() {}
    virtual void placeholderConfigurationFeatureAspectColumn10() {}
    virtual void placeholderConfigurationFeatureAspectColumn11() {}
    virtual void placeholderConfigurationFeatureAspectColumn12() {}
    virtual void placeholderConfigurationFeatureAspectColumn13() {}
    virtual void placeholderConfigurationFeatureAspectColumn14() {}
    virtual void placeholderConfigurationFeatureAspectColumn15() {}
    virtual void placeholderConfigurationFeatureAspectColumn16() {}
    virtual void placeholderConfigurationFeatureAspectColumn17() {}
    virtual void placeholderConfigurationFeatureAspectColumn18() {}
    virtual void placeholderConfigurationFeatureAspectColumn19() {}
    virtual void placeholderConfigurationFeatureAspectColumn20() {}
    virtual void placeholderConfigurationFeatureAspectColumn21() {}
    virtual void placeholderConfigurationFeatureAspectColumn22() {}
    virtual void placeholderConfigurationFeatureAspectColumn23() {}
    virtual void placeholderConfigurationFeatureAspectColumn24() {}
    virtual void placeholderConfigurationFeatureAspectColumn25() {}
};

// Inline wrappers

inline core::Ptr<core::Base> ConfigurationFeatureAspectColumn::feature() const
{
    core::Ptr<core::Base> res = feature_raw();
    return res;
}

inline ConfigurationFeatureAspectTypes ConfigurationFeatureAspectColumn::aspectType() const
{
    ConfigurationFeatureAspectTypes res = aspectType_raw();
    return res;
}

inline core::Ptr<ConfigurationCell> ConfigurationFeatureAspectColumn::getCell(size_t rowIndex)
{
    core::Ptr<ConfigurationCell> res = getCell_raw(rowIndex);
    return res;
}

inline core::Ptr<ConfigurationCell> ConfigurationFeatureAspectColumn::getCellByRowName(const std::string& rowName)
{
    core::Ptr<ConfigurationCell> res = getCellByRowName_raw(rowName.c_str());
    return res;
}

inline core::Ptr<ConfigurationCell> ConfigurationFeatureAspectColumn::getCellByRowId(const std::string& rowId)
{
    core::Ptr<ConfigurationCell> res = getCellByRowId_raw(rowId.c_str());
    return res;
}

inline core::Ptr<ConfigurationTable> ConfigurationFeatureAspectColumn::parentTable() const
{
    core::Ptr<ConfigurationTable> res = parentTable_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONFEATUREASPECTCOLUMN_API