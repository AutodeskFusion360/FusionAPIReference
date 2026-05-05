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
# ifdef __COMPILING_ADSK_SIM_STUDYMATERIAL_CPP__
# define ADSK_SIM_STUDYMATERIAL_API XI_EXPORT
# else
# define ADSK_SIM_STUDYMATERIAL_API
# endif
#else
# define ADSK_SIM_STUDYMATERIAL_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Provides access to the study material.
class StudyMaterial : public core::Base {
public:

    /// The name of the study material as displayed in the browser.
    std::string name() const;

    /// The name of the library to which the material belongs to.
    std::string libraryName() const;

    /// Indicates whether the original design material was used or the material is overriden by the study.
    bool isModelMaterial() const;

    /// Returns the safety factor type.
    SafetyFactorTypes safetyFactorType() const;

    ADSK_SIM_STUDYMATERIAL_API static const char* classType();
    ADSK_SIM_STUDYMATERIAL_API const char* objectType() const override;
    ADSK_SIM_STUDYMATERIAL_API void* queryInterface(const char* id) const override;
    ADSK_SIM_STUDYMATERIAL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual char* libraryName_raw() const = 0;
    virtual bool isModelMaterial_raw() const = 0;
    virtual SafetyFactorTypes safetyFactorType_raw() const = 0;
};

// Inline wrappers

inline std::string StudyMaterial::name() const
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

inline std::string StudyMaterial::libraryName() const
{
    std::string res;

    char* p= libraryName_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool StudyMaterial::isModelMaterial() const
{
    bool res = isModelMaterial_raw();
    return res;
}

inline SafetyFactorTypes StudyMaterial::safetyFactorType() const
{
    SafetyFactorTypes res = safetyFactorType_raw();
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_STUDYMATERIAL_API