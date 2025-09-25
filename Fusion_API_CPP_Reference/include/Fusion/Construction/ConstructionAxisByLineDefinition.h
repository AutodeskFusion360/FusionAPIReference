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
#include "ConstructionAxisDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONAXISBYLINEDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONAXISBYLINEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONAXISBYLINEDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONAXISBYLINEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class InfiniteLine3D;
}}

namespace adsk { namespace fusion {

/// The definition for a non-parametric construction axis. In a non-parametric design
/// all construction planes will return this type of definition regardless of how they
/// were initially created.
class ConstructionAxisByLineDefinition : public ConstructionAxisDefinition {
public:

    /// Gets and sets the infinite line that defines the position and direction of the axis
    core::Ptr<core::InfiniteLine3D> axis() const;
    bool axis(const core::Ptr<core::InfiniteLine3D>& value);

    ADSK_FUSION_CONSTRUCTIONAXISBYLINEDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONAXISBYLINEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONAXISBYLINEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONAXISBYLINEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::InfiniteLine3D* axis_raw() const = 0;
    virtual bool axis_raw(core::InfiniteLine3D* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::InfiniteLine3D> ConstructionAxisByLineDefinition::axis() const
{
    core::Ptr<core::InfiniteLine3D> res = axis_raw();
    return res;
}

inline bool ConstructionAxisByLineDefinition::axis(const core::Ptr<core::InfiniteLine3D>& value)
{
    return axis_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONAXISBYLINEDEFINITION_API