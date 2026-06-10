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
#include "../ElectronTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_GRID_CPP__
# define ADSK_ELECTRON_GRID_API XI_EXPORT
# else
# define ADSK_ELECTRON_GRID_API
# endif
#else
# define ADSK_ELECTRON_GRID_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents the design grid settings for a board, schematic, or library.
class Grid : public core::Base {
public:

    /// Grid spacing distance, in the unit specified by unit.
    double distance() const;

    /// True if the grid is displayed as dots; False for lines.
    bool dots() const;

    /// Display multiple. A value of 1 shows every grid line; 10 shows every 10th grid line.
    int multiple() const;

    /// True if the grid is enabled; False if disabled.
    bool on() const;

    /// Unit type for grid spacing distance.
    GridUnits unit() const;

    /// Unit type for grid display distance.
    GridUnits unitdist() const;

    ADSK_ELECTRON_GRID_API static const char* classType();
    ADSK_ELECTRON_GRID_API const char* objectType() const override;
    ADSK_ELECTRON_GRID_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_GRID_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double distance_raw() const = 0;
    virtual bool dots_raw() const = 0;
    virtual int multiple_raw() const = 0;
    virtual bool on_raw() const = 0;
    virtual GridUnits unit_raw() const = 0;
    virtual GridUnits unitdist_raw() const = 0;
};

// Inline wrappers

inline double Grid::distance() const
{
    double res = distance_raw();
    return res;
}

inline bool Grid::dots() const
{
    bool res = dots_raw();
    return res;
}

inline int Grid::multiple() const
{
    int res = multiple_raw();
    return res;
}

inline bool Grid::on() const
{
    bool res = on_raw();
    return res;
}

inline GridUnits Grid::unit() const
{
    GridUnits res = unit_raw();
    return res;
}

inline GridUnits Grid::unitdist() const
{
    GridUnits res = unitdist_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_GRID_API