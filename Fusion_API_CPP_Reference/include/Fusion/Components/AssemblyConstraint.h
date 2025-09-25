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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ASSEMBLYCONSTRAINT_CPP__
# define ADSK_FUSION_ASSEMBLYCONSTRAINT_API XI_EXPORT
# else
# define ADSK_FUSION_ASSEMBLYCONSTRAINT_API
# endif
#else
# define ADSK_FUSION_ASSEMBLYCONSTRAINT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
}}
namespace adsk { namespace fusion {
    class Component;
    class GeometricRelationships;
    class Occurrence;
    class TimelineObject;
}}

namespace adsk { namespace fusion {

/// Represents an assembly constraint.
class AssemblyConstraint : public core::Base {
public:

    /// Gets and sets the name of the assembly constraint. This is the name seen in the browser and timeline.
    std::string name() const;
    bool name(const std::string& value);

    /// Returns the set of geometric relationships used for this assembly constraint.
    core::Ptr<GeometricRelationships> geometricRelationships() const;

    /// Returns the parent component that owns this assembly constraint.
    core::Ptr<Component> parentComponent() const;

    /// Deletes this assembly constraint.
    /// Returns true if the delete is successful.
    bool deleteMe();

    /// Returns the timeline object associated with this assembly constraint.
    core::Ptr<TimelineObject> timelineObject() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<AssemblyConstraint> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<AssemblyConstraint> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// Gets and sets if this assembly constraint is suppressed. If suppressed,
    /// all of the assembly constraints within the  will be suppressed.
    bool isSuppressed() const;
    bool isSuppressed(bool value);

    /// Returns the collection of attributes associated with this assembly constraint.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns the current health state of the assembly constraint.
    FeatureHealthStates healthState() const;

    /// Returns the error or warning message in the case where the healthState property returns either
    /// WarningFeatureHealthState or ErrorFeatureHealthState. Otherwise this property returns an empty string.
    std::string errorOrWarningMessage() const;

    /// Returns a token for the assembly constraint object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same assembly constraint.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    /// Gets and sets if the light bulb of this assembly constraint, as displayed in the browser, is on or off.
    /// An assembly constraint will only be visible if the light bulb is switched on. However,
    /// the light bulb can be on and the assembly constraint still invisible if a higher level occurrence
    /// in the assembly context is not visible because its light bulb is off or the light bulb of the parent Joints
    /// folder is off.
    bool isLightBulbOn() const;
    bool isLightBulbOn(bool value);

    /// Gets whether the assembly constraint is visible. To change the visibility see the isLightBulbOn property.
    /// This property is affected by the assembly context.
    bool isVisible() const;

    ADSK_FUSION_ASSEMBLYCONSTRAINT_API static const char* classType();
    ADSK_FUSION_ASSEMBLYCONSTRAINT_API const char* objectType() const override;
    ADSK_FUSION_ASSEMBLYCONSTRAINT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ASSEMBLYCONSTRAINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual GeometricRelationships* geometricRelationships_raw() const = 0;
    virtual Component* parentComponent_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual TimelineObject* timelineObject_raw() const = 0;
    virtual AssemblyConstraint* nativeObject_raw() const = 0;
    virtual AssemblyConstraint* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual bool isSuppressed_raw() const = 0;
    virtual bool isSuppressed_raw(bool value) = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual FeatureHealthStates healthState_raw() const = 0;
    virtual char* errorOrWarningMessage_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
    virtual bool isLightBulbOn_raw() const = 0;
    virtual bool isLightBulbOn_raw(bool value) = 0;
    virtual bool isVisible_raw() const = 0;
};

// Inline wrappers

inline std::string AssemblyConstraint::name() const
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

inline bool AssemblyConstraint::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<GeometricRelationships> AssemblyConstraint::geometricRelationships() const
{
    core::Ptr<GeometricRelationships> res = geometricRelationships_raw();
    return res;
}

inline core::Ptr<Component> AssemblyConstraint::parentComponent() const
{
    core::Ptr<Component> res = parentComponent_raw();
    return res;
}

inline bool AssemblyConstraint::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<TimelineObject> AssemblyConstraint::timelineObject() const
{
    core::Ptr<TimelineObject> res = timelineObject_raw();
    return res;
}

inline core::Ptr<AssemblyConstraint> AssemblyConstraint::nativeObject() const
{
    core::Ptr<AssemblyConstraint> res = nativeObject_raw();
    return res;
}

inline core::Ptr<AssemblyConstraint> AssemblyConstraint::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<AssemblyConstraint> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<Occurrence> AssemblyConstraint::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline bool AssemblyConstraint::isSuppressed() const
{
    bool res = isSuppressed_raw();
    return res;
}

inline bool AssemblyConstraint::isSuppressed(bool value)
{
    return isSuppressed_raw(value);
}

inline core::Ptr<core::Attributes> AssemblyConstraint::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline FeatureHealthStates AssemblyConstraint::healthState() const
{
    FeatureHealthStates res = healthState_raw();
    return res;
}

inline std::string AssemblyConstraint::errorOrWarningMessage() const
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

inline std::string AssemblyConstraint::entityToken() const
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

inline bool AssemblyConstraint::isLightBulbOn() const
{
    bool res = isLightBulbOn_raw();
    return res;
}

inline bool AssemblyConstraint::isLightBulbOn(bool value)
{
    return isLightBulbOn_raw(value);
}

inline bool AssemblyConstraint::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ASSEMBLYCONSTRAINT_API