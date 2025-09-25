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
# ifdef __COMPILING_ADSK_FUSION_COILFEATUREINPUT_CPP__
# define ADSK_FUSION_COILFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_COILFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_COILFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a coil feature.
class CoilFeatureInput : public core::Base {
public:

    /// Sets the coil type to RevolutionsAndHeightCoilType.
    /// revolutions : A ValueInput object that defines the number of revolutions.
    /// height : A ValueInput object that defines the height.
    /// angle : A ValueInput object that defines angle.
    /// Returns true if successful.
    bool setToRevolutionAndHeight(const core::Ptr<core::ValueInput>& revolutions, const core::Ptr<core::ValueInput>& height, const core::Ptr<core::ValueInput>& angle);

    /// Sets the coil type to RevolutionsAndPitchCoilType.
    /// revolutions : A ValueInput object that defines the number of revolutions.
    /// pitch : A ValueInput object that defines the pitch.
    /// angle : A ValueInput object that defines angle.
    /// Returns true if successful.
    bool setToRevolutionsAndPitch(const core::Ptr<core::ValueInput>& revolutions, const core::Ptr<core::ValueInput>& pitch, const core::Ptr<core::ValueInput>& angle);

    /// Sets the coil type to HeightAndPitchCoilType.
    /// height : A ValueInput object that defines the height.
    /// pitch : A ValueInput object that defines the pitch.
    /// angle : A ValueInput object that defines angle.
    /// Returns true if successful.
    bool setToHeightAndPitchCoil(const core::Ptr<core::ValueInput>& height, const core::Ptr<core::ValueInput>& pitch, const core::Ptr<core::ValueInput>& angle);

    /// Sets the coil type to SpiralCoilType.
    /// revolutions : A ValueInput object that defines the number of revolutions.
    /// pitch : A ValueInput object that defines the pitch.
    /// Returns true if successful.
    bool setToSpiral(const core::Ptr<core::ValueInput>& revolutions, const core::Ptr<core::ValueInput>& pitch);

    /// Specifies if the coil should be created as a solid or surface. This is
    /// initialized to true so a solid will be created if it's not changed.
    /// It only can be set to false in non-parametric modeling.
    bool isSolid() const;
    bool isSolid(bool value);

    /// Gets the revolutions number. Returns null in the case where the coilType property returns HeightAndPitchCoilType.
    core::Ptr<core::ValueInput> revolutions() const;

    /// Gets the height. Returns null in the case where the coilType property returns RevolutionsAndPitchCoilType.
    core::Ptr<core::ValueInput> height() const;

    /// Gets the pitch. Returns null in the case where the coilType property returns RevolutionsAndHeightCoilType or SpiralCoilType.
    core::Ptr<core::ValueInput> pitch() const;

    /// Gets the angle. Returns null in the case where the coilType property returns SpiralCoilType.
    core::Ptr<core::ValueInput> angle() const;

    /// Gets the type of the coil.
    CoilFeatureTypes coilType() const;

    /// Gets and sets the type of operation performed by the coil.
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// Gets and sets the base plane.
    core::Ptr<core::Base> basePlane() const;
    bool basePlane(const core::Ptr<core::Base>& value);

    /// Gets and sets whether the rotation is clockwise or counter-clockwise. A value of true indicates clockwise rotation.
    /// It defaults to true.
    bool isClockwiseRotation() const;
    bool isClockwiseRotation(bool value);

    /// Gets and sets the diameter.
    core::Ptr<core::ValueInput> diameter() const;
    bool diameter(const core::Ptr<core::ValueInput>& value);

    /// Gets the section type of the coil.
    /// It defaults to CircularCoilSectionType.
    CoilFeatureSectionTypes coilSectionType() const;
    bool coilSectionType(CoilFeatureSectionTypes value);

    /// Gets the section position of the coil.
    /// It defaults to InsideCoilSectionPosition.
    CoilFeatureSectionPositions coilSectionPosition() const;
    bool coilSectionPosition(CoilFeatureSectionPositions value);

    /// Gets and sets the section size.
    core::Ptr<core::ValueInput> sectionSize() const;
    bool sectionSize(const core::Ptr<core::ValueInput>& value);

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

    ADSK_FUSION_COILFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_COILFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_COILFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_COILFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setToRevolutionAndHeight_raw(core::ValueInput* revolutions, core::ValueInput* height, core::ValueInput* angle) = 0;
    virtual bool setToRevolutionsAndPitch_raw(core::ValueInput* revolutions, core::ValueInput* pitch, core::ValueInput* angle) = 0;
    virtual bool setToHeightAndPitchCoil_raw(core::ValueInput* height, core::ValueInput* pitch, core::ValueInput* angle) = 0;
    virtual bool setToSpiral_raw(core::ValueInput* revolutions, core::ValueInput* pitch) = 0;
    virtual bool isSolid_raw() const = 0;
    virtual bool isSolid_raw(bool value) = 0;
    virtual core::ValueInput* revolutions_raw() const = 0;
    virtual core::ValueInput* height_raw() const = 0;
    virtual core::ValueInput* pitch_raw() const = 0;
    virtual core::ValueInput* angle_raw() const = 0;
    virtual CoilFeatureTypes coilType_raw() const = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual core::Base* basePlane_raw() const = 0;
    virtual bool basePlane_raw(core::Base* value) = 0;
    virtual bool isClockwiseRotation_raw() const = 0;
    virtual bool isClockwiseRotation_raw(bool value) = 0;
    virtual core::ValueInput* diameter_raw() const = 0;
    virtual bool diameter_raw(core::ValueInput* value) = 0;
    virtual CoilFeatureSectionTypes coilSectionType_raw() const = 0;
    virtual bool coilSectionType_raw(CoilFeatureSectionTypes value) = 0;
    virtual CoilFeatureSectionPositions coilSectionPosition_raw() const = 0;
    virtual bool coilSectionPosition_raw(CoilFeatureSectionPositions value) = 0;
    virtual core::ValueInput* sectionSize_raw() const = 0;
    virtual bool sectionSize_raw(core::ValueInput* value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline bool CoilFeatureInput::setToRevolutionAndHeight(const core::Ptr<core::ValueInput>& revolutions, const core::Ptr<core::ValueInput>& height, const core::Ptr<core::ValueInput>& angle)
{
    bool res = setToRevolutionAndHeight_raw(revolutions.get(), height.get(), angle.get());
    return res;
}

inline bool CoilFeatureInput::setToRevolutionsAndPitch(const core::Ptr<core::ValueInput>& revolutions, const core::Ptr<core::ValueInput>& pitch, const core::Ptr<core::ValueInput>& angle)
{
    bool res = setToRevolutionsAndPitch_raw(revolutions.get(), pitch.get(), angle.get());
    return res;
}

inline bool CoilFeatureInput::setToHeightAndPitchCoil(const core::Ptr<core::ValueInput>& height, const core::Ptr<core::ValueInput>& pitch, const core::Ptr<core::ValueInput>& angle)
{
    bool res = setToHeightAndPitchCoil_raw(height.get(), pitch.get(), angle.get());
    return res;
}

inline bool CoilFeatureInput::setToSpiral(const core::Ptr<core::ValueInput>& revolutions, const core::Ptr<core::ValueInput>& pitch)
{
    bool res = setToSpiral_raw(revolutions.get(), pitch.get());
    return res;
}

inline bool CoilFeatureInput::isSolid() const
{
    bool res = isSolid_raw();
    return res;
}

inline bool CoilFeatureInput::isSolid(bool value)
{
    return isSolid_raw(value);
}

inline core::Ptr<core::ValueInput> CoilFeatureInput::revolutions() const
{
    core::Ptr<core::ValueInput> res = revolutions_raw();
    return res;
}

inline core::Ptr<core::ValueInput> CoilFeatureInput::height() const
{
    core::Ptr<core::ValueInput> res = height_raw();
    return res;
}

inline core::Ptr<core::ValueInput> CoilFeatureInput::pitch() const
{
    core::Ptr<core::ValueInput> res = pitch_raw();
    return res;
}

inline core::Ptr<core::ValueInput> CoilFeatureInput::angle() const
{
    core::Ptr<core::ValueInput> res = angle_raw();
    return res;
}

inline CoilFeatureTypes CoilFeatureInput::coilType() const
{
    CoilFeatureTypes res = coilType_raw();
    return res;
}

inline FeatureOperations CoilFeatureInput::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool CoilFeatureInput::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline core::Ptr<core::Base> CoilFeatureInput::basePlane() const
{
    core::Ptr<core::Base> res = basePlane_raw();
    return res;
}

inline bool CoilFeatureInput::basePlane(const core::Ptr<core::Base>& value)
{
    return basePlane_raw(value.get());
}

inline bool CoilFeatureInput::isClockwiseRotation() const
{
    bool res = isClockwiseRotation_raw();
    return res;
}

inline bool CoilFeatureInput::isClockwiseRotation(bool value)
{
    return isClockwiseRotation_raw(value);
}

inline core::Ptr<core::ValueInput> CoilFeatureInput::diameter() const
{
    core::Ptr<core::ValueInput> res = diameter_raw();
    return res;
}

inline bool CoilFeatureInput::diameter(const core::Ptr<core::ValueInput>& value)
{
    return diameter_raw(value.get());
}

inline CoilFeatureSectionTypes CoilFeatureInput::coilSectionType() const
{
    CoilFeatureSectionTypes res = coilSectionType_raw();
    return res;
}

inline bool CoilFeatureInput::coilSectionType(CoilFeatureSectionTypes value)
{
    return coilSectionType_raw(value);
}

inline CoilFeatureSectionPositions CoilFeatureInput::coilSectionPosition() const
{
    CoilFeatureSectionPositions res = coilSectionPosition_raw();
    return res;
}

inline bool CoilFeatureInput::coilSectionPosition(CoilFeatureSectionPositions value)
{
    return coilSectionPosition_raw(value);
}

inline core::Ptr<core::ValueInput> CoilFeatureInput::sectionSize() const
{
    core::Ptr<core::ValueInput> res = sectionSize_raw();
    return res;
}

inline bool CoilFeatureInput::sectionSize(const core::Ptr<core::ValueInput>& value)
{
    return sectionSize_raw(value.get());
}

inline core::Ptr<BaseFeature> CoilFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool CoilFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_COILFEATUREINPUT_API