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
# ifdef __COMPILING_ADSK_FUSION_USERCOORDINATESYSTEM_CPP__
# define ADSK_FUSION_USERCOORDINATESYSTEM_API XI_EXPORT
# else
# define ADSK_FUSION_USERCOORDINATESYSTEM_API
# endif
#else
# define ADSK_FUSION_USERCOORDINATESYSTEM_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
    class Matrix3D;
}}
namespace adsk { namespace fusion {
    class Component;
    class ConstructionAxis;
    class ConstructionPlane;
    class ConstructionPoint;
    class ModelParameter;
    class Occurrence;
    class TimelineObject;
    class UserCoordinateSystemGeometry;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents an existing User Coordinate System in a design.
class UserCoordinateSystem : public core::Base {
public:

    /// Returns the parent component that owns this User Coordinate System.
    core::Ptr<Component> parentComponent() const;

    /// Gets and sets the name of this User Coordinate System. This is the name seen by the user in the timeline.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets and sets the User Coordinate System geometry for this User Coordinate System input. This
    /// defines the location of the User Coordinate System.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this User Coordinate System.
    /// This can be accomplished using the following code: ucs.timelineObject.rollTo(True)
    core::Ptr<UserCoordinateSystemGeometry> geometry() const;
    bool geometry(const core::Ptr<UserCoordinateSystemGeometry>& value);

    /// Gets the parameter that defines the rotation of the coordinate system around its X-Axis. The value can be changed
    /// using the functionality of the returned ModelParameter object.
    core::Ptr<ModelParameter> angleX() const;

    /// Gets the parameter that defines the rotation of the coordinate system around its Y-Axis. The value can be changed
    /// using the functionality of the returned ModelParameter object.
    core::Ptr<ModelParameter> angleY() const;

    /// Gets the parameter that defines the rotation of the coordinate system around its Z-Axis. The value can be changed
    /// using the functionality of the returned ModelParameter object.
    core::Ptr<ModelParameter> angleZ() const;

    /// Gets the parameter that controls the offset in the X-direction. The value can be changed
    /// using the functionality of the returned ModelParameter object.
    core::Ptr<ModelParameter> offsetX() const;

    /// Gets the parameter that controls the offset in the Y-direction. The value can be changed
    /// using the functionality of the returned ModelParameter object.
    core::Ptr<ModelParameter> offsetY() const;

    /// Gets the parameter that controls the offset in the Z-direction. The value can be changed
    /// using the functionality of the returned ModelParameter object.
    core::Ptr<ModelParameter> offsetZ() const;

    /// Gets and sets the entity that defines the X axis direction. This defaults
    /// to null meaning the X axis is inferred from the input geometry.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this User Coordinate System.
    /// This can be accomplished using the following code: ucs.timelineObject.rollTo(True)
    core::Ptr<core::Base> xAxisEntity() const;
    bool xAxisEntity(const core::Ptr<core::Base>& value);

    /// Gets and sets the entity that defines the Z axis direction. This defaults
    /// to null meaning the Z axis is inferred from the input geometry.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this User Coordinate System.
    /// This can be accomplished using the following code: ucs.timelineObject.rollTo(True)
    core::Ptr<core::Base> zAxisEntity() const;
    bool zAxisEntity(const core::Ptr<core::Base>& value);

    /// Returns the construction point that represents the origin of the UCS.
    core::Ptr<ConstructionPoint> originConstructionPoint() const;

    /// Returns the construction axis that represent the x-axis of the UCS.
    core::Ptr<ConstructionAxis> xConstructionAxis() const;

    /// Returns the construction axis that represent the y-axis of the UCS.
    core::Ptr<ConstructionAxis> yConstructionAxis() const;

    /// Returns the construction axis that represent the z-axis of the UCS.
    core::Ptr<ConstructionAxis> zConstructionAxis() const;

    /// Returns the XY construction plane that represent the of the UCS.
    core::Ptr<ConstructionPlane> xYConstructionPlane() const;

    /// Returns the XZ construction plane that represent the of the UCS.
    core::Ptr<ConstructionPlane> xZConstructionPlane() const;

    /// Returns the YZ construction plane that represent the of the UCS.
    core::Ptr<ConstructionPlane> yZConstructionPlane() const;

    /// Deletes this User Coordinate System.
    /// Returns true if successful.
    bool deleteMe();

    /// Returns the timeline object associated with this User Coordinate System.
    core::Ptr<TimelineObject> timelineObject() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<UserCoordinateSystem> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<UserCoordinateSystem> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// Returns the collection of attributes associated with this User Coordinate System.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns a token for the User Coordinate System object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same User Coordinate System.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    /// Gets and sets if the light bulb of this User Coordinate System as displayed in the browser is on or off.
    /// A User Coordinate System will only be visible if the light bulb is switched on. However,
    /// the light bulb can be on and the User Coordinate System still invisible if a higher level occurrence
    /// in the assembly context is not visible because its light bulb is off or the constructions folder
    /// light bulb is off.
    bool isLightBulbOn() const;
    bool isLightBulbOn(bool value);

    /// Indicates if the User Coordinate System is visible.
    /// This property is affected by the AssemblyContext of the User Coordinate System.
    bool isVisible() const;

    /// Returns the position and orientation of the User Coordinate System geometry associated with this User Coordinate System.
    /// This is returned as a 3D matrix which provides the origin and the X, Y, and Z axis vectors of the
    /// coordinate system.
    /// 
    /// This property is especially useful in cases where the UserCoordinateSystemGeometry cannot be obtained. This can
    /// happen when the model has been modified in a way where the geometry used to create the joint is
    /// no longer available.
    core::Ptr<core::Matrix3D> transform() const;

    ADSK_FUSION_USERCOORDINATESYSTEM_API static const char* classType();
    ADSK_FUSION_USERCOORDINATESYSTEM_API const char* objectType() const override;
    ADSK_FUSION_USERCOORDINATESYSTEM_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_USERCOORDINATESYSTEM_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Component* parentComponent_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual UserCoordinateSystemGeometry* geometry_raw() const = 0;
    virtual bool geometry_raw(UserCoordinateSystemGeometry* value) = 0;
    virtual ModelParameter* angleX_raw() const = 0;
    virtual ModelParameter* angleY_raw() const = 0;
    virtual ModelParameter* angleZ_raw() const = 0;
    virtual ModelParameter* offsetX_raw() const = 0;
    virtual ModelParameter* offsetY_raw() const = 0;
    virtual ModelParameter* offsetZ_raw() const = 0;
    virtual core::Base* xAxisEntity_raw() const = 0;
    virtual bool xAxisEntity_raw(core::Base* value) = 0;
    virtual core::Base* zAxisEntity_raw() const = 0;
    virtual bool zAxisEntity_raw(core::Base* value) = 0;
    virtual ConstructionPoint* originConstructionPoint_raw() const = 0;
    virtual ConstructionAxis* xConstructionAxis_raw() const = 0;
    virtual ConstructionAxis* yConstructionAxis_raw() const = 0;
    virtual ConstructionAxis* zConstructionAxis_raw() const = 0;
    virtual ConstructionPlane* xYConstructionPlane_raw() const = 0;
    virtual ConstructionPlane* xZConstructionPlane_raw() const = 0;
    virtual ConstructionPlane* yZConstructionPlane_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual TimelineObject* timelineObject_raw() const = 0;
    virtual UserCoordinateSystem* nativeObject_raw() const = 0;
    virtual UserCoordinateSystem* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
    virtual bool isLightBulbOn_raw() const = 0;
    virtual bool isLightBulbOn_raw(bool value) = 0;
    virtual bool isVisible_raw() const = 0;
    virtual core::Matrix3D* transform_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Component> UserCoordinateSystem::parentComponent() const
{
    core::Ptr<Component> res = parentComponent_raw();
    return res;
}

inline std::string UserCoordinateSystem::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool UserCoordinateSystem::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<UserCoordinateSystemGeometry> UserCoordinateSystem::geometry() const
{
    core::Ptr<UserCoordinateSystemGeometry> res = geometry_raw();
    return res;
}

inline bool UserCoordinateSystem::geometry(const core::Ptr<UserCoordinateSystemGeometry>& value)
{
    return geometry_raw(value.get());
}

inline core::Ptr<ModelParameter> UserCoordinateSystem::angleX() const
{
    core::Ptr<ModelParameter> res = angleX_raw();
    return res;
}

inline core::Ptr<ModelParameter> UserCoordinateSystem::angleY() const
{
    core::Ptr<ModelParameter> res = angleY_raw();
    return res;
}

inline core::Ptr<ModelParameter> UserCoordinateSystem::angleZ() const
{
    core::Ptr<ModelParameter> res = angleZ_raw();
    return res;
}

inline core::Ptr<ModelParameter> UserCoordinateSystem::offsetX() const
{
    core::Ptr<ModelParameter> res = offsetX_raw();
    return res;
}

inline core::Ptr<ModelParameter> UserCoordinateSystem::offsetY() const
{
    core::Ptr<ModelParameter> res = offsetY_raw();
    return res;
}

inline core::Ptr<ModelParameter> UserCoordinateSystem::offsetZ() const
{
    core::Ptr<ModelParameter> res = offsetZ_raw();
    return res;
}

inline core::Ptr<core::Base> UserCoordinateSystem::xAxisEntity() const
{
    core::Ptr<core::Base> res = xAxisEntity_raw();
    return res;
}

inline bool UserCoordinateSystem::xAxisEntity(const core::Ptr<core::Base>& value)
{
    return xAxisEntity_raw(value.get());
}

inline core::Ptr<core::Base> UserCoordinateSystem::zAxisEntity() const
{
    core::Ptr<core::Base> res = zAxisEntity_raw();
    return res;
}

inline bool UserCoordinateSystem::zAxisEntity(const core::Ptr<core::Base>& value)
{
    return zAxisEntity_raw(value.get());
}

inline core::Ptr<ConstructionPoint> UserCoordinateSystem::originConstructionPoint() const
{
    core::Ptr<ConstructionPoint> res = originConstructionPoint_raw();
    return res;
}

inline core::Ptr<ConstructionAxis> UserCoordinateSystem::xConstructionAxis() const
{
    core::Ptr<ConstructionAxis> res = xConstructionAxis_raw();
    return res;
}

inline core::Ptr<ConstructionAxis> UserCoordinateSystem::yConstructionAxis() const
{
    core::Ptr<ConstructionAxis> res = yConstructionAxis_raw();
    return res;
}

inline core::Ptr<ConstructionAxis> UserCoordinateSystem::zConstructionAxis() const
{
    core::Ptr<ConstructionAxis> res = zConstructionAxis_raw();
    return res;
}

inline core::Ptr<ConstructionPlane> UserCoordinateSystem::xYConstructionPlane() const
{
    core::Ptr<ConstructionPlane> res = xYConstructionPlane_raw();
    return res;
}

inline core::Ptr<ConstructionPlane> UserCoordinateSystem::xZConstructionPlane() const
{
    core::Ptr<ConstructionPlane> res = xZConstructionPlane_raw();
    return res;
}

inline core::Ptr<ConstructionPlane> UserCoordinateSystem::yZConstructionPlane() const
{
    core::Ptr<ConstructionPlane> res = yZConstructionPlane_raw();
    return res;
}

inline bool UserCoordinateSystem::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<TimelineObject> UserCoordinateSystem::timelineObject() const
{
    core::Ptr<TimelineObject> res = timelineObject_raw();
    return res;
}

inline core::Ptr<UserCoordinateSystem> UserCoordinateSystem::nativeObject() const
{
    core::Ptr<UserCoordinateSystem> res = nativeObject_raw();
    return res;
}

inline core::Ptr<UserCoordinateSystem> UserCoordinateSystem::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<UserCoordinateSystem> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<Occurrence> UserCoordinateSystem::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<core::Attributes> UserCoordinateSystem::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline std::string UserCoordinateSystem::entityToken() const
{
    std::string res;

    char* p= entityToken_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool UserCoordinateSystem::isLightBulbOn() const
{
    bool res = isLightBulbOn_raw();
    return res;
}

inline bool UserCoordinateSystem::isLightBulbOn(bool value)
{
    return isLightBulbOn_raw(value);
}

inline bool UserCoordinateSystem::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline core::Ptr<core::Matrix3D> UserCoordinateSystem::transform() const
{
    core::Ptr<core::Matrix3D> res = transform_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_USERCOORDINATESYSTEM_API