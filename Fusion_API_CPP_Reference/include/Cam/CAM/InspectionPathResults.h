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
# ifdef __COMPILING_ADSK_CAM_INSPECTIONPATHRESULTS_CPP__
# define ADSK_CAM_INSPECTIONPATHRESULTS_API XI_EXPORT
# else
# define ADSK_CAM_INSPECTIONPATHRESULTS_API
# endif
#else
# define ADSK_CAM_INSPECTIONPATHRESULTS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class InspectionPathResult;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// collection of inspection paths results.
class InspectionPathResults : public core::Base {
public:

    /// Function that returns the specified InspectionPathResult using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<InspectionPathResult> item(size_t index) const;

    /// The number of InspectionPathResult in the collection.
    size_t count() const;

    typedef InspectionPathResult iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_INSPECTIONPATHRESULTS_API static const char* classType();
    ADSK_CAM_INSPECTIONPATHRESULTS_API const char* objectType() const override;
    ADSK_CAM_INSPECTIONPATHRESULTS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_INSPECTIONPATHRESULTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual InspectionPathResult* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<InspectionPathResult> InspectionPathResults::item(size_t index) const
{
    core::Ptr<InspectionPathResult> res = item_raw(index);
    return res;
}

inline size_t InspectionPathResults::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void InspectionPathResults::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_INSPECTIONPATHRESULTS_API