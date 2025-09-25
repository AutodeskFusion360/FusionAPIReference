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
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_ARRANGESELECTIONS_CPP__
# define ADSK_CAM_ARRANGESELECTIONS_API XI_EXPORT
# else
# define ADSK_CAM_ARRANGESELECTIONS_API
# endif
#else
# define ADSK_CAM_ARRANGESELECTIONS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class ArrangeSelection;
}}

namespace adsk { namespace cam {

/// Collection for all arrange selections to be passed to a CAMArrangeParameterValue object.
/// This is a read-only container. It returns the arrange selections associated with the parent parameter value object, but does not write to it.
/// To apply changes done to the collection and the selections it contains, CAMArrangeParameterValue.applyArrangeSelections() needs to be called.
class ArrangeSelections : public core::Base {
public:

    /// Function that returns the specified arrange selection object using an index into the collection.
    /// index : The index of the item within the collection to return.  The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ArrangeSelection> item(size_t index) const;

    /// The number of items in the collection.
    size_t count() const;

    /// Clears all entries.
    void clear();

    /// Function that removes the specified arrange selection object using an index in the collection.
    /// index : The index of the item within the collection to remove.  The first item in the collection has an index of 0.
    void remove(size_t index);

    /// Function that removes the specified arrange selection object from the collection.
    /// selection : The item within the collection to remove.  Throws an exception if the arrange selection is not part of the given selection.
    void removeByObject(const core::Ptr<ArrangeSelection>& selection);

    /// Creates a new occurrence selection meant for arrange operations and adds it to the end of the collection.
    /// Returns newly created ArrangeSelection.
    core::Ptr<ArrangeSelection> createNewArrangeSelection();

    typedef ArrangeSelection iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_ARRANGESELECTIONS_API static const char* classType();
    ADSK_CAM_ARRANGESELECTIONS_API const char* objectType() const override;
    ADSK_CAM_ARRANGESELECTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_ARRANGESELECTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ArrangeSelection* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual void clear_raw() = 0;
    virtual void remove_raw(size_t index) = 0;
    virtual void removeByObject_raw(ArrangeSelection* selection) = 0;
    virtual ArrangeSelection* createNewArrangeSelection_raw() = 0;
};

// Inline wrappers

inline core::Ptr<ArrangeSelection> ArrangeSelections::item(size_t index) const
{
    core::Ptr<ArrangeSelection> res = item_raw(index);
    return res;
}

inline size_t ArrangeSelections::count() const
{
    size_t res = count_raw();
    return res;
}

inline void ArrangeSelections::clear()
{
    clear_raw();
}

inline void ArrangeSelections::remove(size_t index)
{
    remove_raw(index);
}

inline void ArrangeSelections::removeByObject(const core::Ptr<ArrangeSelection>& selection)
{
    removeByObject_raw(selection.get());
}

inline core::Ptr<ArrangeSelection> ArrangeSelections::createNewArrangeSelection()
{
    core::Ptr<ArrangeSelection> res = createNewArrangeSelection_raw();
    return res;
}

template <class OutputIterator> inline void ArrangeSelections::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_ARRANGESELECTIONS_API