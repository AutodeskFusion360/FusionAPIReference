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
# ifdef __COMPILING_ADSK_FUSION_POINTHOLEPOSITIONDEFINITION_CPP__
# define ADSK_FUSION_POINTHOLEPOSITIONDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_POINTHOLEPOSITIONDEFINITION_API
# endif
#else
# define ADSK_FUSION_POINTHOLEPOSITIONDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Provides positioning information for a hole that is positioned relative to a 3D coordinate
/// point.
class PointHolePositionDefinition : public HolePositionDefinition {
public:

    /// Returns the plane that defines the orientation and start of the hole.
    core::Ptr<core::Base> planarEntity() const;

    /// Returns the coordinates defining the position of the hole.
    core::Ptr<core::Base> point() const;

    ADSK_FUSION_POINTHOLEPOSITIONDEFINITION_API static const char* classType();
    ADSK_FUSION_POINTHOLEPOSITIONDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_POINTHOLEPOSITIONDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_POINTHOLEPOSITIONDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* planarEntity_raw() const = 0;
    virtual core::Base* point_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> PointHolePositionDefinition::planarEntity() const
{
    core::Ptr<core::Base> res = planarEntity_raw();
    return res;
}

inline core::Ptr<core::Base> PointHolePositionDefinition::point() const
{
    core::Ptr<core::Base> res = point_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_POINTHOLEPOSITIONDEFINITION_API