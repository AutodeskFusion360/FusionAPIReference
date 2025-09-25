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
# ifdef __COMPILING_ADSK_FUSION_BREPSHELL_CPP__
# define ADSK_FUSION_BREPSHELL_API XI_EXPORT
# else
# define ADSK_FUSION_BREPSHELL_API
# endif
#else
# define ADSK_FUSION_BREPSHELL_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class BoundingBox3D;
    class Point3D;
}}
namespace adsk { namespace fusion {
    class BRepBody;
    class BRepEdges;
    class BRepFaces;
    class BRepLump;
    class BRepVertices;
    class BRepWire;
    class MeshManager;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Represents an entirely connected set of BRepFaces. A BRepLump may contain multiple BRepShells.
class BRepShell : public core::Base {
public:

    /// Returns the BRepFaces directly owned by this shell
    core::Ptr<BRepFaces> faces() const;

    /// returns the BRepEdges owned by this shell
    core::Ptr<BRepEdges> edges() const;

    /// Returns the BRepVertices owned by this shell
    core::Ptr<BRepVertices> vertices() const;

    /// Returns the parent lump of this shell.
    core::Ptr<BRepLump> lump() const;

    /// Returns the parent body of the shell.
    core::Ptr<BRepBody> body() const;

    /// Returns the bounding box of this shell
    core::Ptr<core::BoundingBox3D> boundingBox() const;

    /// Determines the relationship of the input point with respect to this shell.
    /// point : The point to do the containment check for.
    /// Returns a value from the PointContainment enum indicating the relationship of
    /// the input point to the shell.
    PointContainment pointContainment(const core::Ptr<core::Point3D>& point);

    /// Returns true if this shell is closed
    bool isClosed() const;

    /// Returns true if the faces of this shell bound a void or an empty space within an outer shell.
    bool isVoid() const;

    /// Returns the area in cm ^ 2.
    double area() const;

    /// Returns the volume in cm ^ 3. Returns 0 in the case the shell is not solid.
    double volume() const;

    /// Returns the mesh manager object for this shell.
    core::Ptr<MeshManager> meshManager() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this
    /// object in an assembly. This is only valid in the case where this
    /// BRepShell object is acting as a proxy in an assembly. Returns null
    /// in the case where the object is not in the context of an assembly.
    /// but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<BRepShell> nativeObject() const;

    /// Returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context for the created proxy.
    /// Returns the new BrepShell proxy or null if this isn't the NativeObject.
    core::Ptr<BRepShell> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the wire body, if any, that exists in this shell. Returns null if the
    /// shell doesn't have a wire body.
    core::Ptr<BRepWire> wire() const;

    /// Returns a token for the BRepShell object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same shell.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    /// 
    /// This is only valid for shells that exist in the design, (the isTemporary
    /// property is false).
    std::string entityToken() const;

    ADSK_FUSION_BREPSHELL_API static const char* classType();
    ADSK_FUSION_BREPSHELL_API const char* objectType() const override;
    ADSK_FUSION_BREPSHELL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPSHELL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFaces* faces_raw() const = 0;
    virtual BRepEdges* edges_raw() const = 0;
    virtual BRepVertices* vertices_raw() const = 0;
    virtual BRepLump* lump_raw() const = 0;
    virtual BRepBody* body_raw() const = 0;
    virtual core::BoundingBox3D* boundingBox_raw() const = 0;
    virtual PointContainment pointContainment_raw(core::Point3D* point) = 0;
    virtual bool isClosed_raw() const = 0;
    virtual bool isVoid_raw() const = 0;
    virtual double area_raw() const = 0;
    virtual double volume_raw() const = 0;
    virtual MeshManager* meshManager_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual BRepShell* nativeObject_raw() const = 0;
    virtual BRepShell* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual BRepWire* wire_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<BRepFaces> BRepShell::faces() const
{
    core::Ptr<BRepFaces> res = faces_raw();
    return res;
}

inline core::Ptr<BRepEdges> BRepShell::edges() const
{
    core::Ptr<BRepEdges> res = edges_raw();
    return res;
}

inline core::Ptr<BRepVertices> BRepShell::vertices() const
{
    core::Ptr<BRepVertices> res = vertices_raw();
    return res;
}

inline core::Ptr<BRepLump> BRepShell::lump() const
{
    core::Ptr<BRepLump> res = lump_raw();
    return res;
}

inline core::Ptr<BRepBody> BRepShell::body() const
{
    core::Ptr<BRepBody> res = body_raw();
    return res;
}

inline core::Ptr<core::BoundingBox3D> BRepShell::boundingBox() const
{
    core::Ptr<core::BoundingBox3D> res = boundingBox_raw();
    return res;
}

inline PointContainment BRepShell::pointContainment(const core::Ptr<core::Point3D>& point)
{
    PointContainment res = pointContainment_raw(point.get());
    return res;
}

inline bool BRepShell::isClosed() const
{
    bool res = isClosed_raw();
    return res;
}

inline bool BRepShell::isVoid() const
{
    bool res = isVoid_raw();
    return res;
}

inline double BRepShell::area() const
{
    double res = area_raw();
    return res;
}

inline double BRepShell::volume() const
{
    double res = volume_raw();
    return res;
}

inline core::Ptr<MeshManager> BRepShell::meshManager() const
{
    core::Ptr<MeshManager> res = meshManager_raw();
    return res;
}

inline core::Ptr<Occurrence> BRepShell::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<BRepShell> BRepShell::nativeObject() const
{
    core::Ptr<BRepShell> res = nativeObject_raw();
    return res;
}

inline core::Ptr<BRepShell> BRepShell::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<BRepShell> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<BRepWire> BRepShell::wire() const
{
    core::Ptr<BRepWire> res = wire_raw();
    return res;
}

inline std::string BRepShell::entityToken() const
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

#undef ADSK_FUSION_BREPSHELL_API