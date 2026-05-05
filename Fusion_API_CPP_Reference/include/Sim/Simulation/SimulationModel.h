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
#include "../SimTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_SIMULATIONMODEL_CPP__
# define ADSK_SIM_SIMULATIONMODEL_API XI_EXPORT
# else
# define ADSK_SIM_SIMULATIONMODEL_API
# endif
#else
# define ADSK_SIM_SIMULATIONMODEL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class WorkingModel;
}}
namespace adsk { namespace sim {
    class Studies;
    class Study;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a simulation model inside the simulation workspace.
class SimulationModel : public core::Base {
public:

    /// The name of the simulation model as displayed in the browser.
    std::string name() const;
    bool name(const std::string& value);

    /// The Studies collection that provides access to existing studies in the simulation model.
    core::Ptr<Studies> studies() const;

    /// The ModelComponents that provides access to Bodies/Components in the model.
    core::Ptr<fusion::WorkingModel> modelComponents() const;

    /// Gets whether this simulation model is the active simulation model.
    bool isActive() const;

    /// Activates this simulation model. Activating an already active simulation model
    /// has no effect.
    /// Returns true if the simulation model was successfully activated.
    bool activate();

    /// Creates a Study object that defines a simulation study without settings in the active simulation model and
    /// adds the Study object to the Studies collection.
    /// name : The name of the study as displayed in the browser.
    /// type : The type of study.
    /// Returns the newly created Study object or null if the creation failed.
    core::Ptr<Study> createStudy(const std::string& name, StudyTypes type);

    ADSK_SIM_SIMULATIONMODEL_API static const char* classType();
    ADSK_SIM_SIMULATIONMODEL_API const char* objectType() const override;
    ADSK_SIM_SIMULATIONMODEL_API void* queryInterface(const char* id) const override;
    ADSK_SIM_SIMULATIONMODEL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual Studies* studies_raw() const = 0;
    virtual fusion::WorkingModel* modelComponents_raw() const = 0;
    virtual bool isActive_raw() const = 0;
    virtual bool activate_raw() = 0;
    virtual Study* createStudy_raw(const char* name, StudyTypes type) = 0;
};

// Inline wrappers

inline std::string SimulationModel::name() const
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

inline bool SimulationModel::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<Studies> SimulationModel::studies() const
{
    core::Ptr<Studies> res = studies_raw();
    return res;
}

inline core::Ptr<fusion::WorkingModel> SimulationModel::modelComponents() const
{
    core::Ptr<fusion::WorkingModel> res = modelComponents_raw();
    return res;
}

inline bool SimulationModel::isActive() const
{
    bool res = isActive_raw();
    return res;
}

inline bool SimulationModel::activate()
{
    bool res = activate_raw();
    return res;
}

inline core::Ptr<Study> SimulationModel::createStudy(const std::string& name, StudyTypes type)
{
    core::Ptr<Study> res = createStudy_raw(name.c_str(), type);
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_SIMULATIONMODEL_API