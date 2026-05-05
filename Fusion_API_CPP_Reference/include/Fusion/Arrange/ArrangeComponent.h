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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGECOMPONENT_CPP__
# define ADSK_FUSION_ARRANGECOMPONENT_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGECOMPONENT_API
# endif
#else
# define ADSK_FUSION_ARRANGECOMPONENT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class ArrangeFeature;
    class BRepEdge;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Defines a component within an arrangement. This specifies an occurrence along with additional
/// arrangement information. This object is the API equivalent of a single line within the component
/// list shown in the Arrange dialog. This object is used for both the creation of a new Arrange
/// feature and querying and modifying an existing Arrange feature.
class ArrangeComponent : public core::Base {
public:

    /// The BRepFace or Occurrence that was used to identify this ArrangeComponent.
    core::Ptr<core::Base> occurrenceOrFace() const;

    /// Returns the Occurrence associated with this ArrangeComponent. If an Occurrence was used to define
    /// this ArrangeComponent, this will return the same thing as the occurrenceOrFace. If a BRepFace was
    /// used to define this ArrangeComponent, this will return the Occurrence the face is in. This is a
    /// convenience property to make accessing the occurrence simpler.
    core::Ptr<Occurrence> occurrence() const;

    /// Specifies the quantity of this component to use in the arrange. This defaults
    /// to -1, which indicates that the global quantity is to be used.
    /// 
    /// For a 3D arrange, this property is ignored and the quantity is always one.
    int quantity() const;
    bool quantity(int value);

    /// Specifies if the direction is flipped from its default direction.
    /// 
    /// For a component defined by a face the default direction is defined by the selected face
    /// and the isGlobalDirectionFaceUp property of the Arrange2DDefinition associated with the
    /// parent ArrangeFeature object.
    /// 
    /// For a component defined by an occurrence, the default direction orients the occurrence
    /// such that the largest face points downward.
    /// 
    /// For a 3D arrange, this property is ignored and the orientation of the part is
    /// the same as it exists in the original assembly.
    bool isDirectionFlipped() const;
    bool isDirectionFlipped(bool value);

    /// Gets and sets the rotation type for this ArrangeComponent. This defaults to
    /// use the global rotation type defined for the arrangement.
    /// 
    /// For a 3D arrange, this property is ignored.
    ArrangeRotationTypes rotationType() const;
    bool rotationType(ArrangeRotationTypes value);

    /// Gets and sets the rotation angle of this ArrangeComponent. The value is defined
    /// in Radians, is relative to the zero direction vector returned by the
    /// zeroDirectionVector property, and is in a counterclockwise direction.
    /// 
    /// This is only valid for 2D True Shape arrangements and is ignored for
    /// 2D rectangular and 3D arrangements.
    double rotation() const;
    bool rotation(double value);

    /// Sets the rotation angle using the specified edge such that the edge
    /// is pointing in the zero rotation angle. This is a convenience method to
    /// set the rotation angle. The rotation property can be used to accomplish
    /// the same result.
    /// 
    /// This is only valid for 2D True Shape arrangements and will fail for
    /// 2D rectangular and 3D arrangements.
    /// edge : The BRepEdge object being used to define rotation of the component.
    /// Returns true if successful.
    bool setRotationUsingEdge(const core::Ptr<BRepEdge>& edge);

    /// Returns a vector that is the zero degree direction of this
    /// ArrangeComponent.
    core::Ptr<core::Vector3D> zeroDirection() const;

    /// Returns a vector that is the up direction of this ArrangeComponent.
    core::Ptr<core::Vector3D> upDirection() const;

    /// Specifies the nesting priority for this component.
    /// 
    /// For a 3D arrange, this property is ignored and setting it will fail.
    ArrangePriorities priority() const;
    bool priority(ArrangePriorities value);

    /// Specifies if this component will be used to fill any left over
    /// empty space in the available envelopes.
    /// 
    /// This is only valid for 2D True Shape arrangements and is ignored for
    /// 2D rectangular and 3D arrangements.
    bool isFiller() const;
    bool isFiller(bool value);

    /// Deletes this ArrangeComponent from the arrangement.
    /// Returns true if the deletion was successful.
    bool deleteMe();

    /// Returns the ArrangeFeature this ArrangeComponent is associated with. This
    /// property returns null in the case where a feature hasn't been created yet
    /// and there is only an ArrangeFeatureInput.
    core::Ptr<ArrangeFeature> parentArrangeFeature() const;

    ADSK_FUSION_ARRANGECOMPONENT_API static const char* classType();
    ADSK_FUSION_ARRANGECOMPONENT_API const char* objectType() const override;
    ADSK_FUSION_ARRANGECOMPONENT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGECOMPONENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* occurrenceOrFace_raw() const = 0;
    virtual Occurrence* occurrence_raw() const = 0;
    virtual int quantity_raw() const = 0;
    virtual bool quantity_raw(int value) = 0;
    virtual bool isDirectionFlipped_raw() const = 0;
    virtual bool isDirectionFlipped_raw(bool value) = 0;
    virtual ArrangeRotationTypes rotationType_raw() const = 0;
    virtual bool rotationType_raw(ArrangeRotationTypes value) = 0;
    virtual double rotation_raw() const = 0;
    virtual bool rotation_raw(double value) = 0;
    virtual bool setRotationUsingEdge_raw(BRepEdge* edge) = 0;
    virtual core::Vector3D* zeroDirection_raw() const = 0;
    virtual core::Vector3D* upDirection_raw() const = 0;
    virtual ArrangePriorities priority_raw() const = 0;
    virtual bool priority_raw(ArrangePriorities value) = 0;
    virtual bool isFiller_raw() const = 0;
    virtual bool isFiller_raw(bool value) = 0;
    virtual bool deleteMe_raw() = 0;
    virtual ArrangeFeature* parentArrangeFeature_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ArrangeComponent::occurrenceOrFace() const
{
    core::Ptr<core::Base> res = occurrenceOrFace_raw();
    return res;
}

inline core::Ptr<Occurrence> ArrangeComponent::occurrence() const
{
    core::Ptr<Occurrence> res = occurrence_raw();
    return res;
}

inline int ArrangeComponent::quantity() const
{
    int res = quantity_raw();
    return res;
}

inline bool ArrangeComponent::quantity(int value)
{
    return quantity_raw(value);
}

inline bool ArrangeComponent::isDirectionFlipped() const
{
    bool res = isDirectionFlipped_raw();
    return res;
}

inline bool ArrangeComponent::isDirectionFlipped(bool value)
{
    return isDirectionFlipped_raw(value);
}

inline ArrangeRotationTypes ArrangeComponent::rotationType() const
{
    ArrangeRotationTypes res = rotationType_raw();
    return res;
}

inline bool ArrangeComponent::rotationType(ArrangeRotationTypes value)
{
    return rotationType_raw(value);
}

inline double ArrangeComponent::rotation() const
{
    double res = rotation_raw();
    return res;
}

inline bool ArrangeComponent::rotation(double value)
{
    return rotation_raw(value);
}

inline bool ArrangeComponent::setRotationUsingEdge(const core::Ptr<BRepEdge>& edge)
{
    bool res = setRotationUsingEdge_raw(edge.get());
    return res;
}

inline core::Ptr<core::Vector3D> ArrangeComponent::zeroDirection() const
{
    core::Ptr<core::Vector3D> res = zeroDirection_raw();
    return res;
}

inline core::Ptr<core::Vector3D> ArrangeComponent::upDirection() const
{
    core::Ptr<core::Vector3D> res = upDirection_raw();
    return res;
}

inline ArrangePriorities ArrangeComponent::priority() const
{
    ArrangePriorities res = priority_raw();
    return res;
}

inline bool ArrangeComponent::priority(ArrangePriorities value)
{
    return priority_raw(value);
}

inline bool ArrangeComponent::isFiller() const
{
    bool res = isFiller_raw();
    return res;
}

inline bool ArrangeComponent::isFiller(bool value)
{
    return isFiller_raw(value);
}

inline bool ArrangeComponent::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<ArrangeFeature> ArrangeComponent::parentArrangeFeature() const
{
    core::Ptr<ArrangeFeature> res = parentArrangeFeature_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGECOMPONENT_API