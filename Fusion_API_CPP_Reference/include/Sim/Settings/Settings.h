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
# ifdef __COMPILING_ADSK_SIM_SETTINGS_CPP__
# define ADSK_SIM_SETTINGS_API XI_EXPORT
# else
# define ADSK_SIM_SETTINGS_API
# endif
#else
# define ADSK_SIM_SETTINGS_API XI_IMPORT
#endif

namespace adsk { namespace sim {
    class GeneralSettings;
    class MeshSettings;
    class SolveSettings;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents all simulation settings.
class Settings : public core::Base {
public:

    /// General settings.
    core::Ptr<GeneralSettings> generalSettings() const;

    /// Mesh settings.
    core::Ptr<MeshSettings> meshSettings() const;

    /// Solve settings.
    core::Ptr<SolveSettings> solveSettings() const;

    /// Apply settings.
    bool applyChanges();

    ADSK_SIM_SETTINGS_API static const char* classType();
    ADSK_SIM_SETTINGS_API const char* objectType() const override;
    ADSK_SIM_SETTINGS_API void* queryInterface(const char* id) const override;
    ADSK_SIM_SETTINGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual GeneralSettings* generalSettings_raw() const = 0;
    virtual MeshSettings* meshSettings_raw() const = 0;
    virtual SolveSettings* solveSettings_raw() const = 0;
    virtual bool applyChanges_raw() = 0;
};

// Inline wrappers

inline core::Ptr<GeneralSettings> Settings::generalSettings() const
{
    core::Ptr<GeneralSettings> res = generalSettings_raw();
    return res;
}

inline core::Ptr<MeshSettings> Settings::meshSettings() const
{
    core::Ptr<MeshSettings> res = meshSettings_raw();
    return res;
}

inline core::Ptr<SolveSettings> Settings::solveSettings() const
{
    core::Ptr<SolveSettings> res = solveSettings_raw();
    return res;
}

inline bool Settings::applyChanges()
{
    bool res = applyChanges_raw();
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_SETTINGS_API