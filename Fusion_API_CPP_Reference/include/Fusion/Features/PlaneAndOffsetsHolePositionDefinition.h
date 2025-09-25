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
# ifdef __COMPILING_ADSK_FUSION_PLANEANDOFFSETSHOLEPOSITIONDEFINITION_CPP__
# define ADSK_FUSION_PLANEANDOFFSETSHOLEPOSITIONDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_PLANEANDOFFSETSHOLEPOSITIONDEFINITION_API
# endif
#else
# define ADSK_FUSION_PLANEANDOFFSETSHOLEPOSITIONDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepEdge;
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// Provides positioning information for a hole that is positioned on a plane
/// and at a distance from one or two edges.
class PlaneAndOffsetsHolePositionDefinition : public HolePositionDefinition {
public:

    /// Returns the plane that defines the orientation and start of the hole.
    core::Ptr<core::Base> planarEntity() const;

    /// The first of 2 edges the hole position is measured from. OffsetOne provides access to
    /// the model parameter controlling the offset distance.
    core::Ptr<BRepEdge> edgeOne() const;

    /// Returns the model parameter controlling the distance from the center of the hole
    /// to EdgeOne.
    core::Ptr<ModelParameter> offsetOne() const;

    /// The second of two edges the hole position is measured from. OffsetTwo provides access
    /// to the model parameter controlling the offset distance. This property can return null
    /// in the case where only one edge is used.
    core::Ptr<BRepEdge> edgeTwo() const;

    /// Returns the model parameter controlling the distance from the center of the hole
    /// to EdgeTwo. This property returns null in the case where only one edge is used.
    core::Ptr<ModelParameter> offsetTwo() const;

    ADSK_FUSION_PLANEANDOFFSETSHOLEPOSITIONDEFINITION_API static const char* classType();
    ADSK_FUSION_PLANEANDOFFSETSHOLEPOSITIONDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_PLANEANDOFFSETSHOLEPOSITIONDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PLANEANDOFFSETSHOLEPOSITIONDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* planarEntity_raw() const = 0;
    virtual BRepEdge* edgeOne_raw() const = 0;
    virtual ModelParameter* offsetOne_raw() const = 0;
    virtual BRepEdge* edgeTwo_raw() const = 0;
    virtual ModelParameter* offsetTwo_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> PlaneAndOffsetsHolePositionDefinition::planarEntity() const
{
    core::Ptr<core::Base> res = planarEntity_raw();
    return res;
}

inline core::Ptr<BRepEdge> PlaneAndOffsetsHolePositionDefinition::edgeOne() const
{
    core::Ptr<BRepEdge> res = edgeOne_raw();
    return res;
}

inline core::Ptr<ModelParameter> PlaneAndOffsetsHolePositionDefinition::offsetOne() const
{
    core::Ptr<ModelParameter> res = offsetOne_raw();
    return res;
}

inline core::Ptr<BRepEdge> PlaneAndOffsetsHolePositionDefinition::edgeTwo() const
{
    core::Ptr<BRepEdge> res = edgeTwo_raw();
    return res;
}

inline core::Ptr<ModelParameter> PlaneAndOffsetsHolePositionDefinition::offsetTwo() const
{
    core::Ptr<ModelParameter> res = offsetTwo_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PLANEANDOFFSETSHOLEPOSITIONDEFINITION_API