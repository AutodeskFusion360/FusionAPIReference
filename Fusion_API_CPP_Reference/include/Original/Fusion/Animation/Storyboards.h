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
# ifdef __COMPILING_ADSK_FUSION_STORYBOARDS_CPP__
# define ADSK_FUSION_STORYBOARDS_API XI_EXPORT
# else
# define ADSK_FUSION_STORYBOARDS_API
# endif
#else
# define ADSK_FUSION_STORYBOARDS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Storyboard;
}}

namespace adsk { namespace fusion {

/// Provides access to all the existing storyboards in this animation and supports the ability to create new storyboards.
class Storyboards : public core::Base {
public:

    /// Function that returns the specified storyboard using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Storyboard> item(size_t index) const;

    /// Function that returns the specified storyboard by name.
    /// name : The name of the storyboard within the collection to return.
    /// Returns the specified storyboard or null if the name is not found.
    core::Ptr<Storyboard> itemByName(const std::string& name) const;

    /// The number of storyboards in the collection.
    size_t count() const;

    /// Creates a new storyboard object.
    /// isCleanStoryboard : A boolean value for setting whether or not the new storyboard is clean. When specified to true the transformation is the same as that from the Design workspace.
    /// When specified to false, the transformation for every part is kept in the new storyboard, and is derived from the previous storyboard.
    /// It defaults to true if not specified.
    /// Returns the newly created Storyboard object or null if the creation failed.
    core::Ptr<Storyboard> add(bool isCleanStoryboard = true);

    typedef Storyboard iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_STORYBOARDS_API static const char* classType();
    ADSK_FUSION_STORYBOARDS_API const char* objectType() const override;
    ADSK_FUSION_STORYBOARDS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_STORYBOARDS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Storyboard* item_raw(size_t index) const = 0;
    virtual Storyboard* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Storyboard* add_raw(bool isCleanStoryboard) = 0;
};

// Inline wrappers

inline core::Ptr<Storyboard> Storyboards::item(size_t index) const
{
    core::Ptr<Storyboard> res = item_raw(index);
    return res;
}

inline core::Ptr<Storyboard> Storyboards::itemByName(const std::string& name) const
{
    core::Ptr<Storyboard> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t Storyboards::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<Storyboard> Storyboards::add(bool isCleanStoryboard)
{
    core::Ptr<Storyboard> res = add_raw(isCleanStoryboard);
    return res;
}

template <class OutputIterator> inline void Storyboards::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_STORYBOARDS_API