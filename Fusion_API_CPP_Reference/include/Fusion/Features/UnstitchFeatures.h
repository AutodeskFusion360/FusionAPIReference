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
# ifdef __COMPILING_ADSK_FUSION_UNSTITCHFEATURES_CPP__
# define ADSK_FUSION_UNSTITCHFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_UNSTITCHFEATURES_API
# endif
#else
# define ADSK_FUSION_UNSTITCHFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class UnstitchFeature;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing Unstitch features in a component
/// and supports the ability to create new Unstitch features.
class UnstitchFeatures : public core::Base {
public:

    /// Function that returns the specified Unstitch feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<UnstitchFeature> item(size_t index) const;

    /// The number of Unstitch features in the collection.
    size_t count() const;

    /// Creates a new Unstitch feature.
    /// faces : The faces and/or bodies to Unstitch. Individual faces can be unstitched from solid and/or patch bodies. The faces being unstitched
    /// need not all come from the same body.
    /// isChainSelection : A boolean value for setting whether or not faces that are connected and adjacent to
    /// the input faces will be included in the selection. The default value is true.
    /// Returns the newly created UnstitchFeature object or null if the creation failed.
    core::Ptr<UnstitchFeature> add(const core::Ptr<core::ObjectCollection>& faces, bool isChainSelection = true);

    /// Function that returns the specified unstitch feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<UnstitchFeature> itemByName(const std::string& name) const;

    typedef UnstitchFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_UNSTITCHFEATURES_API static const char* classType();
    ADSK_FUSION_UNSTITCHFEATURES_API const char* objectType() const override;
    ADSK_FUSION_UNSTITCHFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_UNSTITCHFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual UnstitchFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual UnstitchFeature* add_raw(core::ObjectCollection* faces, bool isChainSelection) = 0;
    virtual UnstitchFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<UnstitchFeature> UnstitchFeatures::item(size_t index) const
{
    core::Ptr<UnstitchFeature> res = item_raw(index);
    return res;
}

inline size_t UnstitchFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<UnstitchFeature> UnstitchFeatures::add(const core::Ptr<core::ObjectCollection>& faces, bool isChainSelection)
{
    core::Ptr<UnstitchFeature> res = add_raw(faces.get(), isChainSelection);
    return res;
}

inline core::Ptr<UnstitchFeature> UnstitchFeatures::itemByName(const std::string& name) const
{
    core::Ptr<UnstitchFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void UnstitchFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_UNSTITCHFEATURES_API