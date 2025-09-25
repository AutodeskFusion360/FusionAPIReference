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
# ifdef __COMPILING_ADSK_FUSION_TRIANGLEMESHLIST_CPP__
# define ADSK_FUSION_TRIANGLEMESHLIST_API XI_EXPORT
# else
# define ADSK_FUSION_TRIANGLEMESHLIST_API
# endif
#else
# define ADSK_FUSION_TRIANGLEMESHLIST_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class TriangleMesh;
}}

namespace adsk { namespace fusion {

/// Provides access to a set of triangle meshes.
class TriangleMeshList : public core::Base {
public:

    /// Returns the specified triangle meshes.
    /// index : The index of the mesh to return where the first item has an index of 0.
    /// Returns the specified mesh or null in the case of invalid index.
    core::Ptr<TriangleMesh> item(size_t index) const;

    /// Returns the mesh with the tightest surface tolerance. This can return null
    /// in the case the list is empty, i.e. Count is 0.
    core::Ptr<TriangleMesh> bestMesh() const;

    /// Returns the number of meshes in the collection.
    size_t count() const;

    typedef TriangleMesh iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_TRIANGLEMESHLIST_API static const char* classType();
    ADSK_FUSION_TRIANGLEMESHLIST_API const char* objectType() const override;
    ADSK_FUSION_TRIANGLEMESHLIST_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TRIANGLEMESHLIST_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual TriangleMesh* item_raw(size_t index) const = 0;
    virtual TriangleMesh* bestMesh_raw() const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<TriangleMesh> TriangleMeshList::item(size_t index) const
{
    core::Ptr<TriangleMesh> res = item_raw(index);
    return res;
}

inline core::Ptr<TriangleMesh> TriangleMeshList::bestMesh() const
{
    core::Ptr<TriangleMesh> res = bestMesh_raw();
    return res;
}

inline size_t TriangleMeshList::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void TriangleMeshList::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TRIANGLEMESHLIST_API