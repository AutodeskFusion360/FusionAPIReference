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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPLANETANGENTDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONPLANETANGENTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPLANETANGENTDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPLANETANGENTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class Parameter;
}}

namespace adsk { namespace fusion {

/// ConstructionPlaneTangentDefinition defines a ConstructionPlane tangent to a cylindrical or conical
/// face at a point.
class ConstructionPlaneTangentDefinition : public ConstructionPlaneDefinition {
public:

    /// Returns a Value object that for a transient definition provides the current
    /// assigned value. For a definition associated with a construction plane, it
    /// provides access to the associated parameter controlling the angle.
    core::Ptr<Parameter> angle() const;

    /// Gets the cylindrical or conical face that the construction plane
    /// is tangent to.
    core::Ptr<core::Base> tangentFace() const;

    /// Gets the planar face or construction plane the angle for this
    /// construction plane is measured from and is parametrically dependent on.
    core::Ptr<core::Base> planarEntity() const;

    /// Redefines the input geometry of the construction plane.
    /// angle : A Value object that defines the angle of the construction plane
    /// tangentFace : The cylindrical or conical face that the construction plane is tangent to.
    /// planarEntity : The planar face or construction plane the angle for this
    /// construction plane is measured from
    /// Returns true if the redefinition of the plane is successful.
    bool redefine(const core::Ptr<core::ValueInput>& angle, const core::Ptr<core::Base>& tangentFace, const core::Ptr<core::Base>& planarEntity);

    ADSK_FUSION_CONSTRUCTIONPLANETANGENTDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPLANETANGENTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPLANETANGENTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPLANETANGENTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Parameter* angle_raw() const = 0;
    virtual core::Base* tangentFace_raw() const = 0;
    virtual core::Base* planarEntity_raw() const = 0;
    virtual bool redefine_raw(core::ValueInput* angle, core::Base* tangentFace, core::Base* planarEntity) = 0;
};

// Inline wrappers

inline core::Ptr<Parameter> ConstructionPlaneTangentDefinition::angle() const
{
    core::Ptr<Parameter> res = angle_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionPlaneTangentDefinition::tangentFace() const
{
    core::Ptr<core::Base> res = tangentFace_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionPlaneTangentDefinition::planarEntity() const
{
    core::Ptr<core::Base> res = planarEntity_raw();
    return res;
}

inline bool ConstructionPlaneTangentDefinition::redefine(const core::Ptr<core::ValueInput>& angle, const core::Ptr<core::Base>& tangentFace, const core::Ptr<core::Base>& planarEntity)
{
    bool res = redefine_raw(angle.get(), tangentFace.get(), planarEntity.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPLANETANGENTDEFINITION_API