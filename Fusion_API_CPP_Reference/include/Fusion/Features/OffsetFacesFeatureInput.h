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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_OFFSETFACESFEATUREINPUT_CPP__
# define ADSK_FUSION_OFFSETFACESFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_OFFSETFACESFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_OFFSETFACESFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepFace;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing Offset Faces feature in a design.
/// Offset Faces features are created in the UI using the "Offset Face" or "Press Pull" command.
class OffsetFacesFeatureInput : public core::Base {
public:

    /// An array of BRepFace objects you want to offset. These faces can exist on multiple bodies
    /// and in multiple components. They cannot be in an externally referenced component.
    std::vector<core::Ptr<BRepFace>> faces() const;
    bool faces(const std::vector<core::Ptr<BRepFace>>& value);

    /// The distance of the offset. A positive value offsets the faces in the direction of the face
    /// normal. A negative value goes in the other direction.
    /// 
    /// This is a ValueInput object that can be created using either createByReal or createByString.
    /// When a real ValueInput is used, the value is centimeters. When a string ValueInput is used, it
    /// defines the expression of the parameter that will be created to control the feature and any
    /// valid expression that defines a distance can be used.
    core::Ptr<core::ValueInput> distance() const;
    bool distance(const core::Ptr<core::ValueInput>& value);

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

    ADSK_FUSION_OFFSETFACESFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_OFFSETFACESFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_OFFSETFACESFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_OFFSETFACESFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFace** faces_raw(size_t& return_size) const = 0;
    virtual bool faces_raw(BRepFace** value, size_t value_size) = 0;
    virtual core::ValueInput* distance_raw() const = 0;
    virtual bool distance_raw(core::ValueInput* value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<BRepFace>> OffsetFacesFeatureInput::faces() const
{
    std::vector<core::Ptr<BRepFace>> res;
    size_t s;

    BRepFace** p= faces_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool OffsetFacesFeatureInput::faces(const std::vector<core::Ptr<BRepFace>>& value)
{
    BRepFace** value_ = new BRepFace*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = faces_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline core::Ptr<core::ValueInput> OffsetFacesFeatureInput::distance() const
{
    core::Ptr<core::ValueInput> res = distance_raw();
    return res;
}

inline bool OffsetFacesFeatureInput::distance(const core::Ptr<core::ValueInput>& value)
{
    return distance_raw(value.get());
}

inline core::Ptr<BaseFeature> OffsetFacesFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool OffsetFacesFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_OFFSETFACESFEATUREINPUT_API