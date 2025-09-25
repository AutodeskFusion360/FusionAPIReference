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
# ifdef __COMPILING_ADSK_FUSION_CURVATUREMAPANALYSES_CPP__
# define ADSK_FUSION_CURVATUREMAPANALYSES_API XI_EXPORT
# else
# define ADSK_FUSION_CURVATUREMAPANALYSES_API
# endif
#else
# define ADSK_FUSION_CURVATUREMAPANALYSES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class CurvatureMapAnalysis;
}}

namespace adsk { namespace fusion {

/// Provides access to any curvature map analyses results in the design.
class CurvatureMapAnalyses : public core::Base {
public:

    /// A method that returns the specified CurvatureMapAnalysis object using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection
    /// has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<CurvatureMapAnalysis> item(size_t index) const;

    /// A method that returns the specified CurvatureMapAnalysis object using the name of the analysis
    /// as displayed in the browser.
    /// name : The name of the CurvatureMapAnalysis object as displayed in the browser.
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<CurvatureMapAnalysis> itemByName(const std::string& name) const;

    /// Returns the number of CurvatureMapAnalysis objects in the collection.
    size_t count() const;

    typedef CurvatureMapAnalysis iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CURVATUREMAPANALYSES_API static const char* classType();
    ADSK_FUSION_CURVATUREMAPANALYSES_API const char* objectType() const override;
    ADSK_FUSION_CURVATUREMAPANALYSES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CURVATUREMAPANALYSES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CurvatureMapAnalysis* item_raw(size_t index) const = 0;
    virtual CurvatureMapAnalysis* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<CurvatureMapAnalysis> CurvatureMapAnalyses::item(size_t index) const
{
    core::Ptr<CurvatureMapAnalysis> res = item_raw(index);
    return res;
}

inline core::Ptr<CurvatureMapAnalysis> CurvatureMapAnalyses::itemByName(const std::string& name) const
{
    core::Ptr<CurvatureMapAnalysis> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t CurvatureMapAnalyses::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void CurvatureMapAnalyses::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CURVATUREMAPANALYSES_API