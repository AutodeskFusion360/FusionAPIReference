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
# ifdef __COMPILING_ADSK_CAM_MACHINEINPUT_CPP__
# define ADSK_CAM_MACHINEINPUT_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEINPUT_API
# endif
#else
# define ADSK_CAM_MACHINEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Base abstract class for inputs to be used when creating machines.
/// Used by Machine.create(MachineInput) method.
/// Implemented by "MachineFromFileInput" and "MachineFromLibraryinput" classes.
class MachineInput : public core::Base {
public:

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Type of the realized input object
    MachineInputTypes type() const;

    ADSK_CAM_MACHINEINPUT_API static const char* classType();
    ADSK_CAM_MACHINEINPUT_API const char* objectType() const override;
    ADSK_CAM_MACHINEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MachineInputTypes type_raw() const = 0;
    virtual void placeholderMachineInput0() {}
    virtual void placeholderMachineInput1() {}
    virtual void placeholderMachineInput2() {}
    virtual void placeholderMachineInput3() {}
    virtual void placeholderMachineInput4() {}
    virtual void placeholderMachineInput5() {}
    virtual void placeholderMachineInput6() {}
};

// Inline wrappers

inline MachineInputTypes MachineInput::type() const
{
    MachineInputTypes res = type_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEINPUT_API