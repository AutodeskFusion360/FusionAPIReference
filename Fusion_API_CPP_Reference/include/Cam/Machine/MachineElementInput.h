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
# ifdef __COMPILING_ADSK_CAM_MACHINEELEMENTINPUT_CPP__
# define ADSK_CAM_MACHINEELEMENTINPUT_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEELEMENTINPUT_API
# endif
#else
# define ADSK_CAM_MACHINEELEMENTINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Base class for machine element inputs.
class MachineElementInput : public core::Base {
public:

    /// The type of machine element this input will create.
    MachineElementInputType inputType() const;

    ADSK_CAM_MACHINEELEMENTINPUT_API static const char* classType();
    ADSK_CAM_MACHINEELEMENTINPUT_API const char* objectType() const override;
    ADSK_CAM_MACHINEELEMENTINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEELEMENTINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MachineElementInputType inputType_raw() const = 0;
    virtual void placeholderMachineElementInput0() {}
    virtual void placeholderMachineElementInput1() {}
    virtual void placeholderMachineElementInput2() {}
    virtual void placeholderMachineElementInput3() {}
    virtual void placeholderMachineElementInput4() {}
    virtual void placeholderMachineElementInput5() {}
    virtual void placeholderMachineElementInput6() {}
    virtual void placeholderMachineElementInput7() {}
    virtual void placeholderMachineElementInput8() {}
    virtual void placeholderMachineElementInput9() {}
    virtual void placeholderMachineElementInput10() {}
    virtual void placeholderMachineElementInput11() {}
    virtual void placeholderMachineElementInput12() {}
    virtual void placeholderMachineElementInput13() {}
    virtual void placeholderMachineElementInput14() {}
};

// Inline wrappers

inline MachineElementInputType MachineElementInput::inputType() const
{
    MachineElementInputType res = inputType_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEELEMENTINPUT_API