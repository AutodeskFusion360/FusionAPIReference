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
# ifdef __COMPILING_ADSK_FUSION_CIRCULARPATTERNCONSTRAINTINPUT_CPP__
# define ADSK_FUSION_CIRCULARPATTERNCONSTRAINTINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_CIRCULARPATTERNCONSTRAINTINPUT_API
# endif
#else
# define ADSK_FUSION_CIRCULARPATTERNCONSTRAINTINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class SketchEntity;
    class SketchPoint;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a circular pattern
/// in a sketch.
class CircularPatternConstraintInput : public core::Base {
public:

    /// Gets and sets the entities to pattern. Sketch points and curves are valid
    /// entities to pattern.
    std::vector<core::Ptr<SketchEntity>> entities() const;
    bool entities(const std::vector<core::Ptr<SketchEntity>>& value);

    /// Gets and sets the sketch point that defines the center of the pattern.
    core::Ptr<SketchPoint> centerPoint() const;
    bool centerPoint(const core::Ptr<SketchPoint>& value);

    /// Gets and sets quantity of the elements.
    core::Ptr<core::ValueInput> quantity() const;
    bool quantity(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets total angle. A positive angle is a counter-clockwise direction and
    /// a negative angle can be used to reverse the direction.
    /// An angle of 360 degrees or 2 pi radians will create a full circular pattern.
    core::Ptr<core::ValueInput> totalAngle() const;
    bool totalAngle(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets if the angle extent is in one direction or is symmetric.
    bool isSymmetric() const;
    bool isSymmetric(bool value);

    /// Specifies which, if any, instances of the pattern are suppressed. This
    /// defaults to all instances being visible. This returns an array of Booleans
    /// that indicates if a particular instance in the pattern is suppressed or
    /// not. A value of true will result in the associated instance being
    /// suppressed.
    std::vector<bool> isSuppressed() const;
    bool isSuppressed(const std::vector<bool>& value);

    ADSK_FUSION_CIRCULARPATTERNCONSTRAINTINPUT_API static const char* classType();
    ADSK_FUSION_CIRCULARPATTERNCONSTRAINTINPUT_API const char* objectType() const override;
    ADSK_FUSION_CIRCULARPATTERNCONSTRAINTINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CIRCULARPATTERNCONSTRAINTINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchEntity** entities_raw(size_t& return_size) const = 0;
    virtual bool entities_raw(SketchEntity** value, size_t value_size) = 0;
    virtual SketchPoint* centerPoint_raw() const = 0;
    virtual bool centerPoint_raw(SketchPoint* value) = 0;
    virtual core::ValueInput* quantity_raw() const = 0;
    virtual bool quantity_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* totalAngle_raw() const = 0;
    virtual bool totalAngle_raw(core::ValueInput* value) = 0;
    virtual bool isSymmetric_raw() const = 0;
    virtual bool isSymmetric_raw(bool value) = 0;
    virtual bool* isSuppressed_raw(size_t& return_size) const = 0;
    virtual bool isSuppressed_raw(const bool* value, size_t value_size) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<SketchEntity>> CircularPatternConstraintInput::entities() const
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

inline bool CircularPatternConstraintInput::entities(const std::vector<core::Ptr<SketchEntity>>& value)
{
    SketchEntity** value_ = new SketchEntity*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = entities_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline core::Ptr<SketchPoint> CircularPatternConstraintInput::centerPoint() const
{
    core::Ptr<SketchPoint> res = centerPoint_raw();
    return res;
}

inline bool CircularPatternConstraintInput::centerPoint(const core::Ptr<SketchPoint>& value)
{
    return centerPoint_raw(value.get());
}

inline core::Ptr<core::ValueInput> CircularPatternConstraintInput::quantity() const
{
    core::Ptr<core::ValueInput> res = quantity_raw();
    return res;
}

inline bool CircularPatternConstraintInput::quantity(const core::Ptr<core::ValueInput>& value)
{
    return quantity_raw(value.get());
}

inline core::Ptr<core::ValueInput> CircularPatternConstraintInput::totalAngle() const
{
    core::Ptr<core::ValueInput> res = totalAngle_raw();
    return res;
}

inline bool CircularPatternConstraintInput::totalAngle(const core::Ptr<core::ValueInput>& value)
{
    return totalAngle_raw(value.get());
}

inline bool CircularPatternConstraintInput::isSymmetric() const
{
    bool res = isSymmetric_raw();
    return res;
}

inline bool CircularPatternConstraintInput::isSymmetric(bool value)
{
    return isSymmetric_raw(value);
}

inline std::vector<bool> CircularPatternConstraintInput::isSuppressed() const
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

inline bool CircularPatternConstraintInput::isSuppressed(const std::vector<bool>& value)
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

#undef ADSK_FUSION_CIRCULARPATTERNCONSTRAINTINPUT_API