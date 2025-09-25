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
# ifdef __COMPILING_ADSK_FUSION_PROFILECURVES_CPP__
# define ADSK_FUSION_PROFILECURVES_API XI_EXPORT
# else
# define ADSK_FUSION_PROFILECURVES_API
# endif
#else
# define ADSK_FUSION_PROFILECURVES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ProfileCurve;
}}

namespace adsk { namespace fusion {

/// A collection of profile curves within a profile loop.
class ProfileCurves : public core::Base {
public:

    /// Function that returns the specified profile curve using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ProfileCurve> item(size_t index) const;

    /// Returns the number of curves in the collection.
    size_t count() const;

    typedef ProfileCurve iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_PROFILECURVES_API static const char* classType();
    ADSK_FUSION_PROFILECURVES_API const char* objectType() const override;
    ADSK_FUSION_PROFILECURVES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PROFILECURVES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ProfileCurve* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ProfileCurve> ProfileCurves::item(size_t index) const
{
    core::Ptr<ProfileCurve> res = item_raw(index);
    return res;
}

inline size_t ProfileCurves::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void ProfileCurves::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PROFILECURVES_API