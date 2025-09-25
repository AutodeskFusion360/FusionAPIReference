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
#include "../CamTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAMPARAMETER_CPP__
# define ADSK_CAM_CAMPARAMETER_API XI_EXPORT
# else
# define ADSK_CAM_CAMPARAMETER_API
# endif
#else
# define ADSK_CAM_CAMPARAMETER_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class ParameterValue;
}}

namespace adsk { namespace cam {

/// Base class for representing parameter of an operation.
class CAMParameter : public core::Base {
public:

    /// Gets the name (internal name) of the parameter.
    std::string name() const;

    /// Returns the title of this parameter as seen in the user interface.
    /// This title is localized and can change based on the current language
    std::string title() const;

    /// Gets and sets the value expression of the parameter.
    std::string expression() const;
    bool expression(const std::string& value);

    /// Gets if this parameter is enabled.  Some parameters are enabled/disabled depending on the values
    /// set for other parameters.
    bool isEnabled() const;

    /// Returns a message corresponding to any active error associated with the value of this parameter.
    std::string error() const;

    /// Returns a message corresponding to any active warning associated with the value of this parameter.
    std::string warning() const;

    /// Returns whether or not the parameter's expression or value can be modified.
    bool isEditable() const;

    /// Returns an object that allows you to get and set the value associated with the parameter.
    core::Ptr<ParameterValue> value() const;

    /// Gets if this parameter is deprecated. Some parameters are deprecated when their usage becomes obsolete.
    /// Reading deprecated parameters is allowed, but setting deprecated parameters will throw an error.
    bool isDeprecated() const;

    ADSK_CAM_CAMPARAMETER_API static const char* classType();
    ADSK_CAM_CAMPARAMETER_API const char* objectType() const override;
    ADSK_CAM_CAMPARAMETER_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMPARAMETER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual char* title_raw() const = 0;
    virtual char* expression_raw() const = 0;
    virtual bool expression_raw(const char* value) = 0;
    virtual bool isEnabled_raw() const = 0;
    virtual char* error_raw() const = 0;
    virtual char* warning_raw() const = 0;
    virtual bool isEditable_raw() const = 0;
    virtual ParameterValue* value_raw() const = 0;
    virtual bool isDeprecated_raw() const = 0;
};

// Inline wrappers

inline std::string CAMParameter::name() const
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

inline std::string CAMParameter::title() const
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

inline std::string CAMParameter::expression() const
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

inline bool CAMParameter::expression(const std::string& value)
{
    return expression_raw(value.c_str());
}

inline bool CAMParameter::isEnabled() const
{
    bool res = isEnabled_raw();
    return res;
}

inline std::string CAMParameter::error() const
{
    std::string res;

    char* p= error_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CAMParameter::warning() const
{
    std::string res;

    char* p= warning_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAMParameter::isEditable() const
{
    bool res = isEditable_raw();
    return res;
}

inline core::Ptr<ParameterValue> CAMParameter::value() const
{
    core::Ptr<ParameterValue> res = value_raw();
    return res;
}

inline bool CAMParameter::isDeprecated() const
{
    bool res = isDeprecated_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMPARAMETER_API