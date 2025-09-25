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
#include "../Operations/OperationBase.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_NCPROGRAM_CPP__
# define ADSK_CAM_NCPROGRAM_API XI_EXPORT
# else
# define ADSK_CAM_NCPROGRAM_API
# endif
#else
# define ADSK_CAM_NCPROGRAM_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMParameters;
    class Machine;
    class NCProgramPostProcessOptions;
    class PostConfiguration;
}}
namespace adsk { namespace core {
    class DataFolder;
}}

namespace adsk { namespace cam {

/// Object that represents an existing NC program.
class NCProgram : public OperationBase {
public:

    /// Gets and sets the operations which will be included in the NC program.
    /// Valid input contains any number of operations, setups or folders.
    /// For setups and folders all child operations will be added.
    /// Operations will be post processed in setup order, with operations from the same setup grouped together.
    /// Setting the nc_program_orderByTool BooleanParameterValue on the parameters property to true will reorder operations across multiple setups to reduce the number of tool changes.
    std::vector<core::Ptr<OperationBase>> operations() const;
    bool operations(const std::vector<core::Ptr<OperationBase>>& value);

    /// Gets all valid operations derived from the operations property. The list is ordered with respect to the nc_program_oderByTool parameter and considers the number of instances in a setup.
    std::vector<core::Ptr<OperationBase>> filteredOperations() const;

    /// Gets and sets the post configuration of this NC program.
    core::Ptr<PostConfiguration> postConfiguration() const;
    bool postConfiguration(const core::Ptr<PostConfiguration>& value);

    /// Gets and sets the machine of this NC program.
    /// When a machine is set, "use machine configuration" is automatically set to true.
    /// If this machine has a default post assigned, this post will be set for the NC program as well.
    core::Ptr<Machine> machine() const;
    bool machine(const core::Ptr<Machine>& value);

    /// Gets the post parameters of this NC program.
    core::Ptr<CAMParameters> postParameters() const;

    /// Overrides the default post parameters of this NC program with the given user's input.
    /// Returns true if the update was successful. False otherwise.
    bool updatePostParameters(const core::Ptr<CAMParameters>& parameters);

    /// Creates machine-specific NC code for this NC program.
    /// options : NCProgramPostProcessOptions to speficy the behavior on internal warning.
    /// Can be null if the default values should be used.
    /// If needed it can be created by its static create() method.
    /// Returns true if the post process was successful.
    bool postProcess(const core::Ptr<NCProgramPostProcessOptions>& options);

    /// Gets and sets the DataFolder to which the exported files should be uploaded to if the parameter nc_program_postToFusionTeam is set to true.
    /// When a DataFolder is set, nc_program_postToFusionTeam is automatically set to true.
    /// An exception will be thrown if the DataFolder to set is not valid or not accessible.
    /// Depending on the FusionHubExecutionBehaviors used for the export the design may be saved at this location as well.
    core::Ptr<core::DataFolder> fusionHubFolder() const;
    bool fusionHubFolder(const core::Ptr<core::DataFolder>& value);

    ADSK_CAM_NCPROGRAM_API static const char* classType();
    ADSK_CAM_NCPROGRAM_API const char* objectType() const override;
    ADSK_CAM_NCPROGRAM_API void* queryInterface(const char* id) const override;
    ADSK_CAM_NCPROGRAM_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual OperationBase** operations_raw(size_t& return_size) const = 0;
    virtual bool operations_raw(OperationBase** value, size_t value_size) = 0;
    virtual OperationBase** filteredOperations_raw(size_t& return_size) const = 0;
    virtual PostConfiguration* postConfiguration_raw() const = 0;
    virtual bool postConfiguration_raw(PostConfiguration* value) = 0;
    virtual Machine* machine_raw() const = 0;
    virtual bool machine_raw(Machine* value) = 0;
    virtual CAMParameters* postParameters_raw() const = 0;
    virtual bool updatePostParameters_raw(CAMParameters* parameters) = 0;
    virtual bool postProcess_raw(NCProgramPostProcessOptions* options) = 0;
    virtual core::DataFolder* fusionHubFolder_raw() const = 0;
    virtual bool fusionHubFolder_raw(core::DataFolder* value) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<OperationBase>> NCProgram::operations() const
{
    std::vector<core::Ptr<OperationBase>> res;
    size_t s;

    OperationBase** p= operations_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool NCProgram::operations(const std::vector<core::Ptr<OperationBase>>& value)
{
    OperationBase** value_ = new OperationBase*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = operations_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline std::vector<core::Ptr<OperationBase>> NCProgram::filteredOperations() const
{
    std::vector<core::Ptr<OperationBase>> res;
    size_t s;

    OperationBase** p= filteredOperations_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<PostConfiguration> NCProgram::postConfiguration() const
{
    core::Ptr<PostConfiguration> res = postConfiguration_raw();
    return res;
}

inline bool NCProgram::postConfiguration(const core::Ptr<PostConfiguration>& value)
{
    return postConfiguration_raw(value.get());
}

inline core::Ptr<Machine> NCProgram::machine() const
{
    core::Ptr<Machine> res = machine_raw();
    return res;
}

inline bool NCProgram::machine(const core::Ptr<Machine>& value)
{
    return machine_raw(value.get());
}

inline core::Ptr<CAMParameters> NCProgram::postParameters() const
{
    core::Ptr<CAMParameters> res = postParameters_raw();
    return res;
}

inline bool NCProgram::updatePostParameters(const core::Ptr<CAMParameters>& parameters)
{
    bool res = updatePostParameters_raw(parameters.get());
    return res;
}

inline bool NCProgram::postProcess(const core::Ptr<NCProgramPostProcessOptions>& options)
{
    bool res = postProcess_raw(options.get());
    return res;
}

inline core::Ptr<core::DataFolder> NCProgram::fusionHubFolder() const
{
    core::Ptr<core::DataFolder> res = fusionHubFolder_raw();
    return res;
}

inline bool NCProgram::fusionHubFolder(const core::Ptr<core::DataFolder>& value)
{
    return fusionHubFolder_raw(value.get());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_NCPROGRAM_API