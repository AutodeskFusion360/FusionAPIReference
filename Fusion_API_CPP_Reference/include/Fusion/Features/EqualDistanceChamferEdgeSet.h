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
#include "ChamferEdgeSet.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_EQUALDISTANCECHAMFEREDGESET_CPP__
# define ADSK_FUSION_EQUALDISTANCECHAMFEREDGESET_API XI_EXPORT
# else
# define ADSK_FUSION_EQUALDISTANCECHAMFEREDGESET_API
# endif
#else
# define ADSK_FUSION_EQUALDISTANCECHAMFEREDGESET_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// Provides access to the edges and the parameter associated with a equal distance offset chamfer.
class EqualDistanceChamferEdgeSet : public ChamferEdgeSet {
public:

    /// Gets and sets the edges that will be chamfered. This collection can contain BRepEdge, BRepFace,
    /// and Feature objects. If BRepFace or Feature are objects are provided, all of the edges associated
    /// with those objects will be chamfered.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> edges() const;
    bool edges(const core::Ptr<core::ObjectCollection>& value);

    /// Returns the model parameter that controls the offset distance of the chamfer. You can edit
    /// the distance by using the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> distance() const;

    ADSK_FUSION_EQUALDISTANCECHAMFEREDGESET_API static const char* classType();
    ADSK_FUSION_EQUALDISTANCECHAMFEREDGESET_API const char* objectType() const override;
    ADSK_FUSION_EQUALDISTANCECHAMFEREDGESET_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_EQUALDISTANCECHAMFEREDGESET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* edges_raw() const = 0;
    virtual bool edges_raw(core::ObjectCollection* value) = 0;
    virtual ModelParameter* distance_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> EqualDistanceChamferEdgeSet::edges() const
{
    core::Ptr<core::ObjectCollection> res = edges_raw();
    return res;
}

inline bool EqualDistanceChamferEdgeSet::edges(const core::Ptr<core::ObjectCollection>& value)
{
    return edges_raw(value.get());
}

inline core::Ptr<ModelParameter> EqualDistanceChamferEdgeSet::distance() const
{
    core::Ptr<ModelParameter> res = distance_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_EQUALDISTANCECHAMFEREDGESET_API