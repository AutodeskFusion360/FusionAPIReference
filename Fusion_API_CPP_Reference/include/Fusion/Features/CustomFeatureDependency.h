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
# ifdef __COMPILING_ADSK_FUSION_CUSTOMFEATUREDEPENDENCY_CPP__
# define ADSK_FUSION_CUSTOMFEATUREDEPENDENCY_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMFEATUREDEPENDENCY_API
# endif
#else
# define ADSK_FUSION_CUSTOMFEATUREDEPENDENCY_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class CustomFeature;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A custom feature dependency defines a dependency the custom feature has on an entity
/// outside the custom feature. For example, a feature might be dependent on a face or a
/// point and if those entities are modified the custom feature needs to recompute to be
/// up to date.
class CustomFeatureDependency : public core::Base {
public:

    /// Returns the ID of this custom feature dependency.
    std::string id() const;

    /// Gets and sets the entity associated with this dependency.
    core::Ptr<core::Base> entity() const;
    bool entity(const core::Ptr<core::Base>& value);

    /// Deletes this dependency from the custom feature.
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// Returns the custom feature this dependency is associated with.
    core::Ptr<CustomFeature> parentCustomFeature() const;

    ADSK_FUSION_CUSTOMFEATUREDEPENDENCY_API static const char* classType();
    ADSK_FUSION_CUSTOMFEATUREDEPENDENCY_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMFEATUREDEPENDENCY_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMFEATUREDEPENDENCY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* id_raw() const = 0;
    virtual core::Base* entity_raw() const = 0;
    virtual bool entity_raw(core::Base* value) = 0;
    virtual bool deleteMe_raw() = 0;
    virtual CustomFeature* parentCustomFeature_raw() const = 0;
};

// Inline wrappers

inline std::string CustomFeatureDependency::id() const
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

inline core::Ptr<core::Base> CustomFeatureDependency::entity() const
{
    core::Ptr<core::Base> res = entity_raw();
    return res;
}

inline bool CustomFeatureDependency::entity(const core::Ptr<core::Base>& value)
{
    return entity_raw(value.get());
}

inline bool CustomFeatureDependency::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<CustomFeature> CustomFeatureDependency::parentCustomFeature() const
{
    core::Ptr<CustomFeature> res = parentCustomFeature_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMFEATUREDEPENDENCY_API