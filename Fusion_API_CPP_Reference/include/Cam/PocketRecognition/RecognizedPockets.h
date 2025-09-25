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
# ifdef __COMPILING_ADSK_CAM_RECOGNIZEDPOCKETS_CPP__
# define ADSK_CAM_RECOGNIZEDPOCKETS_API XI_EXPORT
# else
# define ADSK_CAM_RECOGNIZEDPOCKETS_API
# endif
#else
# define ADSK_CAM_RECOGNIZEDPOCKETS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class RecognizedPocket;
}}

namespace adsk { namespace cam {

/// Object that represents a collection of pockets.
class RecognizedPockets : public core::Base {
public:

    /// Returns the pocket at the specified index from this collection of pockets.
    /// index : The index of the pocket within this pocket collection to return. The first pocket in this collection has an index of 0.
    core::Ptr<RecognizedPocket> item(size_t index) const;

    /// Returns the number of pockets contained in this pocket collection.
    size_t count() const;

    typedef RecognizedPocket iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_RECOGNIZEDPOCKETS_API static const char* classType();
    ADSK_CAM_RECOGNIZEDPOCKETS_API const char* objectType() const override;
    ADSK_CAM_RECOGNIZEDPOCKETS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_RECOGNIZEDPOCKETS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual RecognizedPocket* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<RecognizedPocket> RecognizedPockets::item(size_t index) const
{
    core::Ptr<RecognizedPocket> res = item_raw(index);
    return res;
}

inline size_t RecognizedPockets::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void RecognizedPockets::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_RECOGNIZEDPOCKETS_API