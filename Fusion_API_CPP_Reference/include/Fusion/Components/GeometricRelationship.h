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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_GEOMETRICRELATIONSHIP_CPP__
# define ADSK_FUSION_GEOMETRICRELATIONSHIP_API XI_EXPORT
# else
# define ADSK_FUSION_GEOMETRICRELATIONSHIP_API
# endif
#else
# define ADSK_FUSION_GEOMETRICRELATIONSHIP_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// This object represents a pair of entity inputs that are used when inferring a joint from geometry
/// or for an assembly constraint.
class GeometricRelationship : public core::Base {
public:

    /// Gets and sets if this relationship is suppressed. This property is only valid when this geometric
    /// relationship is associated with an existing AssemblyConstraint. Otherwise, getting the value of
    /// this property will always return false, and setting it will be ignored.
    bool isSuppressed() const;
    bool isSuppressed(bool value);

    /// Returns the name of the constraint as seen in the browser. This property will only return a name
    /// when the geometric relationship is associated with an existing AssemblyConstraint or inferred
    /// Joint (the isTemporary property is false). Otherwise, it will return an empty string.
    std::string name() const;

    /// Gets and sets the first entity in the relationship. The entity can be a BRepFace, BRepedge,
    /// BRepVertex, SketchPoint, SketchCurve, ConstructionPlane, ConstructionAxis, or ConstructionPoint object.
    /// 
    /// If the GeometricRelationship is associated with an existing joint or assembly constraint
    /// (the isTemporary property is false), you need to position the timeline marker immediately
    /// before the joint or assembly constraint. This can be accomplished using the following code:
    /// thisJointOrConstraint.timelineObject.rollTo(True).
    core::Ptr<core::Base> entityOne() const;
    bool entityOne(const core::Ptr<core::Base>& value);

    /// Gets and sets the second entity in the relationship. The entity can be a BRepFace, BRepedge,
    /// BRepVertex, SketchPoint, SketchCurve, ConstructionPlane, ConstructionAxis, or ConstructionPoint object.
    /// 
    /// If the GeometricRelationship is associated with an existing joint or assembly constraint
    /// (the isTemporary property is false), you need to position the timeline marker immediately
    /// before the joint or assembly constraint. This can be accomplished using the following code:
    /// thisJointOrConstraint.timelineObject.rollTo(True).
    core::Ptr<core::Base> entityTwo() const;
    bool entityTwo(const core::Ptr<core::Base>& value);

    /// Gets and sets if the directions of the entities are aligned or opposed. The natural direction
    /// is for them to be opposed, and flipping them will align them.
    /// 
    /// If the GeometricRelationship is associated with an existing joint or assembly constraint
    /// (the isTemporary property is false), you need to position the timeline marker immediately
    /// before the joint or assembly constraint. This can be accomplished using the following code:
    /// thisJointOrConstraint.timelineObject.rollTo(True).
    bool isFlipped() const;
    bool isFlipped(bool value);

    /// Gets and sets if this geometric relationships defines a mate or angle relationship between
    /// the two input entities. If true, it is a mate relationship.
    bool isMate() const;

    /// This method redefines an existing geometric relationship by defining if it is a mate or
    /// angle and specifying a new value.
    /// 
    /// If the GeometricRelationship is associated with an existing joint or assembly constraint
    /// (the isTemporary property is false), you need to position the timeline marker immediately
    /// before the joint or assembly constraint. This can be accomplished using the following code:
    /// thisJointOrConstraint.timelineObject.rollTo(True).
    /// isMate : This argument indicates if the geometric relationship defines a mate or an angle. A value
    /// of true indicates a mate relationship.
    /// offsetOrAngleValue : This argument specifies the value associated with the geometric relationship. If isMate
    /// is true, the value is a length, and if it is a real value, then it is centimeters. If it
    /// is a string, it is an expression that must evaluate to a length. If isMate is False,
    /// the value is an angle, and if it is a real value, then it is radians. If it is a string,
    /// it is an expression that must evaluate to an angle.
    /// Returns true if the redefinition was successful.
    bool redefineOffsetOrAngle(bool isMate, const core::Ptr<core::ValueInput>& offsetOrAngleValue);

    /// This property is used when creating a new joint or assembly constraint and defines the
    /// offset or angle associated with this geometric relationship. The value defaults to 0,
    /// but can be set with a ValueInput defining a length or angle. It can be either a real
    /// value, which will be in centimeters or radians, or a string, which is an expression
    /// whose units are length or angle.
    /// 
    /// If the GeometricRelationship is associated with an existing joint or assembly constraint
    /// (the isTemporary property is false), this property will return null and fail if set. To
    /// get and set the value in this case you should use the offsetOrAngle property to access
    /// the controlling parameter.
    core::Ptr<core::ValueInput> offsetOrAngleValue() const;
    bool offsetOrAngleValue(const core::Ptr<core::ValueInput>& value);

    /// This property is used when the geometric relationship is associated with an existing joint
    /// or assembly constraint (the isTemporary property is false). It returns the parameter that
    /// controls the offset or angle of this geometric relationship. You can change the value
    /// by editing properties on the returned ModelParameter object.
    /// 
    /// If this geometric relationship is associated with a JointInput object (the isTemporary
    /// property is true), this property returns null, and you should use the offsetOrAngleValue
    /// property to get and set the value.
    core::Ptr<ModelParameter> offsetOrAngle() const;

    /// This method deletes this geometric relationship.
    /// 
    /// If the isTemporary property is True, it removes it from the input object.
    /// 
    /// If the GeometricRelationship is associated with an existing joint or assembly constraint
    /// (the isTemporary property is false), you need to position the timeline marker immediately
    /// before the joint or assembly constraint. This can be accomplished using the following code:
    /// thisJointOrConstraint.timelineObject.rollTo(True).
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// Returns the parent AssemblyConstraint, Joint, InferredJointInput, or  AssemblyConstraintInput
    /// object with which this geometric relationship is associated.
    core::Ptr<core::Base> parent() const;

    /// Specifies if this GeometricRelationship is a child of an input object is being used to create a
    /// new Joint or AssemblyConstraint or is being used by an existing Joint or AssemblyConstraint.
    bool isTemporary() const;

    /// This property is used to define a third vector when an angle constraint is being defined.
    /// This property is ignored for mate constraints.
    /// 
    /// In some cases, when specifying entityOne and entityTwo for an angle constraint there
    /// is more than one solution. When the constraint is solved, entityOne and entityTwo each define
    /// a vector. When the reference entity is provided, the vectors need to follow the "right hand rule"
    /// with respect to the reference entity. This means the angle between the reference entity and the
    /// cross product of entityOne and entityTwo should be between 0 and 90 deg.
    /// 
    /// The reference entity can be a planar BRepFace or a linear or circular BRepedge.
    /// 
    /// This property can return and be set to null to indicate there is no reference entity.
    core::Ptr<core::Base> angleReferenceEntity() const;
    bool angleReferenceEntity(const core::Ptr<core::Base>& value);

    ADSK_FUSION_GEOMETRICRELATIONSHIP_API static const char* classType();
    ADSK_FUSION_GEOMETRICRELATIONSHIP_API const char* objectType() const override;
    ADSK_FUSION_GEOMETRICRELATIONSHIP_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_GEOMETRICRELATIONSHIP_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isSuppressed_raw() const = 0;
    virtual bool isSuppressed_raw(bool value) = 0;
    virtual char* name_raw() const = 0;
    virtual core::Base* entityOne_raw() const = 0;
    virtual bool entityOne_raw(core::Base* value) = 0;
    virtual core::Base* entityTwo_raw() const = 0;
    virtual bool entityTwo_raw(core::Base* value) = 0;
    virtual bool isFlipped_raw() const = 0;
    virtual bool isFlipped_raw(bool value) = 0;
    virtual bool isMate_raw() const = 0;
    virtual bool redefineOffsetOrAngle_raw(bool isMate, core::ValueInput* offsetOrAngleValue) = 0;
    virtual core::ValueInput* offsetOrAngleValue_raw() const = 0;
    virtual bool offsetOrAngleValue_raw(core::ValueInput* value) = 0;
    virtual ModelParameter* offsetOrAngle_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual core::Base* parent_raw() const = 0;
    virtual bool isTemporary_raw() const = 0;
    virtual core::Base* angleReferenceEntity_raw() const = 0;
    virtual bool angleReferenceEntity_raw(core::Base* value) = 0;
};

// Inline wrappers

inline bool GeometricRelationship::isSuppressed() const
{
    bool res = isSuppressed_raw();
    return res;
}

inline bool GeometricRelationship::isSuppressed(bool value)
{
    return isSuppressed_raw(value);
}

inline std::string GeometricRelationship::name() const
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

inline core::Ptr<core::Base> GeometricRelationship::entityOne() const
{
    core::Ptr<core::Base> res = entityOne_raw();
    return res;
}

inline bool GeometricRelationship::entityOne(const core::Ptr<core::Base>& value)
{
    return entityOne_raw(value.get());
}

inline core::Ptr<core::Base> GeometricRelationship::entityTwo() const
{
    core::Ptr<core::Base> res = entityTwo_raw();
    return res;
}

inline bool GeometricRelationship::entityTwo(const core::Ptr<core::Base>& value)
{
    return entityTwo_raw(value.get());
}

inline bool GeometricRelationship::isFlipped() const
{
    bool res = isFlipped_raw();
    return res;
}

inline bool GeometricRelationship::isFlipped(bool value)
{
    return isFlipped_raw(value);
}

inline bool GeometricRelationship::isMate() const
{
    bool res = isMate_raw();
    return res;
}

inline bool GeometricRelationship::redefineOffsetOrAngle(bool isMate, const core::Ptr<core::ValueInput>& offsetOrAngleValue)
{
    bool res = redefineOffsetOrAngle_raw(isMate, offsetOrAngleValue.get());
    return res;
}

inline core::Ptr<core::ValueInput> GeometricRelationship::offsetOrAngleValue() const
{
    core::Ptr<core::ValueInput> res = offsetOrAngleValue_raw();
    return res;
}

inline bool GeometricRelationship::offsetOrAngleValue(const core::Ptr<core::ValueInput>& value)
{
    return offsetOrAngleValue_raw(value.get());
}

inline core::Ptr<ModelParameter> GeometricRelationship::offsetOrAngle() const
{
    core::Ptr<ModelParameter> res = offsetOrAngle_raw();
    return res;
}

inline bool GeometricRelationship::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<core::Base> GeometricRelationship::parent() const
{
    core::Ptr<core::Base> res = parent_raw();
    return res;
}

inline bool GeometricRelationship::isTemporary() const
{
    bool res = isTemporary_raw();
    return res;
}

inline core::Ptr<core::Base> GeometricRelationship::angleReferenceEntity() const
{
    core::Ptr<core::Base> res = angleReferenceEntity_raw();
    return res;
}

inline bool GeometricRelationship::angleReferenceEntity(const core::Ptr<core::Base>& value)
{
    return angleReferenceEntity_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_GEOMETRICRELATIONSHIP_API