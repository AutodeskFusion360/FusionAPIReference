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
# ifdef __COMPILING_ADSK_FUSION_ASBUILTJOINTINPUT_CPP__
# define ADSK_FUSION_ASBUILTJOINTINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_ASBUILTJOINTINPUT_API
# endif
#else
# define ADSK_FUSION_ASBUILTJOINTINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class JointGeometry;
    class JointMotion;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Defines all of the information needed to create an as-built joint.
class AsBuiltJointInput : public core::Base {
public:

    /// Specifies the first of two occurrences the joint is between.
    core::Ptr<Occurrence> occurrenceOne() const;
    bool occurrenceOne(const core::Ptr<Occurrence>& value);

    /// Specifies the second of two occurrences the joint is between.
    core::Ptr<Occurrence> occurrenceTwo() const;
    bool occurrenceTwo(const core::Ptr<Occurrence>& value);

    /// Specifies the position of the joint.
    core::Ptr<JointGeometry> geometry() const;
    bool geometry(const core::Ptr<JointGeometry>& value);

    /// Defines the relationship between the two joint geometries as a rigid joint.
    /// Returns true if successful.
    bool setAsRigidJointMotion();

    /// Defines the relationship between the two joint geometries as a revolute joint.
    /// rotationAxis : Specifies which axis the rotation is around. If this is set to CustomJointDirection then the
    /// customRotationAxisEntity argument must also be provided.
    /// customRotationAxisEntity : If the rotationAxis is customAxisEntity this argument is used to specify the entity that defines
    /// the custom axis of rotation. This can be several types of entities that an axis can be derived
    /// from.
    /// Returns true if the operation was successful.
    bool setAsRevoluteJointMotion(JointDirections rotationAxis, const core::Ptr<core::Base>& customRotationAxisEntity = NULL);

    /// Defines the relationship between the two joint geometries as a slider joint.
    /// sliderDirection : Specifies which axis the slide direction is along. If this is set to CustomJointDirection then the
    /// customSliderDirectionEntity argument must also be provided.
    /// customSliderDirectionEntity : If the sliderDirection is CustomJointDirection this argument is used to specify the entity that defines
    /// the custom slider direction. This can be several types of entities that can define a direction.
    /// Returns true if the operation was successful.
    bool setAsSliderJointMotion(JointDirections sliderDirection, const core::Ptr<core::Base>& customSliderDirectionEntity = NULL);

    /// Defines the relationship between the two joint geometries as a cylindrical joint.
    /// rotationAxis : Specifies which axis the rotation is around. If this is set to CustomJointDirection then the
    /// customRotationAxisEntity argument must also be provided.
    /// customRotationAxisEntity : If the rotationAxis is customAxisEntity this argument is used to specify the entity that defines
    /// the custom axis of rotation. This can be several types of entities that an axis can be derived
    /// from.
    /// Returns true if the operation was successful.
    bool setAsCylindricalJointMotion(JointDirections rotationAxis, const core::Ptr<core::Base>& customRotationAxisEntity = NULL);

    /// Defines the relationship between the two joint geometries as a pin-slot joint.
    /// rotationAxis : Specifies which axis the rotation is around. If this is set to CustomJointDirection then the
    /// customRotationAxisEntity argument must also be provided.
    /// slideDirection : Specifies which axis the slide direction is along. If this is set to CustomJointDirection then the
    /// customSlideDirectionEntity argument must also be provided.
    /// customRotationAxisEntity : If the rotationAxis is customAxisEntity this argument is used to specify the entity that defines
    /// the custom axis of rotation. This can be several types of entities that an axis can be derived
    /// customSlideDirectionEntity : If the slideDirection is CustomJointDirection this argument is used to specify the entity that defines
    /// the custom slide direction. This can be several types of entities that can define a direction.
    /// Returns true if the operation was successful.
    bool setAsPinSlotJointMotion(JointDirections rotationAxis, JointDirections slideDirection, const core::Ptr<core::Base>& customRotationAxisEntity = NULL, const core::Ptr<core::Base>& customSlideDirectionEntity = NULL);

    /// Defines the relationship between the two joint geometries as a planar joint.
    /// normalDirection : Defines the direction of the normal of the single degree of rotation.
    /// This can be set to XAxisJointDirection, YAxisJointDirection, ZAxisJointDirection,
    /// or CustomJointDirection. If set to CustomJointDirection then the customNormalDirectionEntity
    /// argument must also be provided.
    /// customNormalDirectionEntity : If the normalDirection is CustomJointDirection this argument is used to specify the entity that defines
    /// the direction of the normal. This can be several types of entities that can define a direction.
    /// customPrimarySlideDirection : This arguments defines the direction of the primary slide direction. A default primary slide direction
    /// is automatically chosen and will be used if this argument is not provided or is null. The secondary slide
    /// direction is automatically inferred from the normal and primary slide directions.
    /// Returns true if the operation was successful.
    bool setAsPlanarJointMotion(JointDirections normalDirection, const core::Ptr<core::Base>& customNormalDirectionEntity = NULL, const core::Ptr<core::Base>& customPrimarySlideDirection = NULL);

    /// Defines the relationship between the two joint geometries as a ball joint.
    /// pitchDirection : Defines the direction the pitch angle is measured from. This can be ZAxisJointDirection or CustomJointDirection. If
    /// CustomJointDirection is specified then you must also provide a value for the customPitchDirection argument.
    /// yawDirection : Defines the direction the yaw is measured from. This can be XAxisJointDirection or CustomJointDirection. If
    /// CustomJointDirection is specified then you must also provide a value for the customYawDirection argument.
    /// customPitchDirection : If the pitchDirection argument is customPitchDirection this argument is used to define the direction the pitch
    /// angel is measured from. This can be several types of entities that can define a direction.
    /// customYawDirection : If the yawDirection argument is customPitchDirection this argument is used to define the direction the yaw
    /// angel is measured from. This can be several types of entities that can define a direction.
    /// Returns true if the operation was successful.
    bool setAsBallJointMotion(JointDirections pitchDirection, JointDirections yawDirection, const core::Ptr<core::Base>& customPitchDirection = NULL, const core::Ptr<core::Base>& customYawDirection = NULL);

    /// Returns one of the objects derived from JointMotion that defines how the motion between
    /// the two joint geometries is defined. Can be null if the motion hasn't yet been defined.
    core::Ptr<JointMotion> jointMotion() const;

    ADSK_FUSION_ASBUILTJOINTINPUT_API static const char* classType();
    ADSK_FUSION_ASBUILTJOINTINPUT_API const char* objectType() const override;
    ADSK_FUSION_ASBUILTJOINTINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ASBUILTJOINTINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Occurrence* occurrenceOne_raw() const = 0;
    virtual bool occurrenceOne_raw(Occurrence* value) = 0;
    virtual Occurrence* occurrenceTwo_raw() const = 0;
    virtual bool occurrenceTwo_raw(Occurrence* value) = 0;
    virtual JointGeometry* geometry_raw() const = 0;
    virtual bool geometry_raw(JointGeometry* value) = 0;
    virtual bool setAsRigidJointMotion_raw() = 0;
    virtual bool setAsRevoluteJointMotion_raw(JointDirections rotationAxis, core::Base* customRotationAxisEntity) = 0;
    virtual bool setAsSliderJointMotion_raw(JointDirections sliderDirection, core::Base* customSliderDirectionEntity) = 0;
    virtual bool setAsCylindricalJointMotion_raw(JointDirections rotationAxis, core::Base* customRotationAxisEntity) = 0;
    virtual bool setAsPinSlotJointMotion_raw(JointDirections rotationAxis, JointDirections slideDirection, core::Base* customRotationAxisEntity, core::Base* customSlideDirectionEntity) = 0;
    virtual bool setAsPlanarJointMotion_raw(JointDirections normalDirection, core::Base* customNormalDirectionEntity, core::Base* customPrimarySlideDirection) = 0;
    virtual bool setAsBallJointMotion_raw(JointDirections pitchDirection, JointDirections yawDirection, core::Base* customPitchDirection, core::Base* customYawDirection) = 0;
    virtual JointMotion* jointMotion_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Occurrence> AsBuiltJointInput::occurrenceOne() const
{
    core::Ptr<Occurrence> res = occurrenceOne_raw();
    return res;
}

inline bool AsBuiltJointInput::occurrenceOne(const core::Ptr<Occurrence>& value)
{
    return occurrenceOne_raw(value.get());
}

inline core::Ptr<Occurrence> AsBuiltJointInput::occurrenceTwo() const
{
    core::Ptr<Occurrence> res = occurrenceTwo_raw();
    return res;
}

inline bool AsBuiltJointInput::occurrenceTwo(const core::Ptr<Occurrence>& value)
{
    return occurrenceTwo_raw(value.get());
}

inline core::Ptr<JointGeometry> AsBuiltJointInput::geometry() const
{
    core::Ptr<JointGeometry> res = geometry_raw();
    return res;
}

inline bool AsBuiltJointInput::geometry(const core::Ptr<JointGeometry>& value)
{
    return geometry_raw(value.get());
}

inline bool AsBuiltJointInput::setAsRigidJointMotion()
{
    bool res = setAsRigidJointMotion_raw();
    return res;
}

inline bool AsBuiltJointInput::setAsRevoluteJointMotion(JointDirections rotationAxis, const core::Ptr<core::Base>& customRotationAxisEntity)
{
    bool res = setAsRevoluteJointMotion_raw(rotationAxis, customRotationAxisEntity.get());
    return res;
}

inline bool AsBuiltJointInput::setAsSliderJointMotion(JointDirections sliderDirection, const core::Ptr<core::Base>& customSliderDirectionEntity)
{
    bool res = setAsSliderJointMotion_raw(sliderDirection, customSliderDirectionEntity.get());
    return res;
}

inline bool AsBuiltJointInput::setAsCylindricalJointMotion(JointDirections rotationAxis, const core::Ptr<core::Base>& customRotationAxisEntity)
{
    bool res = setAsCylindricalJointMotion_raw(rotationAxis, customRotationAxisEntity.get());
    return res;
}

inline bool AsBuiltJointInput::setAsPinSlotJointMotion(JointDirections rotationAxis, JointDirections slideDirection, const core::Ptr<core::Base>& customRotationAxisEntity, const core::Ptr<core::Base>& customSlideDirectionEntity)
{
    bool res = setAsPinSlotJointMotion_raw(rotationAxis, slideDirection, customRotationAxisEntity.get(), customSlideDirectionEntity.get());
    return res;
}

inline bool AsBuiltJointInput::setAsPlanarJointMotion(JointDirections normalDirection, const core::Ptr<core::Base>& customNormalDirectionEntity, const core::Ptr<core::Base>& customPrimarySlideDirection)
{
    bool res = setAsPlanarJointMotion_raw(normalDirection, customNormalDirectionEntity.get(), customPrimarySlideDirection.get());
    return res;
}

inline bool AsBuiltJointInput::setAsBallJointMotion(JointDirections pitchDirection, JointDirections yawDirection, const core::Ptr<core::Base>& customPitchDirection, const core::Ptr<core::Base>& customYawDirection)
{
    bool res = setAsBallJointMotion_raw(pitchDirection, yawDirection, customPitchDirection.get(), customYawDirection.get());
    return res;
}

inline core::Ptr<JointMotion> AsBuiltJointInput::jointMotion() const
{
    core::Ptr<JointMotion> res = jointMotion_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ASBUILTJOINTINPUT_API