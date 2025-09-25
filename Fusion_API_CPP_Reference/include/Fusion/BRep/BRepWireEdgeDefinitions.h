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
# ifdef __COMPILING_ADSK_FUSION_BREPWIREEDGEDEFINITIONS_CPP__
# define ADSK_FUSION_BREPWIREEDGEDEFINITIONS_API XI_EXPORT
# else
# define ADSK_FUSION_BREPWIREEDGEDEFINITIONS_API
# endif
#else
# define ADSK_FUSION_BREPWIREEDGEDEFINITIONS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Curve3D;
}}
namespace adsk { namespace fusion {
    class BRepVertexDefinition;
    class BRepWireEdgeDefinition;
}}

namespace adsk { namespace fusion {

/// A collection of BRepWireEdgeDefinition objects. Using this collection you can create new
/// BRepWireDefinition objects to full define a wire body.
class BRepWireEdgeDefinitions : public core::Base {
public:

    /// Function that returns the specified BRepWireEdgeDefinition object using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<BRepWireEdgeDefinition> item(size_t index) const;

    /// The number of B-Rep wire edge definition objects in the collection.
    size_t count() const;

    /// Creates a new BRepWireEdgeDefinition object associated with the parent BRepWireDefinition object.
    /// startVertex : Vertex definition that defines the start of the edge. For a closed curve, like a circle, you still
    /// need to provide a vertex on the curve but should use the same BRepVertexDefinition for both the start and end vertices.
    /// endVertex : Vertex definition that defines the end of the edge. For a closed curve, like a circle, this should be the
    /// same vertex as used for the start vertex.
    /// modelSpaceCurve : A Curve3D object that defines the shape of the edge using 3D geometry in model space.
    /// Valid input is an Arc3D, NurbsCurve3D, Circle3D, Ellipse3D, EllipticalArc3D, or Line3D.
    /// Returns the newly created BRepWireEdgeDefinition object or null in the case of failure.
    core::Ptr<BRepWireEdgeDefinition> add(const core::Ptr<BRepVertexDefinition>& startVertex, const core::Ptr<BRepVertexDefinition>& endVertex, const core::Ptr<core::Curve3D>& modelSpaceCurve);

    typedef BRepWireEdgeDefinition iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_BREPWIREEDGEDEFINITIONS_API static const char* classType();
    ADSK_FUSION_BREPWIREEDGEDEFINITIONS_API const char* objectType() const override;
    ADSK_FUSION_BREPWIREEDGEDEFINITIONS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPWIREEDGEDEFINITIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepWireEdgeDefinition* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual BRepWireEdgeDefinition* add_raw(BRepVertexDefinition* startVertex, BRepVertexDefinition* endVertex, core::Curve3D* modelSpaceCurve) = 0;
};

// Inline wrappers

inline core::Ptr<BRepWireEdgeDefinition> BRepWireEdgeDefinitions::item(size_t index) const
{
    core::Ptr<BRepWireEdgeDefinition> res = item_raw(index);
    return res;
}

inline size_t BRepWireEdgeDefinitions::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<BRepWireEdgeDefinition> BRepWireEdgeDefinitions::add(const core::Ptr<BRepVertexDefinition>& startVertex, const core::Ptr<BRepVertexDefinition>& endVertex, const core::Ptr<core::Curve3D>& modelSpaceCurve)
{
    core::Ptr<BRepWireEdgeDefinition> res = add_raw(startVertex.get(), endVertex.get(), modelSpaceCurve.get());
    return res;
}

template <class OutputIterator> inline void BRepWireEdgeDefinitions::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPWIREEDGEDEFINITIONS_API