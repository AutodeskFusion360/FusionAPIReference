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
# ifdef __COMPILING_ADSK_FUSION_SLIDERJOINTMOTION_CPP__
# define ADSK_FUSION_SLIDERJOINTMOTION_API XI_EXPORT
# else
# define ADSK_FUSION_SLIDERJOINTMOTION_API
# endif
#else
# define ADSK_FUSION_SLIDERJOINTMOTION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class JointLimits;
}}

namespace adsk { namespace fusion {

/// Represents the set of information specific to a slider joint.
class SliderJointMotion : public JointMotion {
public:

    /// Gets and sets the direction of the slide. This can be set to
    /// XAxisJointDirection, YAxisJointDirection, or ZAxisJointDirection. It can
    /// return those three directions and CustomJointDirection. If this returns
    /// CustomJointDirection then the customSlideDirectionEntity will return an entity
    /// that defines the direction. If there is a custom direction defined and this
    /// property is set to one of the three standard axes, the custom direction will
    /// be removed and customSlideDirectionEntity will return null.
    JointDirections slideDirection() const;
    bool slideDirection(JointDirections value);

    /// Returns the direction of the slide. This property will return null in the case
    /// where the SliderJointMotion object was obtained from a JointInput object.
    core::Ptr<core::Vector3D> slideDirectionVector() const;

    /// This property can be set using various types of entities that can infer a
    /// direction. For example, a linear edge, sketch line, planar face, and cylindrical face.
    /// This property is only valid in the case where the slideDirection property returns
    /// CustomJointDirection. Setting this property will automatically set
    /// the slideDirection property to CustomJointDirection.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this joint.
    /// This can be accomplished using the following code: thisJoint.timelineObject.rollTo(True)
    core::Ptr<core::Base> customSlideDirectionEntity() const;
    bool customSlideDirectionEntity(const core::Ptr<core::Base>& value);

    /// Gets and sets the slide value. This is in centimeters. Setting this value is
    /// the equivalent of using the Drive Joints command.
    double slideValue() const;
    bool slideValue(double value);

    /// Returns a JointLimits object that defines the slide limits for this joint.
    /// Use the functionality of the returned JointLimits object to get, set, and modify
    /// the joint limits.
    core::Ptr<JointLimits> slideLimits() const;

    ADSK_FUSION_SLIDERJOINTMOTION_API static const char* classType();
    ADSK_FUSION_SLIDERJOINTMOTION_API const char* objectType() const override;
    ADSK_FUSION_SLIDERJOINTMOTION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SLIDERJOINTMOTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual JointDirections slideDirection_raw() const = 0;
    virtual bool slideDirection_raw(JointDirections value) = 0;
    virtual core::Vector3D* slideDirectionVector_raw() const = 0;
    virtual core::Base* customSlideDirectionEntity_raw() const = 0;
    virtual bool customSlideDirectionEntity_raw(core::Base* value) = 0;
    virtual double slideValue_raw() const = 0;
    virtual bool slideValue_raw(double value) = 0;
    virtual JointLimits* slideLimits_raw() const = 0;
};

// Inline wrappers

inline JointDirections SliderJointMotion::slideDirection() const
{
    JointDirections res = slideDirection_raw();
    return res;
}

inline bool SliderJointMotion::slideDirection(JointDirections value)
{
    return slideDirection_raw(value);
}

inline core::Ptr<core::Vector3D> SliderJointMotion::slideDirectionVector() const
{
    core::Ptr<core::Vector3D> res = slideDirectionVector_raw();
    return res;
}

inline core::Ptr<core::Base> SliderJointMotion::customSlideDirectionEntity() const
{
    core::Ptr<core::Base> res = customSlideDirectionEntity_raw();
    return res;
}

inline bool SliderJointMotion::customSlideDirectionEntity(const core::Ptr<core::Base>& value)
{
    return customSlideDirectionEntity_raw(value.get());
}

inline double SliderJointMotion::slideValue() const
{
    double res = slideValue_raw();
    return res;
}

inline bool SliderJointMotion::slideValue(double value)
{
    return slideValue_raw(value);
}

inline core::Ptr<JointLimits> SliderJointMotion::slideLimits() const
{
    core::Ptr<JointLimits> res = slideLimits_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SLIDERJOINTMOTION_API