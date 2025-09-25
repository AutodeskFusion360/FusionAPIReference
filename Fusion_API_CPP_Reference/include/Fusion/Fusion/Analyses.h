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
# ifdef __COMPILING_ADSK_FUSION_ANALYSES_CPP__
# define ADSK_FUSION_ANALYSES_API XI_EXPORT
# else
# define ADSK_FUSION_ANALYSES_API
# endif
#else
# define ADSK_FUSION_ANALYSES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class AccessibilityAnalyses;
    class Analysis;
    class CurvatureCombAnalyses;
    class CurvatureMapAnalyses;
    class DraftAnalyses;
    class IsoCurveAnalyses;
    class MinimumRadiusAnalyses;
    class SectionAnalyses;
    class ZebraAnalyses;
}}

namespace adsk { namespace fusion {

/// Provides access to the existing analysis results within a design.
class Analyses : public core::Base {
public:

    /// A method that returns the specified Analysis using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection
    /// has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Analysis> item(size_t index) const;

    /// A method that returns the specified Analysis using the name of the analysis
    /// as it is displayed in the browser.
    /// name : The name of the Analysis as it is displayed in the browser.
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<Analysis> itemByName(const std::string& name) const;

    /// Returns the number of Analysis objects in the collection.
    size_t count() const;

    /// Returns the AccessibilityAnalyses object, which provides access to any existing AccessibilityAnalysis
    /// objects in the design.
    core::Ptr<AccessibilityAnalyses> accessibilityAnalyses() const;

    /// Returns the CurvatureCombAnalyses object, which provides access to any existing CurvatureCombAnalysis
    /// objects in the design.
    core::Ptr<CurvatureCombAnalyses> curvatureCombAnalyses() const;

    /// Returns the CurvatureMapAnalyses object, which provides access to any existing CurvatureMapAnalysis
    /// objects in the design.
    core::Ptr<CurvatureMapAnalyses> curvatureMapAnalyses() const;

    /// Returns the DraftAnalyses object, which provides access to any existing DraftAnalysis
    /// objects in the design.
    core::Ptr<DraftAnalyses> draftAnalyses() const;

    /// Returns the IsoCurveAnalyses object, which provides access to any existing IsoCurveAnalysis
    /// objects in the design.
    core::Ptr<IsoCurveAnalyses> isoCurveAnalyses() const;

    /// Returns the MinimumRadiusAnalyses object, which provides access to any existing MinimumRadiusAnalysis
    /// objects in the design.
    core::Ptr<MinimumRadiusAnalyses> minimumRadiusAnalyses() const;

    /// Returns the SectionAnalyses object, which provides access to any existing SectionAnalysis
    /// objects in the design.
    core::Ptr<SectionAnalyses> sectionAnalyses() const;

    /// Returns the ZebraAnalyses object, which provides access to any existing ZebraAnalysis
    /// objects in the design.
    core::Ptr<ZebraAnalyses> zebraAnalyses() const;

    /// A property that gets and sets if the display is enabled for all Analysis objects in the design.
    /// If this is false, all Analysis results will be hidden. If this is true, the Analysis
    /// objects whose isLightBulbOn property is also true will be visible.
    bool isLightBulbOn() const;
    bool isLightBulbOn(bool value);

    typedef Analysis iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_ANALYSES_API static const char* classType();
    ADSK_FUSION_ANALYSES_API const char* objectType() const override;
    ADSK_FUSION_ANALYSES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ANALYSES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Analysis* item_raw(size_t index) const = 0;
    virtual Analysis* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual AccessibilityAnalyses* accessibilityAnalyses_raw() const = 0;
    virtual CurvatureCombAnalyses* curvatureCombAnalyses_raw() const = 0;
    virtual CurvatureMapAnalyses* curvatureMapAnalyses_raw() const = 0;
    virtual DraftAnalyses* draftAnalyses_raw() const = 0;
    virtual IsoCurveAnalyses* isoCurveAnalyses_raw() const = 0;
    virtual MinimumRadiusAnalyses* minimumRadiusAnalyses_raw() const = 0;
    virtual SectionAnalyses* sectionAnalyses_raw() const = 0;
    virtual ZebraAnalyses* zebraAnalyses_raw() const = 0;
    virtual bool isLightBulbOn_raw() const = 0;
    virtual bool isLightBulbOn_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<Analysis> Analyses::item(size_t index) const
{
    core::Ptr<Analysis> res = item_raw(index);
    return res;
}

inline core::Ptr<Analysis> Analyses::itemByName(const std::string& name) const
{
    core::Ptr<Analysis> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t Analyses::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<AccessibilityAnalyses> Analyses::accessibilityAnalyses() const
{
    core::Ptr<AccessibilityAnalyses> res = accessibilityAnalyses_raw();
    return res;
}

inline core::Ptr<CurvatureCombAnalyses> Analyses::curvatureCombAnalyses() const
{
    core::Ptr<CurvatureCombAnalyses> res = curvatureCombAnalyses_raw();
    return res;
}

inline core::Ptr<CurvatureMapAnalyses> Analyses::curvatureMapAnalyses() const
{
    core::Ptr<CurvatureMapAnalyses> res = curvatureMapAnalyses_raw();
    return res;
}

inline core::Ptr<DraftAnalyses> Analyses::draftAnalyses() const
{
    core::Ptr<DraftAnalyses> res = draftAnalyses_raw();
    return res;
}

inline core::Ptr<IsoCurveAnalyses> Analyses::isoCurveAnalyses() const
{
    core::Ptr<IsoCurveAnalyses> res = isoCurveAnalyses_raw();
    return res;
}

inline core::Ptr<MinimumRadiusAnalyses> Analyses::minimumRadiusAnalyses() const
{
    core::Ptr<MinimumRadiusAnalyses> res = minimumRadiusAnalyses_raw();
    return res;
}

inline core::Ptr<SectionAnalyses> Analyses::sectionAnalyses() const
{
    core::Ptr<SectionAnalyses> res = sectionAnalyses_raw();
    return res;
}

inline core::Ptr<ZebraAnalyses> Analyses::zebraAnalyses() const
{
    core::Ptr<ZebraAnalyses> res = zebraAnalyses_raw();
    return res;
}

inline bool Analyses::isLightBulbOn() const
{
    bool res = isLightBulbOn_raw();
    return res;
}

inline bool Analyses::isLightBulbOn(bool value)
{
    return isLightBulbOn_raw(value);
}

template <class OutputIterator> inline void Analyses::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ANALYSES_API