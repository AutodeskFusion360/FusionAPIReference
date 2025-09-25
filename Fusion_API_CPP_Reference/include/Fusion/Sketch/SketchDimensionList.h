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
# ifdef __COMPILING_ADSK_FUSION_SKETCHDIMENSIONLIST_CPP__
# define ADSK_FUSION_SKETCHDIMENSIONLIST_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHDIMENSIONLIST_API
# endif
#else
# define ADSK_FUSION_SKETCHDIMENSIONLIST_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class SketchDimension;
}}

namespace adsk { namespace fusion {

/// A list of sketch dimensions.
class SketchDimensionList : public core::Base {
public:

    /// Function that returns the specified sketch dimension using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection
    /// has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SketchDimension> item(size_t index) const;

    /// Returns the number of sketch dimensions in the sketch.
    size_t count() const;

    typedef SketchDimension iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SKETCHDIMENSIONLIST_API static const char* classType();
    ADSK_FUSION_SKETCHDIMENSIONLIST_API const char* objectType() const override;
    ADSK_FUSION_SKETCHDIMENSIONLIST_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHDIMENSIONLIST_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchDimension* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<SketchDimension> SketchDimensionList::item(size_t index) const
{
    core::Ptr<SketchDimension> res = item_raw(index);
    return res;
}

inline size_t SketchDimensionList::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void SketchDimensionList::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHDIMENSIONLIST_API