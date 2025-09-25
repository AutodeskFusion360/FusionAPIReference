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
# ifdef __COMPILING_ADSK_FUSION_RIPFEATUREINPUT_CPP__
# define ADSK_FUSION_RIPFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_RIPFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_RIPFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BRepEdge;
    class BRepFace;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a Rip feature.
class RipFeatureInput : public core::Base {
public:

    /// Specifies the rip feature will be defined by a face..
    /// face : The sheet metal face that defines the rip.
    /// Returns true if the defining the rip is successful.
    bool setByFace(const core::Ptr<BRepFace>& face);

    /// Specifies the rip feature will be along an edge.
    /// edge : The BRepEdge that defines the location of the rip.
    /// gapDistance : The gap distance of the rip.
    /// Returns true if the defining the rip is successful.
    bool setAlongEdge(const core::Ptr<BRepEdge>& edge, const core::Ptr<core::ValueInput>& gapDistance);

    /// This input method is for creating a rip between two points. Each point can be either a BRepVertex
    /// or a BRepEdge and an associated offset along the edge.
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
    bool setBetweenPoints(const core::Ptr<core::Base>& pointOneEntity, const core::Ptr<core::Base>& pointTwoEntity, const core::Ptr<core::ValueInput>& gapDistance, const core::Ptr<core::ValueInput>& pointOneOffset = NULL, const core::Ptr<core::ValueInput>& pointTwoOffset = NULL);

    ADSK_FUSION_RIPFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_RIPFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_RIPFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RIPFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setByFace_raw(BRepFace* face) = 0;
    virtual bool setAlongEdge_raw(BRepEdge* edge, core::ValueInput* gapDistance) = 0;
    virtual bool setBetweenPoints_raw(core::Base* pointOneEntity, core::Base* pointTwoEntity, core::ValueInput* gapDistance, core::ValueInput* pointOneOffset, core::ValueInput* pointTwoOffset) = 0;
};

// Inline wrappers

inline bool RipFeatureInput::setByFace(const core::Ptr<BRepFace>& face)
{
    bool res = setByFace_raw(face.get());
    return res;
}

inline bool RipFeatureInput::setAlongEdge(const core::Ptr<BRepEdge>& edge, const core::Ptr<core::ValueInput>& gapDistance)
{
    bool res = setAlongEdge_raw(edge.get(), gapDistance.get());
    return res;
}

inline bool RipFeatureInput::setBetweenPoints(const core::Ptr<core::Base>& pointOneEntity, const core::Ptr<core::Base>& pointTwoEntity, const core::Ptr<core::ValueInput>& gapDistance, const core::Ptr<core::ValueInput>& pointOneOffset, const core::Ptr<core::ValueInput>& pointTwoOffset)
{
    bool res = setBetweenPoints_raw(pointOneEntity.get(), pointTwoEntity.get(), gapDistance.get(), pointOneOffset.get(), pointTwoOffset.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RIPFEATUREINPUT_API