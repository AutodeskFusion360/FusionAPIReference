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
#include "Feature.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_DRAFTFEATURE_CPP__
# define ADSK_FUSION_DRAFTFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_DRAFTFEATURE_API
# endif
#else
# define ADSK_FUSION_DRAFTFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BRepFace;
    class ExtentDefinition;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing draft feature in a design.
class DraftFeature : public Feature {
public:

    /// Gets and sets the input faces.
    /// If isTangentChain is true, all the faces that are tangentially connected to the input faces (if any) will also be included.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    std::vector<core::Ptr<BRepFace>> inputFaces() const;
    bool inputFaces(const std::vector<core::Ptr<BRepFace>>& value);

    /// Gets and sets the plane that defines the direction in which the draft is applied. This is also referred to
    /// as the pull direction. This can be defined using either a planar BrepFace, or a ConstructionPlane.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> plane() const;
    bool plane(const core::Ptr<core::Base>& value);

    /// Gets and sets if any faces that are tangentially connected to any of the input faces will also be drafted.
    /// It defaults to true.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isTangentChain() const;
    bool isTangentChain(bool value);

    /// Gets and sets if the direction of the draft is flipped.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isDirectionFlipped() const;
    bool isDirectionFlipped(bool value);

    /// Gets the definition object that specifies how the draft is defined. Modifying the
    /// definition object will cause the draft to recompute. This can return either an
    /// AngleExtentDefinition or TwoSidesAngleExtentDefinition object. This property
    /// returns nothing in the case where the feature is non-parametric. Use this property
    /// to access the parameters controlling the draft and whether the draft is symmetric or not.
    core::Ptr<ExtentDefinition> draftDefinition() const;

    /// Changes the definition of the feature so that a single angle is used for all drafts.
    /// If the isSymmetric is true then the faces are split along the parting plane and drafted
    /// independently using the same angle.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// isSymmetric : Set to true if the faces are to be split along the plane or parting line and drafted symmetrically. This
    /// will have the side effect of setting the isSymmetric property to the same value.
    /// angle : The ValueInput object that defines the angle of the draft. This can be a positive or negative
    /// value which will affect the direction of the draft along with the isDirectionFlipped property.
    /// Returns true if successful
    bool setSingleAngle(bool isSymmetric, const core::Ptr<core::ValueInput>& angle);

    /// Changes the definition of the feature so that the surfaces are split along the draft plane or
    /// parting line and the faces on each side of the plane are drafted independently.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// angleOne : The ValueInput object that defines the angle for the faces on the first side of the draft plane
    /// or parting line.
    /// angleTwo : The ValueInput object that defines the angle for the faces on the second side of the draft plane
    /// or parting line.
    /// Returns true if successful
    bool setTwoAngles(const core::Ptr<core::ValueInput>& angleOne, const core::Ptr<core::ValueInput>& angleTwo);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<DraftFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<DraftFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_DRAFTFEATURE_API static const char* classType();
    ADSK_FUSION_DRAFTFEATURE_API const char* objectType() const override;
    ADSK_FUSION_DRAFTFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DRAFTFEATURE_API static const char* interfaceId() { return classType(); }

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
    virtual ExtentDefinition* draftDefinition_raw() const = 0;
    virtual bool setSingleAngle_raw(bool isSymmetric, core::ValueInput* angle) = 0;
    virtual bool setTwoAngles_raw(core::ValueInput* angleOne, core::ValueInput* angleTwo) = 0;
    virtual DraftFeature* nativeObject_raw() const = 0;
    virtual DraftFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<BRepFace>> DraftFeature::inputFaces() const
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

inline bool DraftFeature::inputFaces(const std::vector<core::Ptr<BRepFace>>& value)
{
    BRepFace** value_ = new BRepFace*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = inputFaces_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline core::Ptr<core::Base> DraftFeature::plane() const
{
    core::Ptr<core::Base> res = plane_raw();
    return res;
}

inline bool DraftFeature::plane(const core::Ptr<core::Base>& value)
{
    return plane_raw(value.get());
}

inline bool DraftFeature::isTangentChain() const
{
    bool res = isTangentChain_raw();
    return res;
}

inline bool DraftFeature::isTangentChain(bool value)
{
    return isTangentChain_raw(value);
}

inline bool DraftFeature::isDirectionFlipped() const
{
    bool res = isDirectionFlipped_raw();
    return res;
}

inline bool DraftFeature::isDirectionFlipped(bool value)
{
    return isDirectionFlipped_raw(value);
}

inline core::Ptr<ExtentDefinition> DraftFeature::draftDefinition() const
{
    core::Ptr<ExtentDefinition> res = draftDefinition_raw();
    return res;
}

inline bool DraftFeature::setSingleAngle(bool isSymmetric, const core::Ptr<core::ValueInput>& angle)
{
    bool res = setSingleAngle_raw(isSymmetric, angle.get());
    return res;
}

inline bool DraftFeature::setTwoAngles(const core::Ptr<core::ValueInput>& angleOne, const core::Ptr<core::ValueInput>& angleTwo)
{
    bool res = setTwoAngles_raw(angleOne.get(), angleTwo.get());
    return res;
}

inline core::Ptr<DraftFeature> DraftFeature::nativeObject() const
{
    core::Ptr<DraftFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<DraftFeature> DraftFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<DraftFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DRAFTFEATURE_API