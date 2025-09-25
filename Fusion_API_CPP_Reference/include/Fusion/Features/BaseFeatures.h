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
# ifdef __COMPILING_ADSK_FUSION_BASEFEATURES_CPP__
# define ADSK_FUSION_BASEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_BASEFEATURES_API
# endif
#else
# define ADSK_FUSION_BASEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BaseFeature;
}}

namespace adsk { namespace fusion {

/// The BaseFeature class represents a direct edit feature within a parametric design.
class BaseFeatures : public core::Base {
public:

    /// Function that returns the specified base feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<BaseFeature> item(size_t index) const;

    /// Function that returns the specified base feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<BaseFeature> itemByName(const std::string& name) const;

    /// The number of base features in the collection.
    size_t count() const;

    /// Creates a new empty base feature in the parent component.
    /// Returns the new BaseFeature or null in the case of an error.
    core::Ptr<BaseFeature> add();

    typedef BaseFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_BASEFEATURES_API static const char* classType();
    ADSK_FUSION_BASEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_BASEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BASEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BaseFeature* item_raw(size_t index) const = 0;
    virtual BaseFeature* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual BaseFeature* add_raw() = 0;
};

// Inline wrappers

inline core::Ptr<BaseFeature> BaseFeatures::item(size_t index) const
{
    core::Ptr<BaseFeature> res = item_raw(index);
    return res;
}

inline core::Ptr<BaseFeature> BaseFeatures::itemByName(const std::string& name) const
{
    core::Ptr<BaseFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t BaseFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<BaseFeature> BaseFeatures::add()
{
    core::Ptr<BaseFeature> res = add_raw();
    return res;
}

template <class OutputIterator> inline void BaseFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BASEFEATURES_API