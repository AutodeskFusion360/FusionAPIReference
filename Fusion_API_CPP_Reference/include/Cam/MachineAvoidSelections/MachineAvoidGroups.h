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
# ifdef __COMPILING_ADSK_CAM_MACHINEAVOIDGROUPS_CPP__
# define ADSK_CAM_MACHINEAVOIDGROUPS_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEAVOIDGROUPS_API
# endif
#else
# define ADSK_CAM_MACHINEAVOIDGROUPS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MachineAvoidDirectSelection;
    class MachineAvoidSelectionBase;
}}

namespace adsk { namespace cam {

/// Collection of all the mutually exclusive surface groups to be passed to a toolpath with stock to leave and avoid clearances associated to them.
/// This is a read-only container that gets passed to CadMachineAvoidGroupsParameterValue object.
/// It returns the groups associated with the parent parameter value object, but does not write to it.
/// To apply changes done to the collection and the selections it contains, CadMachineAvoidGroupsParameterValue.applyMachineAvoidGroups() needs to be called.
class MachineAvoidGroups : public core::Base {
public:

    /// Function that returns the specified machine/avoid group selection object using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<MachineAvoidSelectionBase> item(size_t index) const;

    /// Function that returns the specified machine/avoid default group selection object using the group type.
    /// Default groups contain surfaces that have a specific meaning within the toolpath operation, for example Model, Fixture, Drive etc.
    /// type : The type of the default group within the collection to return. There can be only one default group of a given type
    /// Returns the specified item or null if there isn't a group of the specified type
    core::Ptr<MachineAvoidSelectionBase> defaultGroup(DefaultGroupType type);

    /// The number of items in the collection.
    size_t count() const;

    /// Clears all entries.
    void clear();

    /// Creates a new machine avoid group and adds it to the end of the collection.
    /// Returns newly created MachineAvoidDirectSelection.
    core::Ptr<MachineAvoidDirectSelection> createNewMachineAvoidDirectSelectionGroup();

    /// Function that removes the specified group object using an index in the collection.
    /// index : The index of the item within the collection to remove. The first item in the collection has an index of 0.
    void remove(size_t index);

    /// Function that removes the specified group object from the collection.
    /// selection : The item within the collection to remove. Throws an exception if the machine avoid group is not part of the given selection.
    void removeByObject(const core::Ptr<MachineAvoidSelectionBase>& group);

    /// Function that synchronizes the selections and properties of the default groups from the current operation.
    /// This is needed when there are changes made to parameters that drive the default groups (e.g. Setup model or fixture
    /// selection changes to be reflected in the MachineAvoidGroups object on the API side).
    /// WARNING: This function must not be called before applyMachineAvoidGroups, because temporary
    /// group settings and selections will not have been stored in the operation object and will
    /// be overwritten.
    void sync();

    typedef MachineAvoidSelectionBase iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_MACHINEAVOIDGROUPS_API static const char* classType();
    ADSK_CAM_MACHINEAVOIDGROUPS_API const char* objectType() const override;
    ADSK_CAM_MACHINEAVOIDGROUPS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEAVOIDGROUPS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MachineAvoidSelectionBase* item_raw(size_t index) const = 0;
    virtual MachineAvoidSelectionBase* defaultGroup_raw(DefaultGroupType type) = 0;
    virtual size_t count_raw() const = 0;
    virtual void clear_raw() = 0;
    virtual MachineAvoidDirectSelection* createNewMachineAvoidDirectSelectionGroup_raw() = 0;
    virtual void remove_raw(size_t index) = 0;
    virtual void removeByObject_raw(MachineAvoidSelectionBase* group) = 0;
    virtual void sync_raw() = 0;
};

// Inline wrappers

inline core::Ptr<MachineAvoidSelectionBase> MachineAvoidGroups::item(size_t index) const
{
    core::Ptr<MachineAvoidSelectionBase> res = item_raw(index);
    return res;
}

inline core::Ptr<MachineAvoidSelectionBase> MachineAvoidGroups::defaultGroup(DefaultGroupType type)
{
    core::Ptr<MachineAvoidSelectionBase> res = defaultGroup_raw(type);
    return res;
}

inline size_t MachineAvoidGroups::count() const
{
    size_t res = count_raw();
    return res;
}

inline void MachineAvoidGroups::clear()
{
    clear_raw();
}

inline core::Ptr<MachineAvoidDirectSelection> MachineAvoidGroups::createNewMachineAvoidDirectSelectionGroup()
{
    core::Ptr<MachineAvoidDirectSelection> res = createNewMachineAvoidDirectSelectionGroup_raw();
    return res;
}

inline void MachineAvoidGroups::remove(size_t index)
{
    remove_raw(index);
}

inline void MachineAvoidGroups::removeByObject(const core::Ptr<MachineAvoidSelectionBase>& group)
{
    removeByObject_raw(group.get());
}

inline void MachineAvoidGroups::sync()
{
    sync_raw();
}

template <class OutputIterator> inline void MachineAvoidGroups::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEAVOIDGROUPS_API