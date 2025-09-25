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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURE_CPP__
# define ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURE_API
# endif
#else
# define ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class FaceGroup;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Object that represents an existing mesh combine face groups feature in a design.
class MeshCombineFaceGroupsFeature : public MeshFeature {
public:

    /// Gets the input mesh body. The actual mesh body is set implicitly by the input face groups.
    core::Ptr<core::Base> mesh() const;

    /// Gets and sets the input face groups, which should be combined. They need to belong to the same mesh body.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    std::vector<core::Ptr<FaceGroup>> inputFaceGroups() const;
    bool inputFaceGroups(const std::vector<core::Ptr<FaceGroup>>& value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<MeshCombineFaceGroupsFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<MeshCombineFaceGroupsFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURE_API static const char* classType();
    ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURE_API const char* objectType() const override;
    ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* mesh_raw() const = 0;
    virtual FaceGroup** inputFaceGroups_raw(size_t& return_size) const = 0;
    virtual bool inputFaceGroups_raw(FaceGroup** value, size_t value_size) = 0;
    virtual MeshCombineFaceGroupsFeature* nativeObject_raw() const = 0;
    virtual MeshCombineFaceGroupsFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MeshCombineFaceGroupsFeature::mesh() const
{
    core::Ptr<core::Base> res = mesh_raw();
    return res;
}

inline std::vector<core::Ptr<FaceGroup>> MeshCombineFaceGroupsFeature::inputFaceGroups() const
{
    std::vector<core::Ptr<FaceGroup>> res;
    size_t s;

    FaceGroup** p= inputFaceGroups_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MeshCombineFaceGroupsFeature::inputFaceGroups(const std::vector<core::Ptr<FaceGroup>>& value)
{
    FaceGroup** value_ = new FaceGroup*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = inputFaceGroups_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline core::Ptr<MeshCombineFaceGroupsFeature> MeshCombineFaceGroupsFeature::nativeObject() const
{
    core::Ptr<MeshCombineFaceGroupsFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<MeshCombineFaceGroupsFeature> MeshCombineFaceGroupsFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<MeshCombineFaceGroupsFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURE_API