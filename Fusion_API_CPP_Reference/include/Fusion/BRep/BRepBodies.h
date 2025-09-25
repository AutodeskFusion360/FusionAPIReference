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
# ifdef __COMPILING_ADSK_FUSION_BREPBODIES_CPP__
# define ADSK_FUSION_BREPBODIES_API XI_EXPORT
# else
# define ADSK_FUSION_BREPBODIES_API
# endif
#else
# define ADSK_FUSION_BREPBODIES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepBody;
}}

namespace adsk { namespace fusion {

/// The BRepBodies collection provides access to all of the B-Rep
/// bodies within a component.
class BRepBodies : public core::Base {
public:

    /// Function that returns the specified body using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<BRepBody> item(size_t index) const;

    /// Returns a specific body using the name of the body within the collection.
    /// name : The name of the body, as seen in the browser, to return.
    /// The BRepBody or null if a body with the defined name is not found.
    core::Ptr<BRepBody> itemByName(const std::string& name) const;

    /// Returns the number of bodies in the collection.
    size_t count() const;

    /// Creates a new BRepBody object. The input can be a persisted or transient BRepBody and the
    /// result is a persisted BRepBody. In a direct modeling design, the BRepBody is created within
    /// the component the BRepBodies collection was obtained from. In a parametric modeling design,
    /// the new BRepBody is created within the specified Base Feature.
    /// 
    /// Because of a current limitation, if you want to create a BRepBody in a parametric model,
    /// you must first call the edit method of the base feature, then use the add method to create
    /// the body, and finally call the finishEdit method of the base feature. The base
    /// feature must be in an "edit" state to be able to add any additional items to it.
    /// body : The input BRepBody. Typically this is a transient BRepBody but that's not a requirement. In
    /// any case, there is not any association back to the original BRepBody.
    /// targetBaseFeature : The BaseFeature object that this BRep body will be associated with. This is an optional
    /// requirement. It is required in a parametric modeling design but is ignored in a direct
    /// modeling design.
    /// Returns the newly created BRepBody or null if the creation failed.
    core::Ptr<BRepBody> add(const core::Ptr<BRepBody>& body, const core::Ptr<BaseFeature>& targetBaseFeature = NULL);

    typedef BRepBody iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_BREPBODIES_API static const char* classType();
    ADSK_FUSION_BREPBODIES_API const char* objectType() const override;
    ADSK_FUSION_BREPBODIES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPBODIES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepBody* item_raw(size_t index) const = 0;
    virtual BRepBody* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual BRepBody* add_raw(BRepBody* body, BaseFeature* targetBaseFeature) = 0;
};

// Inline wrappers

inline core::Ptr<BRepBody> BRepBodies::item(size_t index) const
{
    core::Ptr<BRepBody> res = item_raw(index);
    return res;
}

inline core::Ptr<BRepBody> BRepBodies::itemByName(const std::string& name) const
{
    core::Ptr<BRepBody> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t BRepBodies::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<BRepBody> BRepBodies::add(const core::Ptr<BRepBody>& body, const core::Ptr<BaseFeature>& targetBaseFeature)
{
    core::Ptr<BRepBody> res = add_raw(body.get(), targetBaseFeature.get());
    return res;
}

template <class OutputIterator> inline void BRepBodies::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPBODIES_API