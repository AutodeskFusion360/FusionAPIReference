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
# ifdef __COMPILING_ADSK_FUSION_PROFILES_CPP__
# define ADSK_FUSION_PROFILES_API XI_EXPORT
# else
# define ADSK_FUSION_PROFILES_API
# endif
#else
# define ADSK_FUSION_PROFILES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Profile;
}}

namespace adsk { namespace fusion {

/// A collection of all of the closed profiles currently calculated for this sketch. Closed profiles are
/// automatically computed by Fusion and represent closed areas within the sketch.
/// 
/// This class also provides some additional utility functions to create open profiles and text based profiles
/// that can be used as input for various features.
class Profiles : public core::Base {
public:

    /// Function that returns the specified closed profile using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the
    /// collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Profile> item(size_t index) const;

    /// Returns the number of closed profiles in the sketch. Open and text based profiles are not included.
    size_t count() const;

    typedef Profile iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_PROFILES_API static const char* classType();
    ADSK_FUSION_PROFILES_API const char* objectType() const override;
    ADSK_FUSION_PROFILES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PROFILES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Profile* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Profile> Profiles::item(size_t index) const
{
    core::Ptr<Profile> res = item_raw(index);
    return res;
}

inline size_t Profiles::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void Profiles::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PROFILES_API