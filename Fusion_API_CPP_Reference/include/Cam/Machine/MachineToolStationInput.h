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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MACHINETOOLSTATIONINPUT_CPP__
# define ADSK_CAM_MACHINETOOLSTATIONINPUT_API XI_EXPORT
# else
# define ADSK_CAM_MACHINETOOLSTATIONINPUT_API
# endif
#else
# define ADSK_CAM_MACHINETOOLSTATIONINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Object representing the set of inputs required to create a new MachineToolStation.
class MachineToolStationInput : public core::Base {
public:

    /// The maximum diameter in cm of the tool that can be held by this tool station.
    double maxToolDiameter() const;
    bool maxToolDiameter(double value);

    /// The maximum length in cm of the tool that can be held by this tool station.
    double maxToolLength() const;
    bool maxToolLength(double value);

    /// The type of interface that this tool station uses.
    /// (e.g. BT40, CAPTO C5, HSK A100, SK50, etc.)
    /// Note: All newline characters will be removed, and if the string contains only ASCII characters, it will be converted to uppercase.
    std::string toolInterface() const;
    bool toolInterface(const std::string& value);

    /// The coolants that this tool station can use.
    /// See MachineToolStationCoolant for possible values.
    std::vector<int> coolants() const;
    bool coolants(const std::vector<int>& value);

    ADSK_CAM_MACHINETOOLSTATIONINPUT_API static const char* classType();
    ADSK_CAM_MACHINETOOLSTATIONINPUT_API const char* objectType() const override;
    ADSK_CAM_MACHINETOOLSTATIONINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINETOOLSTATIONINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double maxToolDiameter_raw() const = 0;
    virtual bool maxToolDiameter_raw(double value) = 0;
    virtual double maxToolLength_raw() const = 0;
    virtual bool maxToolLength_raw(double value) = 0;
    virtual char* toolInterface_raw() const = 0;
    virtual bool toolInterface_raw(const char* value) = 0;
    virtual int* coolants_raw(size_t& return_size) const = 0;
    virtual bool coolants_raw(const int* value, size_t value_size) = 0;
};

// Inline wrappers

inline double MachineToolStationInput::maxToolDiameter() const
{
    double res = maxToolDiameter_raw();
    return res;
}

inline bool MachineToolStationInput::maxToolDiameter(double value)
{
    return maxToolDiameter_raw(value);
}

inline double MachineToolStationInput::maxToolLength() const
{
    double res = maxToolLength_raw();
    return res;
}

inline bool MachineToolStationInput::maxToolLength(double value)
{
    return maxToolLength_raw(value);
}

inline std::string MachineToolStationInput::toolInterface() const
{
    std::string res;

    char* p= toolInterface_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MachineToolStationInput::toolInterface(const std::string& value)
{
    return toolInterface_raw(value.c_str());
}

inline std::vector<int> MachineToolStationInput::coolants() const
{
    std::vector<int> res;
    size_t s;

    int* p= coolants_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MachineToolStationInput::coolants(const std::vector<int>& value)
{
    return coolants_raw(value.empty() ? nullptr : &value[0], value.size());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINETOOLSTATIONINPUT_API