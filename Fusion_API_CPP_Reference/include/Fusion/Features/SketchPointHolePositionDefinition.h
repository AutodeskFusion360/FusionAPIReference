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
# ifdef __COMPILING_ADSK_FUSION_SKETCHPOINTHOLEPOSITIONDEFINITION_CPP__
# define ADSK_FUSION_SKETCHPOINTHOLEPOSITIONDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHPOINTHOLEPOSITIONDEFINITION_API
# endif
#else
# define ADSK_FUSION_SKETCHPOINTHOLEPOSITIONDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class SketchPoint;
}}

namespace adsk { namespace fusion {

/// Provides positioning information for a hole that is positioned by a sketch point.
class SketchPointHolePositionDefinition : public HolePositionDefinition {
public:

    /// Returns the sketch point that defines the center of the hole.
    core::Ptr<SketchPoint> sketchPoint() const;

    ADSK_FUSION_SKETCHPOINTHOLEPOSITIONDEFINITION_API static const char* classType();
    ADSK_FUSION_SKETCHPOINTHOLEPOSITIONDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_SKETCHPOINTHOLEPOSITIONDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHPOINTHOLEPOSITIONDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchPoint* sketchPoint_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<SketchPoint> SketchPointHolePositionDefinition::sketchPoint() const
{
    core::Ptr<SketchPoint> res = sketchPoint_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHPOINTHOLEPOSITIONDEFINITION_API