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
# ifdef __COMPILING_ADSK_FUSION_MOVEFEATUREFREEMOVEDEFINITION_CPP__
# define ADSK_FUSION_MOVEFEATUREFREEMOVEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_MOVEFEATUREFREEMOVEDEFINITION_API
# endif
#else
# define ADSK_FUSION_MOVEFEATUREFREEMOVEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
}}

namespace adsk { namespace fusion {

/// The MoveFeatureFreeMoveDefinition object defines a move feature described by a transformation matrix.
class MoveFeatureFreeMoveDefinition : public MoveFeatureDefinition {
public:

    /// Gets and sets the transform that's applied to the face or body.
    /// The matrix must be an orthogonal matrix; that is the axes are
    /// perpendicular to each other and there isn't any scaling or mirroring defined.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Matrix3D> transform() const;
    bool transform(const core::Ptr<core::Matrix3D>& value);

    ADSK_FUSION_MOVEFEATUREFREEMOVEDEFINITION_API static const char* classType();
    ADSK_FUSION_MOVEFEATUREFREEMOVEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_MOVEFEATUREFREEMOVEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MOVEFEATUREFREEMOVEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Matrix3D* transform_raw() const = 0;
    virtual bool transform_raw(core::Matrix3D* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Matrix3D> MoveFeatureFreeMoveDefinition::transform() const
{
    core::Ptr<core::Matrix3D> res = transform_raw();
    return res;
}

inline bool MoveFeatureFreeMoveDefinition::transform(const core::Ptr<core::Matrix3D>& value)
{
    return transform_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MOVEFEATUREFREEMOVEDEFINITION_API