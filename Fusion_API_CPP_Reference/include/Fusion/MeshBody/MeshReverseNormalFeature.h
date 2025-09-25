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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MESHREVERSENORMALFEATURE_CPP__
# define ADSK_FUSION_MESHREVERSENORMALFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_MESHREVERSENORMALFEATURE_API
# endif
#else
# define ADSK_FUSION_MESHREVERSENORMALFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Object that represents an existing MeshReverseNormal feature in a design.
/// To change the properties of this feature, you need to position the timeline marker to immediately before this feature.
/// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
class MeshReverseNormalFeature : public MeshFeature {
public:

    /// Gets and sets the input mesh body. This can either be a mesh body or an object collection with face groups.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> mesh() const;
    bool mesh(const core::Ptr<core::Base>& value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<MeshReverseNormalFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<MeshReverseNormalFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_MESHREVERSENORMALFEATURE_API static const char* classType();
    ADSK_FUSION_MESHREVERSENORMALFEATURE_API const char* objectType() const override;
    ADSK_FUSION_MESHREVERSENORMALFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHREVERSENORMALFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* mesh_raw() const = 0;
    virtual bool mesh_raw(core::Base* value) = 0;
    virtual MeshReverseNormalFeature* nativeObject_raw() const = 0;
    virtual MeshReverseNormalFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MeshReverseNormalFeature::mesh() const
{
    core::Ptr<core::Base> res = mesh_raw();
    return res;
}

inline bool MeshReverseNormalFeature::mesh(const core::Ptr<core::Base>& value)
{
    return mesh_raw(value.get());
}

inline core::Ptr<MeshReverseNormalFeature> MeshReverseNormalFeature::nativeObject() const
{
    core::Ptr<MeshReverseNormalFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<MeshReverseNormalFeature> MeshReverseNormalFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<MeshReverseNormalFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHREVERSENORMALFEATURE_API