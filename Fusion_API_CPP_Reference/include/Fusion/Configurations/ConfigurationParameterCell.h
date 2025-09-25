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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONPARAMETERCELL_CPP__
# define ADSK_FUSION_CONFIGURATIONPARAMETERCELL_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONPARAMETERCELL_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONPARAMETERCELL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationParameterColumn;
}}

namespace adsk { namespace fusion {

/// Represents a single cell within a configuration table that controls the value of a parameter.
/// Get the parent column to get the parameter being controlled.
class ConfigurationParameterCell : public ConfigurationCell {
public:

    /// Returns the column this cell is in. From the column, you can get the parameter object being controlled.
    core::Ptr<ConfigurationParameterColumn> parentColumn() const;

    /// Gets and sets the expression that defines the value of the associated parameter when the parent row
    /// is active. This property behaves as read-only when the table is obtained from a DataFile object.
    std::string expression() const;
    bool expression(const std::string& value);

    /// Gets and sets the value of the parameter in database units. You can use the units property of the associated
    /// Parameter object, which you can get from the column, to determine the type of units this parameter is
    /// defined in. Setting this property will overwrite any existing expression. This property behaves as read-only
    /// when the table is obtained from a DataFile object.
    double value() const;
    bool value(double value);

    ADSK_FUSION_CONFIGURATIONPARAMETERCELL_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONPARAMETERCELL_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONPARAMETERCELL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONPARAMETERCELL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationParameterColumn* parentColumn_raw() const = 0;
    virtual char* expression_raw() const = 0;
    virtual bool expression_raw(const char* value) = 0;
    virtual double value_raw() const = 0;
    virtual bool value_raw(double value) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationParameterColumn> ConfigurationParameterCell::parentColumn() const
{
    core::Ptr<ConfigurationParameterColumn> res = parentColumn_raw();
    return res;
}

inline std::string ConfigurationParameterCell::expression() const
{
    std::string res;

    char* p= expression_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ConfigurationParameterCell::expression(const std::string& value)
{
    return expression_raw(value.c_str());
}

inline double ConfigurationParameterCell::value() const
{
    double res = value_raw();
    return res;
}

inline bool ConfigurationParameterCell::value(double value)
{
    return value_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONPARAMETERCELL_API