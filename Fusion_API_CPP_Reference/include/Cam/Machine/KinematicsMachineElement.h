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
#include "MachineElement.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_KINEMATICSMACHINEELEMENT_CPP__
# define ADSK_CAM_KINEMATICSMACHINEELEMENT_API XI_EXPORT
# else
# define ADSK_CAM_KINEMATICSMACHINEELEMENT_API
# endif
#else
# define ADSK_CAM_KINEMATICSMACHINEELEMENT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MachineParts;
}}

namespace adsk { namespace cam {

/// Machine element representing the machine's kinematics tree.
class KinematicsMachineElement : public MachineElement {
public:

    /// Identifying name for all elements of this type.
    /// Pass this to the itemByType or itemById methods of MachineElements to filter to elements of this type.
    /// Returns identifier of this type.
    static std::string staticTypeId();

    /// Get the root parts collection.
    core::Ptr<MachineParts> parts() const;

    ADSK_CAM_KINEMATICSMACHINEELEMENT_API static const char* classType();
    ADSK_CAM_KINEMATICSMACHINEELEMENT_API const char* objectType() const override;
    ADSK_CAM_KINEMATICSMACHINEELEMENT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_KINEMATICSMACHINEELEMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_KINEMATICSMACHINEELEMENT_API static char* staticTypeId_raw();
    virtual MachineParts* parts_raw() const = 0;
};

// Inline wrappers

inline std::string KinematicsMachineElement::staticTypeId()
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

inline core::Ptr<MachineParts> KinematicsMachineElement::parts() const
{
    core::Ptr<MachineParts> res = parts_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_KINEMATICSMACHINEELEMENT_API