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
#include "Contact.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_EXPLICITCONTACT_CPP__
# define ADSK_SIM_EXPLICITCONTACT_API XI_EXPORT
# else
# define ADSK_SIM_EXPLICITCONTACT_API
# endif
#else
# define ADSK_SIM_EXPLICITCONTACT_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Contact in Explicit dynamics studies (Dynamic Event Simulation).
class ExplicitContact : public Contact {
public:

    ADSK_SIM_EXPLICITCONTACT_API static const char* classType();
    ADSK_SIM_EXPLICITCONTACT_API const char* objectType() const override;
    ADSK_SIM_EXPLICITCONTACT_API void* queryInterface(const char* id) const override;
    ADSK_SIM_EXPLICITCONTACT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface

};

// Inline wrappers


}// namespace sim
}// namespace adsk

#undef ADSK_SIM_EXPLICITCONTACT_API