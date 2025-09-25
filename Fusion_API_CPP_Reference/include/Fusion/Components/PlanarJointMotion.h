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
# ifdef __COMPILING_ADSK_FUSION_PLANARJOINTMOTION_CPP__
# define ADSK_FUSION_PLANARJOINTMOTION_API XI_EXPORT
# else
# define ADSK_FUSION_PLANARJOINTMOTION_API
# endif
#else
# define ADSK_FUSION_PLANARJOINTMOTION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class JointLimits;
}}

namespace adsk { namespace fusion {

/// Represents the set of information specific to a planar joint.
class PlanarJointMotion : public JointMotion {
public:

    /// Gets and sets the direction of the normal of the single degree of rotation.
    /// This can be set to XAxisJointDirection, YAxisJointDirection, or ZAxisJointDirection.
    /// It can return those three directions and CustomJointDirection. If this returns
    /// CustomJointDirection then the customNormalDirectionEntity will return an entity
    /// that defines the direction. If there is a custom direction defined and this
    /// property is set to one of the three standard axes, the custom direction will
    /// be removed and customNormalDirectionEntity will return null.
    JointDirections normalDirection() const;
    bool normalDirection(JointDirections value);

    /// Returns the direction of the normal direction. This property will return null in the case
    /// where the PlanarJointMotion object was obtained from a JointInput object.
    core::Ptr<core::Vector3D> normalDirectionVector() const;

    /// This property defines a custom normal direction and can be set using various types
    /// of entities that can infer a direction. For example, a linear edge, sketch line,
    /// planar face, and cylindrical face.This property is only valid in the case where the
    /// normalDirection property returns CustomJointDirection. Setting this property will
    /// automatically set the normalDirection property to CustomJointDirection.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this joint.
    /// This can be accomplished using the following code: thisJoint.timelineObject.rollTo(True)
    core::Ptr<core::Base> customNormalDirectionEntity() const;
    bool customNormalDirectionEntity(const core::Ptr<core::Base>& value);

    /// Gets the direction used as the primary direction for the two translational degrees of
    /// freedom. The value of this property is automatically set when setting the normalDirection.
    /// When reading this value it can return XAxisJointDirection, YAxisJointDirection, ZAxisJointDirection,
    /// or CustomJointDirection. If it's CustomJointDirection then the direction the direction can be
    /// determined using the primarySlideDirectionVector and the entity controlling the direction can
    /// be get and set using the customPrimarySlideDirectionEntity.
    JointDirections primarySlideDirection() const;

    /// Returns the direction of the primary slide direction. This property will return null in the case
    /// where the PlanarJointMotion object was obtained from a JointInput object.
    core::Ptr<core::Vector3D> primarySlideDirectionVector() const;

    /// This property can be set using various types of entities that can infer a
    /// direction. For example, a linear edge, sketch line, planar face, and cylindrical face.
    /// When reading this property, it is only valid in the case where the primarySlideDirection property returns
    /// CustomJointDirection. Setting this property will automatically set the primarySlideDirection property to
    /// CustomJointDirection. The entity defining the custom direction by be perpendicular to the normal direction.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this joint.
    /// This can be accomplished using the following code: thisJoint.timelineObject.rollTo(True)
    core::Ptr<core::Base> customPrimarySlideDirectionEntity() const;
    bool customPrimarySlideDirectionEntity(const core::Ptr<core::Base>& value);

    /// Returns the direction of the secondary slide direction. This property will return null in the case
    /// where the PlanarJointMotion object was obtained from a JointInput object.
    core::Ptr<core::Vector3D> secondarySlideDirectionVector() const;

    /// Gets and sets the rotation value. This is in radians. Setting this value is
    /// the equivalent of using the Drive Joints command.
    double rotationValue() const;
    bool rotationValue(double value);

    /// Returns a JointLimits object that defines the limits of rotation for this joint.
    /// Use the functionality of the returned JointLimits object to get, set, and modify
    /// the joint limits.
    core::Ptr<JointLimits> rotationLimits() const;

    /// Gets and sets the offset value in the primary direction. This is in centimeters.
    /// Setting this value is the equivalent of using the Drive Joints command.
    double primarySlideValue() const;
    bool primarySlideValue(double value);

    /// Returns a JointLimits object that defines the limits in the primary direction for this joint.
    /// Use the functionality of the returned JointLimits object to get, set, and modify
    /// the joint limits.
    core::Ptr<JointLimits> primarySlideLimits() const;

    /// Gets and sets the offset value in the secondary direction. This is in centimeters.
    /// Setting this value is the equivalent of using the Drive Joints command.
    double secondarySlideValue() const;
    bool secondarySlideValue(double value);

    /// Returns a JointLimits object that defines the limits in the secondary direction for this joint.
    /// Use the functionality of the returned JointLimits object to get, set, and modify
    /// the joint limits.
    core::Ptr<JointLimits> secondarySlideLimits() const;

    ADSK_FUSION_PLANARJOINTMOTION_API static const char* classType();
    ADSK_FUSION_PLANARJOINTMOTION_API const char* objectType() const override;
    ADSK_FUSION_PLANARJOINTMOTION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PLANARJOINTMOTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual JointDirections normalDirection_raw() const = 0;
    virtual bool normalDirection_raw(JointDirections value) = 0;
    virtual core::Vector3D* normalDirectionVector_raw() const = 0;
    virtual core::Base* customNormalDirectionEntity_raw() const = 0;
    virtual bool customNormalDirectionEntity_raw(core::Base* value) = 0;
    virtual JointDirections primarySlideDirection_raw() const = 0;
    virtual core::Vector3D* primarySlideDirectionVector_raw() const = 0;
    virtual core::Base* customPrimarySlideDirectionEntity_raw() const = 0;
    virtual bool customPrimarySlideDirectionEntity_raw(core::Base* value) = 0;
    virtual core::Vector3D* secondarySlideDirectionVector_raw() const = 0;
    virtual double rotationValue_raw() const = 0;
    virtual bool rotationValue_raw(double value) = 0;
    virtual JointLimits* rotationLimits_raw() const = 0;
    virtual double primarySlideValue_raw() const = 0;
    virtual bool primarySlideValue_raw(double value) = 0;
    virtual JointLimits* primarySlideLimits_raw() const = 0;
    virtual double secondarySlideValue_raw() const = 0;
    virtual bool secondarySlideValue_raw(double value) = 0;
    virtual JointLimits* secondarySlideLimits_raw() const = 0;
};

// Inline wrappers

inline JointDirections PlanarJointMotion::normalDirection() const
{
    JointDirections res = normalDirection_raw();
    return res;
}

inline bool PlanarJointMotion::normalDirection(JointDirections value)
{
    return normalDirection_raw(value);
}

inline core::Ptr<core::Vector3D> PlanarJointMotion::normalDirectionVector() const
{
    core::Ptr<core::Vector3D> res = normalDirectionVector_raw();
    return res;
}

inline core::Ptr<core::Base> PlanarJointMotion::customNormalDirectionEntity() const
{
    core::Ptr<core::Base> res = customNormalDirectionEntity_raw();
    return res;
}

inline bool PlanarJointMotion::customNormalDirectionEntity(const core::Ptr<core::Base>& value)
{
    return customNormalDirectionEntity_raw(value.get());
}

inline JointDirections PlanarJointMotion::primarySlideDirection() const
{
    JointDirections res = primarySlideDirection_raw();
    return res;
}

inline core::Ptr<core::Vector3D> PlanarJointMotion::primarySlideDirectionVector() const
{
    core::Ptr<core::Vector3D> res = primarySlideDirectionVector_raw();
    return res;
}

inline core::Ptr<core::Base> PlanarJointMotion::customPrimarySlideDirectionEntity() const
{
    core::Ptr<core::Base> res = customPrimarySlideDirectionEntity_raw();
    return res;
}

inline bool PlanarJointMotion::customPrimarySlideDirectionEntity(const core::Ptr<core::Base>& value)
{
    return customPrimarySlideDirectionEntity_raw(value.get());
}

inline core::Ptr<core::Vector3D> PlanarJointMotion::secondarySlideDirectionVector() const
{
    core::Ptr<core::Vector3D> res = secondarySlideDirectionVector_raw();
    return res;
}

inline double PlanarJointMotion::rotationValue() const
{
    double res = rotationValue_raw();
    return res;
}

inline bool PlanarJointMotion::rotationValue(double value)
{
    return rotationValue_raw(value);
}

inline core::Ptr<JointLimits> PlanarJointMotion::rotationLimits() const
{
    core::Ptr<JointLimits> res = rotationLimits_raw();
    return res;
}

inline double PlanarJointMotion::primarySlideValue() const
{
    double res = primarySlideValue_raw();
    return res;
}

inline bool PlanarJointMotion::primarySlideValue(double value)
{
    return primarySlideValue_raw(value);
}

inline core::Ptr<JointLimits> PlanarJointMotion::primarySlideLimits() const
{
    core::Ptr<JointLimits> res = primarySlideLimits_raw();
    return res;
}

inline double PlanarJointMotion::secondarySlideValue() const
{
    double res = secondarySlideValue_raw();
    return res;
}

inline bool PlanarJointMotion::secondarySlideValue(double value)
{
    return secondarySlideValue_raw(value);
}

inline core::Ptr<JointLimits> PlanarJointMotion::secondarySlideLimits() const
{
    core::Ptr<JointLimits> res = secondarySlideLimits_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PLANARJOINTMOTION_API