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
# ifdef __COMPILING_ADSK_ELECTRON_SHEET_CPP__
# define ADSK_ELECTRON_SHEET_API XI_EXPORT
# else
# define ADSK_ELECTRON_SHEET_API
# endif
#else
# define ADSK_ELECTRON_SHEET_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Area;
    class Busses;
    class Circles;
    class Dimensions;
    class Frames;
    class Instances;
    class ModuleInstances;
    class Nets;
    class Parts;
    class PolyShapes;
    class Rectangles;
    class Texts;
    class Wires;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents one page of a multi-sheet schematic.
class Sheet : public EcadObject {
public:

    /// Assigned name of this sheet.
    std::string name() const;

    /// Sequential sheet number (1-based).
    int number() const;

    /// Area bounds of this sheet.
    core::Ptr<Area> area() const;

    /// Human-readable description of this sheet.
    std::string description() const;

    /// First line of the description, used as a short title.
    std::string headline() const;

    /// Component definitions (parts) on this sheet.
    core::Ptr<Parts> parts() const;

    /// Placed instances (component references) on this sheet.
    core::Ptr<Instances> instances() const;

    /// Wire segments on this sheet.
    core::Ptr<Wires> wires() const;

    /// Circle shapes on this sheet.
    core::Ptr<Circles> circles() const;

    /// Rectangle shapes on this sheet.
    core::Ptr<Rectangles> rectangles() const;

    /// Text annotations on this sheet.
    core::Ptr<Texts> texts() const;

    /// Polygon shapes on this sheet.
    core::Ptr<PolyShapes> polyShapes() const;

    /// Buses on this sheet.
    core::Ptr<Busses> busses() const;

    /// Nets (logical connections) on this sheet.
    core::Ptr<Nets> nets() const;

    /// Module instances (reusable circuit blocks) on this sheet.
    core::Ptr<ModuleInstances> moduleInstances() const;

    /// Frame elements on this sheet.
    core::Ptr<Frames> frames() const;

    /// Dimension annotations on this sheet.
    core::Ptr<Dimensions> dimensions() const;

    ADSK_ELECTRON_SHEET_API static const char* classType();
    ADSK_ELECTRON_SHEET_API const char* objectType() const override;
    ADSK_ELECTRON_SHEET_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_SHEET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual int number_raw() const = 0;
    virtual Area* area_raw() const = 0;
    virtual char* description_raw() const = 0;
    virtual char* headline_raw() const = 0;
    virtual Parts* parts_raw() const = 0;
    virtual Instances* instances_raw() const = 0;
    virtual Wires* wires_raw() const = 0;
    virtual Circles* circles_raw() const = 0;
    virtual Rectangles* rectangles_raw() const = 0;
    virtual Texts* texts_raw() const = 0;
    virtual PolyShapes* polyShapes_raw() const = 0;
    virtual Busses* busses_raw() const = 0;
    virtual Nets* nets_raw() const = 0;
    virtual ModuleInstances* moduleInstances_raw() const = 0;
    virtual Frames* frames_raw() const = 0;
    virtual Dimensions* dimensions_raw() const = 0;
};

// Inline wrappers

inline std::string Sheet::name() const
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

inline int Sheet::number() const
{
    int res = number_raw();
    return res;
}

inline core::Ptr<Area> Sheet::area() const
{
    core::Ptr<Area> res = area_raw();
    return res;
}

inline std::string Sheet::description() const
{
    std::string res;

    char* p= description_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Sheet::headline() const
{
    std::string res;

    char* p= headline_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<Parts> Sheet::parts() const
{
    core::Ptr<Parts> res = parts_raw();
    return res;
}

inline core::Ptr<Instances> Sheet::instances() const
{
    core::Ptr<Instances> res = instances_raw();
    return res;
}

inline core::Ptr<Wires> Sheet::wires() const
{
    core::Ptr<Wires> res = wires_raw();
    return res;
}

inline core::Ptr<Circles> Sheet::circles() const
{
    core::Ptr<Circles> res = circles_raw();
    return res;
}

inline core::Ptr<Rectangles> Sheet::rectangles() const
{
    core::Ptr<Rectangles> res = rectangles_raw();
    return res;
}

inline core::Ptr<Texts> Sheet::texts() const
{
    core::Ptr<Texts> res = texts_raw();
    return res;
}

inline core::Ptr<PolyShapes> Sheet::polyShapes() const
{
    core::Ptr<PolyShapes> res = polyShapes_raw();
    return res;
}

inline core::Ptr<Busses> Sheet::busses() const
{
    core::Ptr<Busses> res = busses_raw();
    return res;
}

inline core::Ptr<Nets> Sheet::nets() const
{
    core::Ptr<Nets> res = nets_raw();
    return res;
}

inline core::Ptr<ModuleInstances> Sheet::moduleInstances() const
{
    core::Ptr<ModuleInstances> res = moduleInstances_raw();
    return res;
}

inline core::Ptr<Frames> Sheet::frames() const
{
    core::Ptr<Frames> res = frames_raw();
    return res;
}

inline core::Ptr<Dimensions> Sheet::dimensions() const
{
    core::Ptr<Dimensions> res = dimensions_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_SHEET_API