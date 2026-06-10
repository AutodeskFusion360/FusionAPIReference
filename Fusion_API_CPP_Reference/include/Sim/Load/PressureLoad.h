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
# ifdef __COMPILING_ADSK_SIM_PRESSURELOAD_CPP__
# define ADSK_SIM_PRESSURELOAD_API XI_EXPORT
# else
# define ADSK_SIM_PRESSURELOAD_API
# endif
#else
# define ADSK_SIM_PRESSURELOAD_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a pressure load.
class PressureLoad : public Load {
public:

    /// Gets and sets the magnitude of the pressure load.
    double pressure() const;
    bool pressure(double value);

    ADSK_SIM_PRESSURELOAD_API static const char* classType();
    ADSK_SIM_PRESSURELOAD_API const char* objectType() const override;
    ADSK_SIM_PRESSURELOAD_API void* queryInterface(const char* id) const override;
    ADSK_SIM_PRESSURELOAD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double pressure_raw() const = 0;
    virtual bool pressure_raw(double value) = 0;
};

// Inline wrappers

inline double PressureLoad::pressure() const
{
    double res = pressure_raw();
    return res;
}

inline bool PressureLoad::pressure(double value)
{
    return pressure_raw(value);
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_PRESSURELOAD_API