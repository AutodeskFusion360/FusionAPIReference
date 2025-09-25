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
#include "OperationBase.h"
#include "../CamTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_OPERATION_CPP__
# define ADSK_CAM_OPERATION_API XI_EXPORT
# else
# define ADSK_CAM_OPERATION_API
# endif
#else
# define ADSK_CAM_OPERATION_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Tool;
    class ToolPreset;
}}

namespace adsk { namespace cam {

/// Object that represents an operation in an existing Setup, Folder or Pattern.
class Operation : public OperationBase {
public:

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets the strategy type for this operation.
    OperationStrategyTypes strategyType() const;

    /// Gets if the toolpath for this operation is currently valid. (has not become invalidated by model changes).
    bool isToolpathValid() const;

    /// Gets if the operation is being generated.
    bool isGenerating() const;

    /// Returns the parent Setup, Folder or Pattern for this operation.
    core::Ptr<core::Base> parent() const;

    /// Gets if a toolpath currently exists (has been generated) for this operation.
    bool hasToolpath() const;

    /// Gets the current state of this operation.
    OperationStates operationState() const;

    /// Gets the generation progress value for this operation.
    std::string generatingProgress() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Get or set the tool in JSON format for this operation. Adds tool to the document.
    /// DO NOT UNHIDE, API user should use tool-property with dedicated tool-object.
    std::string toolJson() const;
    bool toolJson(const std::string& value);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Get or set the id of the tool preset to be used. Must be valid for the applied tool.
    std::string toolPresetId() const;
    bool toolPresetId(const std::string& value);

    /// Get or set the tool for this operation. The document's tool library will be updated accordingly.
    /// The tool instance returned is a copy and therefore is not referenced by the operation.
    /// To change the tool of the operation, the new tool must be assigned to the operation.
    /// Setting a tool will override the current preset and will fall back to the default preset of the new tool.
    core::Ptr<Tool> tool() const;
    bool tool(const core::Ptr<Tool>& value);

    /// Get or set the tool preset to be used. Must be a valid preset of the already assigned tool. Returns null if the operation has no tool or preset.
    core::Ptr<ToolPreset> toolPreset() const;
    bool toolPreset(const core::Ptr<ToolPreset>& value);

    ADSK_CAM_OPERATION_API static const char* classType();
    ADSK_CAM_OPERATION_API const char* objectType() const override;
    ADSK_CAM_OPERATION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_OPERATION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual OperationStrategyTypes strategyType_raw() const = 0;
    virtual bool isToolpathValid_raw() const = 0;
    virtual bool isGenerating_raw() const = 0;
    virtual core::Base* parent_raw() const = 0;
    virtual bool hasToolpath_raw() const = 0;
    virtual OperationStates operationState_raw() const = 0;
    virtual char* generatingProgress_raw() const = 0;
    virtual char* toolJson_raw() const = 0;
    virtual bool toolJson_raw(const char* value) = 0;
    virtual char* toolPresetId_raw() const = 0;
    virtual bool toolPresetId_raw(const char* value) = 0;
    virtual Tool* tool_raw() const = 0;
    virtual bool tool_raw(Tool* value) = 0;
    virtual ToolPreset* toolPreset_raw() const = 0;
    virtual bool toolPreset_raw(ToolPreset* value) = 0;
    virtual void placeholderOperation0() {}
    virtual void placeholderOperation1() {}
    virtual void placeholderOperation2() {}
    virtual void placeholderOperation3() {}
    virtual void placeholderOperation4() {}
    virtual void placeholderOperation5() {}
    virtual void placeholderOperation6() {}
    virtual void placeholderOperation7() {}
    virtual void placeholderOperation8() {}
    virtual void placeholderOperation9() {}
    virtual void placeholderOperation10() {}
    virtual void placeholderOperation11() {}
    virtual void placeholderOperation12() {}
    virtual void placeholderOperation13() {}
    virtual void placeholderOperation14() {}
    virtual void placeholderOperation15() {}
    virtual void placeholderOperation16() {}
    virtual void placeholderOperation17() {}
    virtual void placeholderOperation18() {}
    virtual void placeholderOperation19() {}
    virtual void placeholderOperation20() {}
    virtual void placeholderOperation21() {}
    virtual void placeholderOperation22() {}
    virtual void placeholderOperation23() {}
    virtual void placeholderOperation24() {}
    virtual void placeholderOperation25() {}
    virtual void placeholderOperation26() {}
    virtual void placeholderOperation27() {}
    virtual void placeholderOperation28() {}
    virtual void placeholderOperation29() {}
    virtual void placeholderOperation30() {}
    virtual void placeholderOperation31() {}
    virtual void placeholderOperation32() {}
    virtual void placeholderOperation33() {}
    virtual void placeholderOperation34() {}
    virtual void placeholderOperation35() {}
    virtual void placeholderOperation36() {}
    virtual void placeholderOperation37() {}
    virtual void placeholderOperation38() {}
    virtual void placeholderOperation39() {}
    virtual void placeholderOperation40() {}
    virtual void placeholderOperation41() {}
    virtual void placeholderOperation42() {}
    virtual void placeholderOperation43() {}
    virtual void placeholderOperation44() {}
    virtual void placeholderOperation45() {}
    virtual void placeholderOperation46() {}
    virtual void placeholderOperation47() {}
    virtual void placeholderOperation48() {}
};

// Inline wrappers

inline OperationStrategyTypes Operation::strategyType() const
{
    OperationStrategyTypes res = strategyType_raw();
    return res;
}

inline bool Operation::isToolpathValid() const
{
    bool res = isToolpathValid_raw();
    return res;
}

inline bool Operation::isGenerating() const
{
    bool res = isGenerating_raw();
    return res;
}

inline core::Ptr<core::Base> Operation::parent() const
{
    core::Ptr<core::Base> res = parent_raw();
    return res;
}

inline bool Operation::hasToolpath() const
{
    bool res = hasToolpath_raw();
    return res;
}

inline OperationStates Operation::operationState() const
{
    OperationStates res = operationState_raw();
    return res;
}

inline std::string Operation::generatingProgress() const
{
    std::string res;

    char* p= generatingProgress_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Operation::toolJson() const
{
    std::string res;

    char* p= toolJson_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Operation::toolJson(const std::string& value)
{
    return toolJson_raw(value.c_str());
}

inline std::string Operation::toolPresetId() const
{
    std::string res;

    char* p= toolPresetId_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Operation::toolPresetId(const std::string& value)
{
    return toolPresetId_raw(value.c_str());
}

inline core::Ptr<Tool> Operation::tool() const
{
    core::Ptr<Tool> res = tool_raw();
    return res;
}

inline bool Operation::tool(const core::Ptr<Tool>& value)
{
    return tool_raw(value.get());
}

inline core::Ptr<ToolPreset> Operation::toolPreset() const
{
    core::Ptr<ToolPreset> res = toolPreset_raw();
    return res;
}

inline bool Operation::toolPreset(const core::Ptr<ToolPreset>& value)
{
    return toolPreset_raw(value.get());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_OPERATION_API