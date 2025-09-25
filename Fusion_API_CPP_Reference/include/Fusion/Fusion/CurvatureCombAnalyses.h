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
# ifdef __COMPILING_ADSK_FUSION_CURVATURECOMBANALYSES_CPP__
# define ADSK_FUSION_CURVATURECOMBANALYSES_API XI_EXPORT
# else
# define ADSK_FUSION_CURVATURECOMBANALYSES_API
# endif
#else
# define ADSK_FUSION_CURVATURECOMBANALYSES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class CurvatureCombAnalysis;
}}

namespace adsk { namespace fusion {

/// Provides access to any curvature comb analyses results in the design.
class CurvatureCombAnalyses : public core::Base {
public:

    /// A method that returns the specified CurvatureCombAnalysis object using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection
    /// has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<CurvatureCombAnalysis> item(size_t index) const;

    /// A method that returns the specified CurvatureCombAnalysis object using the name of the analysis
    /// as displayed in the browser.
    /// name : The name of the CurvatureCombAnalysis object as displayed in the browser.
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<CurvatureCombAnalysis> itemByName(const std::string& name) const;

    /// Returns the number of CurvatureCombAnalysis objects in the collection.
    size_t count() const;

    typedef CurvatureCombAnalysis iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CURVATURECOMBANALYSES_API static const char* classType();
    ADSK_FUSION_CURVATURECOMBANALYSES_API const char* objectType() const override;
    ADSK_FUSION_CURVATURECOMBANALYSES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CURVATURECOMBANALYSES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CurvatureCombAnalysis* item_raw(size_t index) const = 0;
    virtual CurvatureCombAnalysis* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<CurvatureCombAnalysis> CurvatureCombAnalyses::item(size_t index) const
{
    core::Ptr<CurvatureCombAnalysis> res = item_raw(index);
    return res;
}

inline core::Ptr<CurvatureCombAnalysis> CurvatureCombAnalyses::itemByName(const std::string& name) const
{
    core::Ptr<CurvatureCombAnalysis> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t CurvatureCombAnalyses::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void CurvatureCombAnalyses::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CURVATURECOMBANALYSES_API