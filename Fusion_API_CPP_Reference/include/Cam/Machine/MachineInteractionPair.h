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
# ifdef __COMPILING_ADSK_CAM_MACHINEINTERACTIONPAIR_CPP__
# define ADSK_CAM_MACHINEINTERACTIONPAIR_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEINTERACTIONPAIR_API
# endif
#else
# define ADSK_CAM_MACHINEINTERACTIONPAIR_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MachineItem;
}}

namespace adsk { namespace cam {

/// MachineInteractionPair objects control how a pair of MachineItems interact with each other.
class MachineInteractionPair : public core::Base {
public:

    /// The first MachineItem involved in this MachineInteractionPair.
    /// Returns a MachineItem.
    core::Ptr<MachineItem> item1() const;

    /// The second MachineItem involved in this MachineInteractionPair.
    /// Returns a MachineItem.
    core::Ptr<MachineItem> item2() const;

    /// Whether these MachineItems should be checked for collisions.
    /// Returns true if the two MachineItems should be checked for collisions.
    bool isCheckedForCollisions() const;
    bool isCheckedForCollisions(bool value);

    /// Whether this MachineInteractionPair will be ignored.
    /// Returns true if this MachineInteractionPair represents
    /// a pair of MachineItems that do not interact.
    bool isIgnored() const;

    /// Clear this MachineInteractionPair.
    /// This pair will then represent two MachineItems that do not interact.
    bool reset();

    ADSK_CAM_MACHINEINTERACTIONPAIR_API static const char* classType();
    ADSK_CAM_MACHINEINTERACTIONPAIR_API const char* objectType() const override;
    ADSK_CAM_MACHINEINTERACTIONPAIR_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEINTERACTIONPAIR_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MachineItem* item1_raw() const = 0;
    virtual MachineItem* item2_raw() const = 0;
    virtual bool isCheckedForCollisions_raw() const = 0;
    virtual bool isCheckedForCollisions_raw(bool value) = 0;
    virtual bool isIgnored_raw() const = 0;
    virtual bool reset_raw() = 0;
};

// Inline wrappers

inline core::Ptr<MachineItem> MachineInteractionPair::item1() const
{
    core::Ptr<MachineItem> res = item1_raw();
    return res;
}

inline core::Ptr<MachineItem> MachineInteractionPair::item2() const
{
    core::Ptr<MachineItem> res = item2_raw();
    return res;
}

inline bool MachineInteractionPair::isCheckedForCollisions() const
{
    bool res = isCheckedForCollisions_raw();
    return res;
}

inline bool MachineInteractionPair::isCheckedForCollisions(bool value)
{
    return isCheckedForCollisions_raw(value);
}

inline bool MachineInteractionPair::isIgnored() const
{
    bool res = isIgnored_raw();
    return res;
}

inline bool MachineInteractionPair::reset()
{
    bool res = reset_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEINTERACTIONPAIR_API