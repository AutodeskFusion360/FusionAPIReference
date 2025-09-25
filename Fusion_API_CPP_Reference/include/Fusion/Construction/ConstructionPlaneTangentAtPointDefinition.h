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
#include "ConstructionPlaneDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPLANETANGENTATPOINTDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONPLANETANGENTATPOINTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPLANETANGENTATPOINTDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPLANETANGENTATPOINTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
}}

namespace adsk { namespace fusion {

/// ConstructionPlaneTangentAtPointDefinition defines a ConstructionPlane tangent to a
/// face and aligned to a point.
class ConstructionPlaneTangentAtPointDefinition : public ConstructionPlaneDefinition {
public:

    /// Gets the tangent face.
    core::Ptr<BRepFace> tangentFace() const;

    /// Gets the point (sketch point, vertex, construction point) used to align the plane.
    core::Ptr<core::Base> pointEntity() const;

    /// Redefines the input geometry of the construction plane.
    /// tangentFace : The face to create the plane tangent to
    /// pointEntity : The point (sketch point, vertex, construction point) used to align the plane.
    /// Returns true if the redefinition of the plane is successful.
    bool redefine(const core::Ptr<core::Base>& tangentFace, const core::Ptr<core::Base>& pointEntity);

    ADSK_FUSION_CONSTRUCTIONPLANETANGENTATPOINTDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPLANETANGENTATPOINTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPLANETANGENTATPOINTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPLANETANGENTATPOINTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFace* tangentFace_raw() const = 0;
    virtual core::Base* pointEntity_raw() const = 0;
    virtual bool redefine_raw(core::Base* tangentFace, core::Base* pointEntity) = 0;
};

// Inline wrappers

inline core::Ptr<BRepFace> ConstructionPlaneTangentAtPointDefinition::tangentFace() const
{
    core::Ptr<BRepFace> res = tangentFace_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionPlaneTangentAtPointDefinition::pointEntity() const
{
    core::Ptr<core::Base> res = pointEntity_raw();
    return res;
}

inline bool ConstructionPlaneTangentAtPointDefinition::redefine(const core::Ptr<core::Base>& tangentFace, const core::Ptr<core::Base>& pointEntity)
{
    bool res = redefine_raw(tangentFace.get(), pointEntity.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPLANETANGENTATPOINTDEFINITION_API