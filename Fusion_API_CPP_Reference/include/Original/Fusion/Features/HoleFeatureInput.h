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
# ifdef __COMPILING_ADSK_FUSION_HOLEFEATUREINPUT_CPP__
# define ADSK_FUSION_HOLEFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_HOLEFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_HOLEFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class Point3D;
    class ValueInput;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepBody;
    class BRepEdge;
    class ClearanceHoleInfo;
    class Occurrence;
    class SketchPoint;
    class ThreadInfo;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a hole
/// feature.
class HoleFeatureInput : public core::Base {
public:

    /// Defines the position of a the hole using a point. The point can be a vertex on the face
    /// or it can be a Point3D object to define any location on the face. If a Point3D object is
    /// provided it will be projected onto the plane along the planes normal. The orientation of the
    /// hole is defined by the planar face or construction plane. If a vertex is used, the position of
    /// the hole is associative to that vertex. If a Point3D object is used the position of the hole
    /// is not associative.
    /// planarEntity : The planar BRepFace or ConstructionPlane object that defines the orientation of the hole.
    /// The natural direction of the hole will be opposite the normal of the face or construction plane.
    /// point : A Point3D object or vertex that defines the position of the hole. The point will be projected
    /// onto the plane along the normal of the plane.
    /// Returns true if successful.
    bool setPositionByPoint(const core::Ptr<core::Base>& planarEntity, const core::Ptr<core::Base>& point);

    /// Defines the position of the hole at the center of a circular or elliptical edge of the face.
    /// planarEntity : The planar BRepFace or ConstructionPlane object that defines the orientation of the hole.
    /// The natural direction of the hole will be opposite the normal of the face or construction plane.
    /// centerEdge : A circular or elliptical edge whose center point will be the position of the hole.
    /// Returns true if successful.
    bool setPositionAtCenter(const core::Ptr<core::Base>& planarEntity, const core::Ptr<BRepEdge>& centerEdge);

    /// Defines the position and orientation of the hole using a sketch point.
    /// sketchPoint : The sketch point that defines the position of the hole. The orientation is
    /// inferred from the normal of the point's parent sketch. The natural direction will be
    /// opposite the normal of the sketch.
    /// Returns true if successful.
    bool setPositionBySketchPoint(const core::Ptr<SketchPoint>& sketchPoint);

    /// Defines the orientation of the hole using a planar face or construction plane.
    /// The position of the hole is defined by the distance from one or two edges.
    /// planarEntity : The planar BRepFace or ConstructionPlane object that defines the orientation of the hole.
    /// The natural direction of the hole will be opposite the normal of the face or construction plane.
    /// point : A Point3D object that defines the approximate initial position of the hole. The point will be
    /// projected onto the plane. This point should be close to the final position of the hole and
    /// is used to determine which solution out of several possible solutions should be chosen
    /// for the hole location.
    /// 
    /// This point is defined in the coordinate system of the native entity used for the planarEntity
    /// argument. For example, if the planarEntity argument is a proxy to a BRepFace, the point argument
    /// must be in the coordinate system of the component of the native face, not the proxy.
    /// edgeOne : A linear BRepEdge object that the position of the hole will be measured from. The position
    /// of the hole will be measured along a perpendicular from this edge.
    /// offsetOne : A ValueInput object that defines the offset distance from edgeOne. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "3 in"). If no units are specified
    /// it is interpreted using the current default units for length.
    /// edgeTwo : You can optionally define a second edge and offset to specify the position of the hole. If you use a
    /// second edge it has the same requirements as the edgeOne argument. If you provide a second edge you
    /// must also provide the offsetTwo argument.
    /// offsetTwo : If edgeTwo is defined, you must provide this argument which is a ValueInput object that
    /// defines the offset from the edgeTwo. If the ValueInput uses a real then it is interpreted
    /// as centimeters. If it is a string then the units can be defined as part of the string
    /// (i.e. "3 in"). If no units are specified it is interpreted using the current default units
    /// for length.
    /// Returns true if successful.
    bool setPositionByPlaneAndOffsets(const core::Ptr<core::Base>& planarEntity, const core::Ptr<core::Point3D>& point, const core::Ptr<BRepEdge>& edgeOne, const core::Ptr<core::ValueInput>& offsetOne, const core::Ptr<BRepEdge>& edgeTwo = NULL, const core::Ptr<core::ValueInput>& offsetTwo = NULL);

    /// Defines the position and orientation of the hole to be on the start, end or center of an edge.
    /// planarEntity : The planar BRepFace or ConstructionPlane object that defines the orientation of the hole
    /// and start of the hole. The natural direction of the hole will be opposite the normal of
    /// the face or construction plane.
    /// edge : The edge to position the hole on.
    /// position : The position along the edge to place the hole.
    /// Returns true if successful.
    bool setPositionOnEdge(const core::Ptr<core::Base>& planarEntity, const core::Ptr<BRepEdge>& edge, HoleEdgePositions position);

    /// Gets the ValueInput object that defines the angle of the tip of the hole. The default
    /// is "118.0 deg" but can be modified by setting it using another Value object.
    core::Ptr<core::ValueInput> tipAngle() const;
    bool tipAngle(const core::Ptr<core::ValueInput>& value);

    /// Gets or sets if the hole goes in the default direction or is reversed.
    bool isDefaultDirection() const;
    bool isDefaultDirection(bool value);

    /// Defines the depth of the hole using a specified distance.
    /// distance : The depth of the hole. If a real is specified the value is in centimeters.
    /// If a string is specified the units are derived from the string. If no units are specified,
    /// the default units of the document are used.
    /// Returns true if setting the extent was successful.
    bool setDistanceExtent(const core::Ptr<core::ValueInput>& distance);

    /// Defines the extent of the hole to be through-all. The direction can be
    /// either positive, negative.
    /// direction : The direction of the hole relative to the normal of the sketch plane.
    /// Returns true if successful.
    bool setAllExtent(ExtentDirections direction);

    /// Sets the extent of the hole to be from the sketch plane to the specified "to" face.
    /// toEntity : The entity that defines the "to" extent. The valid types of entities can vary depending on
    /// the type of feature this is being used with. For a hole it can be a BRepBody, BRepFace,
    /// BRepVertex, ConstructionPlane, or ConstructionPoint.
    /// matchShape : Indicates if the hole is not contained on the face that the hole should match
    /// the shape of the entity as if it extended beyond its current boundaries.
    /// directionHint : Specifies the direction of the hole. This is only used in the case where there are two possible solutions and the hole can
    /// hit the toEntity in either direction.
    /// 
    /// Typically there is only a single solution and the direction is determined automatically.
    /// Returns true if successful.
    bool setOneSideToExtent(const core::Ptr<core::Base>& toEntity, bool matchShape, const core::Ptr<core::Vector3D>& directionHint = NULL);

    /// In order for geometry to be transformed correctly, an Occurrence for creation needs to be
    /// specified when the Hole is created based on geometry (e.g. a face or point)
    /// in another component AND (the Hole) is not in the root component.
    /// The CreationOccurrence is analogous to the active occurrence in the UI
    /// A value of null indicates that everything is in the context of a single component.
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    /// Defines the position and orientation of the hole using a set of sketch points.
    /// sketchPoints : A collection of sketch points that defines the positions of the holes. The orientation is
    /// inferred from the normal of the point's parent sketch. The natural direction will be
    /// opposite the normal of the sketch. The points can be from multiple sketches but they
    /// must all be co-planar.
    /// Returns true if successful.
    bool setPositionBySketchPoints(const core::Ptr<core::ObjectCollection>& sketchPoints);

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

    /// Gets and sets the list of bodies that will participate in the hole.
    /// 
    /// If this property has not been set, the default behavior is that all bodies that are intersected by the
    /// hole will participate.
    /// 
    /// This property can return null in the case where the feature has not been fully defined so that
    /// possible intersecting bodies can be computed.
    std::vector<core::Ptr<BRepBody>> participantBodies() const;
    bool participantBodies(const std::vector<core::Ptr<BRepBody>>& value);

    /// Returns the current type of tap associated with this hole. When a new HoleFeatureInput
    /// is created, this will default to SimpleHoleTapType, which means the hole will not have
    /// any tap and will be a simple hole. You can set the tap type by using one of the methods
    /// to define the specific tap desired.
    HoleTapTypes holeTapType() const;

    /// This property sets the hole's tap to be "simple", which means that it will not have
    /// any tap and will be a simple hole. When a new input is created, it defaults to being
    /// a simple hole.
    /// Returns true if successful.
    bool setToSimpleHole();

    /// Sets the hole to be a clearance hole of the size specified by the ClearanceHoleInfo object.
    /// clearanceHoleInfo : The ClearanceHoleInfo object that specifies the size of the clearance hole.
    /// Returns true if setting to a clearance hole was successful.
    bool setToClearanceHole(const core::Ptr<ClearanceHoleInfo>& clearanceHoleInfo);

    /// Sets the hole to be a straight or tapered tapped hole of the size specified by the ThreadInfo object.
    /// threadInfo : The ThreadInfo object that specifies the thread to use for the tapped hole. Whether it is straight
    /// or tapered tap is defined by the input ThreadInfo object.
    /// Returns true if setting to a tapped hole was successful.
    bool setToTappedHole(const core::Ptr<ThreadInfo>& threadInfo);

    /// Gets and sets if the thread is physical or cosmetic thread. A value of
    /// true indicates a physical thread. It defaults to false.
    /// 
    /// This property is only used when creating a tapped hole, which
    /// means the setToTappedHole method has been called. Otherwise this
    /// property is ignored.
    bool isModeled() const;
    bool isModeled(bool value);

    /// Gets and sets if this thread is the full length of the hole. It defaults to true.
    /// 
    /// This property is only used when creating a tapped hole, which
    /// means the setToTappedHole method has been called. Otherwise this
    /// property is ignored.
    /// 
    /// The property can only be set to True, which will cause the feature to ignore the
    /// values of the threadLength and threadOffset properties. Using the setLengthAndOffset
    /// method will have the side effect of setting this property to false.
    bool isFullLength() const;
    bool isFullLength(bool value);

    /// Sets the length and offset of the thread of a tapped hole.
    /// 
    /// This method is only used when creating a tapped hole, which
    /// means the setToTappedHole method has been called. Otherwise calling this
    /// method will fail.
    /// 
    /// By default the isFullLength property is true which means the thread is
    /// the full length of the hole and there is no offset. Calling this method will have
    /// the side effect of setting the isFullLength property to false.
    /// length : Sets the length of the thread.
    /// offset : Sets the offset of the thread from the start of the hole. A value of zero is valid
    /// for no offset.
    /// 
    bool setLengthAndOffset(const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& offset);

    /// Gets the thread length when the isFullLength property is False. Returns null when the
    /// isFullLength property is true.
    core::Ptr<core::ValueInput> threadLength() const;

    /// Gets the thread offset when the isFullLength property is False. Returns null when the
    /// isFullLength property is true.
    core::Ptr<core::ValueInput> threadOffset() const;

    ADSK_FUSION_HOLEFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_HOLEFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_HOLEFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_HOLEFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setPositionByPoint_raw(core::Base* planarEntity, core::Base* point) = 0;
    virtual bool setPositionAtCenter_raw(core::Base* planarEntity, BRepEdge* centerEdge) = 0;
    virtual bool setPositionBySketchPoint_raw(SketchPoint* sketchPoint) = 0;
    virtual bool setPositionByPlaneAndOffsets_raw(core::Base* planarEntity, core::Point3D* point, BRepEdge* edgeOne, core::ValueInput* offsetOne, BRepEdge* edgeTwo, core::ValueInput* offsetTwo) = 0;
    virtual bool setPositionOnEdge_raw(core::Base* planarEntity, BRepEdge* edge, HoleEdgePositions position) = 0;
    virtual core::ValueInput* tipAngle_raw() const = 0;
    virtual bool tipAngle_raw(core::ValueInput* value) = 0;
    virtual bool isDefaultDirection_raw() const = 0;
    virtual bool isDefaultDirection_raw(bool value) = 0;
    virtual bool setDistanceExtent_raw(core::ValueInput* distance) = 0;
    virtual bool setAllExtent_raw(ExtentDirections direction) = 0;
    virtual bool setOneSideToExtent_raw(core::Base* toEntity, bool matchShape, core::Vector3D* directionHint) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
    virtual bool setPositionBySketchPoints_raw(core::ObjectCollection* sketchPoints) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual BRepBody** participantBodies_raw(size_t& return_size) const = 0;
    virtual bool participantBodies_raw(BRepBody** value, size_t value_size) = 0;
    virtual HoleTapTypes holeTapType_raw() const = 0;
    virtual bool setToSimpleHole_raw() = 0;
    virtual bool setToClearanceHole_raw(ClearanceHoleInfo* clearanceHoleInfo) = 0;
    virtual bool setToTappedHole_raw(ThreadInfo* threadInfo) = 0;
    virtual bool isModeled_raw() const = 0;
    virtual bool isModeled_raw(bool value) = 0;
    virtual bool isFullLength_raw() const = 0;
    virtual bool isFullLength_raw(bool value) = 0;
    virtual bool setLengthAndOffset_raw(core::ValueInput* length, core::ValueInput* offset) = 0;
    virtual core::ValueInput* threadLength_raw() const = 0;
    virtual core::ValueInput* threadOffset_raw() const = 0;
};

// Inline wrappers

inline bool HoleFeatureInput::setPositionByPoint(const core::Ptr<core::Base>& planarEntity, const core::Ptr<core::Base>& point)
{
    bool res = setPositionByPoint_raw(planarEntity.get(), point.get());
    return res;
}

inline bool HoleFeatureInput::setPositionAtCenter(const core::Ptr<core::Base>& planarEntity, const core::Ptr<BRepEdge>& centerEdge)
{
    bool res = setPositionAtCenter_raw(planarEntity.get(), centerEdge.get());
    return res;
}

inline bool HoleFeatureInput::setPositionBySketchPoint(const core::Ptr<SketchPoint>& sketchPoint)
{
    bool res = setPositionBySketchPoint_raw(sketchPoint.get());
    return res;
}

inline bool HoleFeatureInput::setPositionByPlaneAndOffsets(const core::Ptr<core::Base>& planarEntity, const core::Ptr<core::Point3D>& point, const core::Ptr<BRepEdge>& edgeOne, const core::Ptr<core::ValueInput>& offsetOne, const core::Ptr<BRepEdge>& edgeTwo, const core::Ptr<core::ValueInput>& offsetTwo)
{
    bool res = setPositionByPlaneAndOffsets_raw(planarEntity.get(), point.get(), edgeOne.get(), offsetOne.get(), edgeTwo.get(), offsetTwo.get());
    return res;
}

inline bool HoleFeatureInput::setPositionOnEdge(const core::Ptr<core::Base>& planarEntity, const core::Ptr<BRepEdge>& edge, HoleEdgePositions position)
{
    bool res = setPositionOnEdge_raw(planarEntity.get(), edge.get(), position);
    return res;
}

inline core::Ptr<core::ValueInput> HoleFeatureInput::tipAngle() const
{
    core::Ptr<core::ValueInput> res = tipAngle_raw();
    return res;
}

inline bool HoleFeatureInput::tipAngle(const core::Ptr<core::ValueInput>& value)
{
    return tipAngle_raw(value.get());
}

inline bool HoleFeatureInput::isDefaultDirection() const
{
    bool res = isDefaultDirection_raw();
    return res;
}

inline bool HoleFeatureInput::isDefaultDirection(bool value)
{
    return isDefaultDirection_raw(value);
}

inline bool HoleFeatureInput::setDistanceExtent(const core::Ptr<core::ValueInput>& distance)
{
    bool res = setDistanceExtent_raw(distance.get());
    return res;
}

inline bool HoleFeatureInput::setAllExtent(ExtentDirections direction)
{
    bool res = setAllExtent_raw(direction);
    return res;
}

inline bool HoleFeatureInput::setOneSideToExtent(const core::Ptr<core::Base>& toEntity, bool matchShape, const core::Ptr<core::Vector3D>& directionHint)
{
    bool res = setOneSideToExtent_raw(toEntity.get(), matchShape, directionHint.get());
    return res;
}

inline core::Ptr<Occurrence> HoleFeatureInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool HoleFeatureInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}

inline bool HoleFeatureInput::setPositionBySketchPoints(const core::Ptr<core::ObjectCollection>& sketchPoints)
{
    bool res = setPositionBySketchPoints_raw(sketchPoints.get());
    return res;
}

inline core::Ptr<BaseFeature> HoleFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool HoleFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline std::vector<core::Ptr<BRepBody>> HoleFeatureInput::participantBodies() const
{
    std::vector<core::Ptr<BRepBody>> res;
    size_t s;

    BRepBody** p= participantBodies_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool HoleFeatureInput::participantBodies(const std::vector<core::Ptr<BRepBody>>& value)
{
    BRepBody** value_ = new BRepBody*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = participantBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline HoleTapTypes HoleFeatureInput::holeTapType() const
{
    HoleTapTypes res = holeTapType_raw();
    return res;
}

inline bool HoleFeatureInput::setToSimpleHole()
{
    bool res = setToSimpleHole_raw();
    return res;
}

inline bool HoleFeatureInput::setToClearanceHole(const core::Ptr<ClearanceHoleInfo>& clearanceHoleInfo)
{
    bool res = setToClearanceHole_raw(clearanceHoleInfo.get());
    return res;
}

inline bool HoleFeatureInput::setToTappedHole(const core::Ptr<ThreadInfo>& threadInfo)
{
    bool res = setToTappedHole_raw(threadInfo.get());
    return res;
}

inline bool HoleFeatureInput::isModeled() const
{
    bool res = isModeled_raw();
    return res;
}

inline bool HoleFeatureInput::isModeled(bool value)
{
    return isModeled_raw(value);
}

inline bool HoleFeatureInput::isFullLength() const
{
    bool res = isFullLength_raw();
    return res;
}

inline bool HoleFeatureInput::isFullLength(bool value)
{
    return isFullLength_raw(value);
}

inline bool HoleFeatureInput::setLengthAndOffset(const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& offset)
{
    bool res = setLengthAndOffset_raw(length.get(), offset.get());
    return res;
}

inline core::Ptr<core::ValueInput> HoleFeatureInput::threadLength() const
{
    core::Ptr<core::ValueInput> res = threadLength_raw();
    return res;
}

inline core::Ptr<core::ValueInput> HoleFeatureInput::threadOffset() const
{
    core::Ptr<core::ValueInput> res = threadOffset_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_HOLEFEATUREINPUT_API