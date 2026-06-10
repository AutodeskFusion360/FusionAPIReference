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
#include "../EcadDocument/EcadDocument.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_LIBRARY_CPP__
# define ADSK_ELECTRON_LIBRARY_API XI_EXPORT
# else
# define ADSK_ELECTRON_LIBRARY_API
# endif
#else
# define ADSK_ELECTRON_LIBRARY_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Devices;
    class DeviceSets;
    class EcadDesign;
    class ElectronicsExportManager;
    class Grid;
    class Layers;
    class Packages;
    class Packages3d;
    class Symbols;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents a library document in an electronics design.
/// Contains reusable components including symbols, packages, device sets, and devices.
/// Can be opened as a standalone document or referenced within a design.
class Library : public EcadDocument {
public:

    /// Parent design that this library belongs to, or null if this is a standalone library document.
    core::Ptr<EcadDesign> parentDesign() const;

    /// Human-readable description of this library.
    std::string description() const;

    /// First line of the description, used as a short title.
    std::string headline() const;

    /// Unique identifier (URN) of this library.
    std::string id() const;

    /// Layer stack in this library.
    core::Ptr<Layers> layers() const;

    /// True if this library is editable (user library); false for managed or system libraries.
    bool editable() const;

    /// Grid settings used in this library.
    core::Ptr<Grid> grid() const;

    /// Symbols in this library.
    core::Ptr<Symbols> symbols() const;

    /// Packages (footprints) in this library.
    core::Ptr<Packages> packages() const;

    /// Device sets in this library.
    core::Ptr<DeviceSets> deviceSets() const;

    /// 3D packages in this library.
    core::Ptr<Packages3d> packages3d() const;

    /// Devices in this library. Each device appears once and has a technologies property.
    core::Ptr<Devices> devices() const;

    /// Returns the ExportManager for this design. Use the ExportManager to export the current design in various formats.
    core::Ptr<ElectronicsExportManager> exportManager() const;

    ADSK_ELECTRON_LIBRARY_API static const char* classType();
    ADSK_ELECTRON_LIBRARY_API const char* objectType() const override;
    ADSK_ELECTRON_LIBRARY_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_LIBRARY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual EcadDesign* parentDesign_raw() const = 0;
    virtual char* description_raw() const = 0;
    virtual char* headline_raw() const = 0;
    virtual char* id_raw() const = 0;
    virtual Layers* layers_raw() const = 0;
    virtual bool editable_raw() const = 0;
    virtual Grid* grid_raw() const = 0;
    virtual Symbols* symbols_raw() const = 0;
    virtual Packages* packages_raw() const = 0;
    virtual DeviceSets* deviceSets_raw() const = 0;
    virtual Packages3d* packages3d_raw() const = 0;
    virtual Devices* devices_raw() const = 0;
    virtual ElectronicsExportManager* exportManager_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<EcadDesign> Library::parentDesign() const
{
    core::Ptr<EcadDesign> res = parentDesign_raw();
    return res;
}

inline std::string Library::description() const
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

inline std::string Library::headline() const
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

inline std::string Library::id() const
{
    std::string res;

    char* p= id_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<Layers> Library::layers() const
{
    core::Ptr<Layers> res = layers_raw();
    return res;
}

inline bool Library::editable() const
{
    bool res = editable_raw();
    return res;
}

inline core::Ptr<Grid> Library::grid() const
{
    core::Ptr<Grid> res = grid_raw();
    return res;
}

inline core::Ptr<Symbols> Library::symbols() const
{
    core::Ptr<Symbols> res = symbols_raw();
    return res;
}

inline core::Ptr<Packages> Library::packages() const
{
    core::Ptr<Packages> res = packages_raw();
    return res;
}

inline core::Ptr<DeviceSets> Library::deviceSets() const
{
    core::Ptr<DeviceSets> res = deviceSets_raw();
    return res;
}

inline core::Ptr<Packages3d> Library::packages3d() const
{
    core::Ptr<Packages3d> res = packages3d_raw();
    return res;
}

inline core::Ptr<Devices> Library::devices() const
{
    core::Ptr<Devices> res = devices_raw();
    return res;
}

inline core::Ptr<ElectronicsExportManager> Library::exportManager() const
{
    core::Ptr<ElectronicsExportManager> res = exportManager_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_LIBRARY_API