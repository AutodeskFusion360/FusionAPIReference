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
# ifdef __COMPILING_ADSK_CAM_CAMTEMPLATEOPERATIONINPUT_CPP__
# define ADSK_CAM_CAMTEMPLATEOPERATIONINPUT_API XI_EXPORT
# else
# define ADSK_CAM_CAMTEMPLATEOPERATIONINPUT_API
# endif
#else
# define ADSK_CAM_CAMTEMPLATEOPERATIONINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMParameters;
    class Tool;
    class ToolPreset;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A CAMTemplateOperationInput provides access to Operation Template parameters for editing, in much the same way as
/// OperationInput provides access to Operation parameters for editing. Operation Template parameters are slightly different
/// from Operation parameters, for instance in terms of how tools and geometry selections can be specified, so an OperationInput
/// for a given strategy type has a slightly different set of parameters from a CAMTemplateOperationInput for that same strategy type.
class CAMTemplateOperationInput : public core::Base {
public:

    /// Get the current strategy
    std::string strategy() const;

    /// Get all parameters for the current strategy. Parameters are initialized by user defaults.
    /// Configure operation parameters before creation for a better performance.
    core::Ptr<CAMParameters> parameters() const;

    /// Optionally specify the tool used by the operation. The ToolLibraries allows the access to Local and Fusion tools.
    core::Ptr<Tool> tool() const;
    bool tool(const core::Ptr<Tool>& value);

    /// Optionally specify the preset of the tool. If no preset is specified, the operation gets its default feed and speed.
    /// The Tool provides access to available presets. Use one of those presets to override the default.
    /// An invalid preset will cause a failure during the creation of the operation.
    core::Ptr<ToolPreset> toolPreset() const;
    bool toolPreset(const core::Ptr<ToolPreset>& value);

    /// Optionally specify the display name that appears in the browser-tree to override the default.
    std::string displayName() const;
    bool displayName(const std::string& value);

    /// Get the number of geometry indices that can be selected.
    int geometryIndexCount() const;

    /// Get whether a geometry index is selected.
    /// index : 
    /// 
    bool isGeometryIndexEnabled(int index);

    /// Set whether a geometry index is selected.
    /// index : 
    /// enabled : 
    void setGeometryIndexEnabled(int index, bool enabled);

    ADSK_CAM_CAMTEMPLATEOPERATIONINPUT_API static const char* classType();
    ADSK_CAM_CAMTEMPLATEOPERATIONINPUT_API const char* objectType() const override;
    ADSK_CAM_CAMTEMPLATEOPERATIONINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMTEMPLATEOPERATIONINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* strategy_raw() const = 0;
    virtual CAMParameters* parameters_raw() const = 0;
    virtual Tool* tool_raw() const = 0;
    virtual bool tool_raw(Tool* value) = 0;
    virtual ToolPreset* toolPreset_raw() const = 0;
    virtual bool toolPreset_raw(ToolPreset* value) = 0;
    virtual char* displayName_raw() const = 0;
    virtual bool displayName_raw(const char* value) = 0;
    virtual int geometryIndexCount_raw() const = 0;
    virtual bool isGeometryIndexEnabled_raw(int index) = 0;
    virtual void setGeometryIndexEnabled_raw(int index, bool enabled) = 0;
};

// Inline wrappers

inline std::string CAMTemplateOperationInput::strategy() const
{
    std::string res;

    char* p= strategy_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<CAMParameters> CAMTemplateOperationInput::parameters() const
{
    core::Ptr<CAMParameters> res = parameters_raw();
    return res;
}

inline core::Ptr<Tool> CAMTemplateOperationInput::tool() const
{
    core::Ptr<Tool> res = tool_raw();
    return res;
}

inline bool CAMTemplateOperationInput::tool(const core::Ptr<Tool>& value)
{
    return tool_raw(value.get());
}

inline core::Ptr<ToolPreset> CAMTemplateOperationInput::toolPreset() const
{
    core::Ptr<ToolPreset> res = toolPreset_raw();
    return res;
}

inline bool CAMTemplateOperationInput::toolPreset(const core::Ptr<ToolPreset>& value)
{
    return toolPreset_raw(value.get());
}

inline std::string CAMTemplateOperationInput::displayName() const
{
    std::string res;

    char* p= displayName_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAMTemplateOperationInput::displayName(const std::string& value)
{
    return displayName_raw(value.c_str());
}

inline int CAMTemplateOperationInput::geometryIndexCount() const
{
    int res = geometryIndexCount_raw();
    return res;
}

inline bool CAMTemplateOperationInput::isGeometryIndexEnabled(int index)
{
    bool res = isGeometryIndexEnabled_raw(index);
    return res;
}

inline void CAMTemplateOperationInput::setGeometryIndexEnabled(int index, bool enabled)
{
    setGeometryIndexEnabled_raw(index, enabled);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMTEMPLATEOPERATIONINPUT_API