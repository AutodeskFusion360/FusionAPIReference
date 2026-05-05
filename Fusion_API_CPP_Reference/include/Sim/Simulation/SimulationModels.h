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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_SIMULATIONMODELS_CPP__
# define ADSK_SIM_SIMULATIONMODELS_API XI_EXPORT
# else
# define ADSK_SIM_SIMULATIONMODELS_API
# endif
#else
# define ADSK_SIM_SIMULATIONMODELS_API XI_IMPORT
#endif

namespace adsk { namespace sim {
    class SimulationModel;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Provides access to the simulation models in the simulations object.
class SimulationModels : public core::Base {
public:

    /// The number of simulation models.
    size_t count() const;

    /// Returns the specified simulation model using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SimulationModel> item(size_t index) const;

    /// Returns all simulation models with given name (as appears in the browser).
    /// name : The name (as it appears in the browser) of the simulation model.
    /// Returns all simulation models with the specified name.
    std::vector<core::Ptr<SimulationModel>> itemByName(const std::string& name) const;

    /// Returns simulation model with the given id.
    /// id : The id of the simulation model.
    /// Returns the simulation model with the specified id or null if no simulation model has that id.
    core::Ptr<SimulationModel> itemById(const std::string& id) const;

    typedef SimulationModel iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_SIM_SIMULATIONMODELS_API static const char* classType();
    ADSK_SIM_SIMULATIONMODELS_API const char* objectType() const override;
    ADSK_SIM_SIMULATIONMODELS_API void* queryInterface(const char* id) const override;
    ADSK_SIM_SIMULATIONMODELS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual SimulationModel* item_raw(size_t index) const = 0;
    virtual SimulationModel** itemByName_raw(const char* name, size_t& return_size) const = 0;
    virtual SimulationModel* itemById_raw(const char* id) const = 0;
};

// Inline wrappers

inline size_t SimulationModels::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SimulationModel> SimulationModels::item(size_t index) const
{
    core::Ptr<SimulationModel> res = item_raw(index);
    return res;
}

inline std::vector<core::Ptr<SimulationModel>> SimulationModels::itemByName(const std::string& name) const
{
    std::vector<core::Ptr<SimulationModel>> res;
    size_t s;

    SimulationModel** p= itemByName_raw(name.c_str(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<SimulationModel> SimulationModels::itemById(const std::string& id) const
{
    core::Ptr<SimulationModel> res = itemById_raw(id.c_str());
    return res;
}

template <class OutputIterator> inline void SimulationModels::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_SIMULATIONMODELS_API