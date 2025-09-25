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
#include "CAMExportOptions.h"
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAM3MFEXPORTOPTIONS_CPP__
# define ADSK_CAM_CAM3MFEXPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_CAM_CAM3MFEXPORTOPTIONS_API
# endif
#else
# define ADSK_CAM_CAM3MFEXPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAM3MFExportMetadataOptions;
}}

namespace adsk { namespace cam {

/// 3MF export option. Available with all additive machines except Formlabs. Expects a setup as its export object.
class CAM3MFExportOptions : public CAMExportOptions {
public:

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Flag toggling if support information should be included in the exported file.
    /// Includes both support structures marked as open or closed support as well as meta data used in Netfabb.
    /// This option might not be available for all machine types.
    /// The default value is false.
    bool areSupportsIncluded() const;
    bool areSupportsIncluded(bool value);

    /// Flag toggling if machine information should be included in the exported file.
    /// The machine information is only compatible with Netfabb.
    /// This option might not be available for all machine types.
    /// The default value is false.
    bool isMachineInformationIncluded() const;
    bool isMachineInformationIncluded(bool value);

    /// Flag toggling if simulation information should be included in the exported file.
    /// This option might not be available for all machine types.
    /// The default value is false.
    bool isProcessSimulationDataIncluded() const;
    bool isProcessSimulationDataIncluded(bool value);

    /// Flag toggling if post processing of the simulation should be included.
    /// This option might not be available for all machine types.
    /// The default value is false.
    bool isSimulationPostProcessingIncluded() const;
    bool isSimulationPostProcessingIncluded(bool value);

    /// Flag toggling if surrogate supports used in the simulation should be split.
    /// This option might not be available for all machine types.
    /// The default value is false.
    bool areSimulationSurrogatesSplit() const;
    bool areSimulationSurrogatesSplit(bool value);

    /// Flag toggling if thickening structures used for simulation should be kept.
    /// This option might not be available for all machine types.
    /// The default value is false.
    bool areSimulationThickeningStructuresKept() const;
    bool areSimulationThickeningStructuresKept(bool value);

    /// Class for setting the meta data options with in the 3mf export
    core::Ptr<CAM3MFExportMetadataOptions> metadata() const;

    /// Flag setting if support information should be included in the exported file.
    /// Includes both support structures marked as open or closed support as well as meta data used in Netfabb.
    /// This option might not be available for all machine types.
    /// The default value is NotIncluded.
    CAM3MFSupportInclusionType supportInclusion() const;
    bool supportInclusion(CAM3MFSupportInclusionType value);

    /// Flag toggling if volumetric data should be included in the exported file. The flag is only evaluated if the user has bought the product design extension.
    /// The default value is false.
    bool isVolumetricDataIncluded() const;
    bool isVolumetricDataIncluded(bool value);

    /// Integer value representing the resolution of the volumetric data. The value is only evaluated if the user has bought the product design extension.
    /// The default value is 128.
    int volumetricDataResolution() const;
    bool volumetricDataResolution(int value);

    ADSK_CAM_CAM3MFEXPORTOPTIONS_API static const char* classType();
    ADSK_CAM_CAM3MFEXPORTOPTIONS_API const char* objectType() const override;
    ADSK_CAM_CAM3MFEXPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAM3MFEXPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool areSupportsIncluded_raw() const = 0;
    virtual bool areSupportsIncluded_raw(bool value) = 0;
    virtual bool isMachineInformationIncluded_raw() const = 0;
    virtual bool isMachineInformationIncluded_raw(bool value) = 0;
    virtual bool isProcessSimulationDataIncluded_raw() const = 0;
    virtual bool isProcessSimulationDataIncluded_raw(bool value) = 0;
    virtual bool isSimulationPostProcessingIncluded_raw() const = 0;
    virtual bool isSimulationPostProcessingIncluded_raw(bool value) = 0;
    virtual bool areSimulationSurrogatesSplit_raw() const = 0;
    virtual bool areSimulationSurrogatesSplit_raw(bool value) = 0;
    virtual bool areSimulationThickeningStructuresKept_raw() const = 0;
    virtual bool areSimulationThickeningStructuresKept_raw(bool value) = 0;
    virtual CAM3MFExportMetadataOptions* metadata_raw() const = 0;
    virtual CAM3MFSupportInclusionType supportInclusion_raw() const = 0;
    virtual bool supportInclusion_raw(CAM3MFSupportInclusionType value) = 0;
    virtual bool isVolumetricDataIncluded_raw() const = 0;
    virtual bool isVolumetricDataIncluded_raw(bool value) = 0;
    virtual int volumetricDataResolution_raw() const = 0;
    virtual bool volumetricDataResolution_raw(int value) = 0;
};

// Inline wrappers

inline bool CAM3MFExportOptions::areSupportsIncluded() const
{
    bool res = areSupportsIncluded_raw();
    return res;
}

inline bool CAM3MFExportOptions::areSupportsIncluded(bool value)
{
    return areSupportsIncluded_raw(value);
}

inline bool CAM3MFExportOptions::isMachineInformationIncluded() const
{
    bool res = isMachineInformationIncluded_raw();
    return res;
}

inline bool CAM3MFExportOptions::isMachineInformationIncluded(bool value)
{
    return isMachineInformationIncluded_raw(value);
}

inline bool CAM3MFExportOptions::isProcessSimulationDataIncluded() const
{
    bool res = isProcessSimulationDataIncluded_raw();
    return res;
}

inline bool CAM3MFExportOptions::isProcessSimulationDataIncluded(bool value)
{
    return isProcessSimulationDataIncluded_raw(value);
}

inline bool CAM3MFExportOptions::isSimulationPostProcessingIncluded() const
{
    bool res = isSimulationPostProcessingIncluded_raw();
    return res;
}

inline bool CAM3MFExportOptions::isSimulationPostProcessingIncluded(bool value)
{
    return isSimulationPostProcessingIncluded_raw(value);
}

inline bool CAM3MFExportOptions::areSimulationSurrogatesSplit() const
{
    bool res = areSimulationSurrogatesSplit_raw();
    return res;
}

inline bool CAM3MFExportOptions::areSimulationSurrogatesSplit(bool value)
{
    return areSimulationSurrogatesSplit_raw(value);
}

inline bool CAM3MFExportOptions::areSimulationThickeningStructuresKept() const
{
    bool res = areSimulationThickeningStructuresKept_raw();
    return res;
}

inline bool CAM3MFExportOptions::areSimulationThickeningStructuresKept(bool value)
{
    return areSimulationThickeningStructuresKept_raw(value);
}

inline core::Ptr<CAM3MFExportMetadataOptions> CAM3MFExportOptions::metadata() const
{
    core::Ptr<CAM3MFExportMetadataOptions> res = metadata_raw();
    return res;
}

inline CAM3MFSupportInclusionType CAM3MFExportOptions::supportInclusion() const
{
    CAM3MFSupportInclusionType res = supportInclusion_raw();
    return res;
}

inline bool CAM3MFExportOptions::supportInclusion(CAM3MFSupportInclusionType value)
{
    return supportInclusion_raw(value);
}

inline bool CAM3MFExportOptions::isVolumetricDataIncluded() const
{
    bool res = isVolumetricDataIncluded_raw();
    return res;
}

inline bool CAM3MFExportOptions::isVolumetricDataIncluded(bool value)
{
    return isVolumetricDataIncluded_raw(value);
}

inline int CAM3MFExportOptions::volumetricDataResolution() const
{
    int res = volumetricDataResolution_raw();
    return res;
}

inline bool CAM3MFExportOptions::volumetricDataResolution(int value)
{
    return volumetricDataResolution_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAM3MFEXPORTOPTIONS_API