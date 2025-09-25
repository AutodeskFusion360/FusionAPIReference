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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ATCENTERHOLEPOSITIONDEFINITION_CPP__
# define ADSK_FUSION_ATCENTERHOLEPOSITIONDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_ATCENTERHOLEPOSITIONDEFINITION_API
# endif
#else
# define ADSK_FUSION_ATCENTERHOLEPOSITIONDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepEdge;
}}

namespace adsk { namespace fusion {

/// Provides positioning information for a hole that is positioned at the center of a
/// circular or elliptical edge.
class AtCenterHolePositionDefinition : public HolePositionDefinition {
public:

    /// Returns the plane that defines the orientation and start of the hole.
    core::Ptr<core::Base> planarEntity() const;

    /// Returns the circular or elliptical edge the hole is centered at.
    core::Ptr<BRepEdge> centerEdge() const;

    ADSK_FUSION_ATCENTERHOLEPOSITIONDEFINITION_API static const char* classType();
    ADSK_FUSION_ATCENTERHOLEPOSITIONDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_ATCENTERHOLEPOSITIONDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ATCENTERHOLEPOSITIONDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* planarEntity_raw() const = 0;
    virtual BRepEdge* centerEdge_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> AtCenterHolePositionDefinition::planarEntity() const
{
    core::Ptr<core::Base> res = planarEntity_raw();
    return res;
}

inline core::Ptr<BRepEdge> AtCenterHolePositionDefinition::centerEdge() const
{
    core::Ptr<BRepEdge> res = centerEdge_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ATCENTERHOLEPOSITIONDEFINITION_API