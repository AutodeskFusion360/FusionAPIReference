//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include "ConfigurationCell.h"
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

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
    /// is active. This works for both numeric and text parameters. This property behaves as read-only when
    /// the table is obtained from a DataFile object.
    std::string expression() const;
    bool expression(const std::string& value);

    /// Gets and sets the real value (a double) of the parameter in database units.
    /// Setting this property will overwrite any existing expression. This property behaves as read-only
    /// when the table is obtained from a DataFile object.
    /// This property is only valid for numeric parameters and will fail for text parameters.
    /// You can determine the value type of the parameter by using the valueType property.
    /// Use the textValue property to get and set the value of text parameters.
    double value() const;
    bool value(double value);

    /// Gets and sets the text value of the parameter when it is a text parameter. This can
    /// be determined by checking the valueType property. Setting this value will cause the
    /// current expression to be overwritten. This property behaves as read-only when the
    /// table is obtained from a DataFile object.
    std::string textValue() const;
    bool textValue(const std::string& value);

    /// Returns the type of value this parameter cell is. For a numeric parameter, you can
    /// get the value using the value property. For a text parameter, you can get the
    /// value using the textValue property.
    ParameterValueTypes valueType() const;

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
    virtual char* textValue_raw() const = 0;
    virtual bool textValue_raw(const char* value) = 0;
    virtual ParameterValueTypes valueType_raw() const = 0;
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

inline std::string ConfigurationParameterCell::textValue() const
{
    std::string res;

    char* p= textValue_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ConfigurationParameterCell::textValue(const std::string& value)
{
    return textValue_raw(value.c_str());
}

inline ParameterValueTypes ConfigurationParameterCell::valueType() const
{
    ParameterValueTypes res = valueType_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONPARAMETERCELL_API