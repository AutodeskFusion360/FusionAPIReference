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
# ifdef __COMPILING_ADSK_FUSION_PATHPATTERNFEATUREINPUT_CPP__
# define ADSK_FUSION_PATHPATTERNFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_PATHPATTERNFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_PATHPATTERNFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class Path;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a path pattern
/// feature.
class PathPatternFeatureInput : public core::Base {
public:

    /// Gets and sets the input entities. The collection can contain faces, features, bodies or occurrences.
    /// All of the entities must be of a single type. For example, it can't contain features and occurrences
    /// but only features or occurrences.
    core::Ptr<core::ObjectCollection> inputEntities() const;
    bool inputEntities(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the path to create the pattern on path.
    core::Ptr<Path> path() const;
    bool path(const core::Ptr<Path>& value);

    /// Gets and sets quantity of the elements.
    core::Ptr<core::ValueInput> quantity() const;
    bool quantity(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the distance.
    core::Ptr<core::ValueInput> distance() const;
    bool distance(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the start point on the path to count the distance.
    /// It's between 0 and 1. 0 means start point of the path, 1 means end point of the path.
    double startPoint() const;
    bool startPoint(double value);

    /// Gets and sets if flip the direction from start point.
    bool isFlipDirection() const;
    bool isFlipDirection(bool value);

    /// Gets and sets how the distance between elements is computed.
    PatternDistanceType patternDistanceType() const;
    bool patternDistanceType(PatternDistanceType value);

    /// Gets and sets if the pattern is in one direction or symmetric.
    bool isSymmetric() const;
    bool isSymmetric(bool value);

    /// Gets and sets if the orientation is along path.
    /// If false, the orientation is identical.
    bool isOrientationAlongPath() const;
    bool isOrientationAlongPath(bool value);

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

    ADSK_FUSION_PATHPATTERNFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_PATHPATTERNFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_PATHPATTERNFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PATHPATTERNFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* inputEntities_raw() const = 0;
    virtual bool inputEntities_raw(core::ObjectCollection* value) = 0;
    virtual Path* path_raw() const = 0;
    virtual bool path_raw(Path* value) = 0;
    virtual core::ValueInput* quantity_raw() const = 0;
    virtual bool quantity_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* distance_raw() const = 0;
    virtual bool distance_raw(core::ValueInput* value) = 0;
    virtual double startPoint_raw() const = 0;
    virtual bool startPoint_raw(double value) = 0;
    virtual bool isFlipDirection_raw() const = 0;
    virtual bool isFlipDirection_raw(bool value) = 0;
    virtual PatternDistanceType patternDistanceType_raw() const = 0;
    virtual bool patternDistanceType_raw(PatternDistanceType value) = 0;
    virtual bool isSymmetric_raw() const = 0;
    virtual bool isSymmetric_raw(bool value) = 0;
    virtual bool isOrientationAlongPath_raw() const = 0;
    virtual bool isOrientationAlongPath_raw(bool value) = 0;
    virtual PatternComputeOptions patternComputeOption_raw() const = 0;
    virtual bool patternComputeOption_raw(PatternComputeOptions value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> PathPatternFeatureInput::inputEntities() const
{
    core::Ptr<core::ObjectCollection> res = inputEntities_raw();
    return res;
}

inline bool PathPatternFeatureInput::inputEntities(const core::Ptr<core::ObjectCollection>& value)
{
    return inputEntities_raw(value.get());
}

inline core::Ptr<Path> PathPatternFeatureInput::path() const
{
    core::Ptr<Path> res = path_raw();
    return res;
}

inline bool PathPatternFeatureInput::path(const core::Ptr<Path>& value)
{
    return path_raw(value.get());
}

inline core::Ptr<core::ValueInput> PathPatternFeatureInput::quantity() const
{
    core::Ptr<core::ValueInput> res = quantity_raw();
    return res;
}

inline bool PathPatternFeatureInput::quantity(const core::Ptr<core::ValueInput>& value)
{
    return quantity_raw(value.get());
}

inline core::Ptr<core::ValueInput> PathPatternFeatureInput::distance() const
{
    core::Ptr<core::ValueInput> res = distance_raw();
    return res;
}

inline bool PathPatternFeatureInput::distance(const core::Ptr<core::ValueInput>& value)
{
    return distance_raw(value.get());
}

inline double PathPatternFeatureInput::startPoint() const
{
    double res = startPoint_raw();
    return res;
}

inline bool PathPatternFeatureInput::startPoint(double value)
{
    return startPoint_raw(value);
}

inline bool PathPatternFeatureInput::isFlipDirection() const
{
    bool res = isFlipDirection_raw();
    return res;
}

inline bool PathPatternFeatureInput::isFlipDirection(bool value)
{
    return isFlipDirection_raw(value);
}

inline PatternDistanceType PathPatternFeatureInput::patternDistanceType() const
{
    PatternDistanceType res = patternDistanceType_raw();
    return res;
}

inline bool PathPatternFeatureInput::patternDistanceType(PatternDistanceType value)
{
    return patternDistanceType_raw(value);
}

inline bool PathPatternFeatureInput::isSymmetric() const
{
    bool res = isSymmetric_raw();
    return res;
}

inline bool PathPatternFeatureInput::isSymmetric(bool value)
{
    return isSymmetric_raw(value);
}

inline bool PathPatternFeatureInput::isOrientationAlongPath() const
{
    bool res = isOrientationAlongPath_raw();
    return res;
}

inline bool PathPatternFeatureInput::isOrientationAlongPath(bool value)
{
    return isOrientationAlongPath_raw(value);
}

inline PatternComputeOptions PathPatternFeatureInput::patternComputeOption() const
{
    PatternComputeOptions res = patternComputeOption_raw();
    return res;
}

inline bool PathPatternFeatureInput::patternComputeOption(PatternComputeOptions value)
{
    return patternComputeOption_raw(value);
}

inline core::Ptr<BaseFeature> PathPatternFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool PathPatternFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PATHPATTERNFEATUREINPUT_API