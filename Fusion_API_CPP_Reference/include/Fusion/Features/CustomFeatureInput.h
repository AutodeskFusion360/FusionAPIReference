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
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CUSTOMFEATUREINPUT_CPP__
# define ADSK_FUSION_CUSTOMFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_CUSTOMFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// This class defines the methods and properties that pertain to the definition of a Ruled Surface feature.
class CustomFeatureInput : public core::Base {
public:

    /// Adds an entity or parameter this feature is dependent on. This is used by Fusion to know
    /// when to recompute this feature and to control the behavior of the feature's node in the timeline.
    /// id : An ID for this dependency. This is used to allow you to identify which dependency is which in the future.
    /// The ID must be unique with respect to the other dependencies of this custom feature.
    /// entity : The entity or parameter you want to add as a dependency. This can be a BRepBody, BRepFace, BrepEdge,
    /// BRepVertex, a sketch, any sketch entities, a profile, any construction geometry, or any parameter.
    /// Returns true if the dependency was successfully added.
    bool addDependency(const std::string& id, const core::Ptr<core::Base>& entity);

    /// Defines the information needed to create a new custom parameter that will be associated with
    /// this feature. A custom parameter appears as a model parameter and will be listed as a child of the
    /// custom feature in the parameter dialog. The custom feature will automatically have a dependency
    /// on this parameter.
    /// id : An id for this parameter. This is used to allow you to identify the parameter in the future. This
    /// must be unique with respect to all other parameters associated with this custom feature. It's needed
    /// because the label does not need to be unique and the Fusion auto-generated name can be edited by
    /// the user.
    /// label : The label for this parameter as seen in the parameters dialog. This identifies to the user the purpose
    /// of this parameter. For example, when you create an extrusion with a specific distance, there are two
    /// parameters displayed in the parameters dialog with the labels "AlongDistance" and "TaperAngle". This does
    /// not have to be unique because in the case of a fillet feature there can be multiple parameters all labeled "Radius".
    /// value : ValueInput object that specifies the value of the parameter. If the ValueInput was created using a real,
    /// the value will be interpreted using the internal unit for the unit type specified by the "units" argument.
    /// For example, if the ValueInput was created using the real value 5 and the input to the "units" argument is
    /// any valid length unit, the value will be interpreted as 5 centimeters since centimeters is the internal unit
    /// for lengths. If the "units" argument is a valid angle unit the value will be interpreted as 5 radians.
    /// 
    /// If the ValueInput was created using a string, the string is used as-is for the expression of the parameter.
    /// This means if there are units as part of the string it must evaluate to the same unit type as that specified
    /// by the "units" argument and if no units are specified it will use the current default units specified for
    /// the current document. For example, if the ValueInput was created with the string "5 in", then the "units"
    /// argument must define any valid length so it is compatible. If the ValueInput was created with the string "5",
    /// any unit type can be used and the result will be 5 of that unit.
    /// 
    /// When using a ValueInput created using a string, it's the same as creating a parameter in the user-interface.
    /// You can specify any valid expression, i.e. "5", "5 in", "5 in / 2", "5 + Length", etc. and you can choose
    /// from many different types of units. The only requirement is that the units must match in type. For example,
    /// they must both be lengths, or they must both be angles.
    /// units : The units to use for the value of the parameter. Units specified must match the units specified (if any)
    /// in the ValueInput object.
    /// 
    /// To create a parameter with no units (unitless) you can specify either an empty string.
    /// isVisible : Optional argument that specifies if the parameter will be visible in the parameters dialog or not. By
    /// default the parameter will be visible.
    /// 
    /// This can be useful in cases where the feature can be edited to be in different states where a parameter
    /// is only valid in a certain state. You can change the visibility based on the current state of the feature
    /// and if that parameter should be available for edit. This implies that you create all the parameters that
    /// might be needed and then change their visibility based on the current state of the feature. The parameters
    /// that are not visible will not be returned by the ModelParameters collection and are only available through
    /// the custom feature they're associated with.
    /// Returns true if the definition of the model parameter was successfully added.
    bool addCustomParameter(const std::string& id, const std::string& label, const core::Ptr<core::ValueInput>& value, const std::string& units, bool isVisible = true);

    /// Sets the start and end features that the custom feature will group. A "feature" in this
    /// case is an object that is visible in the timeline, such as modeling features, sketches,
    /// and construction geometry. The custom feature will group the input start and end features
    /// and all features between them in the timeline.
    /// 
    /// You can determine the current start and end features using the features property and use
    /// the first and last features returned. If the custom feature contains a single feature,
    /// you can use the same feature for both the start and end feature arguments. You can also
    /// use null for both arguments to remove all features from a custom feature. The custom feature
    /// still exists but will be empty, and the features will be displayed individually within the timeline.
    /// startFeature : The first feature in the timeline that the custom feature will group.
    /// endFeature : The last feature in the timeline that the custom feature will group. When creating a custom feature
    /// that contains a single feature, this can be the same feature as the startFeature argument.
    /// Returns true if setting the start and end features was successful.
    bool setStartAndEndFeatures(const core::Ptr<core::Base>& startFeature, const core::Ptr<core::Base>& endFeature);

    /// Returns the features that are grouped by this custom feature. The start and end features and all of
    /// the features between them in the timeline are returned. This includes all entities represented in
    /// the timeline including modeling features, construction geometry, sketches, etc.
    std::vector<core::Ptr<core::Base>> features() const;

    ADSK_FUSION_CUSTOMFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_CUSTOMFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool addDependency_raw(const char* id, core::Base* entity) = 0;
    virtual bool addCustomParameter_raw(const char* id, const char* label, core::ValueInput* value, const char* units, bool isVisible) = 0;
    virtual bool setStartAndEndFeatures_raw(core::Base* startFeature, core::Base* endFeature) = 0;
    virtual core::Base** features_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline bool CustomFeatureInput::addDependency(const std::string& id, const core::Ptr<core::Base>& entity)
{
    bool res = addDependency_raw(id.c_str(), entity.get());
    return res;
}

inline bool CustomFeatureInput::addCustomParameter(const std::string& id, const std::string& label, const core::Ptr<core::ValueInput>& value, const std::string& units, bool isVisible)
{
    bool res = addCustomParameter_raw(id.c_str(), label.c_str(), value.get(), units.c_str(), isVisible);
    return res;
}

inline bool CustomFeatureInput::setStartAndEndFeatures(const core::Ptr<core::Base>& startFeature, const core::Ptr<core::Base>& endFeature)
{
    bool res = setStartAndEndFeatures_raw(startFeature.get(), endFeature.get());
    return res;
}

inline std::vector<core::Ptr<core::Base>> CustomFeatureInput::features() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= features_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMFEATUREINPUT_API