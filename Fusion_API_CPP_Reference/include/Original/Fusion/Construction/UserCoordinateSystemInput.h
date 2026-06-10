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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_USERCOORDINATESYSTEMINPUT_CPP__
# define ADSK_FUSION_USERCOORDINATESYSTEMINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_USERCOORDINATESYSTEMINPUT_API
# endif
#else
# define ADSK_FUSION_USERCOORDINATESYSTEMINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class Occurrence;
    class UserCoordinateSystemGeometry;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Defines all of the information required to create a new User Coordinate System. This object provides
/// equivalent functionality to the User Coordinate System command dialog in that it gathers the required
/// information to create a User Coordinate System.
class UserCoordinateSystemInput : public core::Base {
public:

    /// Gets and sets the User Coordinate System geometry for this User Coordinate System input. This
    /// defines the location of the User Coordinate System.
    core::Ptr<UserCoordinateSystemGeometry> geometry() const;
    bool geometry(const core::Ptr<UserCoordinateSystemGeometry>& value);

    /// Gets and sets the value that defines the angle X for the user coordinate system. This defaults to zero
    /// if it's not specified. The value defines an angle X and if the ValueInput is defined using
    /// the createByReal method the value is assumed to be radians.
    core::Ptr<core::ValueInput> angleX() const;
    bool angleX(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the value that defines the angle Y for the user coordinate system. This defaults to zero
    /// if it's not specified. The value defines an angle Y and if the ValueInput is defined using
    /// the createByReal method the value is assumed to be radians.
    core::Ptr<core::ValueInput> angleY() const;
    bool angleY(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the value that defines the angle Z for the user coordinate system. This defaults to zero
    /// if it's not specified. The value defines an angle Z and if the ValueInput is defined using
    /// the createByReal method the value is assumed to be radians.
    core::Ptr<core::ValueInput> angleZ() const;
    bool angleZ(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the value that defines the X offset direction. This defaults to zero
    /// if it's not specified. The value defines a distance and if the ValueInput is defined using
    /// the createByReal method the value is assumed to be centimeters.
    core::Ptr<core::ValueInput> offsetX() const;
    bool offsetX(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the value that defines the Y offset direction. This defaults to zero
    /// if it's not specified. The value defines a distance and if the ValueInput is defined using
    /// the createByReal method the value is assumed to be centimeters.
    core::Ptr<core::ValueInput> offsetY() const;
    bool offsetY(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the value that defines the Z offset direction. This defaults to zero
    /// if it's not specified. The value defines a distance and if the ValueInput is defined using
    /// the createByReal method the value is assumed to be centimeters.
    core::Ptr<core::ValueInput> offsetZ() const;
    bool offsetZ(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the entity that defines the X axis direction. This defaults
    /// to null meaning the X axis is inferred from the input geometry.
    core::Ptr<core::Base> xAxisEntity() const;
    bool xAxisEntity(const core::Ptr<core::Base>& value);

    /// Gets and sets the entity that defines the Z axis direction. This defaults
    /// to null meaning the Z axis is inferred from the input geometry.
    core::Ptr<core::Base> zAxisEntity() const;
    bool zAxisEntity(const core::Ptr<core::Base>& value);

    /// Gets and sets the value that defines the first global orient parameter for the User Coordinate System.
    /// This defaults to zero if it's not specified.
    /// For Cylinder or cone, it represents the angle around the center axis.
    /// For Sphere and Torus, it represents the angle around the center axis.
    /// For Spline, it represents the U parameter.
    core::Ptr<core::ValueInput> globalOrientParameterOne() const;
    bool globalOrientParameterOne(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the value that defines the second global orient parameter for the User Coordinate System.
    /// This defaults to zero if it's not specified.
    /// For Cylinder or cone, it is not used.
    /// For Sphere, it represents the polar angle, which is the angle between the radius line and the equator plane.
    /// For Torus, it represents the angle around the center of the section circle.
    /// For Spline, it represents the V parameter.
    core::Ptr<core::ValueInput> globalOrientParameterTwo() const;
    bool globalOrientParameterTwo(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the occurrence this User Coordinate System will be created within.
    /// This property is only needed when creating (the UserCoordinateSystem) with geometry
    /// (e.g. a sketch point) in another component AND (the UserCoordinateSystem) is not in the
    /// root component. The CreationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    ADSK_FUSION_USERCOORDINATESYSTEMINPUT_API static const char* classType();
    ADSK_FUSION_USERCOORDINATESYSTEMINPUT_API const char* objectType() const override;
    ADSK_FUSION_USERCOORDINATESYSTEMINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_USERCOORDINATESYSTEMINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual UserCoordinateSystemGeometry* geometry_raw() const = 0;
    virtual bool geometry_raw(UserCoordinateSystemGeometry* value) = 0;
    virtual core::ValueInput* angleX_raw() const = 0;
    virtual bool angleX_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* angleY_raw() const = 0;
    virtual bool angleY_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* angleZ_raw() const = 0;
    virtual bool angleZ_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* offsetX_raw() const = 0;
    virtual bool offsetX_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* offsetY_raw() const = 0;
    virtual bool offsetY_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* offsetZ_raw() const = 0;
    virtual bool offsetZ_raw(core::ValueInput* value) = 0;
    virtual core::Base* xAxisEntity_raw() const = 0;
    virtual bool xAxisEntity_raw(core::Base* value) = 0;
    virtual core::Base* zAxisEntity_raw() const = 0;
    virtual bool zAxisEntity_raw(core::Base* value) = 0;
    virtual core::ValueInput* globalOrientParameterOne_raw() const = 0;
    virtual bool globalOrientParameterOne_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* globalOrientParameterTwo_raw() const = 0;
    virtual bool globalOrientParameterTwo_raw(core::ValueInput* value) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
};

// Inline wrappers

inline core::Ptr<UserCoordinateSystemGeometry> UserCoordinateSystemInput::geometry() const
{
    core::Ptr<UserCoordinateSystemGeometry> res = geometry_raw();
    return res;
}

inline bool UserCoordinateSystemInput::geometry(const core::Ptr<UserCoordinateSystemGeometry>& value)
{
    return geometry_raw(value.get());
}

inline core::Ptr<core::ValueInput> UserCoordinateSystemInput::angleX() const
{
    core::Ptr<core::ValueInput> res = angleX_raw();
    return res;
}

inline bool UserCoordinateSystemInput::angleX(const core::Ptr<core::ValueInput>& value)
{
    return angleX_raw(value.get());
}

inline core::Ptr<core::ValueInput> UserCoordinateSystemInput::angleY() const
{
    core::Ptr<core::ValueInput> res = angleY_raw();
    return res;
}

inline bool UserCoordinateSystemInput::angleY(const core::Ptr<core::ValueInput>& value)
{
    return angleY_raw(value.get());
}

inline core::Ptr<core::ValueInput> UserCoordinateSystemInput::angleZ() const
{
    core::Ptr<core::ValueInput> res = angleZ_raw();
    return res;
}

inline bool UserCoordinateSystemInput::angleZ(const core::Ptr<core::ValueInput>& value)
{
    return angleZ_raw(value.get());
}

inline core::Ptr<core::ValueInput> UserCoordinateSystemInput::offsetX() const
{
    core::Ptr<core::ValueInput> res = offsetX_raw();
    return res;
}

inline bool UserCoordinateSystemInput::offsetX(const core::Ptr<core::ValueInput>& value)
{
    return offsetX_raw(value.get());
}

inline core::Ptr<core::ValueInput> UserCoordinateSystemInput::offsetY() const
{
    core::Ptr<core::ValueInput> res = offsetY_raw();
    return res;
}

inline bool UserCoordinateSystemInput::offsetY(const core::Ptr<core::ValueInput>& value)
{
    return offsetY_raw(value.get());
}

inline core::Ptr<core::ValueInput> UserCoordinateSystemInput::offsetZ() const
{
    core::Ptr<core::ValueInput> res = offsetZ_raw();
    return res;
}

inline bool UserCoordinateSystemInput::offsetZ(const core::Ptr<core::ValueInput>& value)
{
    return offsetZ_raw(value.get());
}

inline core::Ptr<core::Base> UserCoordinateSystemInput::xAxisEntity() const
{
    core::Ptr<core::Base> res = xAxisEntity_raw();
    return res;
}

inline bool UserCoordinateSystemInput::xAxisEntity(const core::Ptr<core::Base>& value)
{
    return xAxisEntity_raw(value.get());
}

inline core::Ptr<core::Base> UserCoordinateSystemInput::zAxisEntity() const
{
    core::Ptr<core::Base> res = zAxisEntity_raw();
    return res;
}

inline bool UserCoordinateSystemInput::zAxisEntity(const core::Ptr<core::Base>& value)
{
    return zAxisEntity_raw(value.get());
}

inline core::Ptr<core::ValueInput> UserCoordinateSystemInput::globalOrientParameterOne() const
{
    core::Ptr<core::ValueInput> res = globalOrientParameterOne_raw();
    return res;
}

inline bool UserCoordinateSystemInput::globalOrientParameterOne(const core::Ptr<core::ValueInput>& value)
{
    return globalOrientParameterOne_raw(value.get());
}

inline core::Ptr<core::ValueInput> UserCoordinateSystemInput::globalOrientParameterTwo() const
{
    core::Ptr<core::ValueInput> res = globalOrientParameterTwo_raw();
    return res;
}

inline bool UserCoordinateSystemInput::globalOrientParameterTwo(const core::Ptr<core::ValueInput>& value)
{
    return globalOrientParameterTwo_raw(value.get());
}

inline core::Ptr<Occurrence> UserCoordinateSystemInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool UserCoordinateSystemInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_USERCOORDINATESYSTEMINPUT_API