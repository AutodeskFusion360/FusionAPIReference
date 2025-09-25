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
#include "Feature.h"
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PATHPATTERNFEATURE_CPP__
# define ADSK_FUSION_PATHPATTERNFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_PATHPATTERNFEATURE_API
# endif
#else
# define ADSK_FUSION_PATHPATTERNFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
    class Occurrence;
    class Path;
    class PatternElements;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing path pattern feature in a design.
class PathPatternFeature : public Feature {
public:

    /// Gets and sets the input entities. The collection can contain faces, features, bodies or occurrences.
    /// All of the entities must be of a single type. For example, it can't contain features and occurrences
    /// but only features or occurrences.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> inputEntities() const;
    bool inputEntities(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the path to create the pattern on path.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<Path> path() const;
    bool path(const core::Ptr<Path>& value);

    /// Gets the quantity of the elements.
    /// Edit the value through ModelParameter.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<ModelParameter> quantity() const;

    /// Gets the distance.
    /// Edit the value through ModelParameter.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<ModelParameter> distance() const;

    /// Gets and sets the start point on the path to count the distance.
    /// It's between 0 and 1. 0 means start point of the path, 1 means end point of the path.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    double startPoint() const;
    bool startPoint(double value);

    /// Gets and sets if flip the direction from start point.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isFlipDirection() const;
    bool isFlipDirection(bool value);

    /// Gets and sets how the distance between elements is computed.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    PatternDistanceType patternDistanceType() const;
    bool patternDistanceType(PatternDistanceType value);

    /// Gets and sets if the pattern is in one direction or symmetric.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isSymmetric() const;
    bool isSymmetric(bool value);

    /// Gets and sets if the orientation is along path.
    /// If false, the orientation is identical.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isOrientationAlongPath() const;
    bool isOrientationAlongPath(bool value);

    /// Gets and sets the id's of the elements to suppress.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    std::vector<size_t> suppressedElementsIds() const;
    bool suppressedElementsIds(const std::vector<size_t>& value);

    /// Gets the PatternElements collection that contains the elements created by this pattern.
    core::Ptr<PatternElements> patternElements() const;

    /// Get the features that were created for this mirror.
    /// Returns null in the case where the feature is parametric.
    core::Ptr<core::ObjectCollection> resultFeatures() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<PathPatternFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<PathPatternFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the type of entities the pattern consists of. This can be used to help
    /// determine the type of results that will be found in the pattern elements.
    PatternEntityTypes patternEntityType() const;

    /// Gets and sets the compute option for this pattern feature.
    /// This property only applies when patterning features and is ignored in the direct modeling environment.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    PatternComputeOptions patternComputeOption() const;
    bool patternComputeOption(PatternComputeOptions value);

    ADSK_FUSION_PATHPATTERNFEATURE_API static const char* classType();
    ADSK_FUSION_PATHPATTERNFEATURE_API const char* objectType() const override;
    ADSK_FUSION_PATHPATTERNFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PATHPATTERNFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* inputEntities_raw() const = 0;
    virtual bool inputEntities_raw(core::ObjectCollection* value) = 0;
    virtual Path* path_raw() const = 0;
    virtual bool path_raw(Path* value) = 0;
    virtual ModelParameter* quantity_raw() const = 0;
    virtual ModelParameter* distance_raw() const = 0;
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
    virtual size_t* suppressedElementsIds_raw(size_t& return_size) const = 0;
    virtual bool suppressedElementsIds_raw(const size_t* value, size_t value_size) = 0;
    virtual PatternElements* patternElements_raw() const = 0;
    virtual core::ObjectCollection* resultFeatures_raw() const = 0;
    virtual PathPatternFeature* nativeObject_raw() const = 0;
    virtual PathPatternFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual PatternEntityTypes patternEntityType_raw() const = 0;
    virtual PatternComputeOptions patternComputeOption_raw() const = 0;
    virtual bool patternComputeOption_raw(PatternComputeOptions value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> PathPatternFeature::inputEntities() const
{
    core::Ptr<core::ObjectCollection> res = inputEntities_raw();
    return res;
}

inline bool PathPatternFeature::inputEntities(const core::Ptr<core::ObjectCollection>& value)
{
    return inputEntities_raw(value.get());
}

inline core::Ptr<Path> PathPatternFeature::path() const
{
    core::Ptr<Path> res = path_raw();
    return res;
}

inline bool PathPatternFeature::path(const core::Ptr<Path>& value)
{
    return path_raw(value.get());
}

inline core::Ptr<ModelParameter> PathPatternFeature::quantity() const
{
    core::Ptr<ModelParameter> res = quantity_raw();
    return res;
}

inline core::Ptr<ModelParameter> PathPatternFeature::distance() const
{
    core::Ptr<ModelParameter> res = distance_raw();
    return res;
}

inline double PathPatternFeature::startPoint() const
{
    double res = startPoint_raw();
    return res;
}

inline bool PathPatternFeature::startPoint(double value)
{
    return startPoint_raw(value);
}

inline bool PathPatternFeature::isFlipDirection() const
{
    bool res = isFlipDirection_raw();
    return res;
}

inline bool PathPatternFeature::isFlipDirection(bool value)
{
    return isFlipDirection_raw(value);
}

inline PatternDistanceType PathPatternFeature::patternDistanceType() const
{
    PatternDistanceType res = patternDistanceType_raw();
    return res;
}

inline bool PathPatternFeature::patternDistanceType(PatternDistanceType value)
{
    return patternDistanceType_raw(value);
}

inline bool PathPatternFeature::isSymmetric() const
{
    bool res = isSymmetric_raw();
    return res;
}

inline bool PathPatternFeature::isSymmetric(bool value)
{
    return isSymmetric_raw(value);
}

inline bool PathPatternFeature::isOrientationAlongPath() const
{
    bool res = isOrientationAlongPath_raw();
    return res;
}

inline bool PathPatternFeature::isOrientationAlongPath(bool value)
{
    return isOrientationAlongPath_raw(value);
}

inline std::vector<size_t> PathPatternFeature::suppressedElementsIds() const
{
    std::vector<size_t> res;
    size_t s;

    size_t* p= suppressedElementsIds_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PathPatternFeature::suppressedElementsIds(const std::vector<size_t>& value)
{
    return suppressedElementsIds_raw(value.empty() ? nullptr : &value[0], value.size());
}

inline core::Ptr<PatternElements> PathPatternFeature::patternElements() const
{
    core::Ptr<PatternElements> res = patternElements_raw();
    return res;
}

inline core::Ptr<core::ObjectCollection> PathPatternFeature::resultFeatures() const
{
    core::Ptr<core::ObjectCollection> res = resultFeatures_raw();
    return res;
}

inline core::Ptr<PathPatternFeature> PathPatternFeature::nativeObject() const
{
    core::Ptr<PathPatternFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<PathPatternFeature> PathPatternFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<PathPatternFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline PatternEntityTypes PathPatternFeature::patternEntityType() const
{
    PatternEntityTypes res = patternEntityType_raw();
    return res;
}

inline PatternComputeOptions PathPatternFeature::patternComputeOption() const
{
    PatternComputeOptions res = patternComputeOption_raw();
    return res;
}

inline bool PathPatternFeature::patternComputeOption(PatternComputeOptions value)
{
    return patternComputeOption_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PATHPATTERNFEATURE_API