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
#include "MoveFeatureDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MOVEFEATUREROTATEDEFINITION_CPP__
# define ADSK_FUSION_MOVEFEATUREROTATEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_MOVEFEATUREROTATEDEFINITION_API
# endif
#else
# define ADSK_FUSION_MOVEFEATUREROTATEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// The MoveFeatureRotateDefinition object defines a move feature described by a rotation
/// around a specified entity.
class MoveFeatureRotateDefinition : public MoveFeatureDefinition {
public:

    /// Gets and sets the linear entity that defines the axis of rotation. This can be a linear BRepEdge,
    /// ConstructionAxis, or a SketchLine. The natural direction of the entity defines a
    /// right-hand rule for the rotation direction.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> axisEntity() const;
    bool axisEntity(const core::Ptr<core::Base>& value);

    /// Gets the model parameter that controls the rotation angle. You can use properties
    /// on the returned ModelParameter object to edit the offset distance.
    core::Ptr<ModelParameter> angle() const;

    ADSK_FUSION_MOVEFEATUREROTATEDEFINITION_API static const char* classType();
    ADSK_FUSION_MOVEFEATUREROTATEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_MOVEFEATUREROTATEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MOVEFEATUREROTATEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* axisEntity_raw() const = 0;
    virtual bool axisEntity_raw(core::Base* value) = 0;
    virtual ModelParameter* angle_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MoveFeatureRotateDefinition::axisEntity() const
{
    core::Ptr<core::Base> res = axisEntity_raw();
    return res;
}

inline bool MoveFeatureRotateDefinition::axisEntity(const core::Ptr<core::Base>& value)
{
    return axisEntity_raw(value.get());
}

inline core::Ptr<ModelParameter> MoveFeatureRotateDefinition::angle() const
{
    core::Ptr<ModelParameter> res = angle_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MOVEFEATUREROTATEDEFINITION_API