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
# ifdef __COMPILING_ADSK_FUSION_OBJECTVISIBILITY_CPP__
# define ADSK_FUSION_OBJECTVISIBILITY_API XI_EXPORT
# else
# define ADSK_FUSION_OBJECTVISIBILITY_API
# endif
#else
# define ADSK_FUSION_OBJECTVISIBILITY_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// An object that provides control over which objects are displayed in the graphics window.
/// This is the equivalent of the "Object Visibility" settings in the Display Settings drop-down
/// in the navigation toolbar at the bottom of the Fusion graphics window.
class ObjectVisibility : public core::Base {
public:

    /// Sets if all objects are visible or hidden. When setting this property it
    /// will set the value of all other properties of this object to true or false.
    /// When getting this property, if it is true, then all other properties are true.
    /// If false, one or more other properties are false.
    bool isAllObjectsVisible() const;
    bool isAllObjectsVisible(bool value);

    /// Gets and sets if the origin construction planes of all components, local or
    /// referenced by this design, are visible in the graphics window.
    bool isOriginPlanesVisible() const;
    bool isOriginPlanesVisible(bool value);

    /// Gets and sets if the origin construction axes of all components, local or
    /// referenced by this design, are visible in the graphics window.
    bool isOriginAxesVisible() const;
    bool isOriginAxesVisible(bool value);

    /// Gets and sets if the origin construction points of all components, local or
    /// referenced by this design, are visible in the graphics window.
    bool isOriginPointsVisible() const;
    bool isOriginPointsVisible(bool value);

    /// Gets and sets if the user created construction planes of all components, local or
    /// referenced by this design, are visible in the graphics window.
    bool isUserWorkPlanesVisible() const;
    bool isUserWorkPlanesVisible(bool value);

    /// Gets and sets if the user created construction axes of all components, local or
    /// referenced by this design, are visible in the graphics window.
    bool isUserWorkAxesVisible() const;
    bool isUserWorkAxesVisible(bool value);

    /// Gets and sets if the user created construction points of all components, local or
    /// referenced by this design, are visible in the graphics window.
    bool isUserWorkPointsVisible() const;
    bool isUserWorkPointsVisible(bool value);

    /// Gets and sets if the sketches in all components, local or referenced by this design,
    /// are visible in the graphics window.
    bool isSketchesVisible() const;
    bool isSketchesVisible(bool value);

    /// Gets and sets if the glyphs for joint origins in all components, local or referenced by this design,
    /// are visible in the graphics window.
    bool isJointOriginsVisible() const;
    bool isJointOriginsVisible(bool value);

    /// Gets and sets if the axes lines shown in the glyphs for joint origins in all components, local or
    /// referenced by this design, are visible in the graphics window.
    bool isJointOriginAxesVisible() const;
    bool isJointOriginAxesVisible(bool value);

    /// Gets and sets if the glyphs for joints in all components, local or referenced by this design, are visible.
    bool isJointsVisible() const;
    bool isJointsVisible(bool value);

    ADSK_FUSION_OBJECTVISIBILITY_API static const char* classType();
    ADSK_FUSION_OBJECTVISIBILITY_API const char* objectType() const override;
    ADSK_FUSION_OBJECTVISIBILITY_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_OBJECTVISIBILITY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isAllObjectsVisible_raw() const = 0;
    virtual bool isAllObjectsVisible_raw(bool value) = 0;
    virtual bool isOriginPlanesVisible_raw() const = 0;
    virtual bool isOriginPlanesVisible_raw(bool value) = 0;
    virtual bool isOriginAxesVisible_raw() const = 0;
    virtual bool isOriginAxesVisible_raw(bool value) = 0;
    virtual bool isOriginPointsVisible_raw() const = 0;
    virtual bool isOriginPointsVisible_raw(bool value) = 0;
    virtual bool isUserWorkPlanesVisible_raw() const = 0;
    virtual bool isUserWorkPlanesVisible_raw(bool value) = 0;
    virtual bool isUserWorkAxesVisible_raw() const = 0;
    virtual bool isUserWorkAxesVisible_raw(bool value) = 0;
    virtual bool isUserWorkPointsVisible_raw() const = 0;
    virtual bool isUserWorkPointsVisible_raw(bool value) = 0;
    virtual bool isSketchesVisible_raw() const = 0;
    virtual bool isSketchesVisible_raw(bool value) = 0;
    virtual bool isJointOriginsVisible_raw() const = 0;
    virtual bool isJointOriginsVisible_raw(bool value) = 0;
    virtual bool isJointOriginAxesVisible_raw() const = 0;
    virtual bool isJointOriginAxesVisible_raw(bool value) = 0;
    virtual bool isJointsVisible_raw() const = 0;
    virtual bool isJointsVisible_raw(bool value) = 0;
};

// Inline wrappers

inline bool ObjectVisibility::isAllObjectsVisible() const
{
    bool res = isAllObjectsVisible_raw();
    return res;
}

inline bool ObjectVisibility::isAllObjectsVisible(bool value)
{
    return isAllObjectsVisible_raw(value);
}

inline bool ObjectVisibility::isOriginPlanesVisible() const
{
    bool res = isOriginPlanesVisible_raw();
    return res;
}

inline bool ObjectVisibility::isOriginPlanesVisible(bool value)
{
    return isOriginPlanesVisible_raw(value);
}

inline bool ObjectVisibility::isOriginAxesVisible() const
{
    bool res = isOriginAxesVisible_raw();
    return res;
}

inline bool ObjectVisibility::isOriginAxesVisible(bool value)
{
    return isOriginAxesVisible_raw(value);
}

inline bool ObjectVisibility::isOriginPointsVisible() const
{
    bool res = isOriginPointsVisible_raw();
    return res;
}

inline bool ObjectVisibility::isOriginPointsVisible(bool value)
{
    return isOriginPointsVisible_raw(value);
}

inline bool ObjectVisibility::isUserWorkPlanesVisible() const
{
    bool res = isUserWorkPlanesVisible_raw();
    return res;
}

inline bool ObjectVisibility::isUserWorkPlanesVisible(bool value)
{
    return isUserWorkPlanesVisible_raw(value);
}

inline bool ObjectVisibility::isUserWorkAxesVisible() const
{
    bool res = isUserWorkAxesVisible_raw();
    return res;
}

inline bool ObjectVisibility::isUserWorkAxesVisible(bool value)
{
    return isUserWorkAxesVisible_raw(value);
}

inline bool ObjectVisibility::isUserWorkPointsVisible() const
{
    bool res = isUserWorkPointsVisible_raw();
    return res;
}

inline bool ObjectVisibility::isUserWorkPointsVisible(bool value)
{
    return isUserWorkPointsVisible_raw(value);
}

inline bool ObjectVisibility::isSketchesVisible() const
{
    bool res = isSketchesVisible_raw();
    return res;
}

inline bool ObjectVisibility::isSketchesVisible(bool value)
{
    return isSketchesVisible_raw(value);
}

inline bool ObjectVisibility::isJointOriginsVisible() const
{
    bool res = isJointOriginsVisible_raw();
    return res;
}

inline bool ObjectVisibility::isJointOriginsVisible(bool value)
{
    return isJointOriginsVisible_raw(value);
}

inline bool ObjectVisibility::isJointOriginAxesVisible() const
{
    bool res = isJointOriginAxesVisible_raw();
    return res;
}

inline bool ObjectVisibility::isJointOriginAxesVisible(bool value)
{
    return isJointOriginAxesVisible_raw(value);
}

inline bool ObjectVisibility::isJointsVisible() const
{
    bool res = isJointsVisible_raw();
    return res;
}

inline bool ObjectVisibility::isJointsVisible(bool value)
{
    return isJointsVisible_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_OBJECTVISIBILITY_API