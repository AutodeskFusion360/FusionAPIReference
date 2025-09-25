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
# ifdef __COMPILING_ADSK_CAM_SETUPINPUT_CPP__
# define ADSK_CAM_SETUPINPUT_API XI_EXPORT
# else
# define ADSK_CAM_SETUPINPUT_API
# endif
#else
# define ADSK_CAM_SETUPINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMParameters;
    class Machine;
    class PrintSetting;
}}

namespace adsk { namespace cam {

/// Object that represents an setup creation parameters.
/// The input-object can be used from the Setups.add method
/// to instantiate a new setup
class SetupInput : public core::Base {
public:

    /// Name of the new setup.
    /// This is displayed in the browser tree and can be used to access the setup from Setups.
    std::string name() const;
    bool name(const std::string& value);

    /// Operation Type for the setup
    OperationTypes operationType() const;

    /// A list of models, where a model can be an Occurrence, BRepBody, or MeshBody.
    /// The returned array is connected to the SetupInput and can be added to directly
    /// without needing to create a new array, populate it, and assign it using this property,
    /// although, that is supported too.
    std::vector<core::Ptr<core::Base>> models() const;
    bool models(const std::vector<core::Ptr<core::Base>>& value);

    /// StockMode for the setup.
    SetupStockModes stockMode() const;
    bool stockMode(SetupStockModes value);

    /// An array of models, where a model can be an Occurrence, ManufacturingModel, BRepBody, or MeshBody.
    /// Setting this property, or adding the first object to the returned array will automatically
    /// set the stockMode to "SolidStock".
    /// 
    /// The returned array is connected to the SetupInput and can be added to directly
    /// without needing to create a new array, populate it, and assign it using this property,
    /// although, that is supported too.
    std::vector<core::Ptr<core::Base>> stockSolids() const;
    bool stockSolids(const std::vector<core::Ptr<core::Base>>& value);

    /// Set this value to enable the use of fixtures for this setup.
    /// To then set the fixture models themselves use the `fixtures` property.
    bool fixtureEnabled() const;
    bool fixtureEnabled(bool value);

    /// An array of models that represent fixtures, where a model can be an Occurrence,
    /// BRepBody, or MeshBody.
    /// 
    /// The returned array is connected to the SetupInput and can be added to directly
    /// without needing to create a new array, populate it, and assign using this property,
    /// although, that is supported too.
    std::vector<core::Ptr<core::Base>> fixtures() const;
    bool fixtures(const std::vector<core::Ptr<core::Base>>& value);

    /// Gets and sets the Machine associated with the setup.
    core::Ptr<Machine> machine() const;
    bool machine(const core::Ptr<Machine>& value);

    /// Gets and sets the PrintSetting associated with the setup.
    core::Ptr<PrintSetting> printSetting() const;
    bool printSetting(const core::Ptr<PrintSetting>& value);

    /// Get all parameters for the setup to be created. Parameters are initialized by user defaults.
    /// Configure operation parameters before creation for a better performance.
    core::Ptr<CAMParameters> parameters() const;

    /// Get and set if data from the previous setup should be used when creating another setup.
    /// The data applied from the previous setup is machine information and the stock from the preceeding setup.
    /// By default this value is false.
    bool isUsingPreviousSetupData() const;
    bool isUsingPreviousSetupData(bool value);

    ADSK_CAM_SETUPINPUT_API static const char* classType();
    ADSK_CAM_SETUPINPUT_API const char* objectType() const override;
    ADSK_CAM_SETUPINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_SETUPINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual OperationTypes operationType_raw() const = 0;
    virtual core::Base** models_raw(size_t& return_size) const = 0;
    virtual bool models_raw(core::Base** value, size_t value_size) = 0;
    virtual SetupStockModes stockMode_raw() const = 0;
    virtual bool stockMode_raw(SetupStockModes value) = 0;
    virtual core::Base** stockSolids_raw(size_t& return_size) const = 0;
    virtual bool stockSolids_raw(core::Base** value, size_t value_size) = 0;
    virtual bool fixtureEnabled_raw() const = 0;
    virtual bool fixtureEnabled_raw(bool value) = 0;
    virtual core::Base** fixtures_raw(size_t& return_size) const = 0;
    virtual bool fixtures_raw(core::Base** value, size_t value_size) = 0;
    virtual Machine* machine_raw() const = 0;
    virtual bool machine_raw(Machine* value) = 0;
    virtual PrintSetting* printSetting_raw() const = 0;
    virtual bool printSetting_raw(PrintSetting* value) = 0;
    virtual CAMParameters* parameters_raw() const = 0;
    virtual bool isUsingPreviousSetupData_raw() const = 0;
    virtual bool isUsingPreviousSetupData_raw(bool value) = 0;
};

// Inline wrappers

inline std::string SetupInput::name() const
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

inline bool SetupInput::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline OperationTypes SetupInput::operationType() const
{
    OperationTypes res = operationType_raw();
    return res;
}

inline std::vector<core::Ptr<core::Base>> SetupInput::models() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= models_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool SetupInput::models(const std::vector<core::Ptr<core::Base>>& value)
{
    core::Base** value_ = new core::Base*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = models_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline SetupStockModes SetupInput::stockMode() const
{
    SetupStockModes res = stockMode_raw();
    return res;
}

inline bool SetupInput::stockMode(SetupStockModes value)
{
    return stockMode_raw(value);
}

inline std::vector<core::Ptr<core::Base>> SetupInput::stockSolids() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= stockSolids_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool SetupInput::stockSolids(const std::vector<core::Ptr<core::Base>>& value)
{
    core::Base** value_ = new core::Base*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = stockSolids_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool SetupInput::fixtureEnabled() const
{
    bool res = fixtureEnabled_raw();
    return res;
}

inline bool SetupInput::fixtureEnabled(bool value)
{
    return fixtureEnabled_raw(value);
}

inline std::vector<core::Ptr<core::Base>> SetupInput::fixtures() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= fixtures_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool SetupInput::fixtures(const std::vector<core::Ptr<core::Base>>& value)
{
    core::Base** value_ = new core::Base*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = fixtures_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline core::Ptr<Machine> SetupInput::machine() const
{
    core::Ptr<Machine> res = machine_raw();
    return res;
}

inline bool SetupInput::machine(const core::Ptr<Machine>& value)
{
    return machine_raw(value.get());
}

inline core::Ptr<PrintSetting> SetupInput::printSetting() const
{
    core::Ptr<PrintSetting> res = printSetting_raw();
    return res;
}

inline bool SetupInput::printSetting(const core::Ptr<PrintSetting>& value)
{
    return printSetting_raw(value.get());
}

inline core::Ptr<CAMParameters> SetupInput::parameters() const
{
    core::Ptr<CAMParameters> res = parameters_raw();
    return res;
}

inline bool SetupInput::isUsingPreviousSetupData() const
{
    bool res = isUsingPreviousSetupData_raw();
    return res;
}

inline bool SetupInput::isUsingPreviousSetupData(bool value)
{
    return isUsingPreviousSetupData_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_SETUPINPUT_API