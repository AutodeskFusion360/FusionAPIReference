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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAMPATTERNS_CPP__
# define ADSK_CAM_CAMPATTERNS_API XI_EXPORT
# else
# define ADSK_CAM_CAMPATTERNS_API
# endif
#else
# define ADSK_CAM_CAMPATTERNS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMPattern;
}}

namespace adsk { namespace cam {

/// Collection that provides access to the patterns within an existing setup, folder or pattern.
class CAMPatterns : public core::Base {
public:

    /// Function that returns the specified pattern using an index into the collection.
    /// index : The index of the item within the collection to return.  The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<CAMPattern> item(size_t index) const;

    /// Returns the pattern with the specified name (as appears in the browser).
    /// name : The name (as it appears in the browser) of the pattern.
    /// Returns the specified pattern or null in the case where there is no pattern with the specified name.
    core::Ptr<CAMPattern> itemByName(const std::string& name) const;

    /// The number of items in the collection.
    size_t count() const;

    /// Returns the pattern with the specified operation id.
    /// id : The id of the pattern.
    /// Returns the specified pattern or null in the case where there is no pattern with the specified operation id.
    core::Ptr<CAMPattern> itemByOperationId(int id) const;

    typedef CAMPattern iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_CAMPATTERNS_API static const char* classType();
    ADSK_CAM_CAMPATTERNS_API const char* objectType() const override;
    ADSK_CAM_CAMPATTERNS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMPATTERNS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CAMPattern* item_raw(size_t index) const = 0;
    virtual CAMPattern* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual CAMPattern* itemByOperationId_raw(int id) const = 0;
};

// Inline wrappers

inline core::Ptr<CAMPattern> CAMPatterns::item(size_t index) const
{
    core::Ptr<CAMPattern> res = item_raw(index);
    return res;
}

inline core::Ptr<CAMPattern> CAMPatterns::itemByName(const std::string& name) const
{
    core::Ptr<CAMPattern> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t CAMPatterns::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<CAMPattern> CAMPatterns::itemByOperationId(int id) const
{
    core::Ptr<CAMPattern> res = itemByOperationId_raw(id);
    return res;
}

template <class OutputIterator> inline void CAMPatterns::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMPATTERNS_API