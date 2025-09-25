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
#include "ConstructionAxisDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONAXISNORMALTOFACEATPOINTDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONAXISNORMALTOFACEATPOINTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONAXISNORMALTOFACEATPOINTDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONAXISNORMALTOFACEATPOINTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The definition for a parametric construction axis created using the
/// SetByNormalToFaceAtPoint method
class ConstructionAxisNormalToFaceAtPointDefinition : public ConstructionAxisDefinition {
public:

    /// Gets the face the axis is normal to
    core::Ptr<core::Base> face() const;

    /// Gets the point that positions the axis
    core::Ptr<core::Base> pointEntity() const;

    /// Redefines the input geometry of the construction axis.
    /// face : The face the axis is normal to
    /// pointEntity : The point that positions the axis
    /// Returns true if the redefinition of the construction axis is successful.
    bool redefine(const core::Ptr<core::Base>& face, const core::Ptr<core::Base>& pointEntity);

    ADSK_FUSION_CONSTRUCTIONAXISNORMALTOFACEATPOINTDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONAXISNORMALTOFACEATPOINTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONAXISNORMALTOFACEATPOINTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONAXISNORMALTOFACEATPOINTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* face_raw() const = 0;
    virtual core::Base* pointEntity_raw() const = 0;
    virtual bool redefine_raw(core::Base* face, core::Base* pointEntity) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ConstructionAxisNormalToFaceAtPointDefinition::face() const
{
    core::Ptr<core::Base> res = face_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionAxisNormalToFaceAtPointDefinition::pointEntity() const
{
    core::Ptr<core::Base> res = pointEntity_raw();
    return res;
}

inline bool ConstructionAxisNormalToFaceAtPointDefinition::redefine(const core::Ptr<core::Base>& face, const core::Ptr<core::Base>& pointEntity)
{
    bool res = redefine_raw(face.get(), pointEntity.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONAXISNORMALTOFACEATPOINTDEFINITION_API