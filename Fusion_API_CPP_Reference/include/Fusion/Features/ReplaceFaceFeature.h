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
# ifdef __COMPILING_ADSK_FUSION_REPLACEFACEFEATURE_CPP__
# define ADSK_FUSION_REPLACEFACEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_REPLACEFACEFEATURE_API
# endif
#else
# define ADSK_FUSION_REPLACEFACEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing replace face feature in a design.
class ReplaceFaceFeature : public Feature {
public:

    /// Method that sets faces to replace.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// sourceFaces : The collection can contain the faces from a solid and/or from features. All the faces must be on the same body.
    /// isTangentChain : A boolean value for setting whether or not faces that are tangentially connected to
    /// the input faces (if any) will also be included. A value of true indicates that tangent
    /// faces will be included.
    /// Returns true if successful.
    bool setInputEntities(const core::Ptr<core::ObjectCollection>& sourceFaces, bool isTangentChain);

    /// Gets and sets the entities that define the target faces. The new faces must completely intersect the part.
    /// The collection can contain the surface faces, surface bodies and construction planes.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> targetFaces() const;
    bool targetFaces(const core::Ptr<core::Base>& value);

    /// Gets if any faces that are tangentially connected to any of
    /// the input faces will also be included in setting InputEntities.
    bool isTangentChain() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<ReplaceFaceFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<ReplaceFaceFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_REPLACEFACEFEATURE_API static const char* classType();
    ADSK_FUSION_REPLACEFACEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_REPLACEFACEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_REPLACEFACEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setInputEntities_raw(core::ObjectCollection* sourceFaces, bool isTangentChain) = 0;
    virtual core::Base* targetFaces_raw() const = 0;
    virtual bool targetFaces_raw(core::Base* value) = 0;
    virtual bool isTangentChain_raw() const = 0;
    virtual ReplaceFaceFeature* nativeObject_raw() const = 0;
    virtual ReplaceFaceFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline bool ReplaceFaceFeature::setInputEntities(const core::Ptr<core::ObjectCollection>& sourceFaces, bool isTangentChain)
{
    bool res = setInputEntities_raw(sourceFaces.get(), isTangentChain);
    return res;
}

inline core::Ptr<core::Base> ReplaceFaceFeature::targetFaces() const
{
    core::Ptr<core::Base> res = targetFaces_raw();
    return res;
}

inline bool ReplaceFaceFeature::targetFaces(const core::Ptr<core::Base>& value)
{
    return targetFaces_raw(value.get());
}

inline bool ReplaceFaceFeature::isTangentChain() const
{
    bool res = isTangentChain_raw();
    return res;
}

inline core::Ptr<ReplaceFaceFeature> ReplaceFaceFeature::nativeObject() const
{
    core::Ptr<ReplaceFaceFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<ReplaceFaceFeature> ReplaceFaceFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<ReplaceFaceFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_REPLACEFACEFEATURE_API