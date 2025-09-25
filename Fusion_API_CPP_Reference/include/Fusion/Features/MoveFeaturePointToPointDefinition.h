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
# ifdef __COMPILING_ADSK_FUSION_MOVEFEATUREPOINTTOPOINTDEFINITION_CPP__
# define ADSK_FUSION_MOVEFEATUREPOINTTOPOINTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_MOVEFEATUREPOINTTOPOINTDEFINITION_API
# endif
#else
# define ADSK_FUSION_MOVEFEATUREPOINTTOPOINTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The MoveFeaturePointToPointDefinition object defines a move feature described by the
/// translation from one point to another.
class MoveFeaturePointToPointDefinition : public MoveFeatureDefinition {
public:

    /// Gets and sets the first point that defines the start position of the move.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> originPoint() const;
    bool originPoint(const core::Ptr<core::Base>& value);

    /// Gets and sets the second point that defines the direction and distance of the move.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> targetPoint() const;
    bool targetPoint(const core::Ptr<core::Base>& value);

    ADSK_FUSION_MOVEFEATUREPOINTTOPOINTDEFINITION_API static const char* classType();
    ADSK_FUSION_MOVEFEATUREPOINTTOPOINTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_MOVEFEATUREPOINTTOPOINTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MOVEFEATUREPOINTTOPOINTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* originPoint_raw() const = 0;
    virtual bool originPoint_raw(core::Base* value) = 0;
    virtual core::Base* targetPoint_raw() const = 0;
    virtual bool targetPoint_raw(core::Base* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MoveFeaturePointToPointDefinition::originPoint() const
{
    core::Ptr<core::Base> res = originPoint_raw();
    return res;
}

inline bool MoveFeaturePointToPointDefinition::originPoint(const core::Ptr<core::Base>& value)
{
    return originPoint_raw(value.get());
}

inline core::Ptr<core::Base> MoveFeaturePointToPointDefinition::targetPoint() const
{
    core::Ptr<core::Base> res = targetPoint_raw();
    return res;
}

inline bool MoveFeaturePointToPointDefinition::targetPoint(const core::Ptr<core::Base>& value)
{
    return targetPoint_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MOVEFEATUREPOINTTOPOINTDEFINITION_API