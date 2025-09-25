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
#include "../GeometrySelections/GeometrySelection.h"
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MACHINEAVOIDSELECTIONBASE_CPP__
# define ADSK_CAM_MACHINEAVOIDSELECTIONBASE_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEAVOIDSELECTIONBASE_API
# endif
#else
# define ADSK_CAM_MACHINEAVOIDSELECTIONBASE_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Base parent class for all machine/avoid selection classes.
class MachineAvoidSelectionBase : public GeometrySelection {
public:

    /// Desired machining mode. The default is Avoid.
    /// The current machining mode will determine which value the radial and axial offset functions
    /// refer to. When set to Machine, the radial and axial offset methods will read/set the stock to leave parameter.
    /// When set to Avoid, the radial and axial offset methods will read/set the clearance value,
    /// and the Fixture mode will map to the relative fixture clearance value.
    MachiningMode machineMode() const;
    bool machineMode(MachiningMode value);

    /// Radial offset - sets the corresponding radial offset value based on the machine mode
    double radialOffset() const;
    bool radialOffset(double value);

    /// Axial offset - sets the corresponding axial offset value based on the machine mode
    double axialOffset() const;
    bool axialOffset(double value);

    /// Combined offset - clearance and stock to leave based on the machine mode
    /// This only applies to strategies that use a single offset value (Advanced Swarf,
    /// Multi-Axis Clearing, Multi-Axis Finishing, Deburr and Geodesic)
    double combinedOffset() const;
    bool combinedOffset(double value);

    ADSK_CAM_MACHINEAVOIDSELECTIONBASE_API static const char* classType();
    ADSK_CAM_MACHINEAVOIDSELECTIONBASE_API const char* objectType() const override;
    ADSK_CAM_MACHINEAVOIDSELECTIONBASE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEAVOIDSELECTIONBASE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MachiningMode machineMode_raw() const = 0;
    virtual bool machineMode_raw(MachiningMode value) = 0;
    virtual double radialOffset_raw() const = 0;
    virtual bool radialOffset_raw(double value) = 0;
    virtual double axialOffset_raw() const = 0;
    virtual bool axialOffset_raw(double value) = 0;
    virtual double combinedOffset_raw() const = 0;
    virtual bool combinedOffset_raw(double value) = 0;
    virtual void placeholderMachineAvoidSelectionBase0() {}
    virtual void placeholderMachineAvoidSelectionBase1() {}
    virtual void placeholderMachineAvoidSelectionBase2() {}
    virtual void placeholderMachineAvoidSelectionBase3() {}
    virtual void placeholderMachineAvoidSelectionBase4() {}
    virtual void placeholderMachineAvoidSelectionBase5() {}
    virtual void placeholderMachineAvoidSelectionBase6() {}
    virtual void placeholderMachineAvoidSelectionBase7() {}
    virtual void placeholderMachineAvoidSelectionBase8() {}
    virtual void placeholderMachineAvoidSelectionBase9() {}
    virtual void placeholderMachineAvoidSelectionBase10() {}
    virtual void placeholderMachineAvoidSelectionBase11() {}
    virtual void placeholderMachineAvoidSelectionBase12() {}
    virtual void placeholderMachineAvoidSelectionBase13() {}
    virtual void placeholderMachineAvoidSelectionBase14() {}
    virtual void placeholderMachineAvoidSelectionBase15() {}
    virtual void placeholderMachineAvoidSelectionBase16() {}
    virtual void placeholderMachineAvoidSelectionBase17() {}
    virtual void placeholderMachineAvoidSelectionBase18() {}
    virtual void placeholderMachineAvoidSelectionBase19() {}
    virtual void placeholderMachineAvoidSelectionBase20() {}
    virtual void placeholderMachineAvoidSelectionBase21() {}
    virtual void placeholderMachineAvoidSelectionBase22() {}
    virtual void placeholderMachineAvoidSelectionBase23() {}
    virtual void placeholderMachineAvoidSelectionBase24() {}
    virtual void placeholderMachineAvoidSelectionBase25() {}
    virtual void placeholderMachineAvoidSelectionBase26() {}
    virtual void placeholderMachineAvoidSelectionBase27() {}
    virtual void placeholderMachineAvoidSelectionBase28() {}
    virtual void placeholderMachineAvoidSelectionBase29() {}
    virtual void placeholderMachineAvoidSelectionBase30() {}
    virtual void placeholderMachineAvoidSelectionBase31() {}
    virtual void placeholderMachineAvoidSelectionBase32() {}
    virtual void placeholderMachineAvoidSelectionBase33() {}
    virtual void placeholderMachineAvoidSelectionBase34() {}
    virtual void placeholderMachineAvoidSelectionBase35() {}
    virtual void placeholderMachineAvoidSelectionBase36() {}
    virtual void placeholderMachineAvoidSelectionBase37() {}
    virtual void placeholderMachineAvoidSelectionBase38() {}
    virtual void placeholderMachineAvoidSelectionBase39() {}
    virtual void placeholderMachineAvoidSelectionBase40() {}
    virtual void placeholderMachineAvoidSelectionBase41() {}
    virtual void placeholderMachineAvoidSelectionBase42() {}
    virtual void placeholderMachineAvoidSelectionBase43() {}
    virtual void placeholderMachineAvoidSelectionBase44() {}
    virtual void placeholderMachineAvoidSelectionBase45() {}
    virtual void placeholderMachineAvoidSelectionBase46() {}
    virtual void placeholderMachineAvoidSelectionBase47() {}
    virtual void placeholderMachineAvoidSelectionBase48() {}
    virtual void placeholderMachineAvoidSelectionBase49() {}
    virtual void placeholderMachineAvoidSelectionBase50() {}
    virtual void placeholderMachineAvoidSelectionBase51() {}
    virtual void placeholderMachineAvoidSelectionBase52() {}
    virtual void placeholderMachineAvoidSelectionBase53() {}
    virtual void placeholderMachineAvoidSelectionBase54() {}
    virtual void placeholderMachineAvoidSelectionBase55() {}
};

// Inline wrappers

inline MachiningMode MachineAvoidSelectionBase::machineMode() const
{
    MachiningMode res = machineMode_raw();
    return res;
}

inline bool MachineAvoidSelectionBase::machineMode(MachiningMode value)
{
    return machineMode_raw(value);
}

inline double MachineAvoidSelectionBase::radialOffset() const
{
    double res = radialOffset_raw();
    return res;
}

inline bool MachineAvoidSelectionBase::radialOffset(double value)
{
    return radialOffset_raw(value);
}

inline double MachineAvoidSelectionBase::axialOffset() const
{
    double res = axialOffset_raw();
    return res;
}

inline bool MachineAvoidSelectionBase::axialOffset(double value)
{
    return axialOffset_raw(value);
}

inline double MachineAvoidSelectionBase::combinedOffset() const
{
    double res = combinedOffset_raw();
    return res;
}

inline bool MachineAvoidSelectionBase::combinedOffset(double value)
{
    return combinedOffset_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEAVOIDSELECTIONBASE_API