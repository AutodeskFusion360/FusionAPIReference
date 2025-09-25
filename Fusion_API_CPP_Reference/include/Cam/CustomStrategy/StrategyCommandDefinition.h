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
# ifdef __COMPILING_ADSK_CAM_STRATEGYCOMMANDDEFINITION_CPP__
# define ADSK_CAM_STRATEGYCOMMANDDEFINITION_API XI_EXPORT
# else
# define ADSK_CAM_STRATEGYCOMMANDDEFINITION_API
# endif
#else
# define ADSK_CAM_STRATEGYCOMMANDDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Holds the UI definitions of a custom strategy.
class StrategyCommandDefinition : public core::Base {
public:

    /// Creates a new command definition object.
    static core::Ptr<StrategyCommandDefinition> create();

    /// The tab in which the new command should be placed in. When using a custom tab, the tab needs to be created in the addin first.
    /// If left empty, the command will be added to all panels of the given panel name below.
    /// Specifying the name will add the command only in the panel of that tab.
    /// Empty by default.
    std::string tabName() const;
    bool tabName(const std::string& value);

    /// The panel in which the new command should be placed in.
    /// When using a custom panel, the panel needs to be created in the addin first.
    std::string panelName() const;
    bool panelName(const std::string& value);

    /// The command to the left of the new command in the toolbar if promoted, or below the new command in the expanded command list.
    /// Empty by default.
    std::string commandBefore() const;
    bool commandBefore(const std::string& value);

    ADSK_CAM_STRATEGYCOMMANDDEFINITION_API static const char* classType();
    ADSK_CAM_STRATEGYCOMMANDDEFINITION_API const char* objectType() const override;
    ADSK_CAM_STRATEGYCOMMANDDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_STRATEGYCOMMANDDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_STRATEGYCOMMANDDEFINITION_API static StrategyCommandDefinition* create_raw();
    virtual char* tabName_raw() const = 0;
    virtual bool tabName_raw(const char* value) = 0;
    virtual char* panelName_raw() const = 0;
    virtual bool panelName_raw(const char* value) = 0;
    virtual char* commandBefore_raw() const = 0;
    virtual bool commandBefore_raw(const char* value) = 0;
};

// Inline wrappers

inline core::Ptr<StrategyCommandDefinition> StrategyCommandDefinition::create()
{
    core::Ptr<StrategyCommandDefinition> res = create_raw();
    return res;
}

inline std::string StrategyCommandDefinition::tabName() const
{
    std::string res;

    char* p= tabName_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool StrategyCommandDefinition::tabName(const std::string& value)
{
    return tabName_raw(value.c_str());
}

inline std::string StrategyCommandDefinition::panelName() const
{
    std::string res;

    char* p= panelName_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool StrategyCommandDefinition::panelName(const std::string& value)
{
    return panelName_raw(value.c_str());
}

inline std::string StrategyCommandDefinition::commandBefore() const
{
    std::string res;

    char* p= commandBefore_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool StrategyCommandDefinition::commandBefore(const std::string& value)
{
    return commandBefore_raw(value.c_str());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_STRATEGYCOMMANDDEFINITION_API