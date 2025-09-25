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
# ifdef __COMPILING_ADSK_FUSION_POLYGONMESH_CPP__
# define ADSK_FUSION_POLYGONMESH_API XI_EXPORT
# else
# define ADSK_FUSION_POLYGONMESH_API
# endif
#else
# define ADSK_FUSION_POLYGONMESH_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace fusion {

/// The PolygonMesh represents a mesh that can contain any
/// combination of polygons, quads, and triangles.
class PolygonMesh : public core::Base {
public:

    /// Returns the number of nodes in the mesh.
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

    /// Returns the number of quads in the mesh.
    int quadCount() const;

    /// Returns the number of polygons (more than 4 sides) in the mesh.
    int polygonCount() const;

    /// Returns the normal vectors as an array of doubles where
    /// they are the x, y, z components of each vector. There is one normal vector for each index.
    std::vector<double> normalVectorsAsDouble() const;

    /// Returns the normal vectors as an array of floats. There is one normal vector for each index.
    std::vector<float> normalVectorsAsFloat() const;

    /// Returns the normal vectors as an array of Vector 3D objects. There is one normal vector for each index.
    std::vector<core::Ptr<core::Vector3D>> normalVectors() const;

    /// Returns the index values that index into the NodeCoordinates and NormalVectors arrays to
    /// define the three coordinates of each triangle and the corresponding normal.
    std::vector<int> triangleNodeIndices() const;

    /// Returns the index values that index into the NodeCoordinates and NormalVectors arrays to
    /// define the four coordinates of each quad and the corresponding normal.
    std::vector<int> quadNodeIndices() const;

    /// Returns the index values that index into the NodeCoordinates and NormalVectors arrays to
    /// define the coordinates of each polygon and the corresponding normal.
    std::vector<int> polygonNodeIndices() const;

    /// Returns the number of nodes that define each polygon. For example,
    /// if NodeCountPerPolygon[0] returns 6 it indicates the first polygon
    /// is defined using 6 nodes. The first six indices returned by the
    /// PolygonNodeIndices properties provide the look-up into the NodeCoordinates
    /// array.
    std::vector<int> nodeCountPerPolygon() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the face groups tempId values for every triangle of the mesh. The tempId corresponds
    /// to the triangles, which are defined in triangleNodeIndices.
    std::vector<int> triangleFaceGroupTempIds() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the wall thickness per node in cm. This property calculates the wall thickness of the mesh,
    /// i.e. the distance of a surface of the mesh to the opposing surface.
    std::vector<float> wallThickness() const;

    ADSK_FUSION_POLYGONMESH_API static const char* classType();
    ADSK_FUSION_POLYGONMESH_API const char* objectType() const override;
    ADSK_FUSION_POLYGONMESH_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_POLYGONMESH_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int nodeCount_raw() const = 0;
    virtual double* nodeCoordinatesAsDouble_raw(size_t& return_size) const = 0;
    virtual float* nodeCoordinatesAsFloat_raw(size_t& return_size) const = 0;
    virtual core::Point3D** nodeCoordinates_raw(size_t& return_size) const = 0;
    virtual int triangleCount_raw() const = 0;
    virtual int quadCount_raw() const = 0;
    virtual int polygonCount_raw() const = 0;
    virtual double* normalVectorsAsDouble_raw(size_t& return_size) const = 0;
    virtual float* normalVectorsAsFloat_raw(size_t& return_size) const = 0;
    virtual core::Vector3D** normalVectors_raw(size_t& return_size) const = 0;
    virtual int* triangleNodeIndices_raw(size_t& return_size) const = 0;
    virtual int* quadNodeIndices_raw(size_t& return_size) const = 0;
    virtual int* polygonNodeIndices_raw(size_t& return_size) const = 0;
    virtual int* nodeCountPerPolygon_raw(size_t& return_size) const = 0;
    virtual int* triangleFaceGroupTempIds_raw(size_t& return_size) const = 0;
    virtual float* wallThickness_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline int PolygonMesh::nodeCount() const
{
    int res = nodeCount_raw();
    return res;
}

inline std::vector<double> PolygonMesh::nodeCoordinatesAsDouble() const
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

inline std::vector<float> PolygonMesh::nodeCoordinatesAsFloat() const
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

inline std::vector<core::Ptr<core::Point3D>> PolygonMesh::nodeCoordinates() const
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

inline int PolygonMesh::triangleCount() const
{
    int res = triangleCount_raw();
    return res;
}

inline int PolygonMesh::quadCount() const
{
    int res = quadCount_raw();
    return res;
}

inline int PolygonMesh::polygonCount() const
{
    int res = polygonCount_raw();
    return res;
}

inline std::vector<double> PolygonMesh::normalVectorsAsDouble() const
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

inline std::vector<float> PolygonMesh::normalVectorsAsFloat() const
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

inline std::vector<core::Ptr<core::Vector3D>> PolygonMesh::normalVectors() const
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

inline std::vector<int> PolygonMesh::triangleNodeIndices() const
{
    std::vector<int> res;
    size_t s;

    int* p= triangleNodeIndices_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<int> PolygonMesh::quadNodeIndices() const
{
    std::vector<int> res;
    size_t s;

    int* p= quadNodeIndices_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<int> PolygonMesh::polygonNodeIndices() const
{
    std::vector<int> res;
    size_t s;

    int* p= polygonNodeIndices_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<int> PolygonMesh::nodeCountPerPolygon() const
{
    std::vector<int> res;
    size_t s;

    int* p= nodeCountPerPolygon_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<int> PolygonMesh::triangleFaceGroupTempIds() const
{
    std::vector<int> res;
    size_t s;

    int* p= triangleFaceGroupTempIds_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<float> PolygonMesh::wallThickness() const
{
    std::vector<float> res;
    size_t s;

    float* p= wallThickness_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_POLYGONMESH_API