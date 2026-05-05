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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMILEADERLINENOTES_CPP__
# define ADSK_FUSION_PMILEADERLINENOTES_API XI_EXPORT
# else
# define ADSK_FUSION_PMILEADERLINENOTES_API
# endif
#else
# define ADSK_FUSION_PMILEADERLINENOTES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class PMILeaderLineNote;
    class PMILeaderLineNoteInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Provides access to the all the PMILeaderLineNote objects in a component.
class PMILeaderLineNotes : public core::Base {
public:

    /// Gets the number of PMILeaderLineNote in the collection.
    size_t count() const;

    /// Gets the specified PMILeaderLineNote using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<PMILeaderLineNote> item(size_t index) const;

    /// Gets the specified PMILeaderLineNote from the collection using a name.
    /// name : The name of the PMILeaderLineNote within the collection to return.
    /// Returns the specified item or null if no item with the specified name was found.
    core::Ptr<PMILeaderLineNote> itemByName(const std::string& name) const;

    /// Gets all the PMILeaderLineNote from the collection that are associated with the specified geometric entities.
    /// 
    /// This is useful for finding PMILeaderLineNote that reference specific geometric features.
    /// entities : An array of core.Base objects that represent the geometric entities to search for associated PMI. These can be BRepFace,
    /// BRepEdge or BRepVertex objects. The function will return the PMILeaderLineNote that references any of these entities in their geometric associations.
    /// Returns an array of PMILeaderLineNote objects that are associated with the specified entities and match the type filter (if provided)
    /// or an empty array if no matching PMI were found.
    std::vector<core::Ptr<PMILeaderLineNote>> itemsByEntities(const std::vector<core::Ptr<core::Base>>& entities) const;

    /// Creates a PMILeaderLineNoteInput object that is in turn used to create a Leader Line Note PMI.
    /// entity : A core.Base object that represents the geometric entity to which the Note PMI will be associated.
    /// 
    /// This can be a BRepFace, BRepEdge, or BRepVertex object. For BRepEdge objects, only linear, circular
    /// and elliptical edges are supported. The note will be positioned relative to this entity and will
    /// maintain its association with the entity geometry.
    /// Native object will be used when setting the entity geometry.
    /// Returns a PMILeaderLineNoteInput object.
    core::Ptr<PMILeaderLineNoteInput> createInput(const core::Ptr<core::Base>& entity) const;

    /// Creates a new Leader Line Note using the creation parameters in the PMILeaderLineNoteInput.
    /// input : A PMILeaderLineNoteInput object.
    /// Returns the newly created PMILeaderLineNote or null if the creation failed.
    core::Ptr<PMILeaderLineNote> add(const core::Ptr<PMILeaderLineNoteInput>& input);

    typedef PMILeaderLineNote iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_PMILEADERLINENOTES_API static const char* classType();
    ADSK_FUSION_PMILEADERLINENOTES_API const char* objectType() const override;
    ADSK_FUSION_PMILEADERLINENOTES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMILEADERLINENOTES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual PMILeaderLineNote* item_raw(size_t index) const = 0;
    virtual PMILeaderLineNote* itemByName_raw(const char* name) const = 0;
    virtual PMILeaderLineNote** itemsByEntities_raw(core::Base** entities, size_t entities_size, size_t& return_size) const = 0;
    virtual PMILeaderLineNoteInput* createInput_raw(core::Base* entity) const = 0;
    virtual PMILeaderLineNote* add_raw(PMILeaderLineNoteInput* input) = 0;
};

// Inline wrappers

inline size_t PMILeaderLineNotes::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<PMILeaderLineNote> PMILeaderLineNotes::item(size_t index) const
{
    core::Ptr<PMILeaderLineNote> res = item_raw(index);
    return res;
}

inline core::Ptr<PMILeaderLineNote> PMILeaderLineNotes::itemByName(const std::string& name) const
{
    core::Ptr<PMILeaderLineNote> res = itemByName_raw(name.c_str());
    return res;
}

inline std::vector<core::Ptr<PMILeaderLineNote>> PMILeaderLineNotes::itemsByEntities(const std::vector<core::Ptr<core::Base>>& entities) const
{
    std::vector<core::Ptr<PMILeaderLineNote>> res;
    size_t s;
    core::Base** entities_ = new core::Base*[entities.size()];
    for(size_t i=0; i<entities.size(); ++i)
        entities_[i] = entities[i].get();

    PMILeaderLineNote** p= itemsByEntities_raw(entities_, entities.size(), s);
    delete[] entities_;
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<PMILeaderLineNoteInput> PMILeaderLineNotes::createInput(const core::Ptr<core::Base>& entity) const
{
    core::Ptr<PMILeaderLineNoteInput> res = createInput_raw(entity.get());
    return res;
}

inline core::Ptr<PMILeaderLineNote> PMILeaderLineNotes::add(const core::Ptr<PMILeaderLineNoteInput>& input)
{
    core::Ptr<PMILeaderLineNote> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void PMILeaderLineNotes::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMILEADERLINENOTES_API