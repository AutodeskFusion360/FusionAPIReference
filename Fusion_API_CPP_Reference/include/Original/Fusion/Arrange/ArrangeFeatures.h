//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGEFEATURES_CPP__
# define ADSK_FUSION_ARRANGEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGEFEATURES_API
# endif
#else
# define ADSK_FUSION_ARRANGEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ArrangeFeature;
    class ArrangeFeatureInput;
}}

namespace adsk { namespace fusion {

/// Provides access to the Arrange features in a component and provides the functionality
/// to create new Arrange features.
class ArrangeFeatures : public core::Base {
public:

    /// Returns the specified Arrange feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ArrangeFeature> item(size_t index) const;

    /// Returns the specified Arrange feature using the name of the feature.
    /// name : The name of the Arrange feature as seen in the timeline.
    /// Returns the specified Arrange feature, if it exists. Otherwise it returns null.
    core::Ptr<ArrangeFeature> itemByName(const std::string& name) const;

    /// Returns the number of Arrange features in the component.
    size_t count() const;

    /// Creates a new ArrangeFeatureInput object. An ArrangeFeatureInput object is the logical equivalent to the
    /// command dialog when creating an Arrange feature. It provides access to the various options and collects
    /// all the required input when creating an Arrange feature. Once fully defined, you pass this into the add method
    /// to create the Arrange feature.
    /// solverType : Specify if the input will be used to define a "2D True Shape", "2D Rectangular", or "3D" type of arrange feature.
    /// Returns an ArrangeFeatureInput object or null in the case of failure.
    core::Ptr<ArrangeFeatureInput> createInput(ArrangeSolverTypes solverType);

    /// Creates a new Arrange feature. Use the create2DInput or create3DInput method to first create an input object and fully
    /// define the required input. Then, pass that input object to the add method to create the Arrange feature.
    /// input : The ArrangeFeature2DInput or ArrangeFeature3DInput object that defines the required information needed to create a new Arrange feature.
    /// An ArrangeFeatureInput object is the logical equivalent to the command dialog when creating an Arrange feature.
    /// It provides access to the various options and collects all of the required input when creating an Arrange feature and
    /// calling the add method is the API equivalent to clicking the OK button on the command dialog to create the Arrange feature.
    /// Returns the newly created ArrangeFeature object.
    core::Ptr<ArrangeFeature> add(const core::Ptr<ArrangeFeatureInput>& input);

    typedef ArrangeFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_ARRANGEFEATURES_API static const char* classType();
    ADSK_FUSION_ARRANGEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_ARRANGEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ArrangeFeature* item_raw(size_t index) const = 0;
    virtual ArrangeFeature* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ArrangeFeatureInput* createInput_raw(ArrangeSolverTypes solverType) = 0;
    virtual ArrangeFeature* add_raw(ArrangeFeatureInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<ArrangeFeature> ArrangeFeatures::item(size_t index) const
{
    core::Ptr<ArrangeFeature> res = item_raw(index);
    return res;
}

inline core::Ptr<ArrangeFeature> ArrangeFeatures::itemByName(const std::string& name) const
{
    core::Ptr<ArrangeFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t ArrangeFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ArrangeFeatureInput> ArrangeFeatures::createInput(ArrangeSolverTypes solverType)
{
    core::Ptr<ArrangeFeatureInput> res = createInput_raw(solverType);
    return res;
}

inline core::Ptr<ArrangeFeature> ArrangeFeatures::add(const core::Ptr<ArrangeFeatureInput>& input)
{
    core::Ptr<ArrangeFeature> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void ArrangeFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGEFEATURES_API