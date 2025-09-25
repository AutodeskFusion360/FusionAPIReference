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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONCOLUMN_CPP__
# define ADSK_FUSION_CONFIGURATIONCOLUMN_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONCOLUMN_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONCOLUMN_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Represents a column in a configuration table. This is the base class for the more specific
/// column types. The "Name" column is not considered a standard column but is a value associated
/// with each table row.
class ConfigurationColumn : public core::Base {
public:

    /// The title of this column. In a top table, this can only be edited for suppression,
    /// visibility, parameter, and theme table columns. It behaves as read-only for all other types.
    /// In a theme table, the title of all the columns can be modified except for the column that
    /// represents the root component for materials and appearances.
    /// 
    /// If the table was obtained from a DataFile, this property behaves as read-only for all the columns.
    std::string title() const;
    bool title(const std::string& value);

    /// The index position of this column within the table. The first column is at index 0 and
    /// does not include the "Name" column.
    size_t index() const;

    /// The id of the column. This is constant and cannot be changed by the user.
    std::string id() const;

    /// Deletes this column from the table. Property columns cannot be deleted. If the table was
    /// obtained from a DataFile, this method will fail.
    /// Returns true if the deletion was successful.
    bool deleteMe();

    /// Returns the number of rows in this column.
    size_t rowCount() const;

    ADSK_FUSION_CONFIGURATIONCOLUMN_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONCOLUMN_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONCOLUMN_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONCOLUMN_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* title_raw() const = 0;
    virtual bool title_raw(const char* value) = 0;
    virtual size_t index_raw() const = 0;
    virtual char* id_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual size_t rowCount_raw() const = 0;
    virtual void placeholderConfigurationColumn0() {}
    virtual void placeholderConfigurationColumn1() {}
    virtual void placeholderConfigurationColumn2() {}
    virtual void placeholderConfigurationColumn3() {}
    virtual void placeholderConfigurationColumn4() {}
    virtual void placeholderConfigurationColumn5() {}
    virtual void placeholderConfigurationColumn6() {}
    virtual void placeholderConfigurationColumn7() {}
    virtual void placeholderConfigurationColumn8() {}
    virtual void placeholderConfigurationColumn9() {}
    virtual void placeholderConfigurationColumn10() {}
    virtual void placeholderConfigurationColumn11() {}
    virtual void placeholderConfigurationColumn12() {}
    virtual void placeholderConfigurationColumn13() {}
    virtual void placeholderConfigurationColumn14() {}
    virtual void placeholderConfigurationColumn15() {}
    virtual void placeholderConfigurationColumn16() {}
    virtual void placeholderConfigurationColumn17() {}
    virtual void placeholderConfigurationColumn18() {}
    virtual void placeholderConfigurationColumn19() {}
    virtual void placeholderConfigurationColumn20() {}
    virtual void placeholderConfigurationColumn21() {}
    virtual void placeholderConfigurationColumn22() {}
    virtual void placeholderConfigurationColumn23() {}
    virtual void placeholderConfigurationColumn24() {}
    virtual void placeholderConfigurationColumn25() {}
};

// Inline wrappers

inline std::string ConfigurationColumn::title() const
{
    std::string res;

    char* p= title_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ConfigurationColumn::title(const std::string& value)
{
    return title_raw(value.c_str());
}

inline size_t ConfigurationColumn::index() const
{
    size_t res = index_raw();
    return res;
}

inline std::string ConfigurationColumn::id() const
{
    std::string res;

    char* p= id_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ConfigurationColumn::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline size_t ConfigurationColumn::rowCount() const
{
    size_t res = rowCount_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONCOLUMN_API