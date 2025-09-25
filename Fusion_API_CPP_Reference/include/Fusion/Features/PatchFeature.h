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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PATCHFEATURE_CPP__
# define ADSK_FUSION_PATCHFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_PATCHFEATURE_API
# endif
#else
# define ADSK_FUSION_PATCHFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class BRepEdge;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// An object that represents an existing patch feature in a design.
class PatchFeature : public Feature {
public:

    /// Returns an ObjectCollection that contains all of the sketch curves or B-Rep edges
    /// that defines the closed outer boundary of the patch feature.
    /// 
    /// When setting this property, the input can be a sketch profile, a single sketch curve, a single B-Rep edge,
    /// or an ObjectCollection of sketch curves and B-Rep edges.
    /// 
    /// If a single open sketch curve or B-Rep edge is input, Fusion will automatically find connected sketch curves
    /// or B-Rep edges to define a closed loop.
    /// 
    /// If an ObjectCollection of sketch curves or B-Rep edges is input, they must define a closed shape.
    /// 
    /// To get or set this property, you need to position the timeline marker immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> boundaryCurve() const;
    bool boundaryCurve(const core::Ptr<core::Base>& value);

    /// Gets the type of operation performed by the patch feature.
    FeatureOperations operation() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the type of surface continuity used when creating the patch face. This value is only used when BRepEdges are input and
    /// defines the continuity of how the patch face connects to the face adjacent to each of the input edges.
    /// 
    /// To set this property, you need to position the timeline marker immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    SurfaceContinuityTypes continuity() const;
    bool continuity(SurfaceContinuityTypes value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<PatchFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e., a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy.
    /// Returns the proxy object or null if this is not the NativeObject.
    core::Ptr<PatchFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets and sets any interior curves or points the patch should fit
    /// through. Valid entities include object collections of connected curves, paths, sketch curves,
    /// sketch points, B-Rep edges, and construction points.
    /// 
    /// When getting this property, the returned ObjectCollection can contain individual edges, sketch curves,
    /// sketch points, construction points, vertices, and ObjectCollection objects that represent a group
    /// of the curves and points listed above.
    /// 
    /// Can be set to null to remove any interior rails and points from the patch.
    /// 
    /// To get or set this property, you need to position the timeline marker immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> interiorRailsAndPoints() const;
    bool interiorRailsAndPoints(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets if the edges in the boundary curve are treated as a group
    /// , and they all use the same continuity. If this property is True (which is the default),
    /// the continuity for all edges is controlled by the continuity property. If
    /// this property is false; the continuity is set for each edge using the
    /// setContinuity method.
    /// 
    /// When this property is set to true, the continuity and weight of the first edge
    /// will be used for all edges. When set to false, each edge will initially have
    /// the same continuity and weight. This property is typically set to false by calling the
    /// setContinuity method, which has the side effect of changing this to false.
    /// 
    /// To get or set this property, you need to position the timeline marker immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isGroupEdges() const;
    bool isGroupEdges(bool value);

    /// Gets and sets the type of surface continuity to use for all edges when the isGroupEdges property is true.
    /// The continuity is used to determine how the patch connects to any B-Rep edges in the boundary. It is
    /// ignored for any sketch curves in the boundary. The property defaults to ConnectedSurfaceContinuityType.
    /// The value of this property is ignored if the isGroupEdges property is false.
    /// 
    /// To get or set this property, you need to position the timeline marker immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    SurfaceContinuityTypes groupContinuity() const;
    bool groupContinuity(SurfaceContinuityTypes value);

    /// Gets and sets the weight to use for all edges when the isGroupEdges property is true. It is ignored for any sketch curves
    /// in the boundary. The property defaults to 0.5. The value of this property is ignored if the isGroupEdges property is false.
    /// 
    /// To get or set this property, you need to position the timeline marker immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    double groupWeight() const;
    bool groupWeight(double value);

    /// Gets and sets the continuity direction for all edges when the isGroupEdges property is true. It is ignored for any sketch curves
    /// in the boundary. The property defaults to false. The value of this property is ignored if the isGroupEdges property is false.
    /// 
    /// To get or set this property, you need to position the timeline marker immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool groupIsContinuityDirectionFlipped() const;
    bool groupIsContinuityDirectionFlipped(bool value);

    /// Sets the continuity to use for each edge in the boundary. The arrays for the arguments correspond
    /// to B-Rep edges in the boundary. You can use the getContinuity method to get the list of edges to
    /// know their order. This order applies to the arrays provided for the arguments.
    /// continuity : An array whose size of the number of B-Rep edges in the boundary. You can use the getContinuity
    /// method to get the list of edges, so you know the number and order of the edges. The continuity array defines the
    /// type of continuity to apply to the edge at the same index. The values are obtained from the SurfaceContinuityTypes
    /// enum and passed in as an integer.
    /// weight : An array whose size is the number of B-Rep edges in the boundary. You can use the getContinuity
    /// method to get the list of edges, so you know the number and order of the edges. The weight array defines the
    /// weight to apply to the edge at the same index. If the continuity of an edge is ConnectedSurfaceContinuityType,
    /// the weight value is ignored.
    /// isContinuityDirectionFlipped : An array whose size is the number of B-Rep edges in the boundary. You can use the getContinuity
    /// method to get the list of edges, so you know the number and order of the edges. The isContinuityDirectionFlipped
    /// array defines which of the two faces the edge connects to and is used in computing the continuity direction. If the
    /// continuity is ConnectedSurfaceContinuityType, or the edge is an open edge and only connected to a single face,
    /// the value is ignored.
    /// 
    /// If false, the face associated with the first co-edge returned by the edge is used.
    /// Returns true if successful.
    bool setContinuity(const std::vector<int>& continuity, const std::vector<double>& weight, const std::vector<bool>& isContinuityDirectionFlipped);

    /// Gets the continuity used for each edge in the boundary.
    /// 
    /// To call this method, you need to position the timeline marker immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// edges : Output array containing all of the BRepEdge objects in the boundary.
    /// continuity : Output array the same size as the edges array that defines the continuity
    /// to apply to the edge in the same index in the edges array. The values are obtained
    /// from the SurfaceContinuityTypes enum and passed in as an integers.
    /// weight : Output array the same size as the edges array that defines the weight applied
    /// to the edge in the same index in the edges array. If the continuity
    /// of an edge is ConnectedSurfaceContinuityType, the weight value should be ignored.
    /// isContinuityDirectionFlipped : Output array the same size as the edges array that defines which of the two faces the
    /// edge connects to is used in computing the continuity direction. If the continuity is
    /// ConnectedSurfaceContinuityType or the edge is an open edge and only connected to a
    /// single face, the value should be ignored.
    /// 
    /// If false, the face associated with the first co-edge returned by the edge is used.
    /// Returns true if successful.
    bool getContinuity(std::vector<core::Ptr<BRepEdge>>& edges, std::vector<int>& continuity, std::vector<double>& weight, std::vector<bool>& isContinuityDirectionFlipped);

    ADSK_FUSION_PATCHFEATURE_API static const char* classType();
    ADSK_FUSION_PATCHFEATURE_API const char* objectType() const override;
    ADSK_FUSION_PATCHFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PATCHFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* boundaryCurve_raw() const = 0;
    virtual bool boundaryCurve_raw(core::Base* value) = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual SurfaceContinuityTypes continuity_raw() const = 0;
    virtual bool continuity_raw(SurfaceContinuityTypes value) = 0;
    virtual PatchFeature* nativeObject_raw() const = 0;
    virtual PatchFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual core::ObjectCollection* interiorRailsAndPoints_raw() const = 0;
    virtual bool interiorRailsAndPoints_raw(core::ObjectCollection* value) = 0;
    virtual bool isGroupEdges_raw() const = 0;
    virtual bool isGroupEdges_raw(bool value) = 0;
    virtual SurfaceContinuityTypes groupContinuity_raw() const = 0;
    virtual bool groupContinuity_raw(SurfaceContinuityTypes value) = 0;
    virtual double groupWeight_raw() const = 0;
    virtual bool groupWeight_raw(double value) = 0;
    virtual bool groupIsContinuityDirectionFlipped_raw() const = 0;
    virtual bool groupIsContinuityDirectionFlipped_raw(bool value) = 0;
    virtual bool setContinuity_raw(const int* continuity, size_t continuity_size, const double* weight, size_t weight_size, const bool* isContinuityDirectionFlipped, size_t isContinuityDirectionFlipped_size) = 0;
    virtual bool getContinuity_raw(BRepEdge**& edges, size_t& edges_size, int*& continuity, size_t& continuity_size, double*& weight, size_t& weight_size, bool*& isContinuityDirectionFlipped, size_t& isContinuityDirectionFlipped_size) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> PatchFeature::boundaryCurve() const
{
    core::Ptr<core::Base> res = boundaryCurve_raw();
    return res;
}

inline bool PatchFeature::boundaryCurve(const core::Ptr<core::Base>& value)
{
    return boundaryCurve_raw(value.get());
}

inline FeatureOperations PatchFeature::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline SurfaceContinuityTypes PatchFeature::continuity() const
{
    SurfaceContinuityTypes res = continuity_raw();
    return res;
}

inline bool PatchFeature::continuity(SurfaceContinuityTypes value)
{
    return continuity_raw(value);
}

inline core::Ptr<PatchFeature> PatchFeature::nativeObject() const
{
    core::Ptr<PatchFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<PatchFeature> PatchFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<PatchFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<core::ObjectCollection> PatchFeature::interiorRailsAndPoints() const
{
    core::Ptr<core::ObjectCollection> res = interiorRailsAndPoints_raw();
    return res;
}

inline bool PatchFeature::interiorRailsAndPoints(const core::Ptr<core::ObjectCollection>& value)
{
    return interiorRailsAndPoints_raw(value.get());
}

inline bool PatchFeature::isGroupEdges() const
{
    bool res = isGroupEdges_raw();
    return res;
}

inline bool PatchFeature::isGroupEdges(bool value)
{
    return isGroupEdges_raw(value);
}

inline SurfaceContinuityTypes PatchFeature::groupContinuity() const
{
    SurfaceContinuityTypes res = groupContinuity_raw();
    return res;
}

inline bool PatchFeature::groupContinuity(SurfaceContinuityTypes value)
{
    return groupContinuity_raw(value);
}

inline double PatchFeature::groupWeight() const
{
    double res = groupWeight_raw();
    return res;
}

inline bool PatchFeature::groupWeight(double value)
{
    return groupWeight_raw(value);
}

inline bool PatchFeature::groupIsContinuityDirectionFlipped() const
{
    bool res = groupIsContinuityDirectionFlipped_raw();
    return res;
}

inline bool PatchFeature::groupIsContinuityDirectionFlipped(bool value)
{
    return groupIsContinuityDirectionFlipped_raw(value);
}

inline bool PatchFeature::setContinuity(const std::vector<int>& continuity, const std::vector<double>& weight, const std::vector<bool>& isContinuityDirectionFlipped)
{
    bool* isContinuityDirectionFlipped_ = new bool[isContinuityDirectionFlipped.size()];
    for (size_t i = 0; i < isContinuityDirectionFlipped.size(); ++i)
        isContinuityDirectionFlipped_[i] = isContinuityDirectionFlipped[i];

    bool res = setContinuity_raw(continuity.empty() ? nullptr : &continuity[0], continuity.size(), weight.empty() ? nullptr : &weight[0], weight.size(), isContinuityDirectionFlipped_, isContinuityDirectionFlipped.size());
    delete[] isContinuityDirectionFlipped_;
    return res;
}

inline bool PatchFeature::getContinuity(std::vector<core::Ptr<BRepEdge>>& edges, std::vector<int>& continuity, std::vector<double>& weight, std::vector<bool>& isContinuityDirectionFlipped)
{
    BRepEdge** edges_ = nullptr;
    size_t edges_size;
    int* continuity_ = nullptr;
    size_t continuity_size;
    double* weight_ = nullptr;
    size_t weight_size;
    bool* isContinuityDirectionFlipped_ = nullptr;
    size_t isContinuityDirectionFlipped_size;

    bool res = getContinuity_raw(edges_, edges_size, continuity_, continuity_size, weight_, weight_size, isContinuityDirectionFlipped_, isContinuityDirectionFlipped_size);
    if(edges_)
    {
        edges.assign(edges_, edges_ + edges_size);
        core::DeallocateArray(edges_);
    }
    if(continuity_)
    {
        continuity.assign(continuity_, continuity_ + continuity_size);
        core::DeallocateArray(continuity_);
    }
    if(weight_)
    {
        weight.assign(weight_, weight_ + weight_size);
        core::DeallocateArray(weight_);
    }
    if(isContinuityDirectionFlipped_)
    {
        isContinuityDirectionFlipped.assign(isContinuityDirectionFlipped_, isContinuityDirectionFlipped_ + isContinuityDirectionFlipped_size);
        core::DeallocateArray(isContinuityDirectionFlipped_);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PATCHFEATURE_API