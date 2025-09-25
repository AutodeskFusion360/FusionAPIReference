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
# ifdef __COMPILING_ADSK_FUSION_BREPCOEDGE_CPP__
# define ADSK_FUSION_BREPCOEDGE_API XI_EXPORT
# else
# define ADSK_FUSION_BREPCOEDGE_API
# endif
#else
# define ADSK_FUSION_BREPCOEDGE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Curve2D;
    class CurveEvaluator2D;
}}
namespace adsk { namespace fusion {
    class BRepBody;
    class BRepEdge;
    class BRepLoop;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Represents the use of a BRepEdge by a BRepFace.
class BRepCoEdge : public core::Base {
public:

    /// Returns the edge this co-edge is associated with.
    core::Ptr<BRepEdge> edge() const;

    /// Returns the loop this co-edge is part of.
    core::Ptr<BRepLoop> loop() const;

    /// Returns a curve evaluator that can be used to perform geometric evaluations on the co-edge.
    core::Ptr<core::CurveEvaluator2D> evaluator() const;

    /// Returns a geometry object that represents the shape of this co-edge in parameter space of the parent face's surface.
    core::Ptr<core::Curve2D> geometry() const;

    /// Indicates if the orientation of this co-edge is in the same direction or opposed to its associated edge.
    bool isOpposedToEdge() const;

    /// Returns if the parametric direction of this co-edge is reversed
    /// from the parametric direction of the underlying curve obtained from the geometry property.
    /// A co-edge's parametric direction is from the start vertex to the end vertex.
    /// But the underlying curve geometry may have the opposite parameterization.
    /// This property indicates if the parameterization order of the evaluator obtained from
    /// this co-edge is reversed from the order of the geometry curve's evaluator.
    bool isParamReversed() const;

    /// Returns the next co-edge in the loop.
    core::Ptr<BRepCoEdge> next() const;

    /// Returns the body this co-edge is part of.
    core::Ptr<BRepBody> body() const;

    /// Returns the co-edge on the adjacent face
    core::Ptr<BRepCoEdge> partner() const;

    /// Returns the previous co-edge in the loop.
    core::Ptr<BRepCoEdge> previous() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this
    /// object in an assembly. This is only valid in the case where this
    /// BRepCoEdge object is acting as a proxy in an assembly. Returns null
    /// in the case where the object is not in the context of an assembly.
    /// but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<BRepCoEdge> nativeObject() const;

    /// Returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context for the created proxy.
    /// Returns the new BrepCoEdge proxy or null if this isn't the NativeObject.
    core::Ptr<BRepCoEdge> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns a token for the BRepCoEdge object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same co-edge.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    /// 
    /// This is only valid for co-edges that exist in the design, (the isTemporary
    /// property is false).
    std::string entityToken() const;

    ADSK_FUSION_BREPCOEDGE_API static const char* classType();
    ADSK_FUSION_BREPCOEDGE_API const char* objectType() const override;
    ADSK_FUSION_BREPCOEDGE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPCOEDGE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepEdge* edge_raw() const = 0;
    virtual BRepLoop* loop_raw() const = 0;
    virtual core::CurveEvaluator2D* evaluator_raw() const = 0;
    virtual core::Curve2D* geometry_raw() const = 0;
    virtual bool isOpposedToEdge_raw() const = 0;
    virtual bool isParamReversed_raw() const = 0;
    virtual BRepCoEdge* next_raw() const = 0;
    virtual BRepBody* body_raw() const = 0;
    virtual BRepCoEdge* partner_raw() const = 0;
    virtual BRepCoEdge* previous_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual BRepCoEdge* nativeObject_raw() const = 0;
    virtual BRepCoEdge* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual char* entityToken_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<BRepEdge> BRepCoEdge::edge() const
{
    core::Ptr<BRepEdge> res = edge_raw();
    return res;
}

inline core::Ptr<BRepLoop> BRepCoEdge::loop() const
{
    core::Ptr<BRepLoop> res = loop_raw();
    return res;
}

inline core::Ptr<core::CurveEvaluator2D> BRepCoEdge::evaluator() const
{
    core::Ptr<core::CurveEvaluator2D> res = evaluator_raw();
    return res;
}

inline core::Ptr<core::Curve2D> BRepCoEdge::geometry() const
{
    core::Ptr<core::Curve2D> res = geometry_raw();
    return res;
}

inline bool BRepCoEdge::isOpposedToEdge() const
{
    bool res = isOpposedToEdge_raw();
    return res;
}

inline bool BRepCoEdge::isParamReversed() const
{
    bool res = isParamReversed_raw();
    return res;
}

inline core::Ptr<BRepCoEdge> BRepCoEdge::next() const
{
    core::Ptr<BRepCoEdge> res = next_raw();
    return res;
}

inline core::Ptr<BRepBody> BRepCoEdge::body() const
{
    core::Ptr<BRepBody> res = body_raw();
    return res;
}

inline core::Ptr<BRepCoEdge> BRepCoEdge::partner() const
{
    core::Ptr<BRepCoEdge> res = partner_raw();
    return res;
}

inline core::Ptr<BRepCoEdge> BRepCoEdge::previous() const
{
    core::Ptr<BRepCoEdge> res = previous_raw();
    return res;
}

inline core::Ptr<Occurrence> BRepCoEdge::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<BRepCoEdge> BRepCoEdge::nativeObject() const
{
    core::Ptr<BRepCoEdge> res = nativeObject_raw();
    return res;
}

inline core::Ptr<BRepCoEdge> BRepCoEdge::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<BRepCoEdge> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline std::string BRepCoEdge::entityToken() const
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

#undef ADSK_FUSION_BREPCOEDGE_API