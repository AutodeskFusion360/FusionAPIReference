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
# ifdef __COMPILING_ADSK_ELECTRON_ERROR_CPP__
# define ADSK_ELECTRON_ERROR_API XI_EXPORT
# else
# define ADSK_ELECTRON_ERROR_API
# endif
#else
# define ADSK_ELECTRON_ERROR_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Single design rule check (DRC) or electrical rule check (ERC) error.
class Error : public core::Base {
public:

    /// Zero-based index of this error within the errors collection.
    size_t id() const;

    /// Numeric identifier for the rule or check that was violated (ERC/DRC error code).
    int code() const;

    /// Human-readable message describing this error.
    std::string description() const;

    /// Layer number (1-based) where the error occurs; 0 for ERC errors.
    int layer() const;

    /// Name of the schematic module (sheet or symbol) where the error occurs; empty for DRC.
    std::string moduleName() const;

    /// First string parameter substituted into the error message template (e.g., part name, net name); empty for DRC.
    std::string s1() const;

    /// Second string parameter substituted into the error message template; empty for DRC.
    std::string s2() const;

    /// Third string parameter substituted into the error message template; empty for DRC.
    std::string s3() const;

    /// Fourth string parameter substituted into the error message template; empty for DRC.
    std::string s4() const;

    /// Fifth string parameter substituted into the error message template; empty for DRC.
    std::string s5() const;

    /// Sixth string parameter substituted into the error message template; empty for DRC.
    std::string s6() const;

    /// Sheet number where the error occurs; 0 for DRC.
    int sheet() const;

    /// Unique signature string for this error (used for matching, e.g., when approving).
    std::string signature() const;

    /// Approval status of this error (active, processed, or approved).
    ErrorStates state() const;

    /// Severity or category of this error (warning, failure, consistency, or airwire).
    ErrorTypes errorType() const;

    /// X coordinate of the error location, in internal units.
    int x() const;

    /// Y coordinate of the error location, in internal units.
    int y() const;

    ADSK_ELECTRON_ERROR_API static const char* classType();
    ADSK_ELECTRON_ERROR_API const char* objectType() const override;
    ADSK_ELECTRON_ERROR_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_ERROR_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t id_raw() const = 0;
    virtual int code_raw() const = 0;
    virtual char* description_raw() const = 0;
    virtual int layer_raw() const = 0;
    virtual char* moduleName_raw() const = 0;
    virtual char* s1_raw() const = 0;
    virtual char* s2_raw() const = 0;
    virtual char* s3_raw() const = 0;
    virtual char* s4_raw() const = 0;
    virtual char* s5_raw() const = 0;
    virtual char* s6_raw() const = 0;
    virtual int sheet_raw() const = 0;
    virtual char* signature_raw() const = 0;
    virtual ErrorStates state_raw() const = 0;
    virtual ErrorTypes errorType_raw() const = 0;
    virtual int x_raw() const = 0;
    virtual int y_raw() const = 0;
};

// Inline wrappers

inline size_t Error::id() const
{
    size_t res = id_raw();
    return res;
}

inline int Error::code() const
{
    int res = code_raw();
    return res;
}

inline std::string Error::description() const
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

inline int Error::layer() const
{
    int res = layer_raw();
    return res;
}

inline std::string Error::moduleName() const
{
    std::string res;

    char* p= moduleName_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Error::s1() const
{
    std::string res;

    char* p= s1_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Error::s2() const
{
    std::string res;

    char* p= s2_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Error::s3() const
{
    std::string res;

    char* p= s3_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Error::s4() const
{
    std::string res;

    char* p= s4_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Error::s5() const
{
    std::string res;

    char* p= s5_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Error::s6() const
{
    std::string res;

    char* p= s6_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline int Error::sheet() const
{
    int res = sheet_raw();
    return res;
}

inline std::string Error::signature() const
{
    std::string res;

    char* p= signature_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline ErrorStates Error::state() const
{
    ErrorStates res = state_raw();
    return res;
}

inline ErrorTypes Error::errorType() const
{
    ErrorTypes res = errorType_raw();
    return res;
}

inline int Error::x() const
{
    int res = x_raw();
    return res;
}

inline int Error::y() const
{
    int res = y_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_ERROR_API