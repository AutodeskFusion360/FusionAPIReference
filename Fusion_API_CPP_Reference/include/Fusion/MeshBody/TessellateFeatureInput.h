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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_TESSELLATEFEATUREINPUT_CPP__
# define ADSK_FUSION_TESSELLATEFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_TESSELLATEFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_TESSELLATEFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepBody;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// This class defines the methods and properties that pertain to the definition of a tessellate
/// feature.
class TessellateFeatureInput : public core::Base {
public:

    /// Gets and sets the input list of BReb bodies.
    std::vector<core::Ptr<BRepBody>> inputBodies() const;
    bool inputBodies(const std::vector<core::Ptr<BRepBody>>& value);

    /// Gets and sets the type of refinement, default value is MediumTessellateRefinementType.
    TessellateRefinementTypes tessellateRefinementType() const;
    bool tessellateRefinementType(TessellateRefinementTypes value);

    /// Specify maximum distance between the surface of the original
    /// body and the surface of the mesh body.
    /// Only valid if tessellateRefinementType is CustomTessellateRefinementType.
    core::Ptr<core::ValueInput> surfaceDeviation() const;
    bool surfaceDeviation(const core::Ptr<core::ValueInput>& value);

    /// Specify maximum angle between the normal vectors of each face on the mesh body.
    /// Only valid if tessellateRefinementType is CustomTessellateRefinementType.
    core::Ptr<core::ValueInput> normalDeviation() const;
    bool normalDeviation(const core::Ptr<core::ValueInput>& value);

    /// Specify maximum length of any face edge on the mesh body.
    /// Only valid if tessellateRefinementType is CustomTessellateRefinementType.
    core::Ptr<core::ValueInput> maximumEdgeLength() const;
    bool maximumEdgeLength(const core::Ptr<core::ValueInput>& value);

    /// Specify ratio between the height and width of each face on the mesh body.
    /// Only valid if tessellateRefinementType is CustomTessellateRefinementType.
    core::Ptr<core::ValueInput> aspectRatio() const;
    bool aspectRatio(const core::Ptr<core::ValueInput>& value);

    /// Creates quad faces on the mesh body where possible.
    bool createQuads() const;
    bool createQuads(bool value);

    /// When creating a feature that is owned by a base feature, set this property to the
    /// base feature you want to associate the new feature with. By default, this is null,
    /// meaning it will not be associated with a base feature.
    /// 
    /// Because of a current limitation, if you want to create a feature associated with a base
    /// feature, you must set this property AND call the startEdit method of the base feature,
    /// create the feature, and then call the finishEdit method of the base feature. The base
    /// feature must be in an "edit" state to be able to add any additional items to it.
    core::Ptr<BaseFeature> targetBaseFeature() const;
    bool targetBaseFeature(const core::Ptr<BaseFeature>& value);

    ADSK_FUSION_TESSELLATEFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_TESSELLATEFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_TESSELLATEFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TESSELLATEFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepBody** inputBodies_raw(size_t& return_size) const = 0;
    virtual bool inputBodies_raw(BRepBody** value, size_t value_size) = 0;
    virtual TessellateRefinementTypes tessellateRefinementType_raw() const = 0;
    virtual bool tessellateRefinementType_raw(TessellateRefinementTypes value) = 0;
    virtual core::ValueInput* surfaceDeviation_raw() const = 0;
    virtual bool surfaceDeviation_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* normalDeviation_raw() const = 0;
    virtual bool normalDeviation_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* maximumEdgeLength_raw() const = 0;
    virtual bool maximumEdgeLength_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* aspectRatio_raw() const = 0;
    virtual bool aspectRatio_raw(core::ValueInput* value) = 0;
    virtual bool createQuads_raw() const = 0;
    virtual bool createQuads_raw(bool value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<BRepBody>> TessellateFeatureInput::inputBodies() const
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

inline bool TessellateFeatureInput::inputBodies(const std::vector<core::Ptr<BRepBody>>& value)
{
    BRepBody** value_ = new BRepBody*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = inputBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline TessellateRefinementTypes TessellateFeatureInput::tessellateRefinementType() const
{
    TessellateRefinementTypes res = tessellateRefinementType_raw();
    return res;
}

inline bool TessellateFeatureInput::tessellateRefinementType(TessellateRefinementTypes value)
{
    return tessellateRefinementType_raw(value);
}

inline core::Ptr<core::ValueInput> TessellateFeatureInput::surfaceDeviation() const
{
    core::Ptr<core::ValueInput> res = surfaceDeviation_raw();
    return res;
}

inline bool TessellateFeatureInput::surfaceDeviation(const core::Ptr<core::ValueInput>& value)
{
    return surfaceDeviation_raw(value.get());
}

inline core::Ptr<core::ValueInput> TessellateFeatureInput::normalDeviation() const
{
    core::Ptr<core::ValueInput> res = normalDeviation_raw();
    return res;
}

inline bool TessellateFeatureInput::normalDeviation(const core::Ptr<core::ValueInput>& value)
{
    return normalDeviation_raw(value.get());
}

inline core::Ptr<core::ValueInput> TessellateFeatureInput::maximumEdgeLength() const
{
    core::Ptr<core::ValueInput> res = maximumEdgeLength_raw();
    return res;
}

inline bool TessellateFeatureInput::maximumEdgeLength(const core::Ptr<core::ValueInput>& value)
{
    return maximumEdgeLength_raw(value.get());
}

inline core::Ptr<core::ValueInput> TessellateFeatureInput::aspectRatio() const
{
    core::Ptr<core::ValueInput> res = aspectRatio_raw();
    return res;
}

inline bool TessellateFeatureInput::aspectRatio(const core::Ptr<core::ValueInput>& value)
{
    return aspectRatio_raw(value.get());
}

inline bool TessellateFeatureInput::createQuads() const
{
    bool res = createQuads_raw();
    return res;
}

inline bool TessellateFeatureInput::createQuads(bool value)
{
    return createQuads_raw(value);
}

inline core::Ptr<BaseFeature> TessellateFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool TessellateFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TESSELLATEFEATUREINPUT_API