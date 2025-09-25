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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SPLITFACEFEATUREINPUT_CPP__
# define ADSK_FUSION_SPLITFACEFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_SPLITFACEFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_SPLITFACEFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a split face feature.
class SplitFaceFeatureInput : public core::Base {
public:

    /// Gets and sets the faces to be split.
    /// The collection can contain one or more faces selected from solid and/or open bodies.
    core::Ptr<core::ObjectCollection> facesToSplit() const;
    bool facesToSplit(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the entity(s) that define the splitting tool(s). The splitting tool can be a single entity or an
    /// ObjectCollection containing solid and/or open bodies, construction planes, faces, or sketch curves that partially
    /// or fully intersect the faces that are being split.
    core::Ptr<core::Base> splittingTool() const;
    bool splittingTool(const core::Ptr<core::Base>& value);

    /// Gets and sets whether or not the splittingTool is to be automatically extended (if possible) so as to
    /// completely intersect the facesToSplit.
    bool isSplittingToolExtended() const;
    bool isSplittingToolExtended(bool value);

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

    /// Sets the split type to project the splitting tool along the direction defined by the
    /// specified entity.
    /// directionEntity : An entity that defines the direction of projection of the splitting tool. This can be
    /// a linear BRepEdge, SketchLine, ConstructionLine, or a planar face where the face
    /// normal is used.
    /// Returns true is setting the split type was successful.
    bool setAlongVectorSplitType(const core::Ptr<core::Base>& directionEntity);

    /// Sets the split type to be a curve that defined by projecting the splitting curve to the
    /// closest point on the surface.
    /// Returns true is setting the split type was successful.
    bool setClosestPointSplitType();

    /// Set the split type to be a surface to surface intersection. If the split tool is a curve
    /// it will be extruded into a surface to use in the split. If it's a surface, the surface will
    /// be used and optionally extended to fully intersect the faces to be split.
    /// isSplittingToolExtended : Specifies if the splitting tool should be extended so that is fully intersects the faces to be split.
    /// Returns true is setting the split type was successful.
    bool setSurfaceIntersectionSplitType(bool isSplittingToolExtended);

    /// Returns the type of split type currently defined.
    SplitFaceSplitTypes splitType() const;

    ADSK_FUSION_SPLITFACEFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_SPLITFACEFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_SPLITFACEFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SPLITFACEFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* facesToSplit_raw() const = 0;
    virtual bool facesToSplit_raw(core::ObjectCollection* value) = 0;
    virtual core::Base* splittingTool_raw() const = 0;
    virtual bool splittingTool_raw(core::Base* value) = 0;
    virtual bool isSplittingToolExtended_raw() const = 0;
    virtual bool isSplittingToolExtended_raw(bool value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual bool setAlongVectorSplitType_raw(core::Base* directionEntity) = 0;
    virtual bool setClosestPointSplitType_raw() = 0;
    virtual bool setSurfaceIntersectionSplitType_raw(bool isSplittingToolExtended) = 0;
    virtual SplitFaceSplitTypes splitType_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> SplitFaceFeatureInput::facesToSplit() const
{
    core::Ptr<core::ObjectCollection> res = facesToSplit_raw();
    return res;
}

inline bool SplitFaceFeatureInput::facesToSplit(const core::Ptr<core::ObjectCollection>& value)
{
    return facesToSplit_raw(value.get());
}

inline core::Ptr<core::Base> SplitFaceFeatureInput::splittingTool() const
{
    core::Ptr<core::Base> res = splittingTool_raw();
    return res;
}

inline bool SplitFaceFeatureInput::splittingTool(const core::Ptr<core::Base>& value)
{
    return splittingTool_raw(value.get());
}

inline bool SplitFaceFeatureInput::isSplittingToolExtended() const
{
    bool res = isSplittingToolExtended_raw();
    return res;
}

inline bool SplitFaceFeatureInput::isSplittingToolExtended(bool value)
{
    return isSplittingToolExtended_raw(value);
}

inline core::Ptr<BaseFeature> SplitFaceFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool SplitFaceFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline bool SplitFaceFeatureInput::setAlongVectorSplitType(const core::Ptr<core::Base>& directionEntity)
{
    bool res = setAlongVectorSplitType_raw(directionEntity.get());
    return res;
}

inline bool SplitFaceFeatureInput::setClosestPointSplitType()
{
    bool res = setClosestPointSplitType_raw();
    return res;
}

inline bool SplitFaceFeatureInput::setSurfaceIntersectionSplitType(bool isSplittingToolExtended)
{
    bool res = setSurfaceIntersectionSplitType_raw(isSplittingToolExtended);
    return res;
}

inline SplitFaceSplitTypes SplitFaceFeatureInput::splitType() const
{
    SplitFaceSplitTypes res = splitType_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SPLITFACEFEATUREINPUT_API