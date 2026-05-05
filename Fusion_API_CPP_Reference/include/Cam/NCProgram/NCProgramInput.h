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
# ifdef __COMPILING_ADSK_CAM_NCPROGRAMINPUT_CPP__
# define ADSK_CAM_NCPROGRAMINPUT_API XI_EXPORT
# else
# define ADSK_CAM_NCPROGRAMINPUT_API
# endif
#else
# define ADSK_CAM_NCPROGRAMINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMParameters;
    class OperationBase;
}}

namespace adsk { namespace cam {

/// The NCProgramInput holds all necessary information to create a new NC program.
/// It is needed for the NCPrograms.add method to instantiate a new NC program.
class NCProgramInput : public core::Base {
public:

    /// Get all parameters for the current NC program. Parameters are initialized by user defaults.
    /// Configure operation parameters before creation for a better performance.
    core::Ptr<CAMParameters> parameters() const;

    /// Gets and sets the operations which will be included in the NC program.
    /// Valid input contains any number of operations, setups or folders.
    /// For setups and folders all child operations will be added.
    /// Operations will be post processed in setup order, with operations from the same setup grouped together.
    /// Setting the nc_program_orderByTool BooleanParameterValue on the parameters property to true will reorder operations across multiple setups to reduce the number of tool changes.
    /// When the list of operations is associated to one setup and the setup has defined its job_programName or job_programComment parameters,
    /// then those values are applied to the nc_program_name and nc_program_comment parameters accordingly.
    std::vector<core::Ptr<OperationBase>> operations() const;
    bool operations(const std::vector<core::Ptr<OperationBase>>& value);

    /// Optionally specify the display name that appears in the browser-tree to override the default.
    std::string displayName() const;
    bool displayName(const std::string& value);

    ADSK_CAM_NCPROGRAMINPUT_API static const char* classType();
    ADSK_CAM_NCPROGRAMINPUT_API const char* objectType() const override;
    ADSK_CAM_NCPROGRAMINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_NCPROGRAMINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CAMParameters* parameters_raw() const = 0;
    virtual OperationBase** operations_raw(size_t& return_size) const = 0;
    virtual bool operations_raw(OperationBase** value, size_t value_size) = 0;
    virtual char* displayName_raw() const = 0;
    virtual bool displayName_raw(const char* value) = 0;
};

// Inline wrappers

inline core::Ptr<CAMParameters> NCProgramInput::parameters() const
{
    core::Ptr<CAMParameters> res = parameters_raw();
    return res;
}

inline std::vector<core::Ptr<OperationBase>> NCProgramInput::operations() const
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

inline bool NCProgramInput::operations(const std::vector<core::Ptr<OperationBase>>& value)
{
    OperationBase** value_ = new OperationBase*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = operations_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline std::string NCProgramInput::displayName() const
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

inline bool NCProgramInput::displayName(const std::string& value)
{
    return displayName_raw(value.c_str());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_NCPROGRAMINPUT_API