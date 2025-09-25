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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_TRIANGLEMESH_CPP__
# define ADSK_FUSION_TRIANGLEMESH_API XI_EXPORT
# else
# define ADSK_FUSION_TRIANGLEMESH_API
# endif
#else
# define ADSK_FUSION_TRIANGLEMESH_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point2D;
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace fusion {

/// The TriangleMesh object represents all of the data defining
/// a triangular mesh.
class TriangleMesh : public core::Base {
public:

    /// Returns the total number of nodes in the mesh.
    int nodeCount() const;

    /// Returns the node coordinates as an array of doubles where
    /// they are the x, y, z components of each coordinate.
    std::vector<double> nodeCoordinatesAsDouble() const;

    /// Returns the node coordinates as an array of floats where
    /// they are the x, y, z components of each coordinate.
    std::vector<float> nodeCoordinatesAsFloat() const;

    /// Returns the node coordinates as an array of Point3D objects.
    std::vector<core::Ptr<core::Point3D>> nodeCoordinates() const;

    /// Returns the number of triangles in the mesh.
    int triangleCount() const;

    /// Returns the normal vectors of the mesh where there is a normal
    /// vector at each node. The normals are returned as an array
    /// of doubles where they are the x, y, z components of each vector.
    std::vector<double> normalVectorsAsDouble() const;

    /// Returns the normal vectors of the mesh where there is a normal
    /// vector at each node. The normals are returned as an array
    /// of floats where they are the x, y, z components of each vector.
    std::vector<float> normalVectorsAsFloat() const;

    /// Returns the normal vectors of the mesh where there is a normal
    /// vector at each node. The normals are returned as an array
    /// of Vector3D objects.
    std::vector<core::Ptr<core::Vector3D>> normalVectors() const;

    /// Returns an array of indices that define which nodes are used
    /// for each triangle. This is used to look-up the coordinates in the
    /// NodeCoordinates array to get the three coordinates of each triangle.
    std::vector<int> nodeIndices() const;

    /// Returns the texture coordinates used when mapping a texture to
    /// this face. The coordinates are returned as an array of
    /// doubles where they are the u and v components of each
    /// coordinate as defined in parametric space. There is a texture
    /// coordinate for each vertex in the face mesh.
    std::vector<double> textureCoordinatesAsDouble() const;

    /// Returns the texture coordinates used when mapping a texture to
    /// this face. The coordinates are returned as an array of
    /// floats where they are the u and v components of each
    /// coordinate as defined in parametric space. There is a texture
    /// coordinate for each vertex in the face mesh.
    std::vector<float> textureCoordinatesAsFloat() const;

    /// Returns the texture coordinates used when mapping a texture to
    /// this face. The coordinates are returned as an array of
    /// Point2D objects where the x and y properties of the point are
    /// u and v coordinates as defined in parametric space. There is
    /// a texture coordinate for each vertex in the face mesh.
    std::vector<core::Ptr<core::Point2D>> textureCoordinates() const;

    /// Returns the surface tolerance that was used to generate this mesh.
    /// This is most useful when using display meshes that have already
    /// been calculated.
    double surfaceTolerance() const;

    ADSK_FUSION_TRIANGLEMESH_API static const char* classType();
    ADSK_FUSION_TRIANGLEMESH_API const char* objectType() const override;
    ADSK_FUSION_TRIANGLEMESH_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TRIANGLEMESH_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int nodeCount_raw() const = 0;
    virtual double* nodeCoordinatesAsDouble_raw(size_t& return_size) const = 0;
    virtual float* nodeCoordinatesAsFloat_raw(size_t& return_size) const = 0;
    virtual core::Point3D** nodeCoordinates_raw(size_t& return_size) const = 0;
    virtual int triangleCount_raw() const = 0;
    virtual double* normalVectorsAsDouble_raw(size_t& return_size) const = 0;
    virtual float* normalVectorsAsFloat_raw(size_t& return_size) const = 0;
    virtual core::Vector3D** normalVectors_raw(size_t& return_size) const = 0;
    virtual int* nodeIndices_raw(size_t& return_size) const = 0;
    virtual double* textureCoordinatesAsDouble_raw(size_t& return_size) const = 0;
    virtual float* textureCoordinatesAsFloat_raw(size_t& return_size) const = 0;
    virtual core::Point2D** textureCoordinates_raw(size_t& return_size) const = 0;
    virtual double surfaceTolerance_raw() const = 0;
};

// Inline wrappers

inline int TriangleMesh::nodeCount() const
{
    int res = nodeCount_raw();
    return res;
}

inline std::vector<double> TriangleMesh::nodeCoordinatesAsDouble() const
{
    std::vector<double> res;
    size_t s;

    double* p= nodeCoordinatesAsDouble_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<float> TriangleMesh::nodeCoordinatesAsFloat() const
{
    std::vector<float> res;
    size_t s;

    float* p= nodeCoordinatesAsFloat_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<core::Point3D>> TriangleMesh::nodeCoordinates() const
{
    std::vector<core::Ptr<core::Point3D>> res;
    size_t s;

    core::Point3D** p= nodeCoordinates_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline int TriangleMesh::triangleCount() const
{
    int res = triangleCount_raw();
    return res;
}

inline std::vector<double> TriangleMesh::normalVectorsAsDouble() const
{
    std::vector<double> res;
    size_t s;

    double* p= normalVectorsAsDouble_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<float> TriangleMesh::normalVectorsAsFloat() const
{
    std::vector<float> res;
    size_t s;

    float* p= normalVectorsAsFloat_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<core::Vector3D>> TriangleMesh::normalVectors() const
{
    std::vector<core::Ptr<core::Vector3D>> res;
    size_t s;

    core::Vector3D** p= normalVectors_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<int> TriangleMesh::nodeIndices() const
{
    std::vector<int> res;
    size_t s;

    int* p= nodeIndices_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<double> TriangleMesh::textureCoordinatesAsDouble() const
{
    std::vector<double> res;
    size_t s;

    double* p= textureCoordinatesAsDouble_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<float> TriangleMesh::textureCoordinatesAsFloat() const
{
    std::vector<float> res;
    size_t s;

    float* p= textureCoordinatesAsFloat_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<core::Point2D>> TriangleMesh::textureCoordinates() const
{
    std::vector<core::Ptr<core::Point2D>> res;
    size_t s;

    core::Point2D** p= textureCoordinates_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline double TriangleMesh::surfaceTolerance() const
{
    double res = surfaceTolerance_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TRIANGLEMESH_API