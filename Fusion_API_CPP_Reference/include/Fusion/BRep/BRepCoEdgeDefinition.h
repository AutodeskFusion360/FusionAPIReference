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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_BREPCOEDGEDEFINITION_CPP__
# define ADSK_FUSION_BREPCOEDGEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_BREPCOEDGEDEFINITION_API
# endif
#else
# define ADSK_FUSION_BREPCOEDGEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepEdgeDefinition;
}}

namespace adsk { namespace fusion {

/// Represents the definition of a B-Rep co-edge that can be used as input to create a BRepBody that includes this co-edge.
class BRepCoEdgeDefinition : public core::Base {
public:

    /// Gets and sets the BRepEdgeDefinition object associated with this BrepCoEdgeDefinition object.
    core::Ptr<BRepEdgeDefinition> edgeDefinition() const;
    bool edgeDefinition(const core::Ptr<BRepEdgeDefinition>& value);

    /// Gets and sets if the orientation of this BRepCoEdgeDefinition object is reversed with
    /// respect to the associated BRepEdgeDefinition object.
    bool isOpposedToEdge() const;
    bool isOpposedToEdge(bool value);

    ADSK_FUSION_BREPCOEDGEDEFINITION_API static const char* classType();
    ADSK_FUSION_BREPCOEDGEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_BREPCOEDGEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPCOEDGEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepEdgeDefinition* edgeDefinition_raw() const = 0;
    virtual bool edgeDefinition_raw(BRepEdgeDefinition* value) = 0;
    virtual bool isOpposedToEdge_raw() const = 0;
    virtual bool isOpposedToEdge_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<BRepEdgeDefinition> BRepCoEdgeDefinition::edgeDefinition() const
{
    core::Ptr<BRepEdgeDefinition> res = edgeDefinition_raw();
    return res;
}

inline bool BRepCoEdgeDefinition::edgeDefinition(const core::Ptr<BRepEdgeDefinition>& value)
{
    return edgeDefinition_raw(value.get());
}

inline bool BRepCoEdgeDefinition::isOpposedToEdge() const
{
    bool res = isOpposedToEdge_raw();
    return res;
}

inline bool BRepCoEdgeDefinition::isOpposedToEdge(bool value)
{
    return isOpposedToEdge_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPCOEDGEDEFINITION_API