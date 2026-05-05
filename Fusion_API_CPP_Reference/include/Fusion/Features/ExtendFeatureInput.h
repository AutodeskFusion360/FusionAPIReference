//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
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
# ifdef __COMPILING_ADSK_FUSION_EXTENDFEATUREINPUT_CPP__
# define ADSK_FUSION_EXTENDFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_EXTENDFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_EXTENDFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of an extend feature.
class ExtendFeatureInput : public core::Base {
public:

    /// Gets and sets the edges to extend
    core::Ptr<core::ObjectCollection> edges() const;
    bool edges(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the ValueInput object that defines the extend distance
    core::Ptr<core::ValueInput> distance() const;
    bool distance(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets surface extend type to use
    SurfaceExtendTypes extendType() const;
    bool extendType(SurfaceExtendTypes value);

    /// Gets and sets if all edges that are tangent or curvature continuous, and end point connected, will be found
    /// automatically and extended.
    bool isChainingEnabled() const;
    bool isChainingEnabled(bool value);

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

    /// Gets and sets surface extend alignment to use.
    SurfaceExtendAlignment extendAlignment() const;
    bool extendAlignment(SurfaceExtendAlignment value);

    ADSK_FUSION_EXTENDFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_EXTENDFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_EXTENDFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_EXTENDFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* edges_raw() const = 0;
    virtual bool edges_raw(core::ObjectCollection* value) = 0;
    virtual core::ValueInput* distance_raw() const = 0;
    virtual bool distance_raw(core::ValueInput* value) = 0;
    virtual SurfaceExtendTypes extendType_raw() const = 0;
    virtual bool extendType_raw(SurfaceExtendTypes value) = 0;
    virtual bool isChainingEnabled_raw() const = 0;
    virtual bool isChainingEnabled_raw(bool value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual SurfaceExtendAlignment extendAlignment_raw() const = 0;
    virtual bool extendAlignment_raw(SurfaceExtendAlignment value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> ExtendFeatureInput::edges() const
{
    core::Ptr<core::ObjectCollection> res = edges_raw();
    return res;
}

inline bool ExtendFeatureInput::edges(const core::Ptr<core::ObjectCollection>& value)
{
    return edges_raw(value.get());
}

inline core::Ptr<core::ValueInput> ExtendFeatureInput::distance() const
{
    core::Ptr<core::ValueInput> res = distance_raw();
    return res;
}

inline bool ExtendFeatureInput::distance(const core::Ptr<core::ValueInput>& value)
{
    return distance_raw(value.get());
}

inline SurfaceExtendTypes ExtendFeatureInput::extendType() const
{
    SurfaceExtendTypes res = extendType_raw();
    return res;
}

inline bool ExtendFeatureInput::extendType(SurfaceExtendTypes value)
{
    return extendType_raw(value);
}

inline bool ExtendFeatureInput::isChainingEnabled() const
{
    bool res = isChainingEnabled_raw();
    return res;
}

inline bool ExtendFeatureInput::isChainingEnabled(bool value)
{
    return isChainingEnabled_raw(value);
}

inline core::Ptr<BaseFeature> ExtendFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool ExtendFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline SurfaceExtendAlignment ExtendFeatureInput::extendAlignment() const
{
    SurfaceExtendAlignment res = extendAlignment_raw();
    return res;
}

inline bool ExtendFeatureInput::extendAlignment(SurfaceExtendAlignment value)
{
    return extendAlignment_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_EXTENDFEATUREINPUT_API