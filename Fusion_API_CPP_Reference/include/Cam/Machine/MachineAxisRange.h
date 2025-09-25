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
# ifdef __COMPILING_ADSK_CAM_MACHINEAXISRANGE_CPP__
# define ADSK_CAM_MACHINEAXISRANGE_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEAXISRANGE_API
# endif
#else
# define ADSK_CAM_MACHINEAXISRANGE_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Class representing limits of motion for a machine axis.
class MachineAxisRange : public core::Base {
public:

    /// Creates a new range object with limited extents.
    /// Requires min to be less than or equal to max.
    /// Types of the fields depend on where this range is being used. Centimeters are used for distances and radians for angles.
    /// min : New minimum value for range.
    /// max : New maximum value for range.
    /// A new range object. Returns null if validation fails.
    static core::Ptr<MachineAxisRange> create(double min, double max);

    /// Creates a new unbounded range object.
    /// A new range object.
    static core::Ptr<MachineAxisRange> createInfinite();

    /// Minimum value of range.
    /// Type depends on where this range is being used. Centimeters are used for distances and radians for angles.
    /// Returns -infinity if this range is infinite.
    double min() const;

    /// Maximum value of range
    /// Type depends on where this range is being used. Centimeters are used for distances and radians for angles.
    /// Returns infinity if this range is infinite.
    double max() const;

    /// Is the range infinite.
    bool isInfinite() const;

    ADSK_CAM_MACHINEAXISRANGE_API static const char* classType();
    ADSK_CAM_MACHINEAXISRANGE_API const char* objectType() const override;
    ADSK_CAM_MACHINEAXISRANGE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEAXISRANGE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_MACHINEAXISRANGE_API static MachineAxisRange* create_raw(double min, double max);
    ADSK_CAM_MACHINEAXISRANGE_API static MachineAxisRange* createInfinite_raw();
    virtual double min_raw() const = 0;
    virtual double max_raw() const = 0;
    virtual bool isInfinite_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<MachineAxisRange> MachineAxisRange::create(double min, double max)
{
    core::Ptr<MachineAxisRange> res = create_raw(min, max);
    return res;
}

inline core::Ptr<MachineAxisRange> MachineAxisRange::createInfinite()
{
    core::Ptr<MachineAxisRange> res = createInfinite_raw();
    return res;
}

inline double MachineAxisRange::min() const
{
    double res = min_raw();
    return res;
}

inline double MachineAxisRange::max() const
{
    double res = max_raw();
    return res;
}

inline bool MachineAxisRange::isInfinite() const
{
    bool res = isInfinite_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEAXISRANGE_API