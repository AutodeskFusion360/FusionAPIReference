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
#include "CustomGraphicsEntity.h"
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSLINES_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSLINES_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSLINES_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSLINES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class CustomGraphicsCoordinates;
}}

namespace adsk { namespace fusion {

/// Represents lines drawn in the graphics window.
class CustomGraphicsLines : public CustomGraphicsEntity {
public:

    /// Gets and sets the CustomGraphicsCoordinates object that defines the coordinates of the vertices of the lines.
    /// A CustomGraphicsCoordinates object can be created using the static create method of the CustomGraphicsCoordinates class.
    core::Ptr<CustomGraphicsCoordinates> coordinates() const;
    bool coordinates(const core::Ptr<CustomGraphicsCoordinates>& value);

    /// Gets and sets an array of integers that represent indices into the coordinates to define the order the coordinates are used to draw the lines.
    /// An empty array indicates that no index list is used and coordinates are used in the order they're provided in the provided CustomGraphicsCoordinates object.
    std::vector<int> indexList() const;
    bool indexList(const std::vector<int>& value);

    /// Defines if the coordinates are used to define a series of individual lines or a connected set of lines (line strip). If individual lines
    /// are drawn (this property is false), each pair of coordinates define a single line. If a line strip is drawn (this property is true),
    /// the first pair of coordinates define the first line and the third coordinate defines a line that connects to the second coordinate.
    /// The fourth coordinate creates a line connecting to the third coordinate, and so on.
    bool isLineStrip() const;
    bool isLineStrip(bool value);

    /// If isLineStrip is true, this property defines the number of coordinates to use in the line strips. It is an array of integers
    /// that defines the number of coordinates for each line strip. An empty array indicates that a single line strip is to be drawn.
    std::vector<int> lineStripLengths() const;
    bool lineStripLengths(const std::vector<int>& value);

    /// Defines the thickness of the line in pixels.
    double weight() const;
    bool weight(double value);

    /// Defines the scale as it relates to how the line style is applied. The effect is to
    /// shrink or expand the line style as it is applied to the line. This does not affect the line width.
    double lineStyleScale() const;
    bool lineStyleScale(double value);

    /// Specifies if the line style is computed based on the screen or model space. The default is
    /// based on the screen which means the style is drawn the same regardless of how you zoom in
    /// or out of the view. That is the length of lines and spaces are based on pixels. If it
    /// is drawn relative to model space then the lines and spaces are defined in centimeters and
    /// will zooming in and out will change the apparent spacing.
    bool isScreenSpaceLineStyle() const;
    bool isScreenSpaceLineStyle(bool value);

    /// The line style to apply to the line. The default is to draw a continuous line.
    LineStylePatterns lineStylePattern() const;
    bool lineStylePattern(LineStylePatterns value);

    ADSK_FUSION_CUSTOMGRAPHICSLINES_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSLINES_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSLINES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSLINES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CustomGraphicsCoordinates* coordinates_raw() const = 0;
    virtual bool coordinates_raw(CustomGraphicsCoordinates* value) = 0;
    virtual int* indexList_raw(size_t& return_size) const = 0;
    virtual bool indexList_raw(const int* value, size_t value_size) = 0;
    virtual bool isLineStrip_raw() const = 0;
    virtual bool isLineStrip_raw(bool value) = 0;
    virtual int* lineStripLengths_raw(size_t& return_size) const = 0;
    virtual bool lineStripLengths_raw(const int* value, size_t value_size) = 0;
    virtual double weight_raw() const = 0;
    virtual bool weight_raw(double value) = 0;
    virtual double lineStyleScale_raw() const = 0;
    virtual bool lineStyleScale_raw(double value) = 0;
    virtual bool isScreenSpaceLineStyle_raw() const = 0;
    virtual bool isScreenSpaceLineStyle_raw(bool value) = 0;
    virtual LineStylePatterns lineStylePattern_raw() const = 0;
    virtual bool lineStylePattern_raw(LineStylePatterns value) = 0;
};

// Inline wrappers

inline core::Ptr<CustomGraphicsCoordinates> CustomGraphicsLines::coordinates() const
{
    core::Ptr<CustomGraphicsCoordinates> res = coordinates_raw();
    return res;
}

inline bool CustomGraphicsLines::coordinates(const core::Ptr<CustomGraphicsCoordinates>& value)
{
    return coordinates_raw(value.get());
}

inline std::vector<int> CustomGraphicsLines::indexList() const
{
    std::vector<int> res;
    size_t s;

    int* p= indexList_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomGraphicsLines::indexList(const std::vector<int>& value)
{
    return indexList_raw(value.empty() ? nullptr : &value[0], value.size());
}

inline bool CustomGraphicsLines::isLineStrip() const
{
    bool res = isLineStrip_raw();
    return res;
}

inline bool CustomGraphicsLines::isLineStrip(bool value)
{
    return isLineStrip_raw(value);
}

inline std::vector<int> CustomGraphicsLines::lineStripLengths() const
{
    std::vector<int> res;
    size_t s;

    int* p= lineStripLengths_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomGraphicsLines::lineStripLengths(const std::vector<int>& value)
{
    return lineStripLengths_raw(value.empty() ? nullptr : &value[0], value.size());
}

inline double CustomGraphicsLines::weight() const
{
    double res = weight_raw();
    return res;
}

inline bool CustomGraphicsLines::weight(double value)
{
    return weight_raw(value);
}

inline double CustomGraphicsLines::lineStyleScale() const
{
    double res = lineStyleScale_raw();
    return res;
}

inline bool CustomGraphicsLines::lineStyleScale(double value)
{
    return lineStyleScale_raw(value);
}

inline bool CustomGraphicsLines::isScreenSpaceLineStyle() const
{
    bool res = isScreenSpaceLineStyle_raw();
    return res;
}

inline bool CustomGraphicsLines::isScreenSpaceLineStyle(bool value)
{
    return isScreenSpaceLineStyle_raw(value);
}

inline LineStylePatterns CustomGraphicsLines::lineStylePattern() const
{
    LineStylePatterns res = lineStylePattern_raw();
    return res;
}

inline bool CustomGraphicsLines::lineStylePattern(LineStylePatterns value)
{
    return lineStylePattern_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSLINES_API