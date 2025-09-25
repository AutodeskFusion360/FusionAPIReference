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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CANVAS_CPP__
# define ADSK_FUSION_CANVAS_API XI_EXPORT
# else
# define ADSK_FUSION_CANVAS_API
# endif
#else
# define ADSK_FUSION_CANVAS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix2D;
    class Plane;
}}
namespace adsk { namespace fusion {
    class Occurrence;
    class TimelineObject;
}}

namespace adsk { namespace fusion {

/// Represents a Canvas within a component.
class Canvas : public core::Base {
public:

    /// Gets and sets the name of the canvas. This is the name seen in the browser and timeline.
    std::string name() const;
    bool name(const std::string& value);

    /// Deletes the canvas from the component.
    bool deleteMe();

    /// Gets and sets the plane the canvas is associated with. This can be either a planar Face
    /// or a construction plane. In a direct modeling design or the canvas is being created in
    /// a base feature, this can be a Plane object.
    core::Ptr<core::Base> planarEntity() const;
    bool planarEntity(const core::Ptr<core::Base>& value);

    /// Gets and sets the opacity of the canvas where 0 is completely
    /// transparent and 100 is completely opaque. Setting this property
    /// to a value outside the range of 0-100 will result in the value
    /// being set to the closest valid value.
    int opacity() const;
    bool opacity(int value);

    /// Controls if the image is visible through the model or not.
    bool isDisplayedThrough() const;
    bool isDisplayedThrough(bool value);

    /// Controls if the canvas is selectable or not within the graphics window.
    bool isSelectable() const;
    bool isSelectable(bool value);

    /// Controls if the canvas will be rendered when ray tracing within the Render workspace.
    bool isRenderable() const;
    bool isRenderable(bool value);

    /// Returns if the canvas is currently visible in the graphics window. The isLightBulbOn
    /// property of the canvas controls if the canvas should be displayed or not, but even
    /// when true, the canvas may not be visible because the occurrence that references the
    /// component may not be visible. It's also possible to turn off the visibility of all
    /// canvases for a component. This property takes all of that into account when reporting
    /// if the canvas is visible or not.
    bool isVisible() const;

    /// Gets and sets the filename of the image used for the canvas. When getting this property,
    /// the filename returned is the file that was used when the canvas was initially created.
    /// it's possible the file may no longer exist.
    /// 
    /// When setting this property, it is the full filename to the image to use for the canvas.
    /// PNG, JPEG, and TIFF files are supported.
    std::string imageFilename() const;
    bool imageFilename(const std::string& value);

    /// Saves the image associated with the canvas to the specified file. This is useful in
    /// cases where the original image file is no longer available but you need the image
    /// for some other purpose.
    /// filename : The full filename of the image to save, including the file extension, which controls
    /// the format of the image file. If a file extension other than png, jpg, or tiff is
    /// specified, a png extension will be added to the filename by default.
    /// 
    /// This method will fail if a file with the specified filename already exists.
    /// If you want to overwrite the file, you'll need to delete it first before
    /// calling this method.
    /// Returns true if writing the file was successful.
    bool saveImage(const std::string& filename);

    /// Returns a Plane object that represents the position and orientation of the canvas in model space.
    core::Ptr<core::Plane> plane() const;

    /// Gets and sets the transform of the canvas. This allows you to control the position, rotation,
    /// scaling, and flipping. The X and Y axes defined by the matrix and must be perpendicular to one another.
    /// 
    /// This is a 3x3 matrix where the third column controls the position of the canvas and
    /// defines the position using 2D coordinates in the model space.
    core::Ptr<core::Matrix2D> transform() const;
    bool transform(const core::Ptr<core::Matrix2D>& value);

    /// Flips the image along the horizontal axis. This is a convenience method that
    /// flips the direction of the X axis of the transform.
    /// Returns true if the flip was successful.
    bool flipHorizontal();

    /// Flips the image along the vertical axis. This is a convenience method that
    /// flips the direction of the Y axis of the transform.
    /// Returns true if the flip was successful.
    bool flipVertical();

    /// Gets and sets if the light bulb of this canvas as displayed in the browser is on or off.
    /// 
    /// A canvas will only be visible if the light bulb is switched on. However, the light bulb
    /// can be on and the canvas still invisible if the visibility of a higher level occurrence
    /// has its light bulb off or if the light bulb for Canvases folder is off to turn off all
    /// canvases in a component.
    bool isLightBulbOn() const;
    bool isLightBulbOn(bool value);

    /// Returns a token for the Canvas object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same canvas.
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
    core::Ptr<Canvas> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<Canvas> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the timeline object associated with the creation of this canvas.
    core::Ptr<TimelineObject> timelineObject() const;

    ADSK_FUSION_CANVAS_API static const char* classType();
    ADSK_FUSION_CANVAS_API const char* objectType() const override;
    ADSK_FUSION_CANVAS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CANVAS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual bool deleteMe_raw() = 0;
    virtual core::Base* planarEntity_raw() const = 0;
    virtual bool planarEntity_raw(core::Base* value) = 0;
    virtual int opacity_raw() const = 0;
    virtual bool opacity_raw(int value) = 0;
    virtual bool isDisplayedThrough_raw() const = 0;
    virtual bool isDisplayedThrough_raw(bool value) = 0;
    virtual bool isSelectable_raw() const = 0;
    virtual bool isSelectable_raw(bool value) = 0;
    virtual bool isRenderable_raw() const = 0;
    virtual bool isRenderable_raw(bool value) = 0;
    virtual bool isVisible_raw() const = 0;
    virtual char* imageFilename_raw() const = 0;
    virtual bool imageFilename_raw(const char* value) = 0;
    virtual bool saveImage_raw(const char* filename) = 0;
    virtual core::Plane* plane_raw() const = 0;
    virtual core::Matrix2D* transform_raw() const = 0;
    virtual bool transform_raw(core::Matrix2D* value) = 0;
    virtual bool flipHorizontal_raw() = 0;
    virtual bool flipVertical_raw() = 0;
    virtual bool isLightBulbOn_raw() const = 0;
    virtual bool isLightBulbOn_raw(bool value) = 0;
    virtual char* entityToken_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual Canvas* nativeObject_raw() const = 0;
    virtual Canvas* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual TimelineObject* timelineObject_raw() const = 0;
};

// Inline wrappers

inline std::string Canvas::name() const
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

inline bool Canvas::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline bool Canvas::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<core::Base> Canvas::planarEntity() const
{
    core::Ptr<core::Base> res = planarEntity_raw();
    return res;
}

inline bool Canvas::planarEntity(const core::Ptr<core::Base>& value)
{
    return planarEntity_raw(value.get());
}

inline int Canvas::opacity() const
{
    int res = opacity_raw();
    return res;
}

inline bool Canvas::opacity(int value)
{
    return opacity_raw(value);
}

inline bool Canvas::isDisplayedThrough() const
{
    bool res = isDisplayedThrough_raw();
    return res;
}

inline bool Canvas::isDisplayedThrough(bool value)
{
    return isDisplayedThrough_raw(value);
}

inline bool Canvas::isSelectable() const
{
    bool res = isSelectable_raw();
    return res;
}

inline bool Canvas::isSelectable(bool value)
{
    return isSelectable_raw(value);
}

inline bool Canvas::isRenderable() const
{
    bool res = isRenderable_raw();
    return res;
}

inline bool Canvas::isRenderable(bool value)
{
    return isRenderable_raw(value);
}

inline bool Canvas::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline std::string Canvas::imageFilename() const
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

inline bool Canvas::imageFilename(const std::string& value)
{
    return imageFilename_raw(value.c_str());
}

inline bool Canvas::saveImage(const std::string& filename)
{
    bool res = saveImage_raw(filename.c_str());
    return res;
}

inline core::Ptr<core::Plane> Canvas::plane() const
{
    core::Ptr<core::Plane> res = plane_raw();
    return res;
}

inline core::Ptr<core::Matrix2D> Canvas::transform() const
{
    core::Ptr<core::Matrix2D> res = transform_raw();
    return res;
}

inline bool Canvas::transform(const core::Ptr<core::Matrix2D>& value)
{
    return transform_raw(value.get());
}

inline bool Canvas::flipHorizontal()
{
    bool res = flipHorizontal_raw();
    return res;
}

inline bool Canvas::flipVertical()
{
    bool res = flipVertical_raw();
    return res;
}

inline bool Canvas::isLightBulbOn() const
{
    bool res = isLightBulbOn_raw();
    return res;
}

inline bool Canvas::isLightBulbOn(bool value)
{
    return isLightBulbOn_raw(value);
}

inline std::string Canvas::entityToken() const
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

inline core::Ptr<Occurrence> Canvas::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<Canvas> Canvas::nativeObject() const
{
    core::Ptr<Canvas> res = nativeObject_raw();
    return res;
}

inline core::Ptr<Canvas> Canvas::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<Canvas> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<TimelineObject> Canvas::timelineObject() const
{
    core::Ptr<TimelineObject> res = timelineObject_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CANVAS_API