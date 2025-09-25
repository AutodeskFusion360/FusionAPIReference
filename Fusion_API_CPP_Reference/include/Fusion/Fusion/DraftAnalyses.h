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
# ifdef __COMPILING_ADSK_FUSION_DRAFTANALYSES_CPP__
# define ADSK_FUSION_DRAFTANALYSES_API XI_EXPORT
# else
# define ADSK_FUSION_DRAFTANALYSES_API
# endif
#else
# define ADSK_FUSION_DRAFTANALYSES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class DraftAnalysis;
}}

namespace adsk { namespace fusion {

/// Provides access to any draft analyses results in the design.
class DraftAnalyses : public core::Base {
public:

    /// A method that returns the specified DraftAnalysis object using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection
    /// has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<DraftAnalysis> item(size_t index) const;

    /// A method that returns the specified DraftAnalysis object using the name of the analysis
    /// as displayed in the browser.
    /// name : The name of the DraftAnalysis object as displayed in the browser.
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<DraftAnalysis> itemByName(const std::string& name) const;

    /// Returns the number of DraftAnalysis objects in the collection.
    size_t count() const;

    typedef DraftAnalysis iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_DRAFTANALYSES_API static const char* classType();
    ADSK_FUSION_DRAFTANALYSES_API const char* objectType() const override;
    ADSK_FUSION_DRAFTANALYSES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DRAFTANALYSES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DraftAnalysis* item_raw(size_t index) const = 0;
    virtual DraftAnalysis* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<DraftAnalysis> DraftAnalyses::item(size_t index) const
{
    core::Ptr<DraftAnalysis> res = item_raw(index);
    return res;
}

inline core::Ptr<DraftAnalysis> DraftAnalyses::itemByName(const std::string& name) const
{
    core::Ptr<DraftAnalysis> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t DraftAnalyses::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void DraftAnalyses::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DRAFTANALYSES_API