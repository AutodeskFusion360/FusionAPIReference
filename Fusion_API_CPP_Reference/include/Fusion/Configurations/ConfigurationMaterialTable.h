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
#include "ConfigurationTable.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONMATERIALTABLE_CPP__
# define ADSK_FUSION_CONFIGURATIONMATERIALTABLE_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONMATERIALTABLE_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONMATERIALTABLE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationMaterialColumns;
    class ConfigurationThemeColumn;
}}

namespace adsk { namespace fusion {

/// Represents a configuration table that defines materials assigned to bodies and components.
class ConfigurationMaterialTable : public ConfigurationTable {
public:

    /// Returns the collection that provides access to the columns in this table.
    core::Ptr<ConfigurationMaterialColumns> columns() const;

    /// Clears the content of the material table, removes the reference from the top table,
    /// and hides it in the user interface.
    /// Returns true if successful.
    bool clear();

    /// Returns the column in the top table that references this material table.
    core::Ptr<ConfigurationThemeColumn> parentTableColumn() const;

    /// Returns the name of the table as seen in the user interface.
    std::string name() const;

    ADSK_FUSION_CONFIGURATIONMATERIALTABLE_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONMATERIALTABLE_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONMATERIALTABLE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONMATERIALTABLE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationMaterialColumns* columns_raw() const = 0;
    virtual bool clear_raw() = 0;
    virtual ConfigurationThemeColumn* parentTableColumn_raw() const = 0;
    virtual char* name_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationMaterialColumns> ConfigurationMaterialTable::columns() const
{
    core::Ptr<ConfigurationMaterialColumns> res = columns_raw();
    return res;
}

inline bool ConfigurationMaterialTable::clear()
{
    bool res = clear_raw();
    return res;
}

inline core::Ptr<ConfigurationThemeColumn> ConfigurationMaterialTable::parentTableColumn() const
{
    core::Ptr<ConfigurationThemeColumn> res = parentTableColumn_raw();
    return res;
}

inline std::string ConfigurationMaterialTable::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONMATERIALTABLE_API