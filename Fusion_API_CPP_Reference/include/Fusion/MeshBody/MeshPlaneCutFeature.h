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
#include "MeshFeature.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MESHPLANECUTFEATURE_CPP__
# define ADSK_FUSION_MESHPLANECUTFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_MESHPLANECUTFEATURE_API
# endif
#else
# define ADSK_FUSION_MESHPLANECUTFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents an existing mesh plane cut feature in a design.
class MeshPlaneCutFeature : public MeshFeature {
public:

    /// Gets and sets the input mesh body.
    core::Ptr<core::Base> mesh() const;
    bool mesh(const core::Ptr<core::Base>& value);

    /// Gets and sets the plane cut method of mesh plane cut.
    MeshPlaneCutTypes meshPlaneCutType() const;
    bool meshPlaneCutType(MeshPlaneCutTypes value);

    /// Gets and sets the type of filling the plane cut.
    MeshPlaneCutFillTypes meshPlaneCutFillType() const;
    bool meshPlaneCutFillType(MeshPlaneCutFillTypes value);

    /// Flips side of mesh body to trim relative to cut plane.
    bool isFlip() const;
    bool isFlip(bool value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<MeshPlaneCutFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<MeshPlaneCutFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_MESHPLANECUTFEATURE_API static const char* classType();
    ADSK_FUSION_MESHPLANECUTFEATURE_API const char* objectType() const override;
    ADSK_FUSION_MESHPLANECUTFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHPLANECUTFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* mesh_raw() const = 0;
    virtual bool mesh_raw(core::Base* value) = 0;
    virtual MeshPlaneCutTypes meshPlaneCutType_raw() const = 0;
    virtual bool meshPlaneCutType_raw(MeshPlaneCutTypes value) = 0;
    virtual MeshPlaneCutFillTypes meshPlaneCutFillType_raw() const = 0;
    virtual bool meshPlaneCutFillType_raw(MeshPlaneCutFillTypes value) = 0;
    virtual bool isFlip_raw() const = 0;
    virtual bool isFlip_raw(bool value) = 0;
    virtual MeshPlaneCutFeature* nativeObject_raw() const = 0;
    virtual MeshPlaneCutFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MeshPlaneCutFeature::mesh() const
{
    core::Ptr<core::Base> res = mesh_raw();
    return res;
}

inline bool MeshPlaneCutFeature::mesh(const core::Ptr<core::Base>& value)
{
    return mesh_raw(value.get());
}

inline MeshPlaneCutTypes MeshPlaneCutFeature::meshPlaneCutType() const
{
    MeshPlaneCutTypes res = meshPlaneCutType_raw();
    return res;
}

inline bool MeshPlaneCutFeature::meshPlaneCutType(MeshPlaneCutTypes value)
{
    return meshPlaneCutType_raw(value);
}

inline MeshPlaneCutFillTypes MeshPlaneCutFeature::meshPlaneCutFillType() const
{
    MeshPlaneCutFillTypes res = meshPlaneCutFillType_raw();
    return res;
}

inline bool MeshPlaneCutFeature::meshPlaneCutFillType(MeshPlaneCutFillTypes value)
{
    return meshPlaneCutFillType_raw(value);
}

inline bool MeshPlaneCutFeature::isFlip() const
{
    bool res = isFlip_raw();
    return res;
}

inline bool MeshPlaneCutFeature::isFlip(bool value)
{
    return isFlip_raw(value);
}

inline core::Ptr<MeshPlaneCutFeature> MeshPlaneCutFeature::nativeObject() const
{
    core::Ptr<MeshPlaneCutFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<MeshPlaneCutFeature> MeshPlaneCutFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<MeshPlaneCutFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHPLANECUTFEATURE_API