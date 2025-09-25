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
#include "RipFeatureDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ALONGEDGERIPFEATUREDEFINITION_CPP__
# define ADSK_FUSION_ALONGEDGERIPFEATUREDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_ALONGEDGERIPFEATUREDEFINITION_API
# endif
#else
# define ADSK_FUSION_ALONGEDGERIPFEATUREDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepEdge;
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// The definition for an along edge rip.
class AlongEdgeRipFeatureDefinition : public RipFeatureDefinition {
public:

    /// Gets and sets the input edge for an along edge rip.
    core::Ptr<BRepEdge> ripEdge() const;
    bool ripEdge(const core::Ptr<BRepEdge>& value);

    /// Gets the ModelParameter that defines the gap distance of the rip.
    /// The value can be edited by using the properties of the returned ModelParameter object.
    core::Ptr<ModelParameter> gapDistance() const;

    ADSK_FUSION_ALONGEDGERIPFEATUREDEFINITION_API static const char* classType();
    ADSK_FUSION_ALONGEDGERIPFEATUREDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_ALONGEDGERIPFEATUREDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ALONGEDGERIPFEATUREDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepEdge* ripEdge_raw() const = 0;
    virtual bool ripEdge_raw(BRepEdge* value) = 0;
    virtual ModelParameter* gapDistance_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<BRepEdge> AlongEdgeRipFeatureDefinition::ripEdge() const
{
    core::Ptr<BRepEdge> res = ripEdge_raw();
    return res;
}

inline bool AlongEdgeRipFeatureDefinition::ripEdge(const core::Ptr<BRepEdge>& value)
{
    return ripEdge_raw(value.get());
}

inline core::Ptr<ModelParameter> AlongEdgeRipFeatureDefinition::gapDistance() const
{
    core::Ptr<ModelParameter> res = gapDistance_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ALONGEDGERIPFEATUREDEFINITION_API