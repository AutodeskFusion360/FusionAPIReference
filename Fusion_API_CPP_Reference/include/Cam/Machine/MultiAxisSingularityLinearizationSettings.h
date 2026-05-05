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
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MULTIAXISSINGULARITYLINEARIZATIONSETTINGS_CPP__
# define ADSK_CAM_MULTIAXISSINGULARITYLINEARIZATIONSETTINGS_API XI_EXPORT
# else
# define ADSK_CAM_MULTIAXISSINGULARITYLINEARIZATIONSETTINGS_API
# endif
#else
# define ADSK_CAM_MULTIAXISSINGULARITYLINEARIZATIONSETTINGS_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// The class for the multi-axis singularity linearization settings.
class MultiAxisSingularityLinearizationSettings : public core::Base {
public:

    /// The linearization method to use for the multi-axis singularity settings.
    MultiAxisSingularityLinearizeMethod linearizeMethod() const;
    bool linearizeMethod(MultiAxisSingularityLinearizeMethod value);

    /// The linearization tolerance for the multi-axis singularity settings.
    double linearizationTolerance() const;
    bool linearizationTolerance(double value);

    ADSK_CAM_MULTIAXISSINGULARITYLINEARIZATIONSETTINGS_API static const char* classType();
    ADSK_CAM_MULTIAXISSINGULARITYLINEARIZATIONSETTINGS_API const char* objectType() const override;
    ADSK_CAM_MULTIAXISSINGULARITYLINEARIZATIONSETTINGS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MULTIAXISSINGULARITYLINEARIZATIONSETTINGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MultiAxisSingularityLinearizeMethod linearizeMethod_raw() const = 0;
    virtual bool linearizeMethod_raw(MultiAxisSingularityLinearizeMethod value) = 0;
    virtual double linearizationTolerance_raw() const = 0;
    virtual bool linearizationTolerance_raw(double value) = 0;
};

// Inline wrappers

inline MultiAxisSingularityLinearizeMethod MultiAxisSingularityLinearizationSettings::linearizeMethod() const
{
    MultiAxisSingularityLinearizeMethod res = linearizeMethod_raw();
    return res;
}

inline bool MultiAxisSingularityLinearizationSettings::linearizeMethod(MultiAxisSingularityLinearizeMethod value)
{
    return linearizeMethod_raw(value);
}

inline double MultiAxisSingularityLinearizationSettings::linearizationTolerance() const
{
    double res = linearizationTolerance_raw();
    return res;
}

inline bool MultiAxisSingularityLinearizationSettings::linearizationTolerance(double value)
{
    return linearizationTolerance_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MULTIAXISSINGULARITYLINEARIZATIONSETTINGS_API