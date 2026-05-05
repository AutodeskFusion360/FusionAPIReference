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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGERESULTENVELOPES_CPP__
# define ADSK_FUSION_ARRANGERESULTENVELOPES_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGERESULTENVELOPES_API
# endif
#else
# define ADSK_FUSION_ARRANGERESULTENVELOPES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ArrangeResultEnvelope;
}}

namespace adsk { namespace fusion {

/// Provides access to the results of an arrangement. For 3D arrangements, this will always
/// contain a single result. For plane or profile envelopes this can contain multiple envelope results.
class ArrangeResultEnvelopes : public core::Base {
public:

    /// Returns the specified Arrange envelope result using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ArrangeResultEnvelope> item(size_t index) const;

    /// Returns the number of Arrange envelope results for this Arrange feature.
    size_t count() const;

    typedef ArrangeResultEnvelope iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_ARRANGERESULTENVELOPES_API static const char* classType();
    ADSK_FUSION_ARRANGERESULTENVELOPES_API const char* objectType() const override;
    ADSK_FUSION_ARRANGERESULTENVELOPES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGERESULTENVELOPES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ArrangeResultEnvelope* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ArrangeResultEnvelope> ArrangeResultEnvelopes::item(size_t index) const
{
    core::Ptr<ArrangeResultEnvelope> res = item_raw(index);
    return res;
}

inline size_t ArrangeResultEnvelopes::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void ArrangeResultEnvelopes::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGERESULTENVELOPES_API