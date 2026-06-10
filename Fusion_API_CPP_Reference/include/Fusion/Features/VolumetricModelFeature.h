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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_VOLUMETRICMODELFEATURE_CPP__
# define ADSK_FUSION_VOLUMETRICMODELFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_VOLUMETRICMODELFEATURE_API
# endif
#else
# define ADSK_FUSION_VOLUMETRICMODELFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Object that represents an existing volumetric model feature.
class VolumetricModelFeature : public Feature {
public:

    /// Gets the volumetric model object. This property is typed as core.Base because the adsk.fusion
    /// library does not reference the volume library where the VolumetricModel object is defined.
    /// At runtime, this property will return a VolumetricModel object.
    /// Returns the volumetric model object.
    core::Ptr<core::Base> volumetricModel() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<VolumetricModelFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<VolumetricModelFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_VOLUMETRICMODELFEATURE_API static const char* classType();
    ADSK_FUSION_VOLUMETRICMODELFEATURE_API const char* objectType() const override;
    ADSK_FUSION_VOLUMETRICMODELFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_VOLUMETRICMODELFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* volumetricModel_raw() const = 0;
    virtual VolumetricModelFeature* nativeObject_raw() const = 0;
    virtual VolumetricModelFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> VolumetricModelFeature::volumetricModel() const
{
    core::Ptr<core::Base> res = volumetricModel_raw();
    return res;
}

inline core::Ptr<VolumetricModelFeature> VolumetricModelFeature::nativeObject() const
{
    core::Ptr<VolumetricModelFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<VolumetricModelFeature> VolumetricModelFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<VolumetricModelFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_VOLUMETRICMODELFEATURE_API