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
#include "MachineElement.h"
#include "../CamTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_INTERACTIONSMACHINEELEMENT_CPP__
# define ADSK_CAM_INTERACTIONSMACHINEELEMENT_API XI_EXPORT
# else
# define ADSK_CAM_INTERACTIONSMACHINEELEMENT_API
# endif
#else
# define ADSK_CAM_INTERACTIONSMACHINEELEMENT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MachineInteractionPair;
    class MachineItem;
    class MachinePart;
}}

namespace adsk { namespace cam {

/// Machine element representing the machine's interactions.
/// This controls how MachineItems interact with each other.
class InteractionsMachineElement : public MachineElement {
public:

    /// Identifying name for all elements of this type.
    /// Pass this to the itemByType or itemById methods of MachineElements to filter to elements of this type.
    /// Returns identifier of this type.
    static std::string staticTypeId();

    /// Get the MachineInteractionPair at index in this collection.
    /// index : The index of the MachineInteractionPair.
    /// The MachineInteractionPair at index.
    core::Ptr<MachineInteractionPair> item(int index) const;

    /// Get the number of pairs in this collection.
    size_t count() const;

    /// Add an MachineInteractionPair.
    /// This will overwrite any existing MachineInteractionPair with the same item1 and item2.
    bool apply(const core::Ptr<MachineInteractionPair>& setting);

    /// Create a MachineInteractionPair that will control how the two items interact.
    core::Ptr<MachineInteractionPair> createMachineInteractionPair(const core::Ptr<MachineItem>& item1, const core::Ptr<MachineItem>& item2);

    /// Create a MachineItem.
    core::Ptr<MachineItem> createMachineItem(MachineItemType type, const core::Ptr<MachinePart>& part);

    /// Restore all MachineInteractionPairs to their defaults.
    bool resetMachineInteractionPairs();

    typedef MachineInteractionPair iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_INTERACTIONSMACHINEELEMENT_API static const char* classType();
    ADSK_CAM_INTERACTIONSMACHINEELEMENT_API const char* objectType() const override;
    ADSK_CAM_INTERACTIONSMACHINEELEMENT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_INTERACTIONSMACHINEELEMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_INTERACTIONSMACHINEELEMENT_API static char* staticTypeId_raw();
    virtual MachineInteractionPair* item_raw(int index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual bool apply_raw(MachineInteractionPair* setting) = 0;
    virtual MachineInteractionPair* createMachineInteractionPair_raw(MachineItem* item1, MachineItem* item2) = 0;
    virtual MachineItem* createMachineItem_raw(MachineItemType type, MachinePart* part) = 0;
    virtual bool resetMachineInteractionPairs_raw() = 0;
};

// Inline wrappers

inline std::string InteractionsMachineElement::staticTypeId()
{
    std::string res;

    char* p= staticTypeId_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<MachineInteractionPair> InteractionsMachineElement::item(int index) const
{
    core::Ptr<MachineInteractionPair> res = item_raw(index);
    return res;
}

inline size_t InteractionsMachineElement::count() const
{
    size_t res = count_raw();
    return res;
}

inline bool InteractionsMachineElement::apply(const core::Ptr<MachineInteractionPair>& setting)
{
    bool res = apply_raw(setting.get());
    return res;
}

inline core::Ptr<MachineInteractionPair> InteractionsMachineElement::createMachineInteractionPair(const core::Ptr<MachineItem>& item1, const core::Ptr<MachineItem>& item2)
{
    core::Ptr<MachineInteractionPair> res = createMachineInteractionPair_raw(item1.get(), item2.get());
    return res;
}

inline core::Ptr<MachineItem> InteractionsMachineElement::createMachineItem(MachineItemType type, const core::Ptr<MachinePart>& part)
{
    core::Ptr<MachineItem> res = createMachineItem_raw(type, part.get());
    return res;
}

inline bool InteractionsMachineElement::resetMachineInteractionPairs()
{
    bool res = resetMachineInteractionPairs_raw();
    return res;
}

template <class OutputIterator> inline void InteractionsMachineElement::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_INTERACTIONSMACHINEELEMENT_API