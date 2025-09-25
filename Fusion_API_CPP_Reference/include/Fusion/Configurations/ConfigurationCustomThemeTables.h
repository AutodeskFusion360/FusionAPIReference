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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLES_CPP__
# define ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLES_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLES_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationColumn;
    class ConfigurationCustomThemeTable;
}}

namespace adsk { namespace fusion {

/// Provides access to the custom theme tables associated with a configuration table and provides the
/// functionality to create new custom theme tables.
class ConfigurationCustomThemeTables : public core::Base {
public:

    /// Creates a new custom theme table using the specified columns.
    /// columns : An array of ConfigurationColumn objects used to create a new custom theme table. The columns
    /// must exist within the top configuration table, and they cannot include any ConfigurationThemeColumn,
    /// ConfigurationPropertyColumn, ConfigurationAppearanceColumn, ConfigurationMaterialColumn, ConfigurationPlasticRuleColumn,
    /// or ConfigurationSheetMetalRuleColumn objects. The specified columns will be removed from the main table,
    /// and a new ConfigurationThemeColumn will be created in the top table to reference the newly created custom theme table.
    /// Returns the newly created ConfigurationCustomThemeTable or null if the creation fails.
    core::Ptr<ConfigurationCustomThemeTable> add(const std::vector<core::Ptr<ConfigurationColumn>>& columns);

    /// A method that returns the specified custom theme table using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ConfigurationCustomThemeTable> item(size_t index) const;

    /// Returns the number of custom theme tables associated with the top table.
    size_t count() const;

    typedef ConfigurationCustomThemeTable iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLES_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLES_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationCustomThemeTable* add_raw(ConfigurationColumn** columns, size_t columns_size) = 0;
    virtual ConfigurationCustomThemeTable* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationCustomThemeTable> ConfigurationCustomThemeTables::add(const std::vector<core::Ptr<ConfigurationColumn>>& columns)
{
    ConfigurationColumn** columns_ = new ConfigurationColumn*[columns.size()];
    for(size_t i=0; i<columns.size(); ++i)
        columns_[i] = columns[i].get();

    core::Ptr<ConfigurationCustomThemeTable> res = add_raw(columns_, columns.size());
    delete[] columns_;
    return res;
}

inline core::Ptr<ConfigurationCustomThemeTable> ConfigurationCustomThemeTables::item(size_t index) const
{
    core::Ptr<ConfigurationCustomThemeTable> res = item_raw(index);
    return res;
}

inline size_t ConfigurationCustomThemeTables::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void ConfigurationCustomThemeTables::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONCUSTOMTHEMETABLES_API