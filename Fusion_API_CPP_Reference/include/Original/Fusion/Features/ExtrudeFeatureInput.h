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
# ifdef __COMPILING_ADSK_FUSION_EXTRUDEFEATUREINPUT_CPP__
# define ADSK_FUSION_EXTRUDEFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_EXTRUDEFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_EXTRUDEFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepBody;
    class ExtentDefinition;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of an extrude
/// feature. This class also provides properties for setting/getting the Profile and Operation
/// of the extrude. The Profile and Operation are defined when the ExtrudeFeatures.createInput
/// method is called so they do not exist as properties on this class.
class ExtrudeFeatureInput : public core::Base {
public:

    /// Gets and sets the profiles or planar faces used to define the shape of the extrude.
    /// This property can return or be set with a single profile, a single planar face, or
    /// an ObjectCollection consisting of multiple profiles and planar faces. When an
    /// ObjectCollection is used all of the profiles and faces must be co-planar.
    /// 
    /// To create a surface (non-solid) extrusion, you can use the createOpenProfile and createBRepEdgeProfile
    /// methods of the Component object to create an open profile. The isSolid property of the
    /// ExtrudeFeatureInput property must also be False.
    core::Ptr<core::Base> profile() const;
    bool profile(const core::Ptr<core::Base>& value);

    /// Gets and sets the type of operation performed by the extrusion.
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the taper angle of the extrusion. This is used to define the
    /// taper angle for a single sided and symmetric and defines the angle for side one
    /// of a two sided extrusion. This property is initialized with a taper angle of zero.
    /// A negative angle will taper the extrusion inward while a positive value will taper
    /// the extrusion outward. This property is valid for both parametric and non-parametric extrusions.
    core::Ptr<core::ValueInput> taperAngle() const;
    bool taperAngle(const core::Ptr<core::ValueInput>& value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Sets the extrusion extents option to 'Distance'.
    /// isSymmetric : Set to 'true' for an extrusion symmetrical about the profile plane
    /// distance : ValueInput object that defines the extrude distance.
    /// If the isSymmetric argument is 'false', a positive or negative distance can be used to control the direction.
    /// Returns true if successful
    bool setDistanceExtent(bool isSymmetric, const core::Ptr<core::ValueInput>& distance);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Sets the extrusion extents option to 'Two Side'.
    /// This method will fail in the case of a non-parametric extrusion.
    /// distanceOne : ValueInput object that defines the extrude distance for the first side.
    /// distanceTwo : ValueInput object that defines the extrude distance for the second side.
    /// Returns true if successful
    bool setTwoSidesDistanceExtent(const core::Ptr<core::ValueInput>& distanceOne, const core::Ptr<core::ValueInput>& distanceTwo);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Sets the extrusion extents option to 'All' (i.e. the extrusion is through-all, in both directions.)
    /// This method will fail in the case of a non-parametric extrusion.
    /// direction : The direction can be either positive, negative, or symmetric.
    /// Returns true if successful
    bool setAllExtent(ExtentDirections direction);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
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
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Set the extrusion Direction option to 'Two Side'. This method will fail in the case of a non-parametric extrusion.
    /// toEntityOne : The first entity that defines the "to" extent. The valid types of entities can vary depending on
    /// the type of feature this is being used with. For an extrude it can be a BRepBody, BRepFace,
    /// BRepVertex, ConstructionPlane, or ConstructionPoint.
    /// toEntityTwo : The second entity that defines the "to" extent. The valid types of entities can vary depending on
    /// the type of feature this is being used with. For an extrude it can be a BRepBody, BRepFace,
    /// BRepVertex, ConstructionPlane, or ConstructionPoint.
    /// matchShape : If the matchShape argument is 'true', the toEntity is extended to fully intersect the extrusion.
    /// Returns true if successful.
    bool setTwoSidesToExtent(const core::Ptr<core::Base>& toEntityOne, const core::Ptr<core::Base>& toEntityTwo, bool matchShape);

    /// In order for geometry to be transformed correctly, an Occurrence for creation needs to be
    /// specified when the Extrusion is created based on geometry (e.g. a profile and/or face(s))
    /// in another component AND (the Extrusion) is not in the root component.
    /// The CreationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    /// Specifies if the extrusion should be created as a solid or surface. If
    /// it's a surface then there aren't any end caps and it's open. When an ExtrudeFeature
    /// input is created, this is initialized to true so a solid will be created if it's not changed.
    bool isSolid() const;
    bool isSolid(bool value);

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

    /// Gets and sets the extent used to define the start of the extrusion. When a new ExtrudeFeatureInput
    /// object is created the start extent is initialized to be the profile plane but you can change it
    /// to a profile plane with offset or from an object by setting this property with either a
    /// OffsetStartDefinition or an EntityStartDefinition object. You can get either one
    /// of those objects by using the static create method on the class.
    core::Ptr<ExtentDefinition> startExtent() const;
    bool startExtent(const core::Ptr<ExtentDefinition>& value);

    /// Defines the extrusion to go in one direction from the profile. The extent of the extrusion is
    /// defined by the extent argument.
    /// extent : An ExtentDefinition object that defines how the extent of the extrusion is defined. This can be
    /// a specified distance (DistanceExtentDefinition), to an entity (ToEntityExtent), or through-all (AllExtentDefinition).
    /// These objects can be obtained by using the static create method on the appropriate class.
    /// direction : Specifies the direction of the extrusion. PositiveExtentDirection and NegativeExtentDirection
    /// are valid values. PositiveExtentDirection is in the same direction as the normal of the profile's
    /// parent sketch plane.
    /// taperAngle : Optional argument that specifies the taper angle. If omitted a taper angle of 0 is used.
    /// Returns true is setting the input to a one sided extent was successful.
    bool setOneSideExtent(const core::Ptr<ExtentDefinition>& extent, ExtentDirections direction, const core::Ptr<core::ValueInput>& taperAngle = NULL);

    /// Defines the extrusion to go in both directions from the profile. The extent is defined independently
    /// for each direction using the input arguments.
    /// sideOneExtent : An ExtentDefinition object that defines how the extent of the extrusion towards side one is defined. This can be
    /// a specified distance (DistanceExtentDefinition), to an entity (ToEntityExtent), or through-all (AllExtentDefinition).
    /// These objects can be obtained by using the static create method on the appropriate class.
    /// sideTwoExtent : An ExtentDefinition object that defines how the extent of the extrusion towards side two is defined. This can be
    /// a specified distance (DistanceExtentDefinition), to an entity (ToEntityExtent), or through-all (AllExtentDefinition).
    /// These objects can be obtained by using the static create method on the appropriate class.
    /// sideOneTaperAngle : Optional argument that specifies the taper angle for side one. If omitted a taper angle of 0 is used.
    /// sideTwoTaperAngle : Optional argument that specifies the taper angle for side two. If omitted a taper angle of 0 is used.
    /// Returns true is setting the extent was successful.
    bool setTwoSidesExtent(const core::Ptr<ExtentDefinition>& sideOneExtent, const core::Ptr<ExtentDefinition>& sideTwoExtent, const core::Ptr<core::ValueInput>& sideOneTaperAngle = NULL, const core::Ptr<core::ValueInput>& sideTwoTaperAngle = NULL);

    /// Defines the extrusion to go symmetrically in both directions from the profile.
    /// distance : The distance of the extrusions. This is either the full length of half of the length of the final extrusion
    /// depending on the value of the isFullLength property.
    /// isFullLength : Defines if the value defines the full length of the extrusion or half of the length. A value of true indicates
    /// it defines the full length.
    /// taperAngle : Optional argument that specifies the taper angle. The same taper angle is used for both sides for a symmetric
    /// extrusion. If omitted a taper angle of 0 is used.
    /// Returns true is setting the extent was successful.
    bool setSymmetricExtent(const core::Ptr<core::ValueInput>& distance, bool isFullLength, const core::Ptr<core::ValueInput>& taperAngle = NULL);

    /// Gets the extent assigned for a single sided extrude or side one of a two-sided extrusion. To set the extent, use
    /// one of the set methods on the ExtrudeFeatureInput object.
    core::Ptr<ExtentDefinition> extentOne() const;

    /// Gets the extent assigned for side two of the extrusion. If the extrude is single sided extrude this
    /// property will return null. The hasTwoExtents property can be used to determine if there
    /// are two sides or not. To set the extent, use one of the set methods on the ExtrudeFeatureInput object.
    core::Ptr<ExtentDefinition> extentTwo() const;

    /// Gets the value that will be used as the taper angle for a single sided extrusion or side one of a two-sided
    /// extrusion. To set the taper angle, use one of the set methods on the ExtrudeFeatureInput object.
    core::Ptr<core::ValueInput> taperAngleOne() const;

    /// Gets the value that will be used as the taper angle for side two of a two-sided extrusion. If the extrusion is
    /// single-sided, this property will return null. The hasTwoExtents property can be used to determine if there
    /// are two sides or not. To set the taper angle, use one of the set methods on the ExtrudeFeatureInput object.
    core::Ptr<core::ValueInput> taperAngleTwo() const;

    /// Property that indicates if the extrusion is a single or two-sided extrusion. If false, the extentTwo
    /// and taperAngleTwo properties should not be used.
    bool hasTwoExtents() const;

    /// Gets and sets the list of bodies that will participate in the feature when the operation is a cut or intersection.
    /// 
    /// If this property has not been set, the default behavior is that all bodies that are intersected by the
    /// feature will participate.
    /// 
    /// This property can return null in the case where the feature has not been fully defined so that
    /// possible intersecting bodies can be computed.
    std::vector<core::Ptr<BRepBody>> participantBodies() const;
    bool participantBodies(const std::vector<core::Ptr<BRepBody>>& value);

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
    core::Ptr<core::ValueInput> thinExtrudeWallThicknessOne() const;
    bool thinExtrudeWallThicknessOne(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the wall thickness for side two of a two sided thin extrude
    core::Ptr<core::ValueInput> thinExtrudeWallThicknessTwo() const;
    bool thinExtrudeWallThicknessTwo(const core::Ptr<core::ValueInput>& value);

    ADSK_FUSION_EXTRUDEFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_EXTRUDEFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_EXTRUDEFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_EXTRUDEFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* profile_raw() const = 0;
    virtual bool profile_raw(core::Base* value) = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual core::ValueInput* taperAngle_raw() const = 0;
    virtual bool taperAngle_raw(core::ValueInput* value) = 0;
    virtual bool setDistanceExtent_raw(bool isSymmetric, core::ValueInput* distance) = 0;
    virtual bool setTwoSidesDistanceExtent_raw(core::ValueInput* distanceOne, core::ValueInput* distanceTwo) = 0;
    virtual bool setAllExtent_raw(ExtentDirections direction) = 0;
    virtual bool setOneSideToExtent_raw(core::Base* toEntity, bool matchShape, core::Vector3D* directionHint) = 0;
    virtual bool setTwoSidesToExtent_raw(core::Base* toEntityOne, core::Base* toEntityTwo, bool matchShape) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
    virtual bool isSolid_raw() const = 0;
    virtual bool isSolid_raw(bool value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual ExtentDefinition* startExtent_raw() const = 0;
    virtual bool startExtent_raw(ExtentDefinition* value) = 0;
    virtual bool setOneSideExtent_raw(ExtentDefinition* extent, ExtentDirections direction, core::ValueInput* taperAngle) = 0;
    virtual bool setTwoSidesExtent_raw(ExtentDefinition* sideOneExtent, ExtentDefinition* sideTwoExtent, core::ValueInput* sideOneTaperAngle, core::ValueInput* sideTwoTaperAngle) = 0;
    virtual bool setSymmetricExtent_raw(core::ValueInput* distance, bool isFullLength, core::ValueInput* taperAngle) = 0;
    virtual ExtentDefinition* extentOne_raw() const = 0;
    virtual ExtentDefinition* extentTwo_raw() const = 0;
    virtual core::ValueInput* taperAngleOne_raw() const = 0;
    virtual core::ValueInput* taperAngleTwo_raw() const = 0;
    virtual bool hasTwoExtents_raw() const = 0;
    virtual BRepBody** participantBodies_raw(size_t& return_size) const = 0;
    virtual bool participantBodies_raw(BRepBody** value, size_t value_size) = 0;
    virtual bool isThinExtrude_raw() const = 0;
    virtual bool isThinExtrude_raw(bool value) = 0;
    virtual bool setThinExtrude_raw(ThinExtrudeWallLocation thinExtrudeWallLocationOne, core::ValueInput* thinExtrudeWallThicknessOne, ThinExtrudeWallLocation thinExtrudeWallLocationTwo, core::ValueInput* thinExtrudeWallThicknessTwo) = 0;
    virtual ThinExtrudeWallLocation thinExtrudeWallLocationOne_raw() const = 0;
    virtual bool thinExtrudeWallLocationOne_raw(ThinExtrudeWallLocation value) = 0;
    virtual ThinExtrudeWallLocation thinExtrudeWallLocationTwo_raw() const = 0;
    virtual bool thinExtrudeWallLocationTwo_raw(ThinExtrudeWallLocation value) = 0;
    virtual core::ValueInput* thinExtrudeWallThicknessOne_raw() const = 0;
    virtual bool thinExtrudeWallThicknessOne_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* thinExtrudeWallThicknessTwo_raw() const = 0;
    virtual bool thinExtrudeWallThicknessTwo_raw(core::ValueInput* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ExtrudeFeatureInput::profile() const
{
    core::Ptr<core::Base> res = profile_raw();
    return res;
}

inline bool ExtrudeFeatureInput::profile(const core::Ptr<core::Base>& value)
{
    return profile_raw(value.get());
}

inline FeatureOperations ExtrudeFeatureInput::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool ExtrudeFeatureInput::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline core::Ptr<core::ValueInput> ExtrudeFeatureInput::taperAngle() const
{
    core::Ptr<core::ValueInput> res = taperAngle_raw();
    return res;
}

inline bool ExtrudeFeatureInput::taperAngle(const core::Ptr<core::ValueInput>& value)
{
    return taperAngle_raw(value.get());
}

inline bool ExtrudeFeatureInput::setDistanceExtent(bool isSymmetric, const core::Ptr<core::ValueInput>& distance)
{
    bool res = setDistanceExtent_raw(isSymmetric, distance.get());
    return res;
}

inline bool ExtrudeFeatureInput::setTwoSidesDistanceExtent(const core::Ptr<core::ValueInput>& distanceOne, const core::Ptr<core::ValueInput>& distanceTwo)
{
    bool res = setTwoSidesDistanceExtent_raw(distanceOne.get(), distanceTwo.get());
    return res;
}

inline bool ExtrudeFeatureInput::setAllExtent(ExtentDirections direction)
{
    bool res = setAllExtent_raw(direction);
    return res;
}

inline bool ExtrudeFeatureInput::setOneSideToExtent(const core::Ptr<core::Base>& toEntity, bool matchShape, const core::Ptr<core::Vector3D>& directionHint)
{
    bool res = setOneSideToExtent_raw(toEntity.get(), matchShape, directionHint.get());
    return res;
}

inline bool ExtrudeFeatureInput::setTwoSidesToExtent(const core::Ptr<core::Base>& toEntityOne, const core::Ptr<core::Base>& toEntityTwo, bool matchShape)
{
    bool res = setTwoSidesToExtent_raw(toEntityOne.get(), toEntityTwo.get(), matchShape);
    return res;
}

inline core::Ptr<Occurrence> ExtrudeFeatureInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool ExtrudeFeatureInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}

inline bool ExtrudeFeatureInput::isSolid() const
{
    bool res = isSolid_raw();
    return res;
}

inline bool ExtrudeFeatureInput::isSolid(bool value)
{
    return isSolid_raw(value);
}

inline core::Ptr<BaseFeature> ExtrudeFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool ExtrudeFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline core::Ptr<ExtentDefinition> ExtrudeFeatureInput::startExtent() const
{
    core::Ptr<ExtentDefinition> res = startExtent_raw();
    return res;
}

inline bool ExtrudeFeatureInput::startExtent(const core::Ptr<ExtentDefinition>& value)
{
    return startExtent_raw(value.get());
}

inline bool ExtrudeFeatureInput::setOneSideExtent(const core::Ptr<ExtentDefinition>& extent, ExtentDirections direction, const core::Ptr<core::ValueInput>& taperAngle)
{
    bool res = setOneSideExtent_raw(extent.get(), direction, taperAngle.get());
    return res;
}

inline bool ExtrudeFeatureInput::setTwoSidesExtent(const core::Ptr<ExtentDefinition>& sideOneExtent, const core::Ptr<ExtentDefinition>& sideTwoExtent, const core::Ptr<core::ValueInput>& sideOneTaperAngle, const core::Ptr<core::ValueInput>& sideTwoTaperAngle)
{
    bool res = setTwoSidesExtent_raw(sideOneExtent.get(), sideTwoExtent.get(), sideOneTaperAngle.get(), sideTwoTaperAngle.get());
    return res;
}

inline bool ExtrudeFeatureInput::setSymmetricExtent(const core::Ptr<core::ValueInput>& distance, bool isFullLength, const core::Ptr<core::ValueInput>& taperAngle)
{
    bool res = setSymmetricExtent_raw(distance.get(), isFullLength, taperAngle.get());
    return res;
}

inline core::Ptr<ExtentDefinition> ExtrudeFeatureInput::extentOne() const
{
    core::Ptr<ExtentDefinition> res = extentOne_raw();
    return res;
}

inline core::Ptr<ExtentDefinition> ExtrudeFeatureInput::extentTwo() const
{
    core::Ptr<ExtentDefinition> res = extentTwo_raw();
    return res;
}

inline core::Ptr<core::ValueInput> ExtrudeFeatureInput::taperAngleOne() const
{
    core::Ptr<core::ValueInput> res = taperAngleOne_raw();
    return res;
}

inline core::Ptr<core::ValueInput> ExtrudeFeatureInput::taperAngleTwo() const
{
    core::Ptr<core::ValueInput> res = taperAngleTwo_raw();
    return res;
}

inline bool ExtrudeFeatureInput::hasTwoExtents() const
{
    bool res = hasTwoExtents_raw();
    return res;
}

inline std::vector<core::Ptr<BRepBody>> ExtrudeFeatureInput::participantBodies() const
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

inline bool ExtrudeFeatureInput::participantBodies(const std::vector<core::Ptr<BRepBody>>& value)
{
    BRepBody** value_ = new BRepBody*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = participantBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool ExtrudeFeatureInput::isThinExtrude() const
{
    bool res = isThinExtrude_raw();
    return res;
}

inline bool ExtrudeFeatureInput::isThinExtrude(bool value)
{
    return isThinExtrude_raw(value);
}

inline bool ExtrudeFeatureInput::setThinExtrude(ThinExtrudeWallLocation thinExtrudeWallLocationOne, const core::Ptr<core::ValueInput>& thinExtrudeWallThicknessOne, ThinExtrudeWallLocation thinExtrudeWallLocationTwo, const core::Ptr<core::ValueInput>& thinExtrudeWallThicknessTwo)
{
    bool res = setThinExtrude_raw(thinExtrudeWallLocationOne, thinExtrudeWallThicknessOne.get(), thinExtrudeWallLocationTwo, thinExtrudeWallThicknessTwo.get());
    return res;
}

inline ThinExtrudeWallLocation ExtrudeFeatureInput::thinExtrudeWallLocationOne() const
{
    ThinExtrudeWallLocation res = thinExtrudeWallLocationOne_raw();
    return res;
}

inline bool ExtrudeFeatureInput::thinExtrudeWallLocationOne(ThinExtrudeWallLocation value)
{
    return thinExtrudeWallLocationOne_raw(value);
}

inline ThinExtrudeWallLocation ExtrudeFeatureInput::thinExtrudeWallLocationTwo() const
{
    ThinExtrudeWallLocation res = thinExtrudeWallLocationTwo_raw();
    return res;
}

inline bool ExtrudeFeatureInput::thinExtrudeWallLocationTwo(ThinExtrudeWallLocation value)
{
    return thinExtrudeWallLocationTwo_raw(value);
}

inline core::Ptr<core::ValueInput> ExtrudeFeatureInput::thinExtrudeWallThicknessOne() const
{
    core::Ptr<core::ValueInput> res = thinExtrudeWallThicknessOne_raw();
    return res;
}

inline bool ExtrudeFeatureInput::thinExtrudeWallThicknessOne(const core::Ptr<core::ValueInput>& value)
{
    return thinExtrudeWallThicknessOne_raw(value.get());
}

inline core::Ptr<core::ValueInput> ExtrudeFeatureInput::thinExtrudeWallThicknessTwo() const
{
    core::Ptr<core::ValueInput> res = thinExtrudeWallThicknessTwo_raw();
    return res;
}

inline bool ExtrudeFeatureInput::thinExtrudeWallThicknessTwo(const core::Ptr<core::ValueInput>& value)
{
    return thinExtrudeWallThicknessTwo_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_EXTRUDEFEATUREINPUT_API