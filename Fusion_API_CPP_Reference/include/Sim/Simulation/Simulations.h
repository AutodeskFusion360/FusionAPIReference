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
#include "../../Core/Application/Product.h"
#include "../SimTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_SIMULATIONS_CPP__
# define ADSK_SIM_SIMULATIONS_API XI_EXPORT
# else
# define ADSK_SIM_SIMULATIONS_API
# endif
#else
# define ADSK_SIM_SIMULATIONS_API XI_IMPORT
#endif

namespace adsk { namespace sim {
    class SimDefaultUnits;
    class SimulationModels;
    class SimUnitsManager;
    class Studies;
    class Study;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents the simulations environment of a Fusion document.
class Simulations : public core::Product {
public:

    /// Returns the collection of simulation models in the document.
    core::Ptr<SimulationModels> simulationModels() const;

    /// Returns the collection of studies in the document.
    core::Ptr<Studies> studies() const;

    /// Creates a Study object that defines a simulation study without settings in the active simulation model
    /// and adds the Study object to the Studies collection.
    /// name : The name of the study as displayed in the browser.
    /// type : The type of study.
    /// Returns the newly created Study object or null if the creation failed.
    core::Ptr<Study> createStudy(const std::string& name, StudyTypes type) const;

    /// Returns the simulation units manager for this simulations document. Use this to evaluate
    /// expressions, convert between units, and format values.
    core::Ptr<SimUnitsManager> simulationUnitsManager() const;

    /// Returns object managing simulation default units for this simulations document.
    /// Use this to read and modify the active unit system and individual default units.
    core::Ptr<SimDefaultUnits> simulationDefaultUnits() const;

    ADSK_SIM_SIMULATIONS_API static const char* classType();
    ADSK_SIM_SIMULATIONS_API const char* objectType() const override;
    ADSK_SIM_SIMULATIONS_API void* queryInterface(const char* id) const override;
    ADSK_SIM_SIMULATIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SimulationModels* simulationModels_raw() const = 0;
    virtual Studies* studies_raw() const = 0;
    virtual Study* createStudy_raw(const char* name, StudyTypes type) const = 0;
    virtual SimUnitsManager* simulationUnitsManager_raw() const = 0;
    virtual SimDefaultUnits* simulationDefaultUnits_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<SimulationModels> Simulations::simulationModels() const
{
    core::Ptr<SimulationModels> res = simulationModels_raw();
    return res;
}

inline core::Ptr<Studies> Simulations::studies() const
{
    core::Ptr<Studies> res = studies_raw();
    return res;
}

inline core::Ptr<Study> Simulations::createStudy(const std::string& name, StudyTypes type) const
{
    core::Ptr<Study> res = createStudy_raw(name.c_str(), type);
    return res;
}

inline core::Ptr<SimUnitsManager> Simulations::simulationUnitsManager() const
{
    core::Ptr<SimUnitsManager> res = simulationUnitsManager_raw();
    return res;
}

inline core::Ptr<SimDefaultUnits> Simulations::simulationDefaultUnits() const
{
    core::Ptr<SimDefaultUnits> res = simulationDefaultUnits_raw();
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_SIMULATIONS_API