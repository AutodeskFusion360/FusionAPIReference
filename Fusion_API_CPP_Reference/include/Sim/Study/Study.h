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
# ifdef __COMPILING_ADSK_SIM_STUDY_CPP__
# define ADSK_SIM_STUDY_API XI_EXPORT
# else
# define ADSK_SIM_STUDY_API
# endif
#else
# define ADSK_SIM_STUDY_API XI_IMPORT
#endif

namespace adsk { namespace sim {
    class Contacts;
    class LoadCases;
    class PrecheckMessage;
    class Settings;
    class StudyMaterials;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a study inside a simulation model.
class Study : public core::Base {
public:

    /// The type of study.
    StudyTypes type() const;

    /// The name of the study as displayed in the browser.
    std::string name() const;
    bool name(const std::string& value);

    /// The LoadCases collection that provides access to existing load cases in the study.
    core::Ptr<LoadCases> loadCases() const;

    /// All settings for this study.
    core::Ptr<Settings> settings() const;

    /// Gets the current pre-check state of the study indicating whether it is ready to solve.
    PrecheckStates precheckState() const;

    /// Gets the pre-check messages (errors and warnings) for this study.
    /// Note: After fixing issues, this property must be queried again to retrieve
    /// updated messages. Stored results are not automatically refreshed.
    std::vector<core::Ptr<PrecheckMessage>> precheckMessages() const;

    /// Gets whether this study is the active study in the simulation model.
    bool isActive() const;

    /// Activates this study.
    bool activate();

    /// The Contacts collection that provides access to existing contacts in the study.
    core::Ptr<Contacts> contacts() const;

    /// Creates a copy of this study.
    /// Returns the newly created Study or null if cloning failed.
    core::Ptr<Study> clone() const;

    /// The StudyMaterials collection that provides access to the existing study materials in the study.
    core::Ptr<StudyMaterials> materials() const;

    /// Deletes this study from the simulation model.
    /// This operation is not undoable
    /// Returns true if the delete was successful.
    bool deleteMe();

    ADSK_SIM_STUDY_API static const char* classType();
    ADSK_SIM_STUDY_API const char* objectType() const override;
    ADSK_SIM_STUDY_API void* queryInterface(const char* id) const override;
    ADSK_SIM_STUDY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual StudyTypes type_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual LoadCases* loadCases_raw() const = 0;
    virtual Settings* settings_raw() const = 0;
    virtual PrecheckStates precheckState_raw() const = 0;
    virtual PrecheckMessage** precheckMessages_raw(size_t& return_size) const = 0;
    virtual bool isActive_raw() const = 0;
    virtual bool activate_raw() = 0;
    virtual Contacts* contacts_raw() const = 0;
    virtual Study* clone_raw() const = 0;
    virtual StudyMaterials* materials_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
};

// Inline wrappers

inline StudyTypes Study::type() const
{
    StudyTypes res = type_raw();
    return res;
}

inline std::string Study::name() const
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

inline bool Study::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<LoadCases> Study::loadCases() const
{
    core::Ptr<LoadCases> res = loadCases_raw();
    return res;
}

inline core::Ptr<Settings> Study::settings() const
{
    core::Ptr<Settings> res = settings_raw();
    return res;
}

inline PrecheckStates Study::precheckState() const
{
    PrecheckStates res = precheckState_raw();
    return res;
}

inline std::vector<core::Ptr<PrecheckMessage>> Study::precheckMessages() const
{
    std::vector<core::Ptr<PrecheckMessage>> res;
    size_t s;

    PrecheckMessage** p= precheckMessages_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Study::isActive() const
{
    bool res = isActive_raw();
    return res;
}

inline bool Study::activate()
{
    bool res = activate_raw();
    return res;
}

inline core::Ptr<Contacts> Study::contacts() const
{
    core::Ptr<Contacts> res = contacts_raw();
    return res;
}

inline core::Ptr<Study> Study::clone() const
{
    core::Ptr<Study> res = clone_raw();
    return res;
}

inline core::Ptr<StudyMaterials> Study::materials() const
{
    core::Ptr<StudyMaterials> res = materials_raw();
    return res;
}

inline bool Study::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_STUDY_API