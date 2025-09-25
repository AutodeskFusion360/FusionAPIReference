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
#include "ConfigurationCell.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONPROPERTYCELL_CPP__
# define ADSK_FUSION_CONFIGURATIONPROPERTYCELL_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONPROPERTYCELL_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONPROPERTYCELL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationPropertyColumn;
}}

namespace adsk { namespace fusion {

/// Represents an individual cell within a configuration table that defines
/// the value of a property.
class ConfigurationPropertyCell : public ConfigurationCell {
public:

    /// Returns the column this cell is in.
    core::Ptr<ConfigurationPropertyColumn> parentColumn() const;

    /// Gets and sets the value of the property associated with the parent column of this cell.
    std::string value() const;
    bool value(const std::string& value);

    ADSK_FUSION_CONFIGURATIONPROPERTYCELL_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONPROPERTYCELL_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONPROPERTYCELL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONPROPERTYCELL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationPropertyColumn* parentColumn_raw() const = 0;
    virtual char* value_raw() const = 0;
    virtual bool value_raw(const char* value) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationPropertyColumn> ConfigurationPropertyCell::parentColumn() const
{
    core::Ptr<ConfigurationPropertyColumn> res = parentColumn_raw();
    return res;
}

inline std::string ConfigurationPropertyCell::value() const
{
    std::string res;

    char* p= value_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ConfigurationPropertyCell::value(const std::string& value)
{
    return value_raw(value.c_str());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONPROPERTYCELL_API