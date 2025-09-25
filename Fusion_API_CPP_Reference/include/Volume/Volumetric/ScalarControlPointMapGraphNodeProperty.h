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
#include "GraphNodeProperty.h"
#include "../VolumeTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef VOLUMEXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_VOLUME_SCALARCONTROLPOINTMAPGRAPHNODEPROPERTY_CPP__
# define ADSK_VOLUME_SCALARCONTROLPOINTMAPGRAPHNODEPROPERTY_API XI_EXPORT
# else
# define ADSK_VOLUME_SCALARCONTROLPOINTMAPGRAPHNODEPROPERTY_API
# endif
#else
# define ADSK_VOLUME_SCALARCONTROLPOINTMAPGRAPHNODEPROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace volume {
    class ScalarControlPoint;
}}

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A property value that defines a complex mapping curve from an input domain of double values to
/// an output range of double values. The mapping is represented by a set of points ordered by
/// their domain value parameters. For a given input value, the output value is interpolated from the values
/// of the two points before and after it using the specified interpolation function for each point.
class ScalarControlPointMapGraphNodeProperty : public GraphNodeProperty {
public:

    /// The number of points.
    /// Total point count.
    size_t pointCount() const;

    /// Get the point at index.
    /// index : Index of the point to get.
    /// The control point at this index.
    core::Ptr<ScalarControlPoint> getPoint(size_t index);

    /// Add a point to the map.
    /// parameter : Where in the input domain where the point lies.
    /// value : The double value of the parameter in the output domain.
    /// interpolator : The function used to interpolate an output value for a input parameter between this point and the next.
    /// True if successfully added.
    bool addPoint(double parameter, double value, ControlPointInterpolators interpolator);

    /// Remove a point from the map.
    /// index : Index of the point to remove.
    /// True if successfully removed.
    bool removePoint(size_t index);

    /// Remove all points from the map.
    /// True if successfully cleared.
    bool clear();

    ADSK_VOLUME_SCALARCONTROLPOINTMAPGRAPHNODEPROPERTY_API static const char* classType();
    ADSK_VOLUME_SCALARCONTROLPOINTMAPGRAPHNODEPROPERTY_API const char* objectType() const override;
    ADSK_VOLUME_SCALARCONTROLPOINTMAPGRAPHNODEPROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_SCALARCONTROLPOINTMAPGRAPHNODEPROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t pointCount_raw() const = 0;
    virtual ScalarControlPoint* getPoint_raw(size_t index) = 0;
    virtual bool addPoint_raw(double parameter, double value, ControlPointInterpolators interpolator) = 0;
    virtual bool removePoint_raw(size_t index) = 0;
    virtual bool clear_raw() = 0;
};

// Inline wrappers

inline size_t ScalarControlPointMapGraphNodeProperty::pointCount() const
{
    size_t res = pointCount_raw();
    return res;
}

inline core::Ptr<ScalarControlPoint> ScalarControlPointMapGraphNodeProperty::getPoint(size_t index)
{
    core::Ptr<ScalarControlPoint> res = getPoint_raw(index);
    return res;
}

inline bool ScalarControlPointMapGraphNodeProperty::addPoint(double parameter, double value, ControlPointInterpolators interpolator)
{
    bool res = addPoint_raw(parameter, value, interpolator);
    return res;
}

inline bool ScalarControlPointMapGraphNodeProperty::removePoint(size_t index)
{
    bool res = removePoint_raw(index);
    return res;
}

inline bool ScalarControlPointMapGraphNodeProperty::clear()
{
    bool res = clear_raw();
    return res;
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_SCALARCONTROLPOINTMAPGRAPHNODEPROPERTY_API