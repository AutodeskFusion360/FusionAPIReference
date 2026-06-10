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
# ifdef __COMPILING_ADSK_ELECTRON_PACKAGE_CPP__
# define ADSK_ELECTRON_PACKAGE_API XI_EXPORT
# else
# define ADSK_ELECTRON_PACKAGE_API
# endif
#else
# define ADSK_ELECTRON_PACKAGE_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Area;
    class Circles;
    class Contacts;
    class Dimensions;
    class Frames;
    class Holes;
    class PolyCutouts;
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
/// Footprint definition in a library; defines pad layout and silk screen for PCB placement.
class Package : public EcadObject {
public:

    /// Bounding area of this package.
    core::Ptr<Area> area() const;

    /// Name of the library where this package is defined.
    std::string library() const;

    /// Assigned name of this package.
    std::string name() const;

    /// Human-readable description of this package.
    std::string description() const;

    /// First line of the description, used as a short title.
    std::string headline() const;

    /// Uniform Resource Name (URN) of the source library.
    std::string libraryUrn() const;

    /// Version number of the source library.
    int libraryVersion() const;

    /// True if this package has been locally modified.
    bool locallyModified() const;

    /// True if the source library has been locally modified.
    bool libraryLocallyModified() const;

    /// Uniform Resource Name (URN) that uniquely identifies this package.
    std::string urn() const;

    /// Wire segments in this package.
    core::Ptr<Wires> wires() const;

    /// Circle shapes in this package.
    core::Ptr<Circles> circles() const;

    /// Text annotations in this package.
    core::Ptr<Texts> texts() const;

    /// Rectangle shapes in this package.
    core::Ptr<Rectangles> rectangles() const;

    /// Frame elements in this package.
    core::Ptr<Frames> frames() const;

    /// Dimension annotations in this package.
    core::Ptr<Dimensions> dimensions() const;

    /// Polygon shapes in this package.
    core::Ptr<PolyShapes> polyshapes() const;

    /// Polygon cutout regions in this package.
    core::Ptr<PolyCutouts> polycutouts() const;

    /// Contacts (pads or SMDs) in this package.
    core::Ptr<Contacts> contacts() const;

    /// Through-hole drills in this package.
    core::Ptr<Holes> holes() const;

    ADSK_ELECTRON_PACKAGE_API static const char* classType();
    ADSK_ELECTRON_PACKAGE_API const char* objectType() const override;
    ADSK_ELECTRON_PACKAGE_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_PACKAGE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Area* area_raw() const = 0;
    virtual char* library_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual char* description_raw() const = 0;
    virtual char* headline_raw() const = 0;
    virtual char* libraryUrn_raw() const = 0;
    virtual int libraryVersion_raw() const = 0;
    virtual bool locallyModified_raw() const = 0;
    virtual bool libraryLocallyModified_raw() const = 0;
    virtual char* urn_raw() const = 0;
    virtual Wires* wires_raw() const = 0;
    virtual Circles* circles_raw() const = 0;
    virtual Texts* texts_raw() const = 0;
    virtual Rectangles* rectangles_raw() const = 0;
    virtual Frames* frames_raw() const = 0;
    virtual Dimensions* dimensions_raw() const = 0;
    virtual PolyShapes* polyshapes_raw() const = 0;
    virtual PolyCutouts* polycutouts_raw() const = 0;
    virtual Contacts* contacts_raw() const = 0;
    virtual Holes* holes_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Area> Package::area() const
{
    core::Ptr<Area> res = area_raw();
    return res;
}

inline std::string Package::library() const
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

inline std::string Package::name() const
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

inline std::string Package::description() const
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

inline std::string Package::headline() const
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

inline std::string Package::libraryUrn() const
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

inline int Package::libraryVersion() const
{
    int res = libraryVersion_raw();
    return res;
}

inline bool Package::locallyModified() const
{
    bool res = locallyModified_raw();
    return res;
}

inline bool Package::libraryLocallyModified() const
{
    bool res = libraryLocallyModified_raw();
    return res;
}

inline std::string Package::urn() const
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

inline core::Ptr<Wires> Package::wires() const
{
    core::Ptr<Wires> res = wires_raw();
    return res;
}

inline core::Ptr<Circles> Package::circles() const
{
    core::Ptr<Circles> res = circles_raw();
    return res;
}

inline core::Ptr<Texts> Package::texts() const
{
    core::Ptr<Texts> res = texts_raw();
    return res;
}

inline core::Ptr<Rectangles> Package::rectangles() const
{
    core::Ptr<Rectangles> res = rectangles_raw();
    return res;
}

inline core::Ptr<Frames> Package::frames() const
{
    core::Ptr<Frames> res = frames_raw();
    return res;
}

inline core::Ptr<Dimensions> Package::dimensions() const
{
    core::Ptr<Dimensions> res = dimensions_raw();
    return res;
}

inline core::Ptr<PolyShapes> Package::polyshapes() const
{
    core::Ptr<PolyShapes> res = polyshapes_raw();
    return res;
}

inline core::Ptr<PolyCutouts> Package::polycutouts() const
{
    core::Ptr<PolyCutouts> res = polycutouts_raw();
    return res;
}

inline core::Ptr<Contacts> Package::contacts() const
{
    core::Ptr<Contacts> res = contacts_raw();
    return res;
}

inline core::Ptr<Holes> Package::holes() const
{
    core::Ptr<Holes> res = holes_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_PACKAGE_API