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
# ifdef __COMPILING_ADSK_FUSION_RIGIDGROUP_CPP__
# define ADSK_FUSION_RIGIDGROUP_API XI_EXPORT
# else
# define ADSK_FUSION_RIGIDGROUP_API
# endif
#else
# define ADSK_FUSION_RIGIDGROUP_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class Component;
    class Occurrence;
    class OccurrenceList;
    class TimelineObject;
}}

namespace adsk { namespace fusion {

/// Represents a rigid group within an assembly.
class RigidGroup : public core::Base {
public:

    /// Returns the parent component that owns this rigid group.
    core::Ptr<Component> parentComponent() const;

    /// Gets and sets the name of the rigid group as seen in the timeline.
    std::string name() const;
    bool name(const std::string& value);

    /// Deletes this rigid group.
    /// Returns True if the delete was successful.
    bool deleteMe();

    /// Returns the list of occurrences that are part of the rigid group.
    core::Ptr<OccurrenceList> occurrences() const;

    /// Sets which occurrences are to be part of this rigid group.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this group.
    /// This can be accomplished using the following code: group.timelineObject.rollTo(True)
    /// occurrences : An ObjectCollection containing the occurrences to use in creating the rigid group.
    /// includeChildren : Boolean indicating if the children of the input occurrences should be included in the rigid group.
    /// Returns true if successful.
    bool setOccurrences(const core::Ptr<core::ObjectCollection>& occurrences, bool includeChildren);

    /// Returns the timeline object associated with this rigid group.
    core::Ptr<TimelineObject> timelineObject() const;

    /// Gets and sets if this rigid group is suppressed.
    bool isSuppressed() const;
    bool isSuppressed(bool value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<RigidGroup> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<RigidGroup> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// Returns the collection of attributes associated with this rigid group.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns a token for the RigidGroup object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same rigid group.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    /// Gets and sets whether the occurrences that are part of this rigid group are visible or not.
    bool isVisible() const;
    bool isVisible(bool value);

    ADSK_FUSION_RIGIDGROUP_API static const char* classType();
    ADSK_FUSION_RIGIDGROUP_API const char* objectType() const override;
    ADSK_FUSION_RIGIDGROUP_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RIGIDGROUP_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Component* parentComponent_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual bool deleteMe_raw() = 0;
    virtual OccurrenceList* occurrences_raw() const = 0;
    virtual bool setOccurrences_raw(core::ObjectCollection* occurrences, bool includeChildren) = 0;
    virtual TimelineObject* timelineObject_raw() const = 0;
    virtual bool isSuppressed_raw() const = 0;
    virtual bool isSuppressed_raw(bool value) = 0;
    virtual RigidGroup* nativeObject_raw() const = 0;
    virtual RigidGroup* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
    virtual bool isVisible_raw() const = 0;
    virtual bool isVisible_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<Component> RigidGroup::parentComponent() const
{
    core::Ptr<Component> res = parentComponent_raw();
    return res;
}

inline std::string RigidGroup::name() const
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

inline bool RigidGroup::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline bool RigidGroup::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<OccurrenceList> RigidGroup::occurrences() const
{
    core::Ptr<OccurrenceList> res = occurrences_raw();
    return res;
}

inline bool RigidGroup::setOccurrences(const core::Ptr<core::ObjectCollection>& occurrences, bool includeChildren)
{
    bool res = setOccurrences_raw(occurrences.get(), includeChildren);
    return res;
}

inline core::Ptr<TimelineObject> RigidGroup::timelineObject() const
{
    core::Ptr<TimelineObject> res = timelineObject_raw();
    return res;
}

inline bool RigidGroup::isSuppressed() const
{
    bool res = isSuppressed_raw();
    return res;
}

inline bool RigidGroup::isSuppressed(bool value)
{
    return isSuppressed_raw(value);
}

inline core::Ptr<RigidGroup> RigidGroup::nativeObject() const
{
    core::Ptr<RigidGroup> res = nativeObject_raw();
    return res;
}

inline core::Ptr<RigidGroup> RigidGroup::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<RigidGroup> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<Occurrence> RigidGroup::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<core::Attributes> RigidGroup::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline std::string RigidGroup::entityToken() const
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

inline bool RigidGroup::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline bool RigidGroup::isVisible(bool value)
{
    return isVisible_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RIGIDGROUP_API