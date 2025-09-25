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
# ifdef __COMPILING_ADSK_FUSION_THICKENFEATURES_CPP__
# define ADSK_FUSION_THICKENFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_THICKENFEATURES_API
# endif
#else
# define ADSK_FUSION_THICKENFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class ThickenFeature;
    class ThickenFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing Thicken features in a component
/// and supports the ability to create new Thicken features.
class ThickenFeatures : public core::Base {
public:

    /// Function that returns the specified Thicken feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ThickenFeature> item(size_t index) const;

    /// The number of Thicken features in the collection.
    size_t count() const;

    /// Creates a ThickenFeatureInput object. Use properties and methods on this object
    /// to define the Thicken feature you want to create and then use the Add method, passing in
    /// the ThickenFeatureInput object to create the feature.
    /// inputFaces : The faces or patch bodies to thicken. Faces need not be from the same component or body, nor do they need to be
    /// connected or touching one another.
    /// thickness : ValueInput object that defines the thickness.
    /// isSymmetric : A boolean value for setting whether to add thickness symmetrically or only on one side of the face/s to thicken
    /// operation : The feature operation to perform.
    /// isChainSelection : A boolean value for setting whether or not faces that are tangentially connected to
    /// the input faces (if any) will be included in the thicken. The default value is true.
    /// Returns the newly created ThickenFeatureInput object or null if the creation failed.
    core::Ptr<ThickenFeatureInput> createInput(const core::Ptr<core::ObjectCollection>& inputFaces, const core::Ptr<core::ValueInput>& thickness, bool isSymmetric, FeatureOperations operation, bool isChainSelection = true) const;

    /// Creates a new Thicken feature.
    /// input : A FeatureInput object that defines the desired Thicken feature. Use the createInput
    /// method to create a new ThickenFeatureInput object and then use methods on it
    /// (the ThickenFeatureInput object) to define the Thicken feature.
    /// Returns the newly created ThickenFeature object or null if the creation failed.
    core::Ptr<ThickenFeature> add(const core::Ptr<ThickenFeatureInput>& input);

    /// Function that returns the specified thicken feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<ThickenFeature> itemByName(const std::string& name) const;

    typedef ThickenFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_THICKENFEATURES_API static const char* classType();
    ADSK_FUSION_THICKENFEATURES_API const char* objectType() const override;
    ADSK_FUSION_THICKENFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_THICKENFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ThickenFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ThickenFeatureInput* createInput_raw(core::ObjectCollection* inputFaces, core::ValueInput* thickness, bool isSymmetric, FeatureOperations operation, bool isChainSelection) const = 0;
    virtual ThickenFeature* add_raw(ThickenFeatureInput* input) = 0;
    virtual ThickenFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<ThickenFeature> ThickenFeatures::item(size_t index) const
{
    core::Ptr<ThickenFeature> res = item_raw(index);
    return res;
}

inline size_t ThickenFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ThickenFeatureInput> ThickenFeatures::createInput(const core::Ptr<core::ObjectCollection>& inputFaces, const core::Ptr<core::ValueInput>& thickness, bool isSymmetric, FeatureOperations operation, bool isChainSelection) const
{
    core::Ptr<ThickenFeatureInput> res = createInput_raw(inputFaces.get(), thickness.get(), isSymmetric, operation, isChainSelection);
    return res;
}

inline core::Ptr<ThickenFeature> ThickenFeatures::add(const core::Ptr<ThickenFeatureInput>& input)
{
    core::Ptr<ThickenFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<ThickenFeature> ThickenFeatures::itemByName(const std::string& name) const
{
    core::Ptr<ThickenFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void ThickenFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_THICKENFEATURES_API