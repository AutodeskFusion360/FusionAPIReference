//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
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
# ifdef __COMPILING_ADSK_FUSION_MOTIONLINKINPUT_CPP__
# define ADSK_FUSION_MOTIONLINKINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_MOTIONLINKINPUT_API
# endif
#else
# define ADSK_FUSION_MOTIONLINKINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}

namespace adsk { namespace fusion {

/// Defines all of the information required to create a new MotionLink. This object provides
/// equivalent functionality to the MotionLink command dialog in that it gathers the required
/// information to create a MotionLink.
class MotionLinkInput : public core::Base {
public:

    /// Gets and sets the first Joint or AsBuiltJoint for this MotionLink. When you link two motions from the same joint, a valid joint should have its joint motion type of BallJointType, CylindricalJointType, PinSlotJointType or PlanarJointType.
    /// A joint whose joint motion is a RigidJointMotion type is never valid as the first joint..
    core::Ptr<core::Base> jointOne() const;
    bool jointOne(const core::Ptr<core::Base>& value);

    /// Gets and sets the second Joint or AsBuiltJoint for this MotionLink. This can be a joint or null, when this is set to null then the two motions are from the same joint specified by jointOne.
    /// A joint whose joint motion is a RigidJointMotion type is never valid as the second joint.
    core::Ptr<core::Base> jointTwo() const;
    bool jointTwo(const core::Ptr<core::Base>& value);

    /// Gets and sets the first motion type.
    JointMotionTypes motionOne() const;
    bool motionOne(JointMotionTypes value);

    /// Gets and sets the second motion type.
    JointMotionTypes motionTwo() const;
    bool motionTwo(JointMotionTypes value);

    /// Gets and sets the first motion link value. If the ValueInput uses a real then it is interpreted as centimeters for length and radians for angle.
    /// If it is a string then the units can be defined as part of the string (i.e. "2 in" or "60 deg") or if no units are specified it is interpreted using the current default units for length or angle.
    core::Ptr<core::ValueInput> valueOne() const;
    bool valueOne(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the second motion link value. If the ValueInput uses a real then it is interpreted as centimeters for length and radians for angle.
    /// If it is a string then the units can be defined as part of the string (i.e. "2 in" or "60 deg") or if no units are specified it is interpreted using the current default units for length or angle.
    core::Ptr<core::ValueInput> valueTwo() const;
    bool valueTwo(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets whether the direction of the motion is reversed or not.
    bool isReversed() const;
    bool isReversed(bool value);

    ADSK_FUSION_MOTIONLINKINPUT_API static const char* classType();
    ADSK_FUSION_MOTIONLINKINPUT_API const char* objectType() const override;
    ADSK_FUSION_MOTIONLINKINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MOTIONLINKINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* jointOne_raw() const = 0;
    virtual bool jointOne_raw(core::Base* value) = 0;
    virtual core::Base* jointTwo_raw() const = 0;
    virtual bool jointTwo_raw(core::Base* value) = 0;
    virtual JointMotionTypes motionOne_raw() const = 0;
    virtual bool motionOne_raw(JointMotionTypes value) = 0;
    virtual JointMotionTypes motionTwo_raw() const = 0;
    virtual bool motionTwo_raw(JointMotionTypes value) = 0;
    virtual core::ValueInput* valueOne_raw() const = 0;
    virtual bool valueOne_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* valueTwo_raw() const = 0;
    virtual bool valueTwo_raw(core::ValueInput* value) = 0;
    virtual bool isReversed_raw() const = 0;
    virtual bool isReversed_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MotionLinkInput::jointOne() const
{
    core::Ptr<core::Base> res = jointOne_raw();
    return res;
}

inline bool MotionLinkInput::jointOne(const core::Ptr<core::Base>& value)
{
    return jointOne_raw(value.get());
}

inline core::Ptr<core::Base> MotionLinkInput::jointTwo() const
{
    core::Ptr<core::Base> res = jointTwo_raw();
    return res;
}

inline bool MotionLinkInput::jointTwo(const core::Ptr<core::Base>& value)
{
    return jointTwo_raw(value.get());
}

inline JointMotionTypes MotionLinkInput::motionOne() const
{
    JointMotionTypes res = motionOne_raw();
    return res;
}

inline bool MotionLinkInput::motionOne(JointMotionTypes value)
{
    return motionOne_raw(value);
}

inline JointMotionTypes MotionLinkInput::motionTwo() const
{
    JointMotionTypes res = motionTwo_raw();
    return res;
}

inline bool MotionLinkInput::motionTwo(JointMotionTypes value)
{
    return motionTwo_raw(value);
}

inline core::Ptr<core::ValueInput> MotionLinkInput::valueOne() const
{
    core::Ptr<core::ValueInput> res = valueOne_raw();
    return res;
}

inline bool MotionLinkInput::valueOne(const core::Ptr<core::ValueInput>& value)
{
    return valueOne_raw(value.get());
}

inline core::Ptr<core::ValueInput> MotionLinkInput::valueTwo() const
{
    core::Ptr<core::ValueInput> res = valueTwo_raw();
    return res;
}

inline bool MotionLinkInput::valueTwo(const core::Ptr<core::ValueInput>& value)
{
    return valueTwo_raw(value.get());
}

inline bool MotionLinkInput::isReversed() const
{
    bool res = isReversed_raw();
    return res;
}

inline bool MotionLinkInput::isReversed(bool value)
{
    return isReversed_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MOTIONLINKINPUT_API