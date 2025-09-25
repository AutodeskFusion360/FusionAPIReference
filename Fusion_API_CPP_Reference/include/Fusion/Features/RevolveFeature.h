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
# ifdef __COMPILING_ADSK_FUSION_REVOLVEFEATURE_CPP__
# define ADSK_FUSION_REVOLVEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_REVOLVEFEATURE_API
# endif
#else
# define ADSK_FUSION_REVOLVEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class BRepBody;
    class BRepFaces;
    class ExtentDefinition;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing revolve feature in a design.
class RevolveFeature : public Feature {
public:

    /// Gets and sets the profiles or planar faces used to define the shape of the revolve.
    /// This property can return or be set with a single Profile, a single planar face, or
    /// an ObjectCollection consisting of multiple profiles and planar faces. When an
    /// ObjectCollection is used all of the profiles and faces must be co-planar.
    /// 
    /// When setting this property of a surface (non-solid) extrusion, you can use the
    /// createOpenProfile and createBRepEdgeProfile methods of the Component object to create
    /// an open profile.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// 
    /// This property returns null in the case where the feature is non-parametric.
    core::Ptr<core::Base> profile() const;
    bool profile(const core::Ptr<core::Base>& value);

    /// Gets and sets the entity used to define the axis of revolution.
    /// The axis can be a sketch line, construction axis, linear edge or a face that defines an
    /// axis (cylinder, cone, torus, etc.). If it is not in the same plane as the profile, it is
    /// projected onto the profile plane.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> axis() const;
    bool axis(const core::Ptr<core::Base>& value);

    /// Gets and sets the type of operation performed by the revolve.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// Gets the definition object that is defining the extent of the revolve. Modifying the
    /// definition object will cause the revolve to recompute. Various types of objects can
    /// be returned depending on the type of extent currently defined for the revolve.
    /// This property returns nothing in the case where the feature is non-parametric.
    core::Ptr<ExtentDefinition> extentDefinition() const;

    /// Defines the extent of the revolution to be at a defined angle.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// isSymmetric : Boolean that specifies if the extent is symmetric or not.
    /// angle : ValueInput object that defines the angle. This can be a string or a value. If
    /// it's a string it is interpreted using the current document units and can include
    /// equations. For example all of the following are valid as long as they result in
    /// angle units; "45", "45 deg", "a1 / 2". If a value is input it is interpreted
    /// as radians.
    /// 
    /// If isSymmetric is false a positive or negative angle can be
    /// used to control the direction. If isSymmetric is true, the angle is the extent in one
    /// direction so the entire angle of the revolution will be twice the specified angle.
    /// Use an angle of 360 deg or 2 pi radians to create a full revolve.
    /// Returns true if successful
    bool setAngleExtent(bool isSymmetric, const core::Ptr<core::ValueInput>& angle);

    /// Changes the extent of the revolve to be defined as a two sided angle extent.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// angleOne : ValueInput object that defines the first angle. This can be a string or a value. If
    /// it's a string it is interpreted using the current document units and can include
    /// equations. For example all of the following are valid as long as they result in
    /// angle units; "45", "45 deg", "a1 / 2". If a value is input it is interpreted
    /// as radians.
    /// angleTwo : ValueInput object that defines the second angle. This can be a string or a value. If
    /// it's a string it is interpreted using the current document units and can include
    /// equations. For example all of the following are valid as long as they result in
    /// angle units; "45", "45 deg", "a1 / 2". If a value is input it is interpreted
    /// as radians.
    /// Returns true if successful
    bool setTwoSideAngleExtent(const core::Ptr<core::ValueInput>& angleOne, const core::Ptr<core::ValueInput>& angleTwo);

    /// Changes the extent of the revolve to be from the sketch plane to the specified "to" face.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// toEntity : The entity that defines the "to" extent. The valid types of entities can vary depending on
    /// the type of feature this is being used with. For a revolve it can be a BRepBody, BRepFace,
    /// BRepVertex, ConstructionPlane, or ConstructionPoint.
    /// directionHint : Specifies the direction of the revolve.
    /// Returns true if successful.
    bool setOneSideToExtent(const core::Ptr<core::Base>& toEntity, const core::Ptr<core::Vector3D>& directionHint = NULL);

    /// Changes the extent of the revolve to be defined as a two sided to extent.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// toEntityOne : The first entity that defines the "to" extent. The valid types of entities can vary depending on
    /// the type of feature this is being used with. For a revolve it can be a BRepBody, BRepFace,
    /// BRepVertex, ConstructionPlane, or ConstructionPoint.
    /// toEntityTwo : The second entity that defines the "to" extent. The valid types of entities can vary depending on
    /// the type of feature this is being used with. For a revolve it can be a BRepBody, BRepFace,
    /// BRepVertex, ConstructionPlane, or ConstructionPoint.
    /// Returns true if successful
    bool setTwoSidesToExtent(const core::Ptr<core::Base>& toEntityOne, const core::Ptr<core::Base>& toEntityTwo);

    /// Property that returns the set of faces that cap one end of the revolve and are coincident
    /// with the sketch plane. In the case of a symmetric revolve these faces are the ones on the
    /// positive normal side of the sketch plane. In the case where there aren't any start faces,
    /// this property will return null.
    core::Ptr<BRepFaces> startFaces() const;

    /// Property that returns the set of faces that cap the end of the revolve opposite the
    /// start faces. In the case where there aren't any start faces, this property will return null.
    core::Ptr<BRepFaces> endFaces() const;

    /// Property that returns all of the faces created around the perimeter of the feature.
    core::Ptr<BRepFaces> sideFaces() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<RevolveFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<RevolveFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Indicates if this feature was initially created as a solid or a surface.
    bool isSolid() const;

    /// Gets and sets the list of bodies that will participate in the feature when the operation is a cut or intersection.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    std::vector<core::Ptr<BRepBody>> participantBodies() const;
    bool participantBodies(const std::vector<core::Ptr<BRepBody>>& value);

    /// Specifies if the axis should be projected on the same plane as the profile sketch plane or not.
    /// 
    /// Setting this to true will use a projected axis, while setting it to false will keep it in its original location.
    /// This is initialized to false so the selected axis will be used in the feature.
    bool isProjectAxis() const;
    bool isProjectAxis(bool value);

    ADSK_FUSION_REVOLVEFEATURE_API static const char* classType();
    ADSK_FUSION_REVOLVEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_REVOLVEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_REVOLVEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* profile_raw() const = 0;
    virtual bool profile_raw(core::Base* value) = 0;
    virtual core::Base* axis_raw() const = 0;
    virtual bool axis_raw(core::Base* value) = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual ExtentDefinition* extentDefinition_raw() const = 0;
    virtual bool setAngleExtent_raw(bool isSymmetric, core::ValueInput* angle) = 0;
    virtual bool setTwoSideAngleExtent_raw(core::ValueInput* angleOne, core::ValueInput* angleTwo) = 0;
    virtual bool setOneSideToExtent_raw(core::Base* toEntity, core::Vector3D* directionHint) = 0;
    virtual bool setTwoSidesToExtent_raw(core::Base* toEntityOne, core::Base* toEntityTwo) = 0;
    virtual BRepFaces* startFaces_raw() const = 0;
    virtual BRepFaces* endFaces_raw() const = 0;
    virtual BRepFaces* sideFaces_raw() const = 0;
    virtual RevolveFeature* nativeObject_raw() const = 0;
    virtual RevolveFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual bool isSolid_raw() const = 0;
    virtual BRepBody** participantBodies_raw(size_t& return_size) const = 0;
    virtual bool participantBodies_raw(BRepBody** value, size_t value_size) = 0;
    virtual bool isProjectAxis_raw() const = 0;
    virtual bool isProjectAxis_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> RevolveFeature::profile() const
{
    core::Ptr<core::Base> res = profile_raw();
    return res;
}

inline bool RevolveFeature::profile(const core::Ptr<core::Base>& value)
{
    return profile_raw(value.get());
}

inline core::Ptr<core::Base> RevolveFeature::axis() const
{
    core::Ptr<core::Base> res = axis_raw();
    return res;
}

inline bool RevolveFeature::axis(const core::Ptr<core::Base>& value)
{
    return axis_raw(value.get());
}

inline FeatureOperations RevolveFeature::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool RevolveFeature::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline core::Ptr<ExtentDefinition> RevolveFeature::extentDefinition() const
{
    core::Ptr<ExtentDefinition> res = extentDefinition_raw();
    return res;
}

inline bool RevolveFeature::setAngleExtent(bool isSymmetric, const core::Ptr<core::ValueInput>& angle)
{
    bool res = setAngleExtent_raw(isSymmetric, angle.get());
    return res;
}

inline bool RevolveFeature::setTwoSideAngleExtent(const core::Ptr<core::ValueInput>& angleOne, const core::Ptr<core::ValueInput>& angleTwo)
{
    bool res = setTwoSideAngleExtent_raw(angleOne.get(), angleTwo.get());
    return res;
}

inline bool RevolveFeature::setOneSideToExtent(const core::Ptr<core::Base>& toEntity, const core::Ptr<core::Vector3D>& directionHint)
{
    bool res = setOneSideToExtent_raw(toEntity.get(), directionHint.get());
    return res;
}

inline bool RevolveFeature::setTwoSidesToExtent(const core::Ptr<core::Base>& toEntityOne, const core::Ptr<core::Base>& toEntityTwo)
{
    bool res = setTwoSidesToExtent_raw(toEntityOne.get(), toEntityTwo.get());
    return res;
}

inline core::Ptr<BRepFaces> RevolveFeature::startFaces() const
{
    core::Ptr<BRepFaces> res = startFaces_raw();
    return res;
}

inline core::Ptr<BRepFaces> RevolveFeature::endFaces() const
{
    core::Ptr<BRepFaces> res = endFaces_raw();
    return res;
}

inline core::Ptr<BRepFaces> RevolveFeature::sideFaces() const
{
    core::Ptr<BRepFaces> res = sideFaces_raw();
    return res;
}

inline core::Ptr<RevolveFeature> RevolveFeature::nativeObject() const
{
    core::Ptr<RevolveFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<RevolveFeature> RevolveFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<RevolveFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline bool RevolveFeature::isSolid() const
{
    bool res = isSolid_raw();
    return res;
}

inline std::vector<core::Ptr<BRepBody>> RevolveFeature::participantBodies() const
{
    std::vector<core::Ptr<BRepBody>> res;
    size_t s;

    BRepBody** p= participantBodies_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool RevolveFeature::participantBodies(const std::vector<core::Ptr<BRepBody>>& value)
{
    BRepBody** value_ = new BRepBody*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = participantBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool RevolveFeature::isProjectAxis() const
{
    bool res = isProjectAxis_raw();
    return res;
}

inline bool RevolveFeature::isProjectAxis(bool value)
{
    return isProjectAxis_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_REVOLVEFEATURE_API