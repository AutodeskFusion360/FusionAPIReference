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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPOINTINPUT_CPP__
# define ADSK_FUSION_CONSTRUCTIONPOINTINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPOINTINPUT_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPOINTINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// A ConstructionPointInput is a throwaway object used to create a ConstructionPoint
/// The usage pattern is
/// a. create a ConstructionPointInput (ConstructionPoints.CreateInput)
/// b. call one of the member functions to specify how the ConstructionPoint is created
/// c. create the ConstructionPoint (call ConstructionPoints.Add)
/// d. stop referencing the ConstructionPointInput (so it gets deleted).
class ConstructionPointInput : public core::Base {
public:

    /// This input method is for creating a construction point at the intersection of
    /// the two linear edges or sketch lines.
    /// The edges can be B-Rep edges or sketch lines.
    /// This can result in a parametric or non-parametric construction point depending
    /// on whether the parent component is parametric or is a direct edit component.
    /// edgeOne : The first B-Rep edge or sketch line
    /// edgeTwo : The second B-Rep edge or sketch line
    /// Returns true if the creation of the ConstructionPointInput is successful.
    bool setByTwoEdges(const core::Ptr<core::Base>& edgeOne, const core::Ptr<core::Base>& edgeTwo);

    /// This input method is for creating a construction point at the intersection of the
    /// three planes or planar faces.
    /// This can result in a parametric or non-parametric construction point depending
    /// on whether the parent component is parametric or is a direct edit component.
    /// planeOne : The first plane or planar face to intersect
    /// planeTwo : The second plane or planar face to intersect
    /// planeThree : The third plane or planar face to intersect
    /// Returns true if the creation of the ConstructionPointInput is successful.
    bool setByThreePlanes(const core::Ptr<core::Base>& planeOne, const core::Ptr<core::Base>& planeTwo, const core::Ptr<core::Base>& planeThree);

    /// This input method is for creating a construction point at the intersection of a
    /// construction plane, planar face or sketch profile and a linear edge, construction axis
    /// or sketch line.
    /// This can result in a parametric or non-parametric construction point depending
    /// on whether the parent component is parametric or is a direct edit component.
    /// edge : A linear B-Rep edge, construction axis or sketch line.
    /// plane : A plane, planar B-Rep face or construction plane.
    /// Returns true if the creation of the ConstructionPointInput is successful.
    bool setByEdgePlane(const core::Ptr<core::Base>& edge, const core::Ptr<core::Base>& plane);

    /// This input method is for creating a construction point at the center of a spherical
    /// face (sphere or torus), circular edge or sketch arc/circle
    /// This can result in a parametric or non-parametric construction point depending
    /// on whether the parent component is parametric or is a direct edit component.
    /// circularEntity : A spherical face (sphere or torus), circular edge or sketch arc/circle
    /// Returns true if the creation of the ConstructionPointInput is successful.
    bool setByCenter(const core::Ptr<core::Base>& circularEntity);

    /// This input method is for creating a construction point on the specified point
    /// or vertex. The point can be either a B-Rep vertex, SketchPoint, or a Point3D object.
    /// 
    /// Providing a Point3D object is only valid when working in the direct edit modeling mode.
    /// This is not valid when working in the parametric modeling mode and will fail.
    /// 
    /// Even when providing a B-Rep vertex, or SketchPoint the result will be non-parametric
    /// if the parent component is a direct edit component.
    /// point : A B-Rep vertex, SketchPoint, or Point object
    /// Returns true if the creation of the ConstructionPointInput is successful.
    bool setByPoint(const core::Ptr<core::Base>& point);

    /// In order for geometry to be transformed correctly, an occurrence for creation needs
    /// to be specified when the ConstructionPoint is created based on geometry
    /// (e.g. a sketch point) in another component AND (the ConstructionPoint) is not in the
    /// root component. The CreationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    /// When creating a construction point that is owned by a base or form feature, set this property to the
    /// base or form feature you want to associate the new construction point with. By default, this is null,
    /// meaning it will not be associated with a base or form feature.
    /// 
    /// Because of a current limitation, if you want to create a construction point associated with a base
    /// or form feature, you must set this property AND call the startEdit method of the base or form feature,
    /// create the feature, and then call the finishEdit method of the base or form feature. The base or form
    /// feature must be in an "edit" state to be able to add any additional items to it.
    core::Ptr<core::Base> targetBaseOrFormFeature() const;
    bool targetBaseOrFormFeature(const core::Ptr<core::Base>& value);

    ADSK_FUSION_CONSTRUCTIONPOINTINPUT_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPOINTINPUT_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPOINTINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPOINTINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setByTwoEdges_raw(core::Base* edgeOne, core::Base* edgeTwo) = 0;
    virtual bool setByThreePlanes_raw(core::Base* planeOne, core::Base* planeTwo, core::Base* planeThree) = 0;
    virtual bool setByEdgePlane_raw(core::Base* edge, core::Base* plane) = 0;
    virtual bool setByCenter_raw(core::Base* circularEntity) = 0;
    virtual bool setByPoint_raw(core::Base* point) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
    virtual core::Base* targetBaseOrFormFeature_raw() const = 0;
    virtual bool targetBaseOrFormFeature_raw(core::Base* value) = 0;
};

// Inline wrappers

inline bool ConstructionPointInput::setByTwoEdges(const core::Ptr<core::Base>& edgeOne, const core::Ptr<core::Base>& edgeTwo)
{
    bool res = setByTwoEdges_raw(edgeOne.get(), edgeTwo.get());
    return res;
}

inline bool ConstructionPointInput::setByThreePlanes(const core::Ptr<core::Base>& planeOne, const core::Ptr<core::Base>& planeTwo, const core::Ptr<core::Base>& planeThree)
{
    bool res = setByThreePlanes_raw(planeOne.get(), planeTwo.get(), planeThree.get());
    return res;
}

inline bool ConstructionPointInput::setByEdgePlane(const core::Ptr<core::Base>& edge, const core::Ptr<core::Base>& plane)
{
    bool res = setByEdgePlane_raw(edge.get(), plane.get());
    return res;
}

inline bool ConstructionPointInput::setByCenter(const core::Ptr<core::Base>& circularEntity)
{
    bool res = setByCenter_raw(circularEntity.get());
    return res;
}

inline bool ConstructionPointInput::setByPoint(const core::Ptr<core::Base>& point)
{
    bool res = setByPoint_raw(point.get());
    return res;
}

inline core::Ptr<Occurrence> ConstructionPointInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool ConstructionPointInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}

inline core::Ptr<core::Base> ConstructionPointInput::targetBaseOrFormFeature() const
{
    core::Ptr<core::Base> res = targetBaseOrFormFeature_raw();
    return res;
}

inline bool ConstructionPointInput::targetBaseOrFormFeature(const core::Ptr<core::Base>& value)
{
    return targetBaseOrFormFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPOINTINPUT_API