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
# ifdef __COMPILING_ADSK_FUSION_BREPVERTEX_CPP__
# define ADSK_FUSION_BREPVERTEX_API XI_EXPORT
# else
# define ADSK_FUSION_BREPVERTEX_API
# endif
#else
# define ADSK_FUSION_BREPVERTEX_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
    class Point3D;
}}
namespace adsk { namespace fusion {
    class BRepBody;
    class BRepEdges;
    class BRepFaces;
    class BRepShell;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// A 0-dimensional topological entity that bounds a BRepEdge.
class BRepVertex : public core::Base {
public:

    /// Returns the BRepFaces that uses this vertex through BRepEdge
    core::Ptr<BRepFaces> faces() const;

    /// Returns the BRepEdges bounded by this vertex
    core::Ptr<BRepEdges> edges() const;

    /// Returns if the vertex is tolerant.
    /// The tolerance used is available from the tolerance property.
    bool isTolerant() const;

    /// Returns the tolerance used by a tolerant vertex.
    /// This value is only useful when isTolerant is true.
    double tolerance() const;

    /// Returns the underlying geometry point
    core::Ptr<core::Point3D> geometry() const;

    /// Returns the parent shell.
    core::Ptr<BRepShell> shell() const;

    /// Returns the parent body.
    core::Ptr<BRepBody> body() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this
    /// object in an assembly. This is only valid in the case where this
    /// BRepVertex object is acting as a proxy in an assembly. Returns null
    /// in the case where the object is not in the context of an assembly.
    /// but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<BRepVertex> nativeObject() const;

    /// Returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context for the created proxy.
    /// Returns the new BrepVertex proxy or null if this isn't the NativeObject.
    core::Ptr<BRepVertex> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the collection of attributes associated with this face.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns the temporary ID of this vertex. This ID is only good while the document
    /// remains open and as long as the owning BRepBody is not modified in any way.
    /// The findByTempId method of the BRepBody will return the entity in the body with the given ID.
    int tempId() const;

    /// Returns a token for the BRepVertex object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same vertex.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    /// 
    /// This is only valid for vertices that exist in the design, (the isTemporary
    /// property is false).
    std::string entityToken() const;

    ADSK_FUSION_BREPVERTEX_API static const char* classType();
    ADSK_FUSION_BREPVERTEX_API const char* objectType() const override;
    ADSK_FUSION_BREPVERTEX_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPVERTEX_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFaces* faces_raw() const = 0;
    virtual BRepEdges* edges_raw() const = 0;
    virtual bool isTolerant_raw() const = 0;
    virtual double tolerance_raw() const = 0;
    virtual core::Point3D* geometry_raw() const = 0;
    virtual BRepShell* shell_raw() const = 0;
    virtual BRepBody* body_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual BRepVertex* nativeObject_raw() const = 0;
    virtual BRepVertex* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual int tempId_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<BRepFaces> BRepVertex::faces() const
{
    core::Ptr<BRepFaces> res = faces_raw();
    return res;
}

inline core::Ptr<BRepEdges> BRepVertex::edges() const
{
    core::Ptr<BRepEdges> res = edges_raw();
    return res;
}

inline bool BRepVertex::isTolerant() const
{
    bool res = isTolerant_raw();
    return res;
}

inline double BRepVertex::tolerance() const
{
    double res = tolerance_raw();
    return res;
}

inline core::Ptr<core::Point3D> BRepVertex::geometry() const
{
    core::Ptr<core::Point3D> res = geometry_raw();
    return res;
}

inline core::Ptr<BRepShell> BRepVertex::shell() const
{
    core::Ptr<BRepShell> res = shell_raw();
    return res;
}

inline core::Ptr<BRepBody> BRepVertex::body() const
{
    core::Ptr<BRepBody> res = body_raw();
    return res;
}

inline core::Ptr<Occurrence> BRepVertex::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<BRepVertex> BRepVertex::nativeObject() const
{
    core::Ptr<BRepVertex> res = nativeObject_raw();
    return res;
}

inline core::Ptr<BRepVertex> BRepVertex::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<BRepVertex> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<core::Attributes> BRepVertex::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline int BRepVertex::tempId() const
{
    int res = tempId_raw();
    return res;
}

inline std::string BRepVertex::entityToken() const
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

#undef ADSK_FUSION_BREPVERTEX_API