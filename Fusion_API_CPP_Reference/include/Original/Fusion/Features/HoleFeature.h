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
#include "Feature.h"
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_HOLEFEATURE_CPP__
# define ADSK_FUSION_HOLEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_HOLEFEATURE_API
# endif
#else
# define ADSK_FUSION_HOLEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class Point3D;
    class ValueInput;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class BRepBody;
    class BRepEdge;
    class BRepFaces;
    class ClearanceHoleInfo;
    class ExtentDefinition;
    class HolePositionDefinition;
    class ModelParameter;
    class Occurrence;
    class SketchPoint;
    class ThreadFeature;
    class ThreadInfo;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing hole feature in a design.
class HoleFeature : public Feature {
public:

    /// Returns the position of the hole.
    core::Ptr<core::Point3D> position() const;

    /// Returns the direction of the hole.
    core::Ptr<core::Vector3D> direction() const;

    /// Returns the current type of hole this feature represents.
    HoleTypes holeType() const;

    /// Returns the model parameter controlling the hole diameter. The diameter of
    /// the hole can be edited through the returned parameter object.
    /// 
    /// If there is a thread associated with the hole the thread definition controls
    /// the diameter of the hole. Even though there is a parameter for the diameter,
    /// its value is ignored when there is a thread.
    core::Ptr<ModelParameter> holeDiameter() const;

    /// Returns the model parameter controlling the angle of the tip of the hole. The tip angle of
    /// the hole can be edited through the returned parameter object.
    core::Ptr<ModelParameter> tipAngle() const;

    /// Returns the model parameter controlling the counterbore diameter.
    /// This will return null in the case the hole type is not a counterbore.
    /// The diameter of the counterbore can be edited through the returned parameter.
    core::Ptr<ModelParameter> counterboreDiameter() const;

    /// Returns the model parameter controlling the counterbore depth.
    /// This will return null in the case the hole type is not a counterbore.
    /// The depth of the counterbore can be edited through the returned parameter.
    core::Ptr<ModelParameter> counterboreDepth() const;

    /// Returns the model parameter controlling the countersink diameter.
    /// This will return null in the case the hole type is not a countersink.
    /// The diameter of the countersink can be edited through the returned parameter.
    core::Ptr<ModelParameter> countersinkDiameter() const;

    /// Returns the model parameter controlling the countersink angle.
    /// This will return null in the case the hole type is not a countersink.
    /// The angle of the countersink can be edited through the returned parameter.
    core::Ptr<ModelParameter> countersinkAngle() const;

    /// Gets and sets if the hole is in the default direction or not.
    bool isDefaultDirection() const;
    bool isDefaultDirection(bool value);

    /// Calling this method will change the hole to a simple hole.
    /// Returns true if changing the hole was successful.
    bool setToSimple();

    /// Calling this method will change the hole to a counterbore hole.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// counterboreDiameter : A ValueInput object that defines the counterbore diameter. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "3 in"). If no units are specified
    /// it is interpreted using the current default units for length.
    /// counterboreDepth : A ValueInput object that defines the counterbore depth. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "3 in"). If no units are specified
    /// it is interpreted using the current default units for length.
    /// Returns true if changing the hole was successful.
    bool setToCounterbore(const core::Ptr<core::ValueInput>& counterboreDiameter, const core::Ptr<core::ValueInput>& counterboreDepth);

    /// Calling this method will change the hole to a countersink hole.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// countersinkDiameter : A ValueInput object that defines the countersink diameter. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "3 in"). If no units are specified
    /// it is interpreted using the current default units for length.
    /// countersinkAngle : A ValueInput object that defines the countersink angle. If the ValueInput uses
    /// a real then it is interpreted as radians. If it is a string then the units
    /// can be defined as part of the string (i.e. "120 deg"). If no units are specified
    /// it is interpreted using the current default units for length.
    /// Returns true if changing the hole was successful.
    bool setToCountersink(const core::Ptr<core::ValueInput>& countersinkDiameter, const core::Ptr<core::ValueInput>& countersinkAngle);

    /// Gets the definition object that is defining the extent of the hole. Modifying the
    /// definition object will cause the hole to recompute. The extent type of a hole
    /// is currently limited to a distance extent.
    core::Ptr<ExtentDefinition> extentDefinition() const;

    /// Defines the depth of the hole using a specific distance.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// distance : The depth of the hole. If a real is specified the value is in centimeters. If a string is
    /// specified the units are derived from the string. If no units are specified, the default
    /// units of the document are used.
    /// Returns true if setting the extent was successful.
    bool setDistanceExtent(const core::Ptr<core::ValueInput>& distance);

    /// Defines the extent of the hole to be through-all. The direction can be
    /// either positive, negative.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// direction : The direction of the hole relative to the normal of the sketch plane.
    /// Returns true if successful.
    bool setAllExtent(ExtentDirections direction);

    /// Sets the extent of the hole to be from the sketch plane to the specified "to" face.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
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

    /// Property that returns the faces at the bottom of the hole. This will typically be a single face
    /// but could return more than one face in the case where the bottom of the hole is uneven.
    core::Ptr<BRepFaces> endFaces() const;

    /// Property that returns all of the side faces of the hole.
    core::Ptr<BRepFaces> sideFaces() const;

    /// Redefines the position of a the hole using a point. The point can be a vertex on the face
    /// or it can be a Point3D object to define any location on the face. If a Point3D object is
    /// provided it will be projected onto the plane along the planes normal. The orientation of the
    /// hole is defined by the planar face or construction plane. If a vertex is used, the position of
    /// the hole is associative to that vertex. If a Point3D object is used the position of the hole
    /// is not associative.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// planarEntity : The planar BRepFace or ConstructionPlane object that defines the orientation of the hole.
    /// The natural direction of the hole will be opposite the normal of the face or construction plane.
    /// point : A Point3D object or vertex that defines the position of the hole. The point will be projected
    /// onto the plane along the normal of the plane.
    /// Returns true if successful.
    bool setPositionByPoint(const core::Ptr<core::Base>& planarEntity, const core::Ptr<core::Base>& point);

    /// Redefines the position of the hole at the center of a circular or elliptical edge of the face.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// planarEntity : The planar BRepFace or ConstructionPlane object that defines the orientation of the hole.
    /// The natural direction of the hole will be opposite the normal of the face or construction plane.
    /// centerEdge : A circular or elliptical edge whose center point will be the position of the hole.
    /// Returns true if successful.
    bool setPositionAtCenter(const core::Ptr<core::Base>& planarEntity, const core::Ptr<BRepEdge>& centerEdge);

    /// Redefines the position and orientation of the hole using a sketch point.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// sketchPoint : The sketch point that defines the position of the hole. The orientation is
    /// inferred from the normal of the point's parent sketch. The natural direction will be
    /// opposite the normal of the sketch.
    /// Returns true if successful.
    bool setPositionBySketchPoint(const core::Ptr<SketchPoint>& sketchPoint);

    /// Redefines the position and orientation of the hole using a set of points.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// sketchPoints : A collection of sketch points that defines the positions of the holes. The orientation is
    /// inferred from the normal of the point's parent sketch. The natural direction will be
    /// opposite the normal of the sketch. All of the points must be in the same sketch.
    /// Returns true if successful.
    bool setPositionBySketchPoints(const core::Ptr<core::ObjectCollection>& sketchPoints);

    /// Redefines the orientation of the hole using a planar face or construction plane.
    /// The position of the hole is defined by the distance from one or two edges.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// planarEntity : The planar BRepFace or ConstructionPlane object that defines the orientation of the hole.
    /// The natural direction of the hole will be opposite the normal of the face or construction plane.
    /// point : A Point3D object that defines the approximate initial position of the hole. The point will be
    /// projected onto the plane. This point should be close to the final position of the hole and
    /// is used to determine which solution out of several possible solutions should be chosen
    /// for the hole location.
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

    /// Redefines the position and orientation of the hole to be on the start, end or center of an edge.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// planarEntity : The planar BRepFace or ConstructionPlane object that defines the orientation of the hole
    /// and start of the hole. The natural direction of the hole will be opposite the normal of
    /// the face or construction plane.
    /// edge : The edge to position the hole on.
    /// position : The position along the edge to place the hole.
    /// Returns true if successful.
    bool setPositionOnEdge(const core::Ptr<core::Base>& planarEntity, const core::Ptr<BRepEdge>& edge, HoleEdgePositions position);

    /// Returns a HolePositionDefinition object that provides access to the information used
    /// to define the position of the hole. This returns null in the case where IsParametric
    /// is false.
    core::Ptr<HolePositionDefinition> holePositionDefinition() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<HoleFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<HoleFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets and sets the list of bodies that will participate in the feature when the operation is a cut or intersection.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    std::vector<core::Ptr<BRepBody>> participantBodies() const;
    bool participantBodies(const std::vector<core::Ptr<BRepBody>>& value);

    /// This property returns the current type of tap associated with this hole. You can set the tap type
    /// by using one of the following methods: setToSimpleHole, setToClearanceHole, or setToTappedHole.
    HoleTapTypes holeTapType() const;

    /// This method sets the hole's tap to be "simple," which means that the hole will not have any
    /// tap and will be a simple hole.
    /// Returns true if successful.
    bool setToSimpleHole();

    /// Sets the hole to be a clearance hole of the size specified by the ClearanceHoleInfo object.
    /// clearanceHoleInfo : The ClearanceHoleInfo object that specifies the size of the clearance hole.
    /// Returns true if setting to a clearance hole was successful.
    bool setToClearanceHole(const core::Ptr<ClearanceHoleInfo>& clearanceHoleInfo);

    /// Returns the information used to define a clearance hole. This returns a
    /// ClearanceHoleInfo object when the holeTapType returns ClearanceHoleTapType. Otherwise
    /// this property returns null.
    core::Ptr<ClearanceHoleInfo> clearanceHoleInfo() const;

    /// Sets the hole to be a straight or tapered tapped hole of the size specified by the ThreadInfo object.
    /// threadInfo : The ThreadInfo object that specifies the thread to use for the tapped hole. Whether it is straight
    /// or tapered tap is defined by the input ThreadInfo object.
    /// Returns true if setting to a tapped hole was successful.
    bool setToTappedHole(const core::Ptr<ThreadInfo>& threadInfo);

    /// This property returns the information used to define a tapped hole.
    /// Otherwise, this property returns null.
    core::Ptr<ThreadInfo> tappedHoleInfo() const;

    /// When a tapped hole is created, a thread feature is also automatically created and controls
    /// the tapped threads. The thread feature is tied to the hole and is not displayed in the timeline
    /// and is suppressed if the hole is suppressed and deleted if the hole is deleted. This property
    /// returns the thread feature associated with this hole if it is a tapped hole. It returns null
    /// for all other hole types.
    core::Ptr<ThreadFeature> thread() const;

    ADSK_FUSION_HOLEFEATURE_API static const char* classType();
    ADSK_FUSION_HOLEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_HOLEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_HOLEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Point3D* position_raw() const = 0;
    virtual core::Vector3D* direction_raw() const = 0;
    virtual HoleTypes holeType_raw() const = 0;
    virtual ModelParameter* holeDiameter_raw() const = 0;
    virtual ModelParameter* tipAngle_raw() const = 0;
    virtual ModelParameter* counterboreDiameter_raw() const = 0;
    virtual ModelParameter* counterboreDepth_raw() const = 0;
    virtual ModelParameter* countersinkDiameter_raw() const = 0;
    virtual ModelParameter* countersinkAngle_raw() const = 0;
    virtual bool isDefaultDirection_raw() const = 0;
    virtual bool isDefaultDirection_raw(bool value) = 0;
    virtual bool setToSimple_raw() = 0;
    virtual bool setToCounterbore_raw(core::ValueInput* counterboreDiameter, core::ValueInput* counterboreDepth) = 0;
    virtual bool setToCountersink_raw(core::ValueInput* countersinkDiameter, core::ValueInput* countersinkAngle) = 0;
    virtual ExtentDefinition* extentDefinition_raw() const = 0;
    virtual bool setDistanceExtent_raw(core::ValueInput* distance) = 0;
    virtual bool setAllExtent_raw(ExtentDirections direction) = 0;
    virtual bool setOneSideToExtent_raw(core::Base* toEntity, bool matchShape, core::Vector3D* directionHint) = 0;
    virtual BRepFaces* endFaces_raw() const = 0;
    virtual BRepFaces* sideFaces_raw() const = 0;
    virtual bool setPositionByPoint_raw(core::Base* planarEntity, core::Base* point) = 0;
    virtual bool setPositionAtCenter_raw(core::Base* planarEntity, BRepEdge* centerEdge) = 0;
    virtual bool setPositionBySketchPoint_raw(SketchPoint* sketchPoint) = 0;
    virtual bool setPositionBySketchPoints_raw(core::ObjectCollection* sketchPoints) = 0;
    virtual bool setPositionByPlaneAndOffsets_raw(core::Base* planarEntity, core::Point3D* point, BRepEdge* edgeOne, core::ValueInput* offsetOne, BRepEdge* edgeTwo, core::ValueInput* offsetTwo) = 0;
    virtual bool setPositionOnEdge_raw(core::Base* planarEntity, BRepEdge* edge, HoleEdgePositions position) = 0;
    virtual HolePositionDefinition* holePositionDefinition_raw() const = 0;
    virtual HoleFeature* nativeObject_raw() const = 0;
    virtual HoleFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual BRepBody** participantBodies_raw(size_t& return_size) const = 0;
    virtual bool participantBodies_raw(BRepBody** value, size_t value_size) = 0;
    virtual HoleTapTypes holeTapType_raw() const = 0;
    virtual bool setToSimpleHole_raw() = 0;
    virtual bool setToClearanceHole_raw(ClearanceHoleInfo* clearanceHoleInfo) = 0;
    virtual ClearanceHoleInfo* clearanceHoleInfo_raw() const = 0;
    virtual bool setToTappedHole_raw(ThreadInfo* threadInfo) = 0;
    virtual ThreadInfo* tappedHoleInfo_raw() const = 0;
    virtual ThreadFeature* thread_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Point3D> HoleFeature::position() const
{
    core::Ptr<core::Point3D> res = position_raw();
    return res;
}

inline core::Ptr<core::Vector3D> HoleFeature::direction() const
{
    core::Ptr<core::Vector3D> res = direction_raw();
    return res;
}

inline HoleTypes HoleFeature::holeType() const
{
    HoleTypes res = holeType_raw();
    return res;
}

inline core::Ptr<ModelParameter> HoleFeature::holeDiameter() const
{
    core::Ptr<ModelParameter> res = holeDiameter_raw();
    return res;
}

inline core::Ptr<ModelParameter> HoleFeature::tipAngle() const
{
    core::Ptr<ModelParameter> res = tipAngle_raw();
    return res;
}

inline core::Ptr<ModelParameter> HoleFeature::counterboreDiameter() const
{
    core::Ptr<ModelParameter> res = counterboreDiameter_raw();
    return res;
}

inline core::Ptr<ModelParameter> HoleFeature::counterboreDepth() const
{
    core::Ptr<ModelParameter> res = counterboreDepth_raw();
    return res;
}

inline core::Ptr<ModelParameter> HoleFeature::countersinkDiameter() const
{
    core::Ptr<ModelParameter> res = countersinkDiameter_raw();
    return res;
}

inline core::Ptr<ModelParameter> HoleFeature::countersinkAngle() const
{
    core::Ptr<ModelParameter> res = countersinkAngle_raw();
    return res;
}

inline bool HoleFeature::isDefaultDirection() const
{
    bool res = isDefaultDirection_raw();
    return res;
}

inline bool HoleFeature::isDefaultDirection(bool value)
{
    return isDefaultDirection_raw(value);
}

inline bool HoleFeature::setToSimple()
{
    bool res = setToSimple_raw();
    return res;
}

inline bool HoleFeature::setToCounterbore(const core::Ptr<core::ValueInput>& counterboreDiameter, const core::Ptr<core::ValueInput>& counterboreDepth)
{
    bool res = setToCounterbore_raw(counterboreDiameter.get(), counterboreDepth.get());
    return res;
}

inline bool HoleFeature::setToCountersink(const core::Ptr<core::ValueInput>& countersinkDiameter, const core::Ptr<core::ValueInput>& countersinkAngle)
{
    bool res = setToCountersink_raw(countersinkDiameter.get(), countersinkAngle.get());
    return res;
}

inline core::Ptr<ExtentDefinition> HoleFeature::extentDefinition() const
{
    core::Ptr<ExtentDefinition> res = extentDefinition_raw();
    return res;
}

inline bool HoleFeature::setDistanceExtent(const core::Ptr<core::ValueInput>& distance)
{
    bool res = setDistanceExtent_raw(distance.get());
    return res;
}

inline bool HoleFeature::setAllExtent(ExtentDirections direction)
{
    bool res = setAllExtent_raw(direction);
    return res;
}

inline bool HoleFeature::setOneSideToExtent(const core::Ptr<core::Base>& toEntity, bool matchShape, const core::Ptr<core::Vector3D>& directionHint)
{
    bool res = setOneSideToExtent_raw(toEntity.get(), matchShape, directionHint.get());
    return res;
}

inline core::Ptr<BRepFaces> HoleFeature::endFaces() const
{
    core::Ptr<BRepFaces> res = endFaces_raw();
    return res;
}

inline core::Ptr<BRepFaces> HoleFeature::sideFaces() const
{
    core::Ptr<BRepFaces> res = sideFaces_raw();
    return res;
}

inline bool HoleFeature::setPositionByPoint(const core::Ptr<core::Base>& planarEntity, const core::Ptr<core::Base>& point)
{
    bool res = setPositionByPoint_raw(planarEntity.get(), point.get());
    return res;
}

inline bool HoleFeature::setPositionAtCenter(const core::Ptr<core::Base>& planarEntity, const core::Ptr<BRepEdge>& centerEdge)
{
    bool res = setPositionAtCenter_raw(planarEntity.get(), centerEdge.get());
    return res;
}

inline bool HoleFeature::setPositionBySketchPoint(const core::Ptr<SketchPoint>& sketchPoint)
{
    bool res = setPositionBySketchPoint_raw(sketchPoint.get());
    return res;
}

inline bool HoleFeature::setPositionBySketchPoints(const core::Ptr<core::ObjectCollection>& sketchPoints)
{
    bool res = setPositionBySketchPoints_raw(sketchPoints.get());
    return res;
}

inline bool HoleFeature::setPositionByPlaneAndOffsets(const core::Ptr<core::Base>& planarEntity, const core::Ptr<core::Point3D>& point, const core::Ptr<BRepEdge>& edgeOne, const core::Ptr<core::ValueInput>& offsetOne, const core::Ptr<BRepEdge>& edgeTwo, const core::Ptr<core::ValueInput>& offsetTwo)
{
    bool res = setPositionByPlaneAndOffsets_raw(planarEntity.get(), point.get(), edgeOne.get(), offsetOne.get(), edgeTwo.get(), offsetTwo.get());
    return res;
}

inline bool HoleFeature::setPositionOnEdge(const core::Ptr<core::Base>& planarEntity, const core::Ptr<BRepEdge>& edge, HoleEdgePositions position)
{
    bool res = setPositionOnEdge_raw(planarEntity.get(), edge.get(), position);
    return res;
}

inline core::Ptr<HolePositionDefinition> HoleFeature::holePositionDefinition() const
{
    core::Ptr<HolePositionDefinition> res = holePositionDefinition_raw();
    return res;
}

inline core::Ptr<HoleFeature> HoleFeature::nativeObject() const
{
    core::Ptr<HoleFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<HoleFeature> HoleFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<HoleFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline std::vector<core::Ptr<BRepBody>> HoleFeature::participantBodies() const
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

inline bool HoleFeature::participantBodies(const std::vector<core::Ptr<BRepBody>>& value)
{
    BRepBody** value_ = new BRepBody*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = participantBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline HoleTapTypes HoleFeature::holeTapType() const
{
    HoleTapTypes res = holeTapType_raw();
    return res;
}

inline bool HoleFeature::setToSimpleHole()
{
    bool res = setToSimpleHole_raw();
    return res;
}

inline bool HoleFeature::setToClearanceHole(const core::Ptr<ClearanceHoleInfo>& clearanceHoleInfo)
{
    bool res = setToClearanceHole_raw(clearanceHoleInfo.get());
    return res;
}

inline core::Ptr<ClearanceHoleInfo> HoleFeature::clearanceHoleInfo() const
{
    core::Ptr<ClearanceHoleInfo> res = clearanceHoleInfo_raw();
    return res;
}

inline bool HoleFeature::setToTappedHole(const core::Ptr<ThreadInfo>& threadInfo)
{
    bool res = setToTappedHole_raw(threadInfo.get());
    return res;
}

inline core::Ptr<ThreadInfo> HoleFeature::tappedHoleInfo() const
{
    core::Ptr<ThreadInfo> res = tappedHoleInfo_raw();
    return res;
}

inline core::Ptr<ThreadFeature> HoleFeature::thread() const
{
    core::Ptr<ThreadFeature> res = thread_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_HOLEFEATURE_API