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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SILHOUETTESPLITFEATUREINPUT_CPP__
# define ADSK_FUSION_SILHOUETTESPLITFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_SILHOUETTESPLITFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_SILHOUETTESPLITFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepBody;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a silhouette split feature.
class SilhouetteSplitFeatureInput : public core::Base {
public:

    /// Gets and sets the solid body to split.
    core::Ptr<BRepBody> targetBody() const;
    bool targetBody(const core::Ptr<BRepBody>& value);

    /// Gets and sets the entity that defines the silhouette view direction, which can be a
    /// construction axis, linear BRepEdge, planar BRepFace or a construction plane.
    core::Ptr<core::Base> viewDirection() const;
    bool viewDirection(const core::Ptr<core::Base>& value);

    /// Gets and sets the type of silhouette split operation to perform.
    SilhouetteSplitOperations operation() const;
    bool operation(SilhouetteSplitOperations value);

    /// When creating a feature that is owned by a base feature, set this property to the
    /// base feature you want to associate the new feature with. By default, this is null,
    /// meaning it will not be associated with a base feature.
    /// 
    /// Because of a current limitation, if you want to create a feature associated with a base
    /// feature, you must set this property AND call the startEdit method of the base feature,
    /// create the feature, and then call the finishEdit method of the base feature. The base
    /// feature must be in an "edit" state to be able to add any additional items to it.
    core::Ptr<BaseFeature> targetBaseFeature() const;
    bool targetBaseFeature(const core::Ptr<BaseFeature>& value);

    ADSK_FUSION_SILHOUETTESPLITFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_SILHOUETTESPLITFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_SILHOUETTESPLITFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SILHOUETTESPLITFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepBody* targetBody_raw() const = 0;
    virtual bool targetBody_raw(BRepBody* value) = 0;
    virtual core::Base* viewDirection_raw() const = 0;
    virtual bool viewDirection_raw(core::Base* value) = 0;
    virtual SilhouetteSplitOperations operation_raw() const = 0;
    virtual bool operation_raw(SilhouetteSplitOperations value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<BRepBody> SilhouetteSplitFeatureInput::targetBody() const
{
    core::Ptr<BRepBody> res = targetBody_raw();
    return res;
}

inline bool SilhouetteSplitFeatureInput::targetBody(const core::Ptr<BRepBody>& value)
{
    return targetBody_raw(value.get());
}

inline core::Ptr<core::Base> SilhouetteSplitFeatureInput::viewDirection() const
{
    core::Ptr<core::Base> res = viewDirection_raw();
    return res;
}

inline bool SilhouetteSplitFeatureInput::viewDirection(const core::Ptr<core::Base>& value)
{
    return viewDirection_raw(value.get());
}

inline SilhouetteSplitOperations SilhouetteSplitFeatureInput::operation() const
{
    SilhouetteSplitOperations res = operation_raw();
    return res;
}

inline bool SilhouetteSplitFeatureInput::operation(SilhouetteSplitOperations value)
{
    return operation_raw(value);
}

inline core::Ptr<BaseFeature> SilhouetteSplitFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool SilhouetteSplitFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SILHOUETTESPLITFEATUREINPUT_API