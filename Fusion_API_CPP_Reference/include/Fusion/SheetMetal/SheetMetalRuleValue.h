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
# ifdef __COMPILING_ADSK_FUSION_SHEETMETALRULEVALUE_CPP__
# define ADSK_FUSION_SHEETMETALRULEVALUE_API XI_EXPORT
# else
# define ADSK_FUSION_SHEETMETALRULEVALUE_API
# endif
#else
# define ADSK_FUSION_SHEETMETALRULEVALUE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Used to get and set the current value of a value associated with a sheet metal rule. A value
/// can be gotten or set using a string or a double. A string can contain equations and unit specifiers
/// whereas a double defines the size in centimeters. In the user-interface, the user is always
/// setting the string expression. However, when programming it is typically more convenient to set
/// it using an explicit value. When the value is set using a double, Fusion creates an equivalent
/// expression.
class SheetMetalRuleValue : public core::Base {
public:

    /// Gets and sets the expression of the sheet metal rule value. This can be an
    /// equation that includes the name "Thickness" and can also include length unit
    /// specifiers. For example, a valid expression is "Thickness / 2 + 1 mm". If no
    /// units are specified, the unit is implied and uses the units associated with the rule
    /// which can be mm or inch. For example an expression of "3" will be 3 inches if the
    /// rule units are inches or 3 mm if the rule units are millimeters.
    std::string expression() const;
    bool expression(const std::string& value);

    /// Gets and sets the value of the sheet metal rule value in centimeters. Setting
    /// this value will create a new expression that is equivalent to the new value.
    double value() const;
    bool value(double value);

    ADSK_FUSION_SHEETMETALRULEVALUE_API static const char* classType();
    ADSK_FUSION_SHEETMETALRULEVALUE_API const char* objectType() const override;
    ADSK_FUSION_SHEETMETALRULEVALUE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SHEETMETALRULEVALUE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* expression_raw() const = 0;
    virtual bool expression_raw(const char* value) = 0;
    virtual double value_raw() const = 0;
    virtual bool value_raw(double value) = 0;
};

// Inline wrappers

inline std::string SheetMetalRuleValue::expression() const
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

inline bool SheetMetalRuleValue::expression(const std::string& value)
{
    return expression_raw(value.c_str());
}

inline double SheetMetalRuleValue::value() const
{
    double res = value_raw();
    return res;
}

inline bool SheetMetalRuleValue::value(double value)
{
    return value_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SHEETMETALRULEVALUE_API