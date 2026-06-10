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
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_SETUPGROUPINPUT_CPP__
# define ADSK_CAM_SETUPGROUPINPUT_API XI_EXPORT
# else
# define ADSK_CAM_SETUPGROUPINPUT_API
# endif
#else
# define ADSK_CAM_SETUPGROUPINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMParameters;
    class Machine;
    class Setup;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a Setup Group's creation parameters.
/// The input-object can be used from the SetupGroups.add method to instantiate a new Setup Group
class SetupGroupInput : public core::Base {
public:

    /// Name of the new Setup Group.
    /// This is displayed in the browser tree and can be used to access the Setup Group from SetupGroups.
    std::string name() const;
    bool name(const std::string& value);

    /// Sets an array of setups to move into the group.
    /// This can be an empty array to create an empty group, you can add setups to it later.
    std::vector<core::Ptr<Setup>> setups() const;
    bool setups(const std::vector<core::Ptr<Setup>>& value);

    /// Operation Type for the setup group
    OperationTypes operationType() const;

    /// Gets and sets the Machine associated with the Setup Group to be created.
    core::Ptr<Machine> machine() const;
    bool machine(const core::Ptr<Machine>& value);

    /// Get all parameters for the setup group to be created. Parameters are initialized by user defaults.
    /// Configure operation parameters before creation for a better performance.
    core::Ptr<CAMParameters> parameters() const;

    ADSK_CAM_SETUPGROUPINPUT_API static const char* classType();
    ADSK_CAM_SETUPGROUPINPUT_API const char* objectType() const override;
    ADSK_CAM_SETUPGROUPINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_SETUPGROUPINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual Setup** setups_raw(size_t& return_size) const = 0;
    virtual bool setups_raw(Setup** value, size_t value_size) = 0;
    virtual OperationTypes operationType_raw() const = 0;
    virtual Machine* machine_raw() const = 0;
    virtual bool machine_raw(Machine* value) = 0;
    virtual CAMParameters* parameters_raw() const = 0;
};

// Inline wrappers

inline std::string SetupGroupInput::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool SetupGroupInput::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline std::vector<core::Ptr<Setup>> SetupGroupInput::setups() const
{
    std::vector<core::Ptr<Setup>> res;
    size_t s;

    Setup** p= setups_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool SetupGroupInput::setups(const std::vector<core::Ptr<Setup>>& value)
{
    Setup** value_ = new Setup*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = setups_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline OperationTypes SetupGroupInput::operationType() const
{
    OperationTypes res = operationType_raw();
    return res;
}

inline core::Ptr<Machine> SetupGroupInput::machine() const
{
    core::Ptr<Machine> res = machine_raw();
    return res;
}

inline bool SetupGroupInput::machine(const core::Ptr<Machine>& value)
{
    return machine_raw(value.get());
}

inline core::Ptr<CAMParameters> SetupGroupInput::parameters() const
{
    core::Ptr<CAMParameters> res = parameters_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_SETUPGROUPINPUT_API