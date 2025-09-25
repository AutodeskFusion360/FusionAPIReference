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
# ifdef __COMPILING_ADSK_FUSION_CHAMFEREDGESETS_CPP__
# define ADSK_FUSION_CHAMFEREDGESETS_API XI_EXPORT
# else
# define ADSK_FUSION_CHAMFEREDGESETS_API
# endif
#else
# define ADSK_FUSION_CHAMFEREDGESETS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class ChamferEdgeSet;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing chamfer edge sets associated with a chamfer feature.
class ChamferEdgeSets : public core::Base {
public:

    /// Function that returns the specified chamfer edge set using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ChamferEdgeSet> item(size_t index) const;

    /// The number of chamfer edge sets in the collection.
    size_t count() const;

    /// Adds a set of edges an equal distance offset to this chamfer feature.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// edges : An ObjectCollection containing the edges to be chamfered. Edges can be defined by passing in BrepEdge,
    /// BRepFace, or Feature objects. If BRepFace or Feature objects are passed in all of the edges associated
    /// with those objects will be chamfered. If BRepEdge objects are provided and the isTangentChain argument is true
    /// additional edges may also get chamfered if they are tangentially connected to any of the input edges.
    /// distance : A ValueInput object that defines the distance offset of the chamfer. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// isTangentChain : A boolean value for setting whether or not edges that are tangentially connected to
    /// the input edges (if any) will also be chamfered.
    /// Returns true if the set of edges was successfully added to the ChamferFeatureInput.
    bool addEqualDistanceChamferEdgeSet(const core::Ptr<core::ObjectCollection>& edges, const core::Ptr<core::ValueInput>& distance, bool isTangentChain);

    /// Adds a set of edges an equal distance offset to this chamfer feature.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// edges : An ObjectCollection containing the edges to be chamfered. Edges can be defined by passing in BrepEdge,
    /// BRepFace, or Feature objects. If BRepFace or Feature objects are passed in all of the edges associated
    /// with those objects will be chamfered. If BRepEdge objects are provided and the isTangentChain argument is true
    /// additional edges may also get chamfered if they are tangentially connected to any of the input edges.
    /// distanceOne : A ValueInput object that defines the first distance offset of the chamfer. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// distanceTwo : A ValueInput object that defines the second distance offset of the chamfer. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// isFlipped : Swaps the directions for distance one and two.
    /// isTangentChain : A boolean value for setting whether or not edges that are tangentially connected to
    /// the input edges (if any) will also be chamfered.
    /// Returns true if the set of edges was successfully added to the ChamferFeatureInput.
    bool addTwoDistancesChamferEdgeSet(const core::Ptr<core::ObjectCollection>& edges, const core::Ptr<core::ValueInput>& distanceOne, const core::Ptr<core::ValueInput>& distanceTwo, bool isFlipped, bool isTangentChain);

    /// Adds a set of edges an equal distance offset to this chamfer feature.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// edges : An ObjectCollection containing the edges to be chamfered. Edges can be defined by passing in BrepEdge,
    /// BRepFace, or Feature objects. If BRepFace or Feature objects are passed in all of the edges associated
    /// with those objects will be chamfered. If BRepEdge objects are provided and the isTangentChain argument is true
    /// additional edges may also get chamfered if they are tangentially connected to any of the input edges.
    /// distance : A ValueInput object that defines the distance offset of the chamfer. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// angle : A ValueInput object that defines the angle of the chamfer. If the ValueInput uses
    /// a real then it is interpreted as radians. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 rad") or if no units are specified
    /// it is interpreted as degrees.
    /// isFlipped : Swaps the directions for distance one and two.
    /// isTangentChain : A boolean value for setting whether or not edges that are tangentially connected to
    /// the input edges (if any) will also be chamfered.
    /// Returns true if the set of edges was successfully added to the ChamferFeatureInput.
    bool addDistanceAndAngleChamferEdgeSet(const core::Ptr<core::ObjectCollection>& edges, const core::Ptr<core::ValueInput>& distance, const core::Ptr<core::ValueInput>& angle, bool isFlipped, bool isTangentChain);

    typedef ChamferEdgeSet iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CHAMFEREDGESETS_API static const char* classType();
    ADSK_FUSION_CHAMFEREDGESETS_API const char* objectType() const override;
    ADSK_FUSION_CHAMFEREDGESETS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CHAMFEREDGESETS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ChamferEdgeSet* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual bool addEqualDistanceChamferEdgeSet_raw(core::ObjectCollection* edges, core::ValueInput* distance, bool isTangentChain) = 0;
    virtual bool addTwoDistancesChamferEdgeSet_raw(core::ObjectCollection* edges, core::ValueInput* distanceOne, core::ValueInput* distanceTwo, bool isFlipped, bool isTangentChain) = 0;
    virtual bool addDistanceAndAngleChamferEdgeSet_raw(core::ObjectCollection* edges, core::ValueInput* distance, core::ValueInput* angle, bool isFlipped, bool isTangentChain) = 0;
};

// Inline wrappers

inline core::Ptr<ChamferEdgeSet> ChamferEdgeSets::item(size_t index) const
{
    core::Ptr<ChamferEdgeSet> res = item_raw(index);
    return res;
}

inline size_t ChamferEdgeSets::count() const
{
    size_t res = count_raw();
    return res;
}

inline bool ChamferEdgeSets::addEqualDistanceChamferEdgeSet(const core::Ptr<core::ObjectCollection>& edges, const core::Ptr<core::ValueInput>& distance, bool isTangentChain)
{
    bool res = addEqualDistanceChamferEdgeSet_raw(edges.get(), distance.get(), isTangentChain);
    return res;
}

inline bool ChamferEdgeSets::addTwoDistancesChamferEdgeSet(const core::Ptr<core::ObjectCollection>& edges, const core::Ptr<core::ValueInput>& distanceOne, const core::Ptr<core::ValueInput>& distanceTwo, bool isFlipped, bool isTangentChain)
{
    bool res = addTwoDistancesChamferEdgeSet_raw(edges.get(), distanceOne.get(), distanceTwo.get(), isFlipped, isTangentChain);
    return res;
}

inline bool ChamferEdgeSets::addDistanceAndAngleChamferEdgeSet(const core::Ptr<core::ObjectCollection>& edges, const core::Ptr<core::ValueInput>& distance, const core::Ptr<core::ValueInput>& angle, bool isFlipped, bool isTangentChain)
{
    bool res = addDistanceAndAngleChamferEdgeSet_raw(edges.get(), distance.get(), angle.get(), isFlipped, isTangentChain);
    return res;
}

template <class OutputIterator> inline void ChamferEdgeSets::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CHAMFEREDGESETS_API