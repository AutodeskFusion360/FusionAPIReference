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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPLANEDISTANCEONPATHDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONPLANEDISTANCEONPATHDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPLANEDISTANCEONPATHDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPLANEDISTANCEONPATHDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class Parameter;
}}

namespace adsk { namespace fusion {

/// ConstructionDistanceOnPathDefinition defines a ConstructionPlane normal to an edge or
/// sketch profile at a specified position along the path defined by the edge or sketch profile.
class ConstructionPlaneDistanceOnPathDefinition : public ConstructionPlaneDefinition {
public:

    /// Gets the sketch curve, edge, or a profile object.
    core::Ptr<core::Base> pathEntity() const;

    /// Redefines the input defining the construction plane.
    /// pathEntity : The sketch curve, edge, or a profile object
    /// distance : The ValueInput object that defines the distance along the path
    /// Returns true if the redefinition of the plane is successful.
    bool redefine(const core::Ptr<core::Base>& pathEntity, const core::Ptr<core::ValueInput>& distance);

    /// Gets the distance along the path.
    core::Ptr<Parameter> distance() const;

    ADSK_FUSION_CONSTRUCTIONPLANEDISTANCEONPATHDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPLANEDISTANCEONPATHDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPLANEDISTANCEONPATHDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPLANEDISTANCEONPATHDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* pathEntity_raw() const = 0;
    virtual bool redefine_raw(core::Base* pathEntity, core::ValueInput* distance) = 0;
    virtual Parameter* distance_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ConstructionPlaneDistanceOnPathDefinition::pathEntity() const
{
    core::Ptr<core::Base> res = pathEntity_raw();
    return res;
}

inline bool ConstructionPlaneDistanceOnPathDefinition::redefine(const core::Ptr<core::Base>& pathEntity, const core::Ptr<core::ValueInput>& distance)
{
    bool res = redefine_raw(pathEntity.get(), distance.get());
    return res;
}

inline core::Ptr<Parameter> ConstructionPlaneDistanceOnPathDefinition::distance() const
{
    core::Ptr<Parameter> res = distance_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPLANEDISTANCEONPATHDEFINITION_API