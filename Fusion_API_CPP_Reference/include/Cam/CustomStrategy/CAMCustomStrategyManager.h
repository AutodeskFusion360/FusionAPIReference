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
# ifdef __COMPILING_ADSK_CAM_CAMCUSTOMSTRATEGYMANAGER_CPP__
# define ADSK_CAM_CAMCUSTOMSTRATEGYMANAGER_API XI_EXPORT
# else
# define ADSK_CAM_CAMCUSTOMSTRATEGYMANAGER_API
# endif
#else
# define ADSK_CAM_CAMCUSTOMSTRATEGYMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CustomOperationDefinitionInput;
    class CustomOperationRegistrationResult;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Base class object representing all operations, folders, patterns and setups.
class CAMCustomStrategyManager : public core::Base {
public:

    /// Registers the custom strategy in Fusion's strategy manager.
    /// Registering a strategy with the same identifier will update the old definition.
    /// This is useful if the definition has been loaded via a project before the addin/script has been executed.
    /// input : CustomOperationDefinitionInput used to define the custom strategy definition
    /// The strategy name of the registered operation
    core::Ptr<CustomOperationRegistrationResult> registerCustomOperation(const core::Ptr<CustomOperationDefinitionInput>& input);

    /// Registers an array of custom strategies in Fusion's strategy manager.
    /// Registering a strategy with the same identifier will update the old definition.
    /// This is useful if the definition has been loaded via a project before the addin/script has been executed.
    /// The isSkippingKernelRegistration flag of the firstCustomOperationDefinitionInput in the array controls the behavior of all elements,
    /// however all repeating kernel paths within the array are skipped.
    /// inputs : CustomOperationDefinitionInput[] used to define the custom strategy definitions
    /// An array containing all registered strategy names
    std::vector<core::Ptr<CustomOperationRegistrationResult>> registerCustomOperations(const std::vector<core::Ptr<CustomOperationDefinitionInput>>& inputs);

    /// Remove the custom strategy from the list of available strategies.
    /// Operations already created based on the definition will be still available, but if the addin is not executed, will not regenerate.
    /// To be used when stopping an addin/script.
    /// strategyName : The identifier of the custom strategy to be removed.
    /// True if the strategy was successfully deregistered.
    bool deregisterCustomOperationByStrategyName(const std::string& strategyName);

    /// Remove all custom strateges from the list of available strategies belonging to the same addin.
    /// Operations already created based on the definition will be still available, but if the addin is not executed, will not regenerate.
    /// To be used when stopping an addin/script.
    /// strategyName : The identifier of the addin whose strategies should be removed.
    /// False if any strategy registered with the addin could not be deregistered.
    bool deregisterCustomOperationsByAddinName(const std::string& addinName);

    ADSK_CAM_CAMCUSTOMSTRATEGYMANAGER_API static const char* classType();
    ADSK_CAM_CAMCUSTOMSTRATEGYMANAGER_API const char* objectType() const override;
    ADSK_CAM_CAMCUSTOMSTRATEGYMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMCUSTOMSTRATEGYMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CustomOperationRegistrationResult* registerCustomOperation_raw(CustomOperationDefinitionInput* input) = 0;
    virtual CustomOperationRegistrationResult** registerCustomOperations_raw(CustomOperationDefinitionInput** inputs, size_t inputs_size, size_t& return_size) = 0;
    virtual bool deregisterCustomOperationByStrategyName_raw(const char* strategyName) = 0;
    virtual bool deregisterCustomOperationsByAddinName_raw(const char* addinName) = 0;
};

// Inline wrappers

inline core::Ptr<CustomOperationRegistrationResult> CAMCustomStrategyManager::registerCustomOperation(const core::Ptr<CustomOperationDefinitionInput>& input)
{
    core::Ptr<CustomOperationRegistrationResult> res = registerCustomOperation_raw(input.get());
    return res;
}

inline std::vector<core::Ptr<CustomOperationRegistrationResult>> CAMCustomStrategyManager::registerCustomOperations(const std::vector<core::Ptr<CustomOperationDefinitionInput>>& inputs)
{
    std::vector<core::Ptr<CustomOperationRegistrationResult>> res;
    size_t s;
    CustomOperationDefinitionInput** inputs_ = new CustomOperationDefinitionInput*[inputs.size()];
    for(size_t i=0; i<inputs.size(); ++i)
        inputs_[i] = inputs[i].get();

    CustomOperationRegistrationResult** p= registerCustomOperations_raw(inputs_, inputs.size(), s);
    delete[] inputs_;
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAMCustomStrategyManager::deregisterCustomOperationByStrategyName(const std::string& strategyName)
{
    bool res = deregisterCustomOperationByStrategyName_raw(strategyName.c_str());
    return res;
}

inline bool CAMCustomStrategyManager::deregisterCustomOperationsByAddinName(const std::string& addinName)
{
    bool res = deregisterCustomOperationsByAddinName_raw(addinName.c_str());
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMCUSTOMSTRATEGYMANAGER_API