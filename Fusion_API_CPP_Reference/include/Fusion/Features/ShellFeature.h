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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SHELLFEATURE_CPP__
# define ADSK_FUSION_SHELLFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_SHELLFEATURE_API
# endif
#else
# define ADSK_FUSION_SHELLFEATURE_API XI_IMPORT
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

/// Object that represents an existing shell feature in a design.
class ShellFeature : public Feature {
public:

    /// Method that sets faces to remove and bodies to preform shell. Return false if any faces are input, and the owning bodies of the faces are also input.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// inputEntities : The collection contains the faces to remove and the bodies to perform shell.
    /// Fails if any faces are input, and the owning bodies of the faces are also input.
    /// isTangentChain : A boolean value for setting whether or not faces that are tangentially connected to
    /// the input faces (if any) will also be included. It defaults to true.
    /// Returns true if successful
    bool setInputEntities(const core::Ptr<core::ObjectCollection>& inputEntities, bool isTangentChain = true);

    /// Method that sets the inside and outside thicknesses of the shell.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// insideThickness : ValueInput object that defines the inside thickness. If set to null, the inside thickness is removed.
    /// outsideThickness : ValueInput object that defines the outside thickness. If set to null, the outside thickness is removed.
    /// Returns true if successful
    bool setThicknesses(const core::Ptr<core::ValueInput>& insideThickness, const core::Ptr<core::ValueInput>& outsideThickness);

    /// Gets the input faces/bodies.
    core::Ptr<core::ObjectCollection> inputEntities() const;

    /// Gets if any faces that are tangentially connected to any of
    /// the input faces will also be included in setting InputEntities.
    bool isTangentChain() const;

    /// Gets the inside thickness.
    /// Edit the thickness through ModelParameter.
    /// This property returns nothing in the case where the feature is non-parametric.
    core::Ptr<ModelParameter> insideThickness() const;

    /// Gets the outside thickness.
    /// Edit the thickness through ModelParameter.
    /// This property returns nothing in the case where the feature is non-parametric.
    core::Ptr<ModelParameter> outsideThickness() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<ShellFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<ShellFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// The shell type used when creating a shell.
    /// The default value is SharpOffsetShellType.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    ShellTypes shellType() const;
    bool shellType(ShellTypes value);

    ADSK_FUSION_SHELLFEATURE_API static const char* classType();
    ADSK_FUSION_SHELLFEATURE_API const char* objectType() const override;
    ADSK_FUSION_SHELLFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SHELLFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setInputEntities_raw(core::ObjectCollection* inputEntities, bool isTangentChain) = 0;
    virtual bool setThicknesses_raw(core::ValueInput* insideThickness, core::ValueInput* outsideThickness) = 0;
    virtual core::ObjectCollection* inputEntities_raw() const = 0;
    virtual bool isTangentChain_raw() const = 0;
    virtual ModelParameter* insideThickness_raw() const = 0;
    virtual ModelParameter* outsideThickness_raw() const = 0;
    virtual ShellFeature* nativeObject_raw() const = 0;
    virtual ShellFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual ShellTypes shellType_raw() const = 0;
    virtual bool shellType_raw(ShellTypes value) = 0;
};

// Inline wrappers

inline bool ShellFeature::setInputEntities(const core::Ptr<core::ObjectCollection>& inputEntities, bool isTangentChain)
{
    bool res = setInputEntities_raw(inputEntities.get(), isTangentChain);
    return res;
}

inline bool ShellFeature::setThicknesses(const core::Ptr<core::ValueInput>& insideThickness, const core::Ptr<core::ValueInput>& outsideThickness)
{
    bool res = setThicknesses_raw(insideThickness.get(), outsideThickness.get());
    return res;
}

inline core::Ptr<core::ObjectCollection> ShellFeature::inputEntities() const
{
    core::Ptr<core::ObjectCollection> res = inputEntities_raw();
    return res;
}

inline bool ShellFeature::isTangentChain() const
{
    bool res = isTangentChain_raw();
    return res;
}

inline core::Ptr<ModelParameter> ShellFeature::insideThickness() const
{
    core::Ptr<ModelParameter> res = insideThickness_raw();
    return res;
}

inline core::Ptr<ModelParameter> ShellFeature::outsideThickness() const
{
    core::Ptr<ModelParameter> res = outsideThickness_raw();
    return res;
}

inline core::Ptr<ShellFeature> ShellFeature::nativeObject() const
{
    core::Ptr<ShellFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<ShellFeature> ShellFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<ShellFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline ShellTypes ShellFeature::shellType() const
{
    ShellTypes res = shellType_raw();
    return res;
}

inline bool ShellFeature::shellType(ShellTypes value)
{
    return shellType_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SHELLFEATURE_API