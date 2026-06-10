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
#include "../Core/EcadObject.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_INSTANCE_CPP__
# define ADSK_ELECTRON_INSTANCE_API XI_EXPORT
# else
# define ADSK_ELECTRON_INSTANCE_API
# endif
#else
# define ADSK_ELECTRON_INSTANCE_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class EcadAttributes;
    class Gate;
    class Gates;
    class Part;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Placed part instance (component reference) on a schematic sheet.
class Instance : public EcadObject {
public:

    /// Rotation angle in degrees, counter-clockwise from the positive X axis (0, 90, 180, or 270).
    double angle() const;

    /// Gate associated with this instance.
    core::Ptr<Gate> gate() const;

    /// Part associated with this instance.
    core::Ptr<Part> part() const;

    /// Cross-reference gates (other instances of the same part).
    core::Ptr<Gates> xrefs() const;

    /// True if attributes are smashed; False if using default placement.
    bool smashed() const;

    /// Column position within the frame (1-based), or ? if outside a frame.
    std::string column() const;

    /// Row position within the frame (A, B, C...), or ? if outside a frame.
    std::string row() const;

    /// True if this instance is mirrored about the Y axis.
    bool mirror() const;

    /// Reference designator of this instance.
    std::string name() const;

    /// Sheet number (1-based) where this instance is placed.
    int sheet() const;

    /// Value of this instance.
    std::string value() const;

    /// X coordinate of the placement origin, in internal units.
    int x() const;

    /// Y coordinate of the placement origin, in internal units.
    int y() const;

    /// Attributes associated with this instance.
    core::Ptr<EcadAttributes> attributes() const;

    ADSK_ELECTRON_INSTANCE_API static const char* classType();
    ADSK_ELECTRON_INSTANCE_API const char* objectType() const override;
    ADSK_ELECTRON_INSTANCE_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_INSTANCE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double angle_raw() const = 0;
    virtual Gate* gate_raw() const = 0;
    virtual Part* part_raw() const = 0;
    virtual Gates* xrefs_raw() const = 0;
    virtual bool smashed_raw() const = 0;
    virtual char* column_raw() const = 0;
    virtual char* row_raw() const = 0;
    virtual bool mirror_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual int sheet_raw() const = 0;
    virtual char* value_raw() const = 0;
    virtual int x_raw() const = 0;
    virtual int y_raw() const = 0;
    virtual EcadAttributes* attributes_raw() const = 0;
};

// Inline wrappers

inline double Instance::angle() const
{
    double res = angle_raw();
    return res;
}

inline core::Ptr<Gate> Instance::gate() const
{
    core::Ptr<Gate> res = gate_raw();
    return res;
}

inline core::Ptr<Part> Instance::part() const
{
    core::Ptr<Part> res = part_raw();
    return res;
}

inline core::Ptr<Gates> Instance::xrefs() const
{
    core::Ptr<Gates> res = xrefs_raw();
    return res;
}

inline bool Instance::smashed() const
{
    bool res = smashed_raw();
    return res;
}

inline std::string Instance::column() const
{
    std::string res;

    char* p= column_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Instance::row() const
{
    std::string res;

    char* p= row_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Instance::mirror() const
{
    bool res = mirror_raw();
    return res;
}

inline std::string Instance::name() const
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

inline int Instance::sheet() const
{
    int res = sheet_raw();
    return res;
}

inline std::string Instance::value() const
{
    std::string res;

    char* p= value_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline int Instance::x() const
{
    int res = x_raw();
    return res;
}

inline int Instance::y() const
{
    int res = y_raw();
    return res;
}

inline core::Ptr<EcadAttributes> Instance::attributes() const
{
    core::Ptr<EcadAttributes> res = attributes_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_INSTANCE_API