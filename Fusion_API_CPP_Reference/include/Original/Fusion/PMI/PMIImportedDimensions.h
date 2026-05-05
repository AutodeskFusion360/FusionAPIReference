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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIIMPORTEDDIMENSIONS_CPP__
# define ADSK_FUSION_PMIIMPORTEDDIMENSIONS_API XI_EXPORT
# else
# define ADSK_FUSION_PMIIMPORTEDDIMENSIONS_API
# endif
#else
# define ADSK_FUSION_PMIIMPORTEDDIMENSIONS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class PMIImportedDimension;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Provides access to the all the PMIImportedDimension objects in a component.
class PMIImportedDimensions : public core::Base {
public:

    /// Gets the number of PMIImportedDimensions in the collection.
    size_t count() const;

    /// Gets the specified PMIImportedDimension using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<PMIImportedDimension> item(size_t index) const;

    /// Gets the specified PMIImportedDimension from the collection using a name.
    /// name : The name of the PMIImportedDimension within the collection to return.
    /// Returns the specified item or null if no item with the specified name was found.
    core::Ptr<PMIImportedDimension> itemByName(const std::string& name) const;

    /// Gets all the PMIImportedDimension from the collection that match the specified PMI types.
    /// types : An array of PMITypes that specifies the types of PMI to return. If an empty array or null is passed,
    /// all the PMIImportedDimension from the collection will be returned regardless of type.
    /// Returns an array of PMI objects that match the specified types, or an empty array if no matching PMI were found.
    std::vector<core::Ptr<PMIImportedDimension>> itemsByTypes(const std::vector<int>& types) const;

    /// Gets all the PMIImportedDimension from the collection that are associated with the specified geometric entities and optionally match the specified PMI types.
    /// 
    /// This is useful for finding PMIImportedDimension that reference specific geometric features.
    /// entities : An array of core.Base objects that represent the geometric entities to search for associated PMI. These can be BRepFace,
    /// BRepEdge or BRepVertex objects. The function will return the PMIImportedDimension that references any of these entities in their geometric associations.
    /// 
    /// For example, a Diameter Dimension PMI associated with a cylindrical face.
    /// types : An optional array of PMITypes that filters the results to include only PMI that matches the type presented in the specified types. If an empty array or null
    /// is passed, all the PMIImportedDimension associated with the specified geometric entities will be returned, regardless of type.
    /// Returns an array of PMIImportedDimension objects that are associated with the specified entities and match the type filter (if provided)
    /// or an empty array if no matching PMI were found.
    std::vector<core::Ptr<PMIImportedDimension>> itemsByEntities(const std::vector<core::Ptr<core::Base>>& entities, const std::vector<int>& types = std::vector<int>()) const;

    typedef PMIImportedDimension iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_PMIIMPORTEDDIMENSIONS_API static const char* classType();
    ADSK_FUSION_PMIIMPORTEDDIMENSIONS_API const char* objectType() const override;
    ADSK_FUSION_PMIIMPORTEDDIMENSIONS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIIMPORTEDDIMENSIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual PMIImportedDimension* item_raw(size_t index) const = 0;
    virtual PMIImportedDimension* itemByName_raw(const char* name) const = 0;
    virtual PMIImportedDimension** itemsByTypes_raw(const int* types, size_t types_size, size_t& return_size) const = 0;
    virtual PMIImportedDimension** itemsByEntities_raw(core::Base** entities, size_t entities_size, const int* types, size_t types_size, size_t& return_size) const = 0;
};

// Inline wrappers

inline size_t PMIImportedDimensions::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<PMIImportedDimension> PMIImportedDimensions::item(size_t index) const
{
    core::Ptr<PMIImportedDimension> res = item_raw(index);
    return res;
}

inline core::Ptr<PMIImportedDimension> PMIImportedDimensions::itemByName(const std::string& name) const
{
    core::Ptr<PMIImportedDimension> res = itemByName_raw(name.c_str());
    return res;
}

inline std::vector<core::Ptr<PMIImportedDimension>> PMIImportedDimensions::itemsByTypes(const std::vector<int>& types) const
{
    std::vector<core::Ptr<PMIImportedDimension>> res;
    size_t s;

    PMIImportedDimension** p= itemsByTypes_raw(types.empty() ? nullptr : &types[0], types.size(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<PMIImportedDimension>> PMIImportedDimensions::itemsByEntities(const std::vector<core::Ptr<core::Base>>& entities, const std::vector<int>& types) const
{
    std::vector<core::Ptr<PMIImportedDimension>> res;
    size_t s;
    core::Base** entities_ = new core::Base*[entities.size()];
    for(size_t i=0; i<entities.size(); ++i)
        entities_[i] = entities[i].get();

    PMIImportedDimension** p= itemsByEntities_raw(entities_, entities.size(), types.empty() ? nullptr : &types[0], types.size(), s);
    delete[] entities_;
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

template <class OutputIterator> inline void PMIImportedDimensions::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIIMPORTEDDIMENSIONS_API