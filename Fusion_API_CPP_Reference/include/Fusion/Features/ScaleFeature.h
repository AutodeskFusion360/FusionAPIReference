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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SCALEFEATURE_CPP__
# define ADSK_FUSION_SCALEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_SCALEFEATURE_API
# endif
#else
# define ADSK_FUSION_SCALEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing scale feature in a design.
class ScaleFeature : public Feature {
public:

    /// Gets and sets the input entities.
    /// This collection can contain sketches, BRep bodies and T-Spline bodies in parametric modeling.
    /// It can contain sketches, BRep bodies, T-Spline bodies, mesh bodies, root component and occurrences in non-parametric modeling.
    /// If the scaling is non-uniform (the isUniform property is false), this collection cannot contain sketches or components.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> inputEntities() const;
    bool inputEntities(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the point as reference to scale. This can be a BRepVertex, a SketchPoint or a ConstructionPoint.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> point() const;
    bool point(const core::Ptr<core::Base>& value);

    /// Calling this method will change to a uniform scale.
    /// The isUniform is set to true if successful.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// scaleFactor : A ValueInput object that defines the scale factor.
    /// Returns true if successful.
    bool setToUniform(const core::Ptr<core::ValueInput>& scaleFactor);

    /// Calling this method will change to a non-uniform scale.
    /// Fails of the inputEntities collection contains sketches or components.
    /// The isUniform is set to false if successful.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// xScale : A ValueInput object that defines the scale in the X direction.
    /// yScale : A ValueInput object that defines the scale in the Y direction.
    /// zScale : A ValueInput object that defines the scale in the Z direction.
    /// Returns true if successful.
    bool setToNonUniform(const core::Ptr<core::ValueInput>& xScale, const core::Ptr<core::ValueInput>& yScale, const core::Ptr<core::ValueInput>& zScale);

    /// Gets if it's uniform scale.
    bool isUniform() const;

    /// Returns the parameter that controls the uniform scale factor. This will return null in the case
    /// where isUniform is false or the feature is non-parametric. You can use the properties and
    /// methods on the ModelParameter object to get and set the value.
    core::Ptr<ModelParameter> scaleFactor() const;

    /// Returns the parameter that controls the X scale factor. This will return null in the case
    /// where isUniform is false or the feature is non-parametric. You can use the properties and
    /// methods on the ModelParameter object to get and set the value.
    core::Ptr<ModelParameter> xScale() const;

    /// Returns the parameter that controls the Y scale factor. This will return null in the case
    /// where isUniform is false or the feature is non-parametric. You can use the properties and
    /// methods on the ModelParameter object to get and set the value.
    core::Ptr<ModelParameter> yScale() const;

    /// Returns the parameter that controls the Z scale factor. This will return null in the case
    /// where isUniform is false or the feature is non-parametric. You can use the properties and
    /// methods on the ModelParameter object to get and set the value.
    core::Ptr<ModelParameter> zScale() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<ScaleFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<ScaleFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_SCALEFEATURE_API static const char* classType();
    ADSK_FUSION_SCALEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_SCALEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SCALEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* inputEntities_raw() const = 0;
    virtual bool inputEntities_raw(core::ObjectCollection* value) = 0;
    virtual core::Base* point_raw() const = 0;
    virtual bool point_raw(core::Base* value) = 0;
    virtual bool setToUniform_raw(core::ValueInput* scaleFactor) = 0;
    virtual bool setToNonUniform_raw(core::ValueInput* xScale, core::ValueInput* yScale, core::ValueInput* zScale) = 0;
    virtual bool isUniform_raw() const = 0;
    virtual ModelParameter* scaleFactor_raw() const = 0;
    virtual ModelParameter* xScale_raw() const = 0;
    virtual ModelParameter* yScale_raw() const = 0;
    virtual ModelParameter* zScale_raw() const = 0;
    virtual ScaleFeature* nativeObject_raw() const = 0;
    virtual ScaleFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> ScaleFeature::inputEntities() const
{
    core::Ptr<core::ObjectCollection> res = inputEntities_raw();
    return res;
}

inline bool ScaleFeature::inputEntities(const core::Ptr<core::ObjectCollection>& value)
{
    return inputEntities_raw(value.get());
}

inline core::Ptr<core::Base> ScaleFeature::point() const
{
    core::Ptr<core::Base> res = point_raw();
    return res;
}

inline bool ScaleFeature::point(const core::Ptr<core::Base>& value)
{
    return point_raw(value.get());
}

inline bool ScaleFeature::setToUniform(const core::Ptr<core::ValueInput>& scaleFactor)
{
    bool res = setToUniform_raw(scaleFactor.get());
    return res;
}

inline bool ScaleFeature::setToNonUniform(const core::Ptr<core::ValueInput>& xScale, const core::Ptr<core::ValueInput>& yScale, const core::Ptr<core::ValueInput>& zScale)
{
    bool res = setToNonUniform_raw(xScale.get(), yScale.get(), zScale.get());
    return res;
}

inline bool ScaleFeature::isUniform() const
{
    bool res = isUniform_raw();
    return res;
}

inline core::Ptr<ModelParameter> ScaleFeature::scaleFactor() const
{
    core::Ptr<ModelParameter> res = scaleFactor_raw();
    return res;
}

inline core::Ptr<ModelParameter> ScaleFeature::xScale() const
{
    core::Ptr<ModelParameter> res = xScale_raw();
    return res;
}

inline core::Ptr<ModelParameter> ScaleFeature::yScale() const
{
    core::Ptr<ModelParameter> res = yScale_raw();
    return res;
}

inline core::Ptr<ModelParameter> ScaleFeature::zScale() const
{
    core::Ptr<ModelParameter> res = zScale_raw();
    return res;
}

inline core::Ptr<ScaleFeature> ScaleFeature::nativeObject() const
{
    core::Ptr<ScaleFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<ScaleFeature> ScaleFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<ScaleFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SCALEFEATURE_API