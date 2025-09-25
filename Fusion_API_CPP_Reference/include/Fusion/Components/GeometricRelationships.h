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
# ifdef __COMPILING_ADSK_FUSION_GEOMETRICRELATIONSHIPS_CPP__
# define ADSK_FUSION_GEOMETRICRELATIONSHIPS_API XI_EXPORT
# else
# define ADSK_FUSION_GEOMETRICRELATIONSHIPS_API
# endif
#else
# define ADSK_FUSION_GEOMETRICRELATIONSHIPS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class GeometricRelationship;
}}

namespace adsk { namespace fusion {

/// This object represents a set of geometry relationships. They are used when creating a new inferred
/// joint or assembly constraint and querying an existing one.
class GeometricRelationships : public core::Base {
public:

    /// Function that returns the specified GeometricRelationship using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<GeometricRelationship> item(size_t index) const;

    /// Creates a GeometricRelationship object, which defines two entities that will be used to either infer
    /// a joint or to create an assembly constraint.
    /// entityOne : Specifies the entity from the first occurrence being constrained. The entity can be a BRepFace, BRepEdge,
    /// BRepVertex ,SketchLine, SketchPoint, ConstructionPlane, ConstructionAxis, or ConstructionPoint object in the
    /// component referenced by the occurrence. It must be a proxy relative to the root component of the assembly.
    /// 
    /// For an inferred joint, if multiple geometric relationships are created, the entities for entityOne must all
    /// be from the same occurrence.This is because a single joint will be inferred between the two occurrences.
    /// 
    /// For an assembly constraint, if multiple geometric relationships are created, the entities for entityOne must
    /// all be from the same occurrence. This is because all the geometric relationships constrain the occurrence
    /// this entity is from.
    /// entityTwo : Specifies the entity from the second occurrence being constrained. The entity can be a BRepFace, BRepEdge,
    /// BRepVertex, SketchLine, SketchPoint, ConstructionPlane, ConstructionAxis, or ConstructionPoint object in the
    /// component referenced by the occurrence. It must be a proxy relative to the root component of the assembly.
    /// 
    /// For an inferred joint, if multiple geometric relationships are created, the entities for entityTwo must all
    /// be from the same occurrence. This is because a single joint will be inferred between the two occurrences.
    /// 
    /// For an assembly constraint, if multiple geometric relationships are created, the entities for entityTwo must
    /// all be from the same occurrence. This is because all the geometric relationships constrain the occurrence
    /// this entity is from.
    /// isMate : Specifies if this geometric relationship defines a mate or an angle between the two input entities.
    /// If true, it defines a mate; if false, it is an angle.
    /// value : Specifies the value associated with the geometric relationship. If isMate is true, the value is a length,
    /// and a real value in centimeters. If it is a string, it is an expression that must evaluate to a length.
    /// If the isMate argument is False, the value is an angle, and a real value in radians. If it is a string,
    /// it is an expression that must evaluate to an angle.
    /// biasPointOne : This optional argument defines a position on the first entity that will be used when positioning the two
    /// occurrences. In the user interface, if you select two faces and create an inferred joint, the two faces
    /// will be used to mate the occurrences together. Still, there are infinite possibilities of how the
    /// occurrences can be positioned relative to one another. The location of the selection points is used
    /// to determine a single result, and the occurrences will be positioned so that the selection points are
    /// coincident. There aren't selection points in the API, but you can optionally define points that will
    /// be used, like the selection points. Fusion will calculate arbitrary points on the entities if the
    /// bias points aren't provided. The bias points are not remembered and are only used for the initial placement.
    /// biasPointTwo : See the description for biasPointOne.
    /// Returns the GeometricRelationship object or null if the creation failed.
    core::Ptr<GeometricRelationship> add(const core::Ptr<core::Base>& entityOne, const core::Ptr<core::Base>& entityTwo, bool isMate, const core::Ptr<core::ValueInput>& value, const core::Ptr<core::Point3D>& biasPointOne = NULL, const core::Ptr<core::Point3D>& biasPointTwo = NULL);

    /// Returns number of geometric relationships in the collection.
    size_t count() const;

    typedef GeometricRelationship iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_GEOMETRICRELATIONSHIPS_API static const char* classType();
    ADSK_FUSION_GEOMETRICRELATIONSHIPS_API const char* objectType() const override;
    ADSK_FUSION_GEOMETRICRELATIONSHIPS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_GEOMETRICRELATIONSHIPS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual GeometricRelationship* item_raw(size_t index) const = 0;
    virtual GeometricRelationship* add_raw(core::Base* entityOne, core::Base* entityTwo, bool isMate, core::ValueInput* value, core::Point3D* biasPointOne, core::Point3D* biasPointTwo) = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<GeometricRelationship> GeometricRelationships::item(size_t index) const
{
    core::Ptr<GeometricRelationship> res = item_raw(index);
    return res;
}

inline core::Ptr<GeometricRelationship> GeometricRelationships::add(const core::Ptr<core::Base>& entityOne, const core::Ptr<core::Base>& entityTwo, bool isMate, const core::Ptr<core::ValueInput>& value, const core::Ptr<core::Point3D>& biasPointOne, const core::Ptr<core::Point3D>& biasPointTwo)
{
    core::Ptr<GeometricRelationship> res = add_raw(entityOne.get(), entityTwo.get(), isMate, value.get(), biasPointOne.get(), biasPointTwo.get());
    return res;
}

inline size_t GeometricRelationships::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void GeometricRelationships::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_GEOMETRICRELATIONSHIPS_API