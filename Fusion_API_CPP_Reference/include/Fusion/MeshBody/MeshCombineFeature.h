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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MESHCOMBINEFEATURE_CPP__
# define ADSK_FUSION_MESHCOMBINEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_MESHCOMBINEFEATURE_API
# endif
#else
# define ADSK_FUSION_MESHCOMBINEFEATURE_API XI_IMPORT
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
/// Object that represents an existing mesh combine feature in a design.
class MeshCombineFeature : public MeshFeature {
public:

    /// Gets and sets the input targetBody.
    core::Ptr<MeshBody> targetBody() const;
    bool targetBody(const core::Ptr<MeshBody>& value);

    /// Gets and sets the MeshBody objects that represent the tool bodies.
    std::vector<core::Ptr<MeshBody>> toolBodies() const;
    bool toolBodies(const std::vector<core::Ptr<MeshBody>>& value);

    /// Gets and sets the operation type of mesh combine.
    MeshCombineOperationTypes meshCombineOperationType() const;
    bool meshCombineOperationType(MeshCombineOperationTypes value);

    /// Creates a new component to contain combined mesh bodies.
    /// Default value is false.
    bool isNewComponent() const;

    /// Preserves a copy of each tool body.
    bool isKeepToolBodies() const;
    bool isKeepToolBodies(bool value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<MeshCombineFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<MeshCombineFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_MESHCOMBINEFEATURE_API static const char* classType();
    ADSK_FUSION_MESHCOMBINEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_MESHCOMBINEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHCOMBINEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshBody* targetBody_raw() const = 0;
    virtual bool targetBody_raw(MeshBody* value) = 0;
    virtual MeshBody** toolBodies_raw(size_t& return_size) const = 0;
    virtual bool toolBodies_raw(MeshBody** value, size_t value_size) = 0;
    virtual MeshCombineOperationTypes meshCombineOperationType_raw() const = 0;
    virtual bool meshCombineOperationType_raw(MeshCombineOperationTypes value) = 0;
    virtual bool isNewComponent_raw() const = 0;
    virtual bool isKeepToolBodies_raw() const = 0;
    virtual bool isKeepToolBodies_raw(bool value) = 0;
    virtual MeshCombineFeature* nativeObject_raw() const = 0;
    virtual MeshCombineFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<MeshBody> MeshCombineFeature::targetBody() const
{
    core::Ptr<MeshBody> res = targetBody_raw();
    return res;
}

inline bool MeshCombineFeature::targetBody(const core::Ptr<MeshBody>& value)
{
    return targetBody_raw(value.get());
}

inline std::vector<core::Ptr<MeshBody>> MeshCombineFeature::toolBodies() const
{
    std::vector<core::Ptr<MeshBody>> res;
    size_t s;

    MeshBody** p= toolBodies_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MeshCombineFeature::toolBodies(const std::vector<core::Ptr<MeshBody>>& value)
{
    MeshBody** value_ = new MeshBody*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = toolBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline MeshCombineOperationTypes MeshCombineFeature::meshCombineOperationType() const
{
    MeshCombineOperationTypes res = meshCombineOperationType_raw();
    return res;
}

inline bool MeshCombineFeature::meshCombineOperationType(MeshCombineOperationTypes value)
{
    return meshCombineOperationType_raw(value);
}

inline bool MeshCombineFeature::isNewComponent() const
{
    bool res = isNewComponent_raw();
    return res;
}

inline bool MeshCombineFeature::isKeepToolBodies() const
{
    bool res = isKeepToolBodies_raw();
    return res;
}

inline bool MeshCombineFeature::isKeepToolBodies(bool value)
{
    return isKeepToolBodies_raw(value);
}

inline core::Ptr<MeshCombineFeature> MeshCombineFeature::nativeObject() const
{
    core::Ptr<MeshCombineFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<MeshCombineFeature> MeshCombineFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<MeshCombineFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHCOMBINEFEATURE_API