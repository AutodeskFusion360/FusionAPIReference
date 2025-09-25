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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MACHINEPARTS_CPP__
# define ADSK_CAM_MACHINEPARTS_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEPARTS_API
# endif
#else
# define ADSK_CAM_MACHINEPARTS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MachinePart;
    class MachinePartInput;
}}

namespace adsk { namespace cam {

/// Object that represents a collection of machine parts.
/// These parts are the children of another part or the collection of base parts from MachineKinematics.
class MachineParts : public core::Base {
public:

    /// Add a new part to this collection. The part's parent will be set to the owner of
    /// this collection, or null if this is the root parts collection.
    /// 
    /// If the passed MachinePartInput has a MachineAxisInput a new MachineAxis will be created.
    /// partInput : Part input object used to create the new MachinePart.
    /// Returns the newly created MachinePart or null if creation failed.
    core::Ptr<MachinePart> add(const core::Ptr<MachinePartInput>& partInput);

    /// Create a new MachinePartInput.
    /// partType : The type of part to create.
    /// When this parameter is Axis, you must set a value for axisInput.
    /// Returns the new MachinePartInput or null if creation failed.
    core::Ptr<MachinePartInput> createPartInput(MachinePartTypes partType);

    /// Get the part at index in this collection.
    /// index : The index of the part.
    /// The MachinePart at index.
    core::Ptr<MachinePart> item(int index) const;

    /// Get the part with the given ID.
    /// id : The ID for the part to get.
    /// Returns the MachinePart with the given ID, or null if the given ID does not
    /// match any part in the collection.
    core::Ptr<MachinePart> itemById(const std::string& id) const;

    /// Get the number of parts in this collection.
    size_t count() const;

    typedef MachinePart iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_MACHINEPARTS_API static const char* classType();
    ADSK_CAM_MACHINEPARTS_API const char* objectType() const override;
    ADSK_CAM_MACHINEPARTS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEPARTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MachinePart* add_raw(MachinePartInput* partInput) = 0;
    virtual MachinePartInput* createPartInput_raw(MachinePartTypes partType) = 0;
    virtual MachinePart* item_raw(int index) const = 0;
    virtual MachinePart* itemById_raw(const char* id) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<MachinePart> MachineParts::add(const core::Ptr<MachinePartInput>& partInput)
{
    core::Ptr<MachinePart> res = add_raw(partInput.get());
    return res;
}

inline core::Ptr<MachinePartInput> MachineParts::createPartInput(MachinePartTypes partType)
{
    core::Ptr<MachinePartInput> res = createPartInput_raw(partType);
    return res;
}

inline core::Ptr<MachinePart> MachineParts::item(int index) const
{
    core::Ptr<MachinePart> res = item_raw(index);
    return res;
}

inline core::Ptr<MachinePart> MachineParts::itemById(const std::string& id) const
{
    core::Ptr<MachinePart> res = itemById_raw(id.c_str());
    return res;
}

inline size_t MachineParts::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void MachineParts::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEPARTS_API