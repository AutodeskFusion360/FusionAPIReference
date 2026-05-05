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
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ASBUILTJOINT_CPP__
# define ADSK_FUSION_ASBUILTJOINT_API XI_EXPORT
# else
# define ADSK_FUSION_ASBUILTJOINT_API
# endif
#else
# define ADSK_FUSION_ASBUILTJOINT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
    class Matrix3D;
}}
namespace adsk { namespace fusion {
    class Component;
    class JointGeometry;
    class JointMotion;
    class MotionLink;
    class Occurrence;
    class TimelineObject;
}}

namespace adsk { namespace fusion {

/// Represent an as-built joint.
class AsBuiltJoint : public core::Base {
public:

    /// Returns the parent component that owns this AsBuiltJoint.
    core::Ptr<Component> parentComponent() const;

    /// The name of the as-built joint as it is displayed in the timeline and the browser. The
    /// name can be changed.
    std::string name() const;
    bool name(const std::string& value);

    /// Specifies the first of two occurrences the joint is between.
    core::Ptr<Occurrence> occurrenceOne() const;

    /// Specifies the second of two occurrences the joint is between.
    core::Ptr<Occurrence> occurrenceTwo() const;

    /// Specifies the position of the joint. Getting this property will return null and
    /// setting it will be ignored in the case where the joint motion is rigid.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this as-built joint.
    /// This can be accomplished using the following code: thisAsBuiltJoint.timelineObject.rollTo(True)
    core::Ptr<JointGeometry> geometry() const;
    bool geometry(const core::Ptr<JointGeometry>& value);

    /// Deletes this as-built joint.
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// Returns the timeline object associated with this as-built joint.
    core::Ptr<TimelineObject> timelineObject() const;

    /// Returns a JointMotion object that defines the motion relationship between the two geometries.
    core::Ptr<JointMotion> jointMotion() const;

    /// Redefines the relationship between the two joint geometries as a rigid joint.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this as-built joint.
    /// This can be accomplished using the following code: thisAsBuiltJoint.timelineObject.rollTo(True)
    /// Returns true if successful.
    bool setAsRigidJointMotion();

    /// Redefines the relationship between the two joint geometries as a revolute joint.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this as-built joint.
    /// This can be accomplished using the following code: thisAsBuiltJoint.timelineObject.rollTo(True)
    /// rotationAxis : Specifies which axis the rotation is around. If this is set to CustomJointDirection then the
    /// customRotationAxisEntity argument must also be provided.
    /// geometry : Redefines the joint geometry. If not provided, the existing geometry is used. This argument is
    /// required if the current joint motion is rigid.
    /// customRotationAxisEntity : If the rotationAxis is customAxisEntity this argument is used to specify the entity that defines
    /// the custom axis of rotation. This can be several types of entities that an axis can be derived
    /// from.
    /// Returns true if the operation was successful.
    bool setAsRevoluteJointMotion(JointDirections rotationAxis, const core::Ptr<JointGeometry>& geometry = NULL, const core::Ptr<core::Base>& customRotationAxisEntity = NULL);

    /// Redefines the relationship between the two joint geometries as a slider joint.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this as-built joint.
    /// This can be accomplished using the following code: thisAsBuiltJoint.timelineObject.rollTo(True)
    /// sliderDirection : Specifies which axis the slide direction is along. If this is set to CustomJointDirection then the
    /// customSliderDirectionEntity argument must also be provided.
    /// geometry : Redefines the joint geometry. If not provided, the existing geometry is used. This argument is
    /// required if the current joint motion is rigid.
    /// customSliderDirectionEntity : If the sliderDirection is CustomJointDirection this argument is used to specify the entity that defines
    /// the custom slider direction. This can be several types of entities that can define a direction.
    /// Returns true if the operation was successful.
    bool setAsSliderJointMotion(JointDirections sliderDirection, const core::Ptr<JointGeometry>& geometry = NULL, const core::Ptr<core::Base>& customSliderDirectionEntity = NULL);

    /// Redefines the relationship between the two joint geometries as a cylindrical joint.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this as-built joint.
    /// This can be accomplished using the following code: thisAsBuiltJoint.timelineObject.rollTo(True)
    /// rotationAxis : Specifies which axis the rotation is around. If this is set to CustomJointDirection then the
    /// customRotationAxisEntity argument must also be provided.
    /// geometry : Redefines the joint geometry. If not provided, the existing geometry is used. This argument is
    /// required if the current joint motion is rigid.
    /// customRotationAxisEntity : If the rotationAxis is customAxisEntity this argument is used to specify the entity that defines
    /// the custom axis of rotation. This can be several types of entities that an axis can be derived
    /// from.
    /// Returns true if the operation was successful.
    bool setAsCylindricalJointMotion(JointDirections rotationAxis, const core::Ptr<JointGeometry>& geometry = NULL, const core::Ptr<core::Base>& customRotationAxisEntity = NULL);

    /// Redefines the relationship between the two joint geometries as a pin-slot joint.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this as-built joint.
    /// This can be accomplished using the following code: thisAsBuiltJoint.timelineObject.rollTo(True)
    /// rotationAxis : Specifies which axis the rotation is around. If this is set to CustomJointDirection then the
    /// customRotationAxisEntity argument must also be provided.
    /// slideDirection : Specifies which axis the slide direction is along. If this is set to CustomJointDirection then the
    /// customSlideDirectionEntity argument must also be provided.
    /// geometry : Redefines the joint geometry. If not provided, the existing geometry is used. This argument is
    /// required if the current joint motion is rigid.
    /// customRotationAxisEntity : If the rotationAxis is customAxisEntity this argument is used to specify the entity that defines
    /// the custom axis of rotation. This can be several types of entities that an axis can be derived
    /// customSlideDirectionEntity : If the slideDirection is CustomJointDirection this argument is used to specify the entity that defines
    /// the custom slide direction. This can be several types of entities that can define a direction.
    /// Returns true if the operation was successful.
    bool setAsPinSlotJointMotion(JointDirections rotationAxis, JointDirections slideDirection, const core::Ptr<JointGeometry>& geometry = NULL, const core::Ptr<core::Base>& customRotationAxisEntity = NULL, const core::Ptr<core::Base>& customSlideDirectionEntity = NULL);

    /// Redefines the relationship between the two joint geometries as a planar joint.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this as-built joint.
    /// This can be accomplished using the following code: thisAsBuiltJoint.timelineObject.rollTo(True)
    /// normalDirection : Defines the direction of the normal of the single degree of rotation.
    /// This can be set to XAxisJointDirection, YAxisJointDirection, ZAxisJointDirection,
    /// or CustomJointDirection. If set to CustomJointDirection then the customNormalDirectionEntity
    /// argument must also be provided.
    /// geometry : Redefines the joint geometry. If not provided, the existing geometry is used. This argument is
    /// required if the current joint motion is rigid.
    /// customNormalDirectionEntity : If the normalDirection is CustomJointDirection this argument is used to specify the entity that defines
    /// the direction of the normal. This can be several types of entities that can define a direction.
    /// customPrimarySlideDirection : This arguments defines the direction of the primary slide direction. A default primary slide direction
    /// is automatically chosen and will be used if this argument is not provided or is null. The secondary slide
    /// direction is automatically inferred from the normal and primary slide directions.
    /// Returns true if the operation was successful.
    bool setAsPlanarJointMotion(JointDirections normalDirection, const core::Ptr<JointGeometry>& geometry = NULL, const core::Ptr<core::Base>& customNormalDirectionEntity = NULL, const core::Ptr<core::Base>& customPrimarySlideDirection = NULL);

    /// Redefines the relationship between the two joint geometries as a ball joint.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this as-built joint.
    /// This can be accomplished using the following code: thisAsBuiltJoint.timelineObject.rollTo(True)
    /// pitchDirection : Defines the direction the pitch angle is measured from. This can be ZAxisJointDirection or CustomJointDirection. If
    /// CustomJointDirection is specified then you must also provide a value for the customPitchDirection argument.
    /// yawDirection : Defines the direction the yaw is measured from. This can be XAxisJointDirection or CustomJointDirection. If
    /// CustomJointDirection is specified then you must also provide a value for the customYawDirection argument.
    /// geometry : Redefines the joint geometry. If not provided, the existing geometry is used. This argument is
    /// required if the current joint motion is rigid.
    /// customPitchDirection : If the pitchDirection argument is customPitchDirection this argument is used to define the direction the pitch
    /// angel is measured from. This can be several types of entities that can define a direction.
    /// customYawDirection : If the yawDirection argument is customPitchDirection this argument is used to define the direction the yaw
    /// angel is measured from. This can be several types of entities that can define a direction.
    /// Returns true if the operation was successful.
    bool setAsBallJointMotion(JointDirections pitchDirection, JointDirections yawDirection, const core::Ptr<JointGeometry>& geometry = NULL, const core::Ptr<core::Base>& customPitchDirection = NULL, const core::Ptr<core::Base>& customYawDirection = NULL);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<AsBuiltJoint> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<AsBuiltJoint> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// Gets and sets if this as-built joint is suppressed.
    bool isSuppressed() const;
    bool isSuppressed(bool value);

    /// Gets and sets if the light bulb of this as-built joint as displayed in the browser is on or off.
    /// A joint will only be visible if the light bulb is switched on. However,
    /// the light bulb can be on and the joint still invisible if a higher level occurrence
    /// in the assembly context is not visible because its light bulb is off or the joints folder
    /// is light bulb is off.
    bool isLightBulbOn() const;
    bool isLightBulbOn(bool value);

    /// Gets whether the as-built joint is visible. To change the visibility see the isLightBulbOn property.
    /// This property is affected by the assembly context.
    bool isVisible() const;

    /// Returns the collection of attributes associated with this as-built joint.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns a token for the AsBuiltJoint object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same as-built joint.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    /// Returns the position and orientation of the joint geometry associated with this as-built joint.
    /// This is returned as a 3D matrix which provides the origin and the X, Y, and Z axis vectors of the
    /// coordinate system.
    /// 
    /// This property is especially useful in cases where the JointGeometry cannot be obtained. This can
    /// happen when the model has been modified in a way where the geometry used to create the joint is
    /// no longer available.
    core::Ptr<core::Matrix3D> transform() const;

    /// Returns the MotionLink objects that this joint is involved in.
    std::vector<core::Ptr<MotionLink>> motionLinks() const;

    ADSK_FUSION_ASBUILTJOINT_API static const char* classType();
    ADSK_FUSION_ASBUILTJOINT_API const char* objectType() const override;
    ADSK_FUSION_ASBUILTJOINT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ASBUILTJOINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Component* parentComponent_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual Occurrence* occurrenceOne_raw() const = 0;
    virtual Occurrence* occurrenceTwo_raw() const = 0;
    virtual JointGeometry* geometry_raw() const = 0;
    virtual bool geometry_raw(JointGeometry* value) = 0;
    virtual bool deleteMe_raw() = 0;
    virtual TimelineObject* timelineObject_raw() const = 0;
    virtual JointMotion* jointMotion_raw() const = 0;
    virtual bool setAsRigidJointMotion_raw() = 0;
    virtual bool setAsRevoluteJointMotion_raw(JointDirections rotationAxis, JointGeometry* geometry, core::Base* customRotationAxisEntity) = 0;
    virtual bool setAsSliderJointMotion_raw(JointDirections sliderDirection, JointGeometry* geometry, core::Base* customSliderDirectionEntity) = 0;
    virtual bool setAsCylindricalJointMotion_raw(JointDirections rotationAxis, JointGeometry* geometry, core::Base* customRotationAxisEntity) = 0;
    virtual bool setAsPinSlotJointMotion_raw(JointDirections rotationAxis, JointDirections slideDirection, JointGeometry* geometry, core::Base* customRotationAxisEntity, core::Base* customSlideDirectionEntity) = 0;
    virtual bool setAsPlanarJointMotion_raw(JointDirections normalDirection, JointGeometry* geometry, core::Base* customNormalDirectionEntity, core::Base* customPrimarySlideDirection) = 0;
    virtual bool setAsBallJointMotion_raw(JointDirections pitchDirection, JointDirections yawDirection, JointGeometry* geometry, core::Base* customPitchDirection, core::Base* customYawDirection) = 0;
    virtual AsBuiltJoint* nativeObject_raw() const = 0;
    virtual AsBuiltJoint* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual bool isSuppressed_raw() const = 0;
    virtual bool isSuppressed_raw(bool value) = 0;
    virtual bool isLightBulbOn_raw() const = 0;
    virtual bool isLightBulbOn_raw(bool value) = 0;
    virtual bool isVisible_raw() const = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
    virtual core::Matrix3D* transform_raw() const = 0;
    virtual MotionLink** motionLinks_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline core::Ptr<Component> AsBuiltJoint::parentComponent() const
{
    core::Ptr<Component> res = parentComponent_raw();
    return res;
}

inline std::string AsBuiltJoint::name() const
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

inline bool AsBuiltJoint::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<Occurrence> AsBuiltJoint::occurrenceOne() const
{
    core::Ptr<Occurrence> res = occurrenceOne_raw();
    return res;
}

inline core::Ptr<Occurrence> AsBuiltJoint::occurrenceTwo() const
{
    core::Ptr<Occurrence> res = occurrenceTwo_raw();
    return res;
}

inline core::Ptr<JointGeometry> AsBuiltJoint::geometry() const
{
    core::Ptr<JointGeometry> res = geometry_raw();
    return res;
}

inline bool AsBuiltJoint::geometry(const core::Ptr<JointGeometry>& value)
{
    return geometry_raw(value.get());
}

inline bool AsBuiltJoint::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<TimelineObject> AsBuiltJoint::timelineObject() const
{
    core::Ptr<TimelineObject> res = timelineObject_raw();
    return res;
}

inline core::Ptr<JointMotion> AsBuiltJoint::jointMotion() const
{
    core::Ptr<JointMotion> res = jointMotion_raw();
    return res;
}

inline bool AsBuiltJoint::setAsRigidJointMotion()
{
    bool res = setAsRigidJointMotion_raw();
    return res;
}

inline bool AsBuiltJoint::setAsRevoluteJointMotion(JointDirections rotationAxis, const core::Ptr<JointGeometry>& geometry, const core::Ptr<core::Base>& customRotationAxisEntity)
{
    bool res = setAsRevoluteJointMotion_raw(rotationAxis, geometry.get(), customRotationAxisEntity.get());
    return res;
}

inline bool AsBuiltJoint::setAsSliderJointMotion(JointDirections sliderDirection, const core::Ptr<JointGeometry>& geometry, const core::Ptr<core::Base>& customSliderDirectionEntity)
{
    bool res = setAsSliderJointMotion_raw(sliderDirection, geometry.get(), customSliderDirectionEntity.get());
    return res;
}

inline bool AsBuiltJoint::setAsCylindricalJointMotion(JointDirections rotationAxis, const core::Ptr<JointGeometry>& geometry, const core::Ptr<core::Base>& customRotationAxisEntity)
{
    bool res = setAsCylindricalJointMotion_raw(rotationAxis, geometry.get(), customRotationAxisEntity.get());
    return res;
}

inline bool AsBuiltJoint::setAsPinSlotJointMotion(JointDirections rotationAxis, JointDirections slideDirection, const core::Ptr<JointGeometry>& geometry, const core::Ptr<core::Base>& customRotationAxisEntity, const core::Ptr<core::Base>& customSlideDirectionEntity)
{
    bool res = setAsPinSlotJointMotion_raw(rotationAxis, slideDirection, geometry.get(), customRotationAxisEntity.get(), customSlideDirectionEntity.get());
    return res;
}

inline bool AsBuiltJoint::setAsPlanarJointMotion(JointDirections normalDirection, const core::Ptr<JointGeometry>& geometry, const core::Ptr<core::Base>& customNormalDirectionEntity, const core::Ptr<core::Base>& customPrimarySlideDirection)
{
    bool res = setAsPlanarJointMotion_raw(normalDirection, geometry.get(), customNormalDirectionEntity.get(), customPrimarySlideDirection.get());
    return res;
}

inline bool AsBuiltJoint::setAsBallJointMotion(JointDirections pitchDirection, JointDirections yawDirection, const core::Ptr<JointGeometry>& geometry, const core::Ptr<core::Base>& customPitchDirection, const core::Ptr<core::Base>& customYawDirection)
{
    bool res = setAsBallJointMotion_raw(pitchDirection, yawDirection, geometry.get(), customPitchDirection.get(), customYawDirection.get());
    return res;
}

inline core::Ptr<AsBuiltJoint> AsBuiltJoint::nativeObject() const
{
    core::Ptr<AsBuiltJoint> res = nativeObject_raw();
    return res;
}

inline core::Ptr<AsBuiltJoint> AsBuiltJoint::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<AsBuiltJoint> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<Occurrence> AsBuiltJoint::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline bool AsBuiltJoint::isSuppressed() const
{
    bool res = isSuppressed_raw();
    return res;
}

inline bool AsBuiltJoint::isSuppressed(bool value)
{
    return isSuppressed_raw(value);
}

inline bool AsBuiltJoint::isLightBulbOn() const
{
    bool res = isLightBulbOn_raw();
    return res;
}

inline bool AsBuiltJoint::isLightBulbOn(bool value)
{
    return isLightBulbOn_raw(value);
}

inline bool AsBuiltJoint::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline core::Ptr<core::Attributes> AsBuiltJoint::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline std::string AsBuiltJoint::entityToken() const
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

inline core::Ptr<core::Matrix3D> AsBuiltJoint::transform() const
{
    core::Ptr<core::Matrix3D> res = transform_raw();
    return res;
}

inline std::vector<core::Ptr<MotionLink>> AsBuiltJoint::motionLinks() const
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

#undef ADSK_FUSION_ASBUILTJOINT_API