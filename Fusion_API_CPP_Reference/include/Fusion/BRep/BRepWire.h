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
# ifdef __COMPILING_ADSK_FUSION_BREPWIRE_CPP__
# define ADSK_FUSION_BREPWIRE_API XI_EXPORT
# else
# define ADSK_FUSION_BREPWIRE_API
# endif
#else
# define ADSK_FUSION_BREPWIRE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class BRepBody;
    class BRepCoEdges;
    class BRepEdges;
    class BRepVertices;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Represents a single B-Rep wire body. A wire body consists of one or
/// more edges and their vertices.
class BRepWire : public core::Base {
public:

    /// Returns the B-Rep edges associated with this wire body.
    core::Ptr<BRepEdges> edges() const;

    /// Returns the B-Rep vertices associated with this wire body.
    core::Ptr<BRepVertices> vertices() const;

    /// Returns the co-edges associated with this wire body. The co-edges record
    /// the connections between the edges in the wire body.
    core::Ptr<BRepCoEdges> coEdges() const;

    /// Indicates if this entities making up this wire body are planar and all lie on the same plane.
    bool isPlanar() const;

    /// Returns the parent BRepBody object that contains this wire.
    core::Ptr<BRepBody> parent() const;

    /// Method that computes the offset for a planar wire. A BRepBody containing the resulting
    /// BRepWire object(s) is returned. It's possible that the offset result of a single wire
    /// can result in multiple wires.
    /// planeNormal : Input Vector3D object that defines the positive direction of the
    /// plane the plane the wire lies on. This vector must be normal to the plane and is used to
    /// determine the side to offset the curves to. A positive offset distance is in the direction
    /// of the cross product (wire_tangent x wire_plane_normal). A negative offset is in the
    /// opposite direction.
    /// distance : The offset distance in centimeters. See the description for the Normal argument to see how
    /// a positive or negative value for the distance specifies the direction of the offset.
    /// cornerType : Specifies how the corners are connected when offsetting the curves results in gaps in the corners.
    /// See the documentation of the enum for a detailed description of each option.
    /// Returns a new temporary BRepBody that contains one or more wires that represent the offset.
    core::Ptr<BRepBody> offsetPlanarWire(const core::Ptr<core::Vector3D>& planeNormal, double distance, OffsetCornerTypes cornerType);

    /// Returns the assembly occurrence (i.e. the occurrence) of this
    /// object in an assembly. This is only valid in the case where this
    /// BRepFace object is acting as a proxy in an assembly. Returns null
    /// in the case where the object is not in the context of an assembly.
    /// but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<BRepWire> nativeObject() const;

    /// Returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context for the created proxy.
    /// Returns the new BRepWire proxy or null if this isn't the NativeObject.
    core::Ptr<BRepWire> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_BREPWIRE_API static const char* classType();
    ADSK_FUSION_BREPWIRE_API const char* objectType() const override;
    ADSK_FUSION_BREPWIRE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPWIRE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepEdges* edges_raw() const = 0;
    virtual BRepVertices* vertices_raw() const = 0;
    virtual BRepCoEdges* coEdges_raw() const = 0;
    virtual bool isPlanar_raw() const = 0;
    virtual BRepBody* parent_raw() const = 0;
    virtual BRepBody* offsetPlanarWire_raw(core::Vector3D* planeNormal, double distance, OffsetCornerTypes cornerType) = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual BRepWire* nativeObject_raw() const = 0;
    virtual BRepWire* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<BRepEdges> BRepWire::edges() const
{
    core::Ptr<BRepEdges> res = edges_raw();
    return res;
}

inline core::Ptr<BRepVertices> BRepWire::vertices() const
{
    core::Ptr<BRepVertices> res = vertices_raw();
    return res;
}

inline core::Ptr<BRepCoEdges> BRepWire::coEdges() const
{
    core::Ptr<BRepCoEdges> res = coEdges_raw();
    return res;
}

inline bool BRepWire::isPlanar() const
{
    bool res = isPlanar_raw();
    return res;
}

inline core::Ptr<BRepBody> BRepWire::parent() const
{
    core::Ptr<BRepBody> res = parent_raw();
    return res;
}

inline core::Ptr<BRepBody> BRepWire::offsetPlanarWire(const core::Ptr<core::Vector3D>& planeNormal, double distance, OffsetCornerTypes cornerType)
{
    core::Ptr<BRepBody> res = offsetPlanarWire_raw(planeNormal.get(), distance, cornerType);
    return res;
}

inline core::Ptr<Occurrence> BRepWire::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<BRepWire> BRepWire::nativeObject() const
{
    core::Ptr<BRepWire> res = nativeObject_raw();
    return res;
}

inline core::Ptr<BRepWire> BRepWire::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<BRepWire> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPWIRE_API