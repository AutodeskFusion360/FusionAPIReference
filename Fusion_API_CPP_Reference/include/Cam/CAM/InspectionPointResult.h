//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2025 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include "../../Core/Base.h"
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_INSPECTIONPOINTRESULT_CPP__
# define ADSK_CAM_INSPECTIONPOINTRESULT_API XI_EXPORT
# else
# define ADSK_CAM_INSPECTIONPOINTRESULT_API
# endif
#else
# define ADSK_CAM_INSPECTIONPOINTRESULT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Class to represent an inspection point's measured result.
/// These are created as a result of probing a surface inspection path.
/// For each point on the surface inspection path, the nominal position is
/// the contact position on the CAD model. The measured 'contact point' is
/// recorded when probing and a notional projected point can be calculated
/// on the CAD model. The error is calculated as the deviation from the
/// nominal over and above the tolerance.
/// All values are in the Fusion's internal units which for positional and length values is CM.
class InspectionPointResult : public core::Base {
public:

    /// get the nominal position of the inspection point.
    core::Ptr<core::Point3D> nominalPosition() const;

    /// get the projected position of the measured point.
    core::Ptr<core::Point3D> projectedPoint() const;

    /// get the contact position of the inspection point.
    core::Ptr<core::Point3D> contact() const;

    /// get offset associated with the inspection point.
    double offset() const;

    /// get the deviation vector of the measured point from nominal.
    core::Ptr<core::Vector3D> delta() const;

    /// get the deviation of the measured point.
    double deviation() const;

    /// get the error of the measured point adjusting by the allowable tolerance.
    double error() const;

    /// Get the state of the result.
    InspectionPointState state() const;

    ADSK_CAM_INSPECTIONPOINTRESULT_API static const char* classType();
    ADSK_CAM_INSPECTIONPOINTRESULT_API const char* objectType() const override;
    ADSK_CAM_INSPECTIONPOINTRESULT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_INSPECTIONPOINTRESULT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Point3D* nominalPosition_raw() const = 0;
    virtual core::Point3D* projectedPoint_raw() const = 0;
    virtual core::Point3D* contact_raw() const = 0;
    virtual double offset_raw() const = 0;
    virtual core::Vector3D* delta_raw() const = 0;
    virtual double deviation_raw() const = 0;
    virtual double error_raw() const = 0;
    virtual InspectionPointState state_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Point3D> InspectionPointResult::nominalPosition() const
{
    core::Ptr<core::Point3D> res = nominalPosition_raw();
    return res;
}

inline core::Ptr<core::Point3D> InspectionPointResult::projectedPoint() const
{
    core::Ptr<core::Point3D> res = projectedPoint_raw();
    return res;
}

inline core::Ptr<core::Point3D> InspectionPointResult::contact() const
{
    core::Ptr<core::Point3D> res = contact_raw();
    return res;
}

inline double InspectionPointResult::offset() const
{
    double res = offset_raw();
    return res;
}

inline core::Ptr<core::Vector3D> InspectionPointResult::delta() const
{
    core::Ptr<core::Vector3D> res = delta_raw();
    return res;
}

inline double InspectionPointResult::deviation() const
{
    double res = deviation_raw();
    return res;
}

inline double InspectionPointResult::error() const
{
    double res = error_raw();
    return res;
}

inline InspectionPointState InspectionPointResult::state() const
{
    InspectionPointState res = state_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_INSPECTIONPOINTRESULT_API