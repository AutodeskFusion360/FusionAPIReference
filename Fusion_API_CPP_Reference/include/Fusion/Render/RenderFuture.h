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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_RENDERFUTURE_CPP__
# define ADSK_FUSION_RENDERFUTURE_API XI_EXPORT
# else
# define ADSK_FUSION_RENDERFUTURE_API
# endif
#else
# define ADSK_FUSION_RENDERFUTURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Used to check the state of a local or in canvas rendering.
class RenderFuture : public core::Base {
public:

    /// Returns the progress of this rendering expressed as a percentage
    /// where 0.0 is no progress and 1.0 is complete.
    double progress() const;

    /// Returns the current state of the rendering.
    LocalRenderStates renderState() const;

    /// Returns the width of the image. The width was specified when the
    /// rendering was started.
    int imageWidth() const;

    /// Returns the height of the image. The height was specified when the
    /// rendering was started.
    int imageHeight() const;

    /// The filename that the finished rendering will be saved to. If being
    /// saved to the cloud, this is the name Fusion will use for the completed
    /// rendering.
    std::string filename() const;

    ADSK_FUSION_RENDERFUTURE_API static const char* classType();
    ADSK_FUSION_RENDERFUTURE_API const char* objectType() const override;
    ADSK_FUSION_RENDERFUTURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RENDERFUTURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double progress_raw() const = 0;
    virtual LocalRenderStates renderState_raw() const = 0;
    virtual int imageWidth_raw() const = 0;
    virtual int imageHeight_raw() const = 0;
    virtual char* filename_raw() const = 0;
};

// Inline wrappers

inline double RenderFuture::progress() const
{
    double res = progress_raw();
    return res;
}

inline LocalRenderStates RenderFuture::renderState() const
{
    LocalRenderStates res = renderState_raw();
    return res;
}

inline int RenderFuture::imageWidth() const
{
    int res = imageWidth_raw();
    return res;
}

inline int RenderFuture::imageHeight() const
{
    int res = imageHeight_raw();
    return res;
}

inline std::string RenderFuture::filename() const
{
    std::string res;

    char* p= filename_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RENDERFUTURE_API