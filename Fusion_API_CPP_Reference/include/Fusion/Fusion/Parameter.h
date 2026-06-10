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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PARAMETER_CPP__
# define ADSK_FUSION_PARAMETER_API XI_EXPORT
# else
# define ADSK_FUSION_PARAMETER_API
# endif
#else
# define ADSK_FUSION_PARAMETER_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
}}
namespace adsk { namespace fusion {
    class ParameterList;
}}

namespace adsk { namespace fusion {

/// The base class Parameter object that can represent model or user parameters.
class Parameter : public core::Base {
public:

    /// Gets and sets the real value (a double) of the parameter in database units.
    /// Setting this property will set/reset the expression value for this parameter.
    /// 
    /// This property is only valid for numeric parameters and will fail for text parameters.
    /// You can determine the value type of the parameter by using the valueType property.
    /// Use the textValue property to get and set the value of text parameters.
    double value() const;
    bool value(double value);

    /// Gets and sets the expression used to calculate the value of the parameter. This is the
    /// equivalent of the "Expression" column in the Parameters dialog. Numeric parameters can
    /// be defined by a simple expression like "6.25", which will be interpreted based on whatever the
    /// default units are for the document. For example, if the units are set to millimeters,
    /// the value will be 6.25 mm; if the units are inches, it will be 6.25 inches. The expression
    /// can also contain the units so "6.25 in" will always be evaluated as inches regardless
    /// of the document units.
    /// 
    /// An expression can also contain references to other parameters and use equations.
    /// For example, the expression "Length / 2" is valid for a numeric parameter as long as
    /// there is a numeric parameter named "Length". Expressions can also be used for text parameters,
    /// such as concatenating two other text parameters. For example, if there are two existing text
    /// parameters named text1 and text2, the expression for another text parameter can be "text1 + text2".
    /// More complex equations can also be used with text parameters like
    /// "if (Length < 20 mm; 'Short'; 'Long')" where "Length" is a numeric parameter.
    /// The resulting string can be obtained using the textValue property.
    /// 
    /// When setting the expression of a text parameter to a literal string value, the string must be
    /// enclosed in single quotes (e.g. "'Hello Fusion'"). An unquoted value like "Hello Fusion" will
    /// fail to parse because the tokens are interpreted as symbols rather than literal text. If you
    /// want to set a plain string value without managing quotes, use the textValue property instead.
    std::string expression() const;
    bool expression(const std::string& value);

    /// Gets and sets the name of the parameter. Setting the name can fail if the name
    /// is not unique with respect to all other parameters in the design.
    std::string name() const;
    bool name(const std::string& value);

    /// The unit type associated with this parameter. An empty string is returned for parameters
    /// that don't have a unit type.
    std::string unit() const;

    /// The comment associated with this parameter.
    std::string comment() const;
    bool comment(const std::string& value);

    /// Gets and sets whether this parameter is included in the Favorites list in the
    /// parameters dialog
    bool isFavorite() const;
    bool isFavorite(bool value);

    /// Returns a list of parameters that are dependent on this parameter as a result
    /// of this parameter being referenced in their equation.
    core::Ptr<ParameterList> dependentParameters() const;

    /// Gets if this parameter can be deleted. Parameters that have dependents cannot
    /// be deleted, and model parameters typically cannot be deleted. However,
    /// there is the possibility in uncommon workflows where a model parameter no longer
    /// has any dependents, and it was not automatically deleted. In this case, this
    /// property will return true, and the deleteMe method can delete the parameter.
    bool isDeletable() const;

    /// Returns the collection of attributes associated with this face.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns a token for the Parameter object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same parameter.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    /// Returns a list of parameters that this parameter is dependent on.
    core::Ptr<ParameterList> dependencyParameters() const;

    /// Gets and sets the value of the parameter when it is a text parameter. This can be
    /// determined by checking the valueType property. Setting this value
    /// will cause the current expression to be overwritten. If the parameter
    /// is not a text parameter, the value of this property should be ignored and setting will fail.
    std::string textValue() const;
    bool textValue(const std::string& value);

    /// Returns the type of value this parameter is. For a numeric parameter, you can
    /// get the value using the value property. For a text parameter, you can get the
    /// value using the textValue property.
    ParameterValueTypes valueType() const;

    ADSK_FUSION_PARAMETER_API static const char* classType();
    ADSK_FUSION_PARAMETER_API const char* objectType() const override;
    ADSK_FUSION_PARAMETER_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PARAMETER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double value_raw() const = 0;
    virtual bool value_raw(double value) = 0;
    virtual char* expression_raw() const = 0;
    virtual bool expression_raw(const char* value) = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual char* unit_raw() const = 0;
    virtual char* comment_raw() const = 0;
    virtual bool comment_raw(const char* value) = 0;
    virtual bool isFavorite_raw() const = 0;
    virtual bool isFavorite_raw(bool value) = 0;
    virtual ParameterList* dependentParameters_raw() const = 0;
    virtual bool isDeletable_raw() const = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
    virtual ParameterList* dependencyParameters_raw() const = 0;
    virtual char* textValue_raw() const = 0;
    virtual bool textValue_raw(const char* value) = 0;
    virtual ParameterValueTypes valueType_raw() const = 0;
    virtual void placeholderParameter0() {}
    virtual void placeholderParameter1() {}
    virtual void placeholderParameter2() {}
    virtual void placeholderParameter3() {}
    virtual void placeholderParameter4() {}
    virtual void placeholderParameter5() {}
    virtual void placeholderParameter6() {}
    virtual void placeholderParameter7() {}
    virtual void placeholderParameter8() {}
    virtual void placeholderParameter9() {}
    virtual void placeholderParameter10() {}
    virtual void placeholderParameter11() {}
    virtual void placeholderParameter12() {}
};

// Inline wrappers

inline double Parameter::value() const
{
    double res = value_raw();
    return res;
}

inline bool Parameter::value(double value)
{
    return value_raw(value);
}

inline std::string Parameter::expression() const
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

inline bool Parameter::expression(const std::string& value)
{
    return expression_raw(value.c_str());
}

inline std::string Parameter::name() const
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

inline bool Parameter::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline std::string Parameter::unit() const
{
    std::string res;

    char* p= unit_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Parameter::comment() const
{
    std::string res;

    char* p= comment_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Parameter::comment(const std::string& value)
{
    return comment_raw(value.c_str());
}

inline bool Parameter::isFavorite() const
{
    bool res = isFavorite_raw();
    return res;
}

inline bool Parameter::isFavorite(bool value)
{
    return isFavorite_raw(value);
}

inline core::Ptr<ParameterList> Parameter::dependentParameters() const
{
    core::Ptr<ParameterList> res = dependentParameters_raw();
    return res;
}

inline bool Parameter::isDeletable() const
{
    bool res = isDeletable_raw();
    return res;
}

inline core::Ptr<core::Attributes> Parameter::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline std::string Parameter::entityToken() const
{
    std::string res;

    char* p= entityToken_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<ParameterList> Parameter::dependencyParameters() const
{
    core::Ptr<ParameterList> res = dependencyParameters_raw();
    return res;
}

inline std::string Parameter::textValue() const
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

inline bool Parameter::textValue(const std::string& value)
{
    return textValue_raw(value.c_str());
}

inline ParameterValueTypes Parameter::valueType() const
{
    ParameterValueTypes res = valueType_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PARAMETER_API