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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONROW_CPP__
# define ADSK_FUSION_CONFIGURATIONROW_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONROW_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONROW_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationCell;
    class ConfigurationFuture;
    class ConfigurationTable;
}}

namespace adsk { namespace fusion {

/// Represents a row in a configuration table. The header row is not considered a standard row but
/// is information associated with each column.
/// 
/// For a top table, each row represents a configuration, and for a theme table, each row represents a theme.
class ConfigurationRow : public core::Base {
public:

    /// Gets the unique ID that identifies this row. The ID remains constant for this row as
    /// long as the row exists. This is different than the name, which the user can change.
    std::string id() const;

    /// Gets and sets the name of this row. Names must be unique with respect to other rows in this
    /// table. If you specify a name that exists, Fusion will append a counter to ensure uniqueness.
    /// For example, if "Small" is already used and you name another row "Small", you will end up with "Small (1)".
    std::string name() const;
    bool name(const std::string& value);

    /// The index position of this row within the table. The first row is at index 0 and does not include the header row.
    size_t index() const;

    /// Deletes this row from the table. The first row of the top table cannot be deleted, and this method will fail.
    /// Returns true if the deletion was successful.
    bool deleteMe();

    /// Causes this row to become the active row in the table.
    /// Returns true if the activation was successful.
    bool activate();

    /// Gets the cell in this row at the specified column index. The first column has an index of 0 and does not include the name column.
    /// columnIndex : The index of the column to return the cell for. The first column has an index 0.
    /// Returns the specified cell if successful and null if an invalid index was specified.
    core::Ptr<ConfigurationCell> getCellByColumnIndex(size_t columnIndex);

    /// Gets the cell in this row at the column with the specified ID.
    /// columnId : The ID of the column the cell is in.
    /// Returns the specified cell if successful or null if a column with the specified ID does not exist.
    core::Ptr<ConfigurationCell> getCellByColumnId(const std::string& columnId);

    /// Creates a new row by copying this row.
    /// name : The name to use for the new row. An empty string indicates that Fusion should use the default naming scheme.
    /// 
    /// Names must be unique with respect to other rows in this table. If you specify a name that exists,
    /// Fusion will append a counter to ensure uniqueness. For example, if "Small" is already used and you name
    /// another row "Small", you will end up with "Small (1)".
    /// Returns the newly created row or null in the case of failure.
    core::Ptr<ConfigurationRow> copy(const std::string& name);

    /// Returns the configuration table this row is a member of.
    core::Ptr<ConfigurationTable> parentTable() const;

    /// Causes this row to be generated.
    /// Returns a future that can be used to determine when the generation is complete.
    /// Null is returned in the case where starting the generation fails.
    core::Ptr<ConfigurationFuture> generate();

    ADSK_FUSION_CONFIGURATIONROW_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONROW_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONROW_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONROW_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* id_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual size_t index_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual bool activate_raw() = 0;
    virtual ConfigurationCell* getCellByColumnIndex_raw(size_t columnIndex) = 0;
    virtual ConfigurationCell* getCellByColumnId_raw(const char* columnId) = 0;
    virtual ConfigurationRow* copy_raw(const char* name) = 0;
    virtual ConfigurationTable* parentTable_raw() const = 0;
    virtual ConfigurationFuture* generate_raw() = 0;
};

// Inline wrappers

inline std::string ConfigurationRow::id() const
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

inline std::string ConfigurationRow::name() const
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

inline bool ConfigurationRow::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline size_t ConfigurationRow::index() const
{
    size_t res = index_raw();
    return res;
}

inline bool ConfigurationRow::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool ConfigurationRow::activate()
{
    bool res = activate_raw();
    return res;
}

inline core::Ptr<ConfigurationCell> ConfigurationRow::getCellByColumnIndex(size_t columnIndex)
{
    core::Ptr<ConfigurationCell> res = getCellByColumnIndex_raw(columnIndex);
    return res;
}

inline core::Ptr<ConfigurationCell> ConfigurationRow::getCellByColumnId(const std::string& columnId)
{
    core::Ptr<ConfigurationCell> res = getCellByColumnId_raw(columnId.c_str());
    return res;
}

inline core::Ptr<ConfigurationRow> ConfigurationRow::copy(const std::string& name)
{
    core::Ptr<ConfigurationRow> res = copy_raw(name.c_str());
    return res;
}

inline core::Ptr<ConfigurationTable> ConfigurationRow::parentTable() const
{
    core::Ptr<ConfigurationTable> res = parentTable_raw();
    return res;
}

inline core::Ptr<ConfigurationFuture> ConfigurationRow::generate()
{
    core::Ptr<ConfigurationFuture> res = generate_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONROW_API