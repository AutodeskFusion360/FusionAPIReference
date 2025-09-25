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
#include "Feature.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_REMOVEFEATURE_CPP__
# define ADSK_FUSION_REMOVEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_REMOVEFEATURE_API
# endif
#else
# define ADSK_FUSION_REMOVEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing Remove feature in a design.
class RemoveFeature : public Feature {
public:

    /// Gets and sets the body or component occurrence to remove.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> itemToRemove() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<RemoveFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this is not the NativeObject.
    core::Ptr<RemoveFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_REMOVEFEATURE_API static const char* classType();
    ADSK_FUSION_REMOVEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_REMOVEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_REMOVEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* itemToRemove_raw() const = 0;
    virtual RemoveFeature* nativeObject_raw() const = 0;
    virtual RemoveFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> RemoveFeature::itemToRemove() const
{
    core::Ptr<core::Base> res = itemToRemove_raw();
    return res;
}

inline core::Ptr<RemoveFeature> RemoveFeature::nativeObject() const
{
    core::Ptr<RemoveFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<RemoveFeature> RemoveFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<RemoveFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_REMOVEFEATURE_API