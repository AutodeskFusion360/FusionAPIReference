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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGEOCCURRENCERESULTS_CPP__
# define ADSK_FUSION_ARRANGEOCCURRENCERESULTS_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGEOCCURRENCERESULTS_API
# endif
#else
# define ADSK_FUSION_ARRANGEOCCURRENCERESULTS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ArrangeOccurrenceResult;
}}

namespace adsk { namespace fusion {

/// A collection that contains the occurrences in an Arrange envelope.
class ArrangeOccurrenceResults : public core::Base {
public:

    /// Returns the specified Arrange occurrence using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ArrangeOccurrenceResult> item(size_t index) const;

    /// Returns the number of Arrange occurrences in the collection.
    size_t count() const;

    typedef ArrangeOccurrenceResult iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_ARRANGEOCCURRENCERESULTS_API static const char* classType();
    ADSK_FUSION_ARRANGEOCCURRENCERESULTS_API const char* objectType() const override;
    ADSK_FUSION_ARRANGEOCCURRENCERESULTS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGEOCCURRENCERESULTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ArrangeOccurrenceResult* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ArrangeOccurrenceResult> ArrangeOccurrenceResults::item(size_t index) const
{
    core::Ptr<ArrangeOccurrenceResult> res = item_raw(index);
    return res;
}

inline size_t ArrangeOccurrenceResults::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void ArrangeOccurrenceResults::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGEOCCURRENCERESULTS_API