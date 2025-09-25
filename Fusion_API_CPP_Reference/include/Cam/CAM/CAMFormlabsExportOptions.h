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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAMFORMLABSEXPORTOPTIONS_CPP__
# define ADSK_CAM_CAMFORMLABSEXPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_CAM_CAMFORMLABSEXPORTOPTIONS_API
# endif
#else
# define ADSK_CAM_CAMFORMLABSEXPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Formlabs export option. Available only with Formlabs machines. Expects a setup as its export object.
class CAMFormlabsExportOptions : public CAMExportOptions {
public:

    /// Flag toggling if supports should be included in the exported file.
    /// The default value is false.
    bool areSupportsIncluded() const;
    bool areSupportsIncluded(bool value);

    /// Flag toggling if volumetric data should be included in the exported file.
    /// The default value is false.
    bool isVolumetricDataIncluded() const;
    bool isVolumetricDataIncluded(bool value);

    /// Integer value representing the resolution of the volumetric data.
    /// The default value is 128.
    int volumetricDataResolution() const;
    bool volumetricDataResolution(int value);

    ADSK_CAM_CAMFORMLABSEXPORTOPTIONS_API static const char* classType();
    ADSK_CAM_CAMFORMLABSEXPORTOPTIONS_API const char* objectType() const override;
    ADSK_CAM_CAMFORMLABSEXPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMFORMLABSEXPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool areSupportsIncluded_raw() const = 0;
    virtual bool areSupportsIncluded_raw(bool value) = 0;
    virtual bool isVolumetricDataIncluded_raw() const = 0;
    virtual bool isVolumetricDataIncluded_raw(bool value) = 0;
    virtual int volumetricDataResolution_raw() const = 0;
    virtual bool volumetricDataResolution_raw(int value) = 0;
};

// Inline wrappers

inline bool CAMFormlabsExportOptions::areSupportsIncluded() const
{
    bool res = areSupportsIncluded_raw();
    return res;
}

inline bool CAMFormlabsExportOptions::areSupportsIncluded(bool value)
{
    return areSupportsIncluded_raw(value);
}

inline bool CAMFormlabsExportOptions::isVolumetricDataIncluded() const
{
    bool res = isVolumetricDataIncluded_raw();
    return res;
}

inline bool CAMFormlabsExportOptions::isVolumetricDataIncluded(bool value)
{
    return isVolumetricDataIncluded_raw(value);
}

inline int CAMFormlabsExportOptions::volumetricDataResolution() const
{
    int res = volumetricDataResolution_raw();
    return res;
}

inline bool CAMFormlabsExportOptions::volumetricDataResolution(int value)
{
    return volumetricDataResolution_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMFORMLABSEXPORTOPTIONS_API