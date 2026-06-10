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
# ifdef __COMPILING_ADSK_SIM_STATICCONTACT_CPP__
# define ADSK_SIM_STATICCONTACT_API XI_EXPORT
# else
# define ADSK_SIM_STATICCONTACT_API
# endif
#else
# define ADSK_SIM_STATICCONTACT_API XI_IMPORT
#endif

namespace adsk { namespace sim {
    class OptionalDouble;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Contact in non event simulation study types.
class StaticContact : public Contact {
public:

    /// Gets whether symmetric penetration is used.
    bool isSymmetric() const;

    /// Gets whether the maximum activation distance is automatically calculated.
    bool isAutoMaxActivationDistance() const;

    /// Gets the stiffness factor property.
    core::Ptr<OptionalDouble> stiffnessFactor() const;

    /// Gets the coefficient of static friction property.
    core::Ptr<OptionalDouble> coefficientOfStaticFriction() const;

    /// Gets the maximum activation distance property.
    core::Ptr<OptionalDouble> maxActivationDistance() const;

    /// Gets the thermal conductance property.
    core::Ptr<OptionalDouble> thermalConductance() const;

    /// Gets the penetration surface offset property.
    core::Ptr<OptionalDouble> penetrationSurfaceOffset() const;

    /// Gets the maximum allowable penetration property.
    core::Ptr<OptionalDouble> maxAllowablePenetration() const;

    /// Gets the frictional stiffness for stick property.
    core::Ptr<OptionalDouble> frictionalStiffnessForStick() const;

    /// Gets the maximum allowable adjustment ratio property.
    core::Ptr<OptionalDouble> maxAllowableAdjustmentRatio() const;

    /// Gets the allowable penetration lower bound ratio property.
    core::Ptr<OptionalDouble> allowablePenetrationLowerBoundRatio() const;

    /// Gets the maximum radial activation distance property.
    core::Ptr<OptionalDouble> maxRadialActivationDistance() const;

    /// Gets the maximum normal activation distance property.
    core::Ptr<OptionalDouble> maxNormalActivationDistance() const;

    /// Gets the maximum allowable slip property.
    core::Ptr<OptionalDouble> maxAllowableSlip() const;

    ADSK_SIM_STATICCONTACT_API static const char* classType();
    ADSK_SIM_STATICCONTACT_API const char* objectType() const override;
    ADSK_SIM_STATICCONTACT_API void* queryInterface(const char* id) const override;
    ADSK_SIM_STATICCONTACT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isSymmetric_raw() const = 0;
    virtual bool isAutoMaxActivationDistance_raw() const = 0;
    virtual OptionalDouble* stiffnessFactor_raw() const = 0;
    virtual OptionalDouble* coefficientOfStaticFriction_raw() const = 0;
    virtual OptionalDouble* maxActivationDistance_raw() const = 0;
    virtual OptionalDouble* thermalConductance_raw() const = 0;
    virtual OptionalDouble* penetrationSurfaceOffset_raw() const = 0;
    virtual OptionalDouble* maxAllowablePenetration_raw() const = 0;
    virtual OptionalDouble* frictionalStiffnessForStick_raw() const = 0;
    virtual OptionalDouble* maxAllowableAdjustmentRatio_raw() const = 0;
    virtual OptionalDouble* allowablePenetrationLowerBoundRatio_raw() const = 0;
    virtual OptionalDouble* maxRadialActivationDistance_raw() const = 0;
    virtual OptionalDouble* maxNormalActivationDistance_raw() const = 0;
    virtual OptionalDouble* maxAllowableSlip_raw() const = 0;
};

// Inline wrappers

inline bool StaticContact::isSymmetric() const
{
    bool res = isSymmetric_raw();
    return res;
}

inline bool StaticContact::isAutoMaxActivationDistance() const
{
    bool res = isAutoMaxActivationDistance_raw();
    return res;
}

inline core::Ptr<OptionalDouble> StaticContact::stiffnessFactor() const
{
    core::Ptr<OptionalDouble> res = stiffnessFactor_raw();
    return res;
}

inline core::Ptr<OptionalDouble> StaticContact::coefficientOfStaticFriction() const
{
    core::Ptr<OptionalDouble> res = coefficientOfStaticFriction_raw();
    return res;
}

inline core::Ptr<OptionalDouble> StaticContact::maxActivationDistance() const
{
    core::Ptr<OptionalDouble> res = maxActivationDistance_raw();
    return res;
}

inline core::Ptr<OptionalDouble> StaticContact::thermalConductance() const
{
    core::Ptr<OptionalDouble> res = thermalConductance_raw();
    return res;
}

inline core::Ptr<OptionalDouble> StaticContact::penetrationSurfaceOffset() const
{
    core::Ptr<OptionalDouble> res = penetrationSurfaceOffset_raw();
    return res;
}

inline core::Ptr<OptionalDouble> StaticContact::maxAllowablePenetration() const
{
    core::Ptr<OptionalDouble> res = maxAllowablePenetration_raw();
    return res;
}

inline core::Ptr<OptionalDouble> StaticContact::frictionalStiffnessForStick() const
{
    core::Ptr<OptionalDouble> res = frictionalStiffnessForStick_raw();
    return res;
}

inline core::Ptr<OptionalDouble> StaticContact::maxAllowableAdjustmentRatio() const
{
    core::Ptr<OptionalDouble> res = maxAllowableAdjustmentRatio_raw();
    return res;
}

inline core::Ptr<OptionalDouble> StaticContact::allowablePenetrationLowerBoundRatio() const
{
    core::Ptr<OptionalDouble> res = allowablePenetrationLowerBoundRatio_raw();
    return res;
}

inline core::Ptr<OptionalDouble> StaticContact::maxRadialActivationDistance() const
{
    core::Ptr<OptionalDouble> res = maxRadialActivationDistance_raw();
    return res;
}

inline core::Ptr<OptionalDouble> StaticContact::maxNormalActivationDistance() const
{
    core::Ptr<OptionalDouble> res = maxNormalActivationDistance_raw();
    return res;
}

inline core::Ptr<OptionalDouble> StaticContact::maxAllowableSlip() const
{
    core::Ptr<OptionalDouble> res = maxAllowableSlip_raw();
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_STATICCONTACT_API