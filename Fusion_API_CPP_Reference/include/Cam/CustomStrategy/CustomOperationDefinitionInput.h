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
# ifdef __COMPILING_ADSK_CAM_CUSTOMOPERATIONDEFINITIONINPUT_CPP__
# define ADSK_CAM_CUSTOMOPERATIONDEFINITIONINPUT_API XI_EXPORT
# else
# define ADSK_CAM_CUSTOMOPERATIONDEFINITIONINPUT_API
# endif
#else
# define ADSK_CAM_CUSTOMOPERATIONDEFINITIONINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class StrategyCommandDefinition;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// An object holding all necessary information to register a new custom strategy in the Manufacture workspace.
class CustomOperationDefinitionInput : public core::Base {
public:

    /// Creates a new CustomOperationDefinitionInput object.
    static core::Ptr<CustomOperationDefinitionInput> create();

    /// The strategy definition as XML content that passes the XSD validation.
    std::string strategyDefinition() const;
    bool strategyDefinition(const std::string& value);

    /// The name of the addin registering the strategy.
    std::string addinName() const;
    bool addinName(const std::string& value);

    /// Path to the addin, used to properly load resourced to be linked to the created strategies.
    /// The given path must be absolute.
    std::string addinPath() const;
    bool addinPath(const std::string& value);

    /// Path to the addin's operation kernel that should hook into Fusion's kernel executable.
    /// Fusion will export a package of necessary data for the addin's kernel to process.
    /// If left empty, the addin needs to listen to the generationStarted event to trigger their calculation.
    /// Additionally, all data needs to be collected manually by the addin.
    /// The given path must be absolute.
    std::string kernelPath() const;
    bool kernelPath(const std::string& value);

    /// Flag determining whether a subsequent registration of the same kernel should raise an error.
    /// If set to false, an exception is always raised if the kernel in question is being reregistered.
    /// If set to true, no exception is raised.
    /// The option should be used when registering multiple strategies with the same kernel.
    /// For best results, it is advised to set the flag to false for the first strategy to be registered in order to catch collisions
    /// and set the subsequent registrations with the flag being set to true.
    /// By default the value is set to true.
    bool isSkippingKernelRegistration() const;
    bool isSkippingKernelRegistration(bool value);

    /// Determines how issues arising during the registration should be handled.
    /// By default, SkipAll_StrategyRegistrationIssues is used
    StrategyRegistrationIssues strategyRegistrationIssues() const;
    bool strategyRegistrationIssues(StrategyRegistrationIssues value);

    /// The custom strategy command definitions to specify the entry points in the UI.
    std::vector<core::Ptr<StrategyCommandDefinition>> strategyCommandDefinitions() const;
    bool strategyCommandDefinitions(const std::vector<core::Ptr<StrategyCommandDefinition>>& value);

    ADSK_CAM_CUSTOMOPERATIONDEFINITIONINPUT_API static const char* classType();
    ADSK_CAM_CUSTOMOPERATIONDEFINITIONINPUT_API const char* objectType() const override;
    ADSK_CAM_CUSTOMOPERATIONDEFINITIONINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CUSTOMOPERATIONDEFINITIONINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_CUSTOMOPERATIONDEFINITIONINPUT_API static CustomOperationDefinitionInput* create_raw();
    virtual char* strategyDefinition_raw() const = 0;
    virtual bool strategyDefinition_raw(const char* value) = 0;
    virtual char* addinName_raw() const = 0;
    virtual bool addinName_raw(const char* value) = 0;
    virtual char* addinPath_raw() const = 0;
    virtual bool addinPath_raw(const char* value) = 0;
    virtual char* kernelPath_raw() const = 0;
    virtual bool kernelPath_raw(const char* value) = 0;
    virtual bool isSkippingKernelRegistration_raw() const = 0;
    virtual bool isSkippingKernelRegistration_raw(bool value) = 0;
    virtual StrategyRegistrationIssues strategyRegistrationIssues_raw() const = 0;
    virtual bool strategyRegistrationIssues_raw(StrategyRegistrationIssues value) = 0;
    virtual StrategyCommandDefinition** strategyCommandDefinitions_raw(size_t& return_size) const = 0;
    virtual bool strategyCommandDefinitions_raw(StrategyCommandDefinition** value, size_t value_size) = 0;
};

// Inline wrappers

inline core::Ptr<CustomOperationDefinitionInput> CustomOperationDefinitionInput::create()
{
    core::Ptr<CustomOperationDefinitionInput> res = create_raw();
    return res;
}

inline std::string CustomOperationDefinitionInput::strategyDefinition() const
{
    std::string res;

    char* p= strategyDefinition_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomOperationDefinitionInput::strategyDefinition(const std::string& value)
{
    return strategyDefinition_raw(value.c_str());
}

inline std::string CustomOperationDefinitionInput::addinName() const
{
    std::string res;

    char* p= addinName_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomOperationDefinitionInput::addinName(const std::string& value)
{
    return addinName_raw(value.c_str());
}

inline std::string CustomOperationDefinitionInput::addinPath() const
{
    std::string res;

    char* p= addinPath_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomOperationDefinitionInput::addinPath(const std::string& value)
{
    return addinPath_raw(value.c_str());
}

inline std::string CustomOperationDefinitionInput::kernelPath() const
{
    std::string res;

    char* p= kernelPath_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomOperationDefinitionInput::kernelPath(const std::string& value)
{
    return kernelPath_raw(value.c_str());
}

inline bool CustomOperationDefinitionInput::isSkippingKernelRegistration() const
{
    bool res = isSkippingKernelRegistration_raw();
    return res;
}

inline bool CustomOperationDefinitionInput::isSkippingKernelRegistration(bool value)
{
    return isSkippingKernelRegistration_raw(value);
}

inline StrategyRegistrationIssues CustomOperationDefinitionInput::strategyRegistrationIssues() const
{
    StrategyRegistrationIssues res = strategyRegistrationIssues_raw();
    return res;
}

inline bool CustomOperationDefinitionInput::strategyRegistrationIssues(StrategyRegistrationIssues value)
{
    return strategyRegistrationIssues_raw(value);
}

inline std::vector<core::Ptr<StrategyCommandDefinition>> CustomOperationDefinitionInput::strategyCommandDefinitions() const
{
    std::vector<core::Ptr<StrategyCommandDefinition>> res;
    size_t s;

    StrategyCommandDefinition** p= strategyCommandDefinitions_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomOperationDefinitionInput::strategyCommandDefinitions(const std::vector<core::Ptr<StrategyCommandDefinition>>& value)
{
    StrategyCommandDefinition** value_ = new StrategyCommandDefinition*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = strategyCommandDefinitions_raw(value_, value.size());
    delete[] value_;
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CUSTOMOPERATIONDEFINITIONINPUT_API