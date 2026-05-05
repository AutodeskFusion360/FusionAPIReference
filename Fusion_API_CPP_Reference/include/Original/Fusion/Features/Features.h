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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FEATURES_CPP__
# define ADSK_FUSION_FEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_FEATURES_API
# endif
#else
# define ADSK_FUSION_FEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ArrangeFeatures;
    class BaseFeatures;
    class BossFeatures;
    class BoundaryFillFeatures;
    class BoxFeatures;
    class ChamferFeatures;
    class CircularPatternFeatures;
    class CoilFeatures;
    class CombineFeatures;
    class CopyPasteBodies;
    class CornerClosureFeatures;
    class CustomFeatures;
    class CutPasteBodies;
    class CylinderFeatures;
    class DeleteFaceFeatures;
    class DeriveFeatures;
    class DraftFeatures;
    class EmbossFeatures;
    class ExtendFeatures;
    class ExtrudeFeatures;
    class Feature;
    class FilletFeatures;
    class FlangeFeatures;
    class FormFeatures;
    class HemFeatures;
    class HoleFeatures;
    class LoftFeatures;
    class MergeFacesFeatures;
    class MeshCombineFaceGroupsFeatures;
    class MeshCombineFeatures;
    class MeshConvertFeatures;
    class MeshGenerateFaceGroupsFeatures;
    class MeshPlaneCutFeatures;
    class MeshReduceFeatures;
    class MeshRemeshFeatures;
    class MeshRemoveFeatures;
    class MeshRepairFeatures;
    class MeshReverseNormalFeatures;
    class MeshSeparateFeatures;
    class MeshShellFeatures;
    class MeshSmoothFeatures;
    class MirrorFeatures;
    class MoveFeatures;
    class OffsetFacesFeatures;
    class OffsetFeatures;
    class PatchFeatures;
    class Path;
    class PathPatternFeatures;
    class PipeFeatures;
    class RectangularPatternFeatures;
    class RefoldFeatures;
    class RemoveFeatures;
    class ReplaceFaceFeatures;
    class ReverseNormalFeatures;
    class RevolveFeatures;
    class RibFeatures;
    class RipFeatures;
    class RuledSurfaceFeatures;
    class RuleFilletFeatures;
    class ScaleFeatures;
    class ShellFeatures;
    class SilhouetteSplitFeatures;
    class SphereFeatures;
    class SplitBodyFeatures;
    class SplitFaceFeatures;
    class StitchFeatures;
    class SurfaceDeleteFaceFeatures;
    class SweepFeatures;
    class TessellateFeatures;
    class ThickenFeatures;
    class ThreadFeatures;
    class TorusFeatures;
    class TrimFeatures;
    class UnfoldFeatures;
    class UnstitchFeatures;
    class UntrimFeatures;
    class VolumetricCustomFeatures;
    class VolumetricModelToMeshFeatures;
    class WebFeatures;
}}

namespace adsk { namespace fusion {

/// The features collection which provides access to all existing features. This collection
/// provides direct access to all features regardless of type. It also provides access
/// to type specific collections where you can get features of a specific type and also create
/// new features of that type.
class Features : public core::Base {
public:

    /// Function that returns the specified feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Feature> item(size_t index) const;

    /// Returns the number of features in the collection.
    size_t count() const;

    /// Returns the collection that provides access to the extrude features within the component
    /// and supports the creation of new extrude features.
    core::Ptr<ExtrudeFeatures> extrudeFeatures() const;

    /// Returns the collection that provides access to the revolve features within the component
    /// and supports the creation of new revolved features.
    core::Ptr<RevolveFeatures> revolveFeatures() const;

    /// Returns the collection that provides access to the hole features within the component
    /// and supports the creation of new hole features.
    core::Ptr<HoleFeatures> holeFeatures() const;

    /// Returns the collection that provides access to the fillet features within the component
    /// and supports the creation of new fillet features.
    core::Ptr<FilletFeatures> filletFeatures() const;

    /// Returns the collection that provides access to the sweep features within the component
    /// and supports the creation of new sweep features.
    core::Ptr<SweepFeatures> sweepFeatures() const;

    /// Returns the collection that provides access to the chamfer features within the component
    /// and supports the creation of new chamfer features.
    core::Ptr<ChamferFeatures> chamferFeatures() const;

    /// Returns the collection that provides access to the shell features within the component
    /// and supports the creation of new shell features.
    core::Ptr<ShellFeatures> shellFeatures() const;

    /// Returns the collection that provides access to the mirror features within the component
    /// and supports the creation of new mirror features.
    core::Ptr<MirrorFeatures> mirrorFeatures() const;

    /// Returns the collection that provides access to the circular pattern features within the component
    /// and supports the creation of new circular pattern features.
    core::Ptr<CircularPatternFeatures> circularPatternFeatures() const;

    /// Returns the collection that provides access to the rectangular pattern features within the component
    /// and supports the creation of new rectangular pattern features.
    core::Ptr<RectangularPatternFeatures> rectangularPatternFeatures() const;

    /// Returns the collection that provides access to the path pattern features within the component
    /// and supports the creation of new path pattern features.
    core::Ptr<PathPatternFeatures> pathPatternFeatures() const;

    /// Returns the collection that provides access to the combine features within the component
    /// and supports the creation of new combine features.
    core::Ptr<CombineFeatures> combineFeatures() const;

    /// Returns the collection that provides access to the thread features within the component
    /// and supports the creation of new thread features.
    core::Ptr<ThreadFeatures> threadFeatures() const;

    /// Returns the collection that provides access to the draft features within the component
    /// and supports the creation of new draft features.
    core::Ptr<DraftFeatures> draftFeatures() const;

    /// Returns the collection that provides access to the scale features within the component
    /// and supports the creation of new scale features.
    core::Ptr<ScaleFeatures> scaleFeatures() const;

    /// Method that creates a Path used to define the shape of a Sweep feature. A Path is a contiguous
    /// set of curves that can be a combination of sketch curves and model edges.
    /// curve : A SketchCurve or an ObjectCollection containing multiple sketch entities and/or BRepEdge objects. If a single sketch curve
    /// or edge is input the isChain argument is checked to determine if connected curves (they do not need to be tangent)
    /// should be automatically found. If multiple curves are provided the isChain argument is always
    /// treated as false so you must provide all of the curves in the object collection that you want included in the path.
    /// The provided curves must all connect together in a single path.
    /// 
    /// The input curves can be from multiple sketches and bodies and they need to geometrically connect for
    /// a valid path to be created.
    /// isChain : Optional argument, that defaults to true. If this argument is set to true, all curves and edges that are end point
    /// connected to the single input curve will be found and used to create the path.
    /// This argument is only used when the first argument is a single SketchCurve/BRepEdge object.
    /// Returns the newly created Path.
    core::Ptr<Path> createPath(const core::Ptr<core::Base>& curve, bool isChain = true);

    /// Returns the collection that provides access to the replaceFace features within the component
    /// and supports the creation of new replaceFace features.
    core::Ptr<ReplaceFaceFeatures> replaceFaceFeatures() const;

    /// Returns the collection that provides access to the Move features within the component
    /// and supports the creation of new Move features.
    core::Ptr<MoveFeatures> moveFeatures() const;

    /// Returns the collection that provides access to the SplitFace features within the component and supports the creation
    /// of new SplitFace features
    core::Ptr<SplitFaceFeatures> splitFaceFeatures() const;

    /// Returns the collection that provides access to the SplitBody features within the component and supports the creation
    /// of new SplitBody features
    core::Ptr<SplitBodyFeatures> splitBodyFeatures() const;

    /// Returns the collection that provides access to the Parting Line Split features within the component and supports
    /// the creation of new Parting Line Split features
    core::Ptr<SilhouetteSplitFeatures> silhouetteSplitFeatures() const;

    /// Returns the collection that provides access to the Offset features within the component
    /// and supports the creation of new Offset features.
    core::Ptr<OffsetFeatures> offsetFeatures() const;

    /// Returns the collection that provides access to the Extend features within the component
    /// and supports the creation of new Extend features.
    core::Ptr<ExtendFeatures> extendFeatures() const;

    /// Returns the collection that provides access to the Stitch features within the component
    /// and supports the creation of new Stitch features.
    core::Ptr<StitchFeatures> stitchFeatures() const;

    /// Returns the collection that provides access to the Boundary Fill features within the component
    /// and supports the creation of new Boundary Fill features.
    core::Ptr<BoundaryFillFeatures> boundaryFillFeatures() const;

    /// Returns the collection that provides access to the Trim features within the component
    /// and supports the creation of new Trim features.
    core::Ptr<TrimFeatures> trimFeatures() const;

    /// Returns the collection that provides access to the Thicken features within the component
    /// and supports the creation of new Thicken features.
    core::Ptr<ThickenFeatures> thickenFeatures() const;

    /// Returns the collection that provides access to the Unstitch features within the component
    /// and supports the creation of new Unstitch features.
    core::Ptr<UnstitchFeatures> unstitchFeatures() const;

    /// Returns the collection that provides access to the Remove features within the component
    /// and supports the creation of new Remove features.
    core::Ptr<RemoveFeatures> removeFeatures() const;

    /// Returns the collection that provides access to the existing base features
    /// and supports the creation of new base features. A base feature represents
    /// a body that is non-parametric.
    core::Ptr<BaseFeatures> baseFeatures() const;

    /// Returns the collection that provides access to the Coil Primitive features within the component.
    core::Ptr<CoilFeatures> coilFeatures() const;

    /// Returns the collection that provides access to the existing box features.
    core::Ptr<BoxFeatures> boxFeatures() const;

    /// Returns the collection that provides access to the existing cylinder features.
    core::Ptr<CylinderFeatures> cylinderFeatures() const;

    /// Returns the collection that provides access to the existing sphere features.
    core::Ptr<SphereFeatures> sphereFeatures() const;

    /// Returns the collection that provides access to the existing torus features.
    core::Ptr<TorusFeatures> torusFeatures() const;

    /// Returns the collection that provides access to the existing pipe features.
    core::Ptr<PipeFeatures> pipeFeatures() const;

    /// Returns the collection that provides access to the existing rib features.
    core::Ptr<RibFeatures> ribFeatures() const;

    /// Returns the collection that provides access to the existing web features.
    core::Ptr<WebFeatures> webFeatures() const;

    /// Returns the collection that provides access to the existing form features.
    core::Ptr<FormFeatures> formFeatures() const;

    /// Returns the collection that provides access to the Reverse Normal features within the component
    /// and supports the creation of new Reverse Normal features.
    core::Ptr<ReverseNormalFeatures> reverseNormalFeatures() const;

    /// Returns the collection that provides access to the Patch features within the component
    /// and supports the creation of new Patch features.
    core::Ptr<PatchFeatures> patchFeatures() const;

    /// Returns the collection that provides access to the existing loft features and
    /// supports the creation of new loft features.
    core::Ptr<LoftFeatures> loftFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the existing rule fillet features.
    core::Ptr<RuleFilletFeatures> ruleFilletFeatures() const;

    /// Function that returns the specified feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the same name seen in the timeline.
    /// Returns the specified item or null if a feature matching the name was not found.
    core::Ptr<Feature> itemByName(const std::string& name) const;

    /// Returns the collection that provides access to the existing Surface Delete Face features.
    core::Ptr<SurfaceDeleteFaceFeatures> surfaceDeleteFaceFeatures() const;

    /// Returns the collection that provides access to the existing Delete Face features.
    core::Ptr<DeleteFaceFeatures> deleteFaceFeatures() const;

    /// Returns the collection that provides access to the existing Offset Face features.
    core::Ptr<OffsetFacesFeatures> offsetFacesFeatures() const;

    /// Returns the collection that provides access to the existing copy-paste features
    /// and supports the creation of new copy-paste features.
    core::Ptr<CopyPasteBodies> copyPasteBodies() const;

    /// Returns the collection that provides access to the existing cut-paste features
    /// and supports the creation of new cut-paste features.
    core::Ptr<CutPasteBodies> cutPasteBodies() const;

    /// Returns the collection that provides access to the existing flange features.
    core::Ptr<FlangeFeatures> flangeFeatures() const;

    /// Returns the collection that provides access to the existing unfold features.
    core::Ptr<UnfoldFeatures> unfoldFeatures() const;

    /// Returns the collection that provides access to the existing refold features.
    core::Ptr<RefoldFeatures> refoldFeatures() const;

    /// Returns the collection that provides access to the Ruled Surface features within the component
    /// and supports the creation of new Ruled Surface features.
    core::Ptr<RuledSurfaceFeatures> ruledSurfaceFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the custom features within the component
    /// and supports the creation of new custom features.
    core::Ptr<CustomFeatures> customFeatures() const;

    /// Returns the collection that provides access to the Untrim features within the component
    /// and supports the creation of new Untrim features.
    core::Ptr<UntrimFeatures> untrimFeatures() const;

    /// Returns the collection that provides access to the boss features within the component
    /// and supports the creation of new boss features.
    core::Ptr<BossFeatures> bossFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the mesh repair features within the component
    /// and supports the creation of new mesh repair features.
    core::Ptr<MeshRepairFeatures> meshRepairFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the mesh smooth features within the component
    /// and supports the creation of new mesh smooth features.
    core::Ptr<MeshSmoothFeatures> meshSmoothFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the mesh reduce features within the component
    /// and supports the creation of new mesh reduce features.
    core::Ptr<MeshReduceFeatures> meshReduceFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the mesh remesh features within the component
    /// and supports the creation of new mesh remesh features.
    core::Ptr<MeshRemeshFeatures> meshRemeshFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the mesh generate facegroup features
    /// within the component and supports the creation of new mesh generate facegroup features.
    core::Ptr<MeshGenerateFaceGroupsFeatures> meshGenerateFaceGroupsFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the mesh shell features
    /// within the component and supports the creation of new mesh shell features.
    core::Ptr<MeshShellFeatures> meshShellFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the tessellate features
    /// within the component and supports the creation of new tessellate features.
    core::Ptr<TessellateFeatures> tessellateFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the mesh combine features
    /// within the component and supports the creation of new mesh combine features.
    core::Ptr<MeshCombineFeatures> meshCombineFeatures() const;

    /// Returns the collection that provides access to the existing Rip features.
    core::Ptr<RipFeatures> ripFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the mesh plane cut features
    /// within the component and supports the creation of new mesh plane cut features.
    core::Ptr<MeshPlaneCutFeatures> meshPlaneCutFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the mesh convert features
    /// within the component and supports the creation of new mesh convert features.
    core::Ptr<MeshConvertFeatures> meshConvertFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the mesh combine face groups features
    /// within the component and supports the creation of new mesh combine face groups features.
    core::Ptr<MeshCombineFaceGroupsFeatures> meshCombineFaceGroupsFeatures() const;

    /// Returns the collection object that supports the ability to merge faces.
    /// Merging faces is currently limited to a Direct Modeling design or a body in a base feature.
    /// The result of merging faces is a direct B-Rep modification, and the change is not represented
    /// as a feature in the browser.
    core::Ptr<MergeFacesFeatures> mergeFacesFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the mesh separate features
    /// within the component and supports the creation of new mesh separate features.
    core::Ptr<MeshSeparateFeatures> meshSeparateFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the mesh reverse normal features
    /// within the component and supports the creation of new mesh reverse normal features.
    core::Ptr<MeshReverseNormalFeatures> meshReverseNormalFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the Arrange features
    /// within the component and supports the creation of new Arrange features.
    core::Ptr<ArrangeFeatures> arrangeFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to volumetric custom features within the component
    /// and supports the creation of new volumetric custom features.
    core::Ptr<VolumetricCustomFeatures> volumetricCustomFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the Volumetric Model to Mesh features
    /// within the component and supports the creation of new Volumetric Model to Mesh features.
    core::Ptr<VolumetricModelToMeshFeatures> volumetricModelToMeshFeatures() const;

    /// Returns the collection that provides access to the emboss features
    /// within the component and supports the creation of new emboss features.
    core::Ptr<EmbossFeatures> embossFeatures() const;

    /// Returns the collection that provides access to the existing Hem features.
    core::Ptr<HemFeatures> hemFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the mesh remove features
    /// within the component and supports the creation of new mesh remove features.
    core::Ptr<MeshRemoveFeatures> meshRemoveFeatures() const;

    /// Returns the collection that provides access to the Derive features
    /// within the component and supports the creation of new Derive features.
    core::Ptr<DeriveFeatures> deriveFeatures() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection that provides access to the existing Corner Closure features.
    core::Ptr<CornerClosureFeatures> cornerClosureFeatures() const;

    typedef Feature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_FEATURES_API static const char* classType();
    ADSK_FUSION_FEATURES_API const char* objectType() const override;
    ADSK_FUSION_FEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Feature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ExtrudeFeatures* extrudeFeatures_raw() const = 0;
    virtual RevolveFeatures* revolveFeatures_raw() const = 0;
    virtual HoleFeatures* holeFeatures_raw() const = 0;
    virtual FilletFeatures* filletFeatures_raw() const = 0;
    virtual SweepFeatures* sweepFeatures_raw() const = 0;
    virtual ChamferFeatures* chamferFeatures_raw() const = 0;
    virtual ShellFeatures* shellFeatures_raw() const = 0;
    virtual MirrorFeatures* mirrorFeatures_raw() const = 0;
    virtual CircularPatternFeatures* circularPatternFeatures_raw() const = 0;
    virtual RectangularPatternFeatures* rectangularPatternFeatures_raw() const = 0;
    virtual PathPatternFeatures* pathPatternFeatures_raw() const = 0;
    virtual CombineFeatures* combineFeatures_raw() const = 0;
    virtual ThreadFeatures* threadFeatures_raw() const = 0;
    virtual DraftFeatures* draftFeatures_raw() const = 0;
    virtual ScaleFeatures* scaleFeatures_raw() const = 0;
    virtual Path* createPath_raw(core::Base* curve, bool isChain) = 0;
    virtual ReplaceFaceFeatures* replaceFaceFeatures_raw() const = 0;
    virtual MoveFeatures* moveFeatures_raw() const = 0;
    virtual SplitFaceFeatures* splitFaceFeatures_raw() const = 0;
    virtual SplitBodyFeatures* splitBodyFeatures_raw() const = 0;
    virtual SilhouetteSplitFeatures* silhouetteSplitFeatures_raw() const = 0;
    virtual OffsetFeatures* offsetFeatures_raw() const = 0;
    virtual ExtendFeatures* extendFeatures_raw() const = 0;
    virtual StitchFeatures* stitchFeatures_raw() const = 0;
    virtual BoundaryFillFeatures* boundaryFillFeatures_raw() const = 0;
    virtual TrimFeatures* trimFeatures_raw() const = 0;
    virtual ThickenFeatures* thickenFeatures_raw() const = 0;
    virtual UnstitchFeatures* unstitchFeatures_raw() const = 0;
    virtual RemoveFeatures* removeFeatures_raw() const = 0;
    virtual BaseFeatures* baseFeatures_raw() const = 0;
    virtual CoilFeatures* coilFeatures_raw() const = 0;
    virtual BoxFeatures* boxFeatures_raw() const = 0;
    virtual CylinderFeatures* cylinderFeatures_raw() const = 0;
    virtual SphereFeatures* sphereFeatures_raw() const = 0;
    virtual TorusFeatures* torusFeatures_raw() const = 0;
    virtual PipeFeatures* pipeFeatures_raw() const = 0;
    virtual RibFeatures* ribFeatures_raw() const = 0;
    virtual WebFeatures* webFeatures_raw() const = 0;
    virtual FormFeatures* formFeatures_raw() const = 0;
    virtual ReverseNormalFeatures* reverseNormalFeatures_raw() const = 0;
    virtual PatchFeatures* patchFeatures_raw() const = 0;
    virtual LoftFeatures* loftFeatures_raw() const = 0;
    virtual RuleFilletFeatures* ruleFilletFeatures_raw() const = 0;
    virtual Feature* itemByName_raw(const char* name) const = 0;
    virtual SurfaceDeleteFaceFeatures* surfaceDeleteFaceFeatures_raw() const = 0;
    virtual DeleteFaceFeatures* deleteFaceFeatures_raw() const = 0;
    virtual OffsetFacesFeatures* offsetFacesFeatures_raw() const = 0;
    virtual CopyPasteBodies* copyPasteBodies_raw() const = 0;
    virtual CutPasteBodies* cutPasteBodies_raw() const = 0;
    virtual FlangeFeatures* flangeFeatures_raw() const = 0;
    virtual UnfoldFeatures* unfoldFeatures_raw() const = 0;
    virtual RefoldFeatures* refoldFeatures_raw() const = 0;
    virtual RuledSurfaceFeatures* ruledSurfaceFeatures_raw() const = 0;
    virtual CustomFeatures* customFeatures_raw() const = 0;
    virtual UntrimFeatures* untrimFeatures_raw() const = 0;
    virtual BossFeatures* bossFeatures_raw() const = 0;
    virtual MeshRepairFeatures* meshRepairFeatures_raw() const = 0;
    virtual MeshSmoothFeatures* meshSmoothFeatures_raw() const = 0;
    virtual MeshReduceFeatures* meshReduceFeatures_raw() const = 0;
    virtual MeshRemeshFeatures* meshRemeshFeatures_raw() const = 0;
    virtual MeshGenerateFaceGroupsFeatures* meshGenerateFaceGroupsFeatures_raw() const = 0;
    virtual MeshShellFeatures* meshShellFeatures_raw() const = 0;
    virtual TessellateFeatures* tessellateFeatures_raw() const = 0;
    virtual MeshCombineFeatures* meshCombineFeatures_raw() const = 0;
    virtual RipFeatures* ripFeatures_raw() const = 0;
    virtual MeshPlaneCutFeatures* meshPlaneCutFeatures_raw() const = 0;
    virtual MeshConvertFeatures* meshConvertFeatures_raw() const = 0;
    virtual MeshCombineFaceGroupsFeatures* meshCombineFaceGroupsFeatures_raw() const = 0;
    virtual MergeFacesFeatures* mergeFacesFeatures_raw() const = 0;
    virtual MeshSeparateFeatures* meshSeparateFeatures_raw() const = 0;
    virtual MeshReverseNormalFeatures* meshReverseNormalFeatures_raw() const = 0;
    virtual ArrangeFeatures* arrangeFeatures_raw() const = 0;
    virtual VolumetricCustomFeatures* volumetricCustomFeatures_raw() const = 0;
    virtual VolumetricModelToMeshFeatures* volumetricModelToMeshFeatures_raw() const = 0;
    virtual EmbossFeatures* embossFeatures_raw() const = 0;
    virtual HemFeatures* hemFeatures_raw() const = 0;
    virtual MeshRemoveFeatures* meshRemoveFeatures_raw() const = 0;
    virtual DeriveFeatures* deriveFeatures_raw() const = 0;
    virtual CornerClosureFeatures* cornerClosureFeatures_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Feature> Features::item(size_t index) const
{
    core::Ptr<Feature> res = item_raw(index);
    return res;
}

inline size_t Features::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ExtrudeFeatures> Features::extrudeFeatures() const
{
    core::Ptr<ExtrudeFeatures> res = extrudeFeatures_raw();
    return res;
}

inline core::Ptr<RevolveFeatures> Features::revolveFeatures() const
{
    core::Ptr<RevolveFeatures> res = revolveFeatures_raw();
    return res;
}

inline core::Ptr<HoleFeatures> Features::holeFeatures() const
{
    core::Ptr<HoleFeatures> res = holeFeatures_raw();
    return res;
}

inline core::Ptr<FilletFeatures> Features::filletFeatures() const
{
    core::Ptr<FilletFeatures> res = filletFeatures_raw();
    return res;
}

inline core::Ptr<SweepFeatures> Features::sweepFeatures() const
{
    core::Ptr<SweepFeatures> res = sweepFeatures_raw();
    return res;
}

inline core::Ptr<ChamferFeatures> Features::chamferFeatures() const
{
    core::Ptr<ChamferFeatures> res = chamferFeatures_raw();
    return res;
}

inline core::Ptr<ShellFeatures> Features::shellFeatures() const
{
    core::Ptr<ShellFeatures> res = shellFeatures_raw();
    return res;
}

inline core::Ptr<MirrorFeatures> Features::mirrorFeatures() const
{
    core::Ptr<MirrorFeatures> res = mirrorFeatures_raw();
    return res;
}

inline core::Ptr<CircularPatternFeatures> Features::circularPatternFeatures() const
{
    core::Ptr<CircularPatternFeatures> res = circularPatternFeatures_raw();
    return res;
}

inline core::Ptr<RectangularPatternFeatures> Features::rectangularPatternFeatures() const
{
    core::Ptr<RectangularPatternFeatures> res = rectangularPatternFeatures_raw();
    return res;
}

inline core::Ptr<PathPatternFeatures> Features::pathPatternFeatures() const
{
    core::Ptr<PathPatternFeatures> res = pathPatternFeatures_raw();
    return res;
}

inline core::Ptr<CombineFeatures> Features::combineFeatures() const
{
    core::Ptr<CombineFeatures> res = combineFeatures_raw();
    return res;
}

inline core::Ptr<ThreadFeatures> Features::threadFeatures() const
{
    core::Ptr<ThreadFeatures> res = threadFeatures_raw();
    return res;
}

inline core::Ptr<DraftFeatures> Features::draftFeatures() const
{
    core::Ptr<DraftFeatures> res = draftFeatures_raw();
    return res;
}

inline core::Ptr<ScaleFeatures> Features::scaleFeatures() const
{
    core::Ptr<ScaleFeatures> res = scaleFeatures_raw();
    return res;
}

inline core::Ptr<Path> Features::createPath(const core::Ptr<core::Base>& curve, bool isChain)
{
    core::Ptr<Path> res = createPath_raw(curve.get(), isChain);
    return res;
}

inline core::Ptr<ReplaceFaceFeatures> Features::replaceFaceFeatures() const
{
    core::Ptr<ReplaceFaceFeatures> res = replaceFaceFeatures_raw();
    return res;
}

inline core::Ptr<MoveFeatures> Features::moveFeatures() const
{
    core::Ptr<MoveFeatures> res = moveFeatures_raw();
    return res;
}

inline core::Ptr<SplitFaceFeatures> Features::splitFaceFeatures() const
{
    core::Ptr<SplitFaceFeatures> res = splitFaceFeatures_raw();
    return res;
}

inline core::Ptr<SplitBodyFeatures> Features::splitBodyFeatures() const
{
    core::Ptr<SplitBodyFeatures> res = splitBodyFeatures_raw();
    return res;
}

inline core::Ptr<SilhouetteSplitFeatures> Features::silhouetteSplitFeatures() const
{
    core::Ptr<SilhouetteSplitFeatures> res = silhouetteSplitFeatures_raw();
    return res;
}

inline core::Ptr<OffsetFeatures> Features::offsetFeatures() const
{
    core::Ptr<OffsetFeatures> res = offsetFeatures_raw();
    return res;
}

inline core::Ptr<ExtendFeatures> Features::extendFeatures() const
{
    core::Ptr<ExtendFeatures> res = extendFeatures_raw();
    return res;
}

inline core::Ptr<StitchFeatures> Features::stitchFeatures() const
{
    core::Ptr<StitchFeatures> res = stitchFeatures_raw();
    return res;
}

inline core::Ptr<BoundaryFillFeatures> Features::boundaryFillFeatures() const
{
    core::Ptr<BoundaryFillFeatures> res = boundaryFillFeatures_raw();
    return res;
}

inline core::Ptr<TrimFeatures> Features::trimFeatures() const
{
    core::Ptr<TrimFeatures> res = trimFeatures_raw();
    return res;
}

inline core::Ptr<ThickenFeatures> Features::thickenFeatures() const
{
    core::Ptr<ThickenFeatures> res = thickenFeatures_raw();
    return res;
}

inline core::Ptr<UnstitchFeatures> Features::unstitchFeatures() const
{
    core::Ptr<UnstitchFeatures> res = unstitchFeatures_raw();
    return res;
}

inline core::Ptr<RemoveFeatures> Features::removeFeatures() const
{
    core::Ptr<RemoveFeatures> res = removeFeatures_raw();
    return res;
}

inline core::Ptr<BaseFeatures> Features::baseFeatures() const
{
    core::Ptr<BaseFeatures> res = baseFeatures_raw();
    return res;
}

inline core::Ptr<CoilFeatures> Features::coilFeatures() const
{
    core::Ptr<CoilFeatures> res = coilFeatures_raw();
    return res;
}

inline core::Ptr<BoxFeatures> Features::boxFeatures() const
{
    core::Ptr<BoxFeatures> res = boxFeatures_raw();
    return res;
}

inline core::Ptr<CylinderFeatures> Features::cylinderFeatures() const
{
    core::Ptr<CylinderFeatures> res = cylinderFeatures_raw();
    return res;
}

inline core::Ptr<SphereFeatures> Features::sphereFeatures() const
{
    core::Ptr<SphereFeatures> res = sphereFeatures_raw();
    return res;
}

inline core::Ptr<TorusFeatures> Features::torusFeatures() const
{
    core::Ptr<TorusFeatures> res = torusFeatures_raw();
    return res;
}

inline core::Ptr<PipeFeatures> Features::pipeFeatures() const
{
    core::Ptr<PipeFeatures> res = pipeFeatures_raw();
    return res;
}

inline core::Ptr<RibFeatures> Features::ribFeatures() const
{
    core::Ptr<RibFeatures> res = ribFeatures_raw();
    return res;
}

inline core::Ptr<WebFeatures> Features::webFeatures() const
{
    core::Ptr<WebFeatures> res = webFeatures_raw();
    return res;
}

inline core::Ptr<FormFeatures> Features::formFeatures() const
{
    core::Ptr<FormFeatures> res = formFeatures_raw();
    return res;
}

inline core::Ptr<ReverseNormalFeatures> Features::reverseNormalFeatures() const
{
    core::Ptr<ReverseNormalFeatures> res = reverseNormalFeatures_raw();
    return res;
}

inline core::Ptr<PatchFeatures> Features::patchFeatures() const
{
    core::Ptr<PatchFeatures> res = patchFeatures_raw();
    return res;
}

inline core::Ptr<LoftFeatures> Features::loftFeatures() const
{
    core::Ptr<LoftFeatures> res = loftFeatures_raw();
    return res;
}

inline core::Ptr<RuleFilletFeatures> Features::ruleFilletFeatures() const
{
    core::Ptr<RuleFilletFeatures> res = ruleFilletFeatures_raw();
    return res;
}

inline core::Ptr<Feature> Features::itemByName(const std::string& name) const
{
    core::Ptr<Feature> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<SurfaceDeleteFaceFeatures> Features::surfaceDeleteFaceFeatures() const
{
    core::Ptr<SurfaceDeleteFaceFeatures> res = surfaceDeleteFaceFeatures_raw();
    return res;
}

inline core::Ptr<DeleteFaceFeatures> Features::deleteFaceFeatures() const
{
    core::Ptr<DeleteFaceFeatures> res = deleteFaceFeatures_raw();
    return res;
}

inline core::Ptr<OffsetFacesFeatures> Features::offsetFacesFeatures() const
{
    core::Ptr<OffsetFacesFeatures> res = offsetFacesFeatures_raw();
    return res;
}

inline core::Ptr<CopyPasteBodies> Features::copyPasteBodies() const
{
    core::Ptr<CopyPasteBodies> res = copyPasteBodies_raw();
    return res;
}

inline core::Ptr<CutPasteBodies> Features::cutPasteBodies() const
{
    core::Ptr<CutPasteBodies> res = cutPasteBodies_raw();
    return res;
}

inline core::Ptr<FlangeFeatures> Features::flangeFeatures() const
{
    core::Ptr<FlangeFeatures> res = flangeFeatures_raw();
    return res;
}

inline core::Ptr<UnfoldFeatures> Features::unfoldFeatures() const
{
    core::Ptr<UnfoldFeatures> res = unfoldFeatures_raw();
    return res;
}

inline core::Ptr<RefoldFeatures> Features::refoldFeatures() const
{
    core::Ptr<RefoldFeatures> res = refoldFeatures_raw();
    return res;
}

inline core::Ptr<RuledSurfaceFeatures> Features::ruledSurfaceFeatures() const
{
    core::Ptr<RuledSurfaceFeatures> res = ruledSurfaceFeatures_raw();
    return res;
}

inline core::Ptr<CustomFeatures> Features::customFeatures() const
{
    core::Ptr<CustomFeatures> res = customFeatures_raw();
    return res;
}

inline core::Ptr<UntrimFeatures> Features::untrimFeatures() const
{
    core::Ptr<UntrimFeatures> res = untrimFeatures_raw();
    return res;
}

inline core::Ptr<BossFeatures> Features::bossFeatures() const
{
    core::Ptr<BossFeatures> res = bossFeatures_raw();
    return res;
}

inline core::Ptr<MeshRepairFeatures> Features::meshRepairFeatures() const
{
    core::Ptr<MeshRepairFeatures> res = meshRepairFeatures_raw();
    return res;
}

inline core::Ptr<MeshSmoothFeatures> Features::meshSmoothFeatures() const
{
    core::Ptr<MeshSmoothFeatures> res = meshSmoothFeatures_raw();
    return res;
}

inline core::Ptr<MeshReduceFeatures> Features::meshReduceFeatures() const
{
    core::Ptr<MeshReduceFeatures> res = meshReduceFeatures_raw();
    return res;
}

inline core::Ptr<MeshRemeshFeatures> Features::meshRemeshFeatures() const
{
    core::Ptr<MeshRemeshFeatures> res = meshRemeshFeatures_raw();
    return res;
}

inline core::Ptr<MeshGenerateFaceGroupsFeatures> Features::meshGenerateFaceGroupsFeatures() const
{
    core::Ptr<MeshGenerateFaceGroupsFeatures> res = meshGenerateFaceGroupsFeatures_raw();
    return res;
}

inline core::Ptr<MeshShellFeatures> Features::meshShellFeatures() const
{
    core::Ptr<MeshShellFeatures> res = meshShellFeatures_raw();
    return res;
}

inline core::Ptr<TessellateFeatures> Features::tessellateFeatures() const
{
    core::Ptr<TessellateFeatures> res = tessellateFeatures_raw();
    return res;
}

inline core::Ptr<MeshCombineFeatures> Features::meshCombineFeatures() const
{
    core::Ptr<MeshCombineFeatures> res = meshCombineFeatures_raw();
    return res;
}

inline core::Ptr<RipFeatures> Features::ripFeatures() const
{
    core::Ptr<RipFeatures> res = ripFeatures_raw();
    return res;
}

inline core::Ptr<MeshPlaneCutFeatures> Features::meshPlaneCutFeatures() const
{
    core::Ptr<MeshPlaneCutFeatures> res = meshPlaneCutFeatures_raw();
    return res;
}

inline core::Ptr<MeshConvertFeatures> Features::meshConvertFeatures() const
{
    core::Ptr<MeshConvertFeatures> res = meshConvertFeatures_raw();
    return res;
}

inline core::Ptr<MeshCombineFaceGroupsFeatures> Features::meshCombineFaceGroupsFeatures() const
{
    core::Ptr<MeshCombineFaceGroupsFeatures> res = meshCombineFaceGroupsFeatures_raw();
    return res;
}

inline core::Ptr<MergeFacesFeatures> Features::mergeFacesFeatures() const
{
    core::Ptr<MergeFacesFeatures> res = mergeFacesFeatures_raw();
    return res;
}

inline core::Ptr<MeshSeparateFeatures> Features::meshSeparateFeatures() const
{
    core::Ptr<MeshSeparateFeatures> res = meshSeparateFeatures_raw();
    return res;
}

inline core::Ptr<MeshReverseNormalFeatures> Features::meshReverseNormalFeatures() const
{
    core::Ptr<MeshReverseNormalFeatures> res = meshReverseNormalFeatures_raw();
    return res;
}

inline core::Ptr<ArrangeFeatures> Features::arrangeFeatures() const
{
    core::Ptr<ArrangeFeatures> res = arrangeFeatures_raw();
    return res;
}

inline core::Ptr<VolumetricCustomFeatures> Features::volumetricCustomFeatures() const
{
    core::Ptr<VolumetricCustomFeatures> res = volumetricCustomFeatures_raw();
    return res;
}

inline core::Ptr<VolumetricModelToMeshFeatures> Features::volumetricModelToMeshFeatures() const
{
    core::Ptr<VolumetricModelToMeshFeatures> res = volumetricModelToMeshFeatures_raw();
    return res;
}

inline core::Ptr<EmbossFeatures> Features::embossFeatures() const
{
    core::Ptr<EmbossFeatures> res = embossFeatures_raw();
    return res;
}

inline core::Ptr<HemFeatures> Features::hemFeatures() const
{
    core::Ptr<HemFeatures> res = hemFeatures_raw();
    return res;
}

inline core::Ptr<MeshRemoveFeatures> Features::meshRemoveFeatures() const
{
    core::Ptr<MeshRemoveFeatures> res = meshRemoveFeatures_raw();
    return res;
}

inline core::Ptr<DeriveFeatures> Features::deriveFeatures() const
{
    core::Ptr<DeriveFeatures> res = deriveFeatures_raw();
    return res;
}

inline core::Ptr<CornerClosureFeatures> Features::cornerClosureFeatures() const
{
    core::Ptr<CornerClosureFeatures> res = cornerClosureFeatures_raw();
    return res;
}

template <class OutputIterator> inline void Features::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FEATURES_API