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
# ifdef __COMPILING_ADSK_FUSION_STITCHFEATUREINPUT_CPP__
# define ADSK_FUSION_STITCHFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_STITCHFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_STITCHFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a stitch feature.
class StitchFeatureInput : public core::Base {
public:

    /// Gets and sets the surfaces to stitch together.
    core::Ptr<core::ObjectCollection> stitchSurfaces() const;
    bool stitchSurfaces(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the ValueInput object that defines the stitching tolerance. It must define a length.
    core::Ptr<core::ValueInput> tolerance() const;
    bool tolerance(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the feature operation to perform. This property value is only valid if the isSolid property returns
    /// true. Otherwise the value of this property is ignored.
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

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

    ADSK_FUSION_STITCHFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_STITCHFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_STITCHFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_STITCHFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* stitchSurfaces_raw() const = 0;
    virtual bool stitchSurfaces_raw(core::ObjectCollection* value) = 0;
    virtual core::ValueInput* tolerance_raw() const = 0;
    virtual bool tolerance_raw(core::ValueInput* value) = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> StitchFeatureInput::stitchSurfaces() const
{
    core::Ptr<core::ObjectCollection> res = stitchSurfaces_raw();
    return res;
}

inline bool StitchFeatureInput::stitchSurfaces(const core::Ptr<core::ObjectCollection>& value)
{
    return stitchSurfaces_raw(value.get());
}

inline core::Ptr<core::ValueInput> StitchFeatureInput::tolerance() const
{
    core::Ptr<core::ValueInput> res = tolerance_raw();
    return res;
}

inline bool StitchFeatureInput::tolerance(const core::Ptr<core::ValueInput>& value)
{
    return tolerance_raw(value.get());
}

inline FeatureOperations StitchFeatureInput::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool StitchFeatureInput::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline core::Ptr<BaseFeature> StitchFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool StitchFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_STITCHFEATUREINPUT_API