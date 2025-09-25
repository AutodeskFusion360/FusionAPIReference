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
#include "../VolumeTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef VOLUMEXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_VOLUME_VOLUMETRICSAMPLE_CPP__
# define ADSK_VOLUME_VOLUMETRICSAMPLE_API XI_EXPORT
# else
# define ADSK_VOLUME_VOLUMETRICSAMPLE_API
# endif
#else
# define ADSK_VOLUME_VOLUMETRICSAMPLE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The VolumetricSamples object which is a base class for containing the result of sampling the volumetric model an array of points.
class VolumetricSample : public core::Base {
public:

    /// Gets the location of the sample evalution.
    core::Ptr<core::Point3D> point() const;

    ADSK_VOLUME_VOLUMETRICSAMPLE_API static const char* classType();
    ADSK_VOLUME_VOLUMETRICSAMPLE_API const char* objectType() const override;
    ADSK_VOLUME_VOLUMETRICSAMPLE_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_VOLUMETRICSAMPLE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Point3D* point_raw() const = 0;
    virtual void placeholderVolumetricSample0() {}
    virtual void placeholderVolumetricSample1() {}
    virtual void placeholderVolumetricSample2() {}
    virtual void placeholderVolumetricSample3() {}
    virtual void placeholderVolumetricSample4() {}
    virtual void placeholderVolumetricSample5() {}
    virtual void placeholderVolumetricSample6() {}
    virtual void placeholderVolumetricSample7() {}
    virtual void placeholderVolumetricSample8() {}
    virtual void placeholderVolumetricSample9() {}
    virtual void placeholderVolumetricSample10() {}
    virtual void placeholderVolumetricSample11() {}
    virtual void placeholderVolumetricSample12() {}
    virtual void placeholderVolumetricSample13() {}
    virtual void placeholderVolumetricSample14() {}
};

// Inline wrappers

inline core::Ptr<core::Point3D> VolumetricSample::point() const
{
    core::Ptr<core::Point3D> res = point_raw();
    return res;
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_VOLUMETRICSAMPLE_API