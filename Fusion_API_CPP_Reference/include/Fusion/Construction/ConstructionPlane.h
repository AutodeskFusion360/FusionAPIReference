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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPLANE_CPP__
# define ADSK_FUSION_CONSTRUCTIONPLANE_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPLANE_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPLANE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
    class BoundingBox2D;
    class Matrix3D;
    class Plane;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class Component;
    class ConstructionPlaneDefinition;
    class Occurrence;
    class TimelineObject;
}}

namespace adsk { namespace fusion {

/// ConstructionPlane Object
class ConstructionPlane : public core::Base {
public:

    /// Returns a plane that represents the position and orientation of the construction plane.
    /// This geometry is defined in the AssemblyContext of this ConstructionPlane.
    core::Ptr<core::Plane> geometry() const;

    /// Returns the name of the construction plane as it is shown in the browser.
    std::string name() const;
    bool name(const std::string& value);

    /// Returns the ConstructionPlaneDefinition object which provides access to the information
    /// defining this ConstructionPlane.
    core::Ptr<ConstructionPlaneDefinition> definition() const;

    /// Deletes the construction plane.
    /// Returns a bool indicating if the delete was successful or not.
    bool deleteMe();

    /// Indicates if this construction plane can be deleted. Base
    /// construction planes can not be deleted.
    bool isDeletable() const;

    /// Indicates if this construction plane is parametric or not.
    bool isParametric() const;

    /// Indicates if the light bulb (as displayed in the browser) is on.
    /// A construction plane will only be visible if it's light bulb, and that of it's
    /// containing folder and parent component/s are also on.
    bool isLightBulbOn() const;
    bool isLightBulbOn(bool value);

    /// Indicates if the construction plane is visible.
    /// This property is affected by the AssemblyContext of the construction plane.
    bool isVisible() const;

    /// Gets and sets the display size of the construction plane. The bounding
    /// box defines the min and max corners of the plane as defined in the
    /// 2D space of the construction plane.
    core::Ptr<core::BoundingBox2D> displayBounds() const;
    bool displayBounds(const core::Ptr<core::BoundingBox2D>& value);

    /// Returns the parent component or base feature. If both the design and the construction
    /// plane are parametric, the parent will be a component. If the design is parametric and
    /// the construction plane is not, the parent will be a base feature. If
    /// the design is not parametric the parent will be a component.
    core::Ptr<core::Base> parent() const;

    /// Returns the component this construction plane belongs to.
    core::Ptr<Component> component() const;

    /// Returns the timeline object associated with this construction plane.
    core::Ptr<TimelineObject> timelineObject() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<ConstructionPlane> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<ConstructionPlane> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// If this construction plane is associated with a base feature, this property will return that base feature.
    /// If it's not associated with a base feature, this property will return null.
    core::Ptr<BaseFeature> baseFeature() const;

    /// Returns the collection of attributes associated with this construction plane.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns the current health state of this construction plane.
    FeatureHealthStates healthState() const;

    /// Returns the error or warning message in the case where the healthState property returns either
    /// WarningFeatureHealthState or ErrorFeatureHealthState. Otherwise this property returns an empty string.
    std::string errorOrWarningMessage() const;

    /// Returns the current position and orientation of the construction plane as a matrix.
    /// For a parametric construction plane, this property is read-only. For a construction
    /// plane in a direct modeling model or in a base feature, this is read-write and can be
    /// used to reposition the constructions plane.
    core::Ptr<core::Matrix3D> transform() const;
    bool transform(const core::Ptr<core::Matrix3D>& value);

    /// Returns a token for the ConstructionPlane object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same construction plane.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    ADSK_FUSION_CONSTRUCTIONPLANE_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPLANE_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPLANE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPLANE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Plane* geometry_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual ConstructionPlaneDefinition* definition_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual bool isDeletable_raw() const = 0;
    virtual bool isParametric_raw() const = 0;
    virtual bool isLightBulbOn_raw() const = 0;
    virtual bool isLightBulbOn_raw(bool value) = 0;
    virtual bool isVisible_raw() const = 0;
    virtual core::BoundingBox2D* displayBounds_raw() const = 0;
    virtual bool displayBounds_raw(core::BoundingBox2D* value) = 0;
    virtual core::Base* parent_raw() const = 0;
    virtual Component* component_raw() const = 0;
    virtual TimelineObject* timelineObject_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual ConstructionPlane* nativeObject_raw() const = 0;
    virtual ConstructionPlane* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual BaseFeature* baseFeature_raw() const = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual FeatureHealthStates healthState_raw() const = 0;
    virtual char* errorOrWarningMessage_raw() const = 0;
    virtual core::Matrix3D* transform_raw() const = 0;
    virtual bool transform_raw(core::Matrix3D* value) = 0;
    virtual char* entityToken_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Plane> ConstructionPlane::geometry() const
{
    core::Ptr<core::Plane> res = geometry_raw();
    return res;
}

inline std::string ConstructionPlane::name() const
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

inline bool ConstructionPlane::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<ConstructionPlaneDefinition> ConstructionPlane::definition() const
{
    core::Ptr<ConstructionPlaneDefinition> res = definition_raw();
    return res;
}

inline bool ConstructionPlane::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool ConstructionPlane::isDeletable() const
{
    bool res = isDeletable_raw();
    return res;
}

inline bool ConstructionPlane::isParametric() const
{
    bool res = isParametric_raw();
    return res;
}

inline bool ConstructionPlane::isLightBulbOn() const
{
    bool res = isLightBulbOn_raw();
    return res;
}

inline bool ConstructionPlane::isLightBulbOn(bool value)
{
    return isLightBulbOn_raw(value);
}

inline bool ConstructionPlane::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline core::Ptr<core::BoundingBox2D> ConstructionPlane::displayBounds() const
{
    core::Ptr<core::BoundingBox2D> res = displayBounds_raw();
    return res;
}

inline bool ConstructionPlane::displayBounds(const core::Ptr<core::BoundingBox2D>& value)
{
    return displayBounds_raw(value.get());
}

inline core::Ptr<core::Base> ConstructionPlane::parent() const
{
    core::Ptr<core::Base> res = parent_raw();
    return res;
}

inline core::Ptr<Component> ConstructionPlane::component() const
{
    core::Ptr<Component> res = component_raw();
    return res;
}

inline core::Ptr<TimelineObject> ConstructionPlane::timelineObject() const
{
    core::Ptr<TimelineObject> res = timelineObject_raw();
    return res;
}

inline core::Ptr<Occurrence> ConstructionPlane::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<ConstructionPlane> ConstructionPlane::nativeObject() const
{
    core::Ptr<ConstructionPlane> res = nativeObject_raw();
    return res;
}

inline core::Ptr<ConstructionPlane> ConstructionPlane::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<ConstructionPlane> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<BaseFeature> ConstructionPlane::baseFeature() const
{
    core::Ptr<BaseFeature> res = baseFeature_raw();
    return res;
}

inline core::Ptr<core::Attributes> ConstructionPlane::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline FeatureHealthStates ConstructionPlane::healthState() const
{
    FeatureHealthStates res = healthState_raw();
    return res;
}

inline std::string ConstructionPlane::errorOrWarningMessage() const
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

inline core::Ptr<core::Matrix3D> ConstructionPlane::transform() const
{
    core::Ptr<core::Matrix3D> res = transform_raw();
    return res;
}

inline bool ConstructionPlane::transform(const core::Ptr<core::Matrix3D>& value)
{
    return transform_raw(value.get());
}

inline std::string ConstructionPlane::entityToken() const
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

#undef ADSK_FUSION_CONSTRUCTIONPLANE_API