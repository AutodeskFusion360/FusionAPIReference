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
# ifdef __COMPILING_ADSK_CAM_NETWORKMACHINEINTEGRATIONINPUT_CPP__
# define ADSK_CAM_NETWORKMACHINEINTEGRATIONINPUT_API XI_EXPORT
# else
# define ADSK_CAM_NETWORKMACHINEINTEGRATIONINPUT_API
# endif
#else
# define ADSK_CAM_NETWORKMACHINEINTEGRATIONINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// An input object required to register an add-in for use in the 'Find network machines'
/// dialog. This input object defines properties of an add-in and allows an add-in to
/// customize its appearance in the 'Find network machines' dialog.
class NetworkMachineIntegrationInput : public core::Base {
public:

    /// displayName : The name that will be presented to the user in the 'Find network machines' dialog.
    /// description : A description of the add-in which appears as a tooltip alongside the display name.
    /// Returns true if the add-in was successfully registered.
    static core::Ptr<NetworkMachineIntegrationInput> create(const std::string& displayName, const std::string& description);

    /// Gets and sets the display name of the add-in that appears in the 'vendor' drop-down in
    /// the 'Find network machines' dialog.
    std::string displayName() const;
    bool displayName(const std::string& value);

    /// Gets and sets the description of the add-in
    std::string description() const;
    bool description(const std::string& value);

    ADSK_CAM_NETWORKMACHINEINTEGRATIONINPUT_API static const char* classType();
    ADSK_CAM_NETWORKMACHINEINTEGRATIONINPUT_API const char* objectType() const override;
    ADSK_CAM_NETWORKMACHINEINTEGRATIONINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_NETWORKMACHINEINTEGRATIONINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_NETWORKMACHINEINTEGRATIONINPUT_API static NetworkMachineIntegrationInput* create_raw(const char* displayName, const char* description);
    virtual char* displayName_raw() const = 0;
    virtual bool displayName_raw(const char* value) = 0;
    virtual char* description_raw() const = 0;
    virtual bool description_raw(const char* value) = 0;
};

// Inline wrappers

inline core::Ptr<NetworkMachineIntegrationInput> NetworkMachineIntegrationInput::create(const std::string& displayName, const std::string& description)
{
    core::Ptr<NetworkMachineIntegrationInput> res = create_raw(displayName.c_str(), description.c_str());
    return res;
}

inline std::string NetworkMachineIntegrationInput::displayName() const
{
    std::string res;

    char* p= displayName_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool NetworkMachineIntegrationInput::displayName(const std::string& value)
{
    return displayName_raw(value.c_str());
}

inline std::string NetworkMachineIntegrationInput::description() const
{
    std::string res;

    char* p= description_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool NetworkMachineIntegrationInput::description(const std::string& value)
{
    return description_raw(value.c_str());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_NETWORKMACHINEINTEGRATIONINPUT_API