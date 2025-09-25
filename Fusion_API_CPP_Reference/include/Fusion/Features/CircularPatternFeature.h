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
# ifdef __COMPILING_ADSK_FUSION_CIRCULARPATTERNFEATURE_CPP__
# define ADSK_FUSION_CIRCULARPATTERNFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_CIRCULARPATTERNFEATURE_API
# endif
#else
# define ADSK_FUSION_CIRCULARPATTERNFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
    class Occurrence;
    class PatternElements;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing circular pattern feature in a design.
class CircularPatternFeature : public Feature {
public:

    /// Gets and sets the input entities. The collection can contain faces, features, bodies or occurrences.
    /// All of the entities must be of a single type. For example, it can't contain features and occurrences
    /// but only features or occurrences.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> inputEntities() const;
    bool inputEntities(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the axis of circular pattern. This can be a sketch line, linear edge,
    /// construction axis, an edge/sketch curve that defines an axis (circle, etc.) or a face that defines an axis (cylinder, cone, torus, etc.).
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> axis() const;
    bool axis(const core::Ptr<core::Base>& value);

    /// Returns the parameter controlling the total angle.
    /// To edit the angle use properties on the parameter to edit its value.
    /// This property returns null in the case where the feature is non-parametric.
    /// A negative value can be used to change the direction of the pattern.
    core::Ptr<ModelParameter> totalAngle() const;

    /// Gets and sets if the angle extent is in one direction or symmetric.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isSymmetric() const;
    bool isSymmetric(bool value);

    /// Returns the parameter controlling the number of pattern elements, including any suppressed elements.
    /// To edit the quantity use properties on the parameter to edit its value.
    /// This property returns null in the case where the feature is non-parametric.
    core::Ptr<ModelParameter> quantity() const;

    /// Gets and sets the id's of the elements to suppress.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    std::vector<size_t> suppressedElementsIds() const;
    bool suppressedElementsIds(const std::vector<size_t>& value);

    /// Gets the PatternElements collection that contains the elements created by this pattern.
    core::Ptr<PatternElements> patternElements() const;

    /// Returns the features that were created as a result of this pattern.
    /// This is only valid for a direct edit model and this returns null
    /// in the case where the feature is parametric.
    core::Ptr<core::ObjectCollection> resultFeatures() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<CircularPatternFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<CircularPatternFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

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

    ADSK_FUSION_CIRCULARPATTERNFEATURE_API static const char* classType();
    ADSK_FUSION_CIRCULARPATTERNFEATURE_API const char* objectType() const override;
    ADSK_FUSION_CIRCULARPATTERNFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CIRCULARPATTERNFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* inputEntities_raw() const = 0;
    virtual bool inputEntities_raw(core::ObjectCollection* value) = 0;
    virtual core::Base* axis_raw() const = 0;
    virtual bool axis_raw(core::Base* value) = 0;
    virtual ModelParameter* totalAngle_raw() const = 0;
    virtual bool isSymmetric_raw() const = 0;
    virtual bool isSymmetric_raw(bool value) = 0;
    virtual ModelParameter* quantity_raw() const = 0;
    virtual size_t* suppressedElementsIds_raw(size_t& return_size) const = 0;
    virtual bool suppressedElementsIds_raw(const size_t* value, size_t value_size) = 0;
    virtual PatternElements* patternElements_raw() const = 0;
    virtual core::ObjectCollection* resultFeatures_raw() const = 0;
    virtual CircularPatternFeature* nativeObject_raw() const = 0;
    virtual CircularPatternFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual PatternEntityTypes patternEntityType_raw() const = 0;
    virtual PatternComputeOptions patternComputeOption_raw() const = 0;
    virtual bool patternComputeOption_raw(PatternComputeOptions value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> CircularPatternFeature::inputEntities() const
{
    core::Ptr<core::ObjectCollection> res = inputEntities_raw();
    return res;
}

inline bool CircularPatternFeature::inputEntities(const core::Ptr<core::ObjectCollection>& value)
{
    return inputEntities_raw(value.get());
}

inline core::Ptr<core::Base> CircularPatternFeature::axis() const
{
    core::Ptr<core::Base> res = axis_raw();
    return res;
}

inline bool CircularPatternFeature::axis(const core::Ptr<core::Base>& value)
{
    return axis_raw(value.get());
}

inline core::Ptr<ModelParameter> CircularPatternFeature::totalAngle() const
{
    core::Ptr<ModelParameter> res = totalAngle_raw();
    return res;
}

inline bool CircularPatternFeature::isSymmetric() const
{
    bool res = isSymmetric_raw();
    return res;
}

inline bool CircularPatternFeature::isSymmetric(bool value)
{
    return isSymmetric_raw(value);
}

inline core::Ptr<ModelParameter> CircularPatternFeature::quantity() const
{
    core::Ptr<ModelParameter> res = quantity_raw();
    return res;
}

inline std::vector<size_t> CircularPatternFeature::suppressedElementsIds() const
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

inline bool CircularPatternFeature::suppressedElementsIds(const std::vector<size_t>& value)
{
    return suppressedElementsIds_raw(value.empty() ? nullptr : &value[0], value.size());
}

inline core::Ptr<PatternElements> CircularPatternFeature::patternElements() const
{
    core::Ptr<PatternElements> res = patternElements_raw();
    return res;
}

inline core::Ptr<core::ObjectCollection> CircularPatternFeature::resultFeatures() const
{
    core::Ptr<core::ObjectCollection> res = resultFeatures_raw();
    return res;
}

inline core::Ptr<CircularPatternFeature> CircularPatternFeature::nativeObject() const
{
    core::Ptr<CircularPatternFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<CircularPatternFeature> CircularPatternFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<CircularPatternFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline PatternEntityTypes CircularPatternFeature::patternEntityType() const
{
    PatternEntityTypes res = patternEntityType_raw();
    return res;
}

inline PatternComputeOptions CircularPatternFeature::patternComputeOption() const
{
    PatternComputeOptions res = patternComputeOption_raw();
    return res;
}

inline bool CircularPatternFeature::patternComputeOption(PatternComputeOptions value)
{
    return patternComputeOption_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CIRCULARPATTERNFEATURE_API