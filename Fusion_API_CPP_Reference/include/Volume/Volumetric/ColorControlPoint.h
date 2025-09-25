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
# ifdef __COMPILING_ADSK_VOLUME_COLORCONTROLPOINT_CPP__
# define ADSK_VOLUME_COLORCONTROLPOINT_API XI_EXPORT
# else
# define ADSK_VOLUME_COLORCONTROLPOINT_API
# endif
#else
# define ADSK_VOLUME_COLORCONTROLPOINT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Color;
}}

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A read-only structure that represents a control point used in ColorControlPointMapGraphNodeProperty.
class ColorControlPoint : public core::Base {
public:

    /// The parameter inside the input domain of the control point map for this point.
    double parameter() const;

    /// The output color value of the control point for this point.
    core::Ptr<core::Color> value() const;

    /// The interpolator function.
    ControlPointInterpolators interpolator() const;

    ADSK_VOLUME_COLORCONTROLPOINT_API static const char* classType();
    ADSK_VOLUME_COLORCONTROLPOINT_API const char* objectType() const override;
    ADSK_VOLUME_COLORCONTROLPOINT_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_COLORCONTROLPOINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double parameter_raw() const = 0;
    virtual core::Color* value_raw() const = 0;
    virtual ControlPointInterpolators interpolator_raw() const = 0;
};

// Inline wrappers

inline double ColorControlPoint::parameter() const
{
    double res = parameter_raw();
    return res;
}

inline core::Ptr<core::Color> ColorControlPoint::value() const
{
    core::Ptr<core::Color> res = value_raw();
    return res;
}

inline ControlPointInterpolators ColorControlPoint::interpolator() const
{
    ControlPointInterpolators res = interpolator_raw();
    return res;
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_COLORCONTROLPOINT_API