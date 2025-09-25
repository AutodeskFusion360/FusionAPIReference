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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONAXISPERPENDICULARATPOINTDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONAXISPERPENDICULARATPOINTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONAXISPERPENDICULARATPOINTDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONAXISPERPENDICULARATPOINTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
}}

namespace adsk { namespace fusion {

/// The definition for a parametric construction axis created using the
/// SetByPerpendicularAtPoint method
class ConstructionAxisPerpendicularAtPointDefinition : public ConstructionAxisDefinition {
public:

    /// Returns the face the construction axis is perpendicular to.
    core::Ptr<BRepFace> face() const;

    /// Returns the point (construction or sketch point) that positions the axis.
    core::Ptr<core::Base> point() const;

    /// Redefines the input geometry of the construction axis.
    /// face : The face (BRepFace object) to create the axis perpendicular to.
    /// pointEntity : The point (sketch point, vertex, construction point) used to position the axis.
    /// Returns true if the redefinition of the axis is successful.
    bool redefine(const core::Ptr<BRepFace>& face, const core::Ptr<core::Base>& pointEntity);

    ADSK_FUSION_CONSTRUCTIONAXISPERPENDICULARATPOINTDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONAXISPERPENDICULARATPOINTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONAXISPERPENDICULARATPOINTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONAXISPERPENDICULARATPOINTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFace* face_raw() const = 0;
    virtual core::Base* point_raw() const = 0;
    virtual bool redefine_raw(BRepFace* face, core::Base* pointEntity) = 0;
};

// Inline wrappers

inline core::Ptr<BRepFace> ConstructionAxisPerpendicularAtPointDefinition::face() const
{
    core::Ptr<BRepFace> res = face_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionAxisPerpendicularAtPointDefinition::point() const
{
    core::Ptr<core::Base> res = point_raw();
    return res;
}

inline bool ConstructionAxisPerpendicularAtPointDefinition::redefine(const core::Ptr<BRepFace>& face, const core::Ptr<core::Base>& pointEntity)
{
    bool res = redefine_raw(face.get(), pointEntity.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONAXISPERPENDICULARATPOINTDEFINITION_API