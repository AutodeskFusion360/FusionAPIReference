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
# ifdef __COMPILING_ADSK_FUSION_CIRCULARPATTERNFEATUREINPUT_CPP__
# define ADSK_FUSION_CIRCULARPATTERNFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_CIRCULARPATTERNFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_CIRCULARPATTERNFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a circular pattern
/// feature.
class CircularPatternFeatureInput : public core::Base {
public:

    /// Gets and sets the input entities. The collection can contain faces, features, bodies or occurrences.
    /// All of the entities must be of a single type. For example, it can't contain features and occurrences
    /// but only features or occurrences.
    core::Ptr<core::ObjectCollection> inputEntities() const;
    bool inputEntities(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the axis of circular pattern. This can be a sketch line, linear edge,
    /// construction axis, an edge/sketch curve that defines an axis (circle, etc.) or a face that defines an axis (cylinder, cone, torus, etc.).
    core::Ptr<core::Base> axis() const;
    bool axis(const core::Ptr<core::Base>& value);

    /// Gets and sets quantity of the elements.
    core::Ptr<core::ValueInput> quantity() const;
    bool quantity(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets total angle. A negative angle can be used to reverse the direction.
    /// An angle of 360 degrees or 2 pi radians will create a full circular pattern.
    core::Ptr<core::ValueInput> totalAngle() const;
    bool totalAngle(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets if the angle extent is in one direction or symmetric.
    bool isSymmetric() const;
    bool isSymmetric(bool value);

    /// Gets and sets the compute option when patterning features. The default value for this is AdjustPatternCompute.
    /// This property only applies when patterning features and is ignored in the direct modeling environment.
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

    ADSK_FUSION_CIRCULARPATTERNFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_CIRCULARPATTERNFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_CIRCULARPATTERNFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CIRCULARPATTERNFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* inputEntities_raw() const = 0;
    virtual bool inputEntities_raw(core::ObjectCollection* value) = 0;
    virtual core::Base* axis_raw() const = 0;
    virtual bool axis_raw(core::Base* value) = 0;
    virtual core::ValueInput* quantity_raw() const = 0;
    virtual bool quantity_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* totalAngle_raw() const = 0;
    virtual bool totalAngle_raw(core::ValueInput* value) = 0;
    virtual bool isSymmetric_raw() const = 0;
    virtual bool isSymmetric_raw(bool value) = 0;
    virtual PatternComputeOptions patternComputeOption_raw() const = 0;
    virtual bool patternComputeOption_raw(PatternComputeOptions value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> CircularPatternFeatureInput::inputEntities() const
{
    core::Ptr<core::ObjectCollection> res = inputEntities_raw();
    return res;
}

inline bool CircularPatternFeatureInput::inputEntities(const core::Ptr<core::ObjectCollection>& value)
{
    return inputEntities_raw(value.get());
}

inline core::Ptr<core::Base> CircularPatternFeatureInput::axis() const
{
    core::Ptr<core::Base> res = axis_raw();
    return res;
}

inline bool CircularPatternFeatureInput::axis(const core::Ptr<core::Base>& value)
{
    return axis_raw(value.get());
}

inline core::Ptr<core::ValueInput> CircularPatternFeatureInput::quantity() const
{
    core::Ptr<core::ValueInput> res = quantity_raw();
    return res;
}

inline bool CircularPatternFeatureInput::quantity(const core::Ptr<core::ValueInput>& value)
{
    return quantity_raw(value.get());
}

inline core::Ptr<core::ValueInput> CircularPatternFeatureInput::totalAngle() const
{
    core::Ptr<core::ValueInput> res = totalAngle_raw();
    return res;
}

inline bool CircularPatternFeatureInput::totalAngle(const core::Ptr<core::ValueInput>& value)
{
    return totalAngle_raw(value.get());
}

inline bool CircularPatternFeatureInput::isSymmetric() const
{
    bool res = isSymmetric_raw();
    return res;
}

inline bool CircularPatternFeatureInput::isSymmetric(bool value)
{
    return isSymmetric_raw(value);
}

inline PatternComputeOptions CircularPatternFeatureInput::patternComputeOption() const
{
    PatternComputeOptions res = patternComputeOption_raw();
    return res;
}

inline bool CircularPatternFeatureInput::patternComputeOption(PatternComputeOptions value)
{
    return patternComputeOption_raw(value);
}

inline core::Ptr<BaseFeature> CircularPatternFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool CircularPatternFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CIRCULARPATTERNFEATUREINPUT_API