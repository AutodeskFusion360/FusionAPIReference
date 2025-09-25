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
# ifdef __COMPILING_ADSK_FUSION_MOVEFEATURETRANSLATEALONGENTITYDEFINITION_CPP__
# define ADSK_FUSION_MOVEFEATURETRANSLATEALONGENTITYDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_MOVEFEATURETRANSLATEALONGENTITYDEFINITION_API
# endif
#else
# define ADSK_FUSION_MOVEFEATURETRANSLATEALONGENTITYDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// The MoveFeatureTranslateAlongEntityDefinition object defines a move feature described by a
/// translation in the direction defined by a specified entity.
class MoveFeatureTranslateAlongEntityDefinition : public MoveFeatureDefinition {
public:

    /// Gets and sets the linear entity that defines the direction of the move. This can be a linear BRepEdge,
    /// ConstructionAxis, or a SketchLine. The entity defines the direction, not the distance.
    /// The natural direction of the entity defines the translation direction.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> linearEntity() const;
    bool linearEntity(const core::Ptr<core::Base>& value);

    /// Gets the model parameter that controls the offset distance. You can use properties
    /// on the returned ModelParameter object to edit the offset distance.
    core::Ptr<ModelParameter> distance() const;

    ADSK_FUSION_MOVEFEATURETRANSLATEALONGENTITYDEFINITION_API static const char* classType();
    ADSK_FUSION_MOVEFEATURETRANSLATEALONGENTITYDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_MOVEFEATURETRANSLATEALONGENTITYDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MOVEFEATURETRANSLATEALONGENTITYDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* linearEntity_raw() const = 0;
    virtual bool linearEntity_raw(core::Base* value) = 0;
    virtual ModelParameter* distance_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MoveFeatureTranslateAlongEntityDefinition::linearEntity() const
{
    core::Ptr<core::Base> res = linearEntity_raw();
    return res;
}

inline bool MoveFeatureTranslateAlongEntityDefinition::linearEntity(const core::Ptr<core::Base>& value)
{
    return linearEntity_raw(value.get());
}

inline core::Ptr<ModelParameter> MoveFeatureTranslateAlongEntityDefinition::distance() const
{
    core::Ptr<ModelParameter> res = distance_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MOVEFEATURETRANSLATEALONGENTITYDEFINITION_API