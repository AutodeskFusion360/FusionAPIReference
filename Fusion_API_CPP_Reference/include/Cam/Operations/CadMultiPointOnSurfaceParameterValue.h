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
#include "CadObjectParameterValue.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CADMULTIPOINTONSURFACEPARAMETERVALUE_CPP__
# define ADSK_CAM_CADMULTIPOINTONSURFACEPARAMETERVALUE_API XI_EXPORT
# else
# define ADSK_CAM_CADMULTIPOINTONSURFACEPARAMETERVALUE_API
# endif
#else
# define ADSK_CAM_CADMULTIPOINTONSURFACEPARAMETERVALUE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// A parameter value that is a CadMultiPointOnSurface.
class CadMultiPointOnSurfaceParameterValue : public CadObjectParameterValue {
public:

    /// Get/Set the values of the parameter as a vector of Point3D positions.
    /// Points are in CM units.
    /// Points are in model coordinates.
    std::vector<core::Ptr<core::Point3D>> values() const;
    bool values(const std::vector<core::Ptr<core::Point3D>>& value);

    ADSK_CAM_CADMULTIPOINTONSURFACEPARAMETERVALUE_API static const char* classType();
    ADSK_CAM_CADMULTIPOINTONSURFACEPARAMETERVALUE_API const char* objectType() const override;
    ADSK_CAM_CADMULTIPOINTONSURFACEPARAMETERVALUE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CADMULTIPOINTONSURFACEPARAMETERVALUE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Point3D** values_raw(size_t& return_size) const = 0;
    virtual bool values_raw(core::Point3D** value, size_t value_size) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<core::Point3D>> CadMultiPointOnSurfaceParameterValue::values() const
{
    std::vector<core::Ptr<core::Point3D>> res;
    size_t s;

    core::Point3D** p= values_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CadMultiPointOnSurfaceParameterValue::values(const std::vector<core::Ptr<core::Point3D>>& value)
{
    core::Point3D** value_ = new core::Point3D*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = values_raw(value_, value.size());
    delete[] value_;
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CADMULTIPOINTONSURFACEPARAMETERVALUE_API