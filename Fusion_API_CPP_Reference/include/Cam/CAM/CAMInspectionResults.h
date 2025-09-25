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
# ifdef __COMPILING_ADSK_CAM_CAMINSPECTIONRESULTS_CPP__
# define ADSK_CAM_CAMINSPECTIONRESULTS_API XI_EXPORT
# else
# define ADSK_CAM_CAMINSPECTIONRESULTS_API
# endif
#else
# define ADSK_CAM_CAMINSPECTIONRESULTS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMMeasure;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to the Measures in a results folder.
class CAMInspectionResults : public core::Base {
public:

    /// Function that returns the specified measure using an index into the collection.
    /// index : The index of the item within the collection to return.  The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<CAMMeasure> item(size_t index) const;

    /// Returns the measure with the specified name (as appears in the browser).
    /// name : The name (as it appears in the browser) of the measure.
    /// Returns the specified measure or null in the case where there is no measure with the specified name.
    core::Ptr<CAMMeasure> itemByName(const std::string& name) const;

    /// The number of measures in the collection.
    size_t count() const;

    typedef CAMMeasure iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_CAMINSPECTIONRESULTS_API static const char* classType();
    ADSK_CAM_CAMINSPECTIONRESULTS_API const char* objectType() const override;
    ADSK_CAM_CAMINSPECTIONRESULTS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMINSPECTIONRESULTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CAMMeasure* item_raw(size_t index) const = 0;
    virtual CAMMeasure* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<CAMMeasure> CAMInspectionResults::item(size_t index) const
{
    core::Ptr<CAMMeasure> res = item_raw(index);
    return res;
}

inline core::Ptr<CAMMeasure> CAMInspectionResults::itemByName(const std::string& name) const
{
    core::Ptr<CAMMeasure> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t CAMInspectionResults::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void CAMInspectionResults::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMINSPECTIONRESULTS_API