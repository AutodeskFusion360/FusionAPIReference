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
# ifdef __COMPILING_ADSK_FUSION_MESHMANAGER_CPP__
# define ADSK_FUSION_MESHMANAGER_API XI_EXPORT
# else
# define ADSK_FUSION_MESHMANAGER_API
# endif
#else
# define ADSK_FUSION_MESHMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class TriangleMeshCalculator;
    class TriangleMeshList;
}}

namespace adsk { namespace fusion {

/// Provides access to meshes that approximate a B-Rep and T-Spline.
class MeshManager : public core::Base {
public:

    /// Creates a new MeshCalculator which is used to calculate
    /// new triangular meshes based on various parameters that control the calculation.
    /// Returns the new MeshCalculator object or null if the creation failed.
    core::Ptr<TriangleMeshCalculator> createMeshCalculator();

    /// Returns a collection that provides access to all of the
    /// existing display meshes.
    core::Ptr<TriangleMeshList> displayMeshes() const;

    /// Returns the parent BRepBody, BRepFace, BRepLump, BRepShell, SculptBody, or SculptFace object.
    core::Ptr<core::Base> parent() const;

    ADSK_FUSION_MESHMANAGER_API static const char* classType();
    ADSK_FUSION_MESHMANAGER_API const char* objectType() const override;
    ADSK_FUSION_MESHMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual TriangleMeshCalculator* createMeshCalculator_raw() = 0;
    virtual TriangleMeshList* displayMeshes_raw() const = 0;
    virtual core::Base* parent_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<TriangleMeshCalculator> MeshManager::createMeshCalculator()
{
    core::Ptr<TriangleMeshCalculator> res = createMeshCalculator_raw();
    return res;
}

inline core::Ptr<TriangleMeshList> MeshManager::displayMeshes() const
{
    core::Ptr<TriangleMeshList> res = displayMeshes_raw();
    return res;
}

inline core::Ptr<core::Base> MeshManager::parent() const
{
    core::Ptr<core::Base> res = parent_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHMANAGER_API