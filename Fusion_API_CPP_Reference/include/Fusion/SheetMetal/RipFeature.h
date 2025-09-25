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
#include "../Features/Feature.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_RIPFEATURE_CPP__
# define ADSK_FUSION_RIPFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_RIPFEATURE_API
# endif
#else
# define ADSK_FUSION_RIPFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BRepEdge;
    class BRepFace;
    class Occurrence;
    class RipFeatureDefinition;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing Rip feature in a design.
class RipFeature : public Feature {
public:

    /// Gets the type of rip defined.
    RipFeatureDefinitionTypes definitionType() const;

    /// Returns the RipFeatureDefinition object which provides access to the information
    /// defining this RipFeature and the ability to edit it.
    core::Ptr<RipFeatureDefinition> definition() const;

    /// This input method is for creating a rip from a face.
    /// face : The sheet metal face that defines the rip.
    /// Returns true if the rip definition is successful.
    bool setByFace(const core::Ptr<BRepFace>& face);

    /// Redefines the feature to be a rip along an edge.
    /// edge : The BRepEdge that defines the rip.
    /// gapDistance : The gap distance of the rip.
    /// Returns true if the rip definition is successful.
    bool redefineToAlongEdge(const core::Ptr<BRepEdge>& edge, const core::Ptr<core::ValueInput>& gapDistance);

    /// Redefines the feature to be a rip between two points.
    /// pointOneEntity : The first point of the rip. This can be defined using a BrepVertex or a BRepEdge and offset to define
    /// where the point is along the edge. If an edge is specified, the pointOneOffset parameter must be specified.
    /// pointTwoEntity : The second point of the rip and must lie on the same face as point 1. This can be defined using a
    /// BrepVertex or a BRepEdge and an offset to define where the point is along the edge.
    /// If an edge is specified, the pointTwoOffset parameter must be specified.
    /// gapDistance : The gap distance of the rip.
    /// pointOneOffset : If the first point lies on an edge, then this is the offset along the edge which defines the point.
    /// This is the physical distance from the topological start of the edge.
    /// If the offset is negative or exceeds the edge length, the corresponding vertex of the edge will be used.
    /// pointTwoOffset : If the second point lies on an edge, then this is the offset along the edge which defines the point.
    /// This is the physical distance from the topological start of the edge.
    /// If the offset is negative or exceeds the edge length, the corresponding vertex of the edge will be used.
    /// Returns true if the rip definition is successful.
    bool redefineToBetweenPoints(const core::Ptr<core::Base>& pointOneEntity, const core::Ptr<core::Base>& pointTwoEntity, const core::Ptr<core::ValueInput>& gapDistance, const core::Ptr<core::ValueInput>& pointOneOffset = NULL, const core::Ptr<core::ValueInput>& pointTwoOffset = NULL);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<RipFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this is not the NativeObject.
    core::Ptr<RipFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_RIPFEATURE_API static const char* classType();
    ADSK_FUSION_RIPFEATURE_API const char* objectType() const override;
    ADSK_FUSION_RIPFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RIPFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual RipFeatureDefinitionTypes definitionType_raw() const = 0;
    virtual RipFeatureDefinition* definition_raw() const = 0;
    virtual bool setByFace_raw(BRepFace* face) = 0;
    virtual bool redefineToAlongEdge_raw(BRepEdge* edge, core::ValueInput* gapDistance) = 0;
    virtual bool redefineToBetweenPoints_raw(core::Base* pointOneEntity, core::Base* pointTwoEntity, core::ValueInput* gapDistance, core::ValueInput* pointOneOffset, core::ValueInput* pointTwoOffset) = 0;
    virtual RipFeature* nativeObject_raw() const = 0;
    virtual RipFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline RipFeatureDefinitionTypes RipFeature::definitionType() const
{
    RipFeatureDefinitionTypes res = definitionType_raw();
    return res;
}

inline core::Ptr<RipFeatureDefinition> RipFeature::definition() const
{
    core::Ptr<RipFeatureDefinition> res = definition_raw();
    return res;
}

inline bool RipFeature::setByFace(const core::Ptr<BRepFace>& face)
{
    bool res = setByFace_raw(face.get());
    return res;
}

inline bool RipFeature::redefineToAlongEdge(const core::Ptr<BRepEdge>& edge, const core::Ptr<core::ValueInput>& gapDistance)
{
    bool res = redefineToAlongEdge_raw(edge.get(), gapDistance.get());
    return res;
}

inline bool RipFeature::redefineToBetweenPoints(const core::Ptr<core::Base>& pointOneEntity, const core::Ptr<core::Base>& pointTwoEntity, const core::Ptr<core::ValueInput>& gapDistance, const core::Ptr<core::ValueInput>& pointOneOffset, const core::Ptr<core::ValueInput>& pointTwoOffset)
{
    bool res = redefineToBetweenPoints_raw(pointOneEntity.get(), pointTwoEntity.get(), gapDistance.get(), pointOneOffset.get(), pointTwoOffset.get());
    return res;
}

inline core::Ptr<RipFeature> RipFeature::nativeObject() const
{
    core::Ptr<RipFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<RipFeature> RipFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<RipFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RIPFEATURE_API