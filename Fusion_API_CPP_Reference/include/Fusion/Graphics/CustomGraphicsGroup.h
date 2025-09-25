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
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSGROUP_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSGROUP_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSGROUP_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSGROUP_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Curve3D;
    class Matrix3D;
}}
namespace adsk { namespace fusion {
    class BRepBody;
    class CustomGraphicsBRepBody;
    class CustomGraphicsCoordinates;
    class CustomGraphicsCurve;
    class CustomGraphicsLines;
    class CustomGraphicsMesh;
    class CustomGraphicsPointSet;
    class CustomGraphicsText;
}}

namespace adsk { namespace fusion {

/// Represents of group of custom graphics entities. A group can also own other graphics groups.
class CustomGraphicsGroup : public CustomGraphicsEntity {
public:

    /// Function that returns the specified custom graphics entity within this group. This also includes
    /// any child graphics groups.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<CustomGraphicsEntity> item(size_t index) const;

    /// Returns the number of graphics entities within the group.
    size_t count() const;

    /// Creates a new, empty CustomGraphicsGroup that is owned by this CustomGraphicsGroup.
    /// Returns the new CustomGraphicsGroup object or null in the case of a failure.
    core::Ptr<CustomGraphicsGroup> addGroup();

    /// Adds a new CustomGraphicsMesh entity to this group.
    /// coordinates : The CustomGraphicsCoordinates object that defines the coordinates of the vertices of the mesh.
    /// A CustomGrahpicsCoordinates object can be created using the static create method of the CustomGraphicsCoordinates class.
    /// coordinateIndexList : An array of integers that represent indices into the coordinates to define the vertices of the triangles. If an empty
    /// array is provided, then it's assumed that the first three coordinates defines the first triangle, the next three define
    /// the second triangle, and so on.
    /// normalVectors : An array of doubles that represent the x, y, z components of the normals at each coordinate. There should be a normal defined
    /// for each coordinate. If an empty array is provided for the normal vectors, Fusion will automatically calculate normal vectors
    /// that are 90 degrees to the face of the triangle, making it appear flat.
    /// normalIndexList : An array of integers that represent indices into the normal vectors to define the which vector corresponds to which vertex. This
    /// should be the same size as the vertex index list. If an empty array is input and normal vectors are provided, it is assumed that
    /// the normals match up one-to-one to each coordinate.
    /// Returns the new CustomGraphicsMesh object or null in the case of a failure.
    core::Ptr<CustomGraphicsMesh> addMesh(const core::Ptr<CustomGraphicsCoordinates>& coordinates, const std::vector<int>& coordinateIndexList, const std::vector<double>& normalVectors, const std::vector<int>& normalIndexList);

    /// Adds a new CustomGraphicsLines entity to this group.
    /// coordinates : The CustomGraphicsCoordinates object that defines the coordinates of the vertices of the lines.
    /// A CustomGraphicsCoordinates object can be created using the static create method of the CustomGraphicsCoordinates class.
    /// indexList : An array of integers that represent indices into the coordinates to define the order the coordinates are used to draw the lines.
    /// If an empty array is provided, the coordinates are used in the order they're provided in the provided CustomGraphicsCoordinates object.
    /// isLineStrip : A boolean indicating if a series of individual lines or a connected set of lines (a line strip) is to be drawn. If individual lines
    /// are drawn, (this argument is false), each pair of coordinates defines a single line. If a line strip is drawn, (this argument is true),
    /// the first pair of coordinates define the first line and the third coordinate defines a line that connects to the second coordinate.
    /// The fourth coordinate creates a line connecting to the third coordinate, and so on.
    /// lineStripLengths : If isLineStrip is true, this argument is used to define the number of coordinates to use in each line strip. It is an array of integers
    /// that defines the number of coordinates for each line strip. For example, if the array [4,10] is input, 4 coordinates are connected for
    /// the first line strip and 10 are used to create a second line strip. If an empty array is provided, a single line strip is created. If
    /// isLineStrip is False, this argument is ignored.
    /// Returns the new CustomGraphicsLines object or null in the case of a failure.
    core::Ptr<CustomGraphicsLines> addLines(const core::Ptr<CustomGraphicsCoordinates>& coordinates, const std::vector<int>& indexList, bool isLineStrip, const std::vector<int>& lineStripLengths = std::vector<int>());

    /// Adds a new CustomGraphicsCurve entity to this group. A CustomGraphicsCurve is a wireframe graphic
    /// that is based on any object derived from Curve3D (except InfiniteLine3D). This is useful when
    /// drawing curved geometry where the alternative is to stroke the smooth curve and draw it as a series
    /// of lines. Using this you can directly use the curve and Fusion will automatically take care of creating
    /// the correct display for the current level of detail.
    /// curve : The curve that defines the shape of the graphics entity. Any of the curve types derived from Curve3D
    /// are valid except for InfiniteLine3D.
    /// Returns the newly created CustomGraphicsCurve object or null in the case of failure.
    core::Ptr<CustomGraphicsCurve> addCurve(const core::Ptr<core::Curve3D>& curve);

    /// Adds a new CustomGraphicsPointSet entity to this group. This will be displayed as one or more points where
    /// all of the points will display using the same image.
    /// coordinates : The CustomGraphicsCoordinates object that defines the coordinates where the points will be displayed.
    /// A CustomGraphicsCoordinates object can be created using the static create method of the CustomGraphicsCoordinates class.
    /// indexList : An array of integers that represent indices into the coordinates to define which coordinates to use when drawing points.
    /// If an empty array is provided, a point is drawn for every coordinate.
    /// pointType : Specifies the type of point to display. Currently there are two choices; UserDefinedCustomGraphicsPointType and
    /// PointCloudCustomGraphicsPointType. When set to PointCloudCustomGraphicsPointType, each point displays as a single pixel and is
    /// the most efficient point display type for displaying sets that contain very large quantities of points. When
    /// set to UserDefinedCustomGraphicsPointType, you specify the image to display as the point. This can be any PNG image and is
    /// centered on the point.
    /// pointImage : If the pointType is PointCloudCustomGraphicsPointType this argument is ignored and can be an empty string. This argument
    /// must be specified if the pointType is UserDefinedCustomGraphicsPointType. This is the path to the PNG image file that will be
    /// displayed as the point. It can be either a full path to the file or a relative path that is respect to the .py, dll, or dylib
    /// file being run. There is no restriction on the size of the image, but generally very small images would be used for points.
    /// Returns the newly created CustomGraphicsPointSet object or null in the case of failure.
    core::Ptr<CustomGraphicsPointSet> addPointSet(const core::Ptr<CustomGraphicsCoordinates>& coordinates, const std::vector<int>& indexList, CustomGraphicsPointTypes pointType, const std::string& pointImage);

    /// Adds a new CustomGraphicsText entity to this group. This will be displayed as a single line of text.
    /// It is placed so that the upper-left corner is at the point defined and the text will be parallel
    /// to the X-Y plane of the world coordinate system and in the X direction. To change it's position relative
    /// to the input point you can change the horizontal and vertical justification on the returned CustomGrahicsText
    /// object. You can also reorient the text by changing the transform of the returned CustomGraphicsText object.
    /// formattedText : The text string to be displayed. Overall formatting can be defined using properties on the returned
    /// CustomGraphicsText object. Formatting overrides can be defined within the string using formatting codes.
    /// font : The name of the font to use when displaying the text.
    /// size : The size of the text in centimeters.
    /// transform : Transformation matrix that specifies the position and orientation of the text in model space. The origin of the text
    /// is the upper-left corner.
    /// Returns the newly created CustomGraphicsText object or null in the case of failure.
    core::Ptr<CustomGraphicsText> addText(const std::string& formattedText, const std::string& font, double size, const core::Ptr<core::Matrix3D>& transform);

    /// Adds a new CustomGraphicsBRepBody object to this group. This displays a real or transient BRepBody
    /// object as custom graphics. No relationship exists back to the original input body so if it is
    /// changed, the custom graphics will not change.
    /// 
    /// The body associated with the CustomGraphicsBRep body is a copy of the original input body. Equivalent
    /// Faces, Edges, and vertices can be found by using the indexes in the collection. For example if you have
    /// a face of the original body and find that it is at index 24 in the BRepFaces collection of that body,
    /// the equivalent face in the custom graphics body will also be at index 24. This works as long as the original
    /// body is not modified in any way.
    /// body : The real or transient BRepBody object to draw using custom graphics.
    /// Returns the newly created CustomGraphicsBRepBody object or null in the case of failure.
    core::Ptr<CustomGraphicsBRepBody> addBRepBody(const core::Ptr<BRepBody>& body);

    /// Defines if the child custom graphic entities are selectable or if the entire group is selected in the UI. By default this is true.
    /// If false, the isSelectable property defines if this group is selectable. If true, the isSelectable property of each child entity defines if it is selectable.
    bool isChildrenSelectable() const;
    bool isChildrenSelectable(bool value);

    typedef CustomGraphicsEntity iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CUSTOMGRAPHICSGROUP_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSGROUP_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSGROUP_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSGROUP_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CustomGraphicsEntity* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual CustomGraphicsGroup* addGroup_raw() = 0;
    virtual CustomGraphicsMesh* addMesh_raw(CustomGraphicsCoordinates* coordinates, const int* coordinateIndexList, size_t coordinateIndexList_size, const double* normalVectors, size_t normalVectors_size, const int* normalIndexList, size_t normalIndexList_size) = 0;
    virtual CustomGraphicsLines* addLines_raw(CustomGraphicsCoordinates* coordinates, const int* indexList, size_t indexList_size, bool isLineStrip, const int* lineStripLengths, size_t lineStripLengths_size) = 0;
    virtual CustomGraphicsCurve* addCurve_raw(core::Curve3D* curve) = 0;
    virtual CustomGraphicsPointSet* addPointSet_raw(CustomGraphicsCoordinates* coordinates, const int* indexList, size_t indexList_size, CustomGraphicsPointTypes pointType, const char* pointImage) = 0;
    virtual CustomGraphicsText* addText_raw(const char* formattedText, const char* font, double size, core::Matrix3D* transform) = 0;
    virtual CustomGraphicsBRepBody* addBRepBody_raw(BRepBody* body) = 0;
    virtual bool isChildrenSelectable_raw() const = 0;
    virtual bool isChildrenSelectable_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<CustomGraphicsEntity> CustomGraphicsGroup::item(size_t index) const
{
    core::Ptr<CustomGraphicsEntity> res = item_raw(index);
    return res;
}

inline size_t CustomGraphicsGroup::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<CustomGraphicsGroup> CustomGraphicsGroup::addGroup()
{
    core::Ptr<CustomGraphicsGroup> res = addGroup_raw();
    return res;
}

inline core::Ptr<CustomGraphicsMesh> CustomGraphicsGroup::addMesh(const core::Ptr<CustomGraphicsCoordinates>& coordinates, const std::vector<int>& coordinateIndexList, const std::vector<double>& normalVectors, const std::vector<int>& normalIndexList)
{
    core::Ptr<CustomGraphicsMesh> res = addMesh_raw(coordinates.get(), coordinateIndexList.empty() ? nullptr : &coordinateIndexList[0], coordinateIndexList.size(), normalVectors.empty() ? nullptr : &normalVectors[0], normalVectors.size(), normalIndexList.empty() ? nullptr : &normalIndexList[0], normalIndexList.size());
    return res;
}

inline core::Ptr<CustomGraphicsLines> CustomGraphicsGroup::addLines(const core::Ptr<CustomGraphicsCoordinates>& coordinates, const std::vector<int>& indexList, bool isLineStrip, const std::vector<int>& lineStripLengths)
{
    core::Ptr<CustomGraphicsLines> res = addLines_raw(coordinates.get(), indexList.empty() ? nullptr : &indexList[0], indexList.size(), isLineStrip, lineStripLengths.empty() ? nullptr : &lineStripLengths[0], lineStripLengths.size());
    return res;
}

inline core::Ptr<CustomGraphicsCurve> CustomGraphicsGroup::addCurve(const core::Ptr<core::Curve3D>& curve)
{
    core::Ptr<CustomGraphicsCurve> res = addCurve_raw(curve.get());
    return res;
}

inline core::Ptr<CustomGraphicsPointSet> CustomGraphicsGroup::addPointSet(const core::Ptr<CustomGraphicsCoordinates>& coordinates, const std::vector<int>& indexList, CustomGraphicsPointTypes pointType, const std::string& pointImage)
{
    core::Ptr<CustomGraphicsPointSet> res = addPointSet_raw(coordinates.get(), indexList.empty() ? nullptr : &indexList[0], indexList.size(), pointType, pointImage.c_str());
    return res;
}

inline core::Ptr<CustomGraphicsText> CustomGraphicsGroup::addText(const std::string& formattedText, const std::string& font, double size, const core::Ptr<core::Matrix3D>& transform)
{
    core::Ptr<CustomGraphicsText> res = addText_raw(formattedText.c_str(), font.c_str(), size, transform.get());
    return res;
}

inline core::Ptr<CustomGraphicsBRepBody> CustomGraphicsGroup::addBRepBody(const core::Ptr<BRepBody>& body)
{
    core::Ptr<CustomGraphicsBRepBody> res = addBRepBody_raw(body.get());
    return res;
}

inline bool CustomGraphicsGroup::isChildrenSelectable() const
{
    bool res = isChildrenSelectable_raw();
    return res;
}

inline bool CustomGraphicsGroup::isChildrenSelectable(bool value)
{
    return isChildrenSelectable_raw(value);
}

template <class OutputIterator> inline void CustomGraphicsGroup::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSGROUP_API