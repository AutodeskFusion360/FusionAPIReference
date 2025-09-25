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
# ifdef __COMPILING_ADSK_FUSION_TRIMFEATURES_CPP__
# define ADSK_FUSION_TRIMFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_TRIMFEATURES_API
# endif
#else
# define ADSK_FUSION_TRIMFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class TrimFeature;
    class TrimFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing trim features in a component
/// and supports the ability to create new trim features.
class TrimFeatures : public core::Base {
public:

    /// Function that returns the specified trim feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<TrimFeature> item(size_t index) const;

    /// The number of trim features in the collection.
    size_t count() const;

    /// Creates a TrimFeatureInput object. Use properties and methods on this object
    /// to define the trim feature you want to create and then use the Add method, passing in
    /// the TrimFeatureInput object.
    /// 
    /// To determine the possible boundaries and allow you to choose which cells to keep, the trim
    /// feature does a partial compute when the input object is created. To do this it starts a trim
    /// feature transaction and completes the transaction when you call the add method. If you don't call
    /// the add method to finish the transaction it leaves Fusion in a bad state and there will be undo
    /// problems and possibly a crash. If you have created a TrimFeatureInput object and don't want to
    /// finish the feature creation, you need to call the cancel method on the TrimFeatureInput object to
    /// safely abort the current boundary fill transaction.
    /// trimTool : A patch body, B-Rep face, construction plane or sketch curve that intersects the surface or surfaces to be trimmed
    /// Returns the newly created TrimFeatureInput object or null if the creation failed.
    core::Ptr<TrimFeatureInput> createInput(const core::Ptr<core::Base>& trimTool) const;

    /// Creates a new trim feature.
    /// input : A TrimFeatureInput object that defines the desired trim feature. Use the createInput
    /// method to create a new TrimFeatureInput object and then use methods on it
    /// (the TrimFeatureInput object) to define the trim feature.
    /// Returns the newly created TrimFeature object or null if the creation failed.
    core::Ptr<TrimFeature> add(const core::Ptr<TrimFeatureInput>& input);

    /// Function that returns the specified trim feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<TrimFeature> itemByName(const std::string& name) const;

    typedef TrimFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_TRIMFEATURES_API static const char* classType();
    ADSK_FUSION_TRIMFEATURES_API const char* objectType() const override;
    ADSK_FUSION_TRIMFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TRIMFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual TrimFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual TrimFeatureInput* createInput_raw(core::Base* trimTool) const = 0;
    virtual TrimFeature* add_raw(TrimFeatureInput* input) = 0;
    virtual TrimFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<TrimFeature> TrimFeatures::item(size_t index) const
{
    core::Ptr<TrimFeature> res = item_raw(index);
    return res;
}

inline size_t TrimFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<TrimFeatureInput> TrimFeatures::createInput(const core::Ptr<core::Base>& trimTool) const
{
    core::Ptr<TrimFeatureInput> res = createInput_raw(trimTool.get());
    return res;
}

inline core::Ptr<TrimFeature> TrimFeatures::add(const core::Ptr<TrimFeatureInput>& input)
{
    core::Ptr<TrimFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<TrimFeature> TrimFeatures::itemByName(const std::string& name) const
{
    core::Ptr<TrimFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void TrimFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TRIMFEATURES_API