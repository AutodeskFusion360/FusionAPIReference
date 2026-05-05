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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FILLETFEATUREINPUT_CPP__
# define ADSK_FUSION_FILLETFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_FILLETFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_FILLETFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class FilletEdgeSetInputs;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a fillet
/// feature.
class FilletFeatureInput : public core::Base {
public:

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Adds a set of edges with a constant radius to this input.
    /// edges : An ObjectCollection containing the edges to be filleted. If the isTangentChain argument is true
    /// additional edges may also get filleted if they are tangentially connected to any of the
    /// input edges.
    /// radius : A ValueInput object that defines the radius of the fillet. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// isTangentChain : A boolean value for setting whether or not edges that are tangentially connected to
    /// the input edges will also be filleted.
    /// Returns true if the set of edges was successfully added to the FilletFeatureInput.
    bool addConstantRadiusEdgeSet(const core::Ptr<core::ObjectCollection>& edges, const core::Ptr<core::ValueInput>& radius, bool isTangentChain);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Adds a single edge or set of tangent edges along with variable radius information to this input.
    /// tangentEdges : An object collection containing a single edge or multiple edges. Multiple edges
    /// must be tangentially connected and added to the collection in order.
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
    /// Returns true if the edge set was successfully added to the FilletFeatureInput.
    bool addVariableRadiusEdgeSet(const core::Ptr<core::ObjectCollection>& tangentEdges, const core::Ptr<core::ValueInput>& startRadius, const core::Ptr<core::ValueInput>& endRadius, const std::vector<core::Ptr<core::ValueInput>>& positions, const std::vector<core::Ptr<core::ValueInput>>& radii);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets if the fillet uses the G2 (curvature-continuity) surface quality option.
    bool isG2() const;
    bool isG2(bool value);

    /// Gets and sets if a rolling ball or setback solution is to be used in any corners.
    /// For an asymmetric fillet only a setback solution is supported, so any asymmetric
    /// edge sets will ignore this setting and will always be a setback corner.
    bool isRollingBallCorner() const;
    bool isRollingBallCorner(bool value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets if any edges that are tangentially connected to any of filleted
    /// edges will also be included in the fillet.
    bool isTangentChain() const;
    bool isTangentChain(bool value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Adds a set of edges with a chord length to this input.
    /// edges : An ObjectCollection containing the edges to be filleted. If the isTangentChain argument is true
    /// additional edges may also get filleted if they are tangentially connected to any of the
    /// input edges.
    /// chordLength : A ValueInput object that defines the chord length of the fillet. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// isTangentChain : A boolean value for setting whether or not edges that are tangentially connected to
    /// the input edges or faces will also be filleted.
    /// Returns true if the set of edges was successfully added to the FilletFeatureInput.
    bool addChordLengthEdgeSet(const core::Ptr<core::ObjectCollection>& edges, const core::Ptr<core::ValueInput>& chordLength, bool isTangentChain);

    /// When creating a feature that is owned by a base feature, set this property to the
    /// base feature you want to associate the new feature with. By default, this is null,
    /// meaning it will not be associated with a base feature.
    /// 
    /// Because of a current limitation, if you want to create a feature associated with a base
    /// feature, you must set this property AND call the startEdit method of the base feature,
    /// create the feature, and then call the finishEdit method of the base feature. The base
    /// feature must be in an "edit" state to be able to add any additional items to it.
    core::Ptr<BaseFeature> targetBaseFeature() const;
    bool targetBaseFeature(const core::Ptr<BaseFeature>& value);

    /// Gets the FilletEdgeSetInputs object that provides support to create the various types of edge
    /// sets that will be used to create the fillet.
    core::Ptr<FilletEdgeSetInputs> edgeSetInputs() const;

    ADSK_FUSION_FILLETFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_FILLETFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_FILLETFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FILLETFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool addConstantRadiusEdgeSet_raw(core::ObjectCollection* edges, core::ValueInput* radius, bool isTangentChain) = 0;
    virtual bool addVariableRadiusEdgeSet_raw(core::ObjectCollection* tangentEdges, core::ValueInput* startRadius, core::ValueInput* endRadius, core::ValueInput** positions, size_t positions_size, core::ValueInput** radii, size_t radii_size) = 0;
    virtual bool isG2_raw() const = 0;
    virtual bool isG2_raw(bool value) = 0;
    virtual bool isRollingBallCorner_raw() const = 0;
    virtual bool isRollingBallCorner_raw(bool value) = 0;
    virtual bool isTangentChain_raw() const = 0;
    virtual bool isTangentChain_raw(bool value) = 0;
    virtual bool addChordLengthEdgeSet_raw(core::ObjectCollection* edges, core::ValueInput* chordLength, bool isTangentChain) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual FilletEdgeSetInputs* edgeSetInputs_raw() const = 0;
};

// Inline wrappers

inline bool FilletFeatureInput::addConstantRadiusEdgeSet(const core::Ptr<core::ObjectCollection>& edges, const core::Ptr<core::ValueInput>& radius, bool isTangentChain)
{
    bool res = addConstantRadiusEdgeSet_raw(edges.get(), radius.get(), isTangentChain);
    return res;
}

inline bool FilletFeatureInput::addVariableRadiusEdgeSet(const core::Ptr<core::ObjectCollection>& tangentEdges, const core::Ptr<core::ValueInput>& startRadius, const core::Ptr<core::ValueInput>& endRadius, const std::vector<core::Ptr<core::ValueInput>>& positions, const std::vector<core::Ptr<core::ValueInput>>& radii)
{
    core::ValueInput** positions_ = new core::ValueInput*[positions.size()];
    for(size_t i=0; i<positions.size(); ++i)
        positions_[i] = positions[i].get();
    core::ValueInput** radii_ = new core::ValueInput*[radii.size()];
    for(size_t i=0; i<radii.size(); ++i)
        radii_[i] = radii[i].get();

    bool res = addVariableRadiusEdgeSet_raw(tangentEdges.get(), startRadius.get(), endRadius.get(), positions_, positions.size(), radii_, radii.size());
    delete[] positions_;
    delete[] radii_;
    return res;
}

inline bool FilletFeatureInput::isG2() const
{
    bool res = isG2_raw();
    return res;
}

inline bool FilletFeatureInput::isG2(bool value)
{
    return isG2_raw(value);
}

inline bool FilletFeatureInput::isRollingBallCorner() const
{
    bool res = isRollingBallCorner_raw();
    return res;
}

inline bool FilletFeatureInput::isRollingBallCorner(bool value)
{
    return isRollingBallCorner_raw(value);
}

inline bool FilletFeatureInput::isTangentChain() const
{
    bool res = isTangentChain_raw();
    return res;
}

inline bool FilletFeatureInput::isTangentChain(bool value)
{
    return isTangentChain_raw(value);
}

inline bool FilletFeatureInput::addChordLengthEdgeSet(const core::Ptr<core::ObjectCollection>& edges, const core::Ptr<core::ValueInput>& chordLength, bool isTangentChain)
{
    bool res = addChordLengthEdgeSet_raw(edges.get(), chordLength.get(), isTangentChain);
    return res;
}

inline core::Ptr<BaseFeature> FilletFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool FilletFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline core::Ptr<FilletEdgeSetInputs> FilletFeatureInput::edgeSetInputs() const
{
    core::Ptr<FilletEdgeSetInputs> res = edgeSetInputs_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FILLETFEATUREINPUT_API