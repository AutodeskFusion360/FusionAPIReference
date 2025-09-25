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
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_JOINTORIGININPUT_CPP__
# define ADSK_FUSION_JOINTORIGININPUT_API XI_EXPORT
# else
# define ADSK_FUSION_JOINTORIGININPUT_API
# endif
#else
# define ADSK_FUSION_JOINTORIGININPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class JointGeometry;
}}

namespace adsk { namespace fusion {

/// Defines all of the information required to create a new joint origin. This object provides
/// equivalent functionality to the Joint Origin command dialog in that it gathers the required
/// information to create a joint origin.
class JointOriginInput : public core::Base {
public:

    /// Gets and sets the joint geometry for this joint origin input. This
    /// defines the location of the joint origin.
    core::Ptr<JointGeometry> geometry() const;
    bool geometry(const core::Ptr<JointGeometry>& value);

    /// Gets and sets the value that defines the angle for the joint origin. This defaults to zero
    /// if it's not specified. The value defines an angle and if the ValueInput is defined using
    /// the createByReal method the value is assumed to be radians.
    core::Ptr<core::ValueInput> angle() const;
    bool angle(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the value that defines the X offset direction. This defaults to zero
    /// if it's not specified. The value defines a distance and if the ValueInput is defined using
    /// the createByReal method the value is assumed to be centimeters.
    core::Ptr<core::ValueInput> offsetX() const;
    bool offsetX(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the value that defines the Y offset direction. This defaults to zero
    /// if it's not specified. The value defines a distance and if the ValueInput is defined using
    /// the createByReal method the value is assumed to be centimeters.
    core::Ptr<core::ValueInput> offsetY() const;
    bool offsetY(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the value that defines the Z offset direction. This defaults to zero
    /// if it's not specified. The value defines a distance and if the ValueInput is defined using
    /// the createByReal method the value is assumed to be centimeters.
    core::Ptr<core::ValueInput> offsetZ() const;
    bool offsetZ(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets if the joint origin direction is flipped or not.
    bool isFlipped() const;
    bool isFlipped(bool value);

    /// Gets and sets the entity that defines the X axis direction. This defaults
    /// to null meaning the X axis is inferred from the input geometry.
    core::Ptr<core::Base> xAxisEntity() const;
    bool xAxisEntity(const core::Ptr<core::Base>& value);

    /// Gets and sets the entity that defines the Z axis direction. This defaults
    /// to null meaning the Z axis is inferred from the input geometry.
    core::Ptr<core::Base> zAxisEntity() const;
    bool zAxisEntity(const core::Ptr<core::Base>& value);

    /// Returns the direction of the primary axis that's been calculated for this joint origin. This
    /// is conceptually the Z axis as shown by the triad representing the joint origin.
    core::Ptr<core::Vector3D> primaryAxisVector() const;

    /// Returns the direction of the secondary axis that's been calculated for this joint origin. This
    /// is conceptually the X axis as shown by the triad representing the joint origin.
    core::Ptr<core::Vector3D> secondaryAxisVector() const;

    /// Returns the direction of the third axis that's been calculated for this joint origin. This
    /// is conceptually the Y axis as shown by the triad representing the joint origin.
    core::Ptr<core::Vector3D> thirdAxisVector() const;

    /// Gets and sets the value that defines the first global orient parameter for the joint origin.
    /// This defaults to zero if it's not specified.
    /// For Cylineder or cone, it represents the angle around the center axis.
    /// For Sphere and Torus, it represents the angle around the center axis.
    /// For Spline, it represents the U parameter.
    core::Ptr<core::ValueInput> globalOrientParamOne() const;
    bool globalOrientParamOne(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the value that defines the second global orient parameter for the joint origin.
    /// This defaults to zero if it's not specified.
    /// For Cylinder or cone, it is not used.
    /// For Sphere, it represents the polar angle, which is the angle between the radius line and the equator plane.
    /// For Torus, it represents the angle around the center of the section circle.
    /// For Spline, it represents the V parameter.
    core::Ptr<core::ValueInput> globalOrientParamTwo() const;
    bool globalOrientParamTwo(const core::Ptr<core::ValueInput>& value);

    ADSK_FUSION_JOINTORIGININPUT_API static const char* classType();
    ADSK_FUSION_JOINTORIGININPUT_API const char* objectType() const override;
    ADSK_FUSION_JOINTORIGININPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_JOINTORIGININPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual JointGeometry* geometry_raw() const = 0;
    virtual bool geometry_raw(JointGeometry* value) = 0;
    virtual core::ValueInput* angle_raw() const = 0;
    virtual bool angle_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* offsetX_raw() const = 0;
    virtual bool offsetX_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* offsetY_raw() const = 0;
    virtual bool offsetY_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* offsetZ_raw() const = 0;
    virtual bool offsetZ_raw(core::ValueInput* value) = 0;
    virtual bool isFlipped_raw() const = 0;
    virtual bool isFlipped_raw(bool value) = 0;
    virtual core::Base* xAxisEntity_raw() const = 0;
    virtual bool xAxisEntity_raw(core::Base* value) = 0;
    virtual core::Base* zAxisEntity_raw() const = 0;
    virtual bool zAxisEntity_raw(core::Base* value) = 0;
    virtual core::Vector3D* primaryAxisVector_raw() const = 0;
    virtual core::Vector3D* secondaryAxisVector_raw() const = 0;
    virtual core::Vector3D* thirdAxisVector_raw() const = 0;
    virtual core::ValueInput* globalOrientParamOne_raw() const = 0;
    virtual bool globalOrientParamOne_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* globalOrientParamTwo_raw() const = 0;
    virtual bool globalOrientParamTwo_raw(core::ValueInput* value) = 0;
};

// Inline wrappers

inline core::Ptr<JointGeometry> JointOriginInput::geometry() const
{
    core::Ptr<JointGeometry> res = geometry_raw();
    return res;
}

inline bool JointOriginInput::geometry(const core::Ptr<JointGeometry>& value)
{
    return geometry_raw(value.get());
}

inline core::Ptr<core::ValueInput> JointOriginInput::angle() const
{
    core::Ptr<core::ValueInput> res = angle_raw();
    return res;
}

inline bool JointOriginInput::angle(const core::Ptr<core::ValueInput>& value)
{
    return angle_raw(value.get());
}

inline core::Ptr<core::ValueInput> JointOriginInput::offsetX() const
{
    core::Ptr<core::ValueInput> res = offsetX_raw();
    return res;
}

inline bool JointOriginInput::offsetX(const core::Ptr<core::ValueInput>& value)
{
    return offsetX_raw(value.get());
}

inline core::Ptr<core::ValueInput> JointOriginInput::offsetY() const
{
    core::Ptr<core::ValueInput> res = offsetY_raw();
    return res;
}

inline bool JointOriginInput::offsetY(const core::Ptr<core::ValueInput>& value)
{
    return offsetY_raw(value.get());
}

inline core::Ptr<core::ValueInput> JointOriginInput::offsetZ() const
{
    core::Ptr<core::ValueInput> res = offsetZ_raw();
    return res;
}

inline bool JointOriginInput::offsetZ(const core::Ptr<core::ValueInput>& value)
{
    return offsetZ_raw(value.get());
}

inline bool JointOriginInput::isFlipped() const
{
    bool res = isFlipped_raw();
    return res;
}

inline bool JointOriginInput::isFlipped(bool value)
{
    return isFlipped_raw(value);
}

inline core::Ptr<core::Base> JointOriginInput::xAxisEntity() const
{
    core::Ptr<core::Base> res = xAxisEntity_raw();
    return res;
}

inline bool JointOriginInput::xAxisEntity(const core::Ptr<core::Base>& value)
{
    return xAxisEntity_raw(value.get());
}

inline core::Ptr<core::Base> JointOriginInput::zAxisEntity() const
{
    core::Ptr<core::Base> res = zAxisEntity_raw();
    return res;
}

inline bool JointOriginInput::zAxisEntity(const core::Ptr<core::Base>& value)
{
    return zAxisEntity_raw(value.get());
}

inline core::Ptr<core::Vector3D> JointOriginInput::primaryAxisVector() const
{
    core::Ptr<core::Vector3D> res = primaryAxisVector_raw();
    return res;
}

inline core::Ptr<core::Vector3D> JointOriginInput::secondaryAxisVector() const
{
    core::Ptr<core::Vector3D> res = secondaryAxisVector_raw();
    return res;
}

inline core::Ptr<core::Vector3D> JointOriginInput::thirdAxisVector() const
{
    core::Ptr<core::Vector3D> res = thirdAxisVector_raw();
    return res;
}

inline core::Ptr<core::ValueInput> JointOriginInput::globalOrientParamOne() const
{
    core::Ptr<core::ValueInput> res = globalOrientParamOne_raw();
    return res;
}

inline bool JointOriginInput::globalOrientParamOne(const core::Ptr<core::ValueInput>& value)
{
    return globalOrientParamOne_raw(value.get());
}

inline core::Ptr<core::ValueInput> JointOriginInput::globalOrientParamTwo() const
{
    core::Ptr<core::ValueInput> res = globalOrientParamTwo_raw();
    return res;
}

inline bool JointOriginInput::globalOrientParamTwo(const core::Ptr<core::ValueInput>& value)
{
    return globalOrientParamTwo_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_JOINTORIGININPUT_API