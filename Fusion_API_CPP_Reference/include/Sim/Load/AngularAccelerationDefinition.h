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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_ANGULARACCELERATIONDEFINITION_CPP__
# define ADSK_SIM_ANGULARACCELERATIONDEFINITION_API XI_EXPORT
# else
# define ADSK_SIM_ANGULARACCELERATIONDEFINITION_API
# endif
#else
# define ADSK_SIM_ANGULARACCELERATIONDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents an angular acceleration definition.
class AngularAccelerationDefinition : public core::Base {
public:

    /// Statically creates a new AngularAccelerationDefinition object. This is used as input when
    /// defining angular global loads.
    /// Returns the newly created AngularAccelerationDefinition object or null if the creation failed.
    static core::Ptr<AngularAccelerationDefinition> create();

    ADSK_SIM_ANGULARACCELERATIONDEFINITION_API static const char* classType();
    ADSK_SIM_ANGULARACCELERATIONDEFINITION_API const char* objectType() const override;
    ADSK_SIM_ANGULARACCELERATIONDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_SIM_ANGULARACCELERATIONDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_SIM_ANGULARACCELERATIONDEFINITION_API static AngularAccelerationDefinition* create_raw();
};

// Inline wrappers

inline core::Ptr<AngularAccelerationDefinition> AngularAccelerationDefinition::create()
{
    core::Ptr<AngularAccelerationDefinition> res = create_raw();
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_ANGULARACCELERATIONDEFINITION_API