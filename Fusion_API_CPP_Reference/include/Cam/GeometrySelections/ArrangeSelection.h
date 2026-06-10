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
#include "GeometrySelection.h"
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_ARRANGESELECTION_CPP__
# define ADSK_CAM_ARRANGESELECTION_API XI_EXPORT
# else
# define ADSK_CAM_ARRANGESELECTION_API
# endif
#else
# define ADSK_CAM_ARRANGESELECTION_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Class for arrange selections. Provides access to the selected geometry and its properties.
class ArrangeSelection : public GeometrySelection {
public:

    /// Gets and sets the value of the input geometry.
    /// If the value originates from a component instead of an occurrence, or an occurrence outside of the CAM environment, then the subpath is checked against the CAM model tree.
    /// For some child classes, this may be the same as the value property, but might also consist of fewer elements.
    /// Valid elements depend on the capabilities of the derived class. An exception is thrown if the matching fails or the given entity does not match the expected type.
    core::Ptr<core::Base> inputGeometry() const;
    bool inputGeometry(const core::Ptr<core::Base>& value);

    /// Gets and sets the priority value for each element in the selection list.
    /// This function is not available in Fusion for Personal Use.
    /// Throws an exception when calling this function in Fusion for Personal Use.
    /// The default value for this property is MediumArrangePriorityType.
    ArrangePriorityTypes priorityType() const;
    bool priorityType(ArrangePriorityTypes value);

    /// Gets and sets the rotation increments (in degrees) for the x-axis.
    /// This function is not available in Fusion for Personal Use.
    /// Throws an exception when calling this function in Fusion for Personal Use.
    /// To enable any rotation the parameter "arrange_rotation_group" of the operation must be set to true.
    /// To disable x-axis rotation for this selection, customRotationX must be set to 0.
    /// The default value for this property is 45 degrees.
    /// Note: If customRotationX is called, isUsingCustomRotationX will be set to true automatically.
    double customRotationX() const;
    bool customRotationX(double value);

    /// Gets and sets if custom rotation is used for the x-axis.
    /// This function is not available in Fusion for Personal Use.
    /// Throws an exception when calling this function in Fusion for Personal Use.
    /// To enable any rotation the parameter "arrange_rotation_group" of the operation must be set to true.
    /// If isUsingCustomRotationX is false, the rotation of the operation's parameter "arrange_rotation_x" is used.
    /// The default value for this property false.
    bool isUsingCustomRotationX() const;
    bool isUsingCustomRotationX(bool value);

    /// Gets and sets the rotation increments (in degrees) for the y-axis.
    /// This function is not available in Fusion for Personal Use.
    /// Throws an exception when calling this function in Fusion for Personal Use.
    /// To enable any rotation the parameter "arrange_rotation_group" of the operation must be set to true.
    /// To disable y-axis rotation for this selection, customRotationY must be set to 0.
    /// The default value for this property is 45 degrees.
    /// Note: If customRotationY is called, isUsingCustomRotationY will be set to true automatically.
    double customRotationY() const;
    bool customRotationY(double value);

    /// Gets and sets if custom rotation is used for the y-axis.
    /// This function is not available in Fusion for Personal Use.
    /// Throws an exception when calling this function in Fusion for Personal Use.
    /// To enable any rotation the parameter "arrange_rotation_group" of the operation must be set to true.
    /// If isUsingCustomRotationY is false, the rotation of the operation's parameter "arrange_rotation_y" is used.
    /// The default value for this property false.
    bool isUsingCustomRotationY() const;
    bool isUsingCustomRotationY(bool value);

    /// Gets and sets the rotation increments (in degrees) for the z-axis.
    /// This function is not available in Fusion for Personal Use.
    /// Throws an exception when calling this function in Fusion for Personal Use.
    /// To enable any rotation the parameter "arrange_rotation_group" of the operation must be set to true.
    /// To disable z-axis rotation for this selection, customRotationZ must be set to 0.
    /// The default value for this property is 45 degrees.
    /// Note: If customRotationZ is called, isUsingCustomRotationZ will be set to true automatically.
    double customRotationZ() const;
    bool customRotationZ(double value);

    /// Gets and sets if custom rotation is used for the z-axis.
    /// This function is not available in Fusion for Personal Use.
    /// Throws an exception when calling this function in Fusion for Personal Use.
    /// To enable any rotation the parameter "arrange_rotation_group" of the operation must be set to true.
    /// If isUsingCustomRotationZ is false, the rotation of the operation's parameter "arrange_rotation_z" is used.
    /// The default value for this property true.
    bool isUsingCustomRotationZ() const;
    bool isUsingCustomRotationZ(bool value);

    /// Gets and sets the custom quantity.
    /// This function is not available in Fusion for Personal Use.
    /// Throws an exception when calling this function in Fusion for Personal Use.
    /// The default value for this property is 1.
    /// Note: If customQuantity is called, isUsingCustomQuantity will be set to true automatically.
    size_t customQuantity() const;
    bool customQuantity(size_t value);

    /// Gets and sets if custom quantity is used for this element.
    /// This function is not available in Fusion for Personal Use.
    /// Throws an exception when calling this function in Fusion for Personal Use.
    /// If isUsingCustomQuantity is false, the global quantity of the operation's parameter "arrange_global_quantity" is used.
    /// The default value for this property false.
    bool isUsingCustomQuantity() const;
    bool isUsingCustomQuantity(bool value);

    /// Gets and sets the custom multi-axis rotation type.
    /// This function is not available in Fusion for Personal Use.
    /// To enable any rotation the parameter "arrange_rotation_group" of the operation must be set to true.
    /// Note: If customMultiAxisRotationType is called, isUsingCustomMultiAxisRotationType will be set to true automatically.
    /// The default value for this property is MultiAxisRotationType_SingleAxis.
    MultiAxisRotationTypes customMultiAxisRotationType() const;
    bool customMultiAxisRotationType(MultiAxisRotationTypes value);

    /// Gets and sets if custom multi-axis rotation type is used for this element.
    /// This function is not available in Fusion for Personal Use.
    /// Throws an exception when calling this function in Fusion for Personal Use.
    /// If isUsingCustomMultiAxisRotationType is false, the global property of the operation's parameter "arrange_multiaxis_rotation" is used.
    /// The default value for this property false.
    bool isUsingCustomMultiAxisRotationType() const;
    bool isUsingCustomMultiAxisRotationType(bool value);

    ADSK_CAM_ARRANGESELECTION_API static const char* classType();
    ADSK_CAM_ARRANGESELECTION_API const char* objectType() const override;
    ADSK_CAM_ARRANGESELECTION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_ARRANGESELECTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* inputGeometry_raw() const = 0;
    virtual bool inputGeometry_raw(core::Base* value) = 0;
    virtual ArrangePriorityTypes priorityType_raw() const = 0;
    virtual bool priorityType_raw(ArrangePriorityTypes value) = 0;
    virtual double customRotationX_raw() const = 0;
    virtual bool customRotationX_raw(double value) = 0;
    virtual bool isUsingCustomRotationX_raw() const = 0;
    virtual bool isUsingCustomRotationX_raw(bool value) = 0;
    virtual double customRotationY_raw() const = 0;
    virtual bool customRotationY_raw(double value) = 0;
    virtual bool isUsingCustomRotationY_raw() const = 0;
    virtual bool isUsingCustomRotationY_raw(bool value) = 0;
    virtual double customRotationZ_raw() const = 0;
    virtual bool customRotationZ_raw(double value) = 0;
    virtual bool isUsingCustomRotationZ_raw() const = 0;
    virtual bool isUsingCustomRotationZ_raw(bool value) = 0;
    virtual size_t customQuantity_raw() const = 0;
    virtual bool customQuantity_raw(size_t value) = 0;
    virtual bool isUsingCustomQuantity_raw() const = 0;
    virtual bool isUsingCustomQuantity_raw(bool value) = 0;
    virtual MultiAxisRotationTypes customMultiAxisRotationType_raw() const = 0;
    virtual bool customMultiAxisRotationType_raw(MultiAxisRotationTypes value) = 0;
    virtual bool isUsingCustomMultiAxisRotationType_raw() const = 0;
    virtual bool isUsingCustomMultiAxisRotationType_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ArrangeSelection::inputGeometry() const
{
    core::Ptr<core::Base> res = inputGeometry_raw();
    return res;
}

inline bool ArrangeSelection::inputGeometry(const core::Ptr<core::Base>& value)
{
    return inputGeometry_raw(value.get());
}

inline ArrangePriorityTypes ArrangeSelection::priorityType() const
{
    ArrangePriorityTypes res = priorityType_raw();
    return res;
}

inline bool ArrangeSelection::priorityType(ArrangePriorityTypes value)
{
    return priorityType_raw(value);
}

inline double ArrangeSelection::customRotationX() const
{
    double res = customRotationX_raw();
    return res;
}

inline bool ArrangeSelection::customRotationX(double value)
{
    return customRotationX_raw(value);
}

inline bool ArrangeSelection::isUsingCustomRotationX() const
{
    bool res = isUsingCustomRotationX_raw();
    return res;
}

inline bool ArrangeSelection::isUsingCustomRotationX(bool value)
{
    return isUsingCustomRotationX_raw(value);
}

inline double ArrangeSelection::customRotationY() const
{
    double res = customRotationY_raw();
    return res;
}

inline bool ArrangeSelection::customRotationY(double value)
{
    return customRotationY_raw(value);
}

inline bool ArrangeSelection::isUsingCustomRotationY() const
{
    bool res = isUsingCustomRotationY_raw();
    return res;
}

inline bool ArrangeSelection::isUsingCustomRotationY(bool value)
{
    return isUsingCustomRotationY_raw(value);
}

inline double ArrangeSelection::customRotationZ() const
{
    double res = customRotationZ_raw();
    return res;
}

inline bool ArrangeSelection::customRotationZ(double value)
{
    return customRotationZ_raw(value);
}

inline bool ArrangeSelection::isUsingCustomRotationZ() const
{
    bool res = isUsingCustomRotationZ_raw();
    return res;
}

inline bool ArrangeSelection::isUsingCustomRotationZ(bool value)
{
    return isUsingCustomRotationZ_raw(value);
}

inline size_t ArrangeSelection::customQuantity() const
{
    size_t res = customQuantity_raw();
    return res;
}

inline bool ArrangeSelection::customQuantity(size_t value)
{
    return customQuantity_raw(value);
}

inline bool ArrangeSelection::isUsingCustomQuantity() const
{
    bool res = isUsingCustomQuantity_raw();
    return res;
}

inline bool ArrangeSelection::isUsingCustomQuantity(bool value)
{
    return isUsingCustomQuantity_raw(value);
}

inline MultiAxisRotationTypes ArrangeSelection::customMultiAxisRotationType() const
{
    MultiAxisRotationTypes res = customMultiAxisRotationType_raw();
    return res;
}

inline bool ArrangeSelection::customMultiAxisRotationType(MultiAxisRotationTypes value)
{
    return customMultiAxisRotationType_raw(value);
}

inline bool ArrangeSelection::isUsingCustomMultiAxisRotationType() const
{
    bool res = isUsingCustomMultiAxisRotationType_raw();
    return res;
}

inline bool ArrangeSelection::isUsingCustomMultiAxisRotationType(bool value)
{
    return isUsingCustomMultiAxisRotationType_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_ARRANGESELECTION_API