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
# ifdef __COMPILING_ADSK_FUSION_DRAFTFEATUREINPUT_CPP__
# define ADSK_FUSION_DRAFTFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_DRAFTFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_DRAFTFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepFace;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a draft
/// feature.
class DraftFeatureInput : public core::Base {
public:

    /// Gets and sets the input faces.
    /// If IsTangentChain is true, all the faces that are tangentially connected to the input faces (if any) will also be included.
    std::vector<core::Ptr<BRepFace>> inputFaces() const;
    bool inputFaces(const std::vector<core::Ptr<BRepFace>>& value);

    /// Gets and sets the plane that defines the direction in which the draft is applied. This is also referred to
    /// as the pull direction. This can be defined using either a planar BRepFace or a ConstructionPlane.
    core::Ptr<core::Base> plane() const;
    bool plane(const core::Ptr<core::Base>& value);

    /// Gets and sets if any faces that are tangentially connected to any of
    /// the input faces will also be included in setting InputEntities. It defaults to true.
    bool isTangentChain() const;
    bool isTangentChain(bool value);

    /// Gets and sets if the direction of the draft is flipped. This defaults to false.
    bool isDirectionFlipped() const;
    bool isDirectionFlipped(bool value);

    /// Defines the draft to be defined so that a single angle is used for all drafts.
    /// If the isSymmetric is true then the faces are split along the parting plane and drafted
    /// independently using the same angle.
    /// isSymmetric : Set to true if the faces are to be split along the plane or parting line and drafted symmetrically. This
    /// will have the side effect of setting the isSymmetric property to the same value.
    /// angle : The ValueInput object that defines the angle of the draft. This can be a positive or negative
    /// value which will affect the direction of the draft along with the isDirectionFlipped property.
    /// Returns true if successful
    bool setSingleAngle(bool isSymmetric, const core::Ptr<core::ValueInput>& angle);

    /// Defines both angles to use when the surfaces are split along the draft plane or parting line and
    /// the faces on each side of the plane are drafted independently.
    /// angleOne : The ValueInput object that defines the angle for the faces on the first side of the draft plane
    /// or parting line.
    /// angleTwo : The ValueInput object that defines the angle for the faces on the second side of the draft plane
    /// or parting line.
    /// Returns true if successful
    bool setTwoAngles(const core::Ptr<core::ValueInput>& angleOne, const core::Ptr<core::ValueInput>& angleTwo);

    /// Gets the first, or the only angle in the case of a single angle definition.
    core::Ptr<core::ValueInput> angleOne() const;

    /// Gets the second angle. This can be null in the case where a single angle definition is used.
    core::Ptr<core::ValueInput> angleTwo() const;

    /// Gets if the draft is symmetric from the draft plane. This only applies in the case where two
    /// angles have been specified and should be ignored otherwise.
    bool isSymmetric() const;

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

    ADSK_FUSION_DRAFTFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_DRAFTFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_DRAFTFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DRAFTFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFace** inputFaces_raw(size_t& return_size) const = 0;
    virtual bool inputFaces_raw(BRepFace** value, size_t value_size) = 0;
    virtual core::Base* plane_raw() const = 0;
    virtual bool plane_raw(core::Base* value) = 0;
    virtual bool isTangentChain_raw() const = 0;
    virtual bool isTangentChain_raw(bool value) = 0;
    virtual bool isDirectionFlipped_raw() const = 0;
    virtual bool isDirectionFlipped_raw(bool value) = 0;
    virtual bool setSingleAngle_raw(bool isSymmetric, core::ValueInput* angle) = 0;
    virtual bool setTwoAngles_raw(core::ValueInput* angleOne, core::ValueInput* angleTwo) = 0;
    virtual core::ValueInput* angleOne_raw() const = 0;
    virtual core::ValueInput* angleTwo_raw() const = 0;
    virtual bool isSymmetric_raw() const = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<BRepFace>> DraftFeatureInput::inputFaces() const
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

inline bool DraftFeatureInput::inputFaces(const std::vector<core::Ptr<BRepFace>>& value)
{
    BRepFace** value_ = new BRepFace*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = inputFaces_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline core::Ptr<core::Base> DraftFeatureInput::plane() const
{
    core::Ptr<core::Base> res = plane_raw();
    return res;
}

inline bool DraftFeatureInput::plane(const core::Ptr<core::Base>& value)
{
    return plane_raw(value.get());
}

inline bool DraftFeatureInput::isTangentChain() const
{
    bool res = isTangentChain_raw();
    return res;
}

inline bool DraftFeatureInput::isTangentChain(bool value)
{
    return isTangentChain_raw(value);
}

inline bool DraftFeatureInput::isDirectionFlipped() const
{
    bool res = isDirectionFlipped_raw();
    return res;
}

inline bool DraftFeatureInput::isDirectionFlipped(bool value)
{
    return isDirectionFlipped_raw(value);
}

inline bool DraftFeatureInput::setSingleAngle(bool isSymmetric, const core::Ptr<core::ValueInput>& angle)
{
    bool res = setSingleAngle_raw(isSymmetric, angle.get());
    return res;
}

inline bool DraftFeatureInput::setTwoAngles(const core::Ptr<core::ValueInput>& angleOne, const core::Ptr<core::ValueInput>& angleTwo)
{
    bool res = setTwoAngles_raw(angleOne.get(), angleTwo.get());
    return res;
}

inline core::Ptr<core::ValueInput> DraftFeatureInput::angleOne() const
{
    core::Ptr<core::ValueInput> res = angleOne_raw();
    return res;
}

inline core::Ptr<core::ValueInput> DraftFeatureInput::angleTwo() const
{
    core::Ptr<core::ValueInput> res = angleTwo_raw();
    return res;
}

inline bool DraftFeatureInput::isSymmetric() const
{
    bool res = isSymmetric_raw();
    return res;
}

inline core::Ptr<BaseFeature> DraftFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool DraftFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DRAFTFEATUREINPUT_API