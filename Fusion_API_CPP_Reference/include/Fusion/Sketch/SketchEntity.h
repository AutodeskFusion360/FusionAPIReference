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
# ifdef __COMPILING_ADSK_FUSION_SKETCHENTITY_CPP__
# define ADSK_FUSION_SKETCHENTITY_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHENTITY_API
# endif
#else
# define ADSK_FUSION_SKETCHENTITY_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
    class BoundingBox3D;
}}
namespace adsk { namespace fusion {
    class GeometricConstraintList;
    class Occurrence;
    class Sketch;
    class SketchDimensionList;
}}

namespace adsk { namespace fusion {

/// This object represents all geometry in a sketch, including all
/// the various curves, points, and text.
class SketchEntity : public core::Base {
public:

    /// Returns the parent sketch.
    core::Ptr<Sketch> parentSketch() const;

    /// Returns the sketch dimensions that are attached to this curve.
    core::Ptr<SketchDimensionList> sketchDimensions() const;

    /// Returns the sketch constraints that are attached to this curve.
    core::Ptr<GeometricConstraintList> geometricConstraints() const;

    /// Indicates if this curve lies entirely on the sketch x-y plane.
    bool is2D() const;

    /// Indicates if this geometry is a reference.
    /// Changing this property from true to false removes the reference.
    /// This property can not be set to true if it is already false.
    bool isReference() const;
    bool isReference(bool value);

    /// Indicates if this geometry is "fixed".
    bool isFixed() const;
    bool isFixed(bool value);

    /// When a sketch is created, geometry is sometimes automatically added to the sketch.
    /// For example a sketch point that references the origin point is always included and
    /// if a face was selected to create the sketch on, geometry from the face is also included.
    /// This automatically created geometry behaves in a special way in that it is invisible
    /// but is available for selection and it also participates in profile calculations. It's
    /// not possible to make them visible but they can be deleted and they can be used for any
    /// other standard sketch operation.
    bool isVisible() const;

    /// Returns the bounding box of the entity in sketch space.
    core::Ptr<core::BoundingBox3D> boundingBox() const;

    /// Deletes the entity from the sketch.
    /// Returns true is the delete was successful.
    bool deleteMe();

    /// Returns the referenced entity in the case where IsReference
    /// is true. However, this property can also return null when
    /// IsReference is true in the case where the reference is not
    /// parametric.
    core::Ptr<core::Base> referencedEntity() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// Indicates if this sketch entity can be deleted. There are cases, especially with sketch
    /// points where another entity is dependent on an entity so deleting it is not allowed.
    /// For example, you can't delete the center point of circle by itself but deleting the circle
    /// will delete the point. The same is true for the end points of a line.
    bool isDeletable() const;

    /// Indicates if this sketch entity is fully constrained.
    bool isFullyConstrained() const;

    /// Returns the collection of attributes associated with this face.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns a token for the SketchEntity object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same sketch entity.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    /// Indicates if this sketch entity was created by a projection, inclusion, or driven by an API script.
    /// If this returns true, then the entity is presented to the user as not editable and with a 'break link'
    /// command available.
    bool isLinked() const;

    ADSK_FUSION_SKETCHENTITY_API static const char* classType();
    ADSK_FUSION_SKETCHENTITY_API const char* objectType() const override;
    ADSK_FUSION_SKETCHENTITY_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHENTITY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Sketch* parentSketch_raw() const = 0;
    virtual SketchDimensionList* sketchDimensions_raw() const = 0;
    virtual GeometricConstraintList* geometricConstraints_raw() const = 0;
    virtual bool is2D_raw() const = 0;
    virtual bool isReference_raw() const = 0;
    virtual bool isReference_raw(bool value) = 0;
    virtual bool isFixed_raw() const = 0;
    virtual bool isFixed_raw(bool value) = 0;
    virtual bool isVisible_raw() const = 0;
    virtual core::BoundingBox3D* boundingBox_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual core::Base* referencedEntity_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual bool isDeletable_raw() const = 0;
    virtual bool isFullyConstrained_raw() const = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
    virtual bool isLinked_raw() const = 0;
    virtual void placeholderSketchEntity0() {}
    virtual void placeholderSketchEntity1() {}
    virtual void placeholderSketchEntity2() {}
    virtual void placeholderSketchEntity3() {}
    virtual void placeholderSketchEntity4() {}
    virtual void placeholderSketchEntity5() {}
    virtual void placeholderSketchEntity6() {}
    virtual void placeholderSketchEntity7() {}
    virtual void placeholderSketchEntity8() {}
    virtual void placeholderSketchEntity9() {}
    virtual void placeholderSketchEntity10() {}
    virtual void placeholderSketchEntity11() {}
    virtual void placeholderSketchEntity12() {}
    virtual void placeholderSketchEntity13() {}
    virtual void placeholderSketchEntity14() {}
    virtual void placeholderSketchEntity15() {}
    virtual void placeholderSketchEntity16() {}
    virtual void placeholderSketchEntity17() {}
    virtual void placeholderSketchEntity18() {}
    virtual void placeholderSketchEntity19() {}
    virtual void placeholderSketchEntity20() {}
    virtual void placeholderSketchEntity21() {}
    virtual void placeholderSketchEntity22() {}
    virtual void placeholderSketchEntity23() {}
    virtual void placeholderSketchEntity24() {}
    virtual void placeholderSketchEntity25() {}
    virtual void placeholderSketchEntity26() {}
    virtual void placeholderSketchEntity27() {}
    virtual void placeholderSketchEntity28() {}
    virtual void placeholderSketchEntity29() {}
    virtual void placeholderSketchEntity30() {}
    virtual void placeholderSketchEntity31() {}
    virtual void placeholderSketchEntity32() {}
    virtual void placeholderSketchEntity33() {}
    virtual void placeholderSketchEntity34() {}
    virtual void placeholderSketchEntity35() {}
    virtual void placeholderSketchEntity36() {}
    virtual void placeholderSketchEntity37() {}
    virtual void placeholderSketchEntity38() {}
    virtual void placeholderSketchEntity39() {}
    virtual void placeholderSketchEntity40() {}
    virtual void placeholderSketchEntity41() {}
    virtual void placeholderSketchEntity42() {}
    virtual void placeholderSketchEntity43() {}
    virtual void placeholderSketchEntity44() {}
    virtual void placeholderSketchEntity45() {}
};

// Inline wrappers

inline core::Ptr<Sketch> SketchEntity::parentSketch() const
{
    core::Ptr<Sketch> res = parentSketch_raw();
    return res;
}

inline core::Ptr<SketchDimensionList> SketchEntity::sketchDimensions() const
{
    core::Ptr<SketchDimensionList> res = sketchDimensions_raw();
    return res;
}

inline core::Ptr<GeometricConstraintList> SketchEntity::geometricConstraints() const
{
    core::Ptr<GeometricConstraintList> res = geometricConstraints_raw();
    return res;
}

inline bool SketchEntity::is2D() const
{
    bool res = is2D_raw();
    return res;
}

inline bool SketchEntity::isReference() const
{
    bool res = isReference_raw();
    return res;
}

inline bool SketchEntity::isReference(bool value)
{
    return isReference_raw(value);
}

inline bool SketchEntity::isFixed() const
{
    bool res = isFixed_raw();
    return res;
}

inline bool SketchEntity::isFixed(bool value)
{
    return isFixed_raw(value);
}

inline bool SketchEntity::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline core::Ptr<core::BoundingBox3D> SketchEntity::boundingBox() const
{
    core::Ptr<core::BoundingBox3D> res = boundingBox_raw();
    return res;
}

inline bool SketchEntity::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<core::Base> SketchEntity::referencedEntity() const
{
    core::Ptr<core::Base> res = referencedEntity_raw();
    return res;
}

inline core::Ptr<Occurrence> SketchEntity::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline bool SketchEntity::isDeletable() const
{
    bool res = isDeletable_raw();
    return res;
}

inline bool SketchEntity::isFullyConstrained() const
{
    bool res = isFullyConstrained_raw();
    return res;
}

inline core::Ptr<core::Attributes> SketchEntity::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline std::string SketchEntity::entityToken() const
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

inline bool SketchEntity::isLinked() const
{
    bool res = isLinked_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHENTITY_API