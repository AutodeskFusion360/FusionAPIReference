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
# ifdef __COMPILING_ADSK_ELECTRON_SYMBOL_CPP__
# define ADSK_ELECTRON_SYMBOL_API XI_EXPORT
# else
# define ADSK_ELECTRON_SYMBOL_API
# endif
#else
# define ADSK_ELECTRON_SYMBOL_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Area;
    class Circles;
    class Dimensions;
    class Frames;
    class Pins;
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
/// Schematic symbol definition from a library; contains pins, wires, circles, and other graphic primitives.
class Symbol : public EcadObject {
public:

    /// Bounding area of this symbol.
    core::Ptr<Area> area() const;

    /// Library name where this symbol is defined.
    std::string library() const;

    /// Assigned name of this symbol.
    std::string name() const;

    /// Circle shapes in this symbol.
    core::Ptr<Circles> circles() const;

    /// Rectangle shapes in this symbol.
    core::Ptr<Rectangles> rectangles() const;

    /// Polygon shapes in this symbol.
    core::Ptr<PolyShapes> polyShapes() const;

    /// Pins in this symbol.
    core::Ptr<Pins> pins() const;

    /// Text annotations in this symbol.
    core::Ptr<Texts> texts() const;

    /// Wires in this symbol.
    core::Ptr<Wires> wires() const;

    /// Frames in this symbol.
    core::Ptr<Frames> frames() const;

    /// Dimensions in this symbol.
    core::Ptr<Dimensions> dimensions() const;

    /// Human-readable description of this symbol.
    std::string description() const;

    /// First line of the description, used as a short title.
    std::string headline() const;

    /// Uniform Resource Name (URN) of the source library.
    std::string libraryUrn() const;

    /// Version number of the source library.
    int libraryVersion() const;

    /// True if this symbol has been locally modified.
    bool locallyModified() const;

    /// True if the source library has been locally modified.
    bool libraryLocallyModified() const;

    /// Uniform Resource Name (URN) that uniquely identifies this symbol.
    std::string urn() const;

    ADSK_ELECTRON_SYMBOL_API static const char* classType();
    ADSK_ELECTRON_SYMBOL_API const char* objectType() const override;
    ADSK_ELECTRON_SYMBOL_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_SYMBOL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Area* area_raw() const = 0;
    virtual char* library_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual Circles* circles_raw() const = 0;
    virtual Rectangles* rectangles_raw() const = 0;
    virtual PolyShapes* polyShapes_raw() const = 0;
    virtual Pins* pins_raw() const = 0;
    virtual Texts* texts_raw() const = 0;
    virtual Wires* wires_raw() const = 0;
    virtual Frames* frames_raw() const = 0;
    virtual Dimensions* dimensions_raw() const = 0;
    virtual char* description_raw() const = 0;
    virtual char* headline_raw() const = 0;
    virtual char* libraryUrn_raw() const = 0;
    virtual int libraryVersion_raw() const = 0;
    virtual bool locallyModified_raw() const = 0;
    virtual bool libraryLocallyModified_raw() const = 0;
    virtual char* urn_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Area> Symbol::area() const
{
    core::Ptr<Area> res = area_raw();
    return res;
}

inline std::string Symbol::library() const
{
    std::string res;

    char* p= library_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Symbol::name() const
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

inline core::Ptr<Circles> Symbol::circles() const
{
    core::Ptr<Circles> res = circles_raw();
    return res;
}

inline core::Ptr<Rectangles> Symbol::rectangles() const
{
    core::Ptr<Rectangles> res = rectangles_raw();
    return res;
}

inline core::Ptr<PolyShapes> Symbol::polyShapes() const
{
    core::Ptr<PolyShapes> res = polyShapes_raw();
    return res;
}

inline core::Ptr<Pins> Symbol::pins() const
{
    core::Ptr<Pins> res = pins_raw();
    return res;
}

inline core::Ptr<Texts> Symbol::texts() const
{
    core::Ptr<Texts> res = texts_raw();
    return res;
}

inline core::Ptr<Wires> Symbol::wires() const
{
    core::Ptr<Wires> res = wires_raw();
    return res;
}

inline core::Ptr<Frames> Symbol::frames() const
{
    core::Ptr<Frames> res = frames_raw();
    return res;
}

inline core::Ptr<Dimensions> Symbol::dimensions() const
{
    core::Ptr<Dimensions> res = dimensions_raw();
    return res;
}

inline std::string Symbol::description() const
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

inline std::string Symbol::headline() const
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

inline std::string Symbol::libraryUrn() const
{
    std::string res;

    char* p= libraryUrn_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline int Symbol::libraryVersion() const
{
    int res = libraryVersion_raw();
    return res;
}

inline bool Symbol::locallyModified() const
{
    bool res = locallyModified_raw();
    return res;
}

inline bool Symbol::libraryLocallyModified() const
{
    bool res = libraryLocallyModified_raw();
    return res;
}

inline std::string Symbol::urn() const
{
    std::string res;

    char* p= urn_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_SYMBOL_API