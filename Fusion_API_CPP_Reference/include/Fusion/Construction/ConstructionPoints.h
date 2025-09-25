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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPOINTS_CPP__
# define ADSK_FUSION_CONSTRUCTIONPOINTS_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPOINTS_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPOINTS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Component;
    class ConstructionPoint;
    class ConstructionPointInput;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Provides access to the construction points within a component and provides
/// methods to create new construction points.
class ConstructionPoints : public core::Base {
public:

    /// Function that returns the specified construction point using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ConstructionPoint> item(size_t index) const;

    /// Returns the specified construction point using the name of the construction
    /// point as it is displayed in the browser.
    /// name : The name of the construction point as it is displayed in the browser.
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<ConstructionPoint> itemByName(const std::string& name) const;

    /// The number of construction points in the collection.
    size_t count() const;

    /// Create a ConstructionPointInput object that is in turn used
    /// to create a ConstructionPoint.
    /// occurrenceForCreation : A creation occurrence is needed if the input is in another component AND the
    /// construction point is not in the root component. The occurrenceForCreation is analogous
    /// to the active occurrence in the UI.
    /// Returns a ConstructionPointInput object
    core::Ptr<ConstructionPointInput> createInput(const core::Ptr<Occurrence>& occurrenceForCreation = NULL) const;

    /// Creates a new construction point.
    /// 
    /// If the ConstructionPointInput was defined using the setByPoint method using a Point3D object then
    /// the add will only work in the direct modeling mode and will fail in the parametric modeling mode.
    /// input : A ConstructionPointInput object
    /// Returns the newly created construction point or null if the creation failed.
    core::Ptr<ConstructionPoint> add(const core::Ptr<ConstructionPointInput>& input);

    /// The component that owns this collection.
    core::Ptr<Component> component() const;

    typedef ConstructionPoint iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CONSTRUCTIONPOINTS_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPOINTS_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPOINTS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPOINTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConstructionPoint* item_raw(size_t index) const = 0;
    virtual ConstructionPoint* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ConstructionPointInput* createInput_raw(Occurrence* occurrenceForCreation) const = 0;
    virtual ConstructionPoint* add_raw(ConstructionPointInput* input) = 0;
    virtual Component* component_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ConstructionPoint> ConstructionPoints::item(size_t index) const
{
    core::Ptr<ConstructionPoint> res = item_raw(index);
    return res;
}

inline core::Ptr<ConstructionPoint> ConstructionPoints::itemByName(const std::string& name) const
{
    core::Ptr<ConstructionPoint> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t ConstructionPoints::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ConstructionPointInput> ConstructionPoints::createInput(const core::Ptr<Occurrence>& occurrenceForCreation) const
{
    core::Ptr<ConstructionPointInput> res = createInput_raw(occurrenceForCreation.get());
    return res;
}

inline core::Ptr<ConstructionPoint> ConstructionPoints::add(const core::Ptr<ConstructionPointInput>& input)
{
    core::Ptr<ConstructionPoint> res = add_raw(input.get());
    return res;
}

inline core::Ptr<Component> ConstructionPoints::component() const
{
    core::Ptr<Component> res = component_raw();
    return res;
}

template <class OutputIterator> inline void ConstructionPoints::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPOINTS_API