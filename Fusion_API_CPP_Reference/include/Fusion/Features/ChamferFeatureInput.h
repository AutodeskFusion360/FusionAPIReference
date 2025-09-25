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
# ifdef __COMPILING_ADSK_FUSION_CHAMFERFEATUREINPUT_CPP__
# define ADSK_FUSION_CHAMFERFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_CHAMFERFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_CHAMFERFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class ChamferEdgeSets;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a chamfer
/// feature.
class ChamferFeatureInput : public core::Base {
public:

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the collection of edges that will be chamfered.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> edges() const;
    bool edges(const core::Ptr<core::ObjectCollection>& value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Adds a set of edges to this input.
    /// distance : A ValueInput object that defines the size of the chamfer. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in"). If no units are specified
    /// it is interpreted using the current default units for length.
    /// Returns true if the set of edges was successfully added to the ChamferFeatureInput.
    bool setToEqualDistance(const core::Ptr<core::ValueInput>& distance);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Adds a set of edges to this input.
    /// distanceOne : A ValueInput object that defines the distanceOne of the chamfer. This distance
    /// is along the face which is on the left of the selected edge.
    /// If the ValueInput uses a real then it is interpreted as centimeters.
    /// If it is a string then the units can be defined as part of the string (i.e. "2 in").
    /// If no units are specified it is interpreted using the current default units for length.
    /// distanceTwo : A ValueInput object that defines the distanceTwo of the chamfer. This distance
    /// is along the face which is on the right of the selected edge.
    /// If the ValueInput uses a real then it is interpreted as centimeters.
    /// If it is a string then the units can be defined as part of the string (i.e. "2 in").
    /// If no units are specified it is interpreted using the current default units for length.
    /// Returns true if successful.
    bool setToTwoDistances(const core::Ptr<core::ValueInput>& distanceOne, const core::Ptr<core::ValueInput>& distanceTwo);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Adds a set of edges to this input.
    /// distance : A ValueInput object that defines the distance of the chamfer. This distance
    /// is along the face which is on the right of the selected edge.
    /// If the ValueInput uses a real then it is interpreted as centimeters.
    /// If it is a string then the units can be defined as part of the string (i.e. "2 in").
    /// If no units are specified it is interpreted using the current default units for length.
    /// angle : A valueInput object that defines the angle. The direction will be towards to the face
    /// which is on the left of the selected edge. This can be a string or a value.
    /// If it's a string it is interpreted using the current document units and can include
    /// equations. For example all of the following are valid as long as they result in
    /// angle units; "45", "45 deg", "a1 / 2". If a value is input it is interpreted
    /// as radians. It cannot be negative.
    /// Returns true if successful.
    bool setToDistanceAndAngle(const core::Ptr<core::ValueInput>& distance, const core::Ptr<core::ValueInput>& angle);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets if any edges that are tangentially connected to any of chamfered
    /// edges will also be included in the chamfer.
    bool isTangentChain() const;
    bool isTangentChain(bool value);

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

    /// Gets and sets the type of corner to be modeled when multiple edges connect at a vertex.
    ChamferCornerTypes cornerType() const;
    bool cornerType(ChamferCornerTypes value);

    /// Returns the collection of edge sets for this chamfer feature input.
    core::Ptr<ChamferEdgeSets> chamferEdgeSets() const;

    ADSK_FUSION_CHAMFERFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_CHAMFERFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_CHAMFERFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CHAMFERFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* edges_raw() const = 0;
    virtual bool edges_raw(core::ObjectCollection* value) = 0;
    virtual bool setToEqualDistance_raw(core::ValueInput* distance) = 0;
    virtual bool setToTwoDistances_raw(core::ValueInput* distanceOne, core::ValueInput* distanceTwo) = 0;
    virtual bool setToDistanceAndAngle_raw(core::ValueInput* distance, core::ValueInput* angle) = 0;
    virtual bool isTangentChain_raw() const = 0;
    virtual bool isTangentChain_raw(bool value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual ChamferCornerTypes cornerType_raw() const = 0;
    virtual bool cornerType_raw(ChamferCornerTypes value) = 0;
    virtual ChamferEdgeSets* chamferEdgeSets_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> ChamferFeatureInput::edges() const
{
    core::Ptr<core::ObjectCollection> res = edges_raw();
    return res;
}

inline bool ChamferFeatureInput::edges(const core::Ptr<core::ObjectCollection>& value)
{
    return edges_raw(value.get());
}

inline bool ChamferFeatureInput::setToEqualDistance(const core::Ptr<core::ValueInput>& distance)
{
    bool res = setToEqualDistance_raw(distance.get());
    return res;
}

inline bool ChamferFeatureInput::setToTwoDistances(const core::Ptr<core::ValueInput>& distanceOne, const core::Ptr<core::ValueInput>& distanceTwo)
{
    bool res = setToTwoDistances_raw(distanceOne.get(), distanceTwo.get());
    return res;
}

inline bool ChamferFeatureInput::setToDistanceAndAngle(const core::Ptr<core::ValueInput>& distance, const core::Ptr<core::ValueInput>& angle)
{
    bool res = setToDistanceAndAngle_raw(distance.get(), angle.get());
    return res;
}

inline bool ChamferFeatureInput::isTangentChain() const
{
    bool res = isTangentChain_raw();
    return res;
}

inline bool ChamferFeatureInput::isTangentChain(bool value)
{
    return isTangentChain_raw(value);
}

inline core::Ptr<BaseFeature> ChamferFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool ChamferFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline ChamferCornerTypes ChamferFeatureInput::cornerType() const
{
    ChamferCornerTypes res = cornerType_raw();
    return res;
}

inline bool ChamferFeatureInput::cornerType(ChamferCornerTypes value)
{
    return cornerType_raw(value);
}

inline core::Ptr<ChamferEdgeSets> ChamferFeatureInput::chamferEdgeSets() const
{
    core::Ptr<ChamferEdgeSets> res = chamferEdgeSets_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CHAMFERFEATUREINPUT_API