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
#include "ChamferEdgeSet.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_DISTANCEANDANGLECHAMFEREDGESET_CPP__
# define ADSK_FUSION_DISTANCEANDANGLECHAMFEREDGESET_API XI_EXPORT
# else
# define ADSK_FUSION_DISTANCEANDANGLECHAMFEREDGESET_API
# endif
#else
# define ADSK_FUSION_DISTANCEANDANGLECHAMFEREDGESET_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// Provides access to the edges and the parameter associated with a chord length fillet.
class DistanceAndAngleChamferEdgeSet : public ChamferEdgeSet {
public:

    /// Gets and sets the edges that will be chamfered. This collection can contain BRepEdge, BRepFace,
    /// and Feature objects. If BRepFace or Feature are objects are provided, all of the edges associated
    /// with those objects will be chamfered.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> edges() const;
    bool edges(const core::Ptr<core::ObjectCollection>& value);

    /// Returns the model parameter that controls the offset distance of the chamfer.
    /// You can edit the distance by using the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> distance() const;

    /// Returns the model parameter that controls the angle of the chamfer.
    /// You can edit the distance by using the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> angle() const;

    /// Gets and sets if the chamfer is flipped. This swaps the directions for distance one and two.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isFlipped() const;
    bool isFlipped(bool value);

    ADSK_FUSION_DISTANCEANDANGLECHAMFEREDGESET_API static const char* classType();
    ADSK_FUSION_DISTANCEANDANGLECHAMFEREDGESET_API const char* objectType() const override;
    ADSK_FUSION_DISTANCEANDANGLECHAMFEREDGESET_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DISTANCEANDANGLECHAMFEREDGESET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* edges_raw() const = 0;
    virtual bool edges_raw(core::ObjectCollection* value) = 0;
    virtual ModelParameter* distance_raw() const = 0;
    virtual ModelParameter* angle_raw() const = 0;
    virtual bool isFlipped_raw() const = 0;
    virtual bool isFlipped_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> DistanceAndAngleChamferEdgeSet::edges() const
{
    core::Ptr<core::ObjectCollection> res = edges_raw();
    return res;
}

inline bool DistanceAndAngleChamferEdgeSet::edges(const core::Ptr<core::ObjectCollection>& value)
{
    return edges_raw(value.get());
}

inline core::Ptr<ModelParameter> DistanceAndAngleChamferEdgeSet::distance() const
{
    core::Ptr<ModelParameter> res = distance_raw();
    return res;
}

inline core::Ptr<ModelParameter> DistanceAndAngleChamferEdgeSet::angle() const
{
    core::Ptr<ModelParameter> res = angle_raw();
    return res;
}

inline bool DistanceAndAngleChamferEdgeSet::isFlipped() const
{
    bool res = isFlipped_raw();
    return res;
}

inline bool DistanceAndAngleChamferEdgeSet::isFlipped(bool value)
{
    return isFlipped_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DISTANCEANDANGLECHAMFEREDGESET_API