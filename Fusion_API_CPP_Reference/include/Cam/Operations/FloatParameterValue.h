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
#include "ParameterValue.h"
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_FLOATPARAMETERVALUE_CPP__
# define ADSK_CAM_FLOATPARAMETERVALUE_API XI_EXPORT
# else
# define ADSK_CAM_FLOATPARAMETERVALUE_API
# endif
#else
# define ADSK_CAM_FLOATPARAMETERVALUE_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// A parameter value that is a floating point value.
class FloatParameterValue : public ParameterValue {
public:

    /// Get or set the value of the parameter.
    double value() const;
    bool value(double value);

    /// Get the type of the float parameter.
    FloatParameterValueTypes type() const;

    ADSK_CAM_FLOATPARAMETERVALUE_API static const char* classType();
    ADSK_CAM_FLOATPARAMETERVALUE_API const char* objectType() const override;
    ADSK_CAM_FLOATPARAMETERVALUE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_FLOATPARAMETERVALUE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double value_raw() const = 0;
    virtual bool value_raw(double value) = 0;
    virtual FloatParameterValueTypes type_raw() const = 0;
};

// Inline wrappers

inline double FloatParameterValue::value() const
{
    double res = value_raw();
    return res;
}

inline bool FloatParameterValue::value(double value)
{
    return value_raw(value);
}

inline FloatParameterValueTypes FloatParameterValue::type() const
{
    FloatParameterValueTypes res = type_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_FLOATPARAMETERVALUE_API