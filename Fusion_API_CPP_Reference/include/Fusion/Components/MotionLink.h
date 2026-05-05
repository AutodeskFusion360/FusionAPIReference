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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MOTIONLINK_CPP__
# define ADSK_FUSION_MOTIONLINK_API XI_EXPORT
# else
# define ADSK_FUSION_MOTIONLINK_API
# endif
#else
# define ADSK_FUSION_MOTIONLINK_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class Component;
    class ModelParameter;
    class Occurrence;
    class TimelineObject;
}}

namespace adsk { namespace fusion {

/// A MotionLink in a design.
class MotionLink : public core::Base {
public:

    /// Returns the parent component that owns this MotionLink.
    core::Ptr<Component> parentComponent() const;

    /// Gets and sets the name of the MotionLink.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets the first joint for this MotionLink.
    core::Ptr<core::Base> jointOne() const;

    /// Gets the second joint for this MotionLink. This can return null if the linked motions are from the same joint.
    core::Ptr<core::Base> jointTwo() const;

    /// Gets the first motion type.
    JointMotionTypes motionOne() const;

    /// Gets the second motion type.
    JointMotionTypes motionTwo() const;

    /// Returns the ModelParameter for the first motion link value.
    core::Ptr<ModelParameter> valueOne() const;

    /// Returns the ModelParameter for the second motion link value.
    core::Ptr<ModelParameter> valueTwo() const;

    /// Method that sets the motion data.
    /// motionOne : Specifies the first motion to link.
    /// valueOne : Specifies the first motion link value. If the ValueInput uses a real then it is interpreted as centimeters for length and radians for angle.
    /// If it is a string then the units can be defined as part of the string (i.e. "2 in" or "60 deg") or if no units are specified it is interpreted using the current default units for length or angle.
    /// motionTwo : Specifies the second motion to link.
    /// valueTwo : Specifies the second motion link value. If the ValueInput uses a real then it is interpreted as centimeters for length and radians for angle.
    /// If it is a string then the units can be defined as part of the string (i.e. "2 in" or "60 deg") or if no units are specified it is interpreted using the current default units for length or angle.
    /// isReversed : Optional argument that specifies whether to reverse the direction of the motion.
    /// Returns true if successful.
    bool setMotionData(JointMotionTypes motionOne, const core::Ptr<core::ValueInput>& valueOne, JointMotionTypes motionTwo, const core::Ptr<core::ValueInput>& valueTwo, bool isReversed = false);

    /// Gets and sets whether the motion is reversed or not.
    bool isReversed() const;
    bool isReversed(bool value);

    /// Deletes this MotionLink.
    /// Returns true if the delete is successful.
    bool deleteMe();

    /// Returns the timeline object associated with this MotionLink.
    core::Ptr<TimelineObject> timelineObject() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<MotionLink> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<MotionLink> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// Gets and sets if this MotionLink is suppressed.
    bool isSuppressed() const;
    bool isSuppressed(bool value);

    /// Returns the collection of attributes associated with this MotionLink.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns the current health state of the MotionLink.
    FeatureHealthStates healthState() const;

    /// Returns the error or warning message in the case where the healthState property returns either
    /// WarningFeatureHealthState or ErrorFeatureHealthState. Otherwise this property returns an empty string.
    std::string errorOrWarningMessage() const;

    /// Returns a token for the MotionLink object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same MotionLink.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    ADSK_FUSION_MOTIONLINK_API static const char* classType();
    ADSK_FUSION_MOTIONLINK_API const char* objectType() const override;
    ADSK_FUSION_MOTIONLINK_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MOTIONLINK_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Component* parentComponent_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual core::Base* jointOne_raw() const = 0;
    virtual core::Base* jointTwo_raw() const = 0;
    virtual JointMotionTypes motionOne_raw() const = 0;
    virtual JointMotionTypes motionTwo_raw() const = 0;
    virtual ModelParameter* valueOne_raw() const = 0;
    virtual ModelParameter* valueTwo_raw() const = 0;
    virtual bool setMotionData_raw(JointMotionTypes motionOne, core::ValueInput* valueOne, JointMotionTypes motionTwo, core::ValueInput* valueTwo, bool isReversed) = 0;
    virtual bool isReversed_raw() const = 0;
    virtual bool isReversed_raw(bool value) = 0;
    virtual bool deleteMe_raw() = 0;
    virtual TimelineObject* timelineObject_raw() const = 0;
    virtual MotionLink* nativeObject_raw() const = 0;
    virtual MotionLink* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual bool isSuppressed_raw() const = 0;
    virtual bool isSuppressed_raw(bool value) = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual FeatureHealthStates healthState_raw() const = 0;
    virtual char* errorOrWarningMessage_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Component> MotionLink::parentComponent() const
{
    core::Ptr<Component> res = parentComponent_raw();
    return res;
}

inline std::string MotionLink::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MotionLink::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<core::Base> MotionLink::jointOne() const
{
    core::Ptr<core::Base> res = jointOne_raw();
    return res;
}

inline core::Ptr<core::Base> MotionLink::jointTwo() const
{
    core::Ptr<core::Base> res = jointTwo_raw();
    return res;
}

inline JointMotionTypes MotionLink::motionOne() const
{
    JointMotionTypes res = motionOne_raw();
    return res;
}

inline JointMotionTypes MotionLink::motionTwo() const
{
    JointMotionTypes res = motionTwo_raw();
    return res;
}

inline core::Ptr<ModelParameter> MotionLink::valueOne() const
{
    core::Ptr<ModelParameter> res = valueOne_raw();
    return res;
}

inline core::Ptr<ModelParameter> MotionLink::valueTwo() const
{
    core::Ptr<ModelParameter> res = valueTwo_raw();
    return res;
}

inline bool MotionLink::setMotionData(JointMotionTypes motionOne, const core::Ptr<core::ValueInput>& valueOne, JointMotionTypes motionTwo, const core::Ptr<core::ValueInput>& valueTwo, bool isReversed)
{
    bool res = setMotionData_raw(motionOne, valueOne.get(), motionTwo, valueTwo.get(), isReversed);
    return res;
}

inline bool MotionLink::isReversed() const
{
    bool res = isReversed_raw();
    return res;
}

inline bool MotionLink::isReversed(bool value)
{
    return isReversed_raw(value);
}

inline bool MotionLink::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<TimelineObject> MotionLink::timelineObject() const
{
    core::Ptr<TimelineObject> res = timelineObject_raw();
    return res;
}

inline core::Ptr<MotionLink> MotionLink::nativeObject() const
{
    core::Ptr<MotionLink> res = nativeObject_raw();
    return res;
}

inline core::Ptr<MotionLink> MotionLink::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<MotionLink> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<Occurrence> MotionLink::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline bool MotionLink::isSuppressed() const
{
    bool res = isSuppressed_raw();
    return res;
}

inline bool MotionLink::isSuppressed(bool value)
{
    return isSuppressed_raw(value);
}

inline core::Ptr<core::Attributes> MotionLink::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline FeatureHealthStates MotionLink::healthState() const
{
    FeatureHealthStates res = healthState_raw();
    return res;
}

inline std::string MotionLink::errorOrWarningMessage() const
{
    std::string res;

    char* p= errorOrWarningMessage_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string MotionLink::entityToken() const
{
    std::string res;

    char* p= entityToken_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MOTIONLINK_API