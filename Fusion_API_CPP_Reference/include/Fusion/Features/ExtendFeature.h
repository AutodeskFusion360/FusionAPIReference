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
# ifdef __COMPILING_ADSK_FUSION_EXTENDFEATURE_CPP__
# define ADSK_FUSION_EXTENDFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_EXTENDFEATURE_API
# endif
#else
# define ADSK_FUSION_EXTENDFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing extend feature in a design.
class ExtendFeature : public Feature {
public:

    /// Sets the edges for the extend feature.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// edges : The surface edges to extend.
    /// Only the surface edges from an open body can be extended.
    /// The edges must all be from the same open body.
    /// isChainingEnabled : An optional boolean argument whose default is true. If this argument is set to true, all edges that are
    /// tangent or curvature continuous, and end point connected, will be found automatically and extended.
    /// Returns true if successful
    bool setInputEntities(const core::Ptr<core::ObjectCollection>& edges, bool isChainingEnabled = true);

    /// Gets the edges that were extended. In many cases the extend operation results in
    /// the edges being consumed so they're no longer available after the feature is created.
    /// in this case you need to reposition the timeline marker to just before this feature
    /// when the edges do exist.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> edges() const;

    /// Returns the parameter controlling the extend distance. You can edit the distance
    /// by editing the value of the parameter object.
    core::Ptr<ModelParameter> distance() const;

    /// Gets and sets surface extend type to use.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    SurfaceExtendTypes extendType() const;
    bool extendType(SurfaceExtendTypes value);

    /// Gets if all edges that are tangent or curvature continuous, and end point connected, will be found
    /// automatically and extended.
    bool isChainingEnabled() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<ExtendFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this is not the NativeObject.
    core::Ptr<ExtendFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets and sets surface extend alignment to use.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    SurfaceExtendAlignment extendAlignment() const;
    bool extendAlignment(SurfaceExtendAlignment value);

    ADSK_FUSION_EXTENDFEATURE_API static const char* classType();
    ADSK_FUSION_EXTENDFEATURE_API const char* objectType() const override;
    ADSK_FUSION_EXTENDFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_EXTENDFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setInputEntities_raw(core::ObjectCollection* edges, bool isChainingEnabled) = 0;
    virtual core::ObjectCollection* edges_raw() const = 0;
    virtual ModelParameter* distance_raw() const = 0;
    virtual SurfaceExtendTypes extendType_raw() const = 0;
    virtual bool extendType_raw(SurfaceExtendTypes value) = 0;
    virtual bool isChainingEnabled_raw() const = 0;
    virtual ExtendFeature* nativeObject_raw() const = 0;
    virtual ExtendFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual SurfaceExtendAlignment extendAlignment_raw() const = 0;
    virtual bool extendAlignment_raw(SurfaceExtendAlignment value) = 0;
};

// Inline wrappers

inline bool ExtendFeature::setInputEntities(const core::Ptr<core::ObjectCollection>& edges, bool isChainingEnabled)
{
    bool res = setInputEntities_raw(edges.get(), isChainingEnabled);
    return res;
}

inline core::Ptr<core::ObjectCollection> ExtendFeature::edges() const
{
    core::Ptr<core::ObjectCollection> res = edges_raw();
    return res;
}

inline core::Ptr<ModelParameter> ExtendFeature::distance() const
{
    core::Ptr<ModelParameter> res = distance_raw();
    return res;
}

inline SurfaceExtendTypes ExtendFeature::extendType() const
{
    SurfaceExtendTypes res = extendType_raw();
    return res;
}

inline bool ExtendFeature::extendType(SurfaceExtendTypes value)
{
    return extendType_raw(value);
}

inline bool ExtendFeature::isChainingEnabled() const
{
    bool res = isChainingEnabled_raw();
    return res;
}

inline core::Ptr<ExtendFeature> ExtendFeature::nativeObject() const
{
    core::Ptr<ExtendFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<ExtendFeature> ExtendFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<ExtendFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline SurfaceExtendAlignment ExtendFeature::extendAlignment() const
{
    SurfaceExtendAlignment res = extendAlignment_raw();
    return res;
}

inline bool ExtendFeature::extendAlignment(SurfaceExtendAlignment value)
{
    return extendAlignment_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_EXTENDFEATURE_API