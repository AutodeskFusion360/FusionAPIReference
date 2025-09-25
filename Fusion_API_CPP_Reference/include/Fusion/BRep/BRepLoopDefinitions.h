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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_BREPLOOPDEFINITIONS_CPP__
# define ADSK_FUSION_BREPLOOPDEFINITIONS_API XI_EXPORT
# else
# define ADSK_FUSION_BREPLOOPDEFINITIONS_API
# endif
#else
# define ADSK_FUSION_BREPLOOPDEFINITIONS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepLoopDefinition;
}}

namespace adsk { namespace fusion {

/// Provides access to the BRepLoopDefinition objects associated with the parent BRepFaceDefinition object.
/// It's through this object that you create new BRepLoopDefinition objects.
class BRepLoopDefinitions : public core::Base {
public:

    /// Function that returns the specified BRepLoopDefinition object using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<BRepLoopDefinition> item(size_t index) const;

    /// The number of B-Rep loop definition objects in the collection.
    size_t count() const;

    /// Creates a new empty loop associated with the parent face definition.
    /// Returns the newly created BRepLoopDefinition object.
    core::Ptr<BRepLoopDefinition> add();

    typedef BRepLoopDefinition iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_BREPLOOPDEFINITIONS_API static const char* classType();
    ADSK_FUSION_BREPLOOPDEFINITIONS_API const char* objectType() const override;
    ADSK_FUSION_BREPLOOPDEFINITIONS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPLOOPDEFINITIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepLoopDefinition* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual BRepLoopDefinition* add_raw() = 0;
};

// Inline wrappers

inline core::Ptr<BRepLoopDefinition> BRepLoopDefinitions::item(size_t index) const
{
    core::Ptr<BRepLoopDefinition> res = item_raw(index);
    return res;
}

inline size_t BRepLoopDefinitions::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<BRepLoopDefinition> BRepLoopDefinitions::add()
{
    core::Ptr<BRepLoopDefinition> res = add_raw();
    return res;
}

template <class OutputIterator> inline void BRepLoopDefinitions::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPLOOPDEFINITIONS_API