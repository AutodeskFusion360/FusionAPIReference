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
# ifdef __COMPILING_ADSK_FUSION_MESHBODYDISPLAYOVERRIDES_CPP__
# define ADSK_FUSION_MESHBODYDISPLAYOVERRIDES_API XI_EXPORT
# else
# define ADSK_FUSION_MESHBODYDISPLAYOVERRIDES_API
# endif
#else
# define ADSK_FUSION_MESHBODYDISPLAYOVERRIDES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Container for overrides that control how the mesh is displayed in the interactive 3D view.
class MeshBodyDisplayOverrides : public core::Base {
public:

    /// Controls whether the mesh body face group colors are shown. If set to true, the face
    /// groups will be shown with the assigned appearance, ignoring the current display settings.
    bool isSuppressFaceGroupColors() const;
    bool isSuppressFaceGroupColors(bool value);

    /// Controls whether the edges of the triangles of the mesh body are shown. If set to true,
    /// individual triangles will not be visible, edges of face groups (if any) will be shown instead.
    bool isSuppressTriangleEdges() const;
    bool isSuppressTriangleEdges(bool value);

    ADSK_FUSION_MESHBODYDISPLAYOVERRIDES_API static const char* classType();
    ADSK_FUSION_MESHBODYDISPLAYOVERRIDES_API const char* objectType() const override;
    ADSK_FUSION_MESHBODYDISPLAYOVERRIDES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHBODYDISPLAYOVERRIDES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isSuppressFaceGroupColors_raw() const = 0;
    virtual bool isSuppressFaceGroupColors_raw(bool value) = 0;
    virtual bool isSuppressTriangleEdges_raw() const = 0;
    virtual bool isSuppressTriangleEdges_raw(bool value) = 0;
};

// Inline wrappers

inline bool MeshBodyDisplayOverrides::isSuppressFaceGroupColors() const
{
    bool res = isSuppressFaceGroupColors_raw();
    return res;
}

inline bool MeshBodyDisplayOverrides::isSuppressFaceGroupColors(bool value)
{
    return isSuppressFaceGroupColors_raw(value);
}

inline bool MeshBodyDisplayOverrides::isSuppressTriangleEdges() const
{
    bool res = isSuppressTriangleEdges_raw();
    return res;
}

inline bool MeshBodyDisplayOverrides::isSuppressTriangleEdges(bool value)
{
    return isSuppressTriangleEdges_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHBODYDISPLAYOVERRIDES_API