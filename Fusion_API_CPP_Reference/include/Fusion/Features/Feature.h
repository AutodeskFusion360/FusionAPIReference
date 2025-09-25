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
# ifdef __COMPILING_ADSK_FUSION_FEATURE_CPP__
# define ADSK_FUSION_FEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_FEATURE_API
# endif
#else
# define ADSK_FUSION_FEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepBodies;
    class BRepFaces;
    class Component;
    class FeatureList;
    class Occurrence;
    class TimelineObject;
}}

namespace adsk { namespace fusion {

/// Base class object representing all features.
class Feature : public core::Base {
public:

    /// Returns the name of the feature as seen in the browser (non-parametric) or in the timeline (parametric).
    std::string name() const;
    bool name(const std::string& value);

    /// Deletes the feature.
    /// This works for both parametric and non-parametric features.
    /// Returns a bool indicating if the delete was successful or not.
    bool deleteMe();

    /// Dissolves the feature so that the feature information is lost
    /// and only the B-Rep geometry defined by the feature remains.
    /// This is only valid for non-parametric features.
    /// Returns a bool indicating if the dissolve was successful or not.
    bool dissolve();

    /// Gets and sets if this feature is suppressed. This is only valid
    /// for parametric features.
    bool isSuppressed() const;
    bool isSuppressed(bool value);

    /// Indicates if this feature is parametric or not.
    bool isParametric() const;

    /// Returns the faces that were created by this feature. This works for
    /// both parametric and non-parametric features.
    /// 
    /// Depending on the modifications made to the body after the feature was
    /// created, this may not return all of the faces. For example, when a
    /// component is created from a body, the original body and its faces
    /// no longer exist, so this won't return any faces. However, you can
    /// roll the timeline to immediately after the feature, and all the
    /// original faces will be available.
    core::Ptr<BRepFaces> faces() const;

    /// Returns the parent component that owns this feature.
    core::Ptr<Component> parentComponent() const;

    /// Returns the set of features that are linked to this feature. The set of linked features
    /// are all of the features that were created in various components as the result of a
    /// single feature being created in the user interface.
    core::Ptr<FeatureList> linkedFeatures() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// Returns the timeline object associated with this feature.
    core::Ptr<TimelineObject> timelineObject() const;

    /// Returns the bodies that were modified or created by this feature.
    /// This property works for both parametric and non-parametric features.
    /// 
    /// For a BaseFeature, this property has two different behaviors depending
    /// on if the BaseFeature is active for edit or not. When the base feature is
    /// active, this property returns the bodies owned by the base feature or the
    /// source bodies. When the base feature is not active, this property returns
    /// the result bodies.
    /// 
    /// When a body is added to a base feature, that body is owned by the base feature
    /// and is only seen in the UI when the base feature is active. This body is referred
    /// to as a "source body". Fusion creates a parametric copy of the body when you
    /// exit the base feature. This copy is referred to as the "result body," and it
    /// is used for subsequent modeling operations.
    /// 
    /// You can map between the source and result bodies by using their position
    /// within the bodies returned. To get a valid list of result bodies, you should
    /// roll the timeline to immediately after the base feature node in the timeline.
    /// Otherwise, subsequent operations could have done something to cause one or
    /// more bodies to no longer be available.
    core::Ptr<BRepBodies> bodies() const;

    /// Returns the collection of attributes associated with this face.
    core::Ptr<core::Attributes> attributes() const;

    /// If this feature is associated with a base feature, this property will return that base feature.
    /// If it's not associated with a base feature, this property will return null.
    core::Ptr<BaseFeature> baseFeature() const;

    /// Returns the current health state of the feature.
    FeatureHealthStates healthState() const;

    /// Returns the error or warning message in the case where the healthState property returns either
    /// WarningFeatureHealthState or ErrorFeatureHealthState. Otherwise this property returns an empty string.
    std::string errorOrWarningMessage() const;

    /// Returns a token for the Feature object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same feature.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    ADSK_FUSION_FEATURE_API static const char* classType();
    ADSK_FUSION_FEATURE_API const char* objectType() const override;
    ADSK_FUSION_FEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual bool dissolve_raw() = 0;
    virtual bool isSuppressed_raw() const = 0;
    virtual bool isSuppressed_raw(bool value) = 0;
    virtual bool isParametric_raw() const = 0;
    virtual BRepFaces* faces_raw() const = 0;
    virtual Component* parentComponent_raw() const = 0;
    virtual FeatureList* linkedFeatures_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual TimelineObject* timelineObject_raw() const = 0;
    virtual BRepBodies* bodies_raw() const = 0;
    virtual bool name__raw(const char* value) = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual BaseFeature* baseFeature_raw() const = 0;
    virtual FeatureHealthStates healthState_raw() const = 0;
    virtual char* errorOrWarningMessage_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
    virtual void placeholderFeature0() {}
    virtual void placeholderFeature1() {}
    virtual void placeholderFeature2() {}
    virtual void placeholderFeature3() {}
    virtual void placeholderFeature4() {}
    virtual void placeholderFeature5() {}
    virtual void placeholderFeature6() {}
    virtual void placeholderFeature7() {}
    virtual void placeholderFeature8() {}
    virtual void placeholderFeature9() {}
    virtual void placeholderFeature10() {}
    virtual void placeholderFeature11() {}
    virtual void placeholderFeature12() {}
    virtual void placeholderFeature13() {}
    virtual void placeholderFeature14() {}
    virtual void placeholderFeature15() {}
    virtual void placeholderFeature16() {}
    virtual void placeholderFeature17() {}
    virtual void placeholderFeature18() {}
    virtual void placeholderFeature19() {}
    virtual void placeholderFeature20() {}
    virtual void placeholderFeature21() {}
    virtual void placeholderFeature22() {}
    virtual void placeholderFeature23() {}
    virtual void placeholderFeature24() {}
    virtual void placeholderFeature25() {}
    virtual void placeholderFeature26() {}
    virtual void placeholderFeature27() {}
    virtual void placeholderFeature28() {}
    virtual void placeholderFeature29() {}
    virtual void placeholderFeature30() {}
    virtual void placeholderFeature31() {}
    virtual void placeholderFeature32() {}
    virtual void placeholderFeature33() {}
    virtual void placeholderFeature34() {}
    virtual void placeholderFeature35() {}
    virtual void placeholderFeature36() {}
    virtual void placeholderFeature37() {}
    virtual void placeholderFeature38() {}
    virtual void placeholderFeature39() {}
    virtual void placeholderFeature40() {}
    virtual void placeholderFeature41() {}
    virtual void placeholderFeature42() {}
    virtual void placeholderFeature43() {}
    virtual void placeholderFeature44() {}
    virtual void placeholderFeature45() {}
};

// Inline wrappers

inline std::string Feature::name() const
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

inline bool Feature::name(const std::string& value)
{
    return name__raw(value.c_str());
}

inline bool Feature::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool Feature::dissolve()
{
    bool res = dissolve_raw();
    return res;
}

inline bool Feature::isSuppressed() const
{
    bool res = isSuppressed_raw();
    return res;
}

inline bool Feature::isSuppressed(bool value)
{
    return isSuppressed_raw(value);
}

inline bool Feature::isParametric() const
{
    bool res = isParametric_raw();
    return res;
}

inline core::Ptr<BRepFaces> Feature::faces() const
{
    core::Ptr<BRepFaces> res = faces_raw();
    return res;
}

inline core::Ptr<Component> Feature::parentComponent() const
{
    core::Ptr<Component> res = parentComponent_raw();
    return res;
}

inline core::Ptr<FeatureList> Feature::linkedFeatures() const
{
    core::Ptr<FeatureList> res = linkedFeatures_raw();
    return res;
}

inline core::Ptr<Occurrence> Feature::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<TimelineObject> Feature::timelineObject() const
{
    core::Ptr<TimelineObject> res = timelineObject_raw();
    return res;
}

inline core::Ptr<BRepBodies> Feature::bodies() const
{
    core::Ptr<BRepBodies> res = bodies_raw();
    return res;
}

inline core::Ptr<core::Attributes> Feature::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline core::Ptr<BaseFeature> Feature::baseFeature() const
{
    core::Ptr<BaseFeature> res = baseFeature_raw();
    return res;
}

inline FeatureHealthStates Feature::healthState() const
{
    FeatureHealthStates res = healthState_raw();
    return res;
}

inline std::string Feature::errorOrWarningMessage() const
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

inline std::string Feature::entityToken() const
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

#undef ADSK_FUSION_FEATURE_API