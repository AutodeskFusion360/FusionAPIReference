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
#include "../../Core/CoreTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_BREPFACE_CPP__
# define ADSK_FUSION_BREPFACE_API XI_EXPORT
# else
# define ADSK_FUSION_BREPFACE_API
# endif
#else
# define ADSK_FUSION_BREPFACE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Appearance;
    class Attributes;
    class BoundingBox3D;
    class Point3D;
    class Surface;
    class SurfaceEvaluator;
}}
namespace adsk { namespace fusion {
    class BRepBody;
    class BRepEdges;
    class BRepFaces;
    class BRepLoops;
    class BRepShell;
    class BRepVertices;
    class MeshManager;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Represent a connected region on a single geometric surface.
class BRepFace : public core::Base {
public:

    /// Returns the BRepEdges used by this face
    core::Ptr<BRepEdges> edges() const;

    /// Returns the BRepVertices used by this face
    core::Ptr<BRepVertices> vertices() const;

    /// Returns the parent shell of the face.
    core::Ptr<BRepShell> shell() const;

    /// Returns the BRepLoops owned by this face
    core::Ptr<BRepLoops> loops() const;

    /// Returns the parent body of the face.
    core::Ptr<BRepBody> body() const;

    /// Returns the underlying surface geometry of this face
    core::Ptr<core::Surface> geometry() const;

    /// Returns a SurfaceEvaluator to allow geometric evaluations across the face's surface.
    /// This evaluator differs from the evaluator available from the Surface obtained from the geometry
    /// property by being bounded by the topological boundaries of this face.
    core::Ptr<core::SurfaceEvaluator> evaluator() const;

    /// Returns a sample point guaranteed to lie on the face's surface, within the face's boundaries, and not on a boundary edge.
    core::Ptr<core::Point3D> pointOnFace() const;

    /// Returns the set of faces that are tangentially adjacent to this face.
    /// In other words, it is the set of faces that are adjacent to this face's edges
    /// and have a smooth transition across those edges.
    core::Ptr<BRepFaces> tangentiallyConnectedFaces() const;

    /// Returns a MeshManager object that allows access to existing and new meshes of this face.
    core::Ptr<MeshManager> meshManager() const;

    /// Read-write property that gets and sets the current appearance of the face. Setting this property will result in applying
    /// an override appearance to the face and the AppearanceSourceType property will return OverrideAppearanceSource. Setting
    /// this property to null will remove any override.
    core::Ptr<core::Appearance> appearance() const;
    bool appearance(const core::Ptr<core::Appearance>& value);

    /// Read-write property that gets the source of the appearance for the face. If this returns OverrideAppearanceSource, an override exists
    /// on this face. The override can be removed by setting the Appearance property to null.
    core::AppearanceSourceTypes appearanceSourceType() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this
    /// object in an assembly. This is only valid in the case where this
    /// BRepFace object is acting as a proxy in an assembly. Returns null
    /// in the case where the object is not in the context of an assembly.
    /// but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<BRepFace> nativeObject() const;

    /// Returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context for the created proxy.
    /// Returns the new BRepFace proxy or null if this isn't the NativeObject.
    core::Ptr<BRepFace> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the area in cm ^ 2.
    double area() const;

    /// Returns the bounding box of this face
    core::Ptr<core::BoundingBox3D> boundingBox() const;

    /// Returns a point at the centroid (aka, geometric center) of the face.
    core::Ptr<core::Point3D> centroid() const;

    /// Returns the collection of attributes associated with this face.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns the temporary ID of this face. This ID is only good while the document
    /// remains open and as long as the owning BRepBody is not modified in any way.
    /// The findByTempId method of the BRepBody will return the entity in the body with the given ID.
    int tempId() const;

    /// Creates a new body where this face and its edges are converted to different
    /// types of geometry based on the input options.
    /// 
    /// The tempId on the faces, edges, and vertices on the new body will match
    /// with the corresponding tempId on the original body. In cases where the face is
    /// split as a result of the conversion there can be more than one face or edge in
    /// the new body that matches to a single face or edge in the original body.
    /// options : Input options that define how the conversion should be done. These are
    /// bitwise options so they can be combined.
    /// Returns the new converted body or null in the case of failure.
    core::Ptr<BRepBody> convert(BRepConvertOptions options);

    /// Gets if the normal of this face is reversed with respect to the surface geometry associated
    /// with this face.
    bool isParamReversed() const;

    /// Returns a token for the BRepFace object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same face.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    /// 
    /// This is only valid for faces that exist in the design, (the isTemporary
    /// property is false).
    std::string entityToken() const;

    /// Checks if input point is on this BRepFace. This takes into account any boundaries so if the point is within a void area of the face, this will return false.
    /// point : The input point to check.
    /// tolerance : Specifies how close the point must be to the face to be considered on the face.
    /// Defaults to the point tolerance which can be obtained using the Application.pointTolerance
    /// property. The value is in centimeters.
    /// Returns true if the point lies on the face.
    bool isPointOnFace(const core::Ptr<core::Point3D>& point, double tolerance = 0) const;

    ADSK_FUSION_BREPFACE_API static const char* classType();
    ADSK_FUSION_BREPFACE_API const char* objectType() const override;
    ADSK_FUSION_BREPFACE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPFACE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepEdges* edges_raw() const = 0;
    virtual BRepVertices* vertices_raw() const = 0;
    virtual BRepShell* shell_raw() const = 0;
    virtual BRepLoops* loops_raw() const = 0;
    virtual BRepBody* body_raw() const = 0;
    virtual core::Surface* geometry_raw() const = 0;
    virtual core::SurfaceEvaluator* evaluator_raw() const = 0;
    virtual core::Point3D* pointOnFace_raw() const = 0;
    virtual BRepFaces* tangentiallyConnectedFaces_raw() const = 0;
    virtual MeshManager* meshManager_raw() const = 0;
    virtual core::Appearance* appearance_raw() const = 0;
    virtual bool appearance_raw(core::Appearance* value) = 0;
    virtual core::AppearanceSourceTypes appearanceSourceType_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual BRepFace* nativeObject_raw() const = 0;
    virtual BRepFace* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual double area_raw() const = 0;
    virtual core::BoundingBox3D* boundingBox_raw() const = 0;
    virtual core::Point3D* centroid_raw() const = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual int tempId_raw() const = 0;
    virtual BRepBody* convert_raw(BRepConvertOptions options) = 0;
    virtual bool isParamReversed_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
    virtual bool isPointOnFace_raw(core::Point3D* point, double tolerance) const = 0;
};

// Inline wrappers

inline core::Ptr<BRepEdges> BRepFace::edges() const
{
    core::Ptr<BRepEdges> res = edges_raw();
    return res;
}

inline core::Ptr<BRepVertices> BRepFace::vertices() const
{
    core::Ptr<BRepVertices> res = vertices_raw();
    return res;
}

inline core::Ptr<BRepShell> BRepFace::shell() const
{
    core::Ptr<BRepShell> res = shell_raw();
    return res;
}

inline core::Ptr<BRepLoops> BRepFace::loops() const
{
    core::Ptr<BRepLoops> res = loops_raw();
    return res;
}

inline core::Ptr<BRepBody> BRepFace::body() const
{
    core::Ptr<BRepBody> res = body_raw();
    return res;
}

inline core::Ptr<core::Surface> BRepFace::geometry() const
{
    core::Ptr<core::Surface> res = geometry_raw();
    return res;
}

inline core::Ptr<core::SurfaceEvaluator> BRepFace::evaluator() const
{
    core::Ptr<core::SurfaceEvaluator> res = evaluator_raw();
    return res;
}

inline core::Ptr<core::Point3D> BRepFace::pointOnFace() const
{
    core::Ptr<core::Point3D> res = pointOnFace_raw();
    return res;
}

inline core::Ptr<BRepFaces> BRepFace::tangentiallyConnectedFaces() const
{
    core::Ptr<BRepFaces> res = tangentiallyConnectedFaces_raw();
    return res;
}

inline core::Ptr<MeshManager> BRepFace::meshManager() const
{
    core::Ptr<MeshManager> res = meshManager_raw();
    return res;
}

inline core::Ptr<core::Appearance> BRepFace::appearance() const
{
    core::Ptr<core::Appearance> res = appearance_raw();
    return res;
}

inline bool BRepFace::appearance(const core::Ptr<core::Appearance>& value)
{
    return appearance_raw(value.get());
}

inline core::AppearanceSourceTypes BRepFace::appearanceSourceType() const
{
    core::AppearanceSourceTypes res = appearanceSourceType_raw();
    return res;
}

inline core::Ptr<Occurrence> BRepFace::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<BRepFace> BRepFace::nativeObject() const
{
    core::Ptr<BRepFace> res = nativeObject_raw();
    return res;
}

inline core::Ptr<BRepFace> BRepFace::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<BRepFace> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline double BRepFace::area() const
{
    double res = area_raw();
    return res;
}

inline core::Ptr<core::BoundingBox3D> BRepFace::boundingBox() const
{
    core::Ptr<core::BoundingBox3D> res = boundingBox_raw();
    return res;
}

inline core::Ptr<core::Point3D> BRepFace::centroid() const
{
    core::Ptr<core::Point3D> res = centroid_raw();
    return res;
}

inline core::Ptr<core::Attributes> BRepFace::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline int BRepFace::tempId() const
{
    int res = tempId_raw();
    return res;
}

inline core::Ptr<BRepBody> BRepFace::convert(BRepConvertOptions options)
{
    core::Ptr<BRepBody> res = convert_raw(options);
    return res;
}

inline bool BRepFace::isParamReversed() const
{
    bool res = isParamReversed_raw();
    return res;
}

inline std::string BRepFace::entityToken() const
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

inline bool BRepFace::isPointOnFace(const core::Ptr<core::Point3D>& point, double tolerance) const
{
    bool res = isPointOnFace_raw(point.get(), tolerance);
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPFACE_API