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
# ifdef __COMPILING_ADSK_CAM_OPERATIONINPUT_CPP__
# define ADSK_CAM_OPERATIONINPUT_API XI_EXPORT
# else
# define ADSK_CAM_OPERATIONINPUT_API
# endif
#else
# define ADSK_CAM_OPERATIONINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMParameters;
    class Tool;
    class ToolPreset;
}}

namespace adsk { namespace cam {

/// The OperationInput holds all necessary informations to create a new Operation.
/// Can be added to the Operations instance for creation.
class OperationInput : public core::Base {
public:

    /// Get the current strategy
    std::string strategy() const;

    /// Get all parameters for the current strategy. Parameters are initialized by user defaults.
    /// Configure operation parameters before creation for a better performance.
    core::Ptr<CAMParameters> parameters() const;

    /// Optionally specify the tool used by the operation. The ToolLibraries allows the access to Local and Fusion tools.
    /// Setting the tool will overwrite tool parameters in the parameters property.
    core::Ptr<Tool> tool() const;
    bool tool(const core::Ptr<Tool>& value);

    /// Optionally specify the preset of the tool. If no preset is specified, the operation gets its default feed and speed.
    /// The Tool provides access to available presets. Use one of those presets to override the default.
    /// Setting the tool will overwrite a subset of tool parameters in the parameters property.
    /// An invalid preset will cause a failure during the creation of the operation.
    core::Ptr<ToolPreset> toolPreset() const;
    bool toolPreset(const core::Ptr<ToolPreset>& value);

    /// Optionally specify the display name that appears in the browser-tree to override the default.
    std::string displayName() const;
    bool displayName(const std::string& value);

    /// Defines the automatic generation during the creation of the operation.
    /// Can be used to force or skip the generation of the new operation.
    /// By default the newly created operation will not be generated.
    /// The default value is SkipGeneration.
    AutomaticGenerationModes generationMode() const;
    bool generationMode(AutomaticGenerationModes value);

    ADSK_CAM_OPERATIONINPUT_API static const char* classType();
    ADSK_CAM_OPERATIONINPUT_API const char* objectType() const override;
    ADSK_CAM_OPERATIONINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_OPERATIONINPUT_API static const char* interfaceId() { return classType(); }

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
    virtual AutomaticGenerationModes generationMode_raw() const = 0;
    virtual bool generationMode_raw(AutomaticGenerationModes value) = 0;
    virtual void placeholderOperationInput0() {}
    virtual void placeholderOperationInput1() {}
    virtual void placeholderOperationInput2() {}
    virtual void placeholderOperationInput3() {}
    virtual void placeholderOperationInput4() {}
    virtual void placeholderOperationInput5() {}
    virtual void placeholderOperationInput6() {}
    virtual void placeholderOperationInput7() {}
    virtual void placeholderOperationInput8() {}
    virtual void placeholderOperationInput9() {}
    virtual void placeholderOperationInput10() {}
    virtual void placeholderOperationInput11() {}
    virtual void placeholderOperationInput12() {}
    virtual void placeholderOperationInput13() {}
    virtual void placeholderOperationInput14() {}
    virtual void placeholderOperationInput15() {}
    virtual void placeholderOperationInput16() {}
    virtual void placeholderOperationInput17() {}
    virtual void placeholderOperationInput18() {}
    virtual void placeholderOperationInput19() {}
    virtual void placeholderOperationInput20() {}
    virtual void placeholderOperationInput21() {}
    virtual void placeholderOperationInput22() {}
    virtual void placeholderOperationInput23() {}
    virtual void placeholderOperationInput24() {}
    virtual void placeholderOperationInput25() {}
    virtual void placeholderOperationInput26() {}
    virtual void placeholderOperationInput27() {}
    virtual void placeholderOperationInput28() {}
    virtual void placeholderOperationInput29() {}
    virtual void placeholderOperationInput30() {}
    virtual void placeholderOperationInput31() {}
    virtual void placeholderOperationInput32() {}
    virtual void placeholderOperationInput33() {}
    virtual void placeholderOperationInput34() {}
    virtual void placeholderOperationInput35() {}
    virtual void placeholderOperationInput36() {}
    virtual void placeholderOperationInput37() {}
    virtual void placeholderOperationInput38() {}
    virtual void placeholderOperationInput39() {}
    virtual void placeholderOperationInput40() {}
    virtual void placeholderOperationInput41() {}
    virtual void placeholderOperationInput42() {}
    virtual void placeholderOperationInput43() {}
    virtual void placeholderOperationInput44() {}
    virtual void placeholderOperationInput45() {}
    virtual void placeholderOperationInput46() {}
    virtual void placeholderOperationInput47() {}
    virtual void placeholderOperationInput48() {}
    virtual void placeholderOperationInput49() {}
    virtual void placeholderOperationInput50() {}
    virtual void placeholderOperationInput51() {}
    virtual void placeholderOperationInput52() {}
    virtual void placeholderOperationInput53() {}
};

// Inline wrappers

inline std::string OperationInput::strategy() const
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

inline core::Ptr<CAMParameters> OperationInput::parameters() const
{
    core::Ptr<CAMParameters> res = parameters_raw();
    return res;
}

inline core::Ptr<Tool> OperationInput::tool() const
{
    core::Ptr<Tool> res = tool_raw();
    return res;
}

inline bool OperationInput::tool(const core::Ptr<Tool>& value)
{
    return tool_raw(value.get());
}

inline core::Ptr<ToolPreset> OperationInput::toolPreset() const
{
    core::Ptr<ToolPreset> res = toolPreset_raw();
    return res;
}

inline bool OperationInput::toolPreset(const core::Ptr<ToolPreset>& value)
{
    return toolPreset_raw(value.get());
}

inline std::string OperationInput::displayName() const
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

inline bool OperationInput::displayName(const std::string& value)
{
    return displayName_raw(value.c_str());
}

inline AutomaticGenerationModes OperationInput::generationMode() const
{
    AutomaticGenerationModes res = generationMode_raw();
    return res;
}

inline bool OperationInput::generationMode(AutomaticGenerationModes value)
{
    return generationMode_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_OPERATIONINPUT_API