//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FACEGROUP_CPP__
# define ADSK_FUSION_FACEGROUP_API XI_EXPORT
# else
# define ADSK_FUSION_FACEGROUP_API
# endif
#else
# define ADSK_FUSION_FACEGROUP_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
    class BoundingBox3D;
    class Point3D;
}}
namespace adsk { namespace fusion {
    class MeshBody;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represent a connected region on a single geometric surface.
class FaceGroup : public core::Base {
public:

    /// Returns the parent body of the face.
    core::Ptr<MeshBody> parentBody() const;

    /// Returns the area in cm ^ 2.
    double area() const;

    /// Returns the bounding box of this face
    core::Ptr<core::BoundingBox3D> boundingBox() const;

    /// Returns a point at the centroid (aka, geometric center) of the face.
    core::Ptr<core::Point3D> centroid() const;

    /// Returns the temporary ID of this face group. This ID is only good while the document
    /// remains open and as long as the owning mesh body is not modified in any way.
    int tempId() const;

    /// Returns a token for the face group object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same face.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as a way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    /// 
    /// This is only valid for faces that exist in the design, (the isTemporary
    /// property is false).
    std::string entityToken() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this
    /// object in an assembly. This is only valid in the case where this
    /// face group object is acting as a proxy in an assembly. Returns null
    /// in the case where the object is not in the context of an assembly.
    /// but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<FaceGroup> nativeObject() const;

    /// Returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context for the created proxy.
    /// Returns the new face group proxy or null if this isn't the NativeObject.
    core::Ptr<FaceGroup> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns if the face group is planar or not.
    bool isPlanar() const;

    /// Returns the collection of attributes associated with this face group.
    core::Ptr<core::Attributes> attributes() const;

    ADSK_FUSION_FACEGROUP_API static const char* classType();
    ADSK_FUSION_FACEGROUP_API const char* objectType() const override;
    ADSK_FUSION_FACEGROUP_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FACEGROUP_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshBody* parentBody_raw() const = 0;
    virtual double area_raw() const = 0;
    virtual core::BoundingBox3D* boundingBox_raw() const = 0;
    virtual core::Point3D* centroid_raw() const = 0;
    virtual int tempId_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual FaceGroup* nativeObject_raw() const = 0;
    virtual FaceGroup* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual bool isPlanar_raw() const = 0;
    virtual core::Attributes* attributes_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<MeshBody> FaceGroup::parentBody() const
{
    core::Ptr<MeshBody> res = parentBody_raw();
    return res;
}

inline double FaceGroup::area() const
{
    double res = area_raw();
    return res;
}

inline core::Ptr<core::BoundingBox3D> FaceGroup::boundingBox() const
{
    core::Ptr<core::BoundingBox3D> res = boundingBox_raw();
    return res;
}

inline core::Ptr<core::Point3D> FaceGroup::centroid() const
{
    core::Ptr<core::Point3D> res = centroid_raw();
    return res;
}

inline int FaceGroup::tempId() const
{
    int res = tempId_raw();
    return res;
}

inline std::string FaceGroup::entityToken() const
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

inline core::Ptr<Occurrence> FaceGroup::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<FaceGroup> FaceGroup::nativeObject() const
{
    core::Ptr<FaceGroup> res = nativeObject_raw();
    return res;
}

inline core::Ptr<FaceGroup> FaceGroup::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<FaceGroup> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline bool FaceGroup::isPlanar() const
{
    bool res = isPlanar_raw();
    return res;
}

inline core::Ptr<core::Attributes> FaceGroup::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FACEGROUP_API