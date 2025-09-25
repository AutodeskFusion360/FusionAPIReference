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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPLANEBYPLANEDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONPLANEBYPLANEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPLANEBYPLANEDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPLANEBYPLANEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Plane;
}}

namespace adsk { namespace fusion {

/// The definition for a non-parametric construction plane. All constructions planes will
/// return this type of definition regardless of method used to initially create them.
class ConstructionPlaneByPlaneDefinition : public ConstructionPlaneDefinition {
public:

    /// Gets and sets the position of the construction plane. Setting this property
    /// is only valid for a construction plane in a direct edit design or in a base feature.
    /// Construction planes in a parametric model are parametrically controlled and cannot
    /// be directly edited.
    core::Ptr<core::Plane> plane() const;
    bool plane(const core::Ptr<core::Plane>& value);

    ADSK_FUSION_CONSTRUCTIONPLANEBYPLANEDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPLANEBYPLANEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPLANEBYPLANEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPLANEBYPLANEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Plane* plane_raw() const = 0;
    virtual bool plane_raw(core::Plane* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Plane> ConstructionPlaneByPlaneDefinition::plane() const
{
    core::Ptr<core::Plane> res = plane_raw();
    return res;
}

inline bool ConstructionPlaneByPlaneDefinition::plane(const core::Ptr<core::Plane>& value)
{
    return plane_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPLANEBYPLANEDEFINITION_API