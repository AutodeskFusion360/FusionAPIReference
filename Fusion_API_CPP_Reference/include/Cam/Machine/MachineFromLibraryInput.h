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
#include "MachineInput.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MACHINEFROMLIBRARYINPUT_CPP__
# define ADSK_CAM_MACHINEFROMLIBRARYINPUT_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEFROMLIBRARYINPUT_API
# endif
#else
# define ADSK_CAM_MACHINEFROMLIBRARYINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class URL;
}}

namespace adsk { namespace cam {

/// Object used as input to create a machine from library URL.
class MachineFromLibraryInput : public MachineInput {
public:

    /// Creates a MachineFromLibraryInput object to be used as
    /// input for Machine.create method, in order to create
    /// a machine from a library location.
    /// url : The URL path to the library machine.
    /// Returns newly created MachineFromLibraryInput object in a valid state.
    static core::Ptr<MachineFromLibraryInput> create(const core::Ptr<core::URL>& url);

    /// The URL path to the library machine.
    core::Ptr<core::URL> url() const;

    /// Gets and sets whether or not to ignore the simulation model
    /// when creating or loading the machine.
    bool ignoreSimulationModel() const;
    bool ignoreSimulationModel(bool value);

    ADSK_CAM_MACHINEFROMLIBRARYINPUT_API static const char* classType();
    ADSK_CAM_MACHINEFROMLIBRARYINPUT_API const char* objectType() const override;
    ADSK_CAM_MACHINEFROMLIBRARYINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEFROMLIBRARYINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_MACHINEFROMLIBRARYINPUT_API static MachineFromLibraryInput* create_raw(core::URL* url);
    virtual core::URL* url_raw() const = 0;
    virtual bool ignoreSimulationModel_raw() const = 0;
    virtual bool ignoreSimulationModel_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<MachineFromLibraryInput> MachineFromLibraryInput::create(const core::Ptr<core::URL>& url)
{
    core::Ptr<MachineFromLibraryInput> res = create_raw(url.get());
    return res;
}

inline core::Ptr<core::URL> MachineFromLibraryInput::url() const
{
    core::Ptr<core::URL> res = url_raw();
    return res;
}

inline bool MachineFromLibraryInput::ignoreSimulationModel() const
{
    bool res = ignoreSimulationModel_raw();
    return res;
}

inline bool MachineFromLibraryInput::ignoreSimulationModel(bool value)
{
    return ignoreSimulationModel_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEFROMLIBRARYINPUT_API