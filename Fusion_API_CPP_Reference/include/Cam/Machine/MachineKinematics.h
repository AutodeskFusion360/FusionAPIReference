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
# ifdef __COMPILING_ADSK_CAM_MACHINEKINEMATICS_CPP__
# define ADSK_CAM_MACHINEKINEMATICS_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEKINEMATICS_API
# endif
#else
# define ADSK_CAM_MACHINEKINEMATICS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MachineParts;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This has been retired; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents the kinematics tree in the machine.
class MachineKinematics : public core::Base {
public:

    /// Get the collection of base parts.
    core::Ptr<MachineParts> parts() const;

    ADSK_CAM_MACHINEKINEMATICS_API static const char* classType();
    ADSK_CAM_MACHINEKINEMATICS_API const char* objectType() const override;
    ADSK_CAM_MACHINEKINEMATICS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEKINEMATICS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MachineParts* parts_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<MachineParts> MachineKinematics::parts() const
{
    core::Ptr<MachineParts> res = parts_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEKINEMATICS_API