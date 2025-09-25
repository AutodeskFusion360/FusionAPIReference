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
# ifdef __COMPILING_ADSK_CAM_TOOL_CPP__
# define ADSK_CAM_TOOL_API XI_EXPORT
# else
# define ADSK_CAM_TOOL_API
# endif
#else
# define ADSK_CAM_TOOL_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMParameters;
    class ToolPresets;
}}

namespace adsk { namespace cam {

/// Represents a Tool.
class Tool : public core::Base {
public:

    /// Creates a Tool object from given JSON string.
    /// json : The JSON should fully define the tool and contain all tool parameters.
    /// If the JSON contains more than one tool, only the first Tool is loaded.
    /// Returns the newly created Tool.
    static core::Ptr<Tool> createFromJson(const std::string& json);

    /// Gets the CAMParameters collection associated with this tool. This
    /// defines all of the settings that describe the details of the tool.
    core::Ptr<CAMParameters> parameters() const;

    /// Gets the ToolPresets collection associated with this tool.
    core::Ptr<ToolPresets> presets() const;

    /// Generates and returns a JSON string that contains a description of this tool.
    /// Returns a JSON string that contains a description of this tool.
    std::string toJson() const;

    /// Creates a Tool object given a string containing a tool defined using the P21 format.
    /// Throws an error if the given string does not conform to the P21 format.
    /// p21 : Creates a Tool object from the given P21 string.
    /// Returns the newly created Tool.
    static core::Ptr<Tool> createFromP21(const std::string& p21);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a Tool object given a P21 file.
    /// Throws an error if the given file is not a valid P21 file.
    /// filename : The full filename of the P21 file to use to create the Tool.
    /// Returns the newly created Tool.
    static core::Ptr<Tool> createFromP21File(const std::string& filename);

    ADSK_CAM_TOOL_API static const char* classType();
    ADSK_CAM_TOOL_API const char* objectType() const override;
    ADSK_CAM_TOOL_API void* queryInterface(const char* id) const override;
    ADSK_CAM_TOOL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_TOOL_API static Tool* createFromJson_raw(const char* json);
    virtual CAMParameters* parameters_raw() const = 0;
    virtual ToolPresets* presets_raw() const = 0;
    virtual char* toJson_raw() const = 0;
    ADSK_CAM_TOOL_API static Tool* createFromP21_raw(const char* p21);
    ADSK_CAM_TOOL_API static Tool* createFromP21File_raw(const char* filename);
};

// Inline wrappers

inline core::Ptr<Tool> Tool::createFromJson(const std::string& json)
{
    core::Ptr<Tool> res = createFromJson_raw(json.c_str());
    return res;
}

inline core::Ptr<CAMParameters> Tool::parameters() const
{
    core::Ptr<CAMParameters> res = parameters_raw();
    return res;
}

inline core::Ptr<ToolPresets> Tool::presets() const
{
    core::Ptr<ToolPresets> res = presets_raw();
    return res;
}

inline std::string Tool::toJson() const
{
    std::string res;

    char* p= toJson_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<Tool> Tool::createFromP21(const std::string& p21)
{
    core::Ptr<Tool> res = createFromP21_raw(p21.c_str());
    return res;
}

inline core::Ptr<Tool> Tool::createFromP21File(const std::string& filename)
{
    core::Ptr<Tool> res = createFromP21File_raw(filename.c_str());
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_TOOL_API