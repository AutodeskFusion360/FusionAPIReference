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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPLANEOFFSETTHROUGHPOINTDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONPLANEOFFSETTHROUGHPOINTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPLANEOFFSETTHROUGHPOINTDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPLANEOFFSETTHROUGHPOINTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Defines a construction plane that is offset from a planar face or construction plane
/// and whose offset distance is defined by a vertex, sketch point, or construction point where
/// the plane passes through the point.
class ConstructionPlaneOffsetThroughPointDefinition : public ConstructionPlaneDefinition {
public:

    /// Returns the point that controls the offset.
    core::Ptr<core::Base> point() const;

    /// Returns the planar face or construction plane this construction plane
    /// is parametrically dependent on.
    core::Ptr<core::Base> planarEntity() const;

    /// Redefines the input geometry of the construction plane.
    /// planarEntity : A planar BRepFace or ConstructionPlane that the new construction plane will be offset from.
    /// point : A BRepVertex, SketchPoint, or ConstructionPoint that defines the offset distance.
    /// Returns true is the operation is successful
    bool redefine(const core::Ptr<core::Base>& planarEntity, const core::Ptr<core::Base>& point);

    ADSK_FUSION_CONSTRUCTIONPLANEOFFSETTHROUGHPOINTDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPLANEOFFSETTHROUGHPOINTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPLANEOFFSETTHROUGHPOINTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPLANEOFFSETTHROUGHPOINTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* point_raw() const = 0;
    virtual core::Base* planarEntity_raw() const = 0;
    virtual bool redefine_raw(core::Base* planarEntity, core::Base* point) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ConstructionPlaneOffsetThroughPointDefinition::point() const
{
    core::Ptr<core::Base> res = point_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionPlaneOffsetThroughPointDefinition::planarEntity() const
{
    core::Ptr<core::Base> res = planarEntity_raw();
    return res;
}

inline bool ConstructionPlaneOffsetThroughPointDefinition::redefine(const core::Ptr<core::Base>& planarEntity, const core::Ptr<core::Base>& point)
{
    bool res = redefine_raw(planarEntity.get(), point.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPLANEOFFSETTHROUGHPOINTDEFINITION_API