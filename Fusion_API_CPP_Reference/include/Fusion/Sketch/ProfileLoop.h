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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PROFILELOOP_CPP__
# define ADSK_FUSION_PROFILELOOP_API XI_EXPORT
# else
# define ADSK_FUSION_PROFILELOOP_API
# endif
#else
# define ADSK_FUSION_PROFILELOOP_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
    class Profile;
    class ProfileCurves;
}}

namespace adsk { namespace fusion {

/// A loop within a profile.
class ProfileLoop : public core::Base {
public:

    /// Indicates if this is an outer or inner loop. Profiles always have
    /// one outer loop and have an zero to many inner loops defining voids.
    bool isOuter() const;

    /// Returns a collection of the curves making up this loop.
    core::Ptr<ProfileCurves> profileCurves() const;

    /// Returns the parent Profile object.
    core::Ptr<Profile> parentProfile() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<ProfileLoop> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// Returns null if this isn't the NativeObject.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<ProfileLoop> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_PROFILELOOP_API static const char* classType();
    ADSK_FUSION_PROFILELOOP_API const char* objectType() const override;
    ADSK_FUSION_PROFILELOOP_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PROFILELOOP_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isOuter_raw() const = 0;
    virtual ProfileCurves* profileCurves_raw() const = 0;
    virtual Profile* parentProfile_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual ProfileLoop* nativeObject_raw() const = 0;
    virtual ProfileLoop* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline bool ProfileLoop::isOuter() const
{
    bool res = isOuter_raw();
    return res;
}

inline core::Ptr<ProfileCurves> ProfileLoop::profileCurves() const
{
    core::Ptr<ProfileCurves> res = profileCurves_raw();
    return res;
}

inline core::Ptr<Profile> ProfileLoop::parentProfile() const
{
    core::Ptr<Profile> res = parentProfile_raw();
    return res;
}

inline core::Ptr<Occurrence> ProfileLoop::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<ProfileLoop> ProfileLoop::nativeObject() const
{
    core::Ptr<ProfileLoop> res = nativeObject_raw();
    return res;
}

inline core::Ptr<ProfileLoop> ProfileLoop::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<ProfileLoop> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PROFILELOOP_API