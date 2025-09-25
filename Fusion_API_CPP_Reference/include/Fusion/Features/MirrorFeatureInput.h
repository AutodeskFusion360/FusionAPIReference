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
# ifdef __COMPILING_ADSK_FUSION_MIRRORFEATUREINPUT_CPP__
# define ADSK_FUSION_MIRRORFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_MIRRORFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_MIRRORFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a mirror
/// feature.
class MirrorFeatureInput : public core::Base {
public:

    /// Gets and sets the entities that are mirrored. It can contain faces, features, bodies, or components.
    /// The input must all be of a single type. For example, you can't provide a body and a component but
    /// the collection must be either all bodies or all components.
    core::Ptr<core::ObjectCollection> inputEntities() const;
    bool inputEntities(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the mirror plane. This can be either a planar face or construction plane.
    core::Ptr<core::Base> mirrorPlane() const;
    bool mirrorPlane(const core::Ptr<core::Base>& value);

    /// Gets and sets the compute option when mirroring features. The default value for this is AdjustPatternCompute.
    /// This property only applies when mirroring features and is ignored in the direct modeling environment.
    PatternComputeOptions patternComputeOption() const;
    bool patternComputeOption(PatternComputeOptions value);

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

    /// Gets and sets whether the mirrored bodies should be combined with the original bodies.
    /// When true, the mirrored geometry will be Boolean unioned with the original solid or surface body(s)
    /// when they connect within the stitch tolerance defined with the stitchTolerance property. If the bodies
    /// cannot be unioned or stitched the result will be separate bodies.
    /// If any input object is not a body, then this setting is ignored.
    /// Default is false.
    bool isCombine() const;
    bool isCombine(bool value);

    /// Gets and sets the ValueInput object that defines the Stitching Tolerance (length)
    /// to use when doing a mirror and combine for surface bodies.
    core::Ptr<core::ValueInput> stitchTolerance() const;
    bool stitchTolerance(const core::Ptr<core::ValueInput>& value);

    ADSK_FUSION_MIRRORFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_MIRRORFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_MIRRORFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MIRRORFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* inputEntities_raw() const = 0;
    virtual bool inputEntities_raw(core::ObjectCollection* value) = 0;
    virtual core::Base* mirrorPlane_raw() const = 0;
    virtual bool mirrorPlane_raw(core::Base* value) = 0;
    virtual PatternComputeOptions patternComputeOption_raw() const = 0;
    virtual bool patternComputeOption_raw(PatternComputeOptions value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual bool isCombine_raw() const = 0;
    virtual bool isCombine_raw(bool value) = 0;
    virtual core::ValueInput* stitchTolerance_raw() const = 0;
    virtual bool stitchTolerance_raw(core::ValueInput* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> MirrorFeatureInput::inputEntities() const
{
    core::Ptr<core::ObjectCollection> res = inputEntities_raw();
    return res;
}

inline bool MirrorFeatureInput::inputEntities(const core::Ptr<core::ObjectCollection>& value)
{
    return inputEntities_raw(value.get());
}

inline core::Ptr<core::Base> MirrorFeatureInput::mirrorPlane() const
{
    core::Ptr<core::Base> res = mirrorPlane_raw();
    return res;
}

inline bool MirrorFeatureInput::mirrorPlane(const core::Ptr<core::Base>& value)
{
    return mirrorPlane_raw(value.get());
}

inline PatternComputeOptions MirrorFeatureInput::patternComputeOption() const
{
    PatternComputeOptions res = patternComputeOption_raw();
    return res;
}

inline bool MirrorFeatureInput::patternComputeOption(PatternComputeOptions value)
{
    return patternComputeOption_raw(value);
}

inline core::Ptr<BaseFeature> MirrorFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool MirrorFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline bool MirrorFeatureInput::isCombine() const
{
    bool res = isCombine_raw();
    return res;
}

inline bool MirrorFeatureInput::isCombine(bool value)
{
    return isCombine_raw(value);
}

inline core::Ptr<core::ValueInput> MirrorFeatureInput::stitchTolerance() const
{
    core::Ptr<core::ValueInput> res = stitchTolerance_raw();
    return res;
}

inline bool MirrorFeatureInput::stitchTolerance(const core::Ptr<core::ValueInput>& value)
{
    return stitchTolerance_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MIRRORFEATUREINPUT_API