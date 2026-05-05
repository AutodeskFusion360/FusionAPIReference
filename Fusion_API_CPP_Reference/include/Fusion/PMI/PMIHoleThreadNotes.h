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
# ifdef __COMPILING_ADSK_FUSION_PMIHOLETHREADNOTES_CPP__
# define ADSK_FUSION_PMIHOLETHREADNOTES_API XI_EXPORT
# else
# define ADSK_FUSION_PMIHOLETHREADNOTES_API
# endif
#else
# define ADSK_FUSION_PMIHOLETHREADNOTES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
    class PMIHoleThreadNote;
    class PMIHoleThreadNoteInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Provides access to the all the PMIHoleThreadNote objects in a component.
class PMIHoleThreadNotes : public core::Base {
public:

    /// Gets the number of PMIHoleThreadNote in the collection.
    size_t count() const;

    /// Gets the specified PMIHoleThreadNote using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<PMIHoleThreadNote> item(size_t index) const;

    /// Gets the specified PMIHoleThreadNote from the collection using a name.
    /// name : The name of the PMIHoleThreadNote within the collection to return.
    /// Returns the specified item or null if no item with the specified name was found.
    core::Ptr<PMIHoleThreadNote> itemByName(const std::string& name) const;

    /// Gets all the PMIHoleThreadNote from the collection that are associated with the specified geometric entities.
    /// 
    /// This is useful for finding PMIHoleThreadNote that reference specific geometric features.
    /// entities : An array of core.Base objects that represent the geometric entities to search for associated PMI. These can be BRepFace,
    /// BRepEdge or BRepVertex objects. The function will return the PMIHoleThreadNote that references any of these entities in their geometric associations.
    /// Returns an array of PMIHoleThreadNote objects that are associated with the specified entities and match the type filter (if provided)
    /// or an empty array if no matching PMI were found.
    std::vector<core::Ptr<PMIHoleThreadNote>> itemsByEntities(const std::vector<core::Ptr<core::Base>>& entities) const;

    /// Creates a PMIHoleThreadNoteInput object that is in turn used to create a Hole/Thread Note PMI.
    /// faces : BRepFace array that contains the faces which the Hole/Thread Note will be associated with.
    /// 
    /// The faces must be:
    /// 
    /// a. A subset of the faces that define one/multiple geometric holes. (e.g. cylindrical face that belongs to a counterbore hole, planar
    /// face that belongs to a blind hole, etc.). In the case of a complex hole (neither simple, counterbore or countersink),
    /// the faces provided should be the faces the PMI is related to.
    /// 
    /// b. A set of faces that define geometric bosses. Supported types are cylindrical bosses.
    /// The set can define a group of such holes/bosses that would be associated and to the same PMI.
    /// 
    /// Native objects will be used when setting the faces.
    /// Returns a PMIHoleThreadNoteInput object.
    core::Ptr<PMIHoleThreadNoteInput> createInput(const std::vector<core::Ptr<BRepFace>>& faces) const;

    /// Creates a new Hole/Thread Note using the creation parameters in the PMIHoleThreadNoteInput.
    /// input : A PMIHoleThreadNoteInput object.
    /// Returns the newly created PMIHoleThreadNote or null if the creation failed.
    core::Ptr<PMIHoleThreadNote> add(const core::Ptr<PMIHoleThreadNoteInput>& input);

    typedef PMIHoleThreadNote iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_PMIHOLETHREADNOTES_API static const char* classType();
    ADSK_FUSION_PMIHOLETHREADNOTES_API const char* objectType() const override;
    ADSK_FUSION_PMIHOLETHREADNOTES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIHOLETHREADNOTES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual PMIHoleThreadNote* item_raw(size_t index) const = 0;
    virtual PMIHoleThreadNote* itemByName_raw(const char* name) const = 0;
    virtual PMIHoleThreadNote** itemsByEntities_raw(core::Base** entities, size_t entities_size, size_t& return_size) const = 0;
    virtual PMIHoleThreadNoteInput* createInput_raw(BRepFace** faces, size_t faces_size) const = 0;
    virtual PMIHoleThreadNote* add_raw(PMIHoleThreadNoteInput* input) = 0;
};

// Inline wrappers

inline size_t PMIHoleThreadNotes::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<PMIHoleThreadNote> PMIHoleThreadNotes::item(size_t index) const
{
    core::Ptr<PMIHoleThreadNote> res = item_raw(index);
    return res;
}

inline core::Ptr<PMIHoleThreadNote> PMIHoleThreadNotes::itemByName(const std::string& name) const
{
    core::Ptr<PMIHoleThreadNote> res = itemByName_raw(name.c_str());
    return res;
}

inline std::vector<core::Ptr<PMIHoleThreadNote>> PMIHoleThreadNotes::itemsByEntities(const std::vector<core::Ptr<core::Base>>& entities) const
{
    std::vector<core::Ptr<PMIHoleThreadNote>> res;
    size_t s;
    core::Base** entities_ = new core::Base*[entities.size()];
    for(size_t i=0; i<entities.size(); ++i)
        entities_[i] = entities[i].get();

    PMIHoleThreadNote** p= itemsByEntities_raw(entities_, entities.size(), s);
    delete[] entities_;
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<PMIHoleThreadNoteInput> PMIHoleThreadNotes::createInput(const std::vector<core::Ptr<BRepFace>>& faces) const
{
    BRepFace** faces_ = new BRepFace*[faces.size()];
    for(size_t i=0; i<faces.size(); ++i)
        faces_[i] = faces[i].get();

    core::Ptr<PMIHoleThreadNoteInput> res = createInput_raw(faces_, faces.size());
    delete[] faces_;
    return res;
}

inline core::Ptr<PMIHoleThreadNote> PMIHoleThreadNotes::add(const core::Ptr<PMIHoleThreadNoteInput>& input)
{
    core::Ptr<PMIHoleThreadNote> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void PMIHoleThreadNotes::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIHOLETHREADNOTES_API