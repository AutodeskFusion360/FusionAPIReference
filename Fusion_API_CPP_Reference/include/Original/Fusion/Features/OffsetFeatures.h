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
# ifdef __COMPILING_ADSK_FUSION_OFFSETFEATURES_CPP__
# define ADSK_FUSION_OFFSETFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_OFFSETFEATURES_API
# endif
#else
# define ADSK_FUSION_OFFSETFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class OffsetFeature;
    class OffsetFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing Offset features in a component
/// and supports the ability to create new Offset features.
class OffsetFeatures : public core::Base {
public:

    /// Function that returns the specified offset feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<OffsetFeature> item(size_t index) const;

    /// The number of Offset features in the collection.
    size_t count() const;

    /// Creates an OffsetFeatureInput object. Use properties and methods on this object
    /// to define the offset feature you want to create and then use the Add method, passing in
    /// the OffsetFeatureInput object to create the feature.
    /// entities : An ObjectCollection containing the BRepFace objects to offset. Additional faces may be
    /// automatically used depending on the value of the isChainSelection argument.
    /// Input faces need not be from the same body.
    /// distance : ValueInput object that defines the offset distance. A positive value is in the positive
    /// normal direction of the face being offset.
    /// operation : The feature operation to perform. 'NewBodyFeatureOperation' and 'NewComponentFeatureOperation' are the
    /// options supported.
    /// isChainSelection : A boolean value for setting whether or not faces that are tangentially connected to
    /// the input faces (if any) will be included in the offset. The default value is true.
    /// Returns the newly created OffsetFeatureInput object or null if the creation failed.
    core::Ptr<OffsetFeatureInput> createInput(const core::Ptr<core::ObjectCollection>& entities, const core::Ptr<core::ValueInput>& distance, FeatureOperations operation, bool isChainSelection = true) const;

    /// Creates a new offset feature.
    /// input : A FeatureInput object that defines the desired offset feature. Use the createInput
    /// method to create a new OffsetFeatureInput object and then use methods on it
    /// (the OffsetFeatureInput object) to define the offset feature.
    /// Returns the newly created OffsetFeature object or null if the creation failed.
    core::Ptr<OffsetFeature> add(const core::Ptr<OffsetFeatureInput>& input);

    /// Function that returns the specified offset feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<OffsetFeature> itemByName(const std::string& name) const;

    typedef OffsetFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_OFFSETFEATURES_API static const char* classType();
    ADSK_FUSION_OFFSETFEATURES_API const char* objectType() const override;
    ADSK_FUSION_OFFSETFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_OFFSETFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual OffsetFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual OffsetFeatureInput* createInput_raw(core::ObjectCollection* entities, core::ValueInput* distance, FeatureOperations operation, bool isChainSelection) const = 0;
    virtual OffsetFeature* add_raw(OffsetFeatureInput* input) = 0;
    virtual OffsetFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<OffsetFeature> OffsetFeatures::item(size_t index) const
{
    core::Ptr<OffsetFeature> res = item_raw(index);
    return res;
}

inline size_t OffsetFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<OffsetFeatureInput> OffsetFeatures::createInput(const core::Ptr<core::ObjectCollection>& entities, const core::Ptr<core::ValueInput>& distance, FeatureOperations operation, bool isChainSelection) const
{
    core::Ptr<OffsetFeatureInput> res = createInput_raw(entities.get(), distance.get(), operation, isChainSelection);
    return res;
}

inline core::Ptr<OffsetFeature> OffsetFeatures::add(const core::Ptr<OffsetFeatureInput>& input)
{
    core::Ptr<OffsetFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<OffsetFeature> OffsetFeatures::itemByName(const std::string& name) const
{
    core::Ptr<OffsetFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void OffsetFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_OFFSETFEATURES_API