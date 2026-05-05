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
#include "MeshFeature.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MESHREMOVEFEATURE_CPP__
# define ADSK_FUSION_MESHREMOVEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_MESHREMOVEFEATURE_API
# endif
#else
# define ADSK_FUSION_MESHREMOVEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class MeshBody;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Object that represents an existing mesh remove feature in a design.
class MeshRemoveFeature : public MeshFeature {
public:

    /// Gets the input meshes.
    std::vector<core::Ptr<MeshBody>> inputBodies() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<MeshRemoveFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<MeshRemoveFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_MESHREMOVEFEATURE_API static const char* classType();
    ADSK_FUSION_MESHREMOVEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_MESHREMOVEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHREMOVEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshBody** inputBodies_raw(size_t& return_size) const = 0;
    virtual MeshRemoveFeature* nativeObject_raw() const = 0;
    virtual MeshRemoveFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<MeshBody>> MeshRemoveFeature::inputBodies() const
{
    std::vector<core::Ptr<MeshBody>> res;
    size_t s;

    MeshBody** p= inputBodies_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<MeshRemoveFeature> MeshRemoveFeature::nativeObject() const
{
    core::Ptr<MeshRemoveFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<MeshRemoveFeature> MeshRemoveFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<MeshRemoveFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHREMOVEFEATURE_API