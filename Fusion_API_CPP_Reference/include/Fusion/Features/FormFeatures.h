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
# ifdef __COMPILING_ADSK_FUSION_FORMFEATURES_CPP__
# define ADSK_FUSION_FORMFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_FORMFEATURES_API
# endif
#else
# define ADSK_FUSION_FORMFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class FormFeature;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing Form features in a component.
class FormFeatures : public core::Base {
public:

    /// Function that returns the specified Form feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<FormFeature> item(size_t index) const;

    /// Function that returns the specified form feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<FormFeature> itemByName(const std::string& name) const;

    /// The number of Form features in the collection.
    size_t count() const;

    /// Creates a new empty form feature in the parent component.
    /// Returns the new FormFeature or null in the case of an error.
    core::Ptr<FormFeature> add();

    typedef FormFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_FORMFEATURES_API static const char* classType();
    ADSK_FUSION_FORMFEATURES_API const char* objectType() const override;
    ADSK_FUSION_FORMFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FORMFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual FormFeature* item_raw(size_t index) const = 0;
    virtual FormFeature* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual FormFeature* add_raw() = 0;
};

// Inline wrappers

inline core::Ptr<FormFeature> FormFeatures::item(size_t index) const
{
    core::Ptr<FormFeature> res = item_raw(index);
    return res;
}

inline core::Ptr<FormFeature> FormFeatures::itemByName(const std::string& name) const
{
    core::Ptr<FormFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t FormFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<FormFeature> FormFeatures::add()
{
    core::Ptr<FormFeature> res = add_raw();
    return res;
}

template <class OutputIterator> inline void FormFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FORMFEATURES_API