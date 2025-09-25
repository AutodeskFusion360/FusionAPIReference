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
# ifdef __COMPILING_ADSK_FUSION_JOINTINPUT_CPP__
# define ADSK_FUSION_JOINTINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_JOINTINPUT_API
# endif
#else
# define ADSK_FUSION_JOINTINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class JointMotion;
}}

namespace adsk { namespace fusion {

/// Defines all of the information required to create a new joint. This object provides
/// equivalent functionality to the Joint command dialog in that it gathers the required
/// information to create a joint.
class JointInput : public core::Base {
public:

    /// Gets and sets the first JointGeometry or JointOrigin for this joint.
    core::Ptr<core::Base> geometryOrOriginOne() const;
    bool geometryOrOriginOne(const core::Ptr<core::Base>& value);

    /// Gets and sets the second JointGeometry or JointOrigin for this joint.
    core::Ptr<core::Base> geometryOrOriginTwo() const;
    bool geometryOrOriginTwo(const core::Ptr<core::Base>& value);

    /// Specifies the angle between two input geometries. This is effectively the
    /// angle between the two primary axes of the input geometries. When a new
    /// JointInput object is created, this value defaults to zero. When the joint
    /// is created this will become the value of the parameter that controls the joint angle.
    /// 
    /// When using a real value to define the angle, the value is in radians. When
    /// using a string the expression is evaluated using the document default units for angles.
    core::Ptr<core::ValueInput> angle() const;
    bool angle(const core::Ptr<core::ValueInput>& value);

    /// Specifies the offset between two input geometries. This is effectively the
    /// offset distance between the two planes defined by the primary and secondary axes
    /// of the input geometries. When a new JointInput object is created, this value defaults to zero.
    /// When the joint is created this will become the value of the parameter that controls the joint offset.
    /// 
    /// When using a real value to define the offset, the value is in centimeters. When
    /// using a string the expression is evaluated using the document default units for distance.
    core::Ptr<core::ValueInput> offset() const;
    bool offset(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets if the joint direction is flipped or not. This is effectively
    /// specifying if the third axis of the two input geometries is facing (false) or
    /// opposed (true).
    bool isFlipped() const;
    bool isFlipped(bool value);

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

    /// Returns an object derived from JointMotion that defines how the motion between the two joint geometries is defined.
    core::Ptr<JointMotion> jointMotion() const;

    ADSK_FUSION_JOINTINPUT_API static const char* classType();
    ADSK_FUSION_JOINTINPUT_API const char* objectType() const override;
    ADSK_FUSION_JOINTINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_JOINTINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* geometryOrOriginOne_raw() const = 0;
    virtual bool geometryOrOriginOne_raw(core::Base* value) = 0;
    virtual core::Base* geometryOrOriginTwo_raw() const = 0;
    virtual bool geometryOrOriginTwo_raw(core::Base* value) = 0;
    virtual core::ValueInput* angle_raw() const = 0;
    virtual bool angle_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* offset_raw() const = 0;
    virtual bool offset_raw(core::ValueInput* value) = 0;
    virtual bool isFlipped_raw() const = 0;
    virtual bool isFlipped_raw(bool value) = 0;
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

inline core::Ptr<core::Base> JointInput::geometryOrOriginOne() const
{
    core::Ptr<core::Base> res = geometryOrOriginOne_raw();
    return res;
}

inline bool JointInput::geometryOrOriginOne(const core::Ptr<core::Base>& value)
{
    return geometryOrOriginOne_raw(value.get());
}

inline core::Ptr<core::Base> JointInput::geometryOrOriginTwo() const
{
    core::Ptr<core::Base> res = geometryOrOriginTwo_raw();
    return res;
}

inline bool JointInput::geometryOrOriginTwo(const core::Ptr<core::Base>& value)
{
    return geometryOrOriginTwo_raw(value.get());
}

inline core::Ptr<core::ValueInput> JointInput::angle() const
{
    core::Ptr<core::ValueInput> res = angle_raw();
    return res;
}

inline bool JointInput::angle(const core::Ptr<core::ValueInput>& value)
{
    return angle_raw(value.get());
}

inline core::Ptr<core::ValueInput> JointInput::offset() const
{
    core::Ptr<core::ValueInput> res = offset_raw();
    return res;
}

inline bool JointInput::offset(const core::Ptr<core::ValueInput>& value)
{
    return offset_raw(value.get());
}

inline bool JointInput::isFlipped() const
{
    bool res = isFlipped_raw();
    return res;
}

inline bool JointInput::isFlipped(bool value)
{
    return isFlipped_raw(value);
}

inline bool JointInput::setAsRigidJointMotion()
{
    bool res = setAsRigidJointMotion_raw();
    return res;
}

inline bool JointInput::setAsRevoluteJointMotion(JointDirections rotationAxis, const core::Ptr<core::Base>& customRotationAxisEntity)
{
    bool res = setAsRevoluteJointMotion_raw(rotationAxis, customRotationAxisEntity.get());
    return res;
}

inline bool JointInput::setAsSliderJointMotion(JointDirections sliderDirection, const core::Ptr<core::Base>& customSliderDirectionEntity)
{
    bool res = setAsSliderJointMotion_raw(sliderDirection, customSliderDirectionEntity.get());
    return res;
}

inline bool JointInput::setAsCylindricalJointMotion(JointDirections rotationAxis, const core::Ptr<core::Base>& customRotationAxisEntity)
{
    bool res = setAsCylindricalJointMotion_raw(rotationAxis, customRotationAxisEntity.get());
    return res;
}

inline bool JointInput::setAsPinSlotJointMotion(JointDirections rotationAxis, JointDirections slideDirection, const core::Ptr<core::Base>& customRotationAxisEntity, const core::Ptr<core::Base>& customSlideDirectionEntity)
{
    bool res = setAsPinSlotJointMotion_raw(rotationAxis, slideDirection, customRotationAxisEntity.get(), customSlideDirectionEntity.get());
    return res;
}

inline bool JointInput::setAsPlanarJointMotion(JointDirections normalDirection, const core::Ptr<core::Base>& customNormalDirectionEntity, const core::Ptr<core::Base>& customPrimarySlideDirection)
{
    bool res = setAsPlanarJointMotion_raw(normalDirection, customNormalDirectionEntity.get(), customPrimarySlideDirection.get());
    return res;
}

inline bool JointInput::setAsBallJointMotion(JointDirections pitchDirection, JointDirections yawDirection, const core::Ptr<core::Base>& customPitchDirection, const core::Ptr<core::Base>& customYawDirection)
{
    bool res = setAsBallJointMotion_raw(pitchDirection, yawDirection, customPitchDirection.get(), customYawDirection.get());
    return res;
}

inline core::Ptr<JointMotion> JointInput::jointMotion() const
{
    core::Ptr<JointMotion> res = jointMotion_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_JOINTINPUT_API