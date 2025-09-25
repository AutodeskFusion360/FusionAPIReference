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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CADOBJECTPARAMETERVALUE_CPP__
# define ADSK_CAM_CADOBJECTPARAMETERVALUE_API XI_EXPORT
# else
# define ADSK_CAM_CADOBJECTPARAMETERVALUE_API
# endif
#else
# define ADSK_CAM_CADOBJECTPARAMETERVALUE_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// A parameter value that is a collection of cad objects.
class CadObjectParameterValue : public ParameterValue {
public:

    /// Get or set the value of the parameter.
    /// If the value originates from a component instead of an occurrence, or an occurrence outside of the CAM environment, then the subpath is checked against the CAM model tree.
    /// An exception is thrown if the matching fails or the given entity does not match the expected type.
    std::vector<core::Ptr<core::Base>> value() const;
    bool value(const std::vector<core::Ptr<core::Base>>& value);

    ADSK_CAM_CADOBJECTPARAMETERVALUE_API static const char* classType();
    ADSK_CAM_CADOBJECTPARAMETERVALUE_API const char* objectType() const override;
    ADSK_CAM_CADOBJECTPARAMETERVALUE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CADOBJECTPARAMETERVALUE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base** value_raw(size_t& return_size) const = 0;
    virtual bool value_raw(core::Base** value, size_t value_size) = 0;
    virtual void placeholderCadObjectParameterValue0() {}
    virtual void placeholderCadObjectParameterValue1() {}
    virtual void placeholderCadObjectParameterValue2() {}
    virtual void placeholderCadObjectParameterValue3() {}
    virtual void placeholderCadObjectParameterValue4() {}
    virtual void placeholderCadObjectParameterValue5() {}
    virtual void placeholderCadObjectParameterValue6() {}
    virtual void placeholderCadObjectParameterValue7() {}
    virtual void placeholderCadObjectParameterValue8() {}
    virtual void placeholderCadObjectParameterValue9() {}
    virtual void placeholderCadObjectParameterValue10() {}
    virtual void placeholderCadObjectParameterValue11() {}
    virtual void placeholderCadObjectParameterValue12() {}
    virtual void placeholderCadObjectParameterValue13() {}
};

// Inline wrappers

inline std::vector<core::Ptr<core::Base>> CadObjectParameterValue::value() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= value_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CadObjectParameterValue::value(const std::vector<core::Ptr<core::Base>>& value)
{
    core::Base** value_ = new core::Base*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = value_raw(value_, value.size());
    delete[] value_;
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CADOBJECTPARAMETERVALUE_API