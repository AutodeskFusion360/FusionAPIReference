//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include "FilletEdgeSet.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ASYMMETRICFILLETEDGESET_CPP__
# define ADSK_FUSION_ASYMMETRICFILLETEDGESET_API XI_EXPORT
# else
# define ADSK_FUSION_ASYMMETRICFILLETEDGESET_API
# endif
#else
# define ADSK_FUSION_ASYMMETRICFILLETEDGESET_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// Provides access to the edges and the parameters associated with an asymmetric fillet.
class AsymmetricFilletEdgeSet : public FilletEdgeSet {
public:

    /// Gets and sets an ObjectCollection containing the BRepEdge, BRepFace, and Feature that are filleted.
    /// If the isTangentChain argument is true additional edges or faces may also get filleted if they are tangentially
    /// connected to any of the input edges or faces.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> edges() const;
    bool edges(const core::Ptr<core::ObjectCollection>& value);

    /// Returns the model parameter that controls the offset distance of the fillet in the first direction
    /// You can edit the offset by using the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> offsetOne() const;

    /// Returns the model parameter that controls the offset distance of the fillet in the second direction
    /// You can edit the offset by using the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> offsetTwo() const;

    /// Gets and sets if offsets are reversed. If false, offsetOne is applied to the first direction
    /// and offsetTwo to the second direction. Setting to true reverses this.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isFlipped() const;
    bool isFlipped(bool value);

    ADSK_FUSION_ASYMMETRICFILLETEDGESET_API static const char* classType();
    ADSK_FUSION_ASYMMETRICFILLETEDGESET_API const char* objectType() const override;
    ADSK_FUSION_ASYMMETRICFILLETEDGESET_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ASYMMETRICFILLETEDGESET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* edges_raw() const = 0;
    virtual bool edges_raw(core::ObjectCollection* value) = 0;
    virtual ModelParameter* offsetOne_raw() const = 0;
    virtual ModelParameter* offsetTwo_raw() const = 0;
    virtual bool isFlipped_raw() const = 0;
    virtual bool isFlipped_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> AsymmetricFilletEdgeSet::edges() const
{
    core::Ptr<core::ObjectCollection> res = edges_raw();
    return res;
}

inline bool AsymmetricFilletEdgeSet::edges(const core::Ptr<core::ObjectCollection>& value)
{
    return edges_raw(value.get());
}

inline core::Ptr<ModelParameter> AsymmetricFilletEdgeSet::offsetOne() const
{
    core::Ptr<ModelParameter> res = offsetOne_raw();
    return res;
}

inline core::Ptr<ModelParameter> AsymmetricFilletEdgeSet::offsetTwo() const
{
    core::Ptr<ModelParameter> res = offsetTwo_raw();
    return res;
}

inline bool AsymmetricFilletEdgeSet::isFlipped() const
{
    bool res = isFlipped_raw();
    return res;
}

inline bool AsymmetricFilletEdgeSet::isFlipped(bool value)
{
    return isFlipped_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ASYMMETRICFILLETEDGESET_API