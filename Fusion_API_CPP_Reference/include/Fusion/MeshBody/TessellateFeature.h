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
# ifdef __COMPILING_ADSK_FUSION_TESSELLATEFEATURE_CPP__
# define ADSK_FUSION_TESSELLATEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_TESSELLATEFEATURE_API
# endif
#else
# define ADSK_FUSION_TESSELLATEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepBody;
    class ModelParameter;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Object that represents an existing tessellate feature in a design.
class TessellateFeature : public MeshFeature {
public:

    /// Gets and sets the input B-Rep bodies.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    std::vector<core::Ptr<BRepBody>> inputBodies() const;
    bool inputBodies(const std::vector<core::Ptr<BRepBody>>& value);

    /// Gets and sets the type of refinement.
    TessellateRefinementTypes tessellateRefinementType() const;
    bool tessellateRefinementType(TessellateRefinementTypes value);

    /// Specify maximum distance between the surface of the original
    /// body and the surface of the mesh body.
    /// Only valid if tessellateRefinementType is CustomTessellateRefinementType.
    core::Ptr<ModelParameter> surfaceDeviation() const;

    /// Specify maximum angle between the normal vectors of each face on the mesh body.
    /// Only valid if tessellateRefinementType is CustomTessellateRefinementType.
    core::Ptr<ModelParameter> normalDeviation() const;

    /// Specify maximum length of any face edge on the mesh body.
    /// Only valid if tessellateRefinementType is CustomTessellateRefinementType.
    core::Ptr<ModelParameter> maximumEdgeLength() const;

    /// Specify ratio between the height and width of each face on the mesh body.
    /// Only valid if tessellateRefinementType is CustomTessellateRefinementType.
    core::Ptr<ModelParameter> aspectRatio() const;

    /// Creates quad faces on the mesh body where possible.
    bool createQuads() const;
    bool createQuads(bool value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<TessellateFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<TessellateFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_TESSELLATEFEATURE_API static const char* classType();
    ADSK_FUSION_TESSELLATEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_TESSELLATEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TESSELLATEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepBody** inputBodies_raw(size_t& return_size) const = 0;
    virtual bool inputBodies_raw(BRepBody** value, size_t value_size) = 0;
    virtual TessellateRefinementTypes tessellateRefinementType_raw() const = 0;
    virtual bool tessellateRefinementType_raw(TessellateRefinementTypes value) = 0;
    virtual ModelParameter* surfaceDeviation_raw() const = 0;
    virtual ModelParameter* normalDeviation_raw() const = 0;
    virtual ModelParameter* maximumEdgeLength_raw() const = 0;
    virtual ModelParameter* aspectRatio_raw() const = 0;
    virtual bool createQuads_raw() const = 0;
    virtual bool createQuads_raw(bool value) = 0;
    virtual TessellateFeature* nativeObject_raw() const = 0;
    virtual TessellateFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<BRepBody>> TessellateFeature::inputBodies() const
{
    std::vector<core::Ptr<BRepBody>> res;
    size_t s;

    BRepBody** p= inputBodies_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool TessellateFeature::inputBodies(const std::vector<core::Ptr<BRepBody>>& value)
{
    BRepBody** value_ = new BRepBody*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = inputBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline TessellateRefinementTypes TessellateFeature::tessellateRefinementType() const
{
    TessellateRefinementTypes res = tessellateRefinementType_raw();
    return res;
}

inline bool TessellateFeature::tessellateRefinementType(TessellateRefinementTypes value)
{
    return tessellateRefinementType_raw(value);
}

inline core::Ptr<ModelParameter> TessellateFeature::surfaceDeviation() const
{
    core::Ptr<ModelParameter> res = surfaceDeviation_raw();
    return res;
}

inline core::Ptr<ModelParameter> TessellateFeature::normalDeviation() const
{
    core::Ptr<ModelParameter> res = normalDeviation_raw();
    return res;
}

inline core::Ptr<ModelParameter> TessellateFeature::maximumEdgeLength() const
{
    core::Ptr<ModelParameter> res = maximumEdgeLength_raw();
    return res;
}

inline core::Ptr<ModelParameter> TessellateFeature::aspectRatio() const
{
    core::Ptr<ModelParameter> res = aspectRatio_raw();
    return res;
}

inline bool TessellateFeature::createQuads() const
{
    bool res = createQuads_raw();
    return res;
}

inline bool TessellateFeature::createQuads(bool value)
{
    return createQuads_raw(value);
}

inline core::Ptr<TessellateFeature> TessellateFeature::nativeObject() const
{
    core::Ptr<TessellateFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<TessellateFeature> TessellateFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<TessellateFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TESSELLATEFEATURE_API