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
#include "ConstructionPlaneDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPLANETWOEDGESDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONPLANETWOEDGESDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPLANETWOEDGESDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPLANETWOEDGESDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// ConstructionPlaneTwoEdgesDefinition defines a ConstructionPlane by two co-planar
/// linear entities like edges, sketch lines or construction axis.
class ConstructionPlaneTwoEdgesDefinition : public ConstructionPlaneDefinition {
public:

    /// Gets the first linear edge, construction line, or sketch line that defines
    /// the construction plane.
    core::Ptr<core::Base> linearEntityOne() const;

    /// Gets the second linear edge, construction line, or sketch line that defines
    /// the construction plane.
    core::Ptr<core::Base> linearEntityTwo() const;

    /// Redefines the input geometry of the construction plane.
    /// linearEntityOne : The first linear edge, construction line, or sketch line that defines
    /// the construction plane.
    /// linearEntityTwo : The second linear edge, construction line, or sketch line that defines
    /// the construction plane.
    /// Returns true if successful.
    bool redefine(const core::Ptr<core::Base>& linearEntityOne, const core::Ptr<core::Base>& linearEntityTwo);

    ADSK_FUSION_CONSTRUCTIONPLANETWOEDGESDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPLANETWOEDGESDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPLANETWOEDGESDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPLANETWOEDGESDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* linearEntityOne_raw() const = 0;
    virtual core::Base* linearEntityTwo_raw() const = 0;
    virtual bool redefine_raw(core::Base* linearEntityOne, core::Base* linearEntityTwo) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ConstructionPlaneTwoEdgesDefinition::linearEntityOne() const
{
    core::Ptr<core::Base> res = linearEntityOne_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionPlaneTwoEdgesDefinition::linearEntityTwo() const
{
    core::Ptr<core::Base> res = linearEntityTwo_raw();
    return res;
}

inline bool ConstructionPlaneTwoEdgesDefinition::redefine(const core::Ptr<core::Base>& linearEntityOne, const core::Ptr<core::Base>& linearEntityTwo)
{
    bool res = redefine_raw(linearEntityOne.get(), linearEntityTwo.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPLANETWOEDGESDEFINITION_API