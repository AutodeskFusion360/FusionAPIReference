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
# ifdef __COMPILING_ADSK_SIM_SOLVESETTINGS_CPP__
# define ADSK_SIM_SOLVESETTINGS_API XI_EXPORT
# else
# define ADSK_SIM_SOLVESETTINGS_API
# endif
#else
# define ADSK_SIM_SOLVESETTINGS_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents simulation solve settings.
class SolveSettings : public core::Base {
public:

    /// Placeholder.
    double placeholder() const;
    bool placeholder(double value);

    ADSK_SIM_SOLVESETTINGS_API static const char* classType();
    ADSK_SIM_SOLVESETTINGS_API const char* objectType() const override;
    ADSK_SIM_SOLVESETTINGS_API void* queryInterface(const char* id) const override;
    ADSK_SIM_SOLVESETTINGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double placeholder_raw() const = 0;
    virtual bool placeholder_raw(double value) = 0;
};

// Inline wrappers

inline double SolveSettings::placeholder() const
{
    double res = placeholder_raw();
    return res;
}

inline bool SolveSettings::placeholder(double value)
{
    return placeholder_raw(value);
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_SOLVESETTINGS_API