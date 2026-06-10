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
# ifdef __COMPILING_ADSK_ELECTRON_UNITS_CPP__
# define ADSK_ELECTRON_UNITS_API XI_EXPORT
# else
# define ADSK_ELECTRON_UNITS_API
# endif
#else
# define ADSK_ELECTRON_UNITS_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Static methods that convert internal units to physical units (mm, inch, mil, micron).
class Units : public core::Base {
public:

    /// Converts a value from internal units to inches.
    /// n : Value in internal units.
    /// The value in inches.
    static double u2inch(int n);

    /// Converts a value from internal units to microns (1/1000 mm).
    /// n : Value in internal units.
    /// The value in microns.
    static double u2mic(int n);

    /// Converts a value from internal units to mils (1/1000 inch).
    /// n : Value in internal units.
    /// The value in mils.
    static double u2mil(int n);

    /// Converts a value from internal units to millimeters.
    /// n : Value in internal units.
    /// The value in millimeters.
    static double u2mm(int n);

    ADSK_ELECTRON_UNITS_API static const char* classType();
    ADSK_ELECTRON_UNITS_API const char* objectType() const override;
    ADSK_ELECTRON_UNITS_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_UNITS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_ELECTRON_UNITS_API static double u2inch_raw(int n);
    ADSK_ELECTRON_UNITS_API static double u2mic_raw(int n);
    ADSK_ELECTRON_UNITS_API static double u2mil_raw(int n);
    ADSK_ELECTRON_UNITS_API static double u2mm_raw(int n);
};

// Inline wrappers

inline double Units::u2inch(int n)
{
    double res = u2inch_raw(n);
    return res;
}

inline double Units::u2mic(int n)
{
    double res = u2mic_raw(n);
    return res;
}

inline double Units::u2mil(int n)
{
    double res = u2mil_raw(n);
    return res;
}

inline double Units::u2mm(int n)
{
    double res = u2mm_raw(n);
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_UNITS_API