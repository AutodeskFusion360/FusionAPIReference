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
#include "MachineElement.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_EXTRUDERMACHINEELEMENT_CPP__
# define ADSK_CAM_EXTRUDERMACHINEELEMENT_API XI_EXPORT
# else
# define ADSK_CAM_EXTRUDERMACHINEELEMENT_API
# endif
#else
# define ADSK_CAM_EXTRUDERMACHINEELEMENT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}

namespace adsk { namespace cam {

/// Machine element representing an extruder on a fused filament fabrication (FFF) machine.
/// A machine can have multiple extruders and thus multiple ExtruderMachineElement elements.
class ExtruderMachineElement : public MachineElement {
public:

    /// Identifying name for all elements of this type.
    /// Pass this to the itemByType or itemById methods of MachineElements to filter to elements of this type.
    /// Returns identifier of this type.
    static std::string staticTypeId();

    /// Delete this extruder element from the machine. Throws an exception when trying to delete the last remaining element.
    void deleteMe();

    /// Name of this extruder. Depending on the post, this may be output in the resulting gcode as a comment.
    std::string name() const;
    bool name(const std::string& value);

    /// Offset relative to the main extruder. The first extruder has an index of 0 and usually an offset of (0,0,0).
    core::Ptr<core::Vector3D> offset() const;
    bool offset(const core::Ptr<core::Vector3D>& value);

    /// Nozzle diameter of this extruder in cm.
    double nozzleDiameter() const;
    bool nozzleDiameter(double value);

    /// Filament diameter of this extruder in cm.
    double filamentDiameter() const;
    bool filamentDiameter(double value);

    /// The maximum temperature this extruder can reach in degrees C.
    double temperature() const;
    bool temperature(double value);

    /// The maximum volume output measured in cm^3/s.
    double volumePerSecond() const;
    bool volumePerSecond(double value);

    /// Flag indicating if a fan, whose speed is settable in the post, is available.
    bool isFanAvailable() const;
    bool isFanAvailable(bool value);

    ADSK_CAM_EXTRUDERMACHINEELEMENT_API static const char* classType();
    ADSK_CAM_EXTRUDERMACHINEELEMENT_API const char* objectType() const override;
    ADSK_CAM_EXTRUDERMACHINEELEMENT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_EXTRUDERMACHINEELEMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_EXTRUDERMACHINEELEMENT_API static char* staticTypeId_raw();
    virtual void deleteMe_raw() = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual core::Vector3D* offset_raw() const = 0;
    virtual bool offset_raw(core::Vector3D* value) = 0;
    virtual double nozzleDiameter_raw() const = 0;
    virtual bool nozzleDiameter_raw(double value) = 0;
    virtual double filamentDiameter_raw() const = 0;
    virtual bool filamentDiameter_raw(double value) = 0;
    virtual double temperature_raw() const = 0;
    virtual bool temperature_raw(double value) = 0;
    virtual double volumePerSecond_raw() const = 0;
    virtual bool volumePerSecond_raw(double value) = 0;
    virtual bool isFanAvailable_raw() const = 0;
    virtual bool isFanAvailable_raw(bool value) = 0;
};

// Inline wrappers

inline std::string ExtruderMachineElement::staticTypeId()
{
    std::string res;

    char* p= staticTypeId_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline void ExtruderMachineElement::deleteMe()
{
    deleteMe_raw();
}

inline std::string ExtruderMachineElement::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ExtruderMachineElement::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<core::Vector3D> ExtruderMachineElement::offset() const
{
    core::Ptr<core::Vector3D> res = offset_raw();
    return res;
}

inline bool ExtruderMachineElement::offset(const core::Ptr<core::Vector3D>& value)
{
    return offset_raw(value.get());
}

inline double ExtruderMachineElement::nozzleDiameter() const
{
    double res = nozzleDiameter_raw();
    return res;
}

inline bool ExtruderMachineElement::nozzleDiameter(double value)
{
    return nozzleDiameter_raw(value);
}

inline double ExtruderMachineElement::filamentDiameter() const
{
    double res = filamentDiameter_raw();
    return res;
}

inline bool ExtruderMachineElement::filamentDiameter(double value)
{
    return filamentDiameter_raw(value);
}

inline double ExtruderMachineElement::temperature() const
{
    double res = temperature_raw();
    return res;
}

inline bool ExtruderMachineElement::temperature(double value)
{
    return temperature_raw(value);
}

inline double ExtruderMachineElement::volumePerSecond() const
{
    double res = volumePerSecond_raw();
    return res;
}

inline bool ExtruderMachineElement::volumePerSecond(double value)
{
    return volumePerSecond_raw(value);
}

inline bool ExtruderMachineElement::isFanAvailable() const
{
    bool res = isFanAvailable_raw();
    return res;
}

inline bool ExtruderMachineElement::isFanAvailable(bool value)
{
    return isFanAvailable_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_EXTRUDERMACHINEELEMENT_API