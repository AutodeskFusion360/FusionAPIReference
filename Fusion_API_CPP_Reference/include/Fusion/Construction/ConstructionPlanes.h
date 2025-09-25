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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPLANES_CPP__
# define ADSK_FUSION_CONSTRUCTIONPLANES_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPLANES_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPLANES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Component;
    class ConstructionPlane;
    class ConstructionPlaneInput;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Provides access to the construction planes within a component and provides
/// methods to create new construction planes.
class ConstructionPlanes : public core::Base {
public:

    /// Function that returns the specified construction plane using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ConstructionPlane> item(size_t index) const;

    /// Returns the specified construction plane using the name of the construction
    /// plane as it is displayed in the browser.
    /// name : The name of the construction plane as it is displayed in the browser
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<ConstructionPlane> itemByName(const std::string& name) const;

    /// Returns the number of construction planes in the collection.
    size_t count() const;

    /// Create a ConstructionPlaneInput object that is in turn used to create a ConstructionPlane.
    /// occurrenceForCreation : A creation occurrence is needed if the input is in another component AND the
    /// construction plane is not in the root component. The occurrenceForCreation is analogous
    /// to the active occurrence in the UI.
    /// Returns a ConstructionPlaneInput object
    core::Ptr<ConstructionPlaneInput> createInput(const core::Ptr<Occurrence>& occurrenceForCreation = NULL) const;

    /// Creates and adds a new ConstructionPlane using the creation parameters in
    /// the ConstructionPlaneInput.
    /// 
    /// If the ConstructionPlaneInput was defined using the setByPlane method then
    /// the add will only work in the direct modeling model and will fail in the parametric modeling mode.
    /// input : A ConstructionPlaneInput object
    /// Returns the newly created construction plane or null if the creation failed.
    core::Ptr<ConstructionPlane> add(const core::Ptr<ConstructionPlaneInput>& input);

    /// Returns the component that owns this collection.
    core::Ptr<Component> component() const;

    typedef ConstructionPlane iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CONSTRUCTIONPLANES_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPLANES_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPLANES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPLANES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConstructionPlane* item_raw(size_t index) const = 0;
    virtual ConstructionPlane* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ConstructionPlaneInput* createInput_raw(Occurrence* occurrenceForCreation) const = 0;
    virtual ConstructionPlane* add_raw(ConstructionPlaneInput* input) = 0;
    virtual Component* component_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ConstructionPlane> ConstructionPlanes::item(size_t index) const
{
    core::Ptr<ConstructionPlane> res = item_raw(index);
    return res;
}

inline core::Ptr<ConstructionPlane> ConstructionPlanes::itemByName(const std::string& name) const
{
    core::Ptr<ConstructionPlane> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t ConstructionPlanes::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ConstructionPlaneInput> ConstructionPlanes::createInput(const core::Ptr<Occurrence>& occurrenceForCreation) const
{
    core::Ptr<ConstructionPlaneInput> res = createInput_raw(occurrenceForCreation.get());
    return res;
}

inline core::Ptr<ConstructionPlane> ConstructionPlanes::add(const core::Ptr<ConstructionPlaneInput>& input)
{
    core::Ptr<ConstructionPlane> res = add_raw(input.get());
    return res;
}

inline core::Ptr<Component> ConstructionPlanes::component() const
{
    core::Ptr<Component> res = component_raw();
    return res;
}

template <class OutputIterator> inline void ConstructionPlanes::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPLANES_API