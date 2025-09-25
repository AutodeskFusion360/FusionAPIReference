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
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSPOINTSET_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSPOINTSET_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSPOINTSET_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSPOINTSET_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class CustomGraphicsCoordinates;
}}

namespace adsk { namespace fusion {

/// Represents a set of one or more custom graphics points all of the same style.
class CustomGraphicsPointSet : public CustomGraphicsEntity {
public:

    /// Gets and sets the coordinates used to define the position of the custom graphics points.
    /// If no indexList is specified, every coordinate will be drawn using a custom graphics point,
    core::Ptr<CustomGraphicsCoordinates> coordinates() const;
    bool coordinates(const core::Ptr<CustomGraphicsCoordinates>& value);

    /// An list of indices that specify which coordinates from the coordinate list to draw points for.
    /// If this is an empty array, then all of the coordinates are used.
    std::vector<int> indexList() const;
    bool indexList(const std::vector<int>& value);

    /// Gets and sets the image that will be used to display the point if the point type
    /// is a custom image. The image will always be billboarded. The file should be
    /// a PNG image and can use transparency. The filename can be a full path or a
    /// relative path that is relative to your runtime file. Setting this will automatically
    /// set the pointType to UserDefinedCustomGraphicsPointType. This property can also
    /// return an empty string in the case where a user defined image point is not being used.
    std::string pointImage() const;
    bool pointImage(const std::string& value);

    /// Specifies which of the predefined point images to use. Attempting to set this property
    /// to UserDefinedCustomGraphicsPointType will fail. To change to a user defined point type
    /// you must set use the pointImage property to specify the image to use and this will have
    /// the side-effect of changing the value of this property to UserDefinedCustomGraphicsPointType.
    CustomGraphicsPointTypes pointType() const;
    bool pointType(CustomGraphicsPointTypes value);

    ADSK_FUSION_CUSTOMGRAPHICSPOINTSET_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSPOINTSET_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSPOINTSET_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSPOINTSET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CustomGraphicsCoordinates* coordinates_raw() const = 0;
    virtual bool coordinates_raw(CustomGraphicsCoordinates* value) = 0;
    virtual int* indexList_raw(size_t& return_size) const = 0;
    virtual bool indexList_raw(const int* value, size_t value_size) = 0;
    virtual char* pointImage_raw() const = 0;
    virtual bool pointImage_raw(const char* value) = 0;
    virtual CustomGraphicsPointTypes pointType_raw() const = 0;
    virtual bool pointType_raw(CustomGraphicsPointTypes value) = 0;
};

// Inline wrappers

inline core::Ptr<CustomGraphicsCoordinates> CustomGraphicsPointSet::coordinates() const
{
    core::Ptr<CustomGraphicsCoordinates> res = coordinates_raw();
    return res;
}

inline bool CustomGraphicsPointSet::coordinates(const core::Ptr<CustomGraphicsCoordinates>& value)
{
    return coordinates_raw(value.get());
}

inline std::vector<int> CustomGraphicsPointSet::indexList() const
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

inline bool CustomGraphicsPointSet::indexList(const std::vector<int>& value)
{
    return indexList_raw(value.empty() ? nullptr : &value[0], value.size());
}

inline std::string CustomGraphicsPointSet::pointImage() const
{
    std::string res;

    char* p= pointImage_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomGraphicsPointSet::pointImage(const std::string& value)
{
    return pointImage_raw(value.c_str());
}

inline CustomGraphicsPointTypes CustomGraphicsPointSet::pointType() const
{
    CustomGraphicsPointTypes res = pointType_raw();
    return res;
}

inline bool CustomGraphicsPointSet::pointType(CustomGraphicsPointTypes value)
{
    return pointType_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSPOINTSET_API