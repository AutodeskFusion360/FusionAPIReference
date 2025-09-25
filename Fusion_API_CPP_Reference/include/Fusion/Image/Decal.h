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
# ifdef __COMPILING_ADSK_FUSION_DECAL_CPP__
# define ADSK_FUSION_DECAL_API XI_EXPORT
# else
# define ADSK_FUSION_DECAL_API
# endif
#else
# define ADSK_FUSION_DECAL_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
}}
namespace adsk { namespace fusion {
    class BRepFace;
    class Occurrence;
    class TimelineObject;
}}

namespace adsk { namespace fusion {

/// Represents a Decal within a component.
class Decal : public core::Base {
public:

    /// Gets and sets the name of the decal. This is the name seen in the browser and timeline.
    std::string name() const;
    bool name(const std::string& value);

    /// Deletes the decal from the component.
    bool deleteMe();

    /// Gets the faces the decal is associated with. Typically, this is an array containing a single
    /// face. If the isChainFaces property is true, this will return the primary
    /// face. If the isChainFaces property is false, the decal is limited to the faces in this
    /// list.
    /// 
    /// If multiple faces have been provided, the first face in the list is the
    /// primary face, which is used to position and orient the decal.
    /// 
    /// To set the faces, use the redefine method.
    std::vector<core::Ptr<BRepFace>> faces() const;

    /// Gets and sets the opacity of the decal where 0 is completely transparent and 1.0 is completely
    /// opaque. Setting this property to a value outside the range of 0-1 will result in the value
    /// being set to the closest valid value.
    /// 
    /// Defaults to 1.0 when the input is created.
    double opacity() const;
    bool opacity(double value);

    /// Returns if the decal is limited to a specified set of faces or wraps onto all faces in the body. If this
    /// property is True, a single face has been specified and the decal can wrap onto other faces of the body.
    /// If False, the decal is limited to the set of specified faces.
    /// 
    /// To change this setting, use the redefine method.
    bool isChainFaces() const;

    /// Returns if the decal is currently visible in the graphics window. The isLightBulbOn
    /// property of the decal controls if the decal should be displayed or not, but even
    /// when true, the decal may not be visible because the occurrence that references the
    /// component may not be visible. It's also possible to turn off the visibility of all the
    /// decals in a component. This property takes all of that into account when reporting
    /// if the decal is visible or not.
    bool isVisible() const;

    /// Gets and sets the filename of the image used for the decal. When getting this property,
    /// the filename returned is the file that was used when the decal was initially created.
    /// it's possible the file may no longer exist.
    /// 
    /// When setting this property, it is the full filename to the image to use for the decal.
    /// PNG, JPEG, and TIFF files are supported.
    std::string imageFilename() const;
    bool imageFilename(const std::string& value);

    /// Saves the image associated with the decal to the specified file. This is useful in
    /// cases where the original image file is no longer available but you need the image
    /// for some other purpose.
    /// filename : The full filename of the image to save, including the extension of the file, which
    /// controls what format the image file will be. If file extension is other than png, jpg
    /// or tiff, then by default png extension will be added to the filename.
    /// This method will fail if a file with the specified filename already exists.
    /// If you want to overwrite the file, you'll need to delete it first before
    /// calling this method.
    /// Returns true if writing the file was successful.
    bool saveImage(const std::string& filename);

    /// Gets the transform of the decal. The returned matrix defines the position, rotation,
    /// scaling, and flipping. This is done by providing a 3D matrix which defines a 3D coordinate system
    /// in model space. The origin of the matrix defines the center of the decal and must lie somewhere on
    /// the first face. The normal of the face defines the Z axis of the matrix and the X and Y axes
    /// define the orientation of the decal and must be both perpendicular to the Z axis and to each other.
    /// Reversing the direction of the X or Y axis will flip the decal in that direction. The magnitude
    /// of the X and Y axes controls the scale and the scale can be non-uniform, meaning the length of
    /// the X and Y vectors do not need to be the same.
    /// 
    /// To set the transform, use the redefine method.
    core::Ptr<core::Matrix3D> transform() const;

    /// Redefines the position, orientation, and how the decal is applied to the body.
    /// 
    /// To call this method, you need to position the timeline marker to immediately before this decal.
    /// This can be accomplished using the following code: thisDecal.timelineObject.rollTo(True)
    /// position : Defines the position, rotation, scaling, and flipping of the decal. The input 3D matrix defines a
    /// 3D coordinate system in model space. The origin of the matrix defines the center of the decal and must
    /// lie somewhere on the first face. The Z-axis of the matrix should be the same as the normal of the face at the
    /// origin. The X and Y axes define the orientation of the decal and must be both perpendicular to
    /// the Z axis and each other. Reversing the direction of the X or Y axis will flip the decal in that
    /// direction. The magnitude of the X and Y axes controls the scale, and the scale can be non-uniform,
    /// meaning the length of the X and Y vectors do not need to be the same.
    /// faces : Defines the face where the decal will be placed. The first face in the array is the primary face, which
    /// is where the position point must be on. If the isChainFaces argument is true, only the primary face is needed
    /// and it will be used to define the position and orientation of the decal and the decal can wrap onto all the
    /// faces of the body. If the isChainFaces argument is false, the decal can only be applied to the specified
    /// faces with the first face in the array being used as the primary face.
    /// isChainFaces : If true, only one face is needed and the decal wraps onto all the faces of the body.
    /// If false, the decal can only be applied to the specified faces with the first face being used to calculate
    /// the position and orientation.
    bool redefine(const core::Ptr<core::Matrix3D>& position, const std::vector<core::Ptr<BRepFace>>& faces, bool isChainFaces);

    /// Gets and sets if the light bulb of this decal as displayed in the browser is on or off.
    /// 
    /// A decal will only be visible if the light bulb is switched on. However, the light bulb
    /// can be on and the decal still invisible if the visibility of a higher level occurrence
    /// has its light bulb off or if the light bulb for the Decals folder is off to turn off all
    /// decals in a component.
    bool isLightBulbOn() const;
    bool isLightBulbOn(bool value);

    /// Returns a token for the Decal object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same Decal.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<Decal> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<Decal> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the timeline object associated with the creation of this decal.
    core::Ptr<TimelineObject> timelineObject() const;

    ADSK_FUSION_DECAL_API static const char* classType();
    ADSK_FUSION_DECAL_API const char* objectType() const override;
    ADSK_FUSION_DECAL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DECAL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual bool deleteMe_raw() = 0;
    virtual BRepFace** faces_raw(size_t& return_size) const = 0;
    virtual double opacity_raw() const = 0;
    virtual bool opacity_raw(double value) = 0;
    virtual bool isChainFaces_raw() const = 0;
    virtual bool isVisible_raw() const = 0;
    virtual char* imageFilename_raw() const = 0;
    virtual bool imageFilename_raw(const char* value) = 0;
    virtual bool saveImage_raw(const char* filename) = 0;
    virtual core::Matrix3D* transform_raw() const = 0;
    virtual bool redefine_raw(core::Matrix3D* position, BRepFace** faces, size_t faces_size, bool isChainFaces) = 0;
    virtual bool isLightBulbOn_raw() const = 0;
    virtual bool isLightBulbOn_raw(bool value) = 0;
    virtual char* entityToken_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual Decal* nativeObject_raw() const = 0;
    virtual Decal* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual TimelineObject* timelineObject_raw() const = 0;
};

// Inline wrappers

inline std::string Decal::name() const
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

inline bool Decal::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline bool Decal::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline std::vector<core::Ptr<BRepFace>> Decal::faces() const
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

inline double Decal::opacity() const
{
    double res = opacity_raw();
    return res;
}

inline bool Decal::opacity(double value)
{
    return opacity_raw(value);
}

inline bool Decal::isChainFaces() const
{
    bool res = isChainFaces_raw();
    return res;
}

inline bool Decal::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline std::string Decal::imageFilename() const
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

inline bool Decal::imageFilename(const std::string& value)
{
    return imageFilename_raw(value.c_str());
}

inline bool Decal::saveImage(const std::string& filename)
{
    bool res = saveImage_raw(filename.c_str());
    return res;
}

inline core::Ptr<core::Matrix3D> Decal::transform() const
{
    core::Ptr<core::Matrix3D> res = transform_raw();
    return res;
}

inline bool Decal::redefine(const core::Ptr<core::Matrix3D>& position, const std::vector<core::Ptr<BRepFace>>& faces, bool isChainFaces)
{
    BRepFace** faces_ = new BRepFace*[faces.size()];
    for(size_t i=0; i<faces.size(); ++i)
        faces_[i] = faces[i].get();

    bool res = redefine_raw(position.get(), faces_, faces.size(), isChainFaces);
    delete[] faces_;
    return res;
}

inline bool Decal::isLightBulbOn() const
{
    bool res = isLightBulbOn_raw();
    return res;
}

inline bool Decal::isLightBulbOn(bool value)
{
    return isLightBulbOn_raw(value);
}

inline std::string Decal::entityToken() const
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

inline core::Ptr<Occurrence> Decal::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<Decal> Decal::nativeObject() const
{
    core::Ptr<Decal> res = nativeObject_raw();
    return res;
}

inline core::Ptr<Decal> Decal::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<Decal> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<TimelineObject> Decal::timelineObject() const
{
    core::Ptr<TimelineObject> res = timelineObject_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DECAL_API