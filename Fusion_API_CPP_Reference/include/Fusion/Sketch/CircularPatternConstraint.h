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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CIRCULARPATTERNCONSTRAINT_CPP__
# define ADSK_FUSION_CIRCULARPATTERNCONSTRAINT_API XI_EXPORT
# else
# define ADSK_FUSION_CIRCULARPATTERNCONSTRAINT_API
# endif
#else
# define ADSK_FUSION_CIRCULARPATTERNCONSTRAINT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
    class Occurrence;
    class SketchEntity;
    class SketchPoint;
}}

namespace adsk { namespace fusion {

/// A circular pattern constraint in a sketch.
class CircularPatternConstraint : public GeometricConstraint {
public:

    /// Gets and sets the entities to pattern. Sketch points and curves are valid
    /// entities to pattern.
    std::vector<core::Ptr<SketchEntity>> entities() const;
    bool entities(const std::vector<core::Ptr<SketchEntity>>& value);

    /// Returns an array that contains all of the sketch entities that were created as a result
    /// of the pattern. This does not contain the original entities that were used as input to
    /// the pattern. The input entities can be obtained by using the entities property.
    std::vector<core::Ptr<SketchEntity>> createdEntities() const;

    /// Gets and sets the sketch point that defines the center of the pattern.
    core::Ptr<SketchPoint> centerPoint() const;
    bool centerPoint(const core::Ptr<SketchPoint>& value);

    /// Returns the parameter that controls the number of instances in the pattern. To change
    /// the value, use the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> quantity() const;

    /// Returns the parameter that controls the number of instances in the pattern. A positive
    /// angle is a counter-clockwise direction and a negative angle can be used to reverse the direction.
    /// An angle of 360 degrees or 2 pi radians will create a full circular pattern.
    core::Ptr<ModelParameter> totalAngle() const;

    /// Gets and sets if the angle extent is in one direction or is symmetric.
    bool isSymmetric() const;
    bool isSymmetric(bool value);

    /// Specifies which, if any, instances of the pattern are suppressed. This returns an
    /// array of Boolean values that indicates if a particular instance in the pattern is
    /// suppressed or not. A value of true will result in the associated instance being suppressed.
    std::vector<bool> isSuppressed() const;
    bool isSuppressed(const std::vector<bool>& value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<CircularPatternConstraint> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<CircularPatternConstraint> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_CIRCULARPATTERNCONSTRAINT_API static const char* classType();
    ADSK_FUSION_CIRCULARPATTERNCONSTRAINT_API const char* objectType() const override;
    ADSK_FUSION_CIRCULARPATTERNCONSTRAINT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CIRCULARPATTERNCONSTRAINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchEntity** entities_raw(size_t& return_size) const = 0;
    virtual bool entities_raw(SketchEntity** value, size_t value_size) = 0;
    virtual SketchEntity** createdEntities_raw(size_t& return_size) const = 0;
    virtual SketchPoint* centerPoint_raw() const = 0;
    virtual bool centerPoint_raw(SketchPoint* value) = 0;
    virtual ModelParameter* quantity_raw() const = 0;
    virtual ModelParameter* totalAngle_raw() const = 0;
    virtual bool isSymmetric_raw() const = 0;
    virtual bool isSymmetric_raw(bool value) = 0;
    virtual bool* isSuppressed_raw(size_t& return_size) const = 0;
    virtual bool isSuppressed_raw(const bool* value, size_t value_size) = 0;
    virtual CircularPatternConstraint* nativeObject_raw() const = 0;
    virtual CircularPatternConstraint* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<SketchEntity>> CircularPatternConstraint::entities() const
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

inline bool CircularPatternConstraint::entities(const std::vector<core::Ptr<SketchEntity>>& value)
{
    SketchEntity** value_ = new SketchEntity*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = entities_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline std::vector<core::Ptr<SketchEntity>> CircularPatternConstraint::createdEntities() const
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

inline core::Ptr<SketchPoint> CircularPatternConstraint::centerPoint() const
{
    core::Ptr<SketchPoint> res = centerPoint_raw();
    return res;
}

inline bool CircularPatternConstraint::centerPoint(const core::Ptr<SketchPoint>& value)
{
    return centerPoint_raw(value.get());
}

inline core::Ptr<ModelParameter> CircularPatternConstraint::quantity() const
{
    core::Ptr<ModelParameter> res = quantity_raw();
    return res;
}

inline core::Ptr<ModelParameter> CircularPatternConstraint::totalAngle() const
{
    core::Ptr<ModelParameter> res = totalAngle_raw();
    return res;
}

inline bool CircularPatternConstraint::isSymmetric() const
{
    bool res = isSymmetric_raw();
    return res;
}

inline bool CircularPatternConstraint::isSymmetric(bool value)
{
    return isSymmetric_raw(value);
}

inline std::vector<bool> CircularPatternConstraint::isSuppressed() const
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

inline bool CircularPatternConstraint::isSuppressed(const std::vector<bool>& value)
{
    bool* value_ = new bool[value.size()];
    for (size_t i = 0; i < value.size(); ++i)
        value_[i] = value[i];

    bool res = isSuppressed_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline core::Ptr<CircularPatternConstraint> CircularPatternConstraint::nativeObject() const
{
    core::Ptr<CircularPatternConstraint> res = nativeObject_raw();
    return res;
}

inline core::Ptr<CircularPatternConstraint> CircularPatternConstraint::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<CircularPatternConstraint> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CIRCULARPATTERNCONSTRAINT_API