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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_RECTANGULARPATTERNCONSTRAINTINPUT_CPP__
# define ADSK_FUSION_RECTANGULARPATTERNCONSTRAINTINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_RECTANGULARPATTERNCONSTRAINTINPUT_API
# endif
#else
# define ADSK_FUSION_RECTANGULARPATTERNCONSTRAINTINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class SketchEntity;
    class SketchLine;
}}

namespace adsk { namespace fusion {

/// Used to define the inputs need to create a rectangular pattern in a sketch.
class RectangularPatternConstraintInput : public core::Base {
public:

    /// Gets and sets the entities to pattern. Sketch points and curves are valid
    /// entities to pattern.
    std::vector<core::Ptr<SketchEntity>> entities() const;
    bool entities(const std::vector<core::Ptr<SketchEntity>>& value);

    /// Defines the first direction of the pattern. This can be null which indicates
    /// to use the default which is the X-axis of the sketch. Setting this property
    /// to null will automatically clear directionTwoEntity, if it has been set.
    core::Ptr<SketchLine> directionOneEntity() const;
    bool directionOneEntity(const core::Ptr<SketchLine>& value);

    /// Defines the second direction of the pattern. This can be null which indicates
    /// to use the default which is perpendicular to direction one. The directionOneEntity
    /// property must be set before setting this property.
    core::Ptr<SketchLine> directionTwoEntity() const;
    bool directionTwoEntity(const core::Ptr<SketchLine>& value);

    /// Sets all of the input required to define the pattern in the first direction.
    /// directionOneEntity : Specifies the SketchLine object used to define the first direction entity.
    /// 
    /// This argument can be null to indicate that the default first direction is to be used, which is along the X axis of the sketch.
    /// quantityOne : Specifies the number of instances in the first direction.
    /// distanceOne : Specifies the distance in the first direction. How this value is used depends on the value of the PatternDistanceType property.
    /// If the value is ExtentPatternDistanceType then it defines the total distance of the pattern.
    /// If the value is SpacingPatternDistanceType then it defines the distance between each element.
    /// Returns true if it was successful.
    bool setDirectionOne(const core::Ptr<SketchLine>& directionOneEntity, const core::Ptr<core::ValueInput>& quantityOne, const core::Ptr<core::ValueInput>& distanceOne);

    /// Sets all of the input required to define the pattern in the second direction.
    /// directionTwoEntity : Specifies the SketchLine object used to define the second direction entity.
    /// 
    /// This argument can be null to indicate that the default second direction is to be used, which is 90 degrees to the first direction.
    /// quantityTwo : Specifies the number of instances in the second direction.
    /// distanceTwo : Specifies the distance in the second direction. How this value is used depends on the value of the PatternDistanceType property.
    /// If the value is ExtentPatternDistanceType then it defines the total distance of the pattern.
    /// If the value is SpacingPatternDistanceType then it defines the distance between each element.
    /// Returns true if it was successful.
    bool setDirectionTwo(const core::Ptr<SketchLine>& directionTwoEntity, const core::Ptr<core::ValueInput>& quantityTwo, const core::Ptr<core::ValueInput>& distanceTwo);

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

    /// Gets and sets if the pattern in direction one is in one direction or is symmetric.
    bool isSymmetricInDirectionOne() const;
    bool isSymmetricInDirectionOne(bool value);

    /// Gets and sets if the pattern in direction two is in one direction or is symmetric.
    bool isSymmetricInDirectionTwo() const;
    bool isSymmetricInDirectionTwo(bool value);

    /// Gets and sets how the distance between elements is computed.
    PatternDistanceType distanceType() const;
    bool distanceType(PatternDistanceType value);

    /// Specifies which, if any, instances of the pattern are suppressed. This
    /// defaults to all instances being visible. This returns an array of Booleans
    /// that indicates if a particular instance in the pattern is suppressed or
    /// not. A value of true will result in the associated instance being
    /// suppressed.
    /// 
    /// Both the quantityOne and quantityTwo properties must be set with valid
    /// values before using the isSuppressed property is valid. A quantity of
    /// one is a valid value.
    /// 
    /// The indices represent the pattern instances in a row-column order, with the
    /// initial geometry not counting. For example, if you have a 4x4 pattern, the
    /// array will have 15 elements rather than 16 because the original geometry
    /// cannot be suppressed as part of the pattern. The first element in the array
    /// is the one next to the original in the first direction. The second element is
    /// the next one on the first row, and the third is the next one. The fourth element
    /// will be the first element in the row next to the first row that contains the
    /// original geometry.
    std::vector<bool> isSuppressed() const;
    bool isSuppressed(const std::vector<bool>& value);

    ADSK_FUSION_RECTANGULARPATTERNCONSTRAINTINPUT_API static const char* classType();
    ADSK_FUSION_RECTANGULARPATTERNCONSTRAINTINPUT_API const char* objectType() const override;
    ADSK_FUSION_RECTANGULARPATTERNCONSTRAINTINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RECTANGULARPATTERNCONSTRAINTINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchEntity** entities_raw(size_t& return_size) const = 0;
    virtual bool entities_raw(SketchEntity** value, size_t value_size) = 0;
    virtual SketchLine* directionOneEntity_raw() const = 0;
    virtual bool directionOneEntity_raw(SketchLine* value) = 0;
    virtual SketchLine* directionTwoEntity_raw() const = 0;
    virtual bool directionTwoEntity_raw(SketchLine* value) = 0;
    virtual bool setDirectionOne_raw(SketchLine* directionOneEntity, core::ValueInput* quantityOne, core::ValueInput* distanceOne) = 0;
    virtual bool setDirectionTwo_raw(SketchLine* directionTwoEntity, core::ValueInput* quantityTwo, core::ValueInput* distanceTwo) = 0;
    virtual core::ValueInput* quantityOne_raw() const = 0;
    virtual bool quantityOne_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* quantityTwo_raw() const = 0;
    virtual bool quantityTwo_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* distanceOne_raw() const = 0;
    virtual bool distanceOne_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* distanceTwo_raw() const = 0;
    virtual bool distanceTwo_raw(core::ValueInput* value) = 0;
    virtual bool isSymmetricInDirectionOne_raw() const = 0;
    virtual bool isSymmetricInDirectionOne_raw(bool value) = 0;
    virtual bool isSymmetricInDirectionTwo_raw() const = 0;
    virtual bool isSymmetricInDirectionTwo_raw(bool value) = 0;
    virtual PatternDistanceType distanceType_raw() const = 0;
    virtual bool distanceType_raw(PatternDistanceType value) = 0;
    virtual bool* isSuppressed_raw(size_t& return_size) const = 0;
    virtual bool isSuppressed_raw(const bool* value, size_t value_size) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<SketchEntity>> RectangularPatternConstraintInput::entities() const
{
    std::vector<core::Ptr<SketchEntity>> res;
    size_t s;

    SketchEntity** p= entities_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool RectangularPatternConstraintInput::entities(const std::vector<core::Ptr<SketchEntity>>& value)
{
    SketchEntity** value_ = new SketchEntity*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = entities_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline core::Ptr<SketchLine> RectangularPatternConstraintInput::directionOneEntity() const
{
    core::Ptr<SketchLine> res = directionOneEntity_raw();
    return res;
}

inline bool RectangularPatternConstraintInput::directionOneEntity(const core::Ptr<SketchLine>& value)
{
    return directionOneEntity_raw(value.get());
}

inline core::Ptr<SketchLine> RectangularPatternConstraintInput::directionTwoEntity() const
{
    core::Ptr<SketchLine> res = directionTwoEntity_raw();
    return res;
}

inline bool RectangularPatternConstraintInput::directionTwoEntity(const core::Ptr<SketchLine>& value)
{
    return directionTwoEntity_raw(value.get());
}

inline bool RectangularPatternConstraintInput::setDirectionOne(const core::Ptr<SketchLine>& directionOneEntity, const core::Ptr<core::ValueInput>& quantityOne, const core::Ptr<core::ValueInput>& distanceOne)
{
    bool res = setDirectionOne_raw(directionOneEntity.get(), quantityOne.get(), distanceOne.get());
    return res;
}

inline bool RectangularPatternConstraintInput::setDirectionTwo(const core::Ptr<SketchLine>& directionTwoEntity, const core::Ptr<core::ValueInput>& quantityTwo, const core::Ptr<core::ValueInput>& distanceTwo)
{
    bool res = setDirectionTwo_raw(directionTwoEntity.get(), quantityTwo.get(), distanceTwo.get());
    return res;
}

inline core::Ptr<core::ValueInput> RectangularPatternConstraintInput::quantityOne() const
{
    core::Ptr<core::ValueInput> res = quantityOne_raw();
    return res;
}

inline bool RectangularPatternConstraintInput::quantityOne(const core::Ptr<core::ValueInput>& value)
{
    return quantityOne_raw(value.get());
}

inline core::Ptr<core::ValueInput> RectangularPatternConstraintInput::quantityTwo() const
{
    core::Ptr<core::ValueInput> res = quantityTwo_raw();
    return res;
}

inline bool RectangularPatternConstraintInput::quantityTwo(const core::Ptr<core::ValueInput>& value)
{
    return quantityTwo_raw(value.get());
}

inline core::Ptr<core::ValueInput> RectangularPatternConstraintInput::distanceOne() const
{
    core::Ptr<core::ValueInput> res = distanceOne_raw();
    return res;
}

inline bool RectangularPatternConstraintInput::distanceOne(const core::Ptr<core::ValueInput>& value)
{
    return distanceOne_raw(value.get());
}

inline core::Ptr<core::ValueInput> RectangularPatternConstraintInput::distanceTwo() const
{
    core::Ptr<core::ValueInput> res = distanceTwo_raw();
    return res;
}

inline bool RectangularPatternConstraintInput::distanceTwo(const core::Ptr<core::ValueInput>& value)
{
    return distanceTwo_raw(value.get());
}

inline bool RectangularPatternConstraintInput::isSymmetricInDirectionOne() const
{
    bool res = isSymmetricInDirectionOne_raw();
    return res;
}

inline bool RectangularPatternConstraintInput::isSymmetricInDirectionOne(bool value)
{
    return isSymmetricInDirectionOne_raw(value);
}

inline bool RectangularPatternConstraintInput::isSymmetricInDirectionTwo() const
{
    bool res = isSymmetricInDirectionTwo_raw();
    return res;
}

inline bool RectangularPatternConstraintInput::isSymmetricInDirectionTwo(bool value)
{
    return isSymmetricInDirectionTwo_raw(value);
}

inline PatternDistanceType RectangularPatternConstraintInput::distanceType() const
{
    PatternDistanceType res = distanceType_raw();
    return res;
}

inline bool RectangularPatternConstraintInput::distanceType(PatternDistanceType value)
{
    return distanceType_raw(value);
}

inline std::vector<bool> RectangularPatternConstraintInput::isSuppressed() const
{
    std::vector<bool> res;
    size_t s;

    bool* p= isSuppressed_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool RectangularPatternConstraintInput::isSuppressed(const std::vector<bool>& value)
{
    bool* value_ = new bool[value.size()];
    for (size_t i = 0; i < value.size(); ++i)
        value_[i] = value[i];

    bool res = isSuppressed_raw(value_, value.size());
    delete[] value_;
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RECTANGULARPATTERNCONSTRAINTINPUT_API