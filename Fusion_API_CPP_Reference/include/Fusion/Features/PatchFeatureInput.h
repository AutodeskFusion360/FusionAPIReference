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
# ifdef __COMPILING_ADSK_FUSION_PATCHFEATUREINPUT_CPP__
# define ADSK_FUSION_PATCHFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_PATCHFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_PATCHFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepEdge;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a patch feature.
class PatchFeatureInput : public core::Base {
public:

    /// Gets and sets the input geometry that will be used to define the boundary. This can be a sketch profile,
    /// a single sketch curve, a single B-Rep edge, an ObjectCollection, or a Path object.
    /// 
    /// If a single open sketch curve or B-Rep edge is input, Fusion will automatically find connected sketch curves
    /// or B-Rep edges to define a closed loop.
    /// 
    /// If an ObjectCollection is used as input, it must be a set of curves that define a closed shape.
    /// 
    /// If a Path is used as input, it must define a closed shape.
    core::Ptr<core::Base> boundaryCurve() const;
    bool boundaryCurve(const core::Ptr<core::Base>& value);

    /// Gets and sets the type of operation performed by the patch feature. Only 'NewBodyFeatureOperation' and 'NewComponentFeatureOperation' are
    /// valid operations for patch features.
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the type of surface continuity to use when matching boundary edges to face edges. When a new PatchFeatureInput is
    /// created, this is initialized to ConnectedSurfaceContinuityType. This value is ignored when creating a patch for sketch curves.
    SurfaceContinuityTypes continuity() const;
    bool continuity(SurfaceContinuityTypes value);

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

    /// For geometry to be transformed correctly, an Occurrence for creation needs to be
    /// specified when the Patch feature is created based on geometry (e.g., a profile, edges, faces)
    /// in another component AND (the Patch feature) is not in the root component.
    /// The CreationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    /// Gets and sets any interior curves or points the patch should fit
    /// through. Valid entities include object collections of connected curves, paths, sketch curves,
    /// sketch points, B-Rep edges, and construction points.
    /// 
    /// When getting this property, the returned ObjectCollection can contain individual edges, sketch curves,
    /// sketch points, construction points, vertices, and ObjectCollection objects that represent a group
    /// of the curves and points listed above.
    /// 
    /// Can be set to null to remove any interior rails and points from the patch.
    core::Ptr<core::ObjectCollection> interiorRailsAndPoints() const;
    bool interiorRailsAndPoints(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets if the edges in the boundary curve are treated as a group,
    /// and they all use the same continuity. If this property is True (which is the default),
    /// the continuity property controls the continuity for all edges. If
    /// this property is false; the continuity is set for each edge using the
    /// setContinuity method.
    /// 
    /// When this property is set to true, the continuity and weight of the first edge
    /// will be used for all edges. When set to false, each edge will initially have
    /// the same continuity and weight. This is typically set to false as a side-effect
    /// of calling the setContinuity method.
    bool isGroupEdges() const;
    bool isGroupEdges(bool value);

    /// Gets and sets the type of surface continuity to use for all edges when the isGroupEdges property is true. The continuity
    /// is used to determine how the patch connects to any B-Rep edges in the boundary. It is ignored for any sketch curves in the
    /// boundary. The property defaults to ConnectedSurfaceContinuityType. The value of this property is ignored if the isGroupEdges property is false.
    SurfaceContinuityTypes groupContinuity() const;
    bool groupContinuity(SurfaceContinuityTypes value);

    /// Gets and sets the weight to use for all edges when the isGroupEdges property is true. It is ignored for any sketch curves
    /// in the boundary. The property defaults to 0.5. The value of this property is ignored if the isGroupEdges property is false.
    double groupWeight() const;
    bool groupWeight(double value);

    /// Gets and sets the continuity direction for all edges when the isGroupEdges property is true. It is ignored for any sketch curves
    /// in the boundary. The property defaults to false. The value of this property is ignored if the isGroupEdges property is false.
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

    ADSK_FUSION_PATCHFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_PATCHFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_PATCHFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PATCHFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* boundaryCurve_raw() const = 0;
    virtual bool boundaryCurve_raw(core::Base* value) = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual SurfaceContinuityTypes continuity_raw() const = 0;
    virtual bool continuity_raw(SurfaceContinuityTypes value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
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

inline core::Ptr<core::Base> PatchFeatureInput::boundaryCurve() const
{
    core::Ptr<core::Base> res = boundaryCurve_raw();
    return res;
}

inline bool PatchFeatureInput::boundaryCurve(const core::Ptr<core::Base>& value)
{
    return boundaryCurve_raw(value.get());
}

inline FeatureOperations PatchFeatureInput::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool PatchFeatureInput::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline SurfaceContinuityTypes PatchFeatureInput::continuity() const
{
    SurfaceContinuityTypes res = continuity_raw();
    return res;
}

inline bool PatchFeatureInput::continuity(SurfaceContinuityTypes value)
{
    return continuity_raw(value);
}

inline core::Ptr<BaseFeature> PatchFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool PatchFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline core::Ptr<Occurrence> PatchFeatureInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool PatchFeatureInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}

inline core::Ptr<core::ObjectCollection> PatchFeatureInput::interiorRailsAndPoints() const
{
    core::Ptr<core::ObjectCollection> res = interiorRailsAndPoints_raw();
    return res;
}

inline bool PatchFeatureInput::interiorRailsAndPoints(const core::Ptr<core::ObjectCollection>& value)
{
    return interiorRailsAndPoints_raw(value.get());
}

inline bool PatchFeatureInput::isGroupEdges() const
{
    bool res = isGroupEdges_raw();
    return res;
}

inline bool PatchFeatureInput::isGroupEdges(bool value)
{
    return isGroupEdges_raw(value);
}

inline SurfaceContinuityTypes PatchFeatureInput::groupContinuity() const
{
    SurfaceContinuityTypes res = groupContinuity_raw();
    return res;
}

inline bool PatchFeatureInput::groupContinuity(SurfaceContinuityTypes value)
{
    return groupContinuity_raw(value);
}

inline double PatchFeatureInput::groupWeight() const
{
    double res = groupWeight_raw();
    return res;
}

inline bool PatchFeatureInput::groupWeight(double value)
{
    return groupWeight_raw(value);
}

inline bool PatchFeatureInput::groupIsContinuityDirectionFlipped() const
{
    bool res = groupIsContinuityDirectionFlipped_raw();
    return res;
}

inline bool PatchFeatureInput::groupIsContinuityDirectionFlipped(bool value)
{
    return groupIsContinuityDirectionFlipped_raw(value);
}

inline bool PatchFeatureInput::setContinuity(const std::vector<int>& continuity, const std::vector<double>& weight, const std::vector<bool>& isContinuityDirectionFlipped)
{
    bool* isContinuityDirectionFlipped_ = new bool[isContinuityDirectionFlipped.size()];
    for (size_t i = 0; i < isContinuityDirectionFlipped.size(); ++i)
        isContinuityDirectionFlipped_[i] = isContinuityDirectionFlipped[i];

    bool res = setContinuity_raw(continuity.empty() ? nullptr : &continuity[0], continuity.size(), weight.empty() ? nullptr : &weight[0], weight.size(), isContinuityDirectionFlipped_, isContinuityDirectionFlipped.size());
    delete[] isContinuityDirectionFlipped_;
    return res;
}

inline bool PatchFeatureInput::getContinuity(std::vector<core::Ptr<BRepEdge>>& edges, std::vector<int>& continuity, std::vector<double>& weight, std::vector<bool>& isContinuityDirectionFlipped)
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

#undef ADSK_FUSION_PATCHFEATUREINPUT_API