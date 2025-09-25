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
# ifdef __COMPILING_ADSK_FUSION_SECTIONANALYSES_CPP__
# define ADSK_FUSION_SECTIONANALYSES_API XI_EXPORT
# else
# define ADSK_FUSION_SECTIONANALYSES_API
# endif
#else
# define ADSK_FUSION_SECTIONANALYSES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class SectionAnalysis;
    class SectionAnalysisInput;
}}

namespace adsk { namespace fusion {

/// Provides access to any section analyses results in the design and supports
/// the ability to create new sections.
class SectionAnalyses : public core::Base {
public:

    /// A method that returns the specified SectionAnalysis object using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection
    /// has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SectionAnalysis> item(size_t index) const;

    /// A method that returns the specified SectionAnalysis object using the name of the analysis
    /// as displayed in the browser.
    /// name : The name of the SectionAnalysis object as displayed in the browser.
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<SectionAnalysis> itemByName(const std::string& name) const;

    /// Returns the number of SectionAnalysis objects in the collection.
    size_t count() const;

    /// Creates a new SectionAnalysisInput object to use when creating a new Section Analysis.
    /// A SectionAnalysisInput object is the API equivalent of the command dialog that
    /// contains the inputs to create a section analysis. Use this object to define the
    /// settings you need and then pass this into the add method to create the section analysis.
    /// cutPlaneEntity : The planar entity used to define the cut plane and can be either a
    /// planar BRepFace or a ConstructionPlane object.
    /// distance : The offset distance of the section from the cut plane. A positive value will offset
    /// in the positive normal direction of the cut plane entity. The value is in centimeters.
    /// This value is used to create a transformation matrix that defines the specified offset.
    /// Returns a SectionAnalysisInput object if successful.
    core::Ptr<SectionAnalysisInput> createInput(const core::Ptr<core::Base>& cutPlaneEntity, double distance);

    /// Creates a new Section Analysis.
    /// input : A SectionAnalysisInput object that defines how the section analysis should be created.
    /// Use the createInput method to create a new SectionAnalysisInput object.
    /// Returns the new SectionAnalysis object if successful.
    core::Ptr<SectionAnalysis> add(const core::Ptr<SectionAnalysisInput>& input);

    typedef SectionAnalysis iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SECTIONANALYSES_API static const char* classType();
    ADSK_FUSION_SECTIONANALYSES_API const char* objectType() const override;
    ADSK_FUSION_SECTIONANALYSES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SECTIONANALYSES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SectionAnalysis* item_raw(size_t index) const = 0;
    virtual SectionAnalysis* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual SectionAnalysisInput* createInput_raw(core::Base* cutPlaneEntity, double distance) = 0;
    virtual SectionAnalysis* add_raw(SectionAnalysisInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<SectionAnalysis> SectionAnalyses::item(size_t index) const
{
    core::Ptr<SectionAnalysis> res = item_raw(index);
    return res;
}

inline core::Ptr<SectionAnalysis> SectionAnalyses::itemByName(const std::string& name) const
{
    core::Ptr<SectionAnalysis> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t SectionAnalyses::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SectionAnalysisInput> SectionAnalyses::createInput(const core::Ptr<core::Base>& cutPlaneEntity, double distance)
{
    core::Ptr<SectionAnalysisInput> res = createInput_raw(cutPlaneEntity.get(), distance);
    return res;
}

inline core::Ptr<SectionAnalysis> SectionAnalyses::add(const core::Ptr<SectionAnalysisInput>& input)
{
    core::Ptr<SectionAnalysis> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void SectionAnalyses::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SECTIONANALYSES_API