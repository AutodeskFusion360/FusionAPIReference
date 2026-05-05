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
#include "PMIAnnotation.h"
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIIMPORTEDSURFACETEXTURE_CPP__
# define ADSK_FUSION_PMIIMPORTEDSURFACETEXTURE_API XI_EXPORT
# else
# define ADSK_FUSION_PMIIMPORTEDSURFACETEXTURE_API
# endif
#else
# define ADSK_FUSION_PMIIMPORTEDSURFACETEXTURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
    class PMIRoughness;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Defines an imported PMI which includes data related to surface texture.
class PMIImportedSurfaceTexture : public PMIAnnotation {
public:

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<PMIImportedSurfaceTexture> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<PMIImportedSurfaceTexture> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets the surface texture type.
    PMISurfaceTextureTypes surfaceTextureType() const;

    /// Gets the surface texture standard used.
    PMISurfaceTextureStandardTypes standard() const;

    /// Indicates whether a roughness value is defined.
    bool hasRoughness() const;

    /// Gets the roughness value in micrometers.
    /// Requires hasRoughness to be true.
    double roughness() const;

    /// Indicates whether roughness limits (minimum and maximum) are defined.
    bool hasRoughnessLimits() const;

    /// Gets the minimum roughness value in micrometers.
    /// Requires hasRoughnessLimits to be true.
    double minimumRoughness() const;

    /// Gets the maximum roughness value in micrometers.
    /// Requires hasRoughnessLimits to be true.
    double maximumRoughness() const;

    /// Gets the lay symbol type.
    PMILaySymbolTypes laySymbolType() const;

    /// Indicates whether a processing allowance value is defined.
    bool hasProcessingAllowance() const;

    /// Gets the processing allowance value.
    /// Requires hasProcessingAllowance to be true.
    double processingAllowance() const;

    /// Indicates whether processing allowance tolerances are defined.
    bool hasProcessingAllowanceTolerances() const;

    /// Gets the lower tolerance for processing allowance.
    /// Requires hasProcessingAllowanceTolerances to be true.
    double processingAllowanceLowerTolerance() const;

    /// Gets the upper tolerance for processing allowance.
    /// Requires hasProcessingAllowanceTolerances to be true.
    double processingAllowanceUpperTolerance() const;

    /// Gets the machine method description.
    std::string machineMethod() const;

    /// Indicates whether this surface texture has a modifier.
    bool isModifier() const;

    /// Gets the cutoff roughness data.
    core::Ptr<PMIRoughness> cutoff() const;

    /// Gets the secondary roughness data.
    core::Ptr<PMIRoughness> secondaryRoughness() const;

    /// Gets the tertiary roughness data.
    core::Ptr<PMIRoughness> tertiaryRoughness() const;

    /// Gets the waviness data.
    core::Ptr<PMIRoughness> waviness() const;

    ADSK_FUSION_PMIIMPORTEDSURFACETEXTURE_API static const char* classType();
    ADSK_FUSION_PMIIMPORTEDSURFACETEXTURE_API const char* objectType() const override;
    ADSK_FUSION_PMIIMPORTEDSURFACETEXTURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIIMPORTEDSURFACETEXTURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PMIImportedSurfaceTexture* nativeObject_raw() const = 0;
    virtual PMIImportedSurfaceTexture* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual PMISurfaceTextureTypes surfaceTextureType_raw() const = 0;
    virtual PMISurfaceTextureStandardTypes standard_raw() const = 0;
    virtual bool hasRoughness_raw() const = 0;
    virtual double roughness_raw() const = 0;
    virtual bool hasRoughnessLimits_raw() const = 0;
    virtual double minimumRoughness_raw() const = 0;
    virtual double maximumRoughness_raw() const = 0;
    virtual PMILaySymbolTypes laySymbolType_raw() const = 0;
    virtual bool hasProcessingAllowance_raw() const = 0;
    virtual double processingAllowance_raw() const = 0;
    virtual bool hasProcessingAllowanceTolerances_raw() const = 0;
    virtual double processingAllowanceLowerTolerance_raw() const = 0;
    virtual double processingAllowanceUpperTolerance_raw() const = 0;
    virtual char* machineMethod_raw() const = 0;
    virtual bool isModifier_raw() const = 0;
    virtual PMIRoughness* cutoff_raw() const = 0;
    virtual PMIRoughness* secondaryRoughness_raw() const = 0;
    virtual PMIRoughness* tertiaryRoughness_raw() const = 0;
    virtual PMIRoughness* waviness_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<PMIImportedSurfaceTexture> PMIImportedSurfaceTexture::nativeObject() const
{
    core::Ptr<PMIImportedSurfaceTexture> res = nativeObject_raw();
    return res;
}

inline core::Ptr<PMIImportedSurfaceTexture> PMIImportedSurfaceTexture::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<PMIImportedSurfaceTexture> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline PMISurfaceTextureTypes PMIImportedSurfaceTexture::surfaceTextureType() const
{
    PMISurfaceTextureTypes res = surfaceTextureType_raw();
    return res;
}

inline PMISurfaceTextureStandardTypes PMIImportedSurfaceTexture::standard() const
{
    PMISurfaceTextureStandardTypes res = standard_raw();
    return res;
}

inline bool PMIImportedSurfaceTexture::hasRoughness() const
{
    bool res = hasRoughness_raw();
    return res;
}

inline double PMIImportedSurfaceTexture::roughness() const
{
    double res = roughness_raw();
    return res;
}

inline bool PMIImportedSurfaceTexture::hasRoughnessLimits() const
{
    bool res = hasRoughnessLimits_raw();
    return res;
}

inline double PMIImportedSurfaceTexture::minimumRoughness() const
{
    double res = minimumRoughness_raw();
    return res;
}

inline double PMIImportedSurfaceTexture::maximumRoughness() const
{
    double res = maximumRoughness_raw();
    return res;
}

inline PMILaySymbolTypes PMIImportedSurfaceTexture::laySymbolType() const
{
    PMILaySymbolTypes res = laySymbolType_raw();
    return res;
}

inline bool PMIImportedSurfaceTexture::hasProcessingAllowance() const
{
    bool res = hasProcessingAllowance_raw();
    return res;
}

inline double PMIImportedSurfaceTexture::processingAllowance() const
{
    double res = processingAllowance_raw();
    return res;
}

inline bool PMIImportedSurfaceTexture::hasProcessingAllowanceTolerances() const
{
    bool res = hasProcessingAllowanceTolerances_raw();
    return res;
}

inline double PMIImportedSurfaceTexture::processingAllowanceLowerTolerance() const
{
    double res = processingAllowanceLowerTolerance_raw();
    return res;
}

inline double PMIImportedSurfaceTexture::processingAllowanceUpperTolerance() const
{
    double res = processingAllowanceUpperTolerance_raw();
    return res;
}

inline std::string PMIImportedSurfaceTexture::machineMethod() const
{
    std::string res;

    char* p= machineMethod_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PMIImportedSurfaceTexture::isModifier() const
{
    bool res = isModifier_raw();
    return res;
}

inline core::Ptr<PMIRoughness> PMIImportedSurfaceTexture::cutoff() const
{
    core::Ptr<PMIRoughness> res = cutoff_raw();
    return res;
}

inline core::Ptr<PMIRoughness> PMIImportedSurfaceTexture::secondaryRoughness() const
{
    core::Ptr<PMIRoughness> res = secondaryRoughness_raw();
    return res;
}

inline core::Ptr<PMIRoughness> PMIImportedSurfaceTexture::tertiaryRoughness() const
{
    core::Ptr<PMIRoughness> res = tertiaryRoughness_raw();
    return res;
}

inline core::Ptr<PMIRoughness> PMIImportedSurfaceTexture::waviness() const
{
    core::Ptr<PMIRoughness> res = waviness_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIIMPORTEDSURFACETEXTURE_API