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
#include "../SimTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_PRECHECKMESSAGE_CPP__
# define ADSK_SIM_PRECHECKMESSAGE_API XI_EXPORT
# else
# define ADSK_SIM_PRECHECKMESSAGE_API
# endif
#else
# define ADSK_SIM_PRECHECKMESSAGE_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Represents a single pre-check validation message (error or warning).
class PrecheckMessage : public core::Base {
public:

    /// The severity level of this message.
    PrecheckMessageSeverities severity() const;

    /// The text content of the message describing the issue or information.
    std::string message() const;

    /// Gets the suggested resolution descriptions (actionable steps) to fix this validation issue.
    /// Each string provides a description of an action the user can take to resolve the problem.
    /// For example: "Click here to toggle Gravity" or "Add a constraint to the load case".
    std::vector<std::string> resolutions() const;

    ADSK_SIM_PRECHECKMESSAGE_API static const char* classType();
    ADSK_SIM_PRECHECKMESSAGE_API const char* objectType() const override;
    ADSK_SIM_PRECHECKMESSAGE_API void* queryInterface(const char* id) const override;
    ADSK_SIM_PRECHECKMESSAGE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PrecheckMessageSeverities severity_raw() const = 0;
    virtual char* message_raw() const = 0;
    virtual char** resolutions_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline PrecheckMessageSeverities PrecheckMessage::severity() const
{
    PrecheckMessageSeverities res = severity_raw();
    return res;
}

inline std::string PrecheckMessage::message() const
{
    std::string res;

    char* p= message_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<std::string> PrecheckMessage::resolutions() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= resolutions_raw(s);
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
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_PRECHECKMESSAGE_API