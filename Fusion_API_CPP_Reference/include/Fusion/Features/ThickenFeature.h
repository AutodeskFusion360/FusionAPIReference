//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include "Feature.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_THICKENFEATURE_CPP__
# define ADSK_FUSION_THICKENFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_THICKENFEATURE_API
# endif
#else
# define ADSK_FUSION_THICKENFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing Thicken feature in a design.
class ThickenFeature : public Feature {
public:

    /// Sets the faces and patch bodies to thicken.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// inputFaces : The faces or patch bodies to thicken. Faces need not be from the same component or body, nor do they need to be
    /// connected or touching one another.
    /// isChainSelection : A boolean value for setting whether or not faces that are tangentially connected to
    /// the input faces (if any) will be included in the offset. The default value is true.
    /// Returns true if successful
    bool setInputEntities(const core::Ptr<core::ObjectCollection>& inputFaces, bool isChainSelection = true);

    /// Gets and sets the ObjectCollection containing the face and/or patch bodies to thicken.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> inputFaces() const;
    bool inputFaces(const core::Ptr<core::ObjectCollection>& value);

    /// Returns the parameter controlling the thickness. You can edit the thickness value
    /// by editing the value of the parameter object.
    core::Ptr<ModelParameter> thickness() const;

    /// Gets and sets whether to add thickness symmetrically or only on one side of the face/s to thicken.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isSymmetric() const;
    bool isSymmetric(bool value);

    /// Gets and sets the feature operation to perform.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// Get and sets whether faces that are tangentially connected to the input faces will be included in the thicken feature.
    bool isChainSelection() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<ThickenFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this is not the NativeObject.
    core::Ptr<ThickenFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets and sets the thicken type for the thicken.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    ThickenTypes thickenType() const;
    bool thickenType(ThickenTypes value);

    ADSK_FUSION_THICKENFEATURE_API static const char* classType();
    ADSK_FUSION_THICKENFEATURE_API const char* objectType() const override;
    ADSK_FUSION_THICKENFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_THICKENFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setInputEntities_raw(core::ObjectCollection* inputFaces, bool isChainSelection) = 0;
    virtual core::ObjectCollection* inputFaces_raw() const = 0;
    virtual bool inputFaces_raw(core::ObjectCollection* value) = 0;
    virtual ModelParameter* thickness_raw() const = 0;
    virtual bool isSymmetric_raw() const = 0;
    virtual bool isSymmetric_raw(bool value) = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual bool isChainSelection_raw() const = 0;
    virtual ThickenFeature* nativeObject_raw() const = 0;
    virtual ThickenFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual ThickenTypes thickenType_raw() const = 0;
    virtual bool thickenType_raw(ThickenTypes value) = 0;
};

// Inline wrappers

inline bool ThickenFeature::setInputEntities(const core::Ptr<core::ObjectCollection>& inputFaces, bool isChainSelection)
{
    bool res = setInputEntities_raw(inputFaces.get(), isChainSelection);
    return res;
}

inline core::Ptr<core::ObjectCollection> ThickenFeature::inputFaces() const
{
    core::Ptr<core::ObjectCollection> res = inputFaces_raw();
    return res;
}

inline bool ThickenFeature::inputFaces(const core::Ptr<core::ObjectCollection>& value)
{
    return inputFaces_raw(value.get());
}

inline core::Ptr<ModelParameter> ThickenFeature::thickness() const
{
    core::Ptr<ModelParameter> res = thickness_raw();
    return res;
}

inline bool ThickenFeature::isSymmetric() const
{
    bool res = isSymmetric_raw();
    return res;
}

inline bool ThickenFeature::isSymmetric(bool value)
{
    return isSymmetric_raw(value);
}

inline FeatureOperations ThickenFeature::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool ThickenFeature::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline bool ThickenFeature::isChainSelection() const
{
    bool res = isChainSelection_raw();
    return res;
}

inline core::Ptr<ThickenFeature> ThickenFeature::nativeObject() const
{
    core::Ptr<ThickenFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<ThickenFeature> ThickenFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<ThickenFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline ThickenTypes ThickenFeature::thickenType() const
{
    ThickenTypes res = thickenType_raw();
    return res;
}

inline bool ThickenFeature::thickenType(ThickenTypes value)
{
    return thickenType_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_THICKENFEATURE_API