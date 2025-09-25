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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CUSTOMFEATURE_CPP__
# define ADSK_FUSION_CUSTOMFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMFEATURE_API
# endif
#else
# define ADSK_FUSION_CUSTOMFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class CustomFeatureDefinition;
    class CustomFeatureDependencies;
    class CustomFeatureParameters;
    class CustomNamedValues;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Object that represents an existing CustomFeature feature in a design.
class CustomFeature : public Feature {
public:

    /// Gets the CustomFeatureDefinition object associated with this custom feature.
    /// null/None is returned in the case where the definition does not exist, which is
    /// typically a result of the owning add-in not being loaded.
    core::Ptr<CustomFeatureDefinition> definition() const;

    /// Returns the collection of dependencies for this custom feature. You can
    /// use the collection to query, add, and remove dependencies.
    core::Ptr<CustomFeatureDependencies> dependencies() const;

    /// Returns the list of parameters associated with this custom feature.
    core::Ptr<CustomFeatureParameters> parameters() const;

    /// Returns the features combined by this custom feature. The start and end features and all of
    /// the features between them in the timeline are returned.
    std::vector<core::Ptr<core::Base>> features() const;

    /// Sets the start and end features that will be grouped by the custom feature.
    /// The "features" in this case can be any object that is visible in the timeline,
    /// such as modeling features, sketches, and construction geometry. The input features
    /// and all features between them in the timeline will be grouped by the custom feature.
    /// 
    /// The current start and end features can be determined by using the CustomFeature.features property
    /// and getting the first and last feature from the returned array.
    /// startFeature : The first feature in the timeline to be grouped by the custom feature. The start and the end features
    /// can be null which will result in moving all of the features out of the custom feature. This is useful
    /// in cases where you need to modify the inputs to a feature contained within a custom feature. You can
    /// move the features out of the custom feature, move the timeline marker as needed to edit the features,
    /// and then use this method again to add them back into the custom feature.
    /// endFeature : The last feature in the timeline that will be grouped by the custom feature. This can be the same
    /// feature that is provided as the startFeature argument for the case where the custom feature contains
    /// a single feature.
    /// Returns true if setting the start and end features was successful.
    bool setStartAndEndFeatures(const core::Ptr<core::Base>& startFeature, const core::Ptr<core::Base>& endFeature);

    /// Returns the set of custom named values associated with this custom feature. These are
    /// a set of named values that are saved with this feature that you can use to save
    /// any additional information that is useful for you in managing the custom feature.
    /// For example, you might have a setting like an option for different shapes that
    /// the user chooses when creating the feature that are not represented as a parameter.
    /// You can use this to save the chosen value so when the feature is computed or edited
    /// you can use the value originally chosen. During an edit, you might allow the user
    /// to edit this setting and you can update the saved custom value.
    core::Ptr<CustomNamedValues> customNamedValues() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<CustomFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this is not the NativeObject.
    core::Ptr<CustomFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_CUSTOMFEATURE_API static const char* classType();
    ADSK_FUSION_CUSTOMFEATURE_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CustomFeatureDefinition* definition_raw() const = 0;
    virtual CustomFeatureDependencies* dependencies_raw() const = 0;
    virtual CustomFeatureParameters* parameters_raw() const = 0;
    virtual core::Base** features_raw(size_t& return_size) const = 0;
    virtual bool setStartAndEndFeatures_raw(core::Base* startFeature, core::Base* endFeature) = 0;
    virtual CustomNamedValues* customNamedValues_raw() const = 0;
    virtual CustomFeature* nativeObject_raw() const = 0;
    virtual CustomFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<CustomFeatureDefinition> CustomFeature::definition() const
{
    core::Ptr<CustomFeatureDefinition> res = definition_raw();
    return res;
}

inline core::Ptr<CustomFeatureDependencies> CustomFeature::dependencies() const
{
    core::Ptr<CustomFeatureDependencies> res = dependencies_raw();
    return res;
}

inline core::Ptr<CustomFeatureParameters> CustomFeature::parameters() const
{
    core::Ptr<CustomFeatureParameters> res = parameters_raw();
    return res;
}

inline std::vector<core::Ptr<core::Base>> CustomFeature::features() const
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

inline bool CustomFeature::setStartAndEndFeatures(const core::Ptr<core::Base>& startFeature, const core::Ptr<core::Base>& endFeature)
{
    bool res = setStartAndEndFeatures_raw(startFeature.get(), endFeature.get());
    return res;
}

inline core::Ptr<CustomNamedValues> CustomFeature::customNamedValues() const
{
    core::Ptr<CustomNamedValues> res = customNamedValues_raw();
    return res;
}

inline core::Ptr<CustomFeature> CustomFeature::nativeObject() const
{
    core::Ptr<CustomFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<CustomFeature> CustomFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<CustomFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMFEATURE_API