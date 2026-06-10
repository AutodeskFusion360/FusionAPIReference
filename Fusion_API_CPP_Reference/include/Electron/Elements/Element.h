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
# ifdef __COMPILING_ADSK_ELECTRON_ELEMENT_CPP__
# define ADSK_ELECTRON_ELEMENT_API XI_EXPORT
# else
# define ADSK_ELECTRON_ELEMENT_API
# endif
#else
# define ADSK_ELECTRON_ELEMENT_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class EcadAttributes;
    class Package;
    class Package3d;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Placed component instance on a PCB.
class Element : public EcadObject {
public:

    /// Reference designator of this placed component.
    std::string name() const;

    /// Value of this element.
    std::string value() const;

    /// X coordinate of the placement origin, in internal units.
    int x() const;

    /// Y coordinate of the placement origin, in internal units.
    int y() const;

    /// Rotation angle in degrees, counter-clockwise from the positive X axis (0.0–359.9).
    double angle() const;

    /// True if this element is mirrored about the Y axis; false otherwise.
    int mirror() const;

    /// True if the spin flag is set, preventing automatic readability correction when mirrored.
    int spin() const;

    /// True if this element is populated in the active assembly variant.
    bool populate() const;

    /// True if this element is locked against movement and rotation.
    bool locked() const;

    /// True if attributes are smashed.
    bool smashed() const;

    /// Frame column position (1-based), or ? if outside a frame.
    std::string column() const;

    /// Frame row position (A, B, C, ...), or ? if outside a frame.
    std::string row() const;

    /// Attributes associated with this element.
    core::Ptr<EcadAttributes> attributes() const;

    /// Package associated with this element.
    core::Ptr<Package> package() const;

    /// 3D package associated with this element.
    core::Ptr<Package3d> package3d() const;

    ADSK_ELECTRON_ELEMENT_API static const char* classType();
    ADSK_ELECTRON_ELEMENT_API const char* objectType() const override;
    ADSK_ELECTRON_ELEMENT_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_ELEMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual char* value_raw() const = 0;
    virtual int x_raw() const = 0;
    virtual int y_raw() const = 0;
    virtual double angle_raw() const = 0;
    virtual int mirror_raw() const = 0;
    virtual int spin_raw() const = 0;
    virtual bool populate_raw() const = 0;
    virtual bool locked_raw() const = 0;
    virtual bool smashed_raw() const = 0;
    virtual char* column_raw() const = 0;
    virtual char* row_raw() const = 0;
    virtual EcadAttributes* attributes_raw() const = 0;
    virtual Package* package_raw() const = 0;
    virtual Package3d* package3d_raw() const = 0;
};

// Inline wrappers

inline std::string Element::name() const
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

inline std::string Element::value() const
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

inline int Element::x() const
{
    int res = x_raw();
    return res;
}

inline int Element::y() const
{
    int res = y_raw();
    return res;
}

inline double Element::angle() const
{
    double res = angle_raw();
    return res;
}

inline int Element::mirror() const
{
    int res = mirror_raw();
    return res;
}

inline int Element::spin() const
{
    int res = spin_raw();
    return res;
}

inline bool Element::populate() const
{
    bool res = populate_raw();
    return res;
}

inline bool Element::locked() const
{
    bool res = locked_raw();
    return res;
}

inline bool Element::smashed() const
{
    bool res = smashed_raw();
    return res;
}

inline std::string Element::column() const
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

inline std::string Element::row() const
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

inline core::Ptr<EcadAttributes> Element::attributes() const
{
    core::Ptr<EcadAttributes> res = attributes_raw();
    return res;
}

inline core::Ptr<Package> Element::package() const
{
    core::Ptr<Package> res = package_raw();
    return res;
}

inline core::Ptr<Package3d> Element::package3d() const
{
    core::Ptr<Package3d> res = package3d_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_ELEMENT_API