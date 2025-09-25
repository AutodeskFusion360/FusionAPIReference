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
# ifdef __COMPILING_ADSK_FUSION_BREPLOOP_CPP__
# define ADSK_FUSION_BREPLOOP_API XI_EXPORT
# else
# define ADSK_FUSION_BREPLOOP_API
# endif
#else
# define ADSK_FUSION_BREPLOOP_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class BoundingBox3D;
}}
namespace adsk { namespace fusion {
    class BRepBody;
    class BRepCoEdges;
    class BRepEdges;
    class BRepFace;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Represents a connected portion of a BRepFace boundary. It consists of a chain of BRepCoEdges.
class BRepLoop : public core::Base {
public:

    /// Returns the BRepEdges used by this loop
    core::Ptr<BRepEdges> edges() const;

    /// Returns the BRepCoEdges consisting this loop
    core::Ptr<BRepCoEdges> coEdges() const;

    /// Returns true of this loop is an outer loop of a face
    bool isOuter() const;

    /// Returns the bounding box of this loop
    core::Ptr<core::BoundingBox3D> boundingBox() const;

    /// Returns the parent face of the loop.
    core::Ptr<BRepFace> face() const;

    /// Returns the parent body of the loop.
    core::Ptr<BRepBody> body() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this
    /// object in an assembly. This is only valid in the case where this
    /// BRepLoop object is acting as a proxy in an assembly. Returns null
    /// in the case where the object is not in the context of an assembly.
    /// but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<BRepLoop> nativeObject() const;

    /// Returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context for the created proxy.
    /// Returns the new BrepLoop proxy or null if this isn't the NativeObject.
    core::Ptr<BRepLoop> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns a token for the BRepLoop object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same loop.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    /// 
    /// This is only valid for loops that exist in the design, (the isTemporary
    /// property is false).
    std::string entityToken() const;

    ADSK_FUSION_BREPLOOP_API static const char* classType();
    ADSK_FUSION_BREPLOOP_API const char* objectType() const override;
    ADSK_FUSION_BREPLOOP_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPLOOP_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepEdges* edges_raw() const = 0;
    virtual BRepCoEdges* coEdges_raw() const = 0;
    virtual bool isOuter_raw() const = 0;
    virtual core::BoundingBox3D* boundingBox_raw() const = 0;
    virtual BRepFace* face_raw() const = 0;
    virtual BRepBody* body_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual BRepLoop* nativeObject_raw() const = 0;
    virtual BRepLoop* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual char* entityToken_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<BRepEdges> BRepLoop::edges() const
{
    core::Ptr<BRepEdges> res = edges_raw();
    return res;
}

inline core::Ptr<BRepCoEdges> BRepLoop::coEdges() const
{
    core::Ptr<BRepCoEdges> res = coEdges_raw();
    return res;
}

inline bool BRepLoop::isOuter() const
{
    bool res = isOuter_raw();
    return res;
}

inline core::Ptr<core::BoundingBox3D> BRepLoop::boundingBox() const
{
    core::Ptr<core::BoundingBox3D> res = boundingBox_raw();
    return res;
}

inline core::Ptr<BRepFace> BRepLoop::face() const
{
    core::Ptr<BRepFace> res = face_raw();
    return res;
}

inline core::Ptr<BRepBody> BRepLoop::body() const
{
    core::Ptr<BRepBody> res = body_raw();
    return res;
}

inline core::Ptr<Occurrence> BRepLoop::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<BRepLoop> BRepLoop::nativeObject() const
{
    core::Ptr<BRepLoop> res = nativeObject_raw();
    return res;
}

inline core::Ptr<BRepLoop> BRepLoop::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<BRepLoop> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline std::string BRepLoop::entityToken() const
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

#undef ADSK_FUSION_BREPLOOP_API