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
#include "HolePositionDefinition.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ONEDGEHOLEPOSITIONDEFINITION_CPP__
# define ADSK_FUSION_ONEDGEHOLEPOSITIONDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_ONEDGEHOLEPOSITIONDEFINITION_API
# endif
#else
# define ADSK_FUSION_ONEDGEHOLEPOSITIONDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepEdge;
}}

namespace adsk { namespace fusion {

/// Provides positioning information for a hole that is positioned
/// on the start, end or center of an edge.
class OnEdgeHolePositionDefinition : public HolePositionDefinition {
public:

    /// Returns the plane that defines the orientation and start of the hole.
    core::Ptr<core::Base> planarEntity() const;

    /// Returns the edge the hole is positioned on.
    core::Ptr<BRepEdge> edge() const;

    /// Returns the position of the hole on the edge.
    /// The hole can be at the start, midpoint, or end of the edge.
    HoleEdgePositions position() const;

    ADSK_FUSION_ONEDGEHOLEPOSITIONDEFINITION_API static const char* classType();
    ADSK_FUSION_ONEDGEHOLEPOSITIONDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_ONEDGEHOLEPOSITIONDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ONEDGEHOLEPOSITIONDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* planarEntity_raw() const = 0;
    virtual BRepEdge* edge_raw() const = 0;
    virtual HoleEdgePositions position_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> OnEdgeHolePositionDefinition::planarEntity() const
{
    core::Ptr<core::Base> res = planarEntity_raw();
    return res;
}

inline core::Ptr<BRepEdge> OnEdgeHolePositionDefinition::edge() const
{
    core::Ptr<BRepEdge> res = edge_raw();
    return res;
}

inline HoleEdgePositions OnEdgeHolePositionDefinition::position() const
{
    HoleEdgePositions res = position_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ONEDGEHOLEPOSITIONDEFINITION_API