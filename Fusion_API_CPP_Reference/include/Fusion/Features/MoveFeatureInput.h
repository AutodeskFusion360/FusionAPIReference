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
# ifdef __COMPILING_ADSK_FUSION_MOVEFEATUREINPUT_CPP__
# define ADSK_FUSION_MOVEFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_MOVEFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_MOVEFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a move feature.
class MoveFeatureInput : public core::Base {
public:

    /// An ObjectCollection containing the objects to move. The collection can contain
    /// BRepBody or BRepFace objects but not a mixture of the two types.
    core::Ptr<core::ObjectCollection> inputEntities() const;
    bool inputEntities(const core::Ptr<core::ObjectCollection>& value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the transform to apply to the input entities. This can describe a move (translation)
    /// or a rotation. The matrix must define an orthogonal transform. That is the axes remain
    /// perpendicular to each other and there isn't any scale or mirror defined.
    core::Ptr<core::Matrix3D> transform() const;
    bool transform(const core::Ptr<core::Matrix3D>& value);

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

    /// This method will define a move feature whose translation and orientation
    /// is defined using a transformation matrix. A matrix can define any translation and
    /// orientation.
    /// transform : The transformation matrix that defines the transform to apply. The matrix must
    /// be an orthogonal matrix; that is the axes are perpendicular to each other
    /// and there isn't any scaling or mirroring defined.
    /// Returns true if defining the type of move is successful.
    bool defineAsFreeMove(const core::Ptr<core::Matrix3D>& transform);

    /// This method will define a move feature that defines a translation in X, Y, and Z.
    /// xDistance : A ValueInput object that defines the offset in the X direction. If the ValueInput
    /// is created using a real value, the distance is in centimeters. If it's defined using
    /// a string, the default document units are used.
    /// yDistance : A ValueInput object that defines the offset in the Y direction. If the ValueInput
    /// is created using a real value, the distance is in centimeters. If it's defined using
    /// a string, the default document units are used.
    /// zDistance : A ValueInput object that defines the offset in the Z direction. If the ValueInput
    /// is created using a real value, the distance is in centimeters. If it's defined using
    /// a string, the default document units are used.
    /// isDesignSpace : Defines if the translation is defined with respect to the design or component space.
    /// Design space is the same as the root component space.
    /// Returns true if defining the type of move is successful.
    bool defineAsTranslateXYZ(const core::Ptr<core::ValueInput>& xDistance, const core::Ptr<core::ValueInput>& yDistance, const core::Ptr<core::ValueInput>& zDistance, bool isDesignSpace);

    /// This method will define a move feature that defines a translation along a specified entity.
    /// linearEntity : A linear entity that defines the direction of the move. This can be a linear BRepEdge,
    /// ConstructionAxis, or a SketchLine. The entity defines the direction, not the distance.
    /// The natural direction of the entity defines the translation direction.
    /// distance : A ValueInput object that defines the offset distance. If the ValueInput
    /// is created using a real value, the distance is in centimeters. If it's defined using
    /// a string, the default document units are used.
    /// Returns true if defining the type of move is successful.
    bool defineAsTranslateAlongEntity(const core::Ptr<core::Base>& linearEntity, const core::Ptr<core::ValueInput>& distance);

    /// This method defines a move feature that is described by an axis and rotation angle.
    /// axisEntity : A linear entity that defines the axis of rotation. This can be a linear BRepEdge,
    /// ConstructionAxis, or a SketchLine. The natural direction of the entity defines a
    /// right-hand rule for the rotation direction.
    /// angle : A ValueInput object that defines the rotation angle. If the ValueInput
    /// is created using a real value, the angle is in radians. If it's defined using
    /// a string, the default document units will be used.
    /// Returns true if defining the type of move is successful.
    bool defineAsRotate(const core::Ptr<core::Base>& axisEntity, const core::Ptr<core::ValueInput>& angle);

    /// This method defines a move feature described by a translation from one point to another.
    /// originPoint : The first point that defines the start position of the move.
    /// targetPoint : The second point that defines the direction and distance of the move.
    /// Returns true if defining the type of move is successful.
    bool defineAsPointToPoint(const core::Ptr<core::Base>& originPoint, const core::Ptr<core::Base>& targetPoint);

    /// This method defines a move feature described by a point and an offset. The distances
    /// define offsets in the X, Y, and Z directions in either design or component space. To
    /// not move the input entities at all the offset distances should be set to the current
    /// location of the point in either design or component space. Adding or subtracting to
    /// those values will then move the entities that distance. It's best to experiment with
    /// the command interactively to understand the behavior.
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
    /// Returns true if defining the type of move is successful.
    bool defineAsPointToPosition(const core::Ptr<core::Base>& point, const core::Ptr<core::ValueInput>& xDistance, const core::Ptr<core::ValueInput>& yDistance, const core::Ptr<core::ValueInput>& zDistance, bool isDesignSpace);

    ADSK_FUSION_MOVEFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_MOVEFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_MOVEFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MOVEFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* inputEntities_raw() const = 0;
    virtual bool inputEntities_raw(core::ObjectCollection* value) = 0;
    virtual core::Matrix3D* transform_raw() const = 0;
    virtual bool transform_raw(core::Matrix3D* value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual bool defineAsFreeMove_raw(core::Matrix3D* transform) = 0;
    virtual bool defineAsTranslateXYZ_raw(core::ValueInput* xDistance, core::ValueInput* yDistance, core::ValueInput* zDistance, bool isDesignSpace) = 0;
    virtual bool defineAsTranslateAlongEntity_raw(core::Base* linearEntity, core::ValueInput* distance) = 0;
    virtual bool defineAsRotate_raw(core::Base* axisEntity, core::ValueInput* angle) = 0;
    virtual bool defineAsPointToPoint_raw(core::Base* originPoint, core::Base* targetPoint) = 0;
    virtual bool defineAsPointToPosition_raw(core::Base* point, core::ValueInput* xDistance, core::ValueInput* yDistance, core::ValueInput* zDistance, bool isDesignSpace) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> MoveFeatureInput::inputEntities() const
{
    core::Ptr<core::ObjectCollection> res = inputEntities_raw();
    return res;
}

inline bool MoveFeatureInput::inputEntities(const core::Ptr<core::ObjectCollection>& value)
{
    return inputEntities_raw(value.get());
}

inline core::Ptr<core::Matrix3D> MoveFeatureInput::transform() const
{
    core::Ptr<core::Matrix3D> res = transform_raw();
    return res;
}

inline bool MoveFeatureInput::transform(const core::Ptr<core::Matrix3D>& value)
{
    return transform_raw(value.get());
}

inline core::Ptr<BaseFeature> MoveFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool MoveFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline bool MoveFeatureInput::defineAsFreeMove(const core::Ptr<core::Matrix3D>& transform)
{
    bool res = defineAsFreeMove_raw(transform.get());
    return res;
}

inline bool MoveFeatureInput::defineAsTranslateXYZ(const core::Ptr<core::ValueInput>& xDistance, const core::Ptr<core::ValueInput>& yDistance, const core::Ptr<core::ValueInput>& zDistance, bool isDesignSpace)
{
    bool res = defineAsTranslateXYZ_raw(xDistance.get(), yDistance.get(), zDistance.get(), isDesignSpace);
    return res;
}

inline bool MoveFeatureInput::defineAsTranslateAlongEntity(const core::Ptr<core::Base>& linearEntity, const core::Ptr<core::ValueInput>& distance)
{
    bool res = defineAsTranslateAlongEntity_raw(linearEntity.get(), distance.get());
    return res;
}

inline bool MoveFeatureInput::defineAsRotate(const core::Ptr<core::Base>& axisEntity, const core::Ptr<core::ValueInput>& angle)
{
    bool res = defineAsRotate_raw(axisEntity.get(), angle.get());
    return res;
}

inline bool MoveFeatureInput::defineAsPointToPoint(const core::Ptr<core::Base>& originPoint, const core::Ptr<core::Base>& targetPoint)
{
    bool res = defineAsPointToPoint_raw(originPoint.get(), targetPoint.get());
    return res;
}

inline bool MoveFeatureInput::defineAsPointToPosition(const core::Ptr<core::Base>& point, const core::Ptr<core::ValueInput>& xDistance, const core::Ptr<core::ValueInput>& yDistance, const core::Ptr<core::ValueInput>& zDistance, bool isDesignSpace)
{
    bool res = defineAsPointToPosition_raw(point.get(), xDistance.get(), yDistance.get(), zDistance.get(), isDesignSpace);
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MOVEFEATUREINPUT_API