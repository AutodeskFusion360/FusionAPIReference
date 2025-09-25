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
# ifdef __COMPILING_ADSK_FUSION_MIRRORFEATURE_CPP__
# define ADSK_FUSION_MIRRORFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_MIRRORFEATURE_API
# endif
#else
# define ADSK_FUSION_MIRRORFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
    class Occurrence;
    class PatternElements;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing mirror feature in a design.
class MirrorFeature : public Feature {
public:

    /// Gets and sets the entities that are mirrored. It can contain faces, features, bodies, or components.
    /// The input must all be of a single type. For example, you can't provide a body and a component but
    /// the collection must be either all bodies or all components.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> inputEntities() const;
    bool inputEntities(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the mirror plane. This can be either a planar face or construction plane.
    /// This works only for parametric features.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> mirrorPlane() const;
    bool mirrorPlane(const core::Ptr<core::Base>& value);

    /// Gets the PatternElements collection that contains the elements created by this pattern.
    core::Ptr<PatternElements> patternElements() const;

    /// Get the features that were created for this mirror.
    /// Returns null in the case where the feature is not parametric.
    core::Ptr<core::ObjectCollection> resultFeatures() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<MirrorFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<MirrorFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets and sets the compute option for this mirror feature.
    /// This property only applies when mirroring features and is ignored in the direct modeling environment.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    PatternComputeOptions patternComputeOption() const;
    bool patternComputeOption(PatternComputeOptions value);

    /// Gets and sets whether combine is set when doing the Mirror.
    /// When true, the mirrored geometry will be Boolean unioned with the original solid or surface body(s)
    /// when they connect within the stitch tolerance defined with the stitchTolerance property. If the bodies
    /// cannot be unioned or stitched the result will be separate bodies.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isCombine() const;
    bool isCombine(bool value);

    /// Returns the parameter controlling the Stitch tolerance to use when stitching mirrored
    /// surface bodies with the original bodies. You can edit the tolerance by
    /// editing the value of the parameter object.
    core::Ptr<ModelParameter> stitchTolerance() const;

    ADSK_FUSION_MIRRORFEATURE_API static const char* classType();
    ADSK_FUSION_MIRRORFEATURE_API const char* objectType() const override;
    ADSK_FUSION_MIRRORFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MIRRORFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* inputEntities_raw() const = 0;
    virtual bool inputEntities_raw(core::ObjectCollection* value) = 0;
    virtual core::Base* mirrorPlane_raw() const = 0;
    virtual bool mirrorPlane_raw(core::Base* value) = 0;
    virtual PatternElements* patternElements_raw() const = 0;
    virtual core::ObjectCollection* resultFeatures_raw() const = 0;
    virtual MirrorFeature* nativeObject_raw() const = 0;
    virtual MirrorFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual PatternComputeOptions patternComputeOption_raw() const = 0;
    virtual bool patternComputeOption_raw(PatternComputeOptions value) = 0;
    virtual bool isCombine_raw() const = 0;
    virtual bool isCombine_raw(bool value) = 0;
    virtual ModelParameter* stitchTolerance_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> MirrorFeature::inputEntities() const
{
    core::Ptr<core::ObjectCollection> res = inputEntities_raw();
    return res;
}

inline bool MirrorFeature::inputEntities(const core::Ptr<core::ObjectCollection>& value)
{
    return inputEntities_raw(value.get());
}

inline core::Ptr<core::Base> MirrorFeature::mirrorPlane() const
{
    core::Ptr<core::Base> res = mirrorPlane_raw();
    return res;
}

inline bool MirrorFeature::mirrorPlane(const core::Ptr<core::Base>& value)
{
    return mirrorPlane_raw(value.get());
}

inline core::Ptr<PatternElements> MirrorFeature::patternElements() const
{
    core::Ptr<PatternElements> res = patternElements_raw();
    return res;
}

inline core::Ptr<core::ObjectCollection> MirrorFeature::resultFeatures() const
{
    core::Ptr<core::ObjectCollection> res = resultFeatures_raw();
    return res;
}

inline core::Ptr<MirrorFeature> MirrorFeature::nativeObject() const
{
    core::Ptr<MirrorFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<MirrorFeature> MirrorFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<MirrorFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline PatternComputeOptions MirrorFeature::patternComputeOption() const
{
    PatternComputeOptions res = patternComputeOption_raw();
    return res;
}

inline bool MirrorFeature::patternComputeOption(PatternComputeOptions value)
{
    return patternComputeOption_raw(value);
}

inline bool MirrorFeature::isCombine() const
{
    bool res = isCombine_raw();
    return res;
}

inline bool MirrorFeature::isCombine(bool value)
{
    return isCombine_raw(value);
}

inline core::Ptr<ModelParameter> MirrorFeature::stitchTolerance() const
{
    core::Ptr<ModelParameter> res = stitchTolerance_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MIRRORFEATURE_API