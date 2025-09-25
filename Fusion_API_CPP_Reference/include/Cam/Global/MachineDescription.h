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
# ifdef __COMPILING_ADSK_CAM_MACHINEDESCRIPTION_CPP__
# define ADSK_CAM_MACHINEDESCRIPTION_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEDESCRIPTION_API
# endif
#else
# define ADSK_CAM_MACHINEDESCRIPTION_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// A description of a machine used to preview machines in the 'Find network machines' dialog
class MachineDescription : public core::Base {
public:

    /// Creates a new MachineDescription.
    /// vendor : The machine vendor.
    /// model : The machine model.
    /// ipAddress : The machine's ipv4 IP address.
    /// Returns the newly created MachineDescription object, and allocates a unique id for the
    /// object, or null if the creation failed.
    static core::Ptr<MachineDescription> create(const std::string& vendor, const std::string& model, const std::string& ipAddress);

    /// Gets this MachineDescription's unique id. This id can be used to match
    /// MachineDescription objects provided during the SearchNetworkMachinesEvent with those
    /// requested to create machine configurations for during the CreateMachineConfigurations
    /// event.
    size_t id() const;

    /// Gets and sets the vendor name of the machine.
    std::string vendor() const;
    bool vendor(const std::string& value);

    /// Gets and sets the model name of the machine.
    std::string model() const;
    bool model(const std::string& value);

    /// Gets and sets the IP address of the machine.
    std::string ipAddress() const;
    bool ipAddress(const std::string& value);

    /// Gets and sets the controller name of the machine. Controller info is not displayed if
    /// not set.
    std::string control() const;
    bool control(const std::string& value);

    /// Gets and sets the absolute path to the 128x128 PNG image of the machine. A default
    /// image is used if not set.
    std::string iconPath() const;
    bool iconPath(const std::string& value);

    /// Gets and sets the serial number of the machine. A serial number is not displayed if not
    /// set.
    std::string serial() const;
    bool serial(const std::string& value);

    ADSK_CAM_MACHINEDESCRIPTION_API static const char* classType();
    ADSK_CAM_MACHINEDESCRIPTION_API const char* objectType() const override;
    ADSK_CAM_MACHINEDESCRIPTION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEDESCRIPTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_MACHINEDESCRIPTION_API static MachineDescription* create_raw(const char* vendor, const char* model, const char* ipAddress);
    virtual size_t id_raw() const = 0;
    virtual char* vendor_raw() const = 0;
    virtual bool vendor_raw(const char* value) = 0;
    virtual char* model_raw() const = 0;
    virtual bool model_raw(const char* value) = 0;
    virtual char* ipAddress_raw() const = 0;
    virtual bool ipAddress_raw(const char* value) = 0;
    virtual char* control_raw() const = 0;
    virtual bool control_raw(const char* value) = 0;
    virtual char* iconPath_raw() const = 0;
    virtual bool iconPath_raw(const char* value) = 0;
    virtual char* serial_raw() const = 0;
    virtual bool serial_raw(const char* value) = 0;
};

// Inline wrappers

inline core::Ptr<MachineDescription> MachineDescription::create(const std::string& vendor, const std::string& model, const std::string& ipAddress)
{
    core::Ptr<MachineDescription> res = create_raw(vendor.c_str(), model.c_str(), ipAddress.c_str());
    return res;
}

inline size_t MachineDescription::id() const
{
    size_t res = id_raw();
    return res;
}

inline std::string MachineDescription::vendor() const
{
    std::string res;

    char* p= vendor_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MachineDescription::vendor(const std::string& value)
{
    return vendor_raw(value.c_str());
}

inline std::string MachineDescription::model() const
{
    std::string res;

    char* p= model_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MachineDescription::model(const std::string& value)
{
    return model_raw(value.c_str());
}

inline std::string MachineDescription::ipAddress() const
{
    std::string res;

    char* p= ipAddress_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MachineDescription::ipAddress(const std::string& value)
{
    return ipAddress_raw(value.c_str());
}

inline std::string MachineDescription::control() const
{
    std::string res;

    char* p= control_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MachineDescription::control(const std::string& value)
{
    return control_raw(value.c_str());
}

inline std::string MachineDescription::iconPath() const
{
    std::string res;

    char* p= iconPath_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MachineDescription::iconPath(const std::string& value)
{
    return iconPath_raw(value.c_str());
}

inline std::string MachineDescription::serial() const
{
    std::string res;

    char* p= serial_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MachineDescription::serial(const std::string& value)
{
    return serial_raw(value.c_str());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEDESCRIPTION_API