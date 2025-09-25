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
#include "MachineAxisConfiguration.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_LINEARMACHINEAXISCONFIGURATION_CPP__
# define ADSK_CAM_LINEARMACHINEAXISCONFIGURATION_API XI_EXPORT
# else
# define ADSK_CAM_LINEARMACHINEAXISCONFIGURATION_API
# endif
#else
# define ADSK_CAM_LINEARMACHINEAXISCONFIGURATION_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// A MachineAxisConfiguration holding settings specific to linear axes.
/// This class currently has no members.
class LinearMachineAxisConfiguration : public MachineAxisConfiguration {
public:

    ADSK_CAM_LINEARMACHINEAXISCONFIGURATION_API static const char* classType();
    ADSK_CAM_LINEARMACHINEAXISCONFIGURATION_API const char* objectType() const override;
    ADSK_CAM_LINEARMACHINEAXISCONFIGURATION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_LINEARMACHINEAXISCONFIGURATION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface

};

// Inline wrappers


}// namespace cam
}// namespace adsk

#undef ADSK_CAM_LINEARMACHINEAXISCONFIGURATION_API