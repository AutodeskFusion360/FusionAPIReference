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
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MACHINEITEM_CPP__
# define ADSK_CAM_MACHINEITEM_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEITEM_API
# endif
#else
# define ADSK_CAM_MACHINEITEM_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MachinePart;
}}

namespace adsk { namespace cam {

/// An item on a machine that can collide.
/// That is, a MachinePart, or something attached to a MachinePart.
/// Create them via InteractionsMachineElement::createMachineItem
class MachineItem : public core::Base {
public:

    /// The type of this MachineItem.
    MachineItemType itemType() const;

    /// The machine part.
    core::Ptr<MachinePart> part() const;

    ADSK_CAM_MACHINEITEM_API static const char* classType();
    ADSK_CAM_MACHINEITEM_API const char* objectType() const override;
    ADSK_CAM_MACHINEITEM_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEITEM_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MachineItemType itemType_raw() const = 0;
    virtual MachinePart* part_raw() const = 0;
};

// Inline wrappers

inline MachineItemType MachineItem::itemType() const
{
    MachineItemType res = itemType_raw();
    return res;
}

inline core::Ptr<MachinePart> MachineItem::part() const
{
    core::Ptr<MachinePart> res = part_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEITEM_API