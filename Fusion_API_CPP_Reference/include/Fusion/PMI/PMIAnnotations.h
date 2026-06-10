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
# ifdef __COMPILING_ADSK_FUSION_PMIANNOTATIONS_CPP__
# define ADSK_FUSION_PMIANNOTATIONS_API XI_EXPORT
# else
# define ADSK_FUSION_PMIANNOTATIONS_API
# endif
#else
# define ADSK_FUSION_PMIANNOTATIONS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class PMIAnnotation;
    class PMIHoleThreadNotes;
    class PMIImportedDimensions;
    class PMIImportedFolders;
    class PMIImportedGDTDatums;
    class PMIImportedGeometricTolerances;
    class PMIImportedGraphicals;
    class PMIImportedNotes;
    class PMIImportedSurfaceTextures;
    class PMILeaderLineNotes;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Provides access to the all the PMI (Product Manufacturing Information) in a component.
class PMIAnnotations : public core::Base {
public:

    /// Gets the number of PMI in the collection. PMIFolders are included in this count.
    size_t count() const;

    /// Gets the specified PMI using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    /// 
    /// The type of the object returned is the base class PMIAnnotation.
    core::Ptr<PMIAnnotation> item(size_t index) const;

    /// Gets the specified PMI from the collection using a name.
    /// name : The name of the PMI within the collection to return.
    /// Returns the specified item or null if no item with the specified name was found.
    /// 
    /// The type of the object returned is the base class PMIAnnotation.
    core::Ptr<PMIAnnotation> itemByName(const std::string& name) const;

    /// Gets all the PMI from the collection that match the specified PMI types.
    /// types : An array of PMITypes that specifies the types of PMI to return. If an empty array or null is passed,
    /// all the PMI from the collection will be returned regardless of type.
    /// Returns an array of PMI objects that match the specified types, or an empty array if no matching PMI were found.
    /// 
    /// The type of the objects returned is the base class PMIAnnotation.
    std::vector<core::Ptr<PMIAnnotation>> itemsByTypes(const std::vector<int>& types) const;

    /// Gets all the PMI from the collection that are associated with the specified geometric entities and optionally match the specified PMI types.
    /// 
    /// This is useful for finding PMI that reference specific geometric features.
    /// entities : An array of core.Base objects that represent the geometric entities to search for associated PMI. These can be BRepFace,
    /// BRepEdge, BRepVertex, or BRepBody objects. The function will return the PMI that references any of these entities in their geometric associations.
    /// 
    /// For example, a Diameter Dimension PMI associated with a cylindrical face, a Hole/Thread Note PMI associated with faces that define a hole feature,
    /// or a Leader Line Note PMI associated with an edge or vertex.
    /// types : An optional array of PMITypes that filters the results to include only PMI that matches the type presented in the specified types. If an empty array or null
    /// is passed, all the PMI associated with the specified geometric entities will be returned, regardless of type.
    /// Returns an array of PMI objects that are associated with the specified entities and match the type filter (if provided)
    /// or an empty array if no matching PMI were found.
    /// 
    /// The type of the objects returned is the base class PMIAnnotation.
    std::vector<core::Ptr<PMIAnnotation>> itemsByEntities(const std::vector<core::Ptr<core::Base>>& entities, const std::vector<int>& types = std::vector<int>()) const;

    /// Gets the PMIImportedFolders collection.
    core::Ptr<PMIImportedFolders> importedFolders() const;

    /// Gets the PMIImportedDimensions collection.
    core::Ptr<PMIImportedDimensions> importedDimensions() const;

    /// Gets the PMIImportedNotes collection.
    core::Ptr<PMIImportedNotes> importedNotes() const;

    /// Gets the PMIImportedSurfaceTextures collection.
    core::Ptr<PMIImportedSurfaceTextures> importedSurfaceTextures() const;

    /// Gets the PMIImportedGeometricTolerances collection.
    core::Ptr<PMIImportedGeometricTolerances> importedGeometricTolerances() const;

    /// Gets the PMIImportedGraphicals collection.
    core::Ptr<PMIImportedGraphicals> importedGraphicals() const;

    /// Gets the PMIImportedGDTDatums collection.
    core::Ptr<PMIImportedGDTDatums> importedGDTDatums() const;

    /// Gets the PMIHoleThreadNotes collection.
    core::Ptr<PMIHoleThreadNotes> holeThreadNotes() const;

    /// Gets the PMILeaderLineNotes collection.
    core::Ptr<PMILeaderLineNotes> leaderLineNotes() const;

    typedef PMIAnnotation iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_PMIANNOTATIONS_API static const char* classType();
    ADSK_FUSION_PMIANNOTATIONS_API const char* objectType() const override;
    ADSK_FUSION_PMIANNOTATIONS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIANNOTATIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual PMIAnnotation* item_raw(size_t index) const = 0;
    virtual PMIAnnotation* itemByName_raw(const char* name) const = 0;
    virtual PMIAnnotation** itemsByTypes_raw(const int* types, size_t types_size, size_t& return_size) const = 0;
    virtual PMIAnnotation** itemsByEntities_raw(core::Base** entities, size_t entities_size, const int* types, size_t types_size, size_t& return_size) const = 0;
    virtual PMIImportedFolders* importedFolders_raw() const = 0;
    virtual PMIImportedDimensions* importedDimensions_raw() const = 0;
    virtual PMIImportedNotes* importedNotes_raw() const = 0;
    virtual PMIImportedSurfaceTextures* importedSurfaceTextures_raw() const = 0;
    virtual PMIImportedGeometricTolerances* importedGeometricTolerances_raw() const = 0;
    virtual PMIImportedGraphicals* importedGraphicals_raw() const = 0;
    virtual PMIImportedGDTDatums* importedGDTDatums_raw() const = 0;
    virtual PMIHoleThreadNotes* holeThreadNotes_raw() const = 0;
    virtual PMILeaderLineNotes* leaderLineNotes_raw() const = 0;
};

// Inline wrappers

inline size_t PMIAnnotations::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<PMIAnnotation> PMIAnnotations::item(size_t index) const
{
    core::Ptr<PMIAnnotation> res = item_raw(index);
    return res;
}

inline core::Ptr<PMIAnnotation> PMIAnnotations::itemByName(const std::string& name) const
{
    core::Ptr<PMIAnnotation> res = itemByName_raw(name.c_str());
    return res;
}

inline std::vector<core::Ptr<PMIAnnotation>> PMIAnnotations::itemsByTypes(const std::vector<int>& types) const
{
    std::vector<core::Ptr<PMIAnnotation>> res;
    size_t s;

    PMIAnnotation** p= itemsByTypes_raw(types.empty() ? nullptr : &types[0], types.size(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<PMIAnnotation>> PMIAnnotations::itemsByEntities(const std::vector<core::Ptr<core::Base>>& entities, const std::vector<int>& types) const
{
    std::vector<core::Ptr<PMIAnnotation>> res;
    size_t s;
    core::Base** entities_ = new core::Base*[entities.size()];
    for(size_t i=0; i<entities.size(); ++i)
        entities_[i] = entities[i].get();

    PMIAnnotation** p= itemsByEntities_raw(entities_, entities.size(), types.empty() ? nullptr : &types[0], types.size(), s);
    delete[] entities_;
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<PMIImportedFolders> PMIAnnotations::importedFolders() const
{
    core::Ptr<PMIImportedFolders> res = importedFolders_raw();
    return res;
}

inline core::Ptr<PMIImportedDimensions> PMIAnnotations::importedDimensions() const
{
    core::Ptr<PMIImportedDimensions> res = importedDimensions_raw();
    return res;
}

inline core::Ptr<PMIImportedNotes> PMIAnnotations::importedNotes() const
{
    core::Ptr<PMIImportedNotes> res = importedNotes_raw();
    return res;
}

inline core::Ptr<PMIImportedSurfaceTextures> PMIAnnotations::importedSurfaceTextures() const
{
    core::Ptr<PMIImportedSurfaceTextures> res = importedSurfaceTextures_raw();
    return res;
}

inline core::Ptr<PMIImportedGeometricTolerances> PMIAnnotations::importedGeometricTolerances() const
{
    core::Ptr<PMIImportedGeometricTolerances> res = importedGeometricTolerances_raw();
    return res;
}

inline core::Ptr<PMIImportedGraphicals> PMIAnnotations::importedGraphicals() const
{
    core::Ptr<PMIImportedGraphicals> res = importedGraphicals_raw();
    return res;
}

inline core::Ptr<PMIImportedGDTDatums> PMIAnnotations::importedGDTDatums() const
{
    core::Ptr<PMIImportedGDTDatums> res = importedGDTDatums_raw();
    return res;
}

inline core::Ptr<PMIHoleThreadNotes> PMIAnnotations::holeThreadNotes() const
{
    core::Ptr<PMIHoleThreadNotes> res = holeThreadNotes_raw();
    return res;
}

inline core::Ptr<PMILeaderLineNotes> PMIAnnotations::leaderLineNotes() const
{
    core::Ptr<PMILeaderLineNotes> res = leaderLineNotes_raw();
    return res;
}

template <class OutputIterator> inline void PMIAnnotations::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIANNOTATIONS_API