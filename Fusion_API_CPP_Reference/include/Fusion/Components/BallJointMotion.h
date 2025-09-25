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
#include "JointMotion.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_BALLJOINTMOTION_CPP__
# define ADSK_FUSION_BALLJOINTMOTION_API XI_EXPORT
# else
# define ADSK_FUSION_BALLJOINTMOTION_API
# endif
#else
# define ADSK_FUSION_BALLJOINTMOTION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class JointLimits;
}}

namespace adsk { namespace fusion {

/// Represents the set of information specific to a ball joint.
class BallJointMotion : public JointMotion {
public:

    /// Gets and sets the direction that the pitch is measured from.
    /// This can only be set to ZAxisJointDirection and can return ZAxisJointDirection
    /// or CustomJointDirection. If this returns CustomJointDirection then the
    /// customNormalDirectionEntity will return an entity that defines the direction.
    /// If there is a custom direction defined and this property is set to ZAxisJointDirection,
    /// the custom direction will be removed and customNormalDirectionEntity will return null.
    JointDirections pitchDirection() const;
    bool pitchDirection(JointDirections value);

    /// This property defines a custom pitch direction and can be set using various types
    /// of entities that can infer a direction. For example, a linear edge, sketch line,
    /// planar face, and cylindrical face.This property is only valid in the case where the
    /// pitchDirection property returns CustomJointDirection. Setting this property will
    /// automatically set the pitchDirection property to CustomJointDirection.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this joint.
    /// This can be accomplished using the following code: thisJoint.timelineObject.rollTo(True)
    core::Ptr<core::Base> customPitchDirectionEntity() const;
    bool customPitchDirectionEntity(const core::Ptr<core::Base>& value);

    /// Returns the direction that the pitch angle is measured from. This property will return null in the case
    /// where the BallJointMotion object was obtained from a JointInput object.
    core::Ptr<core::Vector3D> pitchDirectionVector() const;

    /// Gets and sets the direction that the pitch is measured from.
    /// This can only be set to XAxisJointDirection and can return XAxisJointDirection
    /// or CustomJointDirection. If this returns CustomJointDirection then the
    /// customYawDirectionEntity will return an entity that defines the direction.
    /// If there is a custom direction defined and this property is set to XAxisJointDirection,
    /// the custom direction will be removed and customYawDirectionEntity will return null.
    JointDirections yawDirection() const;
    bool yawDirection(JointDirections value);

    /// This property defines a custom yaw direction and can be set using various types
    /// of entities that can infer a direction. For example, a linear edge, sketch line,
    /// planar face, and cylindrical face.This property is only valid in the case where the
    /// yawDirection property returns CustomJointDirection. Setting this property will
    /// automatically set the yawDirection property to CustomJointDirection.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this joint.
    /// This can be accomplished using the following code: thisJoint.timelineObject.rollTo(True)
    core::Ptr<core::Base> customYawDirectionEntity() const;
    bool customYawDirectionEntity(const core::Ptr<core::Base>& value);

    /// Returns the direction that the yaw angle is measured from. This property will return null in the case
    /// where the BallJointMotion object was obtained from a JointInput object.
    core::Ptr<core::Vector3D> yawDirectionVector() const;

    /// Returns the direction that the roll angle is measured from. This property will return null in the case
    /// where the BallJointMotion object was obtained from a JointInput object.
    core::Ptr<core::Vector3D> rollDirectionVector() const;

    /// Gets and sets the pitch value. This is in radians. Setting this value is
    /// the equivalent of using the Drive Joints command.
    double pitchValue() const;
    bool pitchValue(double value);

    /// Returns a JointLimits object that defines the limits of rotation for the pitch.
    /// Use the functionality of the returned JointLimits object to get, set, and modify
    /// the joint limits.
    core::Ptr<JointLimits> pitchLimits() const;

    /// Gets and sets the yaw value. This is in radians. Setting this value is
    /// the equivalent of using the Drive Joints command.
    double yawValue() const;
    bool yawValue(double value);

    /// Returns a JointLimits object that defines the limits of rotation for the yaw.
    /// Use the functionality of the returned JointLimits object to get, set, and modify
    /// the joint limits.
    core::Ptr<JointLimits> yawLimits() const;

    /// Gets and sets the roll value. This is in radians. Setting this value is
    /// the equivalent of using the Drive Joints command.
    double rollValue() const;
    bool rollValue(double value);

    /// Returns a JointLimits object that defines the limits of rotation for the roll.
    /// Use the functionality of the returned JointLimits object to get, set, and modify
    /// the joint limits.
    core::Ptr<JointLimits> rollLimits() const;

    ADSK_FUSION_BALLJOINTMOTION_API static const char* classType();
    ADSK_FUSION_BALLJOINTMOTION_API const char* objectType() const override;
    ADSK_FUSION_BALLJOINTMOTION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BALLJOINTMOTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual JointDirections pitchDirection_raw() const = 0;
    virtual bool pitchDirection_raw(JointDirections value) = 0;
    virtual core::Base* customPitchDirectionEntity_raw() const = 0;
    virtual bool customPitchDirectionEntity_raw(core::Base* value) = 0;
    virtual core::Vector3D* pitchDirectionVector_raw() const = 0;
    virtual JointDirections yawDirection_raw() const = 0;
    virtual bool yawDirection_raw(JointDirections value) = 0;
    virtual core::Base* customYawDirectionEntity_raw() const = 0;
    virtual bool customYawDirectionEntity_raw(core::Base* value) = 0;
    virtual core::Vector3D* yawDirectionVector_raw() const = 0;
    virtual core::Vector3D* rollDirectionVector_raw() const = 0;
    virtual double pitchValue_raw() const = 0;
    virtual bool pitchValue_raw(double value) = 0;
    virtual JointLimits* pitchLimits_raw() const = 0;
    virtual double yawValue_raw() const = 0;
    virtual bool yawValue_raw(double value) = 0;
    virtual JointLimits* yawLimits_raw() const = 0;
    virtual double rollValue_raw() const = 0;
    virtual bool rollValue_raw(double value) = 0;
    virtual JointLimits* rollLimits_raw() const = 0;
};

// Inline wrappers

inline JointDirections BallJointMotion::pitchDirection() const
{
    JointDirections res = pitchDirection_raw();
    return res;
}

inline bool BallJointMotion::pitchDirection(JointDirections value)
{
    return pitchDirection_raw(value);
}

inline core::Ptr<core::Base> BallJointMotion::customPitchDirectionEntity() const
{
    core::Ptr<core::Base> res = customPitchDirectionEntity_raw();
    return res;
}

inline bool BallJointMotion::customPitchDirectionEntity(const core::Ptr<core::Base>& value)
{
    return customPitchDirectionEntity_raw(value.get());
}

inline core::Ptr<core::Vector3D> BallJointMotion::pitchDirectionVector() const
{
    core::Ptr<core::Vector3D> res = pitchDirectionVector_raw();
    return res;
}

inline JointDirections BallJointMotion::yawDirection() const
{
    JointDirections res = yawDirection_raw();
    return res;
}

inline bool BallJointMotion::yawDirection(JointDirections value)
{
    return yawDirection_raw(value);
}

inline core::Ptr<core::Base> BallJointMotion::customYawDirectionEntity() const
{
    core::Ptr<core::Base> res = customYawDirectionEntity_raw();
    return res;
}

inline bool BallJointMotion::customYawDirectionEntity(const core::Ptr<core::Base>& value)
{
    return customYawDirectionEntity_raw(value.get());
}

inline core::Ptr<core::Vector3D> BallJointMotion::yawDirectionVector() const
{
    core::Ptr<core::Vector3D> res = yawDirectionVector_raw();
    return res;
}

inline core::Ptr<core::Vector3D> BallJointMotion::rollDirectionVector() const
{
    core::Ptr<core::Vector3D> res = rollDirectionVector_raw();
    return res;
}

inline double BallJointMotion::pitchValue() const
{
    double res = pitchValue_raw();
    return res;
}

inline bool BallJointMotion::pitchValue(double value)
{
    return pitchValue_raw(value);
}

inline core::Ptr<JointLimits> BallJointMotion::pitchLimits() const
{
    core::Ptr<JointLimits> res = pitchLimits_raw();
    return res;
}

inline double BallJointMotion::yawValue() const
{
    double res = yawValue_raw();
    return res;
}

inline bool BallJointMotion::yawValue(double value)
{
    return yawValue_raw(value);
}

inline core::Ptr<JointLimits> BallJointMotion::yawLimits() const
{
    core::Ptr<JointLimits> res = yawLimits_raw();
    return res;
}

inline double BallJointMotion::rollValue() const
{
    double res = rollValue_raw();
    return res;
}

inline bool BallJointMotion::rollValue(double value)
{
    return rollValue_raw(value);
}

inline core::Ptr<JointLimits> BallJointMotion::rollLimits() const
{
    core::Ptr<JointLimits> res = rollLimits_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BALLJOINTMOTION_API