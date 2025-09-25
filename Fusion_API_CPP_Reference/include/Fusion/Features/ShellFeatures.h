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
# ifdef __COMPILING_ADSK_FUSION_SHELLFEATURES_CPP__
# define ADSK_FUSION_SHELLFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_SHELLFEATURES_API
# endif
#else
# define ADSK_FUSION_SHELLFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class ShellFeature;
    class ShellFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing shell features in a component
/// and supports the ability to create new shell features.
class ShellFeatures : public core::Base {
public:

    /// Function that returns the specified shell feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ShellFeature> item(size_t index) const;

    /// The number of shell features in the collection.
    size_t count() const;

    /// Creates a ShellFeatureInput object. Use properties and methods on this object
    /// to define the shell you want to create and then use the Add method, passing in
    /// the ShellFeatureInput object.
    /// inputEntities : The collection contains the faces to remove and the bodies to perform shell.
    /// Fails if any faces are input, and the owning bodies of the faces are also input.
    /// isTangentChain : A boolean value for setting whether or not faces that are tangentially connected to
    /// the input faces (if any) will also be included. It defaults to true.
    /// Returns the newly created ShellFeatureInput object or null if the creation failed.
    core::Ptr<ShellFeatureInput> createInput(const core::Ptr<core::ObjectCollection>& inputEntities, bool isTangentChain = true) const;

    /// Creates a new shell feature.
    /// input : A ShellFeatureInput object that defines the desired shell. Use the createInput
    /// method to create a new ShellFeatureInput object and then use methods on it
    /// (the ShellFeatureInput object) to define the shell.
    /// Returns the newly created ShellFeature object or null if the creation failed.
    core::Ptr<ShellFeature> add(const core::Ptr<ShellFeatureInput>& input);

    /// Function that returns the specified shell feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<ShellFeature> itemByName(const std::string& name) const;

    typedef ShellFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SHELLFEATURES_API static const char* classType();
    ADSK_FUSION_SHELLFEATURES_API const char* objectType() const override;
    ADSK_FUSION_SHELLFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SHELLFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ShellFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ShellFeatureInput* createInput_raw(core::ObjectCollection* inputEntities, bool isTangentChain) const = 0;
    virtual ShellFeature* add_raw(ShellFeatureInput* input) = 0;
    virtual ShellFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<ShellFeature> ShellFeatures::item(size_t index) const
{
    core::Ptr<ShellFeature> res = item_raw(index);
    return res;
}

inline size_t ShellFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ShellFeatureInput> ShellFeatures::createInput(const core::Ptr<core::ObjectCollection>& inputEntities, bool isTangentChain) const
{
    core::Ptr<ShellFeatureInput> res = createInput_raw(inputEntities.get(), isTangentChain);
    return res;
}

inline core::Ptr<ShellFeature> ShellFeatures::add(const core::Ptr<ShellFeatureInput>& input)
{
    core::Ptr<ShellFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<ShellFeature> ShellFeatures::itemByName(const std::string& name) const
{
    core::Ptr<ShellFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void ShellFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SHELLFEATURES_API