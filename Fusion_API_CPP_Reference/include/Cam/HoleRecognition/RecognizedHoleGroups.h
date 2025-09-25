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
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_RECOGNIZEDHOLEGROUPS_CPP__
# define ADSK_CAM_RECOGNIZEDHOLEGROUPS_API XI_EXPORT
# else
# define ADSK_CAM_RECOGNIZEDHOLEGROUPS_API
# endif
#else
# define ADSK_CAM_RECOGNIZEDHOLEGROUPS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class RecognizedHoleGroup;
}}

namespace adsk { namespace cam {

/// Object that represents a collection of hole groups.
class RecognizedHoleGroups : public core::Base {
public:

    /// Returns the hole group at the specified index from this collection of hole groups.
    /// index : The index of the hole group within this hole group collection to return. The first hole group in this collection has an index of 0.
    core::Ptr<RecognizedHoleGroup> item(size_t index) const;

    /// Returns the number of hole groups contained in this hole group collection.
    size_t count() const;

    typedef RecognizedHoleGroup iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_RECOGNIZEDHOLEGROUPS_API static const char* classType();
    ADSK_CAM_RECOGNIZEDHOLEGROUPS_API const char* objectType() const override;
    ADSK_CAM_RECOGNIZEDHOLEGROUPS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_RECOGNIZEDHOLEGROUPS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual RecognizedHoleGroup* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<RecognizedHoleGroup> RecognizedHoleGroups::item(size_t index) const
{
    core::Ptr<RecognizedHoleGroup> res = item_raw(index);
    return res;
}

inline size_t RecognizedHoleGroups::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void RecognizedHoleGroups::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_RECOGNIZEDHOLEGROUPS_API