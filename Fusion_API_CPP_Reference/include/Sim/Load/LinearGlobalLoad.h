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
#include "Load.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_LINEARGLOBALLOAD_CPP__
# define ADSK_SIM_LINEARGLOBALLOAD_API XI_EXPORT
# else
# define ADSK_SIM_LINEARGLOBALLOAD_API
# endif
#else
# define ADSK_SIM_LINEARGLOBALLOAD_API XI_IMPORT
#endif

namespace adsk { namespace sim {
    class VectorDefinition;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a linear global load.
class LinearGlobalLoad : public Load {
public:

    /// Gets and sets the acceleration vector definition.
    core::Ptr<VectorDefinition> acceleration() const;
    bool acceleration(const core::Ptr<VectorDefinition>& value);

    ADSK_SIM_LINEARGLOBALLOAD_API static const char* classType();
    ADSK_SIM_LINEARGLOBALLOAD_API const char* objectType() const override;
    ADSK_SIM_LINEARGLOBALLOAD_API void* queryInterface(const char* id) const override;
    ADSK_SIM_LINEARGLOBALLOAD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual VectorDefinition* acceleration_raw() const = 0;
    virtual bool acceleration_raw(VectorDefinition* value) = 0;
};

// Inline wrappers

inline core::Ptr<VectorDefinition> LinearGlobalLoad::acceleration() const
{
    core::Ptr<VectorDefinition> res = acceleration_raw();
    return res;
}

inline bool LinearGlobalLoad::acceleration(const core::Ptr<VectorDefinition>& value)
{
    return acceleration_raw(value.get());
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_LINEARGLOBALLOAD_API