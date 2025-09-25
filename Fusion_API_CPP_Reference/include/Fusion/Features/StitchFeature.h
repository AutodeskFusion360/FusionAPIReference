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
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_STITCHFEATURE_CPP__
# define ADSK_FUSION_STITCHFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_STITCHFEATURE_API
# endif
#else
# define ADSK_FUSION_STITCHFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing stitch feature in a design.
class StitchFeature : public Feature {
public:

    /// Gets and sets the surfaces to stitch together. In some cases the stitch operation results in
    /// faces being merged so the original faces are no longer available after the feature is created.
    /// in this case you need to reposition the timeline marker to just before this feature
    /// when the faces do exist.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> stitchSurfaces() const;
    bool stitchSurfaces(const core::Ptr<core::ObjectCollection>& value);

    /// Returns the parameter controlling the tolerance. You can edit the tolerance
    /// by editing the value of the parameter object.
    core::Ptr<ModelParameter> tolerance() const;

    /// Gets and sets the feature operation to perform. This property value is ignored if the stitched result does not
    /// form a solid body.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<StitchFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this is not the NativeObject.
    core::Ptr<StitchFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_STITCHFEATURE_API static const char* classType();
    ADSK_FUSION_STITCHFEATURE_API const char* objectType() const override;
    ADSK_FUSION_STITCHFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_STITCHFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* stitchSurfaces_raw() const = 0;
    virtual bool stitchSurfaces_raw(core::ObjectCollection* value) = 0;
    virtual ModelParameter* tolerance_raw() const = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual StitchFeature* nativeObject_raw() const = 0;
    virtual StitchFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> StitchFeature::stitchSurfaces() const
{
    core::Ptr<core::ObjectCollection> res = stitchSurfaces_raw();
    return res;
}

inline bool StitchFeature::stitchSurfaces(const core::Ptr<core::ObjectCollection>& value)
{
    return stitchSurfaces_raw(value.get());
}

inline core::Ptr<ModelParameter> StitchFeature::tolerance() const
{
    core::Ptr<ModelParameter> res = tolerance_raw();
    return res;
}

inline FeatureOperations StitchFeature::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool StitchFeature::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline core::Ptr<StitchFeature> StitchFeature::nativeObject() const
{
    core::Ptr<StitchFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<StitchFeature> StitchFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<StitchFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_STITCHFEATURE_API