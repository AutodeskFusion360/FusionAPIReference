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
# ifdef __COMPILING_ADSK_FUSION_TANGENTRELATIONSHIP_CPP__
# define ADSK_FUSION_TANGENTRELATIONSHIP_API XI_EXPORT
# else
# define ADSK_FUSION_TANGENTRELATIONSHIP_API
# endif
#else
# define ADSK_FUSION_TANGENTRELATIONSHIP_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
}}
namespace adsk { namespace fusion {
    class Component;
    class Occurrence;
    class TimelineObject;
}}

namespace adsk { namespace fusion {

/// A tangent relationship in a design.
class TangentRelationship : public core::Base {
public:

    /// Returns the parent component that owns this tangent relationship.
    core::Ptr<Component> parentComponent() const;

    /// Gets and sets the name of the tangent relationship.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets and sets the first BRepFace object that will remain tangent to the set of specified tangent faces.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this
    /// tangent relationship. This can be accomplished using the following code:
    /// thisTangentRelationship.timelineObject.rollTo(True)
    core::Ptr<core::Base> faceOne() const;
    bool faceOne(const core::Ptr<core::Base>& value);

    /// Gets and sets a single BRepFace object that is part of the body that faceOne will remain
    /// tangent to. All of the faces of the body will be used when computing the tangent relationship.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this
    /// tangent relationship. This can be accomplished using the following code:
    /// thisTangentRelationship.timelineObject.rollTo(True)
    core::Ptr<core::Base> tangentFaces() const;
    bool tangentFaces(const core::Ptr<core::Base>& value);

    /// Deletes this tangent relationship.
    /// Returns true if the delete is successful.
    bool deleteMe();

    /// Returns the timeline object associated with this tangent relationship.
    core::Ptr<TimelineObject> timelineObject() const;

    /// The native object is the tangent relationship in the context of the
    /// component it was created within.
    /// 
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<TangentRelationship> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<TangentRelationship> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// Gets and sets if this tangent relationship is suppressed.
    bool isSuppressed() const;
    bool isSuppressed(bool value);

    /// Returns the collection of attributes associated with this tangent relationship.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns the current health state of the tangent relationship.
    FeatureHealthStates healthState() const;

    /// Returns the error or warning message in the case where the healthState property returns either
    /// WarningFeatureHealthState or ErrorFeatureHealthState. Otherwise this property returns an empty string.
    std::string errorOrWarningMessage() const;

    /// Returns the first of two occurrences that this tangent relationship defines a relationship between.
    core::Ptr<Occurrence> occurrenceOne() const;

    /// Returns the second of two occurrences that this tangent relationship defines a relationship between.
    core::Ptr<Occurrence> occurrenceTwo() const;

    /// Returns a token for the TangentRelationship object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same tangent relationship.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    ADSK_FUSION_TANGENTRELATIONSHIP_API static const char* classType();
    ADSK_FUSION_TANGENTRELATIONSHIP_API const char* objectType() const override;
    ADSK_FUSION_TANGENTRELATIONSHIP_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TANGENTRELATIONSHIP_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Component* parentComponent_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual core::Base* faceOne_raw() const = 0;
    virtual bool faceOne_raw(core::Base* value) = 0;
    virtual core::Base* tangentFaces_raw() const = 0;
    virtual bool tangentFaces_raw(core::Base* value) = 0;
    virtual bool deleteMe_raw() = 0;
    virtual TimelineObject* timelineObject_raw() const = 0;
    virtual TangentRelationship* nativeObject_raw() const = 0;
    virtual TangentRelationship* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual bool isSuppressed_raw() const = 0;
    virtual bool isSuppressed_raw(bool value) = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual FeatureHealthStates healthState_raw() const = 0;
    virtual char* errorOrWarningMessage_raw() const = 0;
    virtual Occurrence* occurrenceOne_raw() const = 0;
    virtual Occurrence* occurrenceTwo_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Component> TangentRelationship::parentComponent() const
{
    core::Ptr<Component> res = parentComponent_raw();
    return res;
}

inline std::string TangentRelationship::name() const
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

inline bool TangentRelationship::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<core::Base> TangentRelationship::faceOne() const
{
    core::Ptr<core::Base> res = faceOne_raw();
    return res;
}

inline bool TangentRelationship::faceOne(const core::Ptr<core::Base>& value)
{
    return faceOne_raw(value.get());
}

inline core::Ptr<core::Base> TangentRelationship::tangentFaces() const
{
    core::Ptr<core::Base> res = tangentFaces_raw();
    return res;
}

inline bool TangentRelationship::tangentFaces(const core::Ptr<core::Base>& value)
{
    return tangentFaces_raw(value.get());
}

inline bool TangentRelationship::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<TimelineObject> TangentRelationship::timelineObject() const
{
    core::Ptr<TimelineObject> res = timelineObject_raw();
    return res;
}

inline core::Ptr<TangentRelationship> TangentRelationship::nativeObject() const
{
    core::Ptr<TangentRelationship> res = nativeObject_raw();
    return res;
}

inline core::Ptr<TangentRelationship> TangentRelationship::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<TangentRelationship> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<Occurrence> TangentRelationship::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline bool TangentRelationship::isSuppressed() const
{
    bool res = isSuppressed_raw();
    return res;
}

inline bool TangentRelationship::isSuppressed(bool value)
{
    return isSuppressed_raw(value);
}

inline core::Ptr<core::Attributes> TangentRelationship::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline FeatureHealthStates TangentRelationship::healthState() const
{
    FeatureHealthStates res = healthState_raw();
    return res;
}

inline std::string TangentRelationship::errorOrWarningMessage() const
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

inline core::Ptr<Occurrence> TangentRelationship::occurrenceOne() const
{
    core::Ptr<Occurrence> res = occurrenceOne_raw();
    return res;
}

inline core::Ptr<Occurrence> TangentRelationship::occurrenceTwo() const
{
    core::Ptr<Occurrence> res = occurrenceTwo_raw();
    return res;
}

inline std::string TangentRelationship::entityToken() const
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

#undef ADSK_FUSION_TANGENTRELATIONSHIP_API