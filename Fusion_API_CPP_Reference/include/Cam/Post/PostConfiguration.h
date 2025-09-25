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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_POSTCONFIGURATION_CPP__
# define ADSK_CAM_POSTCONFIGURATION_API XI_EXPORT
# else
# define ADSK_CAM_POSTCONFIGURATION_API
# endif
#else
# define ADSK_CAM_POSTCONFIGURATION_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Object that represents a post configuration.
class PostConfiguration : public core::Base {
public:

    /// Gets the name of the vendor of the machine tool or controller this post configuration supports.
    std::string vendor() const;

    /// Gets the description of the post.
    std::string description() const;

    /// Gets the capabilities supported by the post.
    /// Capabilities define what types of operations can be post processed using this configuration.
    PostCapabilities capability() const;

    /// Gets the version of the post.
    std::string version() const;

    /// Gets the extension of the output file created by the post.
    std::string extension() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Gets the mime type of the output file created by the post.
    std::string mimetype() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Gets a list of keywords defined in the post..
    std::vector<std::string> keywords() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a PostConfiguration from a file content.
    /// content : The content string of a PostConfiguration file to act as a base for creating a PostConfiguration from.
    /// Returns the newly created PostConfiguration.
    static core::Ptr<PostConfiguration> createFromContent(const std::string& content);

    ADSK_CAM_POSTCONFIGURATION_API static const char* classType();
    ADSK_CAM_POSTCONFIGURATION_API const char* objectType() const override;
    ADSK_CAM_POSTCONFIGURATION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_POSTCONFIGURATION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* vendor_raw() const = 0;
    virtual char* description_raw() const = 0;
    virtual PostCapabilities capability_raw() const = 0;
    virtual char* version_raw() const = 0;
    virtual char* extension_raw() const = 0;
    virtual char* mimetype_raw() const = 0;
    virtual char** keywords_raw(size_t& return_size) const = 0;
    ADSK_CAM_POSTCONFIGURATION_API static PostConfiguration* createFromContent_raw(const char* content);
};

// Inline wrappers

inline std::string PostConfiguration::vendor() const
{
    std::string res;

    char* p= vendor_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string PostConfiguration::description() const
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

inline PostCapabilities PostConfiguration::capability() const
{
    PostCapabilities res = capability_raw();
    return res;
}

inline std::string PostConfiguration::version() const
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

inline std::string PostConfiguration::extension() const
{
    std::string res;

    char* p= extension_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string PostConfiguration::mimetype() const
{
    std::string res;

    char* p= mimetype_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<std::string> PostConfiguration::keywords() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= keywords_raw(s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            core::DeallocateArray(pChar);
        }
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<PostConfiguration> PostConfiguration::createFromContent(const std::string& content)
{
    core::Ptr<PostConfiguration> res = createFromContent_raw(content.c_str());
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_POSTCONFIGURATION_API