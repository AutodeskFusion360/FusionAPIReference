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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FILLETEDGESETINPUTS_CPP__
# define ADSK_FUSION_FILLETEDGESETINPUTS_API XI_EXPORT
# else
# define ADSK_FUSION_FILLETEDGESETINPUTS_API
# endif
#else
# define ADSK_FUSION_FILLETEDGESETINPUTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class AsymmetricFilletEdgeSetInput;
    class ChordLengthFilletEdgeSetInput;
    class ConstantRadiusFilletEdgeSetInput;
    class FilletEdgeSetInput;
    class VariableRadiusFilletEdgeSetInput;
}}

namespace adsk { namespace fusion {

/// Collection of edge sets associated with the input object that will be used
/// to create the new fillet feature. Use the various add methods on this object
/// to add new edge sets to the input object.
class FilletEdgeSetInputs : public core::Base {
public:

    /// Function that returns the specified fillet edge set input using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// The edge sets are returned in the same order they were created in.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<FilletEdgeSetInput> item(size_t index) const;

    /// The number of fillet edge set input objects in the collection.
    size_t count() const;

    /// Adds a constant radius fillet edge set to the fillet feature input. Some settings are initialized
    /// with a default value and can be set by modifying properties on the returned ConstantRadiusFilletEdgeSetInput object.
    /// entities : An ObjectCollection containing the BRepEdge, BRepFace, and Feature objects to be filleted. If the isTangentChain argument is true
    /// additional edges or faces may also get filleted if they are tangentially connected to any of the
    /// input edges or faces.
    /// radius : A ValueInput object that defines the radius of the fillet. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// isTangentChain : A boolean value for setting whether or not edges that are tangentially connected to
    /// the input edges (if any) will also be filleted.
    /// Returns the newly created ConstantRadiusFilletEdgeSetInput. This object provides access to additional settings.
    core::Ptr<ConstantRadiusFilletEdgeSetInput> addConstantRadiusEdgeSet(const core::Ptr<core::ObjectCollection>& entities, const core::Ptr<core::ValueInput>& radius, bool isTangentChain);

    /// Adds a single edge or set of tangent edges to the fillet feature input. Some settings are initialized
    /// with a default value and can be set by modifying properties on the returned VariableRadiusFilletEdgeSetInput object.
    /// tangentEdges : An object collection containing a single edge or multiple edges. Multiple edges
    /// must be tangentially connected and added to the collection in their connected order. If a single edge
    /// is input, you can use the isTangentChain argument to automatically find any tangentially connected edges.
    /// startRadius : A ValueInput object that defines the starting radius of the fillet. If a single edge is
    /// being filleted, the start radius is at the start end of the edge. If multiple tangent
    /// edges are being filleted the start radius is the start end of the first edge in the
    /// collection.
    /// 
    /// If the ValueInput uses a real then it is interpreted as centimeters. If it is a string then
    /// the units can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// endRadius : A ValueInput object that defines the ending radius of the fillet. If a single edge is
    /// being filleted, the end radius is at the end of the edge. If multiple tangent
    /// edges are being filleted the end radius is the open end of the last edge in the
    /// collection.
    /// 
    /// If the ValueInput uses a real then it is interpreted as centimeters. If it is a string then
    /// the units can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// isTangentChain : A boolean value for setting whether or not edges that are tangentially connected to the single
    /// input edge will also be filleted.
    /// Returns the newly created VariableRadiusFilletEdgeSetInput. This object provides access to additional settings.
    core::Ptr<VariableRadiusFilletEdgeSetInput> addVariableRadiusEdgeSet(const core::Ptr<core::ObjectCollection>& tangentEdges, const core::Ptr<core::ValueInput>& startRadius, const core::Ptr<core::ValueInput>& endRadius, bool isTangentChain);

    /// Adds a set of edges to be filleted with a chord length fillet to the fillet feature input. Some settings are
    /// initialized with a default value and can be set by modifying properties on the returned ChordLengthFilletEdgeSetInput object.
    /// entities : An ObjectCollection containing the BRepEdge, BRepFace, and Feature objects to be filleted. If the isTangentChain argument is true
    /// additional edges or faces may also get filleted if they are tangentially connected to any of the
    /// input edges or faces.
    /// chordLength : A ValueInput object that defines the chord length of the fillet. If the ValueInput uses
    /// a real value then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current document units for length.
    /// isTangentChain : A boolean value for setting whether or not edges or faces that are tangentially connected to
    /// the input edges or faces (if any) will also be filleted.
    /// Returns the newly created ChordLengthFilletEdgeSetInput. This object provides access to additional settings.
    core::Ptr<ChordLengthFilletEdgeSetInput> addChordLengthEdgeSet(const core::Ptr<core::ObjectCollection>& entities, const core::Ptr<core::ValueInput>& chordLength, bool isTangentChain);

    /// Adds an asymmetric fillet edge set to the fillet feature input. Some settings are initialized with a
    /// default value and can be set by modifying properties on the returned AsymmetricFilletEdgeSetInput object.
    /// entities : An ObjectCollection containing the BRepEdge, BRepFace, and Feature objects to be filleted. If the isTangentChain argument is true
    /// additional edges or faces may also get filleted if they are tangentially connected to any of the
    /// input edges or faces.
    /// offsetOne : A ValueInput object that defines the offset of the fillet in the first direction. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// offsetTwo : A ValueInput object that defines the offset of the fillet in the second direction. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// isTangentChain : A boolean value for setting whether or not edges or faces that are tangentially connected to
    /// the input edges or faces will also be filleted.
    /// Returns the newly created AsymmetricFilletEdgeSetInput. This object provides access to additional settings.
    core::Ptr<AsymmetricFilletEdgeSetInput> addAsymmetricRadiusEdgeSet(const core::Ptr<core::ObjectCollection>& entities, const core::Ptr<core::ValueInput>& offsetOne, const core::Ptr<core::ValueInput>& offsetTwo, bool isTangentChain);

    typedef FilletEdgeSetInput iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_FILLETEDGESETINPUTS_API static const char* classType();
    ADSK_FUSION_FILLETEDGESETINPUTS_API const char* objectType() const override;
    ADSK_FUSION_FILLETEDGESETINPUTS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FILLETEDGESETINPUTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual FilletEdgeSetInput* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ConstantRadiusFilletEdgeSetInput* addConstantRadiusEdgeSet_raw(core::ObjectCollection* entities, core::ValueInput* radius, bool isTangentChain) = 0;
    virtual VariableRadiusFilletEdgeSetInput* addVariableRadiusEdgeSet_raw(core::ObjectCollection* tangentEdges, core::ValueInput* startRadius, core::ValueInput* endRadius, bool isTangentChain) = 0;
    virtual ChordLengthFilletEdgeSetInput* addChordLengthEdgeSet_raw(core::ObjectCollection* entities, core::ValueInput* chordLength, bool isTangentChain) = 0;
    virtual AsymmetricFilletEdgeSetInput* addAsymmetricRadiusEdgeSet_raw(core::ObjectCollection* entities, core::ValueInput* offsetOne, core::ValueInput* offsetTwo, bool isTangentChain) = 0;
};

// Inline wrappers

inline core::Ptr<FilletEdgeSetInput> FilletEdgeSetInputs::item(size_t index) const
{
    core::Ptr<FilletEdgeSetInput> res = item_raw(index);
    return res;
}

inline size_t FilletEdgeSetInputs::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ConstantRadiusFilletEdgeSetInput> FilletEdgeSetInputs::addConstantRadiusEdgeSet(const core::Ptr<core::ObjectCollection>& entities, const core::Ptr<core::ValueInput>& radius, bool isTangentChain)
{
    core::Ptr<ConstantRadiusFilletEdgeSetInput> res = addConstantRadiusEdgeSet_raw(entities.get(), radius.get(), isTangentChain);
    return res;
}

inline core::Ptr<VariableRadiusFilletEdgeSetInput> FilletEdgeSetInputs::addVariableRadiusEdgeSet(const core::Ptr<core::ObjectCollection>& tangentEdges, const core::Ptr<core::ValueInput>& startRadius, const core::Ptr<core::ValueInput>& endRadius, bool isTangentChain)
{
    core::Ptr<VariableRadiusFilletEdgeSetInput> res = addVariableRadiusEdgeSet_raw(tangentEdges.get(), startRadius.get(), endRadius.get(), isTangentChain);
    return res;
}

inline core::Ptr<ChordLengthFilletEdgeSetInput> FilletEdgeSetInputs::addChordLengthEdgeSet(const core::Ptr<core::ObjectCollection>& entities, const core::Ptr<core::ValueInput>& chordLength, bool isTangentChain)
{
    core::Ptr<ChordLengthFilletEdgeSetInput> res = addChordLengthEdgeSet_raw(entities.get(), chordLength.get(), isTangentChain);
    return res;
}

inline core::Ptr<AsymmetricFilletEdgeSetInput> FilletEdgeSetInputs::addAsymmetricRadiusEdgeSet(const core::Ptr<core::ObjectCollection>& entities, const core::Ptr<core::ValueInput>& offsetOne, const core::Ptr<core::ValueInput>& offsetTwo, bool isTangentChain)
{
    core::Ptr<AsymmetricFilletEdgeSetInput> res = addAsymmetricRadiusEdgeSet_raw(entities.get(), offsetOne.get(), offsetTwo.get(), isTangentChain);
    return res;
}

template <class OutputIterator> inline void FilletEdgeSetInputs::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FILLETEDGESETINPUTS_API