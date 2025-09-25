//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2025 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include "../../Core/Base.h"
#include "../CamTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAMIMPORTOPTIONS_CPP__
# define ADSK_CAM_CAMIMPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_CAM_CAMIMPORTOPTIONS_API
# endif
#else
# define ADSK_CAM_CAMIMPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Parent class for all ImportOptions objects giving access to the setup.
class CAMImportOptions : public core::Base {
public:

    /// The file we want to import from. Needs to contain a valid path.
    std::string fullFilename() const;
    bool fullFilename(const std::string& value);

    /// The import object we want to import into. This currently must be a setup.
    core::Ptr<core::Base> importObject() const;
    bool importObject(const core::Ptr<core::Base>& value);

    ADSK_CAM_CAMIMPORTOPTIONS_API static const char* classType();
    ADSK_CAM_CAMIMPORTOPTIONS_API const char* objectType() const override;
    ADSK_CAM_CAMIMPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMIMPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* fullFilename_raw() const = 0;
    virtual bool fullFilename_raw(const char* value) = 0;
    virtual core::Base* importObject_raw() const = 0;
    virtual bool importObject_raw(core::Base* value) = 0;
    virtual void placeholderCAMImportOptions0() {}
    virtual void placeholderCAMImportOptions1() {}
    virtual void placeholderCAMImportOptions2() {}
    virtual void placeholderCAMImportOptions3() {}
    virtual void placeholderCAMImportOptions4() {}
    virtual void placeholderCAMImportOptions5() {}
    virtual void placeholderCAMImportOptions6() {}
    virtual void placeholderCAMImportOptions7() {}
    virtual void placeholderCAMImportOptions8() {}
    virtual void placeholderCAMImportOptions9() {}
    virtual void placeholderCAMImportOptions10() {}
    virtual void placeholderCAMImportOptions11() {}
};

// Inline wrappers

inline std::string CAMImportOptions::fullFilename() const
{
    std::string res;

    char* p= fullFilename_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAMImportOptions::fullFilename(const std::string& value)
{
    return fullFilename_raw(value.c_str());
}

inline core::Ptr<core::Base> CAMImportOptions::importObject() const
{
    core::Ptr<core::Base> res = importObject_raw();
    return res;
}

inline bool CAMImportOptions::importObject(const core::Ptr<core::Base>& value)
{
    return importObject_raw(value.get());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMIMPORTOPTIONS_API