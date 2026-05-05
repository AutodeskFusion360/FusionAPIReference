//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FILLETEDGESETS_CPP__
# define ADSK_FUSION_FILLETEDGESETS_API XI_EXPORT
# else
# define ADSK_FUSION_FILLETEDGESETS_API
# endif
#else
# define ADSK_FUSION_FILLETEDGESETS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class AsymmetricFilletEdgeSet;
    class ChordLengthFilletEdgeSet;
    class ConstantRadiusFilletEdgeSet;
    class FilletEdgeSet;
    class VariableRadiusFilletEdgeSet;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing fillet edge sets associated with a fillet feature.
class FilletEdgeSets : public core::Base {
public:

    /// Function that returns the specified fillet edge set using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<FilletEdgeSet> item(size_t index) const;

    /// The number of fillet edge sets in the collection.
    size_t count() const;

    /// Adds a set of edges with a constant radius to this fillet feature.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// entities : An ObjectCollection containing the BRepEdge, BRepFace, and Feature objects to be filleted. If the isTangentChain argument is true
    /// additional edges or faces may also get filleted if they are tangentially connected to any of the
    /// input edges or faces.
    /// radius : A ValueInput object that defines the radius of the fillet. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// isTangentChain : A boolean value for setting whether or not edges that are tangentially connected to
    /// the input edges (if any) will also be filleted.
    /// Returns the newly created FilletEdgeSet.
    core::Ptr<ConstantRadiusFilletEdgeSet> addConstantRadiusEdgeSet(const core::Ptr<core::ObjectCollection>& entities, const core::Ptr<core::ValueInput>& radius, bool isTangentChain);

    /// Adds a single edge or set of tangent edges along with variable radius information to this fillet feature.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// tangentEdges : An object collection containing a single edge or multiple edges. Multiple edges
    /// must be tangentially connected and added to the collection in their connected order. If a single edge
    /// is input, you can use the isTangentChain argument to automatically find any tangentially connected edges.
    /// startRadius : A ValueInput object that defines the starting radius of the fillet. If a single edge is
    /// being filleted, the start radius is at the start end of the edge. If multiple tangent
    /// edges are being filleted the start radius is the open end of the first edge in the
    /// collection.
    /// 
    /// If the ValueInput uses a real then it is interpreted as centimeters. If it is a string then
    /// the units can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// endRadius : A ValueInput object that defines the ending radius of the fillet. If a single edge is
    /// being filleted, the end radius is at the end of the edge. If multiple tangent
    /// edges are being filleted the end radius is the open end of the last edge in the
    /// collection.
    /// If the ValueInput uses a real then it is interpreted as centimeters. If it is a string then
    /// the units can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// positions : An array of ValueInput objects that defines the positions of any additional radii
    /// along the edge(s). The value must be between 0 and 1 and defines the percentage along the
    /// curve where a radius is defined. The value is unitless. This array must have the same
    /// number of values as the array passed in for the radii argument.
    /// radii : An array of ValueInput objects that define the radii at positions along the edge(s).
    /// This array must have the same number of values as the array passed in for
    /// the positions argument. If the ValueInput uses a real then it is interpreted as centimeters.
    /// If it is a string then the units can be defined as part of the string (i.e. "2 in").
    /// If no units are specified it will be interpreted using the current default units for length.
    /// isTangentChain : A boolean value for setting whether or not edges that are tangentially connected to the single
    /// input edge will also be filleted.
    /// Returns the newly created FilletEdgeSet.
    core::Ptr<VariableRadiusFilletEdgeSet> addVariableRadiusEdgeSet(const core::Ptr<core::ObjectCollection>& tangentEdges, const core::Ptr<core::ValueInput>& startRadius, const core::Ptr<core::ValueInput>& endRadius, const std::vector<core::Ptr<core::ValueInput>>& positions, const std::vector<core::Ptr<core::ValueInput>>& radii, bool isTangentChain);

    /// Adds a set of edges with a chord length to this fillet feature.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// entities : An ObjectCollection containing the BRepEdge, BRepFace, and Feature objects to be filleted. If the isTangentChain argument is true
    /// additional edges or faces may also get filleted if they are tangentially connected to any of the
    /// input edges or faces.
    /// chordLength : A ValueInput object that defines the chord length of the fillet. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// isTangentChain : A boolean value for setting whether or not edges that are tangentially connected to
    /// the input edges (if any) will also be filleted.
    /// Returns the newly created FilletEdgeSet.
    core::Ptr<ChordLengthFilletEdgeSet> addChordLengthEdgeSet(const core::Ptr<core::ObjectCollection>& entities, const core::Ptr<core::ValueInput>& chordLength, bool isTangentChain);

    /// Adds an asymmetric fillet edge set to the fillet feature.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// entities : An ObjectCollection containing the BRepEdge, BRepFace, and Feature objects to be filleted. If the isTangentChain argument is true
    /// additional edges or faces may also get filleted if they are tangentially connected to any of the
    /// input edges or faces.
    /// offsetOne : A ValueInput object that defines the offset distance of the fillet in the first direction. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// offsetTwo : A ValueInput object that defines the offset distance of the fillet in the second direction. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// isTangentChain : A boolean value for setting whether or not edges or faces that are tangentially connected to
    /// the input edges or faces will also be filleted.
    /// Returns the newly created AsymmetricFilletEdgeSet.
    core::Ptr<AsymmetricFilletEdgeSet> addAsymmetricRadiusEdgeSet(const core::Ptr<core::ObjectCollection>& entities, const core::Ptr<core::ValueInput>& offsetOne, const core::Ptr<core::ValueInput>& offsetTwo, bool isTangentChain);

    typedef FilletEdgeSet iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_FILLETEDGESETS_API static const char* classType();
    ADSK_FUSION_FILLETEDGESETS_API const char* objectType() const override;
    ADSK_FUSION_FILLETEDGESETS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FILLETEDGESETS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual FilletEdgeSet* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ConstantRadiusFilletEdgeSet* addConstantRadiusEdgeSet_raw(core::ObjectCollection* entities, core::ValueInput* radius, bool isTangentChain) = 0;
    virtual VariableRadiusFilletEdgeSet* addVariableRadiusEdgeSet_raw(core::ObjectCollection* tangentEdges, core::ValueInput* startRadius, core::ValueInput* endRadius, core::ValueInput** positions, size_t positions_size, core::ValueInput** radii, size_t radii_size, bool isTangentChain) = 0;
    virtual ChordLengthFilletEdgeSet* addChordLengthEdgeSet_raw(core::ObjectCollection* entities, core::ValueInput* chordLength, bool isTangentChain) = 0;
    virtual AsymmetricFilletEdgeSet* addAsymmetricRadiusEdgeSet_raw(core::ObjectCollection* entities, core::ValueInput* offsetOne, core::ValueInput* offsetTwo, bool isTangentChain) = 0;
};

// Inline wrappers

inline core::Ptr<FilletEdgeSet> FilletEdgeSets::item(size_t index) const
{
    core::Ptr<FilletEdgeSet> res = item_raw(index);
    return res;
}

inline size_t FilletEdgeSets::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ConstantRadiusFilletEdgeSet> FilletEdgeSets::addConstantRadiusEdgeSet(const core::Ptr<core::ObjectCollection>& entities, const core::Ptr<core::ValueInput>& radius, bool isTangentChain)
{
    core::Ptr<ConstantRadiusFilletEdgeSet> res = addConstantRadiusEdgeSet_raw(entities.get(), radius.get(), isTangentChain);
    return res;
}

inline core::Ptr<VariableRadiusFilletEdgeSet> FilletEdgeSets::addVariableRadiusEdgeSet(const core::Ptr<core::ObjectCollection>& tangentEdges, const core::Ptr<core::ValueInput>& startRadius, const core::Ptr<core::ValueInput>& endRadius, const std::vector<core::Ptr<core::ValueInput>>& positions, const std::vector<core::Ptr<core::ValueInput>>& radii, bool isTangentChain)
{
    core::ValueInput** positions_ = new core::ValueInput*[positions.size()];
    for(size_t i=0; i<positions.size(); ++i)
        positions_[i] = positions[i].get();
    core::ValueInput** radii_ = new core::ValueInput*[radii.size()];
    for(size_t i=0; i<radii.size(); ++i)
        radii_[i] = radii[i].get();

    core::Ptr<VariableRadiusFilletEdgeSet> res = addVariableRadiusEdgeSet_raw(tangentEdges.get(), startRadius.get(), endRadius.get(), positions_, positions.size(), radii_, radii.size(), isTangentChain);
    delete[] positions_;
    delete[] radii_;
    return res;
}

inline core::Ptr<ChordLengthFilletEdgeSet> FilletEdgeSets::addChordLengthEdgeSet(const core::Ptr<core::ObjectCollection>& entities, const core::Ptr<core::ValueInput>& chordLength, bool isTangentChain)
{
    core::Ptr<ChordLengthFilletEdgeSet> res = addChordLengthEdgeSet_raw(entities.get(), chordLength.get(), isTangentChain);
    return res;
}

inline core::Ptr<AsymmetricFilletEdgeSet> FilletEdgeSets::addAsymmetricRadiusEdgeSet(const core::Ptr<core::ObjectCollection>& entities, const core::Ptr<core::ValueInput>& offsetOne, const core::Ptr<core::ValueInput>& offsetTwo, bool isTangentChain)
{
    core::Ptr<AsymmetricFilletEdgeSet> res = addAsymmetricRadiusEdgeSet_raw(entities.get(), offsetOne.get(), offsetTwo.get(), isTangentChain);
    return res;
}

template <class OutputIterator> inline void FilletEdgeSets::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FILLETEDGESETS_API