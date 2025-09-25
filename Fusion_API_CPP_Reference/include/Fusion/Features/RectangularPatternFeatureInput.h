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
# ifdef __COMPILING_ADSK_FUSION_RECTANGULARPATTERNFEATUREINPUT_CPP__
# define ADSK_FUSION_RECTANGULARPATTERNFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_RECTANGULARPATTERNFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_RECTANGULARPATTERNFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a rectangular pattern
/// feature.
class RectangularPatternFeatureInput : public core::Base {
public:

    /// Gets and sets the input entities. The collection can contain faces, features, bodies or occurrences.
    /// All of the entities must be of a single type. For example, it can't contain features and occurrences
    /// but only features or occurrences.
    core::Ptr<core::ObjectCollection> inputEntities() const;
    bool inputEntities(const core::Ptr<core::ObjectCollection>& value);

    /// Sets all of the input required to define the pattern in the second direction.
    /// directionTwoEntity : Specifies the entity used to define the second direction entity. This can be a linear edge, construction axis, sketch line or rectangular pattern feature.
    /// If a rectangular pattern feature is set, the directionOneEntity and directionTwoEntity properties return the same rectangular pattern feature.
    /// 
    /// This argument can be null to indicate that the default second direction is to be used, which is 90 degrees to the first direction.
    /// quantityTwo : Specifies the number of instances in the second direction.
    /// distanceTwo : Specifies the distance in the second direction. How this value is used depends on the value of the PatternDistanceType property.
    /// If the value is ExtentPatternDistanceType then it defines the total distance of the pattern.
    /// If the value is SpacingPatternDistanceType then it defines the distance between each element.
    /// Returns true if it was successful.
    bool setDirectionTwo(const core::Ptr<core::Base>& directionTwoEntity, const core::Ptr<core::ValueInput>& quantityTwo, const core::Ptr<core::ValueInput>& distanceTwo);

    /// Gets and sets the first direction entity.
    /// This can be a linear edge, construction axis, sketch line or rectangular pattern feature.
    /// If a rectangular pattern feature is set, the directionOneEntity and directionTwoEntity properties return the same rectangular pattern feature.
    core::Ptr<core::Base> directionOneEntity() const;
    bool directionOneEntity(const core::Ptr<core::Base>& value);

    /// Gets and sets the second direction entity.
    /// This can be a linear edge, construction axis, sketch line or rectangular pattern feature.
    /// If a rectangular pattern feature is set, the directionOneEntity and directionTwoEntity properties return the same rectangular pattern feature.
    core::Ptr<core::Base> directionTwoEntity() const;
    bool directionTwoEntity(const core::Ptr<core::Base>& value);

    /// Gets and sets the number of instances in the first direction.
    core::Ptr<core::ValueInput> quantityOne() const;
    bool quantityOne(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the number of instances in the second direction.
    core::Ptr<core::ValueInput> quantityTwo() const;
    bool quantityTwo(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the distance in the first direction.
    core::Ptr<core::ValueInput> distanceOne() const;
    bool distanceOne(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the distance in the second direction.
    core::Ptr<core::ValueInput> distanceTwo() const;
    bool distanceTwo(const core::Ptr<core::ValueInput>& value);

    /// Returns a Vector3D indicating the positive direction of direction one.
    core::Ptr<core::Vector3D> directionOne() const;

    /// Returns a Vector3D indicating the positive direction of direction two.
    core::Ptr<core::Vector3D> directionTwo() const;

    /// Gets and sets if the pattern in direction one is in one direction or symmetric.
    bool isSymmetricInDirectionOne() const;
    bool isSymmetricInDirectionOne(bool value);

    /// Gets and sets if the pattern in direction two is in one direction or symmetric.
    bool isSymmetricInDirectionTwo() const;
    bool isSymmetricInDirectionTwo(bool value);

    /// Gets and sets how the distance between elements is computed.
    PatternDistanceType patternDistanceType() const;
    bool patternDistanceType(PatternDistanceType value);

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

    ADSK_FUSION_RECTANGULARPATTERNFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_RECTANGULARPATTERNFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_RECTANGULARPATTERNFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RECTANGULARPATTERNFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* inputEntities_raw() const = 0;
    virtual bool inputEntities_raw(core::ObjectCollection* value) = 0;
    virtual bool setDirectionTwo_raw(core::Base* directionTwoEntity, core::ValueInput* quantityTwo, core::ValueInput* distanceTwo) = 0;
    virtual core::Base* directionOneEntity_raw() const = 0;
    virtual bool directionOneEntity_raw(core::Base* value) = 0;
    virtual core::Base* directionTwoEntity_raw() const = 0;
    virtual bool directionTwoEntity_raw(core::Base* value) = 0;
    virtual core::ValueInput* quantityOne_raw() const = 0;
    virtual bool quantityOne_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* quantityTwo_raw() const = 0;
    virtual bool quantityTwo_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* distanceOne_raw() const = 0;
    virtual bool distanceOne_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* distanceTwo_raw() const = 0;
    virtual bool distanceTwo_raw(core::ValueInput* value) = 0;
    virtual core::Vector3D* directionOne_raw() const = 0;
    virtual core::Vector3D* directionTwo_raw() const = 0;
    virtual bool isSymmetricInDirectionOne_raw() const = 0;
    virtual bool isSymmetricInDirectionOne_raw(bool value) = 0;
    virtual bool isSymmetricInDirectionTwo_raw() const = 0;
    virtual bool isSymmetricInDirectionTwo_raw(bool value) = 0;
    virtual PatternDistanceType patternDistanceType_raw() const = 0;
    virtual bool patternDistanceType_raw(PatternDistanceType value) = 0;
    virtual PatternComputeOptions patternComputeOption_raw() const = 0;
    virtual bool patternComputeOption_raw(PatternComputeOptions value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> RectangularPatternFeatureInput::inputEntities() const
{
    core::Ptr<core::ObjectCollection> res = inputEntities_raw();
    return res;
}

inline bool RectangularPatternFeatureInput::inputEntities(const core::Ptr<core::ObjectCollection>& value)
{
    return inputEntities_raw(value.get());
}

inline bool RectangularPatternFeatureInput::setDirectionTwo(const core::Ptr<core::Base>& directionTwoEntity, const core::Ptr<core::ValueInput>& quantityTwo, const core::Ptr<core::ValueInput>& distanceTwo)
{
    bool res = setDirectionTwo_raw(directionTwoEntity.get(), quantityTwo.get(), distanceTwo.get());
    return res;
}

inline core::Ptr<core::Base> RectangularPatternFeatureInput::directionOneEntity() const
{
    core::Ptr<core::Base> res = directionOneEntity_raw();
    return res;
}

inline bool RectangularPatternFeatureInput::directionOneEntity(const core::Ptr<core::Base>& value)
{
    return directionOneEntity_raw(value.get());
}

inline core::Ptr<core::Base> RectangularPatternFeatureInput::directionTwoEntity() const
{
    core::Ptr<core::Base> res = directionTwoEntity_raw();
    return res;
}

inline bool RectangularPatternFeatureInput::directionTwoEntity(const core::Ptr<core::Base>& value)
{
    return directionTwoEntity_raw(value.get());
}

inline core::Ptr<core::ValueInput> RectangularPatternFeatureInput::quantityOne() const
{
    core::Ptr<core::ValueInput> res = quantityOne_raw();
    return res;
}

inline bool RectangularPatternFeatureInput::quantityOne(const core::Ptr<core::ValueInput>& value)
{
    return quantityOne_raw(value.get());
}

inline core::Ptr<core::ValueInput> RectangularPatternFeatureInput::quantityTwo() const
{
    core::Ptr<core::ValueInput> res = quantityTwo_raw();
    return res;
}

inline bool RectangularPatternFeatureInput::quantityTwo(const core::Ptr<core::ValueInput>& value)
{
    return quantityTwo_raw(value.get());
}

inline core::Ptr<core::ValueInput> RectangularPatternFeatureInput::distanceOne() const
{
    core::Ptr<core::ValueInput> res = distanceOne_raw();
    return res;
}

inline bool RectangularPatternFeatureInput::distanceOne(const core::Ptr<core::ValueInput>& value)
{
    return distanceOne_raw(value.get());
}

inline core::Ptr<core::ValueInput> RectangularPatternFeatureInput::distanceTwo() const
{
    core::Ptr<core::ValueInput> res = distanceTwo_raw();
    return res;
}

inline bool RectangularPatternFeatureInput::distanceTwo(const core::Ptr<core::ValueInput>& value)
{
    return distanceTwo_raw(value.get());
}

inline core::Ptr<core::Vector3D> RectangularPatternFeatureInput::directionOne() const
{
    core::Ptr<core::Vector3D> res = directionOne_raw();
    return res;
}

inline core::Ptr<core::Vector3D> RectangularPatternFeatureInput::directionTwo() const
{
    core::Ptr<core::Vector3D> res = directionTwo_raw();
    return res;
}

inline bool RectangularPatternFeatureInput::isSymmetricInDirectionOne() const
{
    bool res = isSymmetricInDirectionOne_raw();
    return res;
}

inline bool RectangularPatternFeatureInput::isSymmetricInDirectionOne(bool value)
{
    return isSymmetricInDirectionOne_raw(value);
}

inline bool RectangularPatternFeatureInput::isSymmetricInDirectionTwo() const
{
    bool res = isSymmetricInDirectionTwo_raw();
    return res;
}

inline bool RectangularPatternFeatureInput::isSymmetricInDirectionTwo(bool value)
{
    return isSymmetricInDirectionTwo_raw(value);
}

inline PatternDistanceType RectangularPatternFeatureInput::patternDistanceType() const
{
    PatternDistanceType res = patternDistanceType_raw();
    return res;
}

inline bool RectangularPatternFeatureInput::patternDistanceType(PatternDistanceType value)
{
    return patternDistanceType_raw(value);
}

inline PatternComputeOptions RectangularPatternFeatureInput::patternComputeOption() const
{
    PatternComputeOptions res = patternComputeOption_raw();
    return res;
}

inline bool RectangularPatternFeatureInput::patternComputeOption(PatternComputeOptions value)
{
    return patternComputeOption_raw(value);
}

inline core::Ptr<BaseFeature> RectangularPatternFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool RectangularPatternFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RECTANGULARPATTERNFEATUREINPUT_API