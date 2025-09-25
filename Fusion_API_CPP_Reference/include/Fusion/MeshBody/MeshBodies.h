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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MESHBODIES_CPP__
# define ADSK_FUSION_MESHBODIES_API XI_EXPORT
# else
# define ADSK_FUSION_MESHBODIES_API
# endif
#else
# define ADSK_FUSION_MESHBODIES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class MeshBody;
    class MeshBodyList;
}}

namespace adsk { namespace fusion {

/// Provides access to the MeshBodies in the parent Component and
/// supports the creation of new mesh bodies.
class MeshBodies : public core::Base {
public:

    /// Creates a new mesh body by importing an STL, OBJ or 3MF file.
    /// 
    /// Because of a current limitation, if you want to create a mesh body in a parametric model,
    /// you must first call the edit method of the base or form feature, use this method to create
    /// the mesh body, and then call the finishEdit method of the base or form feature. The base
    /// or form feature must be in an "edit" state to be able to add any additional items to it.
    /// fullFilename : The full filename (path and file) of a STL, OBJ or 3MF file.
    /// units : The units to use when importing the file.
    /// baseOrFormFeature : The BaseFeature or FormFeature object that this mesh body will be associated with. This is an optional
    /// requirement. It is required in a parametric modeling design but is ignored in a direct modeling design.
    /// Returns a list of the newly created mesh bodies or null if the creation failed. Multiple
    /// bodies can be created in the case where a .obj file that contains multiple bodies was imported.
    /// STL files always contain a single body.
    core::Ptr<MeshBodyList> add(const std::string& fullFilename, MeshUnits units, const core::Ptr<core::Base>& baseOrFormFeature = NULL);

    /// Provides access to a mesh body within the collection.
    /// index : The index of the mesh body to return, where an index of 0 is the first mesh body in the collection.
    /// Returns the specified mesh body or null in the case of a invalid index.
    core::Ptr<MeshBody> item(size_t index) const;

    /// Returns the number of mesh bodies in the collection.
    size_t count() const;

    /// Creates a new mesh body using the mesh description provided.
    /// coordinates : Input array of doubles that defines the X, Y, Z coordinates of each node in the mesh. Each set of three numbers define
    /// the coordinates of a node.
    /// coordinateIndexList : An array of integers that represent indices into the coordinates to define the vertices of the triangles. If an empty
    /// array is provided, then it's assumed that the first three coordinates defines the first triangle, the next three define
    /// the second triangle, and so on.
    /// normalVectors : An array of doubles that represent the x, y, z components of the normals at each coordinate. There should be a normal defined
    /// for each coordinate. If an empty array is provided for the normal vectors, Fusion will automatically calculate normal vectors
    /// that are 90 degrees to the face of the triangle, making it appear flat.
    /// normalIndexList : An array of integers that represent indices into the normal vectors to define the which vector corresponds to which vertex. This
    /// should be the same size as the vertex index list. If an empty array is input and normal vectors are provided, it is assumed that
    /// the normals match up one-to-one to each coordinate.
    /// Returns the newly created MeshBody object or null in the case of a failure.
    core::Ptr<MeshBody> addByTriangleMeshData(const std::vector<double>& coordinates, const std::vector<int>& coordinateIndexList, const std::vector<double>& normalVectors, const std::vector<int>& normalIndexList);

    typedef MeshBody iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_MESHBODIES_API static const char* classType();
    ADSK_FUSION_MESHBODIES_API const char* objectType() const override;
    ADSK_FUSION_MESHBODIES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHBODIES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshBodyList* add_raw(const char* fullFilename, MeshUnits units, core::Base* baseOrFormFeature) = 0;
    virtual MeshBody* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual MeshBody* addByTriangleMeshData_raw(const double* coordinates, size_t coordinates_size, const int* coordinateIndexList, size_t coordinateIndexList_size, const double* normalVectors, size_t normalVectors_size, const int* normalIndexList, size_t normalIndexList_size) = 0;
};

// Inline wrappers

inline core::Ptr<MeshBodyList> MeshBodies::add(const std::string& fullFilename, MeshUnits units, const core::Ptr<core::Base>& baseOrFormFeature)
{
    core::Ptr<MeshBodyList> res = add_raw(fullFilename.c_str(), units, baseOrFormFeature.get());
    return res;
}

inline core::Ptr<MeshBody> MeshBodies::item(size_t index) const
{
    core::Ptr<MeshBody> res = item_raw(index);
    return res;
}

inline size_t MeshBodies::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<MeshBody> MeshBodies::addByTriangleMeshData(const std::vector<double>& coordinates, const std::vector<int>& coordinateIndexList, const std::vector<double>& normalVectors, const std::vector<int>& normalIndexList)
{
    core::Ptr<MeshBody> res = addByTriangleMeshData_raw(coordinates.empty() ? nullptr : &coordinates[0], coordinates.size(), coordinateIndexList.empty() ? nullptr : &coordinateIndexList[0], coordinateIndexList.size(), normalVectors.empty() ? nullptr : &normalVectors[0], normalVectors.size(), normalIndexList.empty() ? nullptr : &normalIndexList[0], normalIndexList.size());
    return res;
}

template <class OutputIterator> inline void MeshBodies::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHBODIES_API