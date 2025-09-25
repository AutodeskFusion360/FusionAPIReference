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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONAXES_CPP__
# define ADSK_FUSION_CONSTRUCTIONAXES_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONAXES_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONAXES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Component;
    class ConstructionAxis;
    class ConstructionAxisInput;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Provides access to the construction axes within a component and provides
/// methods to create new construction axes.
class ConstructionAxes : public core::Base {
public:

    /// Function that returns the specified construction axis using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ConstructionAxis> item(size_t index) const;

    /// Returns the specified construction axis using the name of the construction
    /// axis as it is displayed in the browser.
    /// name : The name of the axis as it is displayed in the browser
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<ConstructionAxis> itemByName(const std::string& name) const;

    /// The number of construction axes in the collection.
    size_t count() const;

    /// Create a ConstructionAxisInput object that is in turn used to create a ConstructionAxis.
    /// occurrenceForCreation : A creation occurrence is needed if the input is in another component AND the
    /// construction axis is not in the root component. The occurrenceForCreation is analogous
    /// to the active occurrence in the UI.
    /// Returns a ConstructionAxisInput object
    core::Ptr<ConstructionAxisInput> createInput(const core::Ptr<Occurrence>& occurrenceForCreation = NULL) const;

    /// Creates and adds a new ConstructionAxis using the creation parameters in the ConstructionAxisInput.
    /// 
    /// If the ConstructionAxisInput was defined using the setByLine method then
    /// the add will only work in the direct modeling mode and will fail in the parametric modeling mode.
    /// input : A ConstructionAxisInput object
    /// Returns the newly created construction axis or null if the creation failed.
    core::Ptr<ConstructionAxis> add(const core::Ptr<ConstructionAxisInput>& input);

    /// The component that owns this collection.
    core::Ptr<Component> component() const;

    typedef ConstructionAxis iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CONSTRUCTIONAXES_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONAXES_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONAXES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONAXES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConstructionAxis* item_raw(size_t index) const = 0;
    virtual ConstructionAxis* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ConstructionAxisInput* createInput_raw(Occurrence* occurrenceForCreation) const = 0;
    virtual ConstructionAxis* add_raw(ConstructionAxisInput* input) = 0;
    virtual Component* component_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ConstructionAxis> ConstructionAxes::item(size_t index) const
{
    core::Ptr<ConstructionAxis> res = item_raw(index);
    return res;
}

inline core::Ptr<ConstructionAxis> ConstructionAxes::itemByName(const std::string& name) const
{
    core::Ptr<ConstructionAxis> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t ConstructionAxes::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ConstructionAxisInput> ConstructionAxes::createInput(const core::Ptr<Occurrence>& occurrenceForCreation) const
{
    core::Ptr<ConstructionAxisInput> res = createInput_raw(occurrenceForCreation.get());
    return res;
}

inline core::Ptr<ConstructionAxis> ConstructionAxes::add(const core::Ptr<ConstructionAxisInput>& input)
{
    core::Ptr<ConstructionAxis> res = add_raw(input.get());
    return res;
}

inline core::Ptr<Component> ConstructionAxes::component() const
{
    core::Ptr<Component> res = component_raw();
    return res;
}

template <class OutputIterator> inline void ConstructionAxes::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONAXES_API