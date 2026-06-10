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
    class ToolReference;
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

    /// Gets the descriptive text about the tool.
    /// Includes various pieces of information depending on the tool type.
    /// Usually contains the tool number, data describing the tool geometry and the description.
    /// In the UI, the same information is displayed in the operation tree or in the tool library table.
    std::string description() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// True if the tool has an associated hub tool.
    bool isReferencedTool() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// When the tool has an associated hub tool (the isReferencedTool property returns true), this will
    /// return the object that represents the relationship to the associated hub tool. Through this tool reference
    /// object you can modify the version and get other information associated with the reference.
    /// 
    /// This property will fail if the tool has no associated hub tool.
    core::Ptr<ToolReference> referenceTool() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Clears the association between this document tool and its hub tool.
    /// Call updateTool on the document library to persist the change.
    /// Returns true if the link was successfully cleared.
    bool breakLink();

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
    virtual char* description_raw() const = 0;
    virtual bool isReferencedTool_raw() const = 0;
    virtual ToolReference* referenceTool_raw() const = 0;
    virtual bool breakLink_raw() = 0;
    virtual void placeholderTool0() {}
    virtual void placeholderTool1() {}
    virtual void placeholderTool2() {}
    virtual void placeholderTool3() {}
    virtual void placeholderTool4() {}
    virtual void placeholderTool5() {}
    virtual void placeholderTool6() {}
    virtual void placeholderTool7() {}
    virtual void placeholderTool8() {}
    virtual void placeholderTool9() {}
    virtual void placeholderTool10() {}
    virtual void placeholderTool11() {}
    virtual void placeholderTool12() {}
    virtual void placeholderTool13() {}
    virtual void placeholderTool14() {}
    virtual void placeholderTool15() {}
    virtual void placeholderTool16() {}
    virtual void placeholderTool17() {}
    virtual void placeholderTool18() {}
    virtual void placeholderTool19() {}
    virtual void placeholderTool20() {}
    virtual void placeholderTool21() {}
    virtual void placeholderTool22() {}
    virtual void placeholderTool23() {}
    virtual void placeholderTool24() {}
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

inline std::string Tool::description() const
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

inline bool Tool::isReferencedTool() const
{
    bool res = isReferencedTool_raw();
    return res;
}

inline core::Ptr<ToolReference> Tool::referenceTool() const
{
    core::Ptr<ToolReference> res = referenceTool_raw();
    return res;
}

inline bool Tool::breakLink()
{
    bool res = breakLink_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_TOOL_API