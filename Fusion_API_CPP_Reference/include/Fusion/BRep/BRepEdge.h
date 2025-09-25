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
# ifdef __COMPILING_ADSK_FUSION_BREPEDGE_CPP__
# define ADSK_FUSION_BREPEDGE_API XI_EXPORT
# else
# define ADSK_FUSION_BREPEDGE_API
# endif
#else
# define ADSK_FUSION_BREPEDGE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
    class BoundingBox3D;
    class Curve3D;
    class CurveEvaluator3D;
    class ObjectCollection;
    class Point3D;
}}
namespace adsk { namespace fusion {
    class BRepBody;
    class BRepCoEdges;
    class BRepFaces;
    class BRepShell;
    class BRepVertex;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Represents a one-dimensional topological element that can be used to bound a BRepFace A BRepEdge uses a single, connected and bounded subset of a curve for it geometry.
class BRepEdge : public core::Base {
public:

    /// Returns the BRepVertex that bounds its low parameter end.
    core::Ptr<BRepVertex> startVertex() const;

    /// Returns the BRepVertex that bounds its high parameter end.
    core::Ptr<BRepVertex> endVertex() const;

    /// Returns the BRepFaces that are associated with this edge through its BRepCoEdges.
    core::Ptr<BRepFaces> faces() const;

    /// Returns the parent shell of the edge.
    core::Ptr<BRepShell> shell() const;

    /// Returns the parent body of the edge.
    core::Ptr<BRepBody> body() const;

    /// Returns if the edge's geometry is degenerate.
    /// For example, the apex of a cone is a degenerate edge.
    bool isDegenerate() const;

    /// Returns CurveEvaluator3D for evaluation.
    core::Ptr<core::CurveEvaluator3D> evaluator() const;

    /// Returns the underlying curve geometry of the edge.
    core::Ptr<core::Curve3D> geometry() const;

    /// Returns if the edge is tolerant.
    /// The tolerance used is available from the tolerance property.
    bool isTolerant() const;

    /// Returns the tolerance used by a tolerant edge.
    /// This value is only useful when isTolerant is true.
    double tolerance() const;

    /// Returns a sample point guaranteed to lie on the edge's curve, within its boundaries,
    /// and not on a vertex (unless this is a degenerate edge).
    core::Ptr<core::Point3D> pointOnEdge() const;

    /// Returns the BRepCoEdges on the edge.
    core::Ptr<BRepCoEdges> coEdges() const;

    /// Returns if the parametric direction of this edge is reversed
    /// from the parametric direction of the underlying curve obtained from the geometry property.
    /// An edge's parametric direction is from the start vertex to the end vertex.
    /// But the underlying curve geometry may have the opposite parameterization.
    /// This property indicates if the parameterization order of the evaluator obtained from
    /// this edge is reversed from the order of the geometry curve's evaluator.
    bool isParamReversed() const;

    /// Returns a collection of edges that includes all of the edges tangentially connected
    /// to this edge. The result includes this edge. The edges are in the collection
    /// in their connected order.
    core::Ptr<core::ObjectCollection> tangentiallyConnectedEdges() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this
    /// object in an assembly. This is only valid in the case where this
    /// BRepEdge object is acting as a proxy in an assembly. Returns null
    /// in the case where the object is not in the context of an assembly.
    /// but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<BRepEdge> nativeObject() const;

    /// Returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context for the created proxy.
    /// Returns the new BrepEdge proxy or null if this isn't the NativeObject.
    core::Ptr<BRepEdge> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the collection of attributes associated with this face.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns the length of the edge in centimeters.
    double length() const;

    /// Returns the temporary ID of this edge. This ID is only good while the document
    /// remains open and as long as the owning BRepBody is not modified in any way.
    /// The findByTempId method of the BRepBody will return the entity in the body with the given ID.
    int tempId() const;

    /// Returns the bounding box of this edge.
    core::Ptr<core::BoundingBox3D> boundingBox() const;

    /// Returns a token for the BRepEdge object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same edge.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    /// 
    /// This is only valid for edges that exist in the design, (the isTemporary
    /// property is false).
    std::string entityToken() const;

    ADSK_FUSION_BREPEDGE_API static const char* classType();
    ADSK_FUSION_BREPEDGE_API const char* objectType() const override;
    ADSK_FUSION_BREPEDGE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPEDGE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepVertex* startVertex_raw() const = 0;
    virtual BRepVertex* endVertex_raw() const = 0;
    virtual BRepFaces* faces_raw() const = 0;
    virtual BRepShell* shell_raw() const = 0;
    virtual BRepBody* body_raw() const = 0;
    virtual bool isDegenerate_raw() const = 0;
    virtual core::CurveEvaluator3D* evaluator_raw() const = 0;
    virtual core::Curve3D* geometry_raw() const = 0;
    virtual bool isTolerant_raw() const = 0;
    virtual double tolerance_raw() const = 0;
    virtual core::Point3D* pointOnEdge_raw() const = 0;
    virtual BRepCoEdges* coEdges_raw() const = 0;
    virtual bool isParamReversed_raw() const = 0;
    virtual core::ObjectCollection* tangentiallyConnectedEdges_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual BRepEdge* nativeObject_raw() const = 0;
    virtual BRepEdge* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual double length_raw() const = 0;
    virtual int tempId_raw() const = 0;
    virtual core::BoundingBox3D* boundingBox_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<BRepVertex> BRepEdge::startVertex() const
{
    core::Ptr<BRepVertex> res = startVertex_raw();
    return res;
}

inline core::Ptr<BRepVertex> BRepEdge::endVertex() const
{
    core::Ptr<BRepVertex> res = endVertex_raw();
    return res;
}

inline core::Ptr<BRepFaces> BRepEdge::faces() const
{
    core::Ptr<BRepFaces> res = faces_raw();
    return res;
}

inline core::Ptr<BRepShell> BRepEdge::shell() const
{
    core::Ptr<BRepShell> res = shell_raw();
    return res;
}

inline core::Ptr<BRepBody> BRepEdge::body() const
{
    core::Ptr<BRepBody> res = body_raw();
    return res;
}

inline bool BRepEdge::isDegenerate() const
{
    bool res = isDegenerate_raw();
    return res;
}

inline core::Ptr<core::CurveEvaluator3D> BRepEdge::evaluator() const
{
    core::Ptr<core::CurveEvaluator3D> res = evaluator_raw();
    return res;
}

inline core::Ptr<core::Curve3D> BRepEdge::geometry() const
{
    core::Ptr<core::Curve3D> res = geometry_raw();
    return res;
}

inline bool BRepEdge::isTolerant() const
{
    bool res = isTolerant_raw();
    return res;
}

inline double BRepEdge::tolerance() const
{
    double res = tolerance_raw();
    return res;
}

inline core::Ptr<core::Point3D> BRepEdge::pointOnEdge() const
{
    core::Ptr<core::Point3D> res = pointOnEdge_raw();
    return res;
}

inline core::Ptr<BRepCoEdges> BRepEdge::coEdges() const
{
    core::Ptr<BRepCoEdges> res = coEdges_raw();
    return res;
}

inline bool BRepEdge::isParamReversed() const
{
    bool res = isParamReversed_raw();
    return res;
}

inline core::Ptr<core::ObjectCollection> BRepEdge::tangentiallyConnectedEdges() const
{
    core::Ptr<core::ObjectCollection> res = tangentiallyConnectedEdges_raw();
    return res;
}

inline core::Ptr<Occurrence> BRepEdge::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<BRepEdge> BRepEdge::nativeObject() const
{
    core::Ptr<BRepEdge> res = nativeObject_raw();
    return res;
}

inline core::Ptr<BRepEdge> BRepEdge::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<BRepEdge> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<core::Attributes> BRepEdge::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline double BRepEdge::length() const
{
    double res = length_raw();
    return res;
}

inline int BRepEdge::tempId() const
{
    int res = tempId_raw();
    return res;
}

inline core::Ptr<core::BoundingBox3D> BRepEdge::boundingBox() const
{
    core::Ptr<core::BoundingBox3D> res = boundingBox_raw();
    return res;
}

inline std::string BRepEdge::entityToken() const
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
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPEDGE_API