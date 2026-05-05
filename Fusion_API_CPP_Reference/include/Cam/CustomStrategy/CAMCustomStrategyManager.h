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

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Exports an XML string containing the full strategy definition for a given original strategy.
    /// The tags supportedTools and properties are left empty and there are no overrides for native parameters defined.
    /// Custom parameters are also not included in the export.
    /// strategyName : The identifier of original strategy to export the metaparameters from.
    /// The XML string containing the strategy definition.
    std::string exportCustomStrategyTemplate(const std::string& strategyName);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Exports a JSON string containing all available metaparameters for a given original strategy.
    /// Note: this is an internal function not intended for public use.
    /// strategyName : The identifier of original strategy to export the metaparameters from.
    /// The JSON string containing all registered metaparameters for the given strategy.
    /// This may include custom metaparameters added during runtime.
    std::string exportMetaParameters(const std::string& strategyName);

    /// Imports a JSON string containing metaparameters that should be added to the list of available metaparameters for the runtime of the session.
    /// jsonString : The JSON file containing the metaparameters to import.
    /// makeUnique : Adds a unique suffix to the name of any metaparameter that collides with an already registered metaparameter.
    /// The value is false by default.
    /// exceptionOnCollision : If makeUnique is set to true, then this parameter is ignored.
    /// True if an exception should be thrown and the import interrupted if a metaparameter has been imported before.
    /// False if a metaparameter collision should be ignored and the import continued.
    /// The conflicting metaparameter is not imported in this case.
    /// The value is false by default.
    /// A JSON string containing all successfully imported metaparameters with their adjusted names if applicable.
    /// The adjusted names can be used to reference the unique metaparameters after the import.
    std::string importMetaParameters(const std::string& jsonString, bool makeUnique, bool exceptionOnCollision);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Checks if a metaparameter with the given name is already available in the session.
    /// metaParameterName : The name of the metaparameter to check for.
    /// True if the metaparameter has been registered in this session or if the metaparameter is shipped with Fusion.
    bool isMetaParameterRegistered(const std::string& metaParameterName);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Removes a metaparameter from the list of registered metaparameters.
    /// Applicable only to manually imported metaparameters.
    /// metaParameterName : The name of the metaparameter to remove.
    bool removeRegisteredMetaParameter(const std::string& metaParameterName);

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
    virtual char* exportCustomStrategyTemplate_raw(const char* strategyName) = 0;
    virtual char* exportMetaParameters_raw(const char* strategyName) = 0;
    virtual char* importMetaParameters_raw(const char* jsonString, bool makeUnique, bool exceptionOnCollision) = 0;
    virtual bool isMetaParameterRegistered_raw(const char* metaParameterName) = 0;
    virtual bool removeRegisteredMetaParameter_raw(const char* metaParameterName) = 0;
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

inline std::string CAMCustomStrategyManager::exportCustomStrategyTemplate(const std::string& strategyName)
{
    std::string res;

    char* p= exportCustomStrategyTemplate_raw(strategyName.c_str());
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CAMCustomStrategyManager::exportMetaParameters(const std::string& strategyName)
{
    std::string res;

    char* p= exportMetaParameters_raw(strategyName.c_str());
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CAMCustomStrategyManager::importMetaParameters(const std::string& jsonString, bool makeUnique, bool exceptionOnCollision)
{
    std::string res;

    char* p= importMetaParameters_raw(jsonString.c_str(), makeUnique, exceptionOnCollision);
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAMCustomStrategyManager::isMetaParameterRegistered(const std::string& metaParameterName)
{
    bool res = isMetaParameterRegistered_raw(metaParameterName.c_str());
    return res;
}

inline bool CAMCustomStrategyManager::removeRegisteredMetaParameter(const std::string& metaParameterName)
{
    bool res = removeRegisteredMetaParameter_raw(metaParameterName.c_str());
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMCUSTOMSTRATEGYMANAGER_API