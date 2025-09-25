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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMNS_CPP__
# define ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMNS_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMNS_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMNS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationAppearanceColumn;
}}

namespace adsk { namespace fusion {

/// Provides access to the columns in an appearance table. This collection can be empty when no
/// columns have been created. When the table is empty, it is not displayed in the user interface,
/// and adding a column causes the table to be displayed.
class ConfigurationAppearanceColumns : public core::Base {
public:

    /// A method that returns the specified column using an index into the collection.
    /// These are returned in the same order as they appear in the table.
    /// index : The index of the column to return, where the first column is index 0. The name column is not included.
    /// Returns the specified column or null if an invalid index was specified.
    core::Ptr<ConfigurationAppearanceColumn> item(size_t index) const;

    /// A method that returns the column with the specified ID.
    /// id : The id of the column to return.
    /// Returns the specified column or null if a column with the specified ID does not exist.
    core::Ptr<ConfigurationAppearanceColumn> itemById(const std::string& id) const;

    /// Returns the number of columns in the table where the name column is not included.
    size_t count() const;

    /// Adds a new column to the appearance table. If you are adding the first column to the table and
    /// it is anything other than the root component, an additional column for the root component will
    /// automatically be created as the first column.
    /// entity : The root component, occurrence, or body whose appearance will be controlled by this column.
    /// Returns the newly created ConfigurationAppearanceColumn object or null if it fails.
    core::Ptr<ConfigurationAppearanceColumn> add(const core::Ptr<core::Base>& entity);

    typedef ConfigurationAppearanceColumn iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMNS_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMNS_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMNS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMNS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationAppearanceColumn* item_raw(size_t index) const = 0;
    virtual ConfigurationAppearanceColumn* itemById_raw(const char* id) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ConfigurationAppearanceColumn* add_raw(core::Base* entity) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationAppearanceColumn> ConfigurationAppearanceColumns::item(size_t index) const
{
    core::Ptr<ConfigurationAppearanceColumn> res = item_raw(index);
    return res;
}

inline core::Ptr<ConfigurationAppearanceColumn> ConfigurationAppearanceColumns::itemById(const std::string& id) const
{
    core::Ptr<ConfigurationAppearanceColumn> res = itemById_raw(id.c_str());
    return res;
}

inline size_t ConfigurationAppearanceColumns::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ConfigurationAppearanceColumn> ConfigurationAppearanceColumns::add(const core::Ptr<core::Base>& entity)
{
    core::Ptr<ConfigurationAppearanceColumn> res = add_raw(entity.get());
    return res;
}

template <class OutputIterator> inline void ConfigurationAppearanceColumns::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONAPPEARANCECOLUMNS_API