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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONRULECONSTRAINT_CPP__
# define ADSK_FUSION_CONFIGURATIONRULECONSTRAINT_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONRULECONSTRAINT_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONRULECONSTRAINT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// A ConfigurationRuleConstraint provides a flexible way of specifying a constraint value for a
/// configuration rule. Supported value types are: a real (double), a string, a boolean, an integer,
/// a real range (with optional min, max, and increment bounds), an integer range (with optional min,
/// max, and increment bounds), or an array of strings.
/// No semantics are associated with a ConfigurationRuleConstraint (e.g. is the string valid, can the
/// string be converted to a double) - it is merely a way of supplying constraint information as a
/// function parameter.
class ConfigurationRuleConstraint : public core::Base {
public:

    /// Creates a new ConfigurationRuleConstraint object using a double.
    /// Values defined by a real are always interpreted to be in the appropriate internal unit.
    /// realValue : A double value.
    /// Returns the newly created ConfigurationRuleConstraint object or null if the creation failed.
    static core::Ptr<ConfigurationRuleConstraint> createByReal(double realValue);

    /// Creates a new ConfigurationRuleConstraint object using a string expression.
    /// When a string is used to create a constraint value it needs to be evaluated as an expression
    /// so its value can be determined using the UnitsManager class.
    /// stringValue : The expression string.
    /// Returns the newly created ConfigurationRuleConstraint object or null if the creation failed.
    static core::Ptr<ConfigurationRuleConstraint> createByString(const std::string& stringValue);

    /// Creates a new ConfigurationRuleConstraint object that contains a boolean value.
    /// booleanValue : Boolean value.
    /// Returns the newly created ConfigurationRuleConstraint object or null if the creation failed.
    static core::Ptr<ConfigurationRuleConstraint> createByBoolean(bool booleanValue);

    /// Creates a new ConfigurationRuleConstraint object using an integer value.
    /// integerValue : An integer value.
    /// Returns the newly created ConfigurationRuleConstraint object or null if the creation failed.
    static core::Ptr<ConfigurationRuleConstraint> createByInteger(int integerValue);

    /// Creates a new ConfigurationRuleConstraint object that defines a real number range.
    /// At least one of hasMinValue or hasMaxValue must be true.
    /// hasMinValue : Specifies whether the range has a minimum bound.
    /// minValue : The minimum bound of the range. Ignored when hasMinValue is false.
    /// hasMaxValue : Specifies whether the range has a maximum bound.
    /// maxValue : The maximum bound of the range. Ignored when hasMaxValue is false.
    /// increment : The optional step increment within the range.
    /// Returns the newly created ConfigurationRuleConstraint object or null if the creation failed.
    static core::Ptr<ConfigurationRuleConstraint> createByRealRange(bool hasMinValue, double minValue, bool hasMaxValue, double maxValue, double increment = 0.0);

    /// Creates a new ConfigurationRuleConstraint object that defines an integer range.
    /// At least one of hasMinValue or hasMaxValue must be true.
    /// hasMinValue : Specifies whether the range has a minimum bound.
    /// minValue : The minimum bound of the range. Ignored when hasMinValue is false.
    /// hasMaxValue : Specifies whether the range has a maximum bound.
    /// maxValue : The maximum bound of the range. Ignored when hasMaxValue is false.
    /// increment : The optional step increment within the range.
    /// Returns the newly created ConfigurationRuleConstraint object or null if the creation failed.
    static core::Ptr<ConfigurationRuleConstraint> createByIntegerRange(bool hasMinValue, int minValue, bool hasMaxValue, int maxValue, int increment = 0);

    /// Creates a new ConfigurationRuleConstraint object using an array of string values.
    /// values : An array of string values that define the allowed set.
    /// Returns the newly created ConfigurationRuleConstraint object or null if the creation failed.
    static core::Ptr<ConfigurationRuleConstraint> createByStringArray(const std::vector<std::string>& values);

    /// Gets the real value, if there is one. Use the valueType property to determine what
    /// type this ConfigurationRuleConstraint represents. If it's not a real, the return value
    /// should be ignored.
    double realValue() const;

    /// Gets the string value, if there is one. Use the valueType property to determine what
    /// type this ConfigurationRuleConstraint represents. If it's not a string, the return value
    /// should be ignored.
    std::string stringValue() const;

    /// Gets the boolean value, if there is one. Use the valueType property to determine what
    /// type this ConfigurationRuleConstraint represents. If it's not a boolean, the return value
    /// should be ignored.
    bool booleanValue() const;

    /// Gets the integer value, if there is one. Use the valueType property to determine what
    /// type this ConfigurationRuleConstraint represents. If it's not an integer, the return value
    /// should be ignored.
    int integerValue() const;

    /// Gets the minimum bound of the range, if the constraint is a real range or an integer range.
    /// Use the valueType property to see if this ConfigurationRuleConstraint represents
    /// a range and the hasMinValue property to determine if this property will return
    /// a valid value. Otherwise, this value should be ignored.
    double minValue() const;
    bool minValue(double value);

    /// Gets the maximum bound of the range, if the constraint is a real range or an integer range.
    /// Use the valueType property to see if this ConfigurationRuleConstraint represents
    /// a range and the hasMaxValue property to determine if this property will return
    /// a valid value. Otherwise, this value should be ignored.
    double maxValue() const;
    bool maxValue(double value);

    /// Gets the step increment of the range, if the constraint is a real range or an integer range.
    /// Use the valueType property to see if this ConfigurationRuleConstraint represents
    /// a range and the hasIncrement property to determine if this property will return
    /// a valid value. Otherwise, this value should be ignored.
    double increment() const;
    bool increment(double value);

    /// Returns true if the real range constraint has a minimum bound.
    bool hasMinValue() const;

    /// Returns true if the real range constraint has a maximum bound.
    bool hasMaxValue() const;

    /// Returns true if the real range constraint has a step increment defined.
    bool hasIncrement() const;

    /// Gets and sets whether this constraint uses inclusive or exclusive.
    /// For example, a string array with inclusive means that the allowed set includes the specified strings
    /// whereas a string array with exclusive means that the allowed set includes all strings except for the specified strings.
    bool isInclusive() const;
    bool isInclusive(bool value);

    /// Gets the array of string values, if there are any. Use the valueType property to determine what
    /// type this ConfigurationRuleConstraint represents. If it's not a string array, the return value
    /// should be ignored.
    std::vector<std::string> stringArrayValue() const;

    /// Returns the type of value this ConfigurationRuleConstraint currently represents.
    /// Use this property to determine which value getter (realValue, stringValue, booleanValue,
    /// integerValue, minValue/maxValue, or stringArrayValue) will return a valid value.
    ConfigurationRuleConstraintValueTypes valueType() const;

    ADSK_FUSION_CONFIGURATIONRULECONSTRAINT_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONRULECONSTRAINT_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONRULECONSTRAINT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONRULECONSTRAINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_CONFIGURATIONRULECONSTRAINT_API static ConfigurationRuleConstraint* createByReal_raw(double realValue);
    ADSK_FUSION_CONFIGURATIONRULECONSTRAINT_API static ConfigurationRuleConstraint* createByString_raw(const char* stringValue);
    ADSK_FUSION_CONFIGURATIONRULECONSTRAINT_API static ConfigurationRuleConstraint* createByBoolean_raw(bool booleanValue);
    ADSK_FUSION_CONFIGURATIONRULECONSTRAINT_API static ConfigurationRuleConstraint* createByInteger_raw(int integerValue);
    ADSK_FUSION_CONFIGURATIONRULECONSTRAINT_API static ConfigurationRuleConstraint* createByRealRange_raw(bool hasMinValue, double minValue, bool hasMaxValue, double maxValue, double increment);
    ADSK_FUSION_CONFIGURATIONRULECONSTRAINT_API static ConfigurationRuleConstraint* createByIntegerRange_raw(bool hasMinValue, int minValue, bool hasMaxValue, int maxValue, int increment);
    ADSK_FUSION_CONFIGURATIONRULECONSTRAINT_API static ConfigurationRuleConstraint* createByStringArray_raw(const char** values, size_t values_size);
    virtual double realValue_raw() const = 0;
    virtual char* stringValue_raw() const = 0;
    virtual bool booleanValue_raw() const = 0;
    virtual int integerValue_raw() const = 0;
    virtual double minValue_raw() const = 0;
    virtual bool minValue_raw(double value) = 0;
    virtual double maxValue_raw() const = 0;
    virtual bool maxValue_raw(double value) = 0;
    virtual double increment_raw() const = 0;
    virtual bool increment_raw(double value) = 0;
    virtual bool hasMinValue_raw() const = 0;
    virtual bool hasMaxValue_raw() const = 0;
    virtual bool hasIncrement_raw() const = 0;
    virtual bool isInclusive_raw() const = 0;
    virtual bool isInclusive_raw(bool value) = 0;
    virtual char** stringArrayValue_raw(size_t& return_size) const = 0;
    virtual ConfigurationRuleConstraintValueTypes valueType_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationRuleConstraint> ConfigurationRuleConstraint::createByReal(double realValue)
{
    core::Ptr<ConfigurationRuleConstraint> res = createByReal_raw(realValue);
    return res;
}

inline core::Ptr<ConfigurationRuleConstraint> ConfigurationRuleConstraint::createByString(const std::string& stringValue)
{
    core::Ptr<ConfigurationRuleConstraint> res = createByString_raw(stringValue.c_str());
    return res;
}

inline core::Ptr<ConfigurationRuleConstraint> ConfigurationRuleConstraint::createByBoolean(bool booleanValue)
{
    core::Ptr<ConfigurationRuleConstraint> res = createByBoolean_raw(booleanValue);
    return res;
}

inline core::Ptr<ConfigurationRuleConstraint> ConfigurationRuleConstraint::createByInteger(int integerValue)
{
    core::Ptr<ConfigurationRuleConstraint> res = createByInteger_raw(integerValue);
    return res;
}

inline core::Ptr<ConfigurationRuleConstraint> ConfigurationRuleConstraint::createByRealRange(bool hasMinValue, double minValue, bool hasMaxValue, double maxValue, double increment)
{
    core::Ptr<ConfigurationRuleConstraint> res = createByRealRange_raw(hasMinValue, minValue, hasMaxValue, maxValue, increment);
    return res;
}

inline core::Ptr<ConfigurationRuleConstraint> ConfigurationRuleConstraint::createByIntegerRange(bool hasMinValue, int minValue, bool hasMaxValue, int maxValue, int increment)
{
    core::Ptr<ConfigurationRuleConstraint> res = createByIntegerRange_raw(hasMinValue, minValue, hasMaxValue, maxValue, increment);
    return res;
}

inline core::Ptr<ConfigurationRuleConstraint> ConfigurationRuleConstraint::createByStringArray(const std::vector<std::string>& values)
{
    const char** values_ = values.empty() ? nullptr : (new const char*[values.size()]);
    for(size_t i = 0; i < values.size(); ++i)
    {
        values_[i] = values[i].c_str();
    }

    core::Ptr<ConfigurationRuleConstraint> res = createByStringArray_raw(values_, values.size());
    delete[] values_;
    return res;
}

inline double ConfigurationRuleConstraint::realValue() const
{
    double res = realValue_raw();
    return res;
}

inline std::string ConfigurationRuleConstraint::stringValue() const
{
    std::string res;

    char* p= stringValue_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ConfigurationRuleConstraint::booleanValue() const
{
    bool res = booleanValue_raw();
    return res;
}

inline int ConfigurationRuleConstraint::integerValue() const
{
    int res = integerValue_raw();
    return res;
}

inline double ConfigurationRuleConstraint::minValue() const
{
    double res = minValue_raw();
    return res;
}

inline bool ConfigurationRuleConstraint::minValue(double value)
{
    return minValue_raw(value);
}

inline double ConfigurationRuleConstraint::maxValue() const
{
    double res = maxValue_raw();
    return res;
}

inline bool ConfigurationRuleConstraint::maxValue(double value)
{
    return maxValue_raw(value);
}

inline double ConfigurationRuleConstraint::increment() const
{
    double res = increment_raw();
    return res;
}

inline bool ConfigurationRuleConstraint::increment(double value)
{
    return increment_raw(value);
}

inline bool ConfigurationRuleConstraint::hasMinValue() const
{
    bool res = hasMinValue_raw();
    return res;
}

inline bool ConfigurationRuleConstraint::hasMaxValue() const
{
    bool res = hasMaxValue_raw();
    return res;
}

inline bool ConfigurationRuleConstraint::hasIncrement() const
{
    bool res = hasIncrement_raw();
    return res;
}

inline bool ConfigurationRuleConstraint::isInclusive() const
{
    bool res = isInclusive_raw();
    return res;
}

inline bool ConfigurationRuleConstraint::isInclusive(bool value)
{
    return isInclusive_raw(value);
}

inline std::vector<std::string> ConfigurationRuleConstraint::stringArrayValue() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= stringArrayValue_raw(s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            core::DeallocateArray(pChar);
        }
        core::DeallocateArray(p);
    }
    return res;
}

inline ConfigurationRuleConstraintValueTypes ConfigurationRuleConstraint::valueType() const
{
    ConfigurationRuleConstraintValueTypes res = valueType_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONRULECONSTRAINT_API