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
# ifdef __COMPILING_ADSK_FUSION_MESHBODYLIST_CPP__
# define ADSK_FUSION_MESHBODYLIST_API XI_EXPORT
# else
# define ADSK_FUSION_MESHBODYLIST_API
# endif
#else
# define ADSK_FUSION_MESHBODYLIST_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class MeshBody;
}}

namespace adsk { namespace fusion {

/// Provides access to a list of MeshBody objects.
class MeshBodyList : public core::Base {
public:

    /// Provides access to a mesh body within the collection.
    /// index : The index of the mesh body to return, where an index of 0 is the first mesh body in the collection.
    /// Returns the specified mesh body or null in the case of a invalid index.
    core::Ptr<MeshBody> item(size_t index) const;

    /// Returns the number of mesh bodies in the collection.
    size_t count() const;

    typedef MeshBody iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_MESHBODYLIST_API static const char* classType();
    ADSK_FUSION_MESHBODYLIST_API const char* objectType() const override;
    ADSK_FUSION_MESHBODYLIST_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHBODYLIST_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshBody* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<MeshBody> MeshBodyList::item(size_t index) const
{
    core::Ptr<MeshBody> res = item_raw(index);
    return res;
}

inline size_t MeshBodyList::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void MeshBodyList::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHBODYLIST_API