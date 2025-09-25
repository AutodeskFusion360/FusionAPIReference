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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_OCCURRENCELIST_CPP__
# define ADSK_FUSION_OCCURRENCELIST_API XI_EXPORT
# else
# define ADSK_FUSION_OCCURRENCELIST_API
# endif
#else
# define ADSK_FUSION_OCCURRENCELIST_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Provides a list of occurrences.
class OccurrenceList : public core::Base {
public:

    /// Returns the specified occurrence using an index into the collection.
    /// index : The index of the occurrence within the collection to return. The first item has an index of 0.
    /// Returns the specified occurrence or null in the case of an invalid index.
    core::Ptr<Occurrence> item(size_t index) const;

    /// Returns the number of occurrences in the collection.
    size_t count() const;

    /// Returns the specified occurrence using the name of the occurrence.
    /// name : The name of the occurrence to return.
    /// Returns the occurrence or null if an invalid name was specified
    core::Ptr<Occurrence> itemByName(const std::string& name) const;

    typedef Occurrence iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_OCCURRENCELIST_API static const char* classType();
    ADSK_FUSION_OCCURRENCELIST_API const char* objectType() const override;
    ADSK_FUSION_OCCURRENCELIST_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_OCCURRENCELIST_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Occurrence* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Occurrence* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<Occurrence> OccurrenceList::item(size_t index) const
{
    core::Ptr<Occurrence> res = item_raw(index);
    return res;
}

inline size_t OccurrenceList::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<Occurrence> OccurrenceList::itemByName(const std::string& name) const
{
    core::Ptr<Occurrence> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void OccurrenceList::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_OCCURRENCELIST_API