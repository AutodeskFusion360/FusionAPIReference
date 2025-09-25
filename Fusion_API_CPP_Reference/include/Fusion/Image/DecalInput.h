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
# ifdef __COMPILING_ADSK_FUSION_DECALINPUT_CPP__
# define ADSK_FUSION_DECALINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_DECALINPUT_API
# endif
#else
# define ADSK_FUSION_DECALINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepFace;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// The DecalInput object is used to define the various options when creating a new decal. It's created
/// using the Decals.createInput method and is used by the Decals.add method to create a Decal.
class DecalInput : public core::Base {
public:

    /// Gets and sets the faces the decal will be associated with. Typically, this will be an array containing
    /// a single face and the isChainFaces property on the input will be true. The position and orientation of
    /// the decal is based on this face and the decal can wrap onto other faces in the body.
    /// 
    /// If the isChainFace property is false, the decal will only be applied to the provided faces where the
    /// first face is used to calculate the position and orientation of the decal.
    std::vector<core::Ptr<BRepFace>> faces() const;
    bool faces(const std::vector<core::Ptr<BRepFace>>& value);

    /// Gets and sets the opacity of the decal where 0 is completely transparent and 1.0 is completely
    /// opaque. Setting this property to a value outside the range of 0-1 will result in the value
    /// being set to the closest valid value.
    /// 
    /// Defaults to 1.0 when the input is created.
    double opacity() const;
    bool opacity(double value);

    /// Controls if the decal will wrap onto the faces that connect to the face the decal is placed on. When this
    /// is true, the list of faces should contain only one face.
    /// 
    /// Defaults to true when the input is created.
    bool isChainFaces() const;
    bool isChainFaces(bool value);

    /// Gets and sets the filename of the image used for the decal.
    /// 
    /// When setting this property, it is the full filename to the image to use for the decal.
    /// PNG, JPG, and TIFF files are supported.
    std::string imageFilename() const;
    bool imageFilename(const std::string& value);

    /// Gets and sets the transform of the decal. This controls the position, rotation,
    /// scaling, and flipping. This is done by providing a 3D matrix that defines a 3D coordinate system
    /// in model space. The origin of the matrix defines the center of the decal and must lie somewhere
    /// on the first face. The Z-axis of the matrix should be the same as the normal of the face at the
    /// origin. The X and Y axes define the orientation of the decal and must be both perpendicular to
    /// the Z and each other. Reversing the direction of the X or Y axis will flip the decal in that
    /// direction. The magnitude of the X and Y axes controls the scale, and the scale can be non-uniform,
    /// meaning the length of the X and Y vectors do not need to be the same.
    core::Ptr<core::Matrix3D> transform() const;
    bool transform(const core::Ptr<core::Matrix3D>& value);

    /// When creating a feature that is owned by a base feature, set this property to the
    /// base feature you want to associate the new feature with. By default, this is null,
    /// meaning it will not be associated with a base feature.
    /// 
    /// Because of a current limitation, if you want to create a feature associated with a base
    /// feature, you must set this property AND call the startEdit method of the base feature,
    /// create the feature, and then call the finishEdit method of the base feature. The base
    /// feature must be in an "edit" state to be able to add any additional items to it.
    core::Ptr<BaseFeature> targetBaseFeature() const;
    bool targetBaseFeature(const core::Ptr<BaseFeature>& value);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// In order for geometry to be transformed correctly, an Occurrence for creation needs to be
    /// specified when the decal is created based on geometry in another component AND (the decal) is
    /// not in the root component. The CreationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    ADSK_FUSION_DECALINPUT_API static const char* classType();
    ADSK_FUSION_DECALINPUT_API const char* objectType() const override;
    ADSK_FUSION_DECALINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DECALINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFace** faces_raw(size_t& return_size) const = 0;
    virtual bool faces_raw(BRepFace** value, size_t value_size) = 0;
    virtual double opacity_raw() const = 0;
    virtual bool opacity_raw(double value) = 0;
    virtual bool isChainFaces_raw() const = 0;
    virtual bool isChainFaces_raw(bool value) = 0;
    virtual char* imageFilename_raw() const = 0;
    virtual bool imageFilename_raw(const char* value) = 0;
    virtual core::Matrix3D* transform_raw() const = 0;
    virtual bool transform_raw(core::Matrix3D* value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<BRepFace>> DecalInput::faces() const
{
    std::vector<core::Ptr<BRepFace>> res;
    size_t s;

    BRepFace** p= faces_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool DecalInput::faces(const std::vector<core::Ptr<BRepFace>>& value)
{
    BRepFace** value_ = new BRepFace*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = faces_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline double DecalInput::opacity() const
{
    double res = opacity_raw();
    return res;
}

inline bool DecalInput::opacity(double value)
{
    return opacity_raw(value);
}

inline bool DecalInput::isChainFaces() const
{
    bool res = isChainFaces_raw();
    return res;
}

inline bool DecalInput::isChainFaces(bool value)
{
    return isChainFaces_raw(value);
}

inline std::string DecalInput::imageFilename() const
{
    std::string res;

    char* p= imageFilename_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool DecalInput::imageFilename(const std::string& value)
{
    return imageFilename_raw(value.c_str());
}

inline core::Ptr<core::Matrix3D> DecalInput::transform() const
{
    core::Ptr<core::Matrix3D> res = transform_raw();
    return res;
}

inline bool DecalInput::transform(const core::Ptr<core::Matrix3D>& value)
{
    return transform_raw(value.get());
}

inline core::Ptr<BaseFeature> DecalInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool DecalInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline core::Ptr<Occurrence> DecalInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool DecalInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DECALINPUT_API