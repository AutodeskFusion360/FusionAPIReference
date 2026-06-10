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
# ifdef __COMPILING_ADSK_SIM_GENERALSETTINGS_CPP__
# define ADSK_SIM_GENERALSETTINGS_API XI_EXPORT
# else
# define ADSK_SIM_GENERALSETTINGS_API
# endif
#else
# define ADSK_SIM_GENERALSETTINGS_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents simulation general settings.
class GeneralSettings : public core::Base {
public:

    /// Whether or not rigid body modes are removed.
    bool removeRigidBodyModes() const;
    bool removeRigidBodyModes(bool value);

    /// The value of contact detection tolerance for solids used for automatic contacts generation
    double contactDetectionTolerance() const;
    bool contactDetectionTolerance(double value);

    ADSK_SIM_GENERALSETTINGS_API static const char* classType();
    ADSK_SIM_GENERALSETTINGS_API const char* objectType() const override;
    ADSK_SIM_GENERALSETTINGS_API void* queryInterface(const char* id) const override;
    ADSK_SIM_GENERALSETTINGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool removeRigidBodyModes_raw() const = 0;
    virtual bool removeRigidBodyModes_raw(bool value) = 0;
    virtual double contactDetectionTolerance_raw() const = 0;
    virtual bool contactDetectionTolerance_raw(double value) = 0;
};

// Inline wrappers

inline bool GeneralSettings::removeRigidBodyModes() const
{
    bool res = removeRigidBodyModes_raw();
    return res;
}

inline bool GeneralSettings::removeRigidBodyModes(bool value)
{
    return removeRigidBodyModes_raw(value);
}

inline double GeneralSettings::contactDetectionTolerance() const
{
    double res = contactDetectionTolerance_raw();
    return res;
}

inline bool GeneralSettings::contactDetectionTolerance(double value)
{
    return contactDetectionTolerance_raw(value);
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_GENERALSETTINGS_API