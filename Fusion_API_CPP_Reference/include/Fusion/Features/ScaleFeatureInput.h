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
# ifdef __COMPILING_ADSK_FUSION_SCALEFEATUREINPUT_CPP__
# define ADSK_FUSION_SCALEFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_SCALEFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_SCALEFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a scale
/// feature.
class ScaleFeatureInput : public core::Base {
public:

    /// Gets and sets the input entities.
    /// This collection can contain sketches, BRep bodies and T-Spline bodies in parametric modeling.
    /// It can contain sketches, BRep bodies, T-Spline bodies, mesh bodies, root component and occurrences in non-parametric modeling.
    /// If the scaling is non-uniform (the isUniform property is false), this collection cannot contain sketches or components.
    core::Ptr<core::ObjectCollection> inputEntities() const;
    bool inputEntities(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the origin point of the scale. This can be a BRepVertex, a SketchPoint or a ConstructionPoint.
    core::Ptr<core::Base> point() const;
    bool point(const core::Ptr<core::Base>& value);

    /// Gets and sets the scale factor used for a uniform scale.
    /// Setting this value will cause the isUniform property to be set to true.
    core::Ptr<core::ValueInput> scaleFactor() const;
    bool scaleFactor(const core::Ptr<core::ValueInput>& value);

    /// Gets if the scale is uniform.
    bool isUniform() const;

    /// Sets the scale factor for the x, y, z directions to define a non-uniform scale.
    /// Calling this method will cause the isUniform property to be set to false.
    /// This will fail if the inputEntities collection contains sketches or components.
    /// xScale : A ValueInput object that defines the scale in the X direction.
    /// yScale : A ValueInput object that defines the scale in the Y direction.
    /// zScale : A ValueInput object that defines the scale in the Z direction.
    /// Returns true if successful.
    bool setToNonUniform(const core::Ptr<core::ValueInput>& xScale, const core::Ptr<core::ValueInput>& yScale, const core::Ptr<core::ValueInput>& zScale);

    /// Gets the scale in X direction.
    core::Ptr<core::ValueInput> xScale() const;

    /// Gets the scale in Y direction.
    core::Ptr<core::ValueInput> yScale() const;

    /// Gets the scale in Z direction.
    core::Ptr<core::ValueInput> zScale() const;

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

    ADSK_FUSION_SCALEFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_SCALEFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_SCALEFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SCALEFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* inputEntities_raw() const = 0;
    virtual bool inputEntities_raw(core::ObjectCollection* value) = 0;
    virtual core::Base* point_raw() const = 0;
    virtual bool point_raw(core::Base* value) = 0;
    virtual core::ValueInput* scaleFactor_raw() const = 0;
    virtual bool scaleFactor_raw(core::ValueInput* value) = 0;
    virtual bool isUniform_raw() const = 0;
    virtual bool setToNonUniform_raw(core::ValueInput* xScale, core::ValueInput* yScale, core::ValueInput* zScale) = 0;
    virtual core::ValueInput* xScale_raw() const = 0;
    virtual core::ValueInput* yScale_raw() const = 0;
    virtual core::ValueInput* zScale_raw() const = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> ScaleFeatureInput::inputEntities() const
{
    core::Ptr<core::ObjectCollection> res = inputEntities_raw();
    return res;
}

inline bool ScaleFeatureInput::inputEntities(const core::Ptr<core::ObjectCollection>& value)
{
    return inputEntities_raw(value.get());
}

inline core::Ptr<core::Base> ScaleFeatureInput::point() const
{
    core::Ptr<core::Base> res = point_raw();
    return res;
}

inline bool ScaleFeatureInput::point(const core::Ptr<core::Base>& value)
{
    return point_raw(value.get());
}

inline core::Ptr<core::ValueInput> ScaleFeatureInput::scaleFactor() const
{
    core::Ptr<core::ValueInput> res = scaleFactor_raw();
    return res;
}

inline bool ScaleFeatureInput::scaleFactor(const core::Ptr<core::ValueInput>& value)
{
    return scaleFactor_raw(value.get());
}

inline bool ScaleFeatureInput::isUniform() const
{
    bool res = isUniform_raw();
    return res;
}

inline bool ScaleFeatureInput::setToNonUniform(const core::Ptr<core::ValueInput>& xScale, const core::Ptr<core::ValueInput>& yScale, const core::Ptr<core::ValueInput>& zScale)
{
    bool res = setToNonUniform_raw(xScale.get(), yScale.get(), zScale.get());
    return res;
}

inline core::Ptr<core::ValueInput> ScaleFeatureInput::xScale() const
{
    core::Ptr<core::ValueInput> res = xScale_raw();
    return res;
}

inline core::Ptr<core::ValueInput> ScaleFeatureInput::yScale() const
{
    core::Ptr<core::ValueInput> res = yScale_raw();
    return res;
}

inline core::Ptr<core::ValueInput> ScaleFeatureInput::zScale() const
{
    core::Ptr<core::ValueInput> res = zScale_raw();
    return res;
}

inline core::Ptr<BaseFeature> ScaleFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool ScaleFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SCALEFEATUREINPUT_API