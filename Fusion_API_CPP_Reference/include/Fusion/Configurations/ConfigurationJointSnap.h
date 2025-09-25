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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONJOINTSNAP_CPP__
# define ADSK_FUSION_CONFIGURATIONJOINTSNAP_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONJOINTSNAP_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONJOINTSNAP_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// This object represents an individual joint snap that has been defined for a
/// ConfigurationJointSnapColumn. Multiple joint snaps can be defined for a column
/// and then one of those joint snaps is specified in each cell of the column.
class ConfigurationJointSnap : public core::Base {
public:

    /// Gets and sets the name of the snap.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets and sets the JointGeometry object for this snap.
    core::Ptr<core::Base> jointGeometry() const;
    bool jointGeometry(const core::Ptr<core::Base>& value);

    /// Deletes this joint snap.
    /// Returns true if the deletion was successful.
    bool deleteMe();

    ADSK_FUSION_CONFIGURATIONJOINTSNAP_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONJOINTSNAP_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONJOINTSNAP_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONJOINTSNAP_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual core::Base* jointGeometry_raw() const = 0;
    virtual bool jointGeometry_raw(core::Base* value) = 0;
    virtual bool deleteMe_raw() = 0;
};

// Inline wrappers

inline std::string ConfigurationJointSnap::name() const
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

inline bool ConfigurationJointSnap::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<core::Base> ConfigurationJointSnap::jointGeometry() const
{
    core::Ptr<core::Base> res = jointGeometry_raw();
    return res;
}

inline bool ConfigurationJointSnap::jointGeometry(const core::Ptr<core::Base>& value)
{
    return jointGeometry_raw(value.get());
}

inline bool ConfigurationJointSnap::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONJOINTSNAP_API