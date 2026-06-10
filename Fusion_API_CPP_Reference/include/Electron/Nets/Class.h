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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_CLASS_CPP__
# define ADSK_ELECTRON_CLASS_API XI_EXPORT
# else
# define ADSK_ELECTRON_CLASS_API
# endif
#else
# define ADSK_ELECTRON_CLASS_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Net class definition (design rules configuration); assigns trace width, drill, and other constraints.
class Class : public core::Base {
public:

    /// Net class identifier (0-15).
    int number() const;

    /// User-assigned name of this net class.
    std::string name() const;

    /// Default trace width for this net class, in internal units.
    int width() const;

    /// Minimum drill diameter for this net class, in internal units.
    int drill() const;

    ADSK_ELECTRON_CLASS_API static const char* classType();
    ADSK_ELECTRON_CLASS_API const char* objectType() const override;
    ADSK_ELECTRON_CLASS_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_CLASS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int number_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual int width_raw() const = 0;
    virtual int drill_raw() const = 0;
};

// Inline wrappers

inline int Class::number() const
{
    int res = number_raw();
    return res;
}

inline std::string Class::name() const
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

inline int Class::width() const
{
    int res = width_raw();
    return res;
}

inline int Class::drill() const
{
    int res = drill_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_CLASS_API