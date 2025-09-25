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
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSCOORDINATES_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSCOORDINATES_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSCOORDINATES_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSCOORDINATES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Color;
    class Point3D;
}}

namespace adsk { namespace fusion {

/// Represents coordinates that are used to define vertices in custom graphics.
class CustomGraphicsCoordinates : public core::Base {
public:

    /// Static method that creates a CustomGraphicsCoordinates object which can be used as input to
    /// various custom graphics methods.
    /// coordinates : An array of doubles where the values are the x, y, z components of each coordinate where
    /// the unit of measure is centimeters.
    /// Returns the created CustomGraphicsCoordinates object or null in the case of failure.
    static core::Ptr<CustomGraphicsCoordinates> create(const std::vector<double>& coordinates);

    /// Gets and sets the coordinate data associated with this CustomGraphicsCoordinates object.
    /// This data represents the x, y, z components of the coordinates where the unit of measure is centimeters.
    std::vector<double> coordinates() const;
    bool coordinates(const std::vector<double>& value);

    /// Returns the number of coordinates defined in the CustomGraphicsCoordinates object.
    int coordinateCount() const;

    /// Gets the coordinate at the specified index.
    /// index : The index of the coordinate to return. The first coordinate has an index of 0.
    /// Returns the coordinate as a Point3D object.
    core::Ptr<core::Point3D> getCoordinate(int index);

    /// Sets the coordinate at the specified index.
    /// index : The index of the coordinate to set. The first coordinate has an index of 0.
    /// coordinate : The coordinate value as a Point3D object.
    /// Returns true if setting the coordinate was successful.
    bool setCoordinate(int index, const core::Ptr<core::Point3D>& coordinate);

    /// Gets and sets the colors associated with the coordinate data. This is used when a mesh is
    /// displayed using per-vertex coloring.
    /// The color at each vertex is represented by four values where they are the red, green, blue,
    /// and alpha values. This should contain the same number of colors as vertices.
    std::vector<short> colors() const;
    bool colors(const std::vector<short>& value);

    /// Gets the color assigned to the coordinate at the specified index.
    /// index : The index of the color to return. The first color has an index of 0.
    /// Returns the color associated with the index. Can also return null in the case
    /// where there is no color assigned.
    core::Ptr<core::Color> getColor(int index);

    /// Sets the color of the coordinate at the specified index.
    /// index : The index of the coordinate to set. The first coordinate has an index of 0.
    /// color : The color value as a Color object.
    /// Returns true if setting the color was successful.
    bool setColor(int index, const core::Ptr<core::Color>& color);

    ADSK_FUSION_CUSTOMGRAPHICSCOORDINATES_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSCOORDINATES_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSCOORDINATES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSCOORDINATES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_CUSTOMGRAPHICSCOORDINATES_API static CustomGraphicsCoordinates* create_raw(const double* coordinates, size_t coordinates_size);
    virtual double* coordinates_raw(size_t& return_size) const = 0;
    virtual bool coordinates_raw(const double* value, size_t value_size) = 0;
    virtual int coordinateCount_raw() const = 0;
    virtual core::Point3D* getCoordinate_raw(int index) = 0;
    virtual bool setCoordinate_raw(int index, core::Point3D* coordinate) = 0;
    virtual short* colors_raw(size_t& return_size) const = 0;
    virtual bool colors_raw(const short* value, size_t value_size) = 0;
    virtual core::Color* getColor_raw(int index) = 0;
    virtual bool setColor_raw(int index, core::Color* color) = 0;
};

// Inline wrappers

inline core::Ptr<CustomGraphicsCoordinates> CustomGraphicsCoordinates::create(const std::vector<double>& coordinates)
{
    core::Ptr<CustomGraphicsCoordinates> res = create_raw(coordinates.empty() ? nullptr : &coordinates[0], coordinates.size());
    return res;
}

inline std::vector<double> CustomGraphicsCoordinates::coordinates() const
{
    std::vector<double> res;
    size_t s;

    double* p= coordinates_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomGraphicsCoordinates::coordinates(const std::vector<double>& value)
{
    return coordinates_raw(value.empty() ? nullptr : &value[0], value.size());
}

inline int CustomGraphicsCoordinates::coordinateCount() const
{
    int res = coordinateCount_raw();
    return res;
}

inline core::Ptr<core::Point3D> CustomGraphicsCoordinates::getCoordinate(int index)
{
    core::Ptr<core::Point3D> res = getCoordinate_raw(index);
    return res;
}

inline bool CustomGraphicsCoordinates::setCoordinate(int index, const core::Ptr<core::Point3D>& coordinate)
{
    bool res = setCoordinate_raw(index, coordinate.get());
    return res;
}

inline std::vector<short> CustomGraphicsCoordinates::colors() const
{
    std::vector<short> res;
    size_t s;

    short* p= colors_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomGraphicsCoordinates::colors(const std::vector<short>& value)
{
    return colors_raw(value.empty() ? nullptr : &value[0], value.size());
}

inline core::Ptr<core::Color> CustomGraphicsCoordinates::getColor(int index)
{
    core::Ptr<core::Color> res = getColor_raw(index);
    return res;
}

inline bool CustomGraphicsCoordinates::setColor(int index, const core::Ptr<core::Color>& color)
{
    bool res = setColor_raw(index, color.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSCOORDINATES_API