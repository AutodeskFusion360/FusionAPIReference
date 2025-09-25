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
# ifdef __COMPILING_ADSK_CAM_MANUFACTURINGMODELINPUT_CPP__
# define ADSK_CAM_MANUFACTURINGMODELINPUT_API XI_EXPORT
# else
# define ADSK_CAM_MANUFACTURINGMODELINPUT_API
# endif
#else
# define ADSK_CAM_MANUFACTURINGMODELINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// This class defines the methods and properties that pertain to the definition of a ManufacturingModel.
class ManufacturingModelInput : public core::Base {
public:

    /// Name of the new ManufacturingModel.
    /// The name is displayed in the browser tree.
    std::string name() const;
    bool name(const std::string& value);

    ADSK_CAM_MANUFACTURINGMODELINPUT_API static const char* classType();
    ADSK_CAM_MANUFACTURINGMODELINPUT_API const char* objectType() const override;
    ADSK_CAM_MANUFACTURINGMODELINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MANUFACTURINGMODELINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
};

// Inline wrappers

inline std::string ManufacturingModelInput::name() const
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

inline bool ManufacturingModelInput::name(const std::string& value)
{
    return name_raw(value.c_str());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MANUFACTURINGMODELINPUT_API