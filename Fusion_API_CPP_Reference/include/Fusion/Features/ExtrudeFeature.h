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
#include "Feature.h"
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_EXTRUDEFEATURE_CPP__
# define ADSK_FUSION_EXTRUDEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_EXTRUDEFEATURE_API
# endif
#else
# define ADSK_FUSION_EXTRUDEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class BRepBody;
    class BRepFaces;
    class ExtentDefinition;
    class ModelParameter;
    class Occurrence;
    class SymmetricExtentDefinition;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing extrude feature in a design.
class ExtrudeFeature : public Feature {
public:

    /// Gets and sets the profiles or planar faces used to define the shape of the extrude.
    /// This property can return or be set with a single Profile, a single planar face, or
    /// an ObjectCollection consisting of multiple profiles and planar faces. When an
    /// ObjectCollection is used all of the profiles and faces must be co-planar.
    /// 
    /// When setting this property of a surface (non-solid) extrusion, you can use the
    /// createOpenProfile and createBRepEdgeProfile methods of the Component object to create
    /// an open profile.
    /// 
    /// This property returns null in the case where the feature is non-parametric.
    core::Ptr<core::Base> profile() const;
    bool profile(const core::Ptr<core::Base>& value);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the parameter controlling the taper angle of the extrusion. To
    /// edit the taper angle use properties on the parameter to edit its value.
    /// This property returns nothing in the case where the feature is non-parametric.
    core::Ptr<ModelParameter> taperAngle() const;

    /// Gets and sets the type of operation performed by the extrusion.
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Gets the ExtentDefinition object that defines the extent of the extrude. Modifying the
    /// properties of the returned extent definition object will cause the extrude to recompute.
    /// Various types of objects can be returned depending on the type of extent currently defined for
    /// the extrusion. This property returns nothing in the case where the feature is non-parametric.
    core::Ptr<ExtentDefinition> extentDefinition() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Sets the extrusion extents option to 'Distance'.
    /// isSymmetric : Set to 'true' for an extrusion symmetrical about the profile plane
    /// distance : ValueInput object that defines the extrude distance.
    /// If the isSymmetric argument is 'false', a positive or negative distance can be used to control the direction.
    /// Returns true if successful
    bool setDistanceExtent(bool isSymmetric, const core::Ptr<core::ValueInput>& distance);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Sets the extrusion extents option to 'Two Side'.
    /// This method will fail in the case of a non-parametric extrusion.
    /// distanceOne : ValueInput object that defines the extrude distance for the first side.
    /// distanceTwo : ValueInput object that defines the extrude distance for the second side.
    /// Returns true if successful
    bool setTwoSidesDistanceExtent(const core::Ptr<core::ValueInput>& distanceOne, const core::Ptr<core::ValueInput>& distanceTwo);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Sets the extrusion extents option to 'All' (i.e. the extrusion is through-all, in both directions.)
    /// This method will fail in the case of a non-parametric extrusion.
    /// direction : The direction can be either positive, negative, or symmetric.
    /// Returns true if successful
    bool setAllExtent(ExtentDirections direction);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Sets the extrusion Direction option to 'One Side' and the Extents option to 'To' (a specified face)
    /// toEntity : The entity that defines the "to" extent. The valid types of entities can vary depending on
    /// the type of feature this is being used with. For an extrude it can be a BRepBody, BRepFace,
    /// BRepVertex, ConstructionPlane, or ConstructionPoint.
    /// matchShape : If the matchShape argument is 'true', the toEntity is extended to fully intersect the extrusion.
    /// directionHint : Specifies the direction of the extrusion. This is only used in the case where there are two possible solutions and the extrusion can
    /// hit the toEntity in either direction. An example is if the profile of the extrusion is within a hole.
    /// The extrusion will intersect the cylinder of the hole in either direction.
    /// 
    /// Typically there is only a single solution and the direction is determined automatically.
    /// Returns true if successful.
    bool setOneSideToExtent(const core::Ptr<core::Base>& toEntity, bool matchShape, const core::Ptr<core::Vector3D>& directionHint = NULL);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Set the extrusion Direction option to 'Two Side'
    /// This method will fail in the case of a non-parametric extrusion.
    /// toEntityOne : The first entity that defines the "to" extent. The valid types of entities can vary depending on
    /// the type of feature this is being used with. For an extrude it can be a BRepBody, BRepFace,
    /// BRepVertex, ConstructionPlane, or ConstructionPoint.
    /// toEntityTwo : The second entity that defines the "to" extent. The valid types of entities can vary depending on
    /// the type of feature this is being used with. For an extrude it can be a BRepBody, BRepFace,
    /// BRepVertex, ConstructionPlane, or ConstructionPoint.
    /// matchShape : If the matchShape argument is 'true', the toEntity is extended to fully intersect the extrusion.
    /// Returns true if successful.
    bool setTwoSidesToExtent(const core::Ptr<core::Base>& toEntityOne, const core::Ptr<core::Base>& toEntityTwo, bool matchShape);

    /// Property that returns the set of faces that cap the end of the extrusion and are coincident
    /// with the sketch plane. In the case of a symmetric extrusion, these faces are the ones on the
    /// positive normal side of the sketch plane. In the case where there are no start faces,
    /// this property will return null.
    core::Ptr<BRepFaces> startFaces() const;

    /// Property that returns the set of faces that cap the end of the extrusion, opposite the
    /// start faces. In the case where there are no end faces, this property will return null.
    core::Ptr<BRepFaces> endFaces() const;

    /// Property that returns all of the side faces (i.e. those running perpendicular to the extrude direction)
    /// of the feature.
    core::Ptr<BRepFaces> sideFaces() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<ExtrudeFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<ExtrudeFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Indicates if this feature was initially created as a solid or a surface.
    bool isSolid() const;

    /// Gets and sets the extent used to define the start of the extrusion. You can set this property
    /// with either a ProfilePlaneStartDefinition, OffsetStartDefinition or a
    /// EntityStartDefinition object. You can get any of those objects by using the static create method on the class.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<ExtentDefinition> startExtent() const;
    bool startExtent(const core::Ptr<ExtentDefinition>& value);

    /// Redefines the extrusion to go in one direction from the profile. The extent of the extrusion is
    /// defined by the extent argument.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// extent : An ExtentDefinition object that defines how the extent of the extrusion is defined. This can be
    /// a specified distance (DistanceExtentDefinition), to an entity (ToEntityExtent), or through-all (AllExtentDefinition).
    /// These objects can be obtained by using the static create method on the appropriate class.
    /// direction : Specifies the direction of the extrusion. PositiveExtentDirection and NegativeExtentDirection
    /// are valid values. PositiveExtentDirection is in the same direction as the normal of the profile's
    /// parent sketch plane.
    /// taperAngle : Optional argument that specifies the taper angle. If omitted a taper angle of 0 is used.
    /// Returns true is setting the input to a one sided extent was successful.
    bool setOneSideExtent(const core::Ptr<ExtentDefinition>& extent, ExtentDirections direction, const core::Ptr<core::ValueInput>& taperAngle = NULL);

    /// Redefines the extrusion to go in both directions from the profile. The extent is defined independently
    /// for each direction using the input arguments.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// sideOneExtent : An ExtentDefinition object that defines how the extent of the extrusion towards side one is defined. This can be
    /// a specified distance (DistanceExtentDefinition), to an entity (ToEntityExtent), or through-all (AllExtentDefinition).
    /// These objects can be obtained by using the static create method on the appropriate class.
    /// sideTwoExtent : An ExtentDefinition object that defines how the extent of the extrusion towards side two is defined. This can be
    /// a specified distance (DistanceExtentDefinition), to an entity (ToEntityExtent), or through-all (AllExtentDefinition).
    /// These objects can be obtained by using the static create method on the appropriate class.
    /// sideOneTaperAngle : Optional argument that specifies the taper angle for side one. If omitted a taper angle of 0 is used.
    /// sideTwoTaperAngle : Optional argument that specifies the taper angle for side two. If omitted a taper angle of 0 is used.
    /// Returns true, if the call was successful.
    bool setTwoSidesExtent(const core::Ptr<ExtentDefinition>& sideOneExtent, const core::Ptr<ExtentDefinition>& sideTwoExtent, const core::Ptr<core::ValueInput>& sideOneTaperAngle = NULL, const core::Ptr<core::ValueInput>& sideTwoTaperAngle = NULL);

    /// Redefines the extrusion to go symmetrically in both directions from the profile.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// distance : The distance of the extrusions. This is either the full length of half of the length of the final extrusion
    /// depending on the value of the isFullLength property.
    /// isFullLength : Defines if the value defines the full length of the extrusion or half of the length. A value of true indicates
    /// it defines the full length.
    /// taperAngle : Optional argument that specifies the taper angle. The same taper angle is used for both sides for a symmetric
    /// extrusion. If omitted a taper angle of 0 is used.
    /// Returns true, if the call was successful.
    bool setSymmetricExtent(const core::Ptr<core::ValueInput>& distance, bool isFullLength, const core::Ptr<core::ValueInput>& taperAngle = NULL);

    /// Gets and sets the extent used for a single sided extrude or side one of a two-sided extrusion. Valid
    /// inputs are DistanceExtentDefinition, ToEntityExtentDefinition, and ThroughAllExtentDefinition object,
    /// which can be created statically using the create method on the classes.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<ExtentDefinition> extentOne() const;
    bool extentOne(const core::Ptr<ExtentDefinition>& value);

    /// Gets and sets the extent used for side two of the extrusion. If the extrude is a single sided extrude this
    /// property will return null and will fail if set. The hasTwoExtents property can be used to determine if
    /// there are two sides or not. When setting this property, valid inputs are DistanceExtentDefinition,
    /// ToEntityExtentDefinition, and ThroughAllExtentDefinition object, which can be created
    /// statically using the create method on the classes.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<ExtentDefinition> extentTwo() const;
    bool extentTwo(const core::Ptr<ExtentDefinition>& value);

    /// Gets the parameter controlling the taper angle for a single sided extrusion or side one of a two-sided
    /// extrusion. To edit the angle, use properties on the parameter to change the value of the parameter.
    core::Ptr<ModelParameter> taperAngleOne() const;

    /// Gets the parameter controlling the taper angle for side two of a two-sided extrusion. if the extrusion is
    /// single-sided, this property will return null. The hasTwoExtents property can be used to determine if there
    /// are two sides or not. To edit the angle, use properties on the parameter to change the value of the parameter.
    core::Ptr<ModelParameter> taperAngleTwo() const;

    /// Property that indicates if the extrusion is a single or two-sided extrusion. If false, the extentTwo
    /// and taperAngleTwo properties should not be used.
    bool hasTwoExtents() const;

    /// Gets and sets the list of bodies that will participate in the feature when the operation is a cut or intersection.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    std::vector<core::Ptr<BRepBody>> participantBodies() const;
    bool participantBodies(const std::vector<core::Ptr<BRepBody>>& value);

    /// Returns a value indicating how the extent is defined for this extrude.
    FeatureExtentTypes extentType() const;

    /// If the current extent of the feature is defined as a symmetric extent, this property
    /// returns the SymmericExtentDefinition object that provides access to the information
    /// defining the symmetric extent. If the current extent is not symmetric, this property
    /// returns null. You can determine the type of extent by using the extentType property.
    /// 
    /// To change the extent of a feature to symmetric extent you can use the setSymmetricExtent
    /// method.
    core::Ptr<SymmetricExtentDefinition> symmetricExtent() const;

    /// Sets or returns whether the extrude is a thin extrude.
    /// Setting it as false will make it a regular extrude.
    bool isThinExtrude() const;
    bool isThinExtrude(bool value);

    /// Changes the extrude feature to be a thin extrude. This is only valid if the isThinExtrude property
    /// is False. If the extrusion is already a thin extrude, you can use the properties on the ExtrudeFeature
    /// to modify the thin extrude specific values.
    /// thinExtrudeWallLocationOne : Specifies the position of the thin wall extrude with respect to the profile being extruded. This defines
    /// the direction for a single sided thin extrude or side one of a two-sided extrusion.
    /// thinExtrudeWallThicknessOne : A ValueInput object that defines the thickness for a single sided thin extrude or side one of a two-sided
    /// extrusion .
    /// thinExtrudeWallLocationTwo : Optional argument that specifies the position of side two of a two-sided extrusion. This argument is ignored
    /// for a single sided thin extrude.
    /// thinExtrudeWallThicknessTwo : Optional argument that is a ValueInput object that defines the thickness for side two of a
    /// two-sided extrusion. This argument is ignored for a single sided thin extrude.
    /// Returns true if successful.
    bool setThinExtrude(ThinExtrudeWallLocation thinExtrudeWallLocationOne, const core::Ptr<core::ValueInput>& thinExtrudeWallThicknessOne, ThinExtrudeWallLocation thinExtrudeWallLocationTwo = adsk::fusion::Side1, const core::Ptr<core::ValueInput>& thinExtrudeWallThicknessTwo = NULL);

    /// Gets and sets the wall location for a one sided thin extrude or side one of a two sided thin extrude
    ThinExtrudeWallLocation thinExtrudeWallLocationOne() const;
    bool thinExtrudeWallLocationOne(ThinExtrudeWallLocation value);

    /// Gets and sets the wall location for side two of a two sided thin extrude
    ThinExtrudeWallLocation thinExtrudeWallLocationTwo() const;
    bool thinExtrudeWallLocationTwo(ThinExtrudeWallLocation value);

    /// Gets and sets the wall thickness for a one sided thin extrude or side one of a two sided thin extrude
    core::Ptr<ModelParameter> thinExtrudeWallThicknessOne() const;

    /// Gets and sets the wall thickness for side two of a two sided thin extrude
    core::Ptr<ModelParameter> thinExtrudeWallThicknessTwo() const;

    ADSK_FUSION_EXTRUDEFEATURE_API static const char* classType();
    ADSK_FUSION_EXTRUDEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_EXTRUDEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_EXTRUDEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* profile_raw() const = 0;
    virtual bool profile_raw(core::Base* value) = 0;
    virtual ModelParameter* taperAngle_raw() const = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual ExtentDefinition* extentDefinition_raw() const = 0;
    virtual bool setDistanceExtent_raw(bool isSymmetric, core::ValueInput* distance) = 0;
    virtual bool setTwoSidesDistanceExtent_raw(core::ValueInput* distanceOne, core::ValueInput* distanceTwo) = 0;
    virtual bool setAllExtent_raw(ExtentDirections direction) = 0;
    virtual bool setOneSideToExtent_raw(core::Base* toEntity, bool matchShape, core::Vector3D* directionHint) = 0;
    virtual bool setTwoSidesToExtent_raw(core::Base* toEntityOne, core::Base* toEntityTwo, bool matchShape) = 0;
    virtual BRepFaces* startFaces_raw() const = 0;
    virtual BRepFaces* endFaces_raw() const = 0;
    virtual BRepFaces* sideFaces_raw() const = 0;
    virtual ExtrudeFeature* nativeObject_raw() const = 0;
    virtual ExtrudeFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual bool isSolid_raw() const = 0;
    virtual ExtentDefinition* startExtent_raw() const = 0;
    virtual bool startExtent_raw(ExtentDefinition* value) = 0;
    virtual bool setOneSideExtent_raw(ExtentDefinition* extent, ExtentDirections direction, core::ValueInput* taperAngle) = 0;
    virtual bool setTwoSidesExtent_raw(ExtentDefinition* sideOneExtent, ExtentDefinition* sideTwoExtent, core::ValueInput* sideOneTaperAngle, core::ValueInput* sideTwoTaperAngle) = 0;
    virtual bool setSymmetricExtent_raw(core::ValueInput* distance, bool isFullLength, core::ValueInput* taperAngle) = 0;
    virtual ExtentDefinition* extentOne_raw() const = 0;
    virtual bool extentOne_raw(ExtentDefinition* value) = 0;
    virtual ExtentDefinition* extentTwo_raw() const = 0;
    virtual bool extentTwo_raw(ExtentDefinition* value) = 0;
    virtual ModelParameter* taperAngleOne_raw() const = 0;
    virtual ModelParameter* taperAngleTwo_raw() const = 0;
    virtual bool hasTwoExtents_raw() const = 0;
    virtual BRepBody** participantBodies_raw(size_t& return_size) const = 0;
    virtual bool participantBodies_raw(BRepBody** value, size_t value_size) = 0;
    virtual FeatureExtentTypes extentType_raw() const = 0;
    virtual SymmetricExtentDefinition* symmetricExtent_raw() const = 0;
    virtual bool isThinExtrude_raw() const = 0;
    virtual bool isThinExtrude_raw(bool value) = 0;
    virtual bool setThinExtrude_raw(ThinExtrudeWallLocation thinExtrudeWallLocationOne, core::ValueInput* thinExtrudeWallThicknessOne, ThinExtrudeWallLocation thinExtrudeWallLocationTwo, core::ValueInput* thinExtrudeWallThicknessTwo) = 0;
    virtual ThinExtrudeWallLocation thinExtrudeWallLocationOne_raw() const = 0;
    virtual bool thinExtrudeWallLocationOne_raw(ThinExtrudeWallLocation value) = 0;
    virtual ThinExtrudeWallLocation thinExtrudeWallLocationTwo_raw() const = 0;
    virtual bool thinExtrudeWallLocationTwo_raw(ThinExtrudeWallLocation value) = 0;
    virtual ModelParameter* thinExtrudeWallThicknessOne_raw() const = 0;
    virtual ModelParameter* thinExtrudeWallThicknessTwo_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ExtrudeFeature::profile() const
{
    core::Ptr<core::Base> res = profile_raw();
    return res;
}

inline bool ExtrudeFeature::profile(const core::Ptr<core::Base>& value)
{
    return profile_raw(value.get());
}

inline core::Ptr<ModelParameter> ExtrudeFeature::taperAngle() const
{
    core::Ptr<ModelParameter> res = taperAngle_raw();
    return res;
}

inline FeatureOperations ExtrudeFeature::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool ExtrudeFeature::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline core::Ptr<ExtentDefinition> ExtrudeFeature::extentDefinition() const
{
    core::Ptr<ExtentDefinition> res = extentDefinition_raw();
    return res;
}

inline bool ExtrudeFeature::setDistanceExtent(bool isSymmetric, const core::Ptr<core::ValueInput>& distance)
{
    bool res = setDistanceExtent_raw(isSymmetric, distance.get());
    return res;
}

inline bool ExtrudeFeature::setTwoSidesDistanceExtent(const core::Ptr<core::ValueInput>& distanceOne, const core::Ptr<core::ValueInput>& distanceTwo)
{
    bool res = setTwoSidesDistanceExtent_raw(distanceOne.get(), distanceTwo.get());
    return res;
}

inline bool ExtrudeFeature::setAllExtent(ExtentDirections direction)
{
    bool res = setAllExtent_raw(direction);
    return res;
}

inline bool ExtrudeFeature::setOneSideToExtent(const core::Ptr<core::Base>& toEntity, bool matchShape, const core::Ptr<core::Vector3D>& directionHint)
{
    bool res = setOneSideToExtent_raw(toEntity.get(), matchShape, directionHint.get());
    return res;
}

inline bool ExtrudeFeature::setTwoSidesToExtent(const core::Ptr<core::Base>& toEntityOne, const core::Ptr<core::Base>& toEntityTwo, bool matchShape)
{
    bool res = setTwoSidesToExtent_raw(toEntityOne.get(), toEntityTwo.get(), matchShape);
    return res;
}

inline core::Ptr<BRepFaces> ExtrudeFeature::startFaces() const
{
    core::Ptr<BRepFaces> res = startFaces_raw();
    return res;
}

inline core::Ptr<BRepFaces> ExtrudeFeature::endFaces() const
{
    core::Ptr<BRepFaces> res = endFaces_raw();
    return res;
}

inline core::Ptr<BRepFaces> ExtrudeFeature::sideFaces() const
{
    core::Ptr<BRepFaces> res = sideFaces_raw();
    return res;
}

inline core::Ptr<ExtrudeFeature> ExtrudeFeature::nativeObject() const
{
    core::Ptr<ExtrudeFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<ExtrudeFeature> ExtrudeFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<ExtrudeFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline bool ExtrudeFeature::isSolid() const
{
    bool res = isSolid_raw();
    return res;
}

inline core::Ptr<ExtentDefinition> ExtrudeFeature::startExtent() const
{
    core::Ptr<ExtentDefinition> res = startExtent_raw();
    return res;
}

inline bool ExtrudeFeature::startExtent(const core::Ptr<ExtentDefinition>& value)
{
    return startExtent_raw(value.get());
}

inline bool ExtrudeFeature::setOneSideExtent(const core::Ptr<ExtentDefinition>& extent, ExtentDirections direction, const core::Ptr<core::ValueInput>& taperAngle)
{
    bool res = setOneSideExtent_raw(extent.get(), direction, taperAngle.get());
    return res;
}

inline bool ExtrudeFeature::setTwoSidesExtent(const core::Ptr<ExtentDefinition>& sideOneExtent, const core::Ptr<ExtentDefinition>& sideTwoExtent, const core::Ptr<core::ValueInput>& sideOneTaperAngle, const core::Ptr<core::ValueInput>& sideTwoTaperAngle)
{
    bool res = setTwoSidesExtent_raw(sideOneExtent.get(), sideTwoExtent.get(), sideOneTaperAngle.get(), sideTwoTaperAngle.get());
    return res;
}

inline bool ExtrudeFeature::setSymmetricExtent(const core::Ptr<core::ValueInput>& distance, bool isFullLength, const core::Ptr<core::ValueInput>& taperAngle)
{
    bool res = setSymmetricExtent_raw(distance.get(), isFullLength, taperAngle.get());
    return res;
}

inline core::Ptr<ExtentDefinition> ExtrudeFeature::extentOne() const
{
    core::Ptr<ExtentDefinition> res = extentOne_raw();
    return res;
}

inline bool ExtrudeFeature::extentOne(const core::Ptr<ExtentDefinition>& value)
{
    return extentOne_raw(value.get());
}

inline core::Ptr<ExtentDefinition> ExtrudeFeature::extentTwo() const
{
    core::Ptr<ExtentDefinition> res = extentTwo_raw();
    return res;
}

inline bool ExtrudeFeature::extentTwo(const core::Ptr<ExtentDefinition>& value)
{
    return extentTwo_raw(value.get());
}

inline core::Ptr<ModelParameter> ExtrudeFeature::taperAngleOne() const
{
    core::Ptr<ModelParameter> res = taperAngleOne_raw();
    return res;
}

inline core::Ptr<ModelParameter> ExtrudeFeature::taperAngleTwo() const
{
    core::Ptr<ModelParameter> res = taperAngleTwo_raw();
    return res;
}

inline bool ExtrudeFeature::hasTwoExtents() const
{
    bool res = hasTwoExtents_raw();
    return res;
}

inline std::vector<core::Ptr<BRepBody>> ExtrudeFeature::participantBodies() const
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

inline bool ExtrudeFeature::participantBodies(const std::vector<core::Ptr<BRepBody>>& value)
{
    BRepBody** value_ = new BRepBody*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = participantBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline FeatureExtentTypes ExtrudeFeature::extentType() const
{
    FeatureExtentTypes res = extentType_raw();
    return res;
}

inline core::Ptr<SymmetricExtentDefinition> ExtrudeFeature::symmetricExtent() const
{
    core::Ptr<SymmetricExtentDefinition> res = symmetricExtent_raw();
    return res;
}

inline bool ExtrudeFeature::isThinExtrude() const
{
    bool res = isThinExtrude_raw();
    return res;
}

inline bool ExtrudeFeature::isThinExtrude(bool value)
{
    return isThinExtrude_raw(value);
}

inline bool ExtrudeFeature::setThinExtrude(ThinExtrudeWallLocation thinExtrudeWallLocationOne, const core::Ptr<core::ValueInput>& thinExtrudeWallThicknessOne, ThinExtrudeWallLocation thinExtrudeWallLocationTwo, const core::Ptr<core::ValueInput>& thinExtrudeWallThicknessTwo)
{
    bool res = setThinExtrude_raw(thinExtrudeWallLocationOne, thinExtrudeWallThicknessOne.get(), thinExtrudeWallLocationTwo, thinExtrudeWallThicknessTwo.get());
    return res;
}

inline ThinExtrudeWallLocation ExtrudeFeature::thinExtrudeWallLocationOne() const
{
    ThinExtrudeWallLocation res = thinExtrudeWallLocationOne_raw();
    return res;
}

inline bool ExtrudeFeature::thinExtrudeWallLocationOne(ThinExtrudeWallLocation value)
{
    return thinExtrudeWallLocationOne_raw(value);
}

inline ThinExtrudeWallLocation ExtrudeFeature::thinExtrudeWallLocationTwo() const
{
    ThinExtrudeWallLocation res = thinExtrudeWallLocationTwo_raw();
    return res;
}

inline bool ExtrudeFeature::thinExtrudeWallLocationTwo(ThinExtrudeWallLocation value)
{
    return thinExtrudeWallLocationTwo_raw(value);
}

inline core::Ptr<ModelParameter> ExtrudeFeature::thinExtrudeWallThicknessOne() const
{
    core::Ptr<ModelParameter> res = thinExtrudeWallThicknessOne_raw();
    return res;
}

inline core::Ptr<ModelParameter> ExtrudeFeature::thinExtrudeWallThicknessTwo() const
{
    core::Ptr<ModelParameter> res = thinExtrudeWallThicknessTwo_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_EXTRUDEFEATURE_API