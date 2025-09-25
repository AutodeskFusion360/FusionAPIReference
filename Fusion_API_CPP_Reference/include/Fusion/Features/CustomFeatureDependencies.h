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
# ifdef __COMPILING_ADSK_FUSION_CUSTOMFEATUREDEPENDENCIES_CPP__
# define ADSK_FUSION_CUSTOMFEATUREDEPENDENCIES_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMFEATUREDEPENDENCIES_API
# endif
#else
# define ADSK_FUSION_CUSTOMFEATUREDEPENDENCIES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class CustomFeatureDependency;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A collection of dependencies associated with a particular custom feature. These
/// are the entities that the custom feature is dependent on. If these entities are
/// modified, it will cause the custom feature to recompute so it can be up to date.
/// These dependencies are saved with the custom feature and can be accessed at a
/// later time, typically during the compute, to access and use the entities.
class CustomFeatureDependencies : public core::Base {
public:

    /// Function that returns the specified custom dependency using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<CustomFeatureDependency> item(size_t index) const;

    /// Function that returns the specified custom dependency given its ID.
    /// id : The ID of the dependency, which was assigned when the dependency was defined.
    /// Returns the specified item or null if the specified ID was not found.
    core::Ptr<CustomFeatureDependency> itemById(const std::string& id) const;

    /// The number of CustomFeatureParameter objects in the collection.
    size_t count() const;

    /// Adds an entity or parameter that this feature is dependent on. This is used by Fusion to know
    /// when to recompute this feature and to control the behavior of the feature's node in the timeline.
    /// id : An ID for this dependency. This is used to allow you to identify which dependency is which in the future.
    /// The ID must be unique with respect to the other dependencies of this custom feature.
    /// entity : The entity or parameter you want to add as a dependency. This can be a BRepBody, BRepFace, BrepEdge,
    /// BRepVertex, a sketch, any sketch entities, a profile, any construction geometry, or any parameter.
    /// Returns the created CustomFeatureDependency object and asserts if it failed.
    core::Ptr<CustomFeatureDependency> add(const std::string& id, const core::Ptr<core::Base>& entity);

    /// Deletes all of the current dependencies. This method is for convenience and
    /// is equivalent to iterating through the collection and deleting them one at a time.
    /// Returns true if the operation was successful.
    bool deleteAll();

    typedef CustomFeatureDependency iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CUSTOMFEATUREDEPENDENCIES_API static const char* classType();
    ADSK_FUSION_CUSTOMFEATUREDEPENDENCIES_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMFEATUREDEPENDENCIES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMFEATUREDEPENDENCIES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CustomFeatureDependency* item_raw(size_t index) const = 0;
    virtual CustomFeatureDependency* itemById_raw(const char* id) const = 0;
    virtual size_t count_raw() const = 0;
    virtual CustomFeatureDependency* add_raw(const char* id, core::Base* entity) = 0;
    virtual bool deleteAll_raw() = 0;
};

// Inline wrappers

inline core::Ptr<CustomFeatureDependency> CustomFeatureDependencies::item(size_t index) const
{
    core::Ptr<CustomFeatureDependency> res = item_raw(index);
    return res;
}

inline core::Ptr<CustomFeatureDependency> CustomFeatureDependencies::itemById(const std::string& id) const
{
    core::Ptr<CustomFeatureDependency> res = itemById_raw(id.c_str());
    return res;
}

inline size_t CustomFeatureDependencies::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<CustomFeatureDependency> CustomFeatureDependencies::add(const std::string& id, const core::Ptr<core::Base>& entity)
{
    core::Ptr<CustomFeatureDependency> res = add_raw(id.c_str(), entity.get());
    return res;
}

inline bool CustomFeatureDependencies::deleteAll()
{
    bool res = deleteAll_raw();
    return res;
}

template <class OutputIterator> inline void CustomFeatureDependencies::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMFEATUREDEPENDENCIES_API