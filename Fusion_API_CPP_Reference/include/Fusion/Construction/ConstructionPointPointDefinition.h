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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPOINTPOINTDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONPOINTPOINTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPOINTPOINTDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPOINTPOINTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The definition for a parametric construction point created using the SetbyPoint method
/// All non-parametric constructions points will return this type of definition regardless
/// of the method used to initially create them.
class ConstructionPointPointDefinition : public ConstructionPointDefinition {
public:

    /// Gets and sets the position of the point using a construction point, sketch point or
    /// vertex.
    /// Non-parametric points will always return a Point3D object
    core::Ptr<core::Base> pointEntity() const;
    bool pointEntity(const core::Ptr<core::Base>& value);

    ADSK_FUSION_CONSTRUCTIONPOINTPOINTDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPOINTPOINTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPOINTPOINTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPOINTPOINTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* pointEntity_raw() const = 0;
    virtual bool pointEntity_raw(core::Base* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ConstructionPointPointDefinition::pointEntity() const
{
    core::Ptr<core::Base> res = pointEntity_raw();
    return res;
}

inline bool ConstructionPointPointDefinition::pointEntity(const core::Ptr<core::Base>& value)
{
    return pointEntity_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPOINTPOINTDEFINITION_API