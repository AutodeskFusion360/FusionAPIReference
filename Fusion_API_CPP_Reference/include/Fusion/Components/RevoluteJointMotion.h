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
# ifdef __COMPILING_ADSK_FUSION_REVOLUTEJOINTMOTION_CPP__
# define ADSK_FUSION_REVOLUTEJOINTMOTION_API XI_EXPORT
# else
# define ADSK_FUSION_REVOLUTEJOINTMOTION_API
# endif
#else
# define ADSK_FUSION_REVOLUTEJOINTMOTION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class JointLimits;
}}

namespace adsk { namespace fusion {

/// Represents the set of information specific to a revolute joint.
class RevoluteJointMotion : public JointMotion {
public:

    /// Gets and sets the direction of the axis of rotation. This can be set to
    /// XAxisJointDirection, YAxisJointDirection, or ZAxisJointDirection. It can
    /// return those three directions and CustomJointDirection. If this returns
    /// CustomJointDirection then the customRotationAxisEntity will return an entity
    /// that defines the axis. If there is a custom rotation axis defined and this
    /// property is set to one of the three standard axes, the custom rotation will
    /// be removed and customRotationAxisEntity will return null.
    JointDirections rotationAxis() const;
    bool rotationAxis(JointDirections value);

    /// Returns the direction of the rotation axis. This property will return null in the case
    /// where the RevolutionJointMotion object was obtained from a JointInput object.
    core::Ptr<core::Vector3D> rotationAxisVector() const;

    /// This property can be set using various types of entities that can infer an
    /// axis. For example, a linear edge, sketch line, planar face, and cylindrical face.
    /// This property is only valid in the case where the rotationAxis property returns
    /// CustomJointDirection. Setting this property will automatically set
    /// the rotationAxis property to CustomJointDirection.
    core::Ptr<core::Base> customRotationAxisEntity() const;
    bool customRotationAxisEntity(const core::Ptr<core::Base>& value);

    /// Gets and sets the rotation value. This is in radians. Setting this value is
    /// the equivalent of using the Drive Joints command.
    double rotationValue() const;
    bool rotationValue(double value);

    /// Returns a JointLimits object that defines the rotation limits for this joint.
    /// Use the functionality of the returned JointLimits object to get, set, and modify
    /// the joint limits.
    core::Ptr<JointLimits> rotationLimits() const;

    ADSK_FUSION_REVOLUTEJOINTMOTION_API static const char* classType();
    ADSK_FUSION_REVOLUTEJOINTMOTION_API const char* objectType() const override;
    ADSK_FUSION_REVOLUTEJOINTMOTION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_REVOLUTEJOINTMOTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual JointDirections rotationAxis_raw() const = 0;
    virtual bool rotationAxis_raw(JointDirections value) = 0;
    virtual core::Vector3D* rotationAxisVector_raw() const = 0;
    virtual core::Base* customRotationAxisEntity_raw() const = 0;
    virtual bool customRotationAxisEntity_raw(core::Base* value) = 0;
    virtual double rotationValue_raw() const = 0;
    virtual bool rotationValue_raw(double value) = 0;
    virtual JointLimits* rotationLimits_raw() const = 0;
};

// Inline wrappers

inline JointDirections RevoluteJointMotion::rotationAxis() const
{
    JointDirections res = rotationAxis_raw();
    return res;
}

inline bool RevoluteJointMotion::rotationAxis(JointDirections value)
{
    return rotationAxis_raw(value);
}

inline core::Ptr<core::Vector3D> RevoluteJointMotion::rotationAxisVector() const
{
    core::Ptr<core::Vector3D> res = rotationAxisVector_raw();
    return res;
}

inline core::Ptr<core::Base> RevoluteJointMotion::customRotationAxisEntity() const
{
    core::Ptr<core::Base> res = customRotationAxisEntity_raw();
    return res;
}

inline bool RevoluteJointMotion::customRotationAxisEntity(const core::Ptr<core::Base>& value)
{
    return customRotationAxisEntity_raw(value.get());
}

inline double RevoluteJointMotion::rotationValue() const
{
    double res = rotationValue_raw();
    return res;
}

inline bool RevoluteJointMotion::rotationValue(double value)
{
    return rotationValue_raw(value);
}

inline core::Ptr<JointLimits> RevoluteJointMotion::rotationLimits() const
{
    core::Ptr<JointLimits> res = rotationLimits_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_REVOLUTEJOINTMOTION_API