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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMNS_CPP__
# define ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMNS_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMNS_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMNS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Component;
    class ConfigurationSheetMetalRuleColumn;
}}

namespace adsk { namespace fusion {

/// Provides access to the columns in a sheet metal rule table. This collection can be empty when
/// no columns have been created. When the table is empty, it is not displayed in the user interface,
/// and adding a column causes the table to be displayed.
class ConfigurationSheetMetalRuleColumns : public core::Base {
public:

    /// A method that returns the specified column using an index into the collection.
    /// These are returned in the same order as they appear in the table.
    /// index : The index of the column to return, where the first column is index 0. The name column is not included.
    /// Returns the specified column or null if an invalid index was specified.
    core::Ptr<ConfigurationSheetMetalRuleColumn> item(size_t index) const;

    /// A method that returns the column with the specified ID.
    /// id : The id of the column to return.
    /// Returns the specified column or null if a column with the specified ID does not exist.
    core::Ptr<ConfigurationSheetMetalRuleColumn> itemById(const std::string& id) const;

    /// Returns the number of columns in the table where the name column is not included.
    size_t count() const;

    /// Adds a new column to the sheet metal rule table.
    /// component : The component whose active sheet metal rule will be controlled by this column.
    /// Returns the newly created ConfigurationPlasticRuleColumn object or null if it fails.
    core::Ptr<ConfigurationSheetMetalRuleColumn> add(const core::Ptr<Component>& component);

    typedef ConfigurationSheetMetalRuleColumn iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMNS_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMNS_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMNS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMNS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationSheetMetalRuleColumn* item_raw(size_t index) const = 0;
    virtual ConfigurationSheetMetalRuleColumn* itemById_raw(const char* id) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ConfigurationSheetMetalRuleColumn* add_raw(Component* component) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationSheetMetalRuleColumn> ConfigurationSheetMetalRuleColumns::item(size_t index) const
{
    core::Ptr<ConfigurationSheetMetalRuleColumn> res = item_raw(index);
    return res;
}

inline core::Ptr<ConfigurationSheetMetalRuleColumn> ConfigurationSheetMetalRuleColumns::itemById(const std::string& id) const
{
    core::Ptr<ConfigurationSheetMetalRuleColumn> res = itemById_raw(id.c_str());
    return res;
}

inline size_t ConfigurationSheetMetalRuleColumns::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ConfigurationSheetMetalRuleColumn> ConfigurationSheetMetalRuleColumns::add(const core::Ptr<Component>& component)
{
    core::Ptr<ConfigurationSheetMetalRuleColumn> res = add_raw(component.get());
    return res;
}

template <class OutputIterator> inline void ConfigurationSheetMetalRuleColumns::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONSHEETMETALRULECOLUMNS_API