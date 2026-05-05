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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_LOADCASE_CPP__
# define ADSK_SIM_LOADCASE_API XI_EXPORT
# else
# define ADSK_SIM_LOADCASE_API
# endif
#else
# define ADSK_SIM_LOADCASE_API XI_IMPORT
#endif

namespace adsk { namespace sim {
    class LoadCaseItems;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a LoadCase inside a study.
class LoadCase : public core::Base {
public:

    /// The name of the load case as displayed in the browser.
    std::string name() const;
    bool name(const std::string& value);

    /// The Constraints collection that provides access to existing constraints in the load case.
    core::Ptr<LoadCaseItems> constraints() const;

    /// The Loads collection that provides access to existing loads in the load case.
    core::Ptr<LoadCaseItems> loads() const;

    /// Gets whether this load case is the active load case in the study.
    bool isActive() const;

    /// Activates this load case.
    /// Returns true if the load case was successfully activated.
    bool activate();

    /// Creates a copy of this load case in the same study.
    /// Returns the newly created LoadCase or null if cloning failed.
    core::Ptr<LoadCase> clone() const;

    ADSK_SIM_LOADCASE_API static const char* classType();
    ADSK_SIM_LOADCASE_API const char* objectType() const override;
    ADSK_SIM_LOADCASE_API void* queryInterface(const char* id) const override;
    ADSK_SIM_LOADCASE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual LoadCaseItems* constraints_raw() const = 0;
    virtual LoadCaseItems* loads_raw() const = 0;
    virtual bool isActive_raw() const = 0;
    virtual bool activate_raw() = 0;
    virtual LoadCase* clone_raw() const = 0;
};

// Inline wrappers

inline std::string LoadCase::name() const
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

inline bool LoadCase::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<LoadCaseItems> LoadCase::constraints() const
{
    core::Ptr<LoadCaseItems> res = constraints_raw();
    return res;
}

inline core::Ptr<LoadCaseItems> LoadCase::loads() const
{
    core::Ptr<LoadCaseItems> res = loads_raw();
    return res;
}

inline bool LoadCase::isActive() const
{
    bool res = isActive_raw();
    return res;
}

inline bool LoadCase::activate()
{
    bool res = activate_raw();
    return res;
}

inline core::Ptr<LoadCase> LoadCase::clone() const
{
    core::Ptr<LoadCase> res = clone_raw();
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_LOADCASE_API