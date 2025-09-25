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
#include "CustomGraphicsEntity.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSMESH_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSMESH_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSMESH_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSMESH_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class CustomGraphicsCoordinates;
}}

namespace adsk { namespace fusion {

/// Represents a custom triangle mesh drawn in the graphics window.
class CustomGraphicsMesh : public CustomGraphicsEntity {
public:

    /// Gets and sets the coordinates associated with this CustomGraphicsMesh.
    core::Ptr<CustomGraphicsCoordinates> coordinates() const;
    bool coordinates(const core::Ptr<CustomGraphicsCoordinates>& value);

    /// Gets and sets the normal vectors of the mesh where there is a normal
    /// vector at each node. The normals are defined as an array
    /// of floats where they are the x, y, z components of each vector.
    std::vector<double> normalVectors() const;
    bool normalVectors(const std::vector<double>& value);

    /// Gets and sets an array of indices that define which coordinate in the
    /// coordinate list is used for each vertex in the mesh. Each set of three
    /// indices defines a triangle. For example:
    /// Indices 0, 1, and 2 define the coordinates to use for the first triangle and
    /// indices 3, 4, and 5 define the coordinates for the second triangle, and so on.
    std::vector<int> vertexIndexList() const;
    bool vertexIndexList(const std::vector<int>& value);

    /// Gets and sets an array of indices that define which normal is associated
    /// with each vertex in the mesh. This is used to look-up the normal in the
    /// normalVectors array.
    std::vector<int> normalIndexList() const;
    bool normalIndexList(const std::vector<int>& value);

    /// Gets and sets the texture coordinates as an array of floats where
    /// they are the u,v components at each node. They are defined as an
    /// array of doubles where they are the u, v coordinates of each node.
    /// Defining texture coordinates for a mesh is optional.
    std::vector<double> textureCoordinates() const;
    bool textureCoordinates(const std::vector<double>& value);

    ADSK_FUSION_CUSTOMGRAPHICSMESH_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSMESH_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSMESH_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSMESH_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CustomGraphicsCoordinates* coordinates_raw() const = 0;
    virtual bool coordinates_raw(CustomGraphicsCoordinates* value) = 0;
    virtual double* normalVectors_raw(size_t& return_size) const = 0;
    virtual bool normalVectors_raw(const double* value, size_t value_size) = 0;
    virtual int* vertexIndexList_raw(size_t& return_size) const = 0;
    virtual bool vertexIndexList_raw(const int* value, size_t value_size) = 0;
    virtual int* normalIndexList_raw(size_t& return_size) const = 0;
    virtual bool normalIndexList_raw(const int* value, size_t value_size) = 0;
    virtual double* textureCoordinates_raw(size_t& return_size) const = 0;
    virtual bool textureCoordinates_raw(const double* value, size_t value_size) = 0;
};

// Inline wrappers

inline core::Ptr<CustomGraphicsCoordinates> CustomGraphicsMesh::coordinates() const
{
    core::Ptr<CustomGraphicsCoordinates> res = coordinates_raw();
    return res;
}

inline bool CustomGraphicsMesh::coordinates(const core::Ptr<CustomGraphicsCoordinates>& value)
{
    return coordinates_raw(value.get());
}

inline std::vector<double> CustomGraphicsMesh::normalVectors() const
{
    std::vector<double> res;
    size_t s;

    double* p= normalVectors_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomGraphicsMesh::normalVectors(const std::vector<double>& value)
{
    return normalVectors_raw(value.empty() ? nullptr : &value[0], value.size());
}

inline std::vector<int> CustomGraphicsMesh::vertexIndexList() const
{
    std::vector<int> res;
    size_t s;

    int* p= vertexIndexList_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomGraphicsMesh::vertexIndexList(const std::vector<int>& value)
{
    return vertexIndexList_raw(value.empty() ? nullptr : &value[0], value.size());
}

inline std::vector<int> CustomGraphicsMesh::normalIndexList() const
{
    std::vector<int> res;
    size_t s;

    int* p= normalIndexList_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomGraphicsMesh::normalIndexList(const std::vector<int>& value)
{
    return normalIndexList_raw(value.empty() ? nullptr : &value[0], value.size());
}

inline std::vector<double> CustomGraphicsMesh::textureCoordinates() const
{
    std::vector<double> res;
    size_t s;

    double* p= textureCoordinates_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomGraphicsMesh::textureCoordinates(const std::vector<double>& value)
{
    return textureCoordinates_raw(value.empty() ? nullptr : &value[0], value.size());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSMESH_API