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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPLANEATANGLEDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONPLANEATANGLEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPLANEATANGLEDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPLANEATANGLEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class Parameter;
}}

namespace adsk { namespace fusion {

/// ConstructionPlaneAtAngleDefinition defines a ConstructionPlane by an angle around
/// a linear entity.
class ConstructionPlaneAtAngleDefinition : public ConstructionPlaneDefinition {
public:

    /// Returns a Parameter object that controls the value of the angle. You can use properties
    /// of the returned Parameter object to modify the angle.
    core::Ptr<Parameter> angle() const;

    /// Gets the linear edge, construction line, or sketch line that defines
    /// the axis of rotation for the construction plane.
    core::Ptr<core::Base> linearEntity() const;

    /// Gets the planar face or construction plane the angle for this
    /// construction plane is measured from and is parametrically dependent on.
    /// 
    /// This property is only valid for construction planes that were created using
    /// the API. When an angle construction plane is created using the user interface
    /// the plane is not defined by the user and a plane is automatically inferred by
    /// Fusion. In this case, this property will return null.
    core::Ptr<core::Base> planarEntity() const;

    /// Redefines the input geometry of the construction plane.
    /// angle : A ValueInput object that defines the angle at which to create the construction plane
    /// linearEntity : The linear edge, construction line, or sketch line that defines the axis of rotation to
    /// measure the angle about
    /// planarEntity : A plane, planar face or construction plane the angle of the construction plane is
    /// measured from
    /// Returns true if the redefinition of the plane is successful.
    bool redefine(const core::Ptr<core::ValueInput>& angle, const core::Ptr<core::Base>& linearEntity, const core::Ptr<core::Base>& planarEntity);

    ADSK_FUSION_CONSTRUCTIONPLANEATANGLEDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPLANEATANGLEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPLANEATANGLEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPLANEATANGLEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Parameter* angle_raw() const = 0;
    virtual core::Base* linearEntity_raw() const = 0;
    virtual core::Base* planarEntity_raw() const = 0;
    virtual bool redefine_raw(core::ValueInput* angle, core::Base* linearEntity, core::Base* planarEntity) = 0;
};

// Inline wrappers

inline core::Ptr<Parameter> ConstructionPlaneAtAngleDefinition::angle() const
{
    core::Ptr<Parameter> res = angle_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionPlaneAtAngleDefinition::linearEntity() const
{
    core::Ptr<core::Base> res = linearEntity_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionPlaneAtAngleDefinition::planarEntity() const
{
    core::Ptr<core::Base> res = planarEntity_raw();
    return res;
}

inline bool ConstructionPlaneAtAngleDefinition::redefine(const core::Ptr<core::ValueInput>& angle, const core::Ptr<core::Base>& linearEntity, const core::Ptr<core::Base>& planarEntity)
{
    bool res = redefine_raw(angle.get(), linearEntity.get(), planarEntity.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPLANEATANGLEDEFINITION_API