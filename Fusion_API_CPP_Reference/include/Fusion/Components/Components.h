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
# ifdef __COMPILING_ADSK_FUSION_COMPONENTS_CPP__
# define ADSK_FUSION_COMPONENTS_API XI_EXPORT
# else
# define ADSK_FUSION_COMPONENTS_API
# endif
#else
# define ADSK_FUSION_COMPONENTS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Component;
}}

namespace adsk { namespace fusion {

/// The Components collection object provides access to existing components in a design.
class Components : public core::Base {
public:

    /// Function that returns the specified component using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Component> item(size_t index) const;

    /// The number of components in the collection.
    size_t count() const;

    /// Function that returns the specified component by name.
    /// name : The name of the component within the collection to return.
    /// Returns the specified component or null if the name is not found.
    core::Ptr<Component> itemByName(const std::string& name) const;

    /// Returns the Component that has the specified ID.
    /// id : The ID of the Component to get. This is the same id used by PIM (Product Information Model).
    /// Returns the specified Component or null in the case where there isn't a Component with the specified ID in this Design.
    core::Ptr<Component> itemById(const std::string& id) const;

    typedef Component iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_COMPONENTS_API static const char* classType();
    ADSK_FUSION_COMPONENTS_API const char* objectType() const override;
    ADSK_FUSION_COMPONENTS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_COMPONENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Component* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Component* itemByName_raw(const char* name) const = 0;
    virtual Component* itemById_raw(const char* id) const = 0;
};

// Inline wrappers

inline core::Ptr<Component> Components::item(size_t index) const
{
    core::Ptr<Component> res = item_raw(index);
    return res;
}

inline size_t Components::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<Component> Components::itemByName(const std::string& name) const
{
    core::Ptr<Component> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<Component> Components::itemById(const std::string& id) const
{
    core::Ptr<Component> res = itemById_raw(id.c_str());
    return res;
}

template <class OutputIterator> inline void Components::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_COMPONENTS_API