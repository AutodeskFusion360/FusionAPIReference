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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_INTEGERPARAMETERVALUE_CPP__
# define ADSK_CAM_INTEGERPARAMETERVALUE_API XI_EXPORT
# else
# define ADSK_CAM_INTEGERPARAMETERVALUE_API
# endif
#else
# define ADSK_CAM_INTEGERPARAMETERVALUE_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// A parameter value that is an integer.
class IntegerParameterValue : public ParameterValue {
public:

    /// Get or set the value of the parameter.
    int value() const;
    bool value(int value);

    ADSK_CAM_INTEGERPARAMETERVALUE_API static const char* classType();
    ADSK_CAM_INTEGERPARAMETERVALUE_API const char* objectType() const override;
    ADSK_CAM_INTEGERPARAMETERVALUE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_INTEGERPARAMETERVALUE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int value_raw() const = 0;
    virtual bool value_raw(int value) = 0;
};

// Inline wrappers

inline int IntegerParameterValue::value() const
{
    int res = value_raw();
    return res;
}

inline bool IntegerParameterValue::value(int value)
{
    return value_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_INTEGERPARAMETERVALUE_API