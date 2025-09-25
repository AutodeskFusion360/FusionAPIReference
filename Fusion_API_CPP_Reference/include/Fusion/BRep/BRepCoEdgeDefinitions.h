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
# ifdef __COMPILING_ADSK_FUSION_BREPCOEDGEDEFINITIONS_CPP__
# define ADSK_FUSION_BREPCOEDGEDEFINITIONS_API XI_EXPORT
# else
# define ADSK_FUSION_BREPCOEDGEDEFINITIONS_API
# endif
#else
# define ADSK_FUSION_BREPCOEDGEDEFINITIONS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepCoEdgeDefinition;
    class BRepEdgeDefinition;
}}

namespace adsk { namespace fusion {

/// Provides access to the BRepCoEdgeDefinition objects associated with the parent BRepLoopDefinition object.
/// It's through this object that you create new BRepCoEdgeDefinition objects.
class BRepCoEdgeDefinitions : public core::Base {
public:

    /// Function that returns the specified BRepCoEdgeDefinition object using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<BRepCoEdgeDefinition> item(size_t index) const;

    /// The number of B-Rep co-edge definition objects in the collection.
    size_t count() const;

    /// Creates a new BrepCoEdgeDefinition object associated with the parent BrepLoopDefinition object.
    /// edgeDefinition : The BRepEdgeDefinition object this co-edge is related to.
    /// isOpposedToEdge : Boolean that indicates if the orientation of this BRepCoEdgeDefinition is reversed with respect
    /// to the associated BRepEdgeDefinition object.
    /// Returns the newly created BrepCoEdgeDefinition object or null in the case of failure.
    core::Ptr<BRepCoEdgeDefinition> add(const core::Ptr<BRepEdgeDefinition>& edgeDefinition, bool isOpposedToEdge);

    typedef BRepCoEdgeDefinition iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_BREPCOEDGEDEFINITIONS_API static const char* classType();
    ADSK_FUSION_BREPCOEDGEDEFINITIONS_API const char* objectType() const override;
    ADSK_FUSION_BREPCOEDGEDEFINITIONS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPCOEDGEDEFINITIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepCoEdgeDefinition* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual BRepCoEdgeDefinition* add_raw(BRepEdgeDefinition* edgeDefinition, bool isOpposedToEdge) = 0;
};

// Inline wrappers

inline core::Ptr<BRepCoEdgeDefinition> BRepCoEdgeDefinitions::item(size_t index) const
{
    core::Ptr<BRepCoEdgeDefinition> res = item_raw(index);
    return res;
}

inline size_t BRepCoEdgeDefinitions::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<BRepCoEdgeDefinition> BRepCoEdgeDefinitions::add(const core::Ptr<BRepEdgeDefinition>& edgeDefinition, bool isOpposedToEdge)
{
    core::Ptr<BRepCoEdgeDefinition> res = add_raw(edgeDefinition.get(), isOpposedToEdge);
    return res;
}

template <class OutputIterator> inline void BRepCoEdgeDefinitions::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPCOEDGEDEFINITIONS_API