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
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_RENDERENVIRONMENT_CPP__
# define ADSK_FUSION_RENDERENVIRONMENT_API XI_EXPORT
# else
# define ADSK_FUSION_RENDERENVIRONMENT_API
# endif
#else
# define ADSK_FUSION_RENDERENVIRONMENT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// A render environment that is used when defining the scene for rendering. You see these
/// in the user interface in the "Environment Library" tab of the "Scene Settings" dialog.
/// Use this with the backgroundEnvironment property of the SceneSettings object to set
/// a render environment. For a custom render environment, use the loadCustomEnvironment
/// method to statically create a custom environment and assign it to the backgroundEnvironment
/// property.
class RenderEnvironment : public core::Base {
public:

    /// Statically creates a RenderEnvironment which can be used to set the environment for
    /// a scene using the SceneSettings.backgroundEnvironment property.
    /// fullFilename : 
    /// 
    static core::Ptr<RenderEnvironment> loadCustomEnvironment(const std::string& fullFilename);

    /// Returns true if this environment is a custom environment.
    bool isCustomEnvironment() const;

    /// The name of the environment.
    std::string name() const;

    /// The internal ID of the environment.
    std::string id() const;

    ADSK_FUSION_RENDERENVIRONMENT_API static const char* classType();
    ADSK_FUSION_RENDERENVIRONMENT_API const char* objectType() const override;
    ADSK_FUSION_RENDERENVIRONMENT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RENDERENVIRONMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_RENDERENVIRONMENT_API static RenderEnvironment* loadCustomEnvironment_raw(const char* fullFilename);
    virtual bool isCustomEnvironment_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual char* id_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<RenderEnvironment> RenderEnvironment::loadCustomEnvironment(const std::string& fullFilename)
{
    core::Ptr<RenderEnvironment> res = loadCustomEnvironment_raw(fullFilename.c_str());
    return res;
}

inline bool RenderEnvironment::isCustomEnvironment() const
{
    bool res = isCustomEnvironment_raw();
    return res;
}

inline std::string RenderEnvironment::name() const
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

inline std::string RenderEnvironment::id() const
{
    std::string res;

    char* p= id_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RENDERENVIRONMENT_API