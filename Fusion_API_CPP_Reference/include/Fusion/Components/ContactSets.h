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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONTACTSETS_CPP__
# define ADSK_FUSION_CONTACTSETS_API XI_EXPORT
# else
# define ADSK_FUSION_CONTACTSETS_API
# endif
#else
# define ADSK_FUSION_CONTACTSETS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ContactSet;
}}

namespace adsk { namespace fusion {

/// Provides access to the existing contact sets in a design and supports creating new contact sets.
class ContactSets : public core::Base {
public:

    /// Returns the specified contact set using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ContactSet> item(size_t index) const;

    /// Returns the specified contact set.
    /// name : The name of the contact set to return.
    /// Returns the specified contact set or null there isn't a contact set with that name.
    core::Ptr<ContactSet> itemByName(const std::string& name) const;

    /// Returns the number of contacts sets in the design.
    size_t count() const;

    /// Creates a new contact set for the provided occurrences and/or bodies.
    /// occurrencesAndBodies : An array of Occurrence or BRepBody objects that will be included in the contact set.
    /// All occurrences and bodies must be in the context of the root component.
    /// Returns the newly created ContactSet or null in the case of failure.
    core::Ptr<ContactSet> add(const std::vector<core::Ptr<core::Base>>& occurrencesAndBodies);

    typedef ContactSet iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CONTACTSETS_API static const char* classType();
    ADSK_FUSION_CONTACTSETS_API const char* objectType() const override;
    ADSK_FUSION_CONTACTSETS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONTACTSETS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ContactSet* item_raw(size_t index) const = 0;
    virtual ContactSet* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ContactSet* add_raw(core::Base** occurrencesAndBodies, size_t occurrencesAndBodies_size) = 0;
};

// Inline wrappers

inline core::Ptr<ContactSet> ContactSets::item(size_t index) const
{
    core::Ptr<ContactSet> res = item_raw(index);
    return res;
}

inline core::Ptr<ContactSet> ContactSets::itemByName(const std::string& name) const
{
    core::Ptr<ContactSet> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t ContactSets::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ContactSet> ContactSets::add(const std::vector<core::Ptr<core::Base>>& occurrencesAndBodies)
{
    core::Base** occurrencesAndBodies_ = new core::Base*[occurrencesAndBodies.size()];
    for(size_t i=0; i<occurrencesAndBodies.size(); ++i)
        occurrencesAndBodies_[i] = occurrencesAndBodies[i].get();

    core::Ptr<ContactSet> res = add_raw(occurrencesAndBodies_, occurrencesAndBodies.size());
    delete[] occurrencesAndBodies_;
    return res;
}

template <class OutputIterator> inline void ContactSets::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONTACTSETS_API