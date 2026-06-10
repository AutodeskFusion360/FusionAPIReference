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
# ifdef __COMPILING_ADSK_SIM_ANGULARGLOBALLOAD_CPP__
# define ADSK_SIM_ANGULARGLOBALLOAD_API XI_EXPORT
# else
# define ADSK_SIM_ANGULARGLOBALLOAD_API
# endif
#else
# define ADSK_SIM_ANGULARGLOBALLOAD_API XI_IMPORT
#endif

namespace adsk { namespace sim {
    class AngularAccelerationDefinition;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents an angular global load.
class AngularGlobalLoad : public Load {
public:

    /// Gets and sets the angular acceleration definition.
    core::Ptr<AngularAccelerationDefinition> acceleration() const;
    bool acceleration(const core::Ptr<AngularAccelerationDefinition>& value);

    ADSK_SIM_ANGULARGLOBALLOAD_API static const char* classType();
    ADSK_SIM_ANGULARGLOBALLOAD_API const char* objectType() const override;
    ADSK_SIM_ANGULARGLOBALLOAD_API void* queryInterface(const char* id) const override;
    ADSK_SIM_ANGULARGLOBALLOAD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual AngularAccelerationDefinition* acceleration_raw() const = 0;
    virtual bool acceleration_raw(AngularAccelerationDefinition* value) = 0;
};

// Inline wrappers

inline core::Ptr<AngularAccelerationDefinition> AngularGlobalLoad::acceleration() const
{
    core::Ptr<AngularAccelerationDefinition> res = acceleration_raw();
    return res;
}

inline bool AngularGlobalLoad::acceleration(const core::Ptr<AngularAccelerationDefinition>& value)
{
    return acceleration_raw(value.get());
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_ANGULARGLOBALLOAD_API