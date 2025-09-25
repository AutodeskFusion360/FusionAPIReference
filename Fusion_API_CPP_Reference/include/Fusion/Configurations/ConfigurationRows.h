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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONROWS_CPP__
# define ADSK_FUSION_CONFIGURATIONROWS_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONROWS_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONROWS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationRow;
}}

namespace adsk { namespace fusion {

/// Returns a collection of the rows in the table. The header row is not included in this list.
class ConfigurationRows : public core::Base {
public:

    /// A method that returns the specified row using an index into the collection. These are returned
    /// in the same order as in the table; the first row is the default row.
    /// index : The index of the row to return, where the first row is index 0. The headers do not count as a row.
    /// Returns the specified row or null if an invalid index was specified.
    core::Ptr<ConfigurationRow> item(size_t index) const;

    /// A method that returns the row with the specified ID.
    /// id : The id of the row to return.
    /// Returns the specified row or null if a row with the specified ID does not exist.
    core::Ptr<ConfigurationRow> itemById(const std::string& id) const;

    /// A method that returns the row with the specified name.
    /// name : The name of the row to return.
    /// Returns the specified row or null if the named row does not exist.
    core::Ptr<ConfigurationRow> itemByName(const std::string& name) const;

    /// Returns the number of rows in the table where the header row is not included.
    size_t count() const;

    /// Adds a new row to the table.  For the top table, this creates a new configuration.
    /// For theme tables, this creates a new theme. The new row is added to the bottom of the table,
    /// and the cell values are copied from the row above it. You can also use the ConfigurationRow.copy
    /// method to create a new row by copying any existing row.
    /// name : The name of the new row. An empty string can be provided, which will cause Fusion to use a
    /// default naming scheme to create a name.
    /// Returns the newly created row.
    core::Ptr<ConfigurationRow> add(const std::string& name);

    typedef ConfigurationRow iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CONFIGURATIONROWS_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONROWS_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONROWS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONROWS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationRow* item_raw(size_t index) const = 0;
    virtual ConfigurationRow* itemById_raw(const char* id) const = 0;
    virtual ConfigurationRow* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ConfigurationRow* add_raw(const char* name) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationRow> ConfigurationRows::item(size_t index) const
{
    core::Ptr<ConfigurationRow> res = item_raw(index);
    return res;
}

inline core::Ptr<ConfigurationRow> ConfigurationRows::itemById(const std::string& id) const
{
    core::Ptr<ConfigurationRow> res = itemById_raw(id.c_str());
    return res;
}

inline core::Ptr<ConfigurationRow> ConfigurationRows::itemByName(const std::string& name) const
{
    core::Ptr<ConfigurationRow> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t ConfigurationRows::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ConfigurationRow> ConfigurationRows::add(const std::string& name)
{
    core::Ptr<ConfigurationRow> res = add_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void ConfigurationRows::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONROWS_API