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
#include "../CamTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_TOOLREFERENCE_CPP__
# define ADSK_CAM_TOOLREFERENCE_API XI_EXPORT
# else
# define ADSK_CAM_TOOLREFERENCE_API
# endif
#else
# define ADSK_CAM_TOOLREFERENCE_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Tool;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
class ToolReference : public core::Base {
public:

    /// True if the hub tool being referenced can be located.
    /// This will be false if the link has been broken.
    bool isReferenceValid() const;

    /// Indicates that the version of the hub tool that the document tool is pointing to does not match
    /// the hub tool's current version.
    /// Throws an error if isReferenceValid is false.
    bool isOutOfDate() const;

    /// Gets the associated hub tool.
    /// Throws an error if isReferenceValid is false.
    core::Ptr<Tool> parent() const;

    /// Gets or sets the version of the hub tool that the document tool is pointing to.
    /// Writing to this property indicates the desire to update the tool to match the specified
    /// version.
    std::string version() const;
    bool version(const std::string& value);

    /// Sets the version property to match the current version of the hub tool.
    /// Throws an error if isReferenceValid is false.
    /// Returns true if the version was successfully updated.
    bool getLatestVersion();

    ADSK_CAM_TOOLREFERENCE_API static const char* classType();
    ADSK_CAM_TOOLREFERENCE_API const char* objectType() const override;
    ADSK_CAM_TOOLREFERENCE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_TOOLREFERENCE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isReferenceValid_raw() const = 0;
    virtual bool isOutOfDate_raw() const = 0;
    virtual Tool* parent_raw() const = 0;
    virtual char* version_raw() const = 0;
    virtual bool version_raw(const char* value) = 0;
    virtual bool getLatestVersion_raw() = 0;
    virtual void placeholderToolReference0() {}
    virtual void placeholderToolReference1() {}
};

// Inline wrappers

inline bool ToolReference::isReferenceValid() const
{
    bool res = isReferenceValid_raw();
    return res;
}

inline bool ToolReference::isOutOfDate() const
{
    bool res = isOutOfDate_raw();
    return res;
}

inline core::Ptr<Tool> ToolReference::parent() const
{
    core::Ptr<Tool> res = parent_raw();
    return res;
}

inline std::string ToolReference::version() const
{
    std::string res;

    char* p= version_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ToolReference::version(const std::string& value)
{
    return version_raw(value.c_str());
}

inline bool ToolReference::getLatestVersion()
{
    bool res = getLatestVersion_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_TOOLREFERENCE_API