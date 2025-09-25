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
# ifdef __COMPILING_ADSK_CAM_TOOLPRESET_CPP__
# define ADSK_CAM_TOOLPRESET_API XI_EXPORT
# else
# define ADSK_CAM_TOOLPRESET_API
# endif
#else
# define ADSK_CAM_TOOLPRESET_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMParameters;
}}

namespace adsk { namespace cam {

/// A Preset defines the material specific properties of a Tool.
class ToolPreset : public core::Base {
public:

    /// Gets and sets the name of that Preset.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets and sets the identifier of that Preset. The id can be used to select a Preset for a Operation.
    std::string id() const;
    bool id(const std::string& value);

    /// Gets the CAMParameters collection for this Preset.
    core::Ptr<CAMParameters> parameters() const;

    ADSK_CAM_TOOLPRESET_API static const char* classType();
    ADSK_CAM_TOOLPRESET_API const char* objectType() const override;
    ADSK_CAM_TOOLPRESET_API void* queryInterface(const char* id) const override;
    ADSK_CAM_TOOLPRESET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual char* id_raw() const = 0;
    virtual bool id_raw(const char* value) = 0;
    virtual CAMParameters* parameters_raw() const = 0;
};

// Inline wrappers

inline std::string ToolPreset::name() const
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

inline bool ToolPreset::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline std::string ToolPreset::id() const
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

inline bool ToolPreset::id(const std::string& value)
{
    return id_raw(value.c_str());
}

inline core::Ptr<CAMParameters> ToolPreset::parameters() const
{
    core::Ptr<CAMParameters> res = parameters_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_TOOLPRESET_API