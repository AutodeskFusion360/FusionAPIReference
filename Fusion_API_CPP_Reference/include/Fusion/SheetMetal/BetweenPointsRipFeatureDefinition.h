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
#include "RipFeatureDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_BETWEENPOINTSRIPFEATUREDEFINITION_CPP__
# define ADSK_FUSION_BETWEENPOINTSRIPFEATUREDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_BETWEENPOINTSRIPFEATUREDEFINITION_API
# endif
#else
# define ADSK_FUSION_BETWEENPOINTSRIPFEATUREDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// The definition for an along edge rip.
class BetweenPointsRipFeatureDefinition : public RipFeatureDefinition {
public:

    /// Gets and sets the BRepEdge or BRepVertex that defines the first point for a between points rip.
    /// If a BRepEdge is returned the pointOneOffset property will control the position of the point along the edge.
    core::Ptr<core::Base> pointOneEntity() const;
    bool pointOneEntity(const core::Ptr<core::Base>& value);

    /// Gets and sets the BRepEdge or BRepVertex that defines the second point for a between points rip.
    /// If a BRepEdge is returned the pointTwoOffset property will control the position of the point along the edge.
    core::Ptr<core::Base> pointTwoEntity() const;
    bool pointTwoEntity(const core::Ptr<core::Base>& value);

    /// Gets the ModelParameter that defines the offset for the first point of a between points rip.
    /// This is the physical distance from the topological start of the edge.
    /// If the offset is either negative, or exceeds the edge length,
    /// then the point will be taken as the corresponding vertex of the edge.
    /// Returns null if the first point is defined by a vertex.
    /// The value can be edited by using the properties of the returned ModelParameter object.
    core::Ptr<ModelParameter> pointOneOffset() const;

    /// Gets the ModelParameter that defines the offset for the second point of a between points rip.
    /// This is the physical distance from the topological start of the edge.
    /// If the offset is either negative, or exceeds the edge length,
    /// then the point will be taken as the corresponding vertex of the edge.
    /// Returns null if the first point is defined by a vertex.
    /// The value can be edited by using the properties of the returned ModelParameter object.
    core::Ptr<ModelParameter> pointTwoOffset() const;

    /// Gets the ModelParameter that defines the gap distance of the rip.
    /// The value can be edited by using the properties of the returned ModelParameter object.
    core::Ptr<ModelParameter> gapDistance() const;

    ADSK_FUSION_BETWEENPOINTSRIPFEATUREDEFINITION_API static const char* classType();
    ADSK_FUSION_BETWEENPOINTSRIPFEATUREDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_BETWEENPOINTSRIPFEATUREDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BETWEENPOINTSRIPFEATUREDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* pointOneEntity_raw() const = 0;
    virtual bool pointOneEntity_raw(core::Base* value) = 0;
    virtual core::Base* pointTwoEntity_raw() const = 0;
    virtual bool pointTwoEntity_raw(core::Base* value) = 0;
    virtual ModelParameter* pointOneOffset_raw() const = 0;
    virtual ModelParameter* pointTwoOffset_raw() const = 0;
    virtual ModelParameter* gapDistance_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> BetweenPointsRipFeatureDefinition::pointOneEntity() const
{
    core::Ptr<core::Base> res = pointOneEntity_raw();
    return res;
}

inline bool BetweenPointsRipFeatureDefinition::pointOneEntity(const core::Ptr<core::Base>& value)
{
    return pointOneEntity_raw(value.get());
}

inline core::Ptr<core::Base> BetweenPointsRipFeatureDefinition::pointTwoEntity() const
{
    core::Ptr<core::Base> res = pointTwoEntity_raw();
    return res;
}

inline bool BetweenPointsRipFeatureDefinition::pointTwoEntity(const core::Ptr<core::Base>& value)
{
    return pointTwoEntity_raw(value.get());
}

inline core::Ptr<ModelParameter> BetweenPointsRipFeatureDefinition::pointOneOffset() const
{
    core::Ptr<ModelParameter> res = pointOneOffset_raw();
    return res;
}

inline core::Ptr<ModelParameter> BetweenPointsRipFeatureDefinition::pointTwoOffset() const
{
    core::Ptr<ModelParameter> res = pointTwoOffset_raw();
    return res;
}

inline core::Ptr<ModelParameter> BetweenPointsRipFeatureDefinition::gapDistance() const
{
    core::Ptr<ModelParameter> res = gapDistance_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BETWEENPOINTSRIPFEATUREDEFINITION_API