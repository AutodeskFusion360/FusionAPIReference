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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONTABLE_CPP__
# define ADSK_FUSION_CONFIGURATIONTABLE_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONTABLE_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONTABLE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationCell;
    class ConfigurationRows;
}}

namespace adsk { namespace fusion {

/// The base class of all configuration tables.
class ConfigurationTable : public core::Base {
public:

    /// Returns the unique ID of this table.
    std::string id() const;

    /// Returns the rows (configurations) defined for this table and provides the functionality to create new rows.
    core::Ptr<ConfigurationRows> rows() const;

    /// Returns the cell at the specified row and column.
    /// column : The index of the column the cell is in. An index of 0 is the first column and does not include the name column.
    /// row : The index of the row the cell is in. An index of 0 is the first row and does not include the header row.
    core::Ptr<ConfigurationCell> getCell(size_t column, size_t row);

    ADSK_FUSION_CONFIGURATIONTABLE_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONTABLE_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONTABLE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONTABLE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* id_raw() const = 0;
    virtual ConfigurationRows* rows_raw() const = 0;
    virtual ConfigurationCell* getCell_raw(size_t column, size_t row) = 0;
    virtual void placeholderConfigurationTable0() {}
    virtual void placeholderConfigurationTable1() {}
    virtual void placeholderConfigurationTable2() {}
    virtual void placeholderConfigurationTable3() {}
    virtual void placeholderConfigurationTable4() {}
    virtual void placeholderConfigurationTable5() {}
    virtual void placeholderConfigurationTable6() {}
    virtual void placeholderConfigurationTable7() {}
    virtual void placeholderConfigurationTable8() {}
    virtual void placeholderConfigurationTable9() {}
    virtual void placeholderConfigurationTable10() {}
    virtual void placeholderConfigurationTable11() {}
    virtual void placeholderConfigurationTable12() {}
    virtual void placeholderConfigurationTable13() {}
    virtual void placeholderConfigurationTable14() {}
    virtual void placeholderConfigurationTable15() {}
    virtual void placeholderConfigurationTable16() {}
    virtual void placeholderConfigurationTable17() {}
    virtual void placeholderConfigurationTable18() {}
    virtual void placeholderConfigurationTable19() {}
    virtual void placeholderConfigurationTable20() {}
    virtual void placeholderConfigurationTable21() {}
    virtual void placeholderConfigurationTable22() {}
    virtual void placeholderConfigurationTable23() {}
    virtual void placeholderConfigurationTable24() {}
    virtual void placeholderConfigurationTable25() {}
    virtual void placeholderConfigurationTable26() {}
    virtual void placeholderConfigurationTable27() {}
    virtual void placeholderConfigurationTable28() {}
};

// Inline wrappers

inline std::string ConfigurationTable::id() const
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

inline core::Ptr<ConfigurationRows> ConfigurationTable::rows() const
{
    core::Ptr<ConfigurationRows> res = rows_raw();
    return res;
}

inline core::Ptr<ConfigurationCell> ConfigurationTable::getCell(size_t column, size_t row)
{
    core::Ptr<ConfigurationCell> res = getCell_raw(column, row);
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONTABLE_API