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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPOINT_CPP__
# define ADSK_FUSION_CONSTRUCTIONPOINT_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPOINT_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPOINT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
    class Point3D;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class Component;
    class ConstructionPointDefinition;
    class Occurrence;
    class TimelineObject;
}}

namespace adsk { namespace fusion {

/// ConstructionPoint Object
class ConstructionPoint : public core::Base {
public:

    /// Returns a Point3D object that represents the position of the construction point.
    /// The returned geometry is in the AssemblyContext of this ConstructionPoint.
    core::Ptr<core::Point3D> geometry() const;

    /// The name of the construction point as it is displayed in the browser.
    std::string name() const;
    bool name(const std::string& value);

    /// Returns the construction point definition object which provides access to the
    /// information defining the construction point.
    core::Ptr<ConstructionPointDefinition> definition() const;

    /// Deletes the construction point.
    /// Returns a bool indicating if the delete was successful or not.
    bool deleteMe();

    /// Indicates if this construction point can be deleted. The base
    /// construction point cannot be deleted.
    bool isDeletable() const;

    /// Indicates if the light bulb (as displayed in the browser) is on.
    /// A construction point will only be visible if it's light bulb, and that of it's
    /// containing folder and parent component/s are also on.
    bool isLightBulbOn() const;
    bool isLightBulbOn(bool value);

    /// Gets if the construction point is visible.
    /// This property is affected by the AssemblyContext of the construction point.
    bool isVisible() const;

    /// Returns the parent component or base feature. If both the design and the construction
    /// point are parametric, the parent will be a component. If the design is parametric and
    /// the construction point is not, the parent will be a base feature. If
    /// the design is not parametric the parent will be a component.
    core::Ptr<core::Base> parent() const;

    /// Returns the component this construction point belongs to.
    core::Ptr<Component> component() const;

    /// Indicates if the construction point is parametric.
    bool isParametric() const;

    /// Returns the timeline object associated with this construction point.
    core::Ptr<TimelineObject> timelineObject() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<ConstructionPoint> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<ConstructionPoint> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// If this construction point is associated with a base feature, this property will return that base feature.
    /// If it's not associated with a base feature, this property will return null.
    core::Ptr<BaseFeature> baseFeature() const;

    /// Returns the collection of attributes associated with this construction point.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns the current health state of this construction point.
    FeatureHealthStates healthState() const;

    /// Returns the error or warning message in the case where the healthState property returns either
    /// WarningFeatureHealthState or ErrorFeatureHealthState. Otherwise this property returns an empty string.
    std::string errorOrWarningMessage() const;

    /// Returns a token for the ConstructionPoint object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same construction point.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    ADSK_FUSION_CONSTRUCTIONPOINT_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPOINT_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPOINT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPOINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Point3D* geometry_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual ConstructionPointDefinition* definition_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual bool isDeletable_raw() const = 0;
    virtual bool isLightBulbOn_raw() const = 0;
    virtual bool isLightBulbOn_raw(bool value) = 0;
    virtual bool isVisible_raw() const = 0;
    virtual core::Base* parent_raw() const = 0;
    virtual Component* component_raw() const = 0;
    virtual bool isParametric_raw() const = 0;
    virtual TimelineObject* timelineObject_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual ConstructionPoint* nativeObject_raw() const = 0;
    virtual ConstructionPoint* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual BaseFeature* baseFeature_raw() const = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual FeatureHealthStates healthState_raw() const = 0;
    virtual char* errorOrWarningMessage_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Point3D> ConstructionPoint::geometry() const
{
    core::Ptr<core::Point3D> res = geometry_raw();
    return res;
}

inline std::string ConstructionPoint::name() const
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

inline bool ConstructionPoint::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<ConstructionPointDefinition> ConstructionPoint::definition() const
{
    core::Ptr<ConstructionPointDefinition> res = definition_raw();
    return res;
}

inline bool ConstructionPoint::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool ConstructionPoint::isDeletable() const
{
    bool res = isDeletable_raw();
    return res;
}

inline bool ConstructionPoint::isLightBulbOn() const
{
    bool res = isLightBulbOn_raw();
    return res;
}

inline bool ConstructionPoint::isLightBulbOn(bool value)
{
    return isLightBulbOn_raw(value);
}

inline bool ConstructionPoint::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionPoint::parent() const
{
    core::Ptr<core::Base> res = parent_raw();
    return res;
}

inline core::Ptr<Component> ConstructionPoint::component() const
{
    core::Ptr<Component> res = component_raw();
    return res;
}

inline bool ConstructionPoint::isParametric() const
{
    bool res = isParametric_raw();
    return res;
}

inline core::Ptr<TimelineObject> ConstructionPoint::timelineObject() const
{
    core::Ptr<TimelineObject> res = timelineObject_raw();
    return res;
}

inline core::Ptr<Occurrence> ConstructionPoint::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<ConstructionPoint> ConstructionPoint::nativeObject() const
{
    core::Ptr<ConstructionPoint> res = nativeObject_raw();
    return res;
}

inline core::Ptr<ConstructionPoint> ConstructionPoint::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<ConstructionPoint> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<BaseFeature> ConstructionPoint::baseFeature() const
{
    core::Ptr<BaseFeature> res = baseFeature_raw();
    return res;
}

inline core::Ptr<core::Attributes> ConstructionPoint::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline FeatureHealthStates ConstructionPoint::healthState() const
{
    FeatureHealthStates res = healthState_raw();
    return res;
}

inline std::string ConstructionPoint::errorOrWarningMessage() const
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

inline std::string ConstructionPoint::entityToken() const
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

#undef ADSK_FUSION_CONSTRUCTIONPOINT_API