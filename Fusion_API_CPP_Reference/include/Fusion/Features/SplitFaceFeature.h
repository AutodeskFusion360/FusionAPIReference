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
#include "Feature.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SPLITFACEFEATURE_CPP__
# define ADSK_FUSION_SPLITFACEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_SPLITFACEFEATURE_API
# endif
#else
# define ADSK_FUSION_SPLITFACEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing split face feature in a design.
class SplitFaceFeature : public Feature {
public:

    /// Gets and sets the faces to be split.
    /// The collection can contain one or more faces selected from solid and/or open bodies.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> facesToSplit() const;
    bool facesToSplit(const core::Ptr<core::ObjectCollection>& value);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Sets the splitting tool used for the feature.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// splittingTool : Input entity that defines the splitting tool. The splitting tool is a single entity that can be either a solid body,
    /// open body, construction plane, face, or sketch curve that partially or fully intersects the facesToSplit.
    /// The input for this argument can be one of the valid types or an ObjectCollection in the case where multiple splitting
    /// tools are being defined.
    /// isSplittingToolExtended : A boolean value for setting whether or not the splittingTool is to be automatically extended (if possible) so as to
    /// completely intersect the facesToSplit.
    /// Returns true if successful.
    bool setSplittingTool(const core::Ptr<core::Base>& splittingTool, bool isSplittingToolExtended);

    /// Gets the entity(s) that define the splitting tool(s). The splitting tool can consist of one or more of
    /// the following: BRepBody, ConstructionPlane, BRepFace, sketch curve that extends or can
    /// be extended beyond the extents of the face. To set the splitting tool, use one of the set methods to
    /// also define the split type.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> splittingTool() const;

    /// Gets whether or not the setting to automatically extend the splittingTool was set when the feature was created.
    /// 
    /// This property is valid only when the splitType property returns surfaceIntersectionSplitType.
    bool isSplittingToolExtended() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<SplitFaceFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this is not the NativeObject.
    core::Ptr<SplitFaceFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Set the split type to be a surface to surface intersection. If the split tool is a curve
    /// it will be extruded into a surface to use in the split. If it's a surface, the surface will
    /// be used and optionally extended to fully intersect the faces to be split.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// splittingTool : Input entity(s) that defines the splitting tool. The splitting tool can be a single entity or an ObjectCollection
    /// containing solid and/or open bodies, construction planes, faces, or sketch curves that partially or fully intersect
    /// the faces that are being split.
    /// isSplittingToolExtended : Specifies if the splitting tool should be extended so that is fully intersects the faces to be split.
    /// Returns true is setting the split type was successful.
    bool setAsSurfaceIntersectionSplitType(const core::Ptr<core::Base>& splittingTool, bool isSplittingToolExtended);

    /// Sets the split type to project the splitting tool along the direction defined by the
    /// specified entity.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// splittingTool : Input entity(s) that defines the splitting tool. The splitting tool can be a single entity or an ObjectCollection
    /// containing faces or sketch curves. If faces are input, the edges of the face are used as the splitting tool.
    /// directionEntity : An entity that defines the direction of projection of the splitting tool. This can be
    /// a linear BRepEdge, SketchLine, ConstructionLine, or a planar face where the face
    /// normal is used.
    /// Returns true is setting the split type was successful.
    bool setAsAlongVectorSplitType(const core::Ptr<core::Base>& splittingTool, const core::Ptr<core::Base>& directionEntity);

    /// Sets the split type to be a curve that defined by projecting the splitting curve to the
    /// closest point on the surface.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// splittingTool : Input entity(s) that defines the splitting tool. The splitting tool can be a single entity or an ObjectCollection
    /// containing faces or sketch curves. If faces are input, the edges of the face are used as the splitting tool.
    /// Returns true if setting the closest point split type was successful.
    bool setAsClosestPointSplitType(const core::Ptr<core::Base>& splittingTool);

    /// Gets the direction entity when the split type is along a vector. If the split type
    /// is not alongVectorSplitType this property will return null.
    /// 
    /// To set the direction entity use the setAsAlongVectorSplitType method.
    core::Ptr<core::Base> directionEntity() const;

    /// Returns the type of split type currently defined. To change the split type, use
    /// one of the set methods.
    SplitFaceSplitTypes splitType() const;

    ADSK_FUSION_SPLITFACEFEATURE_API static const char* classType();
    ADSK_FUSION_SPLITFACEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_SPLITFACEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SPLITFACEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* facesToSplit_raw() const = 0;
    virtual bool facesToSplit_raw(core::ObjectCollection* value) = 0;
    virtual bool setSplittingTool_raw(core::Base* splittingTool, bool isSplittingToolExtended) = 0;
    virtual core::ObjectCollection* splittingTool_raw() const = 0;
    virtual bool isSplittingToolExtended_raw() const = 0;
    virtual SplitFaceFeature* nativeObject_raw() const = 0;
    virtual SplitFaceFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual bool setAsSurfaceIntersectionSplitType_raw(core::Base* splittingTool, bool isSplittingToolExtended) = 0;
    virtual bool setAsAlongVectorSplitType_raw(core::Base* splittingTool, core::Base* directionEntity) = 0;
    virtual bool setAsClosestPointSplitType_raw(core::Base* splittingTool) = 0;
    virtual core::Base* directionEntity_raw() const = 0;
    virtual SplitFaceSplitTypes splitType_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> SplitFaceFeature::facesToSplit() const
{
    core::Ptr<core::ObjectCollection> res = facesToSplit_raw();
    return res;
}

inline bool SplitFaceFeature::facesToSplit(const core::Ptr<core::ObjectCollection>& value)
{
    return facesToSplit_raw(value.get());
}

inline bool SplitFaceFeature::setSplittingTool(const core::Ptr<core::Base>& splittingTool, bool isSplittingToolExtended)
{
    bool res = setSplittingTool_raw(splittingTool.get(), isSplittingToolExtended);
    return res;
}

inline core::Ptr<core::ObjectCollection> SplitFaceFeature::splittingTool() const
{
    core::Ptr<core::ObjectCollection> res = splittingTool_raw();
    return res;
}

inline bool SplitFaceFeature::isSplittingToolExtended() const
{
    bool res = isSplittingToolExtended_raw();
    return res;
}

inline core::Ptr<SplitFaceFeature> SplitFaceFeature::nativeObject() const
{
    core::Ptr<SplitFaceFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<SplitFaceFeature> SplitFaceFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<SplitFaceFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline bool SplitFaceFeature::setAsSurfaceIntersectionSplitType(const core::Ptr<core::Base>& splittingTool, bool isSplittingToolExtended)
{
    bool res = setAsSurfaceIntersectionSplitType_raw(splittingTool.get(), isSplittingToolExtended);
    return res;
}

inline bool SplitFaceFeature::setAsAlongVectorSplitType(const core::Ptr<core::Base>& splittingTool, const core::Ptr<core::Base>& directionEntity)
{
    bool res = setAsAlongVectorSplitType_raw(splittingTool.get(), directionEntity.get());
    return res;
}

inline bool SplitFaceFeature::setAsClosestPointSplitType(const core::Ptr<core::Base>& splittingTool)
{
    bool res = setAsClosestPointSplitType_raw(splittingTool.get());
    return res;
}

inline core::Ptr<core::Base> SplitFaceFeature::directionEntity() const
{
    core::Ptr<core::Base> res = directionEntity_raw();
    return res;
}

inline SplitFaceSplitTypes SplitFaceFeature::splitType() const
{
    SplitFaceSplitTypes res = splitType_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SPLITFACEFEATURE_API