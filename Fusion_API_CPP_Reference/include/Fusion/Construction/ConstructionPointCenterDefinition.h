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
#include "ConstructionPointDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPOINTCENTERDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONPOINTCENTERDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPOINTCENTERDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPOINTCENTERDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The definition for a parametric construction point created using the SetbyCenter method
class ConstructionPointCenterDefinition : public ConstructionPointDefinition {
public:

    /// Gets and sets the spherical face (sphere or torus), circular edge or sketch arc/circle
    /// whose center defines the location for the construction point.
    core::Ptr<core::Base> circularEntity() const;
    bool circularEntity(const core::Ptr<core::Base>& value);

    ADSK_FUSION_CONSTRUCTIONPOINTCENTERDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPOINTCENTERDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPOINTCENTERDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPOINTCENTERDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* circularEntity_raw() const = 0;
    virtual bool circularEntity_raw(core::Base* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ConstructionPointCenterDefinition::circularEntity() const
{
    core::Ptr<core::Base> res = circularEntity_raw();
    return res;
}

inline bool ConstructionPointCenterDefinition::circularEntity(const core::Ptr<core::Base>& value)
{
    return circularEntity_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPOINTCENTERDEFINITION_API