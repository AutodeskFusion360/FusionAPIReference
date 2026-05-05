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
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_EMBOSSFEATUREINPUT_CPP__
# define ADSK_FUSION_EMBOSSFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_EMBOSSFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_EMBOSSFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepFace;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of an emboss feature.
class EmbossFeatureInput : public core::Base {
public:

    /// Gets and sets an array of Profile objects that define the shape of the emboss.
    /// The profile argument can be Profile and SketchText objects.
    /// When multiple objects are used, all profiles and sketch texts must be co-planar.
    std::vector<core::Ptr<core::Base>> profiles() const;
    bool profiles(const std::vector<core::Ptr<core::Base>>& value);

    /// Gets and sets an array of BRepFace objects that define the faces the emboss will be performed on. By default,
    /// faces that are tangent to any of the input faces are also used. Use the isTangentChain property of the
    /// EmbossFeatureInput object to disable the use of tangent faces. If multiple inputFaces are provided, they must
    /// all be on the same body.
    std::vector<core::Ptr<BRepFace>> inputFaces() const;
    bool inputFaces(const std::vector<core::Ptr<BRepFace>>& value);

    /// Gets and sets whether any faces that are tangentially connected to any of the input faces will
    /// also be used. By default this property is true.
    bool isTangentChain() const;
    bool isTangentChain(bool value);

    /// Gets and sets the ValueInput object that defines the depth of the emboss. A positive value results in the emboss
    /// protruding out of the body and the negative value results in the emboss going into the body.
    core::Ptr<core::ValueInput> depth() const;
    bool depth(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the horizontal offset distance. This defaults to zero.
    core::Ptr<core::ValueInput> horizontalDistance() const;
    bool horizontalDistance(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the vertical offset distance. This defaults to zero.
    core::Ptr<core::ValueInput> verticalDistance() const;
    bool verticalDistance(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the rotation angle. This defaults to zero.
    core::Ptr<core::ValueInput> rotationAngle() const;
    bool rotationAngle(const core::Ptr<core::ValueInput>& value);

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

    /// In order for geometry to be transformed correctly, an Occurrence for creation needs to be
    /// specified when the emboss feature is created based on geometry (e.g. a profile and/or face(s))
    /// in another component AND (the emboss feature) is not in the root component.
    /// The creationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    ADSK_FUSION_EMBOSSFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_EMBOSSFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_EMBOSSFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_EMBOSSFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base** profiles_raw(size_t& return_size) const = 0;
    virtual bool profiles_raw(core::Base** value, size_t value_size) = 0;
    virtual BRepFace** inputFaces_raw(size_t& return_size) const = 0;
    virtual bool inputFaces_raw(BRepFace** value, size_t value_size) = 0;
    virtual bool isTangentChain_raw() const = 0;
    virtual bool isTangentChain_raw(bool value) = 0;
    virtual core::ValueInput* depth_raw() const = 0;
    virtual bool depth_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* horizontalDistance_raw() const = 0;
    virtual bool horizontalDistance_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* verticalDistance_raw() const = 0;
    virtual bool verticalDistance_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* rotationAngle_raw() const = 0;
    virtual bool rotationAngle_raw(core::ValueInput* value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<core::Base>> EmbossFeatureInput::profiles() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= profiles_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool EmbossFeatureInput::profiles(const std::vector<core::Ptr<core::Base>>& value)
{
    core::Base** value_ = new core::Base*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = profiles_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline std::vector<core::Ptr<BRepFace>> EmbossFeatureInput::inputFaces() const
{
    std::vector<core::Ptr<BRepFace>> res;
    size_t s;

    BRepFace** p= inputFaces_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool EmbossFeatureInput::inputFaces(const std::vector<core::Ptr<BRepFace>>& value)
{
    BRepFace** value_ = new BRepFace*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = inputFaces_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool EmbossFeatureInput::isTangentChain() const
{
    bool res = isTangentChain_raw();
    return res;
}

inline bool EmbossFeatureInput::isTangentChain(bool value)
{
    return isTangentChain_raw(value);
}

inline core::Ptr<core::ValueInput> EmbossFeatureInput::depth() const
{
    core::Ptr<core::ValueInput> res = depth_raw();
    return res;
}

inline bool EmbossFeatureInput::depth(const core::Ptr<core::ValueInput>& value)
{
    return depth_raw(value.get());
}

inline core::Ptr<core::ValueInput> EmbossFeatureInput::horizontalDistance() const
{
    core::Ptr<core::ValueInput> res = horizontalDistance_raw();
    return res;
}

inline bool EmbossFeatureInput::horizontalDistance(const core::Ptr<core::ValueInput>& value)
{
    return horizontalDistance_raw(value.get());
}

inline core::Ptr<core::ValueInput> EmbossFeatureInput::verticalDistance() const
{
    core::Ptr<core::ValueInput> res = verticalDistance_raw();
    return res;
}

inline bool EmbossFeatureInput::verticalDistance(const core::Ptr<core::ValueInput>& value)
{
    return verticalDistance_raw(value.get());
}

inline core::Ptr<core::ValueInput> EmbossFeatureInput::rotationAngle() const
{
    core::Ptr<core::ValueInput> res = rotationAngle_raw();
    return res;
}

inline bool EmbossFeatureInput::rotationAngle(const core::Ptr<core::ValueInput>& value)
{
    return rotationAngle_raw(value.get());
}

inline core::Ptr<BaseFeature> EmbossFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool EmbossFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline core::Ptr<Occurrence> EmbossFeatureInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool EmbossFeatureInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_EMBOSSFEATUREINPUT_API