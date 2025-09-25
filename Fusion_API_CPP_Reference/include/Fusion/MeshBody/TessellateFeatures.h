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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_TESSELLATEFEATURES_CPP__
# define ADSK_FUSION_TESSELLATEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_TESSELLATEFEATURES_API
# endif
#else
# define ADSK_FUSION_TESSELLATEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepBody;
    class TessellateFeature;
    class TessellateFeatureInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing tessellate features in a component
/// and supports the ability to create new tessellate features.
class TessellateFeatures : public core::Base {
public:

    /// Function that returns the specified tessellate feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<TessellateFeature> item(size_t index) const;

    /// The number of tessellate features in the collection.
    size_t count() const;

    /// Creates a TessellateFeatureInput object. Use properties and methods on this object
    /// to define the tessellation you want to create and then use the add method, passing in
    /// the TessellateFeatureInput object.
    /// bodies : A array with BReb bodies in either a parametric or direct modeling design.
    /// Returns the newly created TessellateFeatureInput object or null if the creation failed.
    core::Ptr<TessellateFeatureInput> createInput(const std::vector<core::Ptr<BRepBody>>& bodies) const;

    /// Creates a tessellate feature.
    /// input : A TessellateFeatureInput object that defines the desired tessellate feature. Use the createInput
    /// method to create a new TessellateFeatureInput object and then use methods on it
    /// (the TessellateFeatureInput object) to define the tessellate.
    /// Returns the newly created TessellateFeatureInput object or null if the creation failed.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<TessellateFeature> add(const core::Ptr<TessellateFeatureInput>& input);

    /// Function that returns the specified Tessellate feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<TessellateFeature> itemByName(const std::string& name) const;

    typedef TessellateFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_TESSELLATEFEATURES_API static const char* classType();
    ADSK_FUSION_TESSELLATEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_TESSELLATEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TESSELLATEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual TessellateFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual TessellateFeatureInput* createInput_raw(BRepBody** bodies, size_t bodies_size) const = 0;
    virtual TessellateFeature* add_raw(TessellateFeatureInput* input) = 0;
    virtual TessellateFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<TessellateFeature> TessellateFeatures::item(size_t index) const
{
    core::Ptr<TessellateFeature> res = item_raw(index);
    return res;
}

inline size_t TessellateFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<TessellateFeatureInput> TessellateFeatures::createInput(const std::vector<core::Ptr<BRepBody>>& bodies) const
{
    BRepBody** bodies_ = new BRepBody*[bodies.size()];
    for(size_t i=0; i<bodies.size(); ++i)
        bodies_[i] = bodies[i].get();

    core::Ptr<TessellateFeatureInput> res = createInput_raw(bodies_, bodies.size());
    delete[] bodies_;
    return res;
}

inline core::Ptr<TessellateFeature> TessellateFeatures::add(const core::Ptr<TessellateFeatureInput>& input)
{
    core::Ptr<TessellateFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<TessellateFeature> TessellateFeatures::itemByName(const std::string& name) const
{
    core::Ptr<TessellateFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void TessellateFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TESSELLATEFEATURES_API