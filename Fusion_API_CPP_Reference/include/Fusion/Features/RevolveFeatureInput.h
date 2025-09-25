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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_REVOLVEFEATUREINPUT_CPP__
# define ADSK_FUSION_REVOLVEFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_REVOLVEFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_REVOLVEFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepBody;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a revolve
/// feature.
class RevolveFeatureInput : public core::Base {
public:

    /// Gets and sets the profiles or planar faces used to define the shape of the revolve.
    /// This property can return or be set with a single Profile, a single planar face, or
    /// an ObjectCollection consisting of multiple profiles and planar faces. When an
    /// ObjectCollection is used all of the profiles and faces must be co-planar.
    /// This property returns null in the case where the feature is non-parametric.
    /// 
    /// To create a surface (non-solid) revolution, you can use the createOpenProfile and createBRepEdgeProfile
    /// methods of the Component object to create an open profile. The isSolid property of the
    /// RevolveFeatureInput property must also be False.
    core::Ptr<core::Base> profile() const;
    bool profile(const core::Ptr<core::Base>& value);

    /// Gets and sets the type of operation performed by the revolve.
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// Gets and sets the entity used to define the axis of revolution.
    /// The axis can be a sketch line, construction axis, linear edge or a face that defines an
    /// axis (cylinder, cone, torus, etc.). If it is not in the same plane as the profile, it is
    /// projected onto the profile plane.
    core::Ptr<core::Base> axis() const;
    bool axis(const core::Ptr<core::Base>& value);

    /// Defines the extent of the revolution to be at a specified angle.
    /// An angle and whether the extent is symmetric or only in one direction
    /// is specified. If it's not symmetric a positive or negative angle can be
    /// used to control the direction. If symmetric, the angle is the angle on one
    /// side so the entire angle of the revolution will be twice the specified angle.
    /// Use an angle of 360 deg or 2 pi radians to create a full revolve.
    /// isSymmetric : Set to 'true' for a revolve symmetrical about the profile plane
    /// angle : The ValueInput object that defines the angle of the revolution
    /// Returns true if successful
    bool setAngleExtent(bool isSymmetric, const core::Ptr<core::ValueInput>& angle);

    /// Defines the angle of the revolve to be to applied to both sides of the profile
    /// at the specified angles.
    /// angleOne : The ValueInput object that defines the angle for the first side of the revolution
    /// angleTwo : The ValueInput object that defines the angle for the second side of the revolution
    /// Returns true if successful
    bool setTwoSideAngleExtent(const core::Ptr<core::ValueInput>& angleOne, const core::Ptr<core::ValueInput>& angleTwo);

    /// Defines the extent of the revolve to be from the sketch or profile plane to the
    /// specified "To" face.
    /// toEntity : The entity that defines the "to" extent. The valid types of entities can vary depending on
    /// the type of feature this is being used with. For a revolve it can be a BRepBody, BRepFace,
    /// BRepVertex, ConstructionPlane, or ConstructionPoint.
    /// directionHint : Specifies the direction of the revolve.
    /// Returns true if successful.
    bool setOneSideToExtent(const core::Ptr<core::Base>& toEntity, const core::Ptr<core::Vector3D>& directionHint = NULL);

    /// Defines the extents of the revolve to be from the sketch plane to specified
    /// faces in both directions. If the matchShape argument is true, the faces to revolve to
    /// are extended to fully intersect the revolve.
    /// toEntityOne : The first entity that defines the "to" extent. The valid types of entities can vary depending on
    /// the type of feature this is being used with. For a revolve it can be a BRepBody, BRepFace,
    /// BRepVertex, ConstructionPlane, or ConstructionPoint.
    /// toEntityTwo : The second entity that defines the "to" extent. The valid types of entities can vary depending on
    /// the type of feature this is being used with. For a revolve it can be a BRepBody, BRepFace,
    /// BRepVertex, ConstructionPlane, or ConstructionPoint.
    /// Returns true if successful.
    bool setTwoSideToExtent(const core::Ptr<core::Base>& toEntityOne, const core::Ptr<core::Base>& toEntityTwo);

    /// In order for geometry to be transformed correctly, an Occurrence for creation needs to be
    /// specified when the Revolve is created based on geometry (e.g. a profile and/or face(s))
    /// in another component AND (the Revolve) is not in the root component.
    /// The CreationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    /// Specifies if the revolution should be created as a solid or surface. If
    /// it's a surface then there aren't any end caps and it's open. This is
    /// initialized to true so a solid will be created if it's not changed.
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

    /// Gets and sets the list of bodies that will participate in the feature when the operation is a cut or intersection.
    /// 
    /// If this property has not been set, the default behavior is that all bodies that are intersected by the
    /// feature will participate.
    /// 
    /// This property can return null in the case where the feature has not been fully defined so that
    /// possible intersecting bodies can be computed.
    std::vector<core::Ptr<BRepBody>> participantBodies() const;
    bool participantBodies(const std::vector<core::Ptr<BRepBody>>& value);

    /// Specifies if the axis should be projected on the same plane as the profile sketch plane or not.
    /// 
    /// Setting this to true will use a projected axis, while setting it to false will keep it in its original location.
    /// This is initialized to false so the selected axis will be used in the feature.
    bool isProjectAxis() const;
    bool isProjectAxis(bool value);

    ADSK_FUSION_REVOLVEFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_REVOLVEFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_REVOLVEFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_REVOLVEFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* profile_raw() const = 0;
    virtual bool profile_raw(core::Base* value) = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual core::Base* axis_raw() const = 0;
    virtual bool axis_raw(core::Base* value) = 0;
    virtual bool setAngleExtent_raw(bool isSymmetric, core::ValueInput* angle) = 0;
    virtual bool setTwoSideAngleExtent_raw(core::ValueInput* angleOne, core::ValueInput* angleTwo) = 0;
    virtual bool setOneSideToExtent_raw(core::Base* toEntity, core::Vector3D* directionHint) = 0;
    virtual bool setTwoSideToExtent_raw(core::Base* toEntityOne, core::Base* toEntityTwo) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
    virtual bool isSolid_raw() const = 0;
    virtual bool isSolid_raw(bool value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual BRepBody** participantBodies_raw(size_t& return_size) const = 0;
    virtual bool participantBodies_raw(BRepBody** value, size_t value_size) = 0;
    virtual bool isProjectAxis_raw() const = 0;
    virtual bool isProjectAxis_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> RevolveFeatureInput::profile() const
{
    core::Ptr<core::Base> res = profile_raw();
    return res;
}

inline bool RevolveFeatureInput::profile(const core::Ptr<core::Base>& value)
{
    return profile_raw(value.get());
}

inline FeatureOperations RevolveFeatureInput::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool RevolveFeatureInput::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline core::Ptr<core::Base> RevolveFeatureInput::axis() const
{
    core::Ptr<core::Base> res = axis_raw();
    return res;
}

inline bool RevolveFeatureInput::axis(const core::Ptr<core::Base>& value)
{
    return axis_raw(value.get());
}

inline bool RevolveFeatureInput::setAngleExtent(bool isSymmetric, const core::Ptr<core::ValueInput>& angle)
{
    bool res = setAngleExtent_raw(isSymmetric, angle.get());
    return res;
}

inline bool RevolveFeatureInput::setTwoSideAngleExtent(const core::Ptr<core::ValueInput>& angleOne, const core::Ptr<core::ValueInput>& angleTwo)
{
    bool res = setTwoSideAngleExtent_raw(angleOne.get(), angleTwo.get());
    return res;
}

inline bool RevolveFeatureInput::setOneSideToExtent(const core::Ptr<core::Base>& toEntity, const core::Ptr<core::Vector3D>& directionHint)
{
    bool res = setOneSideToExtent_raw(toEntity.get(), directionHint.get());
    return res;
}

inline bool RevolveFeatureInput::setTwoSideToExtent(const core::Ptr<core::Base>& toEntityOne, const core::Ptr<core::Base>& toEntityTwo)
{
    bool res = setTwoSideToExtent_raw(toEntityOne.get(), toEntityTwo.get());
    return res;
}

inline core::Ptr<Occurrence> RevolveFeatureInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool RevolveFeatureInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}

inline bool RevolveFeatureInput::isSolid() const
{
    bool res = isSolid_raw();
    return res;
}

inline bool RevolveFeatureInput::isSolid(bool value)
{
    return isSolid_raw(value);
}

inline core::Ptr<BaseFeature> RevolveFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool RevolveFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline std::vector<core::Ptr<BRepBody>> RevolveFeatureInput::participantBodies() const
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

inline bool RevolveFeatureInput::participantBodies(const std::vector<core::Ptr<BRepBody>>& value)
{
    BRepBody** value_ = new BRepBody*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = participantBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool RevolveFeatureInput::isProjectAxis() const
{
    bool res = isProjectAxis_raw();
    return res;
}

inline bool RevolveFeatureInput::isProjectAxis(bool value)
{
    return isProjectAxis_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_REVOLVEFEATUREINPUT_API