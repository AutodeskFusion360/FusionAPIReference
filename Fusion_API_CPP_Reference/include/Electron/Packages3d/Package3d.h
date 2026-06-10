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
# ifdef __COMPILING_ADSK_ELECTRON_PACKAGE3D_CPP__
# define ADSK_ELECTRON_PACKAGE3D_API XI_EXPORT
# else
# define ADSK_ELECTRON_PACKAGE3D_API
# endif
#else
# define ADSK_ELECTRON_PACKAGE3D_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// 3D model definition in a library; can be attached to footprints for 3D board visualization.
class Package3d : public EcadObject {
public:

    /// Name of the library where this 3D package is defined.
    std::string library() const;

    /// Assigned name of this 3D package.
    std::string name() const;

    /// Human-readable description of this 3D package.
    std::string description() const;

    /// First line of the description, used as a short title.
    std::string headline() const;

    /// Uniform Resource Name (URN) of the source library.
    std::string libraryUrn() const;

    /// Version number of the source library.
    int libraryVersion() const;

    /// True if this 3D package has been locally modified.
    bool locallyModified() const;

    /// True if the source library has been locally modified.
    bool libraryLocallyModified() const;

    /// Uniform Resource Name (URN) that uniquely identifies this 3D package.
    std::string urn() const;

    ADSK_ELECTRON_PACKAGE3D_API static const char* classType();
    ADSK_ELECTRON_PACKAGE3D_API const char* objectType() const override;
    ADSK_ELECTRON_PACKAGE3D_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_PACKAGE3D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* library_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual char* description_raw() const = 0;
    virtual char* headline_raw() const = 0;
    virtual char* libraryUrn_raw() const = 0;
    virtual int libraryVersion_raw() const = 0;
    virtual bool locallyModified_raw() const = 0;
    virtual bool libraryLocallyModified_raw() const = 0;
    virtual char* urn_raw() const = 0;
};

// Inline wrappers

inline std::string Package3d::library() const
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

inline std::string Package3d::name() const
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

inline std::string Package3d::description() const
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

inline std::string Package3d::headline() const
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

inline std::string Package3d::libraryUrn() const
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

inline int Package3d::libraryVersion() const
{
    int res = libraryVersion_raw();
    return res;
}

inline bool Package3d::locallyModified() const
{
    bool res = locallyModified_raw();
    return res;
}

inline bool Package3d::libraryLocallyModified() const
{
    bool res = libraryLocallyModified_raw();
    return res;
}

inline std::string Package3d::urn() const
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

#undef ADSK_ELECTRON_PACKAGE3D_API