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
# ifdef __COMPILING_ADSK_FUSION_PMIIMPORTEDNOTES_CPP__
# define ADSK_FUSION_PMIIMPORTEDNOTES_API XI_EXPORT
# else
# define ADSK_FUSION_PMIIMPORTEDNOTES_API
# endif
#else
# define ADSK_FUSION_PMIIMPORTEDNOTES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class PMIImportedNote;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Provides access to the all the PMIImportedNote objects in a component.
class PMIImportedNotes : public core::Base {
public:

    /// Gets the number of PMIImportedNote in the collection.
    size_t count() const;

    /// Gets the specified PMIImportedNote using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<PMIImportedNote> item(size_t index) const;

    /// Gets the specified PMIImportedNote from the collection using a name.
    /// name : The name of the PMIImportedNote within the collection to return.
    /// Returns the specified item or null if no item with the specified name was found.
    core::Ptr<PMIImportedNote> itemByName(const std::string& name) const;

    /// Gets all the PMIImportedNote from the collection that are associated with the specified geometric entities.
    /// 
    /// This is useful for finding PMIImportedNote that reference specific geometric features.
    /// entities : An array of core.Base objects that represent the geometric entities to search for associated PMI. These can be BRepFace,
    /// BRepEdge or BRepVertex objects. The function will return the PMIImportedNote that references any of these entities in their geometric associations.
    /// Returns an array of PMIImportedNote objects that are associated with the specified entities and match the type filter (if provided)
    /// or an empty array if no matching PMI were found.
    std::vector<core::Ptr<PMIImportedNote>> itemsByEntities(const std::vector<core::Ptr<core::Base>>& entities) const;

    typedef PMIImportedNote iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_PMIIMPORTEDNOTES_API static const char* classType();
    ADSK_FUSION_PMIIMPORTEDNOTES_API const char* objectType() const override;
    ADSK_FUSION_PMIIMPORTEDNOTES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIIMPORTEDNOTES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual PMIImportedNote* item_raw(size_t index) const = 0;
    virtual PMIImportedNote* itemByName_raw(const char* name) const = 0;
    virtual PMIImportedNote** itemsByEntities_raw(core::Base** entities, size_t entities_size, size_t& return_size) const = 0;
};

// Inline wrappers

inline size_t PMIImportedNotes::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<PMIImportedNote> PMIImportedNotes::item(size_t index) const
{
    core::Ptr<PMIImportedNote> res = item_raw(index);
    return res;
}

inline core::Ptr<PMIImportedNote> PMIImportedNotes::itemByName(const std::string& name) const
{
    core::Ptr<PMIImportedNote> res = itemByName_raw(name.c_str());
    return res;
}

inline std::vector<core::Ptr<PMIImportedNote>> PMIImportedNotes::itemsByEntities(const std::vector<core::Ptr<core::Base>>& entities) const
{
    std::vector<core::Ptr<PMIImportedNote>> res;
    size_t s;
    core::Base** entities_ = new core::Base*[entities.size()];
    for(size_t i=0; i<entities.size(); ++i)
        entities_[i] = entities[i].get();

    PMIImportedNote** p= itemsByEntities_raw(entities_, entities.size(), s);
    delete[] entities_;
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

template <class OutputIterator> inline void PMIImportedNotes::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIIMPORTEDNOTES_API