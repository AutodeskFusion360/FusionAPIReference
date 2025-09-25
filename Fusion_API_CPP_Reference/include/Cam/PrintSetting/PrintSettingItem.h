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
# ifdef __COMPILING_ADSK_CAM_PRINTSETTINGITEM_CPP__
# define ADSK_CAM_PRINTSETTINGITEM_API XI_EXPORT
# else
# define ADSK_CAM_PRINTSETTINGITEM_API
# endif
#else
# define ADSK_CAM_PRINTSETTINGITEM_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMParameters;
}}

namespace adsk { namespace cam {

/// Collection that provides access to the print setting parameters.
class PrintSettingItem : public core::Base {
public:

    /// Body Preset get and set name.
    std::string name() const;
    bool name(const std::string& value);

    /// Body Preset get and set description.
    std::string description() const;
    bool description(const std::string& value);

    /// Function that returns the parameters for reading and editing values.
    /// Returns the parameters of specified item.
    core::Ptr<CAMParameters> parameters() const;

    ADSK_CAM_PRINTSETTINGITEM_API static const char* classType();
    ADSK_CAM_PRINTSETTINGITEM_API const char* objectType() const override;
    ADSK_CAM_PRINTSETTINGITEM_API void* queryInterface(const char* id) const override;
    ADSK_CAM_PRINTSETTINGITEM_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual char* description_raw() const = 0;
    virtual bool description_raw(const char* value) = 0;
    virtual CAMParameters* parameters_raw() const = 0;
};

// Inline wrappers

inline std::string PrintSettingItem::name() const
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

inline bool PrintSettingItem::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline std::string PrintSettingItem::description() const
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

inline bool PrintSettingItem::description(const std::string& value)
{
    return description_raw(value.c_str());
}

inline core::Ptr<CAMParameters> PrintSettingItem::parameters() const
{
    core::Ptr<CAMParameters> res = parameters_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_PRINTSETTINGITEM_API