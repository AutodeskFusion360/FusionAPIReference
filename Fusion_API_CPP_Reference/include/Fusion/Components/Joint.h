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
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_JOINT_CPP__
# define ADSK_FUSION_JOINT_API XI_EXPORT
# else
# define ADSK_FUSION_JOINT_API
# endif
#else
# define ADSK_FUSION_JOINT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
    class Matrix3D;
}}
namespace adsk { namespace fusion {
    class Component;
    class GeometricRelationships;
    class JointMotion;
    class ModelParameter;
    class MotionLink;
    class Occurrence;
    class TimelineObject;
}}

namespace adsk { namespace fusion {

/// A joint in a design.
class Joint : public core::Base {
public:

    /// Returns the parent component that owns this joint.
    core::Ptr<Component> parentComponent() const;

    /// Gets and sets the name of the joint.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets and sets the first JointGeometry or JointOrigin for this joint.
    /// 
    /// If the JointType is InferredJointType, this property will return null when queried and will
    /// fail if it set.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this joint.
    /// This can be accomplished using the following code: thisJoint.timelineObject.rollTo(True)
    core::Ptr<core::Base> geometryOrOriginOne() const;
    bool geometryOrOriginOne(const core::Ptr<core::Base>& value);

    /// Gets and sets the second JointGeometry or JointOrigin for this joint.
    /// 
    /// If the JointType is InferredJointType, this property will return null when queried and will
    /// fail if it set.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this joint.
    /// This can be accomplished using the following code: thisJoint.timelineObject.rollTo(True)
    core::Ptr<core::Base> geometryOrOriginTwo() const;
    bool geometryOrOriginTwo(const core::Ptr<core::Base>& value);

    /// Returns the parameter controlling the angle between the two input geometries. This is effectively the
    /// angle between the two primary axes of the two joint geometries.
    /// 
    /// This property will return null in the case where the jointType property returns InferredJointType.
    core::Ptr<ModelParameter> angle() const;

    /// Returns the parameter controlling the offset between the two input geometries. This is effectively the
    /// offset distance between the two planes defined by the primary and secondary axes
    /// of the input geometries or the offset along the tertiary axis (z axis) of the joint.
    /// 
    /// This property will return null in the case where the jointType property returns InferredJointType.
    core::Ptr<ModelParameter> offset() const;

    /// Gets and sets if the joint direction is flipped or not. This is effectively
    /// specifying if the third axis of the two input geometries is facing (false) or
    /// opposed (true).
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this joint.
    /// This can be accomplished using the following code: thisJoint.timelineObject.rollTo(True)
    /// 
    /// The value of this property should be ignored in the case where the jointType property returns InferredJointType.
    bool isFlipped() const;
    bool isFlipped(bool value);

    /// Returns a JointMotion object that defines the motion relationship between the two geometries.
    /// 
    /// This property will return null in the case where the jointType property returns InferredJointType.
    core::Ptr<JointMotion> jointMotion() const;

    /// Deletes this joint.
    /// Returns true if the delete is successful.
    bool deleteMe();

    /// Returns the timeline object associated with this joint.
    core::Ptr<TimelineObject> timelineObject() const;

    /// Redefines the relationship between the two joint geometries as a rigid joint.
    /// 
    /// This method will fail in the case where the jointType property returns InferredJointType.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this joint.
    /// This can be accomplished using the following code: thisJoint.timelineObject.rollTo(True)
    /// Returns true if successful.
    bool setAsRigidJointMotion();

    /// Redefines the relationship between the two joint geometries as a revolute joint.
    /// 
    /// This method will fail in the case where the jointType property returns InferredJointType.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this joint.
    /// This can be accomplished using the following code: thisJoint.timelineObject.rollTo(True)
    /// rotationAxis : Specifies which axis the rotation is around. If this is set to CustomJointDirection then the
    /// customRotationAxisEntity argument must also be provided.
    /// customRotationAxisEntity : If the rotationAxis is customAxisEntity this argument is used to specify the entity that defines
    /// the custom axis of rotation. This can be several types of entities that an axis can be derived
    /// from.
    /// Returns true if the operation was successful.
    bool setAsRevoluteJointMotion(JointDirections rotationAxis, const core::Ptr<core::Base>& customRotationAxisEntity = NULL);

    /// Redefines the relationship between the two joint geometries as a slider joint.
    /// 
    /// This method will fail in the case where the jointType property returns InferredJointType.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this joint.
    /// This can be accomplished using the following code: thisJoint.timelineObject.rollTo(True)
    /// sliderDirection : Specifies which axis the slide direction is along. If this is set to CustomJointDirection then the
    /// customSliderDirectionEntity argument must also be provided.
    /// customSliderDirectionEntity : If the sliderDirection is CustomJointDirection this argument is used to specify the entity that defines
    /// the custom slider direction. This can be several types of entities that can define a direction.
    /// Returns true if the operation was successful.
    bool setAsSliderJointMotion(JointDirections sliderDirection, const core::Ptr<core::Base>& customSliderDirectionEntity = NULL);

    /// Redefines the relationship between the two joint geometries as a cylindrical joint.
    /// 
    /// This method will fail in the case where the jointType property returns InferredJointType.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this joint.
    /// This can be accomplished using the following code: thisJoint.timelineObject.rollTo(True)
    /// rotationAxis : Specifies which axis the rotation is around. If this is set to CustomJointDirection then the
    /// customRotationAxisEntity argument must also be provided.
    /// customRotationAxisEntity : If the rotationAxis is customAxisEntity this argument is used to specify the entity that defines
    /// the custom axis of rotation. This can be several types of entities that an axis can be derived
    /// from.
    /// Returns true if the operation was successful.
    bool setAsCylindricalJointMotion(JointDirections rotationAxis, const core::Ptr<core::Base>& customRotationAxisEntity = NULL);

    /// Redefines the relationship between the two joint geometries as a pin-slot joint.
    /// 
    /// This method will fail in the case where the jointType property returns InferredJointType.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this joint.
    /// This can be accomplished using the following code: thisJoint.timelineObject.rollTo(True)
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

    /// Redefines the relationship between the two joint geometries as a planar joint.
    /// 
    /// This method will fail in the case where the jointType property returns InferredJointType.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this joint.
    /// This can be accomplished using the following code: thisJoint.timelineObject.rollTo(True)
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

    /// Redefines the relationship between the two joint geometries as a ball joint.
    /// 
    /// This method will fail in the case where the jointType property returns InferredJointType.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this joint.
    /// This can be accomplished using the following code: thisJoint.timelineObject.rollTo(True)
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

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<Joint> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<Joint> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// Gets and sets if this joint is suppressed.
    bool isSuppressed() const;
    bool isSuppressed(bool value);

    /// Gets and sets if the light bulb of this joint as displayed in the browser is on or off.
    /// A joint will only be visible if the light bulb is switched on. However,
    /// the light bulb can be on and the joint still invisible if a higher level occurrence
    /// in the assembly context is not visible because its light bulb is off or the joints folder
    /// is light bulb is off.
    bool isLightBulbOn() const;
    bool isLightBulbOn(bool value);

    /// Gets whether the joint is visible. To change the visibility see the isLightBulbOn property.
    /// This property is affected by the assembly context.
    bool isVisible() const;

    /// Returns the collection of attributes associated with this joint.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns the current health state of the joint.
    FeatureHealthStates healthState() const;

    /// Returns the error or warning message in the case where the healthState property returns either
    /// WarningFeatureHealthState or ErrorFeatureHealthState. Otherwise this property returns an empty string.
    std::string errorOrWarningMessage() const;

    /// Returns the first of two occurrences that this joint defines a relationship between. This is the occurrence
    /// that can also be found through the geometryOrOriginOne property.
    core::Ptr<Occurrence> occurrenceOne() const;

    /// Returns the first of two occurrences that this joint defines a relationship between. This is the occurrence
    /// that can also be found through the geometryOrOriginTwo property.
    core::Ptr<Occurrence> occurrenceTwo() const;

    /// Gets and sets if the joint is locked.
    bool isLocked() const;
    bool isLocked(bool value);

    /// Returns a token for the Joint object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same joint.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    /// Returns the parameter controlling the offset along the primary axis (x axis) of the joint. To edit this
    /// value, get the parameter and use one of its properties to edit the value.
    /// 
    /// This property will return null in the case where the jointType property returns InferredJointType.
    core::Ptr<ModelParameter> offsetX() const;

    /// Returns the parameter controlling the offset along the primary axis (y axis) of the joint. To edit this
    /// value, get the parameter and use one of its properties to edit the value.
    /// 
    /// This property will return null in the case where the jointType property returns InferredJointType.
    core::Ptr<ModelParameter> offsetY() const;

    /// Returns the position and orientation of the joint geometry associated with the first occurrence.
    /// This is returned as a 3D matrix which provides the origin and the X, Y, and Z axis vectors of the
    /// coordinate system.
    /// 
    /// This property is especially useful in cases where the JointGeometry cannot be obtained. This can
    /// happen when the model has been modified in a way where the geometry used to create the joint is
    /// no longer available.
    /// 
    /// This property will return null in the case where the jointType property returns InferredJointType.
    core::Ptr<core::Matrix3D> geometryOneTransform() const;

    /// Returns the position and orientation of the joint geometry associated with the second occurrence.
    /// This is returned as a 3D matrix which provides the origin and the X, Y, and Z axis vectors of the
    /// coordinate system.
    /// 
    /// This property is especially useful in cases where the JointGeometry cannot be obtained. This can
    /// happen when the model has been modified in a way where the geometry used to create the joint is
    /// no longer available.
    /// 
    /// This property will return null in the case where the jointType property returns InferredJointType.
    core::Ptr<core::Matrix3D> geometryTwoTransform() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the set of geometric relationships that were used to infer this joint. This property is
    /// only valid when the jointType property returns InferredJointType. Otherwise, it returns null.
    core::Ptr<GeometricRelationships> geometricRelationships() const;

    /// Returns the MotionLink objects that this joint is involved in.
    std::vector<core::Ptr<MotionLink>> motionLinks() const;

    ADSK_FUSION_JOINT_API static const char* classType();
    ADSK_FUSION_JOINT_API const char* objectType() const override;
    ADSK_FUSION_JOINT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_JOINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Component* parentComponent_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual core::Base* geometryOrOriginOne_raw() const = 0;
    virtual bool geometryOrOriginOne_raw(core::Base* value) = 0;
    virtual core::Base* geometryOrOriginTwo_raw() const = 0;
    virtual bool geometryOrOriginTwo_raw(core::Base* value) = 0;
    virtual ModelParameter* angle_raw() const = 0;
    virtual ModelParameter* offset_raw() const = 0;
    virtual bool isFlipped_raw() const = 0;
    virtual bool isFlipped_raw(bool value) = 0;
    virtual JointMotion* jointMotion_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual TimelineObject* timelineObject_raw() const = 0;
    virtual bool setAsRigidJointMotion_raw() = 0;
    virtual bool setAsRevoluteJointMotion_raw(JointDirections rotationAxis, core::Base* customRotationAxisEntity) = 0;
    virtual bool setAsSliderJointMotion_raw(JointDirections sliderDirection, core::Base* customSliderDirectionEntity) = 0;
    virtual bool setAsCylindricalJointMotion_raw(JointDirections rotationAxis, core::Base* customRotationAxisEntity) = 0;
    virtual bool setAsPinSlotJointMotion_raw(JointDirections rotationAxis, JointDirections slideDirection, core::Base* customRotationAxisEntity, core::Base* customSlideDirectionEntity) = 0;
    virtual bool setAsPlanarJointMotion_raw(JointDirections normalDirection, core::Base* customNormalDirectionEntity, core::Base* customPrimarySlideDirection) = 0;
    virtual bool setAsBallJointMotion_raw(JointDirections pitchDirection, JointDirections yawDirection, core::Base* customPitchDirection, core::Base* customYawDirection) = 0;
    virtual Joint* nativeObject_raw() const = 0;
    virtual Joint* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual bool isSuppressed_raw() const = 0;
    virtual bool isSuppressed_raw(bool value) = 0;
    virtual bool isLightBulbOn_raw() const = 0;
    virtual bool isLightBulbOn_raw(bool value) = 0;
    virtual bool isVisible_raw() const = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual FeatureHealthStates healthState_raw() const = 0;
    virtual char* errorOrWarningMessage_raw() const = 0;
    virtual Occurrence* occurrenceOne_raw() const = 0;
    virtual Occurrence* occurrenceTwo_raw() const = 0;
    virtual bool isLocked_raw() const = 0;
    virtual bool isLocked_raw(bool value) = 0;
    virtual char* entityToken_raw() const = 0;
    virtual ModelParameter* offsetX_raw() const = 0;
    virtual ModelParameter* offsetY_raw() const = 0;
    virtual core::Matrix3D* geometryOneTransform_raw() const = 0;
    virtual core::Matrix3D* geometryTwoTransform_raw() const = 0;
    virtual GeometricRelationships* geometricRelationships_raw() const = 0;
    virtual MotionLink** motionLinks_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline core::Ptr<Component> Joint::parentComponent() const
{
    core::Ptr<Component> res = parentComponent_raw();
    return res;
}

inline std::string Joint::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Joint::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<core::Base> Joint::geometryOrOriginOne() const
{
    core::Ptr<core::Base> res = geometryOrOriginOne_raw();
    return res;
}

inline bool Joint::geometryOrOriginOne(const core::Ptr<core::Base>& value)
{
    return geometryOrOriginOne_raw(value.get());
}

inline core::Ptr<core::Base> Joint::geometryOrOriginTwo() const
{
    core::Ptr<core::Base> res = geometryOrOriginTwo_raw();
    return res;
}

inline bool Joint::geometryOrOriginTwo(const core::Ptr<core::Base>& value)
{
    return geometryOrOriginTwo_raw(value.get());
}

inline core::Ptr<ModelParameter> Joint::angle() const
{
    core::Ptr<ModelParameter> res = angle_raw();
    return res;
}

inline core::Ptr<ModelParameter> Joint::offset() const
{
    core::Ptr<ModelParameter> res = offset_raw();
    return res;
}

inline bool Joint::isFlipped() const
{
    bool res = isFlipped_raw();
    return res;
}

inline bool Joint::isFlipped(bool value)
{
    return isFlipped_raw(value);
}

inline core::Ptr<JointMotion> Joint::jointMotion() const
{
    core::Ptr<JointMotion> res = jointMotion_raw();
    return res;
}

inline bool Joint::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<TimelineObject> Joint::timelineObject() const
{
    core::Ptr<TimelineObject> res = timelineObject_raw();
    return res;
}

inline bool Joint::setAsRigidJointMotion()
{
    bool res = setAsRigidJointMotion_raw();
    return res;
}

inline bool Joint::setAsRevoluteJointMotion(JointDirections rotationAxis, const core::Ptr<core::Base>& customRotationAxisEntity)
{
    bool res = setAsRevoluteJointMotion_raw(rotationAxis, customRotationAxisEntity.get());
    return res;
}

inline bool Joint::setAsSliderJointMotion(JointDirections sliderDirection, const core::Ptr<core::Base>& customSliderDirectionEntity)
{
    bool res = setAsSliderJointMotion_raw(sliderDirection, customSliderDirectionEntity.get());
    return res;
}

inline bool Joint::setAsCylindricalJointMotion(JointDirections rotationAxis, const core::Ptr<core::Base>& customRotationAxisEntity)
{
    bool res = setAsCylindricalJointMotion_raw(rotationAxis, customRotationAxisEntity.get());
    return res;
}

inline bool Joint::setAsPinSlotJointMotion(JointDirections rotationAxis, JointDirections slideDirection, const core::Ptr<core::Base>& customRotationAxisEntity, const core::Ptr<core::Base>& customSlideDirectionEntity)
{
    bool res = setAsPinSlotJointMotion_raw(rotationAxis, slideDirection, customRotationAxisEntity.get(), customSlideDirectionEntity.get());
    return res;
}

inline bool Joint::setAsPlanarJointMotion(JointDirections normalDirection, const core::Ptr<core::Base>& customNormalDirectionEntity, const core::Ptr<core::Base>& customPrimarySlideDirection)
{
    bool res = setAsPlanarJointMotion_raw(normalDirection, customNormalDirectionEntity.get(), customPrimarySlideDirection.get());
    return res;
}

inline bool Joint::setAsBallJointMotion(JointDirections pitchDirection, JointDirections yawDirection, const core::Ptr<core::Base>& customPitchDirection, const core::Ptr<core::Base>& customYawDirection)
{
    bool res = setAsBallJointMotion_raw(pitchDirection, yawDirection, customPitchDirection.get(), customYawDirection.get());
    return res;
}

inline core::Ptr<Joint> Joint::nativeObject() const
{
    core::Ptr<Joint> res = nativeObject_raw();
    return res;
}

inline core::Ptr<Joint> Joint::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<Joint> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<Occurrence> Joint::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline bool Joint::isSuppressed() const
{
    bool res = isSuppressed_raw();
    return res;
}

inline bool Joint::isSuppressed(bool value)
{
    return isSuppressed_raw(value);
}

inline bool Joint::isLightBulbOn() const
{
    bool res = isLightBulbOn_raw();
    return res;
}

inline bool Joint::isLightBulbOn(bool value)
{
    return isLightBulbOn_raw(value);
}

inline bool Joint::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline core::Ptr<core::Attributes> Joint::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline FeatureHealthStates Joint::healthState() const
{
    FeatureHealthStates res = healthState_raw();
    return res;
}

inline std::string Joint::errorOrWarningMessage() const
{
    std::string res;

    char* p= errorOrWarningMessage_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<Occurrence> Joint::occurrenceOne() const
{
    core::Ptr<Occurrence> res = occurrenceOne_raw();
    return res;
}

inline core::Ptr<Occurrence> Joint::occurrenceTwo() const
{
    core::Ptr<Occurrence> res = occurrenceTwo_raw();
    return res;
}

inline bool Joint::isLocked() const
{
    bool res = isLocked_raw();
    return res;
}

inline bool Joint::isLocked(bool value)
{
    return isLocked_raw(value);
}

inline std::string Joint::entityToken() const
{
    std::string res;

    char* p= entityToken_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<ModelParameter> Joint::offsetX() const
{
    core::Ptr<ModelParameter> res = offsetX_raw();
    return res;
}

inline core::Ptr<ModelParameter> Joint::offsetY() const
{
    core::Ptr<ModelParameter> res = offsetY_raw();
    return res;
}

inline core::Ptr<core::Matrix3D> Joint::geometryOneTransform() const
{
    core::Ptr<core::Matrix3D> res = geometryOneTransform_raw();
    return res;
}

inline core::Ptr<core::Matrix3D> Joint::geometryTwoTransform() const
{
    core::Ptr<core::Matrix3D> res = geometryTwoTransform_raw();
    return res;
}

inline core::Ptr<GeometricRelationships> Joint::geometricRelationships() const
{
    core::Ptr<GeometricRelationships> res = geometricRelationships_raw();
    return res;
}

inline std::vector<core::Ptr<MotionLink>> Joint::motionLinks() const
{
    std::vector<core::Ptr<MotionLink>> res;
    size_t s;

    MotionLink** p= motionLinks_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_JOINT_API