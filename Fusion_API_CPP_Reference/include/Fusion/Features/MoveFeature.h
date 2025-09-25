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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MOVEFEATURE_CPP__
# define ADSK_FUSION_MOVEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_MOVEFEATURE_API
# endif
#else
# define ADSK_FUSION_MOVEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class MoveFeatureDefinition;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing move feature in a design.
class MoveFeature : public Feature {
public:

    /// Gets and sets the entities to move. This is done by using an ObjectCollection
    /// containing the objects to move. For a parametric model, the collection can contain
    /// BRepBody or BRepFace objects but not a combination of both.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> inputEntities() const;
    bool inputEntities(const core::Ptr<core::ObjectCollection>& value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the move transform of the input bodies or faces.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Matrix3D> transform() const;
    bool transform(const core::Ptr<core::Matrix3D>& value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<MoveFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<MoveFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the MoveFeatureDefinition object which provides access to the information
    /// that specifies how this MoveFeature is defined.
    core::Ptr<MoveFeatureDefinition> definition() const;

    /// Redefines the move feature to be described by an arbitrary translation and orientation
    /// which is defined using a transformation matrix.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// transform : The transformation matrix that defines the transform to apply. The matrix must
    /// be an orthogonal matrix; that is the axes are perpendicular to each other
    /// and there isn't any scaling or mirroring defined.
    /// Returns true if the re-definition is successful.
    bool redefineAsFreeMove(const core::Ptr<core::Matrix3D>& transform);

    /// Redefines the move feature to be described by a translation in X, Y, and Z.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// xDistance : A ValueInput object that defines the offset in the X direction. If the ValueInput
    /// is created using a real value, the distance is in centimeters. If it's defined using
    /// a string, the default document units will be used.
    /// yDistance : A ValueInput object that defines the offset in the Y direction. If the ValueInput
    /// is created using a real value, the distance is in centimeters. If it's defined using
    /// a string, the default document units will be used.
    /// zDistance : A ValueInput object that defines the offset in the Z direction. If the ValueInput
    /// is created using a real value, the distance is in centimeters. If it's defined using
    /// a string, the default document units will be used.
    /// isDesignSpace : Defines if the translation is defined with respect to the design or component space.
    /// Design space is the same as the root component space.
    /// Returns true if the re-definition is successful.
    bool redefineAsTranslateXYZ(const core::Ptr<core::ValueInput>& xDistance, const core::Ptr<core::ValueInput>& yDistance, const core::Ptr<core::ValueInput>& zDistance, bool isDesignSpace);

    /// Redefines the move feature to be a translation along a specified entity.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// linearEntity : A linear entity that defines the direction of the move. This can be a linear BRepEdge,
    /// ConstructionAxis, or a SketchLine. The entity defines the direction, not the distance.
    /// The natural direction of the entity defines the translation direction.
    /// distance : A ValueInput object that defines the offset distance. If the ValueInput
    /// is created using a real value, the distance is in centimeters. If it's defined using
    /// a string, the default document units will be used.
    /// Returns true if the redefinition is successful.
    bool redefineAsTranslateAlongEntity(const core::Ptr<core::Base>& linearEntity, const core::Ptr<core::ValueInput>& distance);

    /// Redefines the move feature to be described by an axis and rotation angle.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// axisEntity : A linear entity that defines the axis of rotation. This can be a linear BRepEdge,
    /// ConstructionAxis, or a SketchLine. The natural direction of the entity defines a
    /// right-hand rule for the rotation direction.
    /// angle : A ValueInput object that defines the rotation angle. If the ValueInput
    /// is created using a real value, the angle is in radians. If it's defined using
    /// a string, the default document units will be used.
    /// Returns true if the redefinition is successful.
    bool redefineAsRotate(const core::Ptr<core::Base>& axisEntity, const core::Ptr<core::ValueInput>& angle);

    /// Redefines the move feature to be a translation from one point to another.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// originPoint : The first point that defines the start position of the move.
    /// targetPoint : The second point that defines the direction and distance of the move.
    /// Returns true if the redefinition is successful.
    bool redefineAsPointToPoint(const core::Ptr<core::Base>& originPoint, const core::Ptr<core::Base>& targetPoint);

    /// Redefines a move feature to be described by a point and an offset. The distances
    /// define offsets in the X, Y, and Z directions in either design or component space. To
    /// not move the input entities at all the offset distances should be set to the current
    /// location of the point in either design or component space. Adding or subtracting to
    /// those values will then move the entities that distance. It's best to experiment with
    /// the command interactively to understand the behavior.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// point : An entity that defines a point in space. This can be a sketch point, a construction point,
    /// or a BRepVertex.
    /// xDistance : A ValueInput object that defines the offset in the X direction. If the ValueInput
    /// is created using a real value, the distance is in centimeters. If it's defined using
    /// a string, the default document units will be used.
    /// yDistance : A ValueInput object that defines the offset in the Y direction. If the ValueInput
    /// is created using a real value, the distance is in centimeters. If it's defined using
    /// a string, the default document units will be used.
    /// zDistance : A ValueInput object that defines the offset in the Z direction. If the ValueInput
    /// is created using a real value, the distance is in centimeters. If it's defined using
    /// a string, the default document units will be used.
    /// isDesignSpace : Defines if the translation is defined with respect to the design or component space.
    /// Design space is the same as the root component space.
    /// Returns true if the redefinition is successful.
    bool redefineAsPointToPosition(const core::Ptr<core::Base>& point, const core::Ptr<core::ValueInput>& xDistance, const core::Ptr<core::ValueInput>& yDistance, const core::Ptr<core::ValueInput>& zDistance, bool isDesignSpace);

    ADSK_FUSION_MOVEFEATURE_API static const char* classType();
    ADSK_FUSION_MOVEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_MOVEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MOVEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* inputEntities_raw() const = 0;
    virtual bool inputEntities_raw(core::ObjectCollection* value) = 0;
    virtual core::Matrix3D* transform_raw() const = 0;
    virtual bool transform_raw(core::Matrix3D* value) = 0;
    virtual MoveFeature* nativeObject_raw() const = 0;
    virtual MoveFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual MoveFeatureDefinition* definition_raw() const = 0;
    virtual bool redefineAsFreeMove_raw(core::Matrix3D* transform) = 0;
    virtual bool redefineAsTranslateXYZ_raw(core::ValueInput* xDistance, core::ValueInput* yDistance, core::ValueInput* zDistance, bool isDesignSpace) = 0;
    virtual bool redefineAsTranslateAlongEntity_raw(core::Base* linearEntity, core::ValueInput* distance) = 0;
    virtual bool redefineAsRotate_raw(core::Base* axisEntity, core::ValueInput* angle) = 0;
    virtual bool redefineAsPointToPoint_raw(core::Base* originPoint, core::Base* targetPoint) = 0;
    virtual bool redefineAsPointToPosition_raw(core::Base* point, core::ValueInput* xDistance, core::ValueInput* yDistance, core::ValueInput* zDistance, bool isDesignSpace) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> MoveFeature::inputEntities() const
{
    core::Ptr<core::ObjectCollection> res = inputEntities_raw();
    return res;
}

inline bool MoveFeature::inputEntities(const core::Ptr<core::ObjectCollection>& value)
{
    return inputEntities_raw(value.get());
}

inline core::Ptr<core::Matrix3D> MoveFeature::transform() const
{
    core::Ptr<core::Matrix3D> res = transform_raw();
    return res;
}

inline bool MoveFeature::transform(const core::Ptr<core::Matrix3D>& value)
{
    return transform_raw(value.get());
}

inline core::Ptr<MoveFeature> MoveFeature::nativeObject() const
{
    core::Ptr<MoveFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<MoveFeature> MoveFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<MoveFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<MoveFeatureDefinition> MoveFeature::definition() const
{
    core::Ptr<MoveFeatureDefinition> res = definition_raw();
    return res;
}

inline bool MoveFeature::redefineAsFreeMove(const core::Ptr<core::Matrix3D>& transform)
{
    bool res = redefineAsFreeMove_raw(transform.get());
    return res;
}

inline bool MoveFeature::redefineAsTranslateXYZ(const core::Ptr<core::ValueInput>& xDistance, const core::Ptr<core::ValueInput>& yDistance, const core::Ptr<core::ValueInput>& zDistance, bool isDesignSpace)
{
    bool res = redefineAsTranslateXYZ_raw(xDistance.get(), yDistance.get(), zDistance.get(), isDesignSpace);
    return res;
}

inline bool MoveFeature::redefineAsTranslateAlongEntity(const core::Ptr<core::Base>& linearEntity, const core::Ptr<core::ValueInput>& distance)
{
    bool res = redefineAsTranslateAlongEntity_raw(linearEntity.get(), distance.get());
    return res;
}

inline bool MoveFeature::redefineAsRotate(const core::Ptr<core::Base>& axisEntity, const core::Ptr<core::ValueInput>& angle)
{
    bool res = redefineAsRotate_raw(axisEntity.get(), angle.get());
    return res;
}

inline bool MoveFeature::redefineAsPointToPoint(const core::Ptr<core::Base>& originPoint, const core::Ptr<core::Base>& targetPoint)
{
    bool res = redefineAsPointToPoint_raw(originPoint.get(), targetPoint.get());
    return res;
}

inline bool MoveFeature::redefineAsPointToPosition(const core::Ptr<core::Base>& point, const core::Ptr<core::ValueInput>& xDistance, const core::Ptr<core::ValueInput>& yDistance, const core::Ptr<core::ValueInput>& zDistance, bool isDesignSpace)
{
    bool res = redefineAsPointToPosition_raw(point.get(), xDistance.get(), yDistance.get(), zDistance.get(), isDesignSpace);
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MOVEFEATURE_API