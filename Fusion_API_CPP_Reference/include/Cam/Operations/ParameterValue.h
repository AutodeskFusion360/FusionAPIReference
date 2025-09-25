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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_PARAMETERVALUE_CPP__
# define ADSK_CAM_PARAMETERVALUE_API XI_EXPORT
# else
# define ADSK_CAM_PARAMETERVALUE_API
# endif
#else
# define ADSK_CAM_PARAMETERVALUE_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Base class for representing the value of a parameter.
/// Subclasses implement value handling for available parameter types.
class ParameterValue : public core::Base {
public:

    /// Get the parameter object that the value is associated with.
    core::Ptr<core::Base> parent() const;

    ADSK_CAM_PARAMETERVALUE_API static const char* classType();
    ADSK_CAM_PARAMETERVALUE_API const char* objectType() const override;
    ADSK_CAM_PARAMETERVALUE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_PARAMETERVALUE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* parent_raw() const = 0;
    virtual void placeholderParameterValue0() {}
    virtual void placeholderParameterValue1() {}
    virtual void placeholderParameterValue2() {}
    virtual void placeholderParameterValue3() {}
    virtual void placeholderParameterValue4() {}
    virtual void placeholderParameterValue5() {}
    virtual void placeholderParameterValue6() {}
    virtual void placeholderParameterValue7() {}
    virtual void placeholderParameterValue8() {}
    virtual void placeholderParameterValue9() {}
    virtual void placeholderParameterValue10() {}
    virtual void placeholderParameterValue11() {}
    virtual void placeholderParameterValue12() {}
    virtual void placeholderParameterValue13() {}
    virtual void placeholderParameterValue14() {}
};

// Inline wrappers

inline core::Ptr<core::Base> ParameterValue::parent() const
{
    core::Ptr<core::Base> res = parent_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_PARAMETERVALUE_API