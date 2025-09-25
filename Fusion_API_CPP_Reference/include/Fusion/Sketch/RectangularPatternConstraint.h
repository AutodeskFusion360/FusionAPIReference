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
#include "GeometricConstraint.h"
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_RECTANGULARPATTERNCONSTRAINT_CPP__
# define ADSK_FUSION_RECTANGULARPATTERNCONSTRAINT_API XI_EXPORT
# else
# define ADSK_FUSION_RECTANGULARPATTERNCONSTRAINT_API
# endif
#else
# define ADSK_FUSION_RECTANGULARPATTERNCONSTRAINT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
    class Occurrence;
    class SketchEntity;
    class SketchLine;
}}

namespace adsk { namespace fusion {

/// A rectangular pattern constraint in a sketch.
class RectangularPatternConstraint : public GeometricConstraint {
public:

    /// Gets and sets the entities that are patterned. Sketch points and curves are valid
    /// entities to pattern.
    std::vector<core::Ptr<SketchEntity>> entities() const;
    bool entities(const std::vector<core::Ptr<SketchEntity>>& value);

    /// Returns an array that contains all of the sketch entities that were created as a result
    /// of the pattern. This does not contain the original entities that were used as input to
    /// the pattern. The input entities can be obtained by using the entities property.
    std::vector<core::Ptr<SketchEntity>> createdEntities() const;

    /// Gets and sets the entity that defined the first direction of the pattern. This can
    /// be null which indicates to use the default which is the X-axis of the sketch. Setting
    /// this property to null will automatically clear directionTwoEntity, if it has been set.
    core::Ptr<SketchLine> directionOneEntity() const;
    bool directionOneEntity(const core::Ptr<SketchLine>& value);

    /// Gets and sets the entity that defines the second direction of the pattern. This can
    /// be null which indicates to use the default direction, which is perpendicular to direction
    /// one. The directionOneEntity property must be set before setting this property.
    core::Ptr<SketchLine> directionTwoEntity() const;
    bool directionTwoEntity(const core::Ptr<SketchLine>& value);

    /// Sets all of the input required to define the pattern in the first direction.
    /// directionOneEntity : Specifies the SketchLine object used to define the first direction entity.
    /// 
    /// This argument can be null to indicate that the default first direction is to be used,
    /// which is along the X axis of the sketch.
    /// quantityOne : Specifies the number of instances in the first direction.
    /// distanceOne : Specifies the distance in the first direction. How this value is used depends on the value
    /// of the PatternDistanceType property. If the value is ExtentPatternDistanceType then it defines
    /// the total distance of the pattern. If the value is SpacingPatternDistanceType then it defines
    /// the distance between each element.
    /// Returns true if it was successful.
    bool setDirectionOne(const core::Ptr<SketchLine>& directionOneEntity, const core::Ptr<core::ValueInput>& quantityOne, const core::Ptr<core::ValueInput>& distanceOne);

    /// Sets all of the input required to define the pattern in the second direction.
    /// directionTwoEntity : Specifies the SketchLine object used to define the second direction entity.
    /// 
    /// This argument can be null to indicate that the default second direction is to be used, which is 90
    /// degrees to the first direction.
    /// quantityTwo : Specifies the number of instances in the second direction.
    /// distanceTwo : Specifies the distance in the second direction. How this value is used depends on the value of
    /// the PatternDistanceType property. If the value is ExtentPatternDistanceType then it defines the
    /// total distance of the pattern. If the value is SpacingPatternDistanceType then it defines the
    /// distance between each element.
    /// Returns true if it was successful.
    bool setDirectionTwo(const core::Ptr<SketchLine>& directionTwoEntity, const core::Ptr<core::ValueInput>& quantityTwo, const core::Ptr<core::ValueInput>& distanceTwo);

    /// Returns the parameter that controls the number of instances in the first direction. To change
    /// the value, use the properties on the returned ModelParameter.
    core::Ptr<ModelParameter> quantityOne() const;

    /// Returns the parameter that controls the number of instances in the second direction. To change
    /// the value, use the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> quantityTwo() const;

    /// Returns the parameter that controls the distance in first direction. To change the
    /// value, use the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> distanceOne() const;

    /// Returns the parameter that controls the distance in second direction. To change the
    /// value, use the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> distanceTwo() const;

    /// Gets and sets if the pattern in direction one is in one direction or is symmetric.
    bool isSymmetricInDirectionOne() const;
    bool isSymmetricInDirectionOne(bool value);

    /// Gets and sets if the pattern in direction two is in one direction or is symmetric.
    bool isSymmetricInDirectionTwo() const;
    bool isSymmetricInDirectionTwo(bool value);

    /// Gets and sets how the distance between elements is computed.
    PatternDistanceType distanceType() const;
    bool distanceType(PatternDistanceType value);

    /// Specifies which, if any, instances of the pattern are suppressed. This returns an
    /// array of Boolean values that indicates if a particular instance in the pattern is
    /// suppressed or not. A value of true will result in the associated instance being suppressed.
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

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<RectangularPatternConstraint> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<RectangularPatternConstraint> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_RECTANGULARPATTERNCONSTRAINT_API static const char* classType();
    ADSK_FUSION_RECTANGULARPATTERNCONSTRAINT_API const char* objectType() const override;
    ADSK_FUSION_RECTANGULARPATTERNCONSTRAINT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RECTANGULARPATTERNCONSTRAINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchEntity** entities_raw(size_t& return_size) const = 0;
    virtual bool entities_raw(SketchEntity** value, size_t value_size) = 0;
    virtual SketchEntity** createdEntities_raw(size_t& return_size) const = 0;
    virtual SketchLine* directionOneEntity_raw() const = 0;
    virtual bool directionOneEntity_raw(SketchLine* value) = 0;
    virtual SketchLine* directionTwoEntity_raw() const = 0;
    virtual bool directionTwoEntity_raw(SketchLine* value) = 0;
    virtual bool setDirectionOne_raw(SketchLine* directionOneEntity, core::ValueInput* quantityOne, core::ValueInput* distanceOne) = 0;
    virtual bool setDirectionTwo_raw(SketchLine* directionTwoEntity, core::ValueInput* quantityTwo, core::ValueInput* distanceTwo) = 0;
    virtual ModelParameter* quantityOne_raw() const = 0;
    virtual ModelParameter* quantityTwo_raw() const = 0;
    virtual ModelParameter* distanceOne_raw() const = 0;
    virtual ModelParameter* distanceTwo_raw() const = 0;
    virtual bool isSymmetricInDirectionOne_raw() const = 0;
    virtual bool isSymmetricInDirectionOne_raw(bool value) = 0;
    virtual bool isSymmetricInDirectionTwo_raw() const = 0;
    virtual bool isSymmetricInDirectionTwo_raw(bool value) = 0;
    virtual PatternDistanceType distanceType_raw() const = 0;
    virtual bool distanceType_raw(PatternDistanceType value) = 0;
    virtual bool* isSuppressed_raw(size_t& return_size) const = 0;
    virtual bool isSuppressed_raw(const bool* value, size_t value_size) = 0;
    virtual RectangularPatternConstraint* nativeObject_raw() const = 0;
    virtual RectangularPatternConstraint* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<SketchEntity>> RectangularPatternConstraint::entities() const
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

inline bool RectangularPatternConstraint::entities(const std::vector<core::Ptr<SketchEntity>>& value)
{
    SketchEntity** value_ = new SketchEntity*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = entities_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline std::vector<core::Ptr<SketchEntity>> RectangularPatternConstraint::createdEntities() const
{
    std::vector<core::Ptr<SketchEntity>> res;
    size_t s;

    SketchEntity** p= createdEntities_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<SketchLine> RectangularPatternConstraint::directionOneEntity() const
{
    core::Ptr<SketchLine> res = directionOneEntity_raw();
    return res;
}

inline bool RectangularPatternConstraint::directionOneEntity(const core::Ptr<SketchLine>& value)
{
    return directionOneEntity_raw(value.get());
}

inline core::Ptr<SketchLine> RectangularPatternConstraint::directionTwoEntity() const
{
    core::Ptr<SketchLine> res = directionTwoEntity_raw();
    return res;
}

inline bool RectangularPatternConstraint::directionTwoEntity(const core::Ptr<SketchLine>& value)
{
    return directionTwoEntity_raw(value.get());
}

inline bool RectangularPatternConstraint::setDirectionOne(const core::Ptr<SketchLine>& directionOneEntity, const core::Ptr<core::ValueInput>& quantityOne, const core::Ptr<core::ValueInput>& distanceOne)
{
    bool res = setDirectionOne_raw(directionOneEntity.get(), quantityOne.get(), distanceOne.get());
    return res;
}

inline bool RectangularPatternConstraint::setDirectionTwo(const core::Ptr<SketchLine>& directionTwoEntity, const core::Ptr<core::ValueInput>& quantityTwo, const core::Ptr<core::ValueInput>& distanceTwo)
{
    bool res = setDirectionTwo_raw(directionTwoEntity.get(), quantityTwo.get(), distanceTwo.get());
    return res;
}

inline core::Ptr<ModelParameter> RectangularPatternConstraint::quantityOne() const
{
    core::Ptr<ModelParameter> res = quantityOne_raw();
    return res;
}

inline core::Ptr<ModelParameter> RectangularPatternConstraint::quantityTwo() const
{
    core::Ptr<ModelParameter> res = quantityTwo_raw();
    return res;
}

inline core::Ptr<ModelParameter> RectangularPatternConstraint::distanceOne() const
{
    core::Ptr<ModelParameter> res = distanceOne_raw();
    return res;
}

inline core::Ptr<ModelParameter> RectangularPatternConstraint::distanceTwo() const
{
    core::Ptr<ModelParameter> res = distanceTwo_raw();
    return res;
}

inline bool RectangularPatternConstraint::isSymmetricInDirectionOne() const
{
    bool res = isSymmetricInDirectionOne_raw();
    return res;
}

inline bool RectangularPatternConstraint::isSymmetricInDirectionOne(bool value)
{
    return isSymmetricInDirectionOne_raw(value);
}

inline bool RectangularPatternConstraint::isSymmetricInDirectionTwo() const
{
    bool res = isSymmetricInDirectionTwo_raw();
    return res;
}

inline bool RectangularPatternConstraint::isSymmetricInDirectionTwo(bool value)
{
    return isSymmetricInDirectionTwo_raw(value);
}

inline PatternDistanceType RectangularPatternConstraint::distanceType() const
{
    PatternDistanceType res = distanceType_raw();
    return res;
}

inline bool RectangularPatternConstraint::distanceType(PatternDistanceType value)
{
    return distanceType_raw(value);
}

inline std::vector<bool> RectangularPatternConstraint::isSuppressed() const
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

inline bool RectangularPatternConstraint::isSuppressed(const std::vector<bool>& value)
{
    bool* value_ = new bool[value.size()];
    for (size_t i = 0; i < value.size(); ++i)
        value_[i] = value[i];

    bool res = isSuppressed_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline core::Ptr<RectangularPatternConstraint> RectangularPatternConstraint::nativeObject() const
{
    core::Ptr<RectangularPatternConstraint> res = nativeObject_raw();
    return res;
}

inline core::Ptr<RectangularPatternConstraint> RectangularPatternConstraint::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<RectangularPatternConstraint> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RECTANGULARPATTERNCONSTRAINT_API