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
# ifdef __COMPILING_ADSK_FUSION_RECTANGULARPATTERNFEATURE_CPP__
# define ADSK_FUSION_RECTANGULARPATTERNFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_RECTANGULARPATTERNFEATURE_API
# endif
#else
# define ADSK_FUSION_RECTANGULARPATTERNFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
    class Occurrence;
    class PatternElements;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing rectangular pattern feature in a design.
class RectangularPatternFeature : public Feature {
public:

    /// Gets and sets the input entities. The collection can contain faces, features, bodies or occurrences.
    /// All of the entities must be of a single type. For example, it can't contain features and occurrences
    /// but only features or occurrences.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> inputEntities() const;
    bool inputEntities(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the first direction entity.
    /// This can be a linear edge, construction axis, sketch line or rectangular pattern feature.
    /// If a rectangular pattern feature is set, the directionOneEntity and directionTwoEntity properties return the same rectangular pattern feature.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> directionOneEntity() const;
    bool directionOneEntity(const core::Ptr<core::Base>& value);

    /// Gets and sets the second direction entity.
    /// This can be a linear edge, construction axis, sketch line or rectangular pattern feature.
    /// If a rectangular pattern feature is set, the directionOneEntity and directionTwoEntity properties return the same rectangular pattern feature.
    /// This can be null when not entity has been specified to control the second direction. In this case Fusion will compute a default direction which is
    /// 90 degrees to the direction one.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> directionTwoEntity() const;
    bool directionTwoEntity(const core::Ptr<core::Base>& value);

    /// Returns a Vector3D indicating the positive direction of direction one.
    core::Ptr<core::Vector3D> directionOne() const;

    /// Returns a Vector3D indicating the positive direction of direction two.
    core::Ptr<core::Vector3D> directionTwo() const;

    /// Gets the number of instances in the first direction.
    /// Edit the value through ModelParameter.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<ModelParameter> quantityOne() const;

    /// Gets the number of instances in the second direction.
    /// Edit the value through ModelParameter.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<ModelParameter> quantityTwo() const;

    /// Gets the distance in the first direction.
    /// Edit the value through ModelParameter.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<ModelParameter> distanceOne() const;

    /// Gets the distance in the second direction.
    /// Edit the value through ModelParameter.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<ModelParameter> distanceTwo() const;

    /// Gets and sets if the pattern in direction one is in one direction or symmetric.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isSymmetricInDirectionOne() const;
    bool isSymmetricInDirectionOne(bool value);

    /// Gets and sets if the pattern in direction two is in one direction or symmetric.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isSymmetricInDirectionTwo() const;
    bool isSymmetricInDirectionTwo(bool value);

    /// Gets and sets how the distance between elements is computed. Is initialized to ExtentPatternDistanceType when a new
    /// RectangularPatternFeatureInput has been created.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    PatternDistanceType patternDistanceType() const;
    bool patternDistanceType(PatternDistanceType value);

    /// Gets and sets the ids of the patterns to suppress.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    std::vector<size_t> suppressedElementsIds() const;
    bool suppressedElementsIds(const std::vector<size_t>& value);

    /// Gets the PatternElements collection that contains the elements created by this pattern.
    core::Ptr<PatternElements> patternElements() const;

    /// Get the features that were created for this pattern.
    /// Returns null in the case where the feature is parametric.
    core::Ptr<core::ObjectCollection> resultFeatures() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<RectangularPatternFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<RectangularPatternFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

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

    ADSK_FUSION_RECTANGULARPATTERNFEATURE_API static const char* classType();
    ADSK_FUSION_RECTANGULARPATTERNFEATURE_API const char* objectType() const override;
    ADSK_FUSION_RECTANGULARPATTERNFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RECTANGULARPATTERNFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* inputEntities_raw() const = 0;
    virtual bool inputEntities_raw(core::ObjectCollection* value) = 0;
    virtual core::Base* directionOneEntity_raw() const = 0;
    virtual bool directionOneEntity_raw(core::Base* value) = 0;
    virtual core::Base* directionTwoEntity_raw() const = 0;
    virtual bool directionTwoEntity_raw(core::Base* value) = 0;
    virtual core::Vector3D* directionOne_raw() const = 0;
    virtual core::Vector3D* directionTwo_raw() const = 0;
    virtual ModelParameter* quantityOne_raw() const = 0;
    virtual ModelParameter* quantityTwo_raw() const = 0;
    virtual ModelParameter* distanceOne_raw() const = 0;
    virtual ModelParameter* distanceTwo_raw() const = 0;
    virtual bool isSymmetricInDirectionOne_raw() const = 0;
    virtual bool isSymmetricInDirectionOne_raw(bool value) = 0;
    virtual bool isSymmetricInDirectionTwo_raw() const = 0;
    virtual bool isSymmetricInDirectionTwo_raw(bool value) = 0;
    virtual PatternDistanceType patternDistanceType_raw() const = 0;
    virtual bool patternDistanceType_raw(PatternDistanceType value) = 0;
    virtual size_t* suppressedElementsIds_raw(size_t& return_size) const = 0;
    virtual bool suppressedElementsIds_raw(const size_t* value, size_t value_size) = 0;
    virtual PatternElements* patternElements_raw() const = 0;
    virtual core::ObjectCollection* resultFeatures_raw() const = 0;
    virtual RectangularPatternFeature* nativeObject_raw() const = 0;
    virtual RectangularPatternFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual PatternEntityTypes patternEntityType_raw() const = 0;
    virtual PatternComputeOptions patternComputeOption_raw() const = 0;
    virtual bool patternComputeOption_raw(PatternComputeOptions value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> RectangularPatternFeature::inputEntities() const
{
    core::Ptr<core::ObjectCollection> res = inputEntities_raw();
    return res;
}

inline bool RectangularPatternFeature::inputEntities(const core::Ptr<core::ObjectCollection>& value)
{
    return inputEntities_raw(value.get());
}

inline core::Ptr<core::Base> RectangularPatternFeature::directionOneEntity() const
{
    core::Ptr<core::Base> res = directionOneEntity_raw();
    return res;
}

inline bool RectangularPatternFeature::directionOneEntity(const core::Ptr<core::Base>& value)
{
    return directionOneEntity_raw(value.get());
}

inline core::Ptr<core::Base> RectangularPatternFeature::directionTwoEntity() const
{
    core::Ptr<core::Base> res = directionTwoEntity_raw();
    return res;
}

inline bool RectangularPatternFeature::directionTwoEntity(const core::Ptr<core::Base>& value)
{
    return directionTwoEntity_raw(value.get());
}

inline core::Ptr<core::Vector3D> RectangularPatternFeature::directionOne() const
{
    core::Ptr<core::Vector3D> res = directionOne_raw();
    return res;
}

inline core::Ptr<core::Vector3D> RectangularPatternFeature::directionTwo() const
{
    core::Ptr<core::Vector3D> res = directionTwo_raw();
    return res;
}

inline core::Ptr<ModelParameter> RectangularPatternFeature::quantityOne() const
{
    core::Ptr<ModelParameter> res = quantityOne_raw();
    return res;
}

inline core::Ptr<ModelParameter> RectangularPatternFeature::quantityTwo() const
{
    core::Ptr<ModelParameter> res = quantityTwo_raw();
    return res;
}

inline core::Ptr<ModelParameter> RectangularPatternFeature::distanceOne() const
{
    core::Ptr<ModelParameter> res = distanceOne_raw();
    return res;
}

inline core::Ptr<ModelParameter> RectangularPatternFeature::distanceTwo() const
{
    core::Ptr<ModelParameter> res = distanceTwo_raw();
    return res;
}

inline bool RectangularPatternFeature::isSymmetricInDirectionOne() const
{
    bool res = isSymmetricInDirectionOne_raw();
    return res;
}

inline bool RectangularPatternFeature::isSymmetricInDirectionOne(bool value)
{
    return isSymmetricInDirectionOne_raw(value);
}

inline bool RectangularPatternFeature::isSymmetricInDirectionTwo() const
{
    bool res = isSymmetricInDirectionTwo_raw();
    return res;
}

inline bool RectangularPatternFeature::isSymmetricInDirectionTwo(bool value)
{
    return isSymmetricInDirectionTwo_raw(value);
}

inline PatternDistanceType RectangularPatternFeature::patternDistanceType() const
{
    PatternDistanceType res = patternDistanceType_raw();
    return res;
}

inline bool RectangularPatternFeature::patternDistanceType(PatternDistanceType value)
{
    return patternDistanceType_raw(value);
}

inline std::vector<size_t> RectangularPatternFeature::suppressedElementsIds() const
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

inline bool RectangularPatternFeature::suppressedElementsIds(const std::vector<size_t>& value)
{
    return suppressedElementsIds_raw(value.empty() ? nullptr : &value[0], value.size());
}

inline core::Ptr<PatternElements> RectangularPatternFeature::patternElements() const
{
    core::Ptr<PatternElements> res = patternElements_raw();
    return res;
}

inline core::Ptr<core::ObjectCollection> RectangularPatternFeature::resultFeatures() const
{
    core::Ptr<core::ObjectCollection> res = resultFeatures_raw();
    return res;
}

inline core::Ptr<RectangularPatternFeature> RectangularPatternFeature::nativeObject() const
{
    core::Ptr<RectangularPatternFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<RectangularPatternFeature> RectangularPatternFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<RectangularPatternFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline PatternEntityTypes RectangularPatternFeature::patternEntityType() const
{
    PatternEntityTypes res = patternEntityType_raw();
    return res;
}

inline PatternComputeOptions RectangularPatternFeature::patternComputeOption() const
{
    PatternComputeOptions res = patternComputeOption_raw();
    return res;
}

inline bool RectangularPatternFeature::patternComputeOption(PatternComputeOptions value)
{
    return patternComputeOption_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RECTANGULARPATTERNFEATURE_API