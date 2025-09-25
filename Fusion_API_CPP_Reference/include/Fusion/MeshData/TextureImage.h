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
# ifdef __COMPILING_ADSK_FUSION_TEXTUREIMAGE_CPP__
# define ADSK_FUSION_TEXTUREIMAGE_API XI_EXPORT
# else
# define ADSK_FUSION_TEXTUREIMAGE_API
# endif
#else
# define ADSK_FUSION_TEXTUREIMAGE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix2D;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Provides access to the image data associated with a texture map.
class TextureImage : public core::Base {
public:

    /// The transform of the texture image in parametric space.
    core::Ptr<core::Matrix2D> transform() const;

    ADSK_FUSION_TEXTUREIMAGE_API static const char* classType();
    ADSK_FUSION_TEXTUREIMAGE_API const char* objectType() const override;
    ADSK_FUSION_TEXTUREIMAGE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TEXTUREIMAGE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Matrix2D* transform_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Matrix2D> TextureImage::transform() const
{
    core::Ptr<core::Matrix2D> res = transform_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TEXTUREIMAGE_API