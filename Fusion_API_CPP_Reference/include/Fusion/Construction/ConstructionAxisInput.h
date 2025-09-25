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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONAXISINPUT_CPP__
# define ADSK_FUSION_CONSTRUCTIONAXISINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONAXISINPUT_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONAXISINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class InfiniteLine3D;
}}
namespace adsk { namespace fusion {
    class BRepFace;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// A ConstructionAxisInput is a throwaway object used to create a ConstructionAxis
/// The usage pattern is:
/// a. create a ConstructionAxisInput (ConstructionAxes.CreateInput)
/// b. call one of the member functions to specify how the ConstructionAxis is created
/// c. create the ConstructionAxis (call ConstructionAxes.Add)
/// d. stop referencing the ConstructionAxisInput (so it gets deleted).
class ConstructionAxisInput : public core::Base {
public:

    /// This input method is for creating a non-parametric construction axis whose position
    /// in space is defined by an InfiniteLine3D object.
    /// 
    /// This method of defining a construction axis is only valid when working in the direct modeling mode.
    /// This is not valid when working in the parametric modeling mode and will fail.
    /// line : An InFiniteLine3D object
    /// Returns true if the creation of the ConstructionAxisInput is successful.
    bool setByLine(const core::Ptr<core::InfiniteLine3D>& line);

    /// This input method is for creating an axis coincident with the axis of a
    /// cylindrical, conical or torus face.
    /// 
    /// This can result in a parametric or non-parametric construction axis depending
    /// on whether the parent component is parametric or is a direct edit component.
    /// circularFace : The face from a cylinder, cone, or torus.
    /// Returns true if the creation of the ConstructionAxisInput is successful.
    bool setByCircularFace(const core::Ptr<BRepFace>& circularFace);

    /// This input method is for creating an axis that is normal to a face
    /// at a specified point.
    /// face : A face (BRepFace object) to create the axis normal to.
    /// pointEntity : A construction point, sketch point or vertex the axis is to pass through.
    /// Returns true if the creation of the ConstructionAxisInput is successful.
    bool setByPerpendicularAtPoint(const core::Ptr<BRepFace>& face, const core::Ptr<core::Base>& pointEntity);

    /// This input method is for creating a construction axis coincident with the
    /// intersection of two planes or planar faces.
    /// This will fail if the two planes are parallel.
    /// This can result in a parametric or non-parametric construction axis depending
    /// on whether the parent component is parametric or is a direct edit component.
    /// planarEntityOne : The first planar face or construction plane to intersect
    /// planarEntityTwo : The second planar face or construction plane to intersect
    /// Returns true if the creation of the ConstructionAxisInput is successful.
    bool setByTwoPlanes(const core::Ptr<core::Base>& planarEntityOne, const core::Ptr<core::Base>& planarEntityTwo);

    /// This input method is for creating a construction axis that passes through the two points
    /// (work points, sketch points or vertices).
    /// This will fail if the two points are coincident.
    /// This can result in a parametric or non-parametric construction axis depending
    /// on whether the parent component is parametric or is a direct edit component.
    /// pointEntityOne : The first construction point, sketch point or vertex the axis passes through
    /// pointEntityTwo : The second construction point, sketch point or vertex the axis passes through
    /// Returns true if the creation of the ConstructionAxisInput is successful.
    bool setByTwoPoints(const core::Ptr<core::Base>& pointEntityOne, const core::Ptr<core::Base>& pointEntityTwo);

    /// This input method is for creating a construction axis from a specified linear/circular edge
    /// or sketch curve.
    /// This can result in a parametric or non-parametric construction axis depending
    /// on whether the parent component is parametric or is a direct edit component.
    /// edgeEntity : A linear/circular edge, construction line, or sketch line
    /// Returns true if the creation of the ConstructionAxisInput is successful.
    bool setByEdge(const core::Ptr<core::Base>& edgeEntity);

    /// This input method if for creating a construction axis normal to a specified face
    /// or sketch profile and that passes through a specified point.
    /// This can result in a parametric or non-parametric construction axis depending
    /// on whether the parent component is parametric or is a direct edit component.
    /// face : The face (BRepFace object) to create the axis normal to.
    /// pointEntity : A construction point, sketch point or vertex the axis passes through.
    /// This point does not have to lie on the face.
    /// Returns true if the creation of the ConstructionAxisInput is successful.
    bool setByNormalToFaceAtPoint(const core::Ptr<BRepFace>& face, const core::Ptr<core::Base>& pointEntity);

    /// In order for geometry to be transformed correctly, an Occurrence for creation needs
    /// to be specified when the ConstructionAxis is created based on geometry
    /// (e.g. a straight edge) in another component AND (the ConstructionAxis) is not in the
    /// root component. The CreationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    /// When creating a construction axis that is owned by a base or form feature, set this property to the
    /// base or form feature you want to associate the new construction plane with. By default, this is null,
    /// meaning it will not be associated with a base or form feature.
    /// 
    /// Because of a current limitation, if you want to create a construction axis associated with a base
    /// or form feature, you must set this property AND call the startEdit method of the base or form feature,
    /// create the feature, and then call the finishEdit method of the base or form feature. The base or form
    /// feature must be in an "edit" state to be able to add any additional items to it.
    core::Ptr<core::Base> targetBaseOrFormFeature() const;
    bool targetBaseOrFormFeature(const core::Ptr<core::Base>& value);

    ADSK_FUSION_CONSTRUCTIONAXISINPUT_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONAXISINPUT_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONAXISINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONAXISINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setByLine_raw(core::InfiniteLine3D* line) = 0;
    virtual bool setByCircularFace_raw(BRepFace* circularFace) = 0;
    virtual bool setByPerpendicularAtPoint_raw(BRepFace* face, core::Base* pointEntity) = 0;
    virtual bool setByTwoPlanes_raw(core::Base* planarEntityOne, core::Base* planarEntityTwo) = 0;
    virtual bool setByTwoPoints_raw(core::Base* pointEntityOne, core::Base* pointEntityTwo) = 0;
    virtual bool setByEdge_raw(core::Base* edgeEntity) = 0;
    virtual bool setByNormalToFaceAtPoint_raw(BRepFace* face, core::Base* pointEntity) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
    virtual core::Base* targetBaseOrFormFeature_raw() const = 0;
    virtual bool targetBaseOrFormFeature_raw(core::Base* value) = 0;
};

// Inline wrappers

inline bool ConstructionAxisInput::setByLine(const core::Ptr<core::InfiniteLine3D>& line)
{
    bool res = setByLine_raw(line.get());
    return res;
}

inline bool ConstructionAxisInput::setByCircularFace(const core::Ptr<BRepFace>& circularFace)
{
    bool res = setByCircularFace_raw(circularFace.get());
    return res;
}

inline bool ConstructionAxisInput::setByPerpendicularAtPoint(const core::Ptr<BRepFace>& face, const core::Ptr<core::Base>& pointEntity)
{
    bool res = setByPerpendicularAtPoint_raw(face.get(), pointEntity.get());
    return res;
}

inline bool ConstructionAxisInput::setByTwoPlanes(const core::Ptr<core::Base>& planarEntityOne, const core::Ptr<core::Base>& planarEntityTwo)
{
    bool res = setByTwoPlanes_raw(planarEntityOne.get(), planarEntityTwo.get());
    return res;
}

inline bool ConstructionAxisInput::setByTwoPoints(const core::Ptr<core::Base>& pointEntityOne, const core::Ptr<core::Base>& pointEntityTwo)
{
    bool res = setByTwoPoints_raw(pointEntityOne.get(), pointEntityTwo.get());
    return res;
}

inline bool ConstructionAxisInput::setByEdge(const core::Ptr<core::Base>& edgeEntity)
{
    bool res = setByEdge_raw(edgeEntity.get());
    return res;
}

inline bool ConstructionAxisInput::setByNormalToFaceAtPoint(const core::Ptr<BRepFace>& face, const core::Ptr<core::Base>& pointEntity)
{
    bool res = setByNormalToFaceAtPoint_raw(face.get(), pointEntity.get());
    return res;
}

inline core::Ptr<Occurrence> ConstructionAxisInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool ConstructionAxisInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}

inline core::Ptr<core::Base> ConstructionAxisInput::targetBaseOrFormFeature() const
{
    core::Ptr<core::Base> res = targetBaseOrFormFeature_raw();
    return res;
}

inline bool ConstructionAxisInput::targetBaseOrFormFeature(const core::Ptr<core::Base>& value)
{
    return targetBaseOrFormFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONAXISINPUT_API