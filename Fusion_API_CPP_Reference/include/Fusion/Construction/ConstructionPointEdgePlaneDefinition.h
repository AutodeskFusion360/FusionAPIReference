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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPOINTEDGEPLANEDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONPOINTEDGEPLANEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPOINTEDGEPLANEDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPOINTEDGEPLANEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The definition for a parametric construction point created using the SetbyEdgePlane method
class ConstructionPointEdgePlaneDefinition : public ConstructionPointDefinition {
public:

    /// A linear B-Rep edge, construction axis or sketch line.
    core::Ptr<core::Base> edge() const;

    /// A plane, planar B-Rep face or construction plane.
    core::Ptr<core::Base> plane() const;

    /// Redefines the input geometry of the construction point.
    /// edge : A linear B-Rep edge, construction axis or sketch line.
    /// plane : A plane, planar B-Rep face or construction plane.
    /// Returns true if the redefinition of the Construction Point is successful.
    bool redefine(const core::Ptr<core::Base>& edge, const core::Ptr<core::Base>& plane);

    ADSK_FUSION_CONSTRUCTIONPOINTEDGEPLANEDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPOINTEDGEPLANEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPOINTEDGEPLANEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPOINTEDGEPLANEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* edge_raw() const = 0;
    virtual core::Base* plane_raw() const = 0;
    virtual bool redefine_raw(core::Base* edge, core::Base* plane) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ConstructionPointEdgePlaneDefinition::edge() const
{
    core::Ptr<core::Base> res = edge_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionPointEdgePlaneDefinition::plane() const
{
    core::Ptr<core::Base> res = plane_raw();
    return res;
}

inline bool ConstructionPointEdgePlaneDefinition::redefine(const core::Ptr<core::Base>& edge, const core::Ptr<core::Base>& plane)
{
    bool res = redefine_raw(edge.get(), plane.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPOINTEDGEPLANEDEFINITION_API