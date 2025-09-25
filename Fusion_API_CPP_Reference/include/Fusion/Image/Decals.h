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
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_DECALS_CPP__
# define ADSK_FUSION_DECALS_API XI_EXPORT
# else
# define ADSK_FUSION_DECALS_API
# endif
#else
# define ADSK_FUSION_DECALS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}
namespace adsk { namespace fusion {
    class BRepFace;
    class Decal;
    class DecalInput;
}}

namespace adsk { namespace fusion {

/// Provides access to the Decals in a component and provides the functionality
/// to add new Decals.
class Decals : public core::Base {
public:

    /// Returns the specified Decal object using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Decal> item(size_t index) const;

    /// Returns the specified decal using the name of the decal.
    /// name : The name of the decal as seen in the browser and timeline.
    /// Returns the specified Decal object, if it exists. Otherwise it returns null.
    core::Ptr<Decal> itemByName(const std::string& name) const;

    /// Returns the number of decals in the component.
    size_t count() const;

    /// Creates a new decal. Use the createInput method to first create an input object and
    /// set the available options. Then, pass that input object to the add method to create the decal.
    /// input : The DecalInput object that defines the required information needed to create a new decal.
    /// 
    /// A DecalInput object is the logical equivalent to the Decal command dialog by providing access to
    /// all the decal options. Passing in the DecalInput object to the add method is the equivalent of
    /// clicking the OK button on the dialog to create the decal.
    /// Returns the newly created Decal object.
    core::Ptr<Decal> add(const core::Ptr<DecalInput>& input);

    /// Creates a new DecalInput object. A DecalInput object is the logical equivalent to the Decal
    /// command dialog by providing access to all the decal options. Passing in the DecalInput object
    /// to the add method is the equivalent of clicking the OK button on the dialog to create the decal.
    /// imageFilename : The full filename to the image to use for the decal. PNG, JPEG, and TIFF files are supported.
    /// faces : Specifies the faces the decal will be associated with. Typically, this will be an array containing
    /// a single face. If the isChainFaces property on the input is true, only a single face is needed,
    /// and the rest of the faces in the body will automatically be used. If the isChainFaces property is
    /// false, this defines a subset of faces in the body to which the decal will be applied.
    /// 
    /// If multiple faces are provided, the first face in the array is used to position and orient the
    /// decal. The position and orientation are relative to the first face. Any additional faces should
    /// connect directly or indirectly through other connected faces to the first face.
    /// point : Specifies a point on the first face that defines the center position of the decal.
    /// Returns a DecalInput object or null in the case of failure.
    core::Ptr<DecalInput> createInput(const std::string& imageFilename, const std::vector<core::Ptr<BRepFace>>& faces, const core::Ptr<core::Point3D>& point);

    typedef Decal iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_DECALS_API static const char* classType();
    ADSK_FUSION_DECALS_API const char* objectType() const override;
    ADSK_FUSION_DECALS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DECALS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Decal* item_raw(size_t index) const = 0;
    virtual Decal* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Decal* add_raw(DecalInput* input) = 0;
    virtual DecalInput* createInput_raw(const char* imageFilename, BRepFace** faces, size_t faces_size, core::Point3D* point) = 0;
};

// Inline wrappers

inline core::Ptr<Decal> Decals::item(size_t index) const
{
    core::Ptr<Decal> res = item_raw(index);
    return res;
}

inline core::Ptr<Decal> Decals::itemByName(const std::string& name) const
{
    core::Ptr<Decal> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t Decals::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<Decal> Decals::add(const core::Ptr<DecalInput>& input)
{
    core::Ptr<Decal> res = add_raw(input.get());
    return res;
}

inline core::Ptr<DecalInput> Decals::createInput(const std::string& imageFilename, const std::vector<core::Ptr<BRepFace>>& faces, const core::Ptr<core::Point3D>& point)
{
    BRepFace** faces_ = new BRepFace*[faces.size()];
    for(size_t i=0; i<faces.size(); ++i)
        faces_[i] = faces[i].get();

    core::Ptr<DecalInput> res = createInput_raw(imageFilename.c_str(), faces_, faces.size(), point.get());
    delete[] faces_;
    return res;
}

template <class OutputIterator> inline void Decals::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DECALS_API