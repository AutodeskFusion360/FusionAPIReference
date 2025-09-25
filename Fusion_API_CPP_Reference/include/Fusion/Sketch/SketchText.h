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
#include "SketchEntity.h"
#include "../FusionTypeDefs.h"
#include "../../Core/CoreTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SKETCHTEXT_CPP__
# define ADSK_FUSION_SKETCHTEXT_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHTEXT_API
# endif
#else
# define ADSK_FUSION_SKETCHTEXT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Curve3D;
    class Point3D;
}}
namespace adsk { namespace fusion {
    class Occurrence;
    class SketchCurve;
    class SketchLineList;
    class SketchTextDefinition;
}}

namespace adsk { namespace fusion {

/// Text in a sketch.
class SketchText : public SketchEntity {
public:

    /// Gets and sets the height of the text in centimeters.
    double height() const;
    bool height(double value);

    /// Gets and sets the text. This is a simple string and ignores any formatting defined within the text.
    std::string text() const;
    bool text(const std::string& value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the position of the text on the x-y plane of the sketch. The text must lie on the x-y plane so the Z component
    /// of the point is ignored and always treated as zero.
    core::Ptr<core::Point3D> position() const;
    bool position(const core::Ptr<core::Point3D>& value);

    /// Gets and sets the name of the font to use.
    std::string fontName() const;
    bool fontName(const std::string& value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the angle of the text relative to the x-axis of the x-y plane of the sketch.
    double angle() const;
    bool angle(double value);

    /// Gets and sets the text style to apply to the entire text. This is a bitwise enum so styles
    /// can be combined to apply multiple styles. For example you can apply bold and underline.
    TextStyles textStyle() const;
    bool textStyle(TextStyles value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the four sketch lines that define the boundary of the sketch text. By adding constraints to these lines
    /// you can associatively control the size, position and angle of the sketch text.
    core::Ptr<SketchLineList> boundaryLines() const;

    /// Explodes the SketchText into a set of curves. The original SketchText is deleted as a result of calling this.
    /// Returns an array of the sketch curves that were created that represent the text.
    std::vector<core::Ptr<SketchCurve>> explode();

    /// Returns the underlying curves that define the outline of the text. Calling this does not affect the
    /// SketchText and does not create any new sketch geometry but returns the geometrical definition of the
    /// sketch outline.
    /// Returns an array of transient curves that represent the outline of the text.
    std::vector<core::Ptr<core::Curve3D>> asCurves();

    /// Gets and sets if the text is flipped horizontally.
    bool isHorizontalFlip() const;
    bool isHorizontalFlip(bool value);

    /// Gets and sets if the text is flipped vertically.
    bool isVerticalFlip() const;
    bool isVerticalFlip(bool value);

    /// Sets this SketchTextInput to define text that fits along a specified path. Fitting on a path will
    /// space the characters so the text fits along the entire length of the path entity.
    /// path : The entity that defines the path for the text. This can be a SketchCurve or BRepEdge object.
    /// isAbovePath : Indicates if the text should be positioned above or below the path entity.
    /// Returns true if the setting the definition was successful.
    bool redefineAsFitOnPath(const core::Ptr<core::Base>& path, bool isAbovePath);

    /// Sets this SketchTextInput to define text that follows along a specified path.
    /// path : The entity that defines the path for the text. This can be a SketchCurve or BRepEdge object.
    /// isAbovePath : Indicates if the text should be positioned above or below the path entity.
    /// horizontalAlignment : Specifies the horizontal alignment of the text with respect to the path curve.
    /// characterSpacing : The spacing between the characters. This is an additional spacing to apply that is defined
    /// as a percentage of the default spacing. A spacing of 0 indicates no additional spacing.
    /// A spacing of 50 indicates to use the default plus 50% of the default.
    /// Returns true if the setting the definition was successful.
    bool redefineAsAlongPath(const core::Ptr<core::Base>& path, bool isAbovePath, core::HorizontalAlignments horizontalAlignment, double characterSpacing);

    /// Gets the definition that is currently used to specify how the sketch text is defined.
    core::Ptr<SketchTextDefinition> definition() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<SketchText> nativeObject() const;

    /// Creates a proxy object for the SketchText object that represents the SketchText
    /// object in the context of an assembly. The context is defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<SketchText> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_SKETCHTEXT_API static const char* classType();
    ADSK_FUSION_SKETCHTEXT_API const char* objectType() const override;
    ADSK_FUSION_SKETCHTEXT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHTEXT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double height_raw() const = 0;
    virtual bool height_raw(double value) = 0;
    virtual char* text_raw() const = 0;
    virtual bool text_raw(const char* value) = 0;
    virtual core::Point3D* position_raw() const = 0;
    virtual bool position_raw(core::Point3D* value) = 0;
    virtual char* fontName_raw() const = 0;
    virtual bool fontName_raw(const char* value) = 0;
    virtual double angle_raw() const = 0;
    virtual bool angle_raw(double value) = 0;
    virtual TextStyles textStyle_raw() const = 0;
    virtual bool textStyle_raw(TextStyles value) = 0;
    virtual SketchLineList* boundaryLines_raw() const = 0;
    virtual SketchCurve** explode_raw(size_t& return_size) = 0;
    virtual core::Curve3D** asCurves_raw(size_t& return_size) = 0;
    virtual bool isHorizontalFlip_raw() const = 0;
    virtual bool isHorizontalFlip_raw(bool value) = 0;
    virtual bool isVerticalFlip_raw() const = 0;
    virtual bool isVerticalFlip_raw(bool value) = 0;
    virtual bool redefineAsFitOnPath_raw(core::Base* path, bool isAbovePath) = 0;
    virtual bool redefineAsAlongPath_raw(core::Base* path, bool isAbovePath, core::HorizontalAlignments horizontalAlignment, double characterSpacing) = 0;
    virtual SketchTextDefinition* definition_raw() const = 0;
    virtual SketchText* nativeObject_raw() const = 0;
    virtual SketchText* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline double SketchText::height() const
{
    double res = height_raw();
    return res;
}

inline bool SketchText::height(double value)
{
    return height_raw(value);
}

inline std::string SketchText::text() const
{
    std::string res;

    char* p= text_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool SketchText::text(const std::string& value)
{
    return text_raw(value.c_str());
}

inline core::Ptr<core::Point3D> SketchText::position() const
{
    core::Ptr<core::Point3D> res = position_raw();
    return res;
}

inline bool SketchText::position(const core::Ptr<core::Point3D>& value)
{
    return position_raw(value.get());
}

inline std::string SketchText::fontName() const
{
    std::string res;

    char* p= fontName_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool SketchText::fontName(const std::string& value)
{
    return fontName_raw(value.c_str());
}

inline double SketchText::angle() const
{
    double res = angle_raw();
    return res;
}

inline bool SketchText::angle(double value)
{
    return angle_raw(value);
}

inline TextStyles SketchText::textStyle() const
{
    TextStyles res = textStyle_raw();
    return res;
}

inline bool SketchText::textStyle(TextStyles value)
{
    return textStyle_raw(value);
}

inline core::Ptr<SketchLineList> SketchText::boundaryLines() const
{
    core::Ptr<SketchLineList> res = boundaryLines_raw();
    return res;
}

inline std::vector<core::Ptr<SketchCurve>> SketchText::explode()
{
    std::vector<core::Ptr<SketchCurve>> res;
    size_t s;

    SketchCurve** p= explode_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<core::Curve3D>> SketchText::asCurves()
{
    std::vector<core::Ptr<core::Curve3D>> res;
    size_t s;

    core::Curve3D** p= asCurves_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool SketchText::isHorizontalFlip() const
{
    bool res = isHorizontalFlip_raw();
    return res;
}

inline bool SketchText::isHorizontalFlip(bool value)
{
    return isHorizontalFlip_raw(value);
}

inline bool SketchText::isVerticalFlip() const
{
    bool res = isVerticalFlip_raw();
    return res;
}

inline bool SketchText::isVerticalFlip(bool value)
{
    return isVerticalFlip_raw(value);
}

inline bool SketchText::redefineAsFitOnPath(const core::Ptr<core::Base>& path, bool isAbovePath)
{
    bool res = redefineAsFitOnPath_raw(path.get(), isAbovePath);
    return res;
}

inline bool SketchText::redefineAsAlongPath(const core::Ptr<core::Base>& path, bool isAbovePath, core::HorizontalAlignments horizontalAlignment, double characterSpacing)
{
    bool res = redefineAsAlongPath_raw(path.get(), isAbovePath, horizontalAlignment, characterSpacing);
    return res;
}

inline core::Ptr<SketchTextDefinition> SketchText::definition() const
{
    core::Ptr<SketchTextDefinition> res = definition_raw();
    return res;
}

inline core::Ptr<SketchText> SketchText::nativeObject() const
{
    core::Ptr<SketchText> res = nativeObject_raw();
    return res;
}

inline core::Ptr<SketchText> SketchText::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<SketchText> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHTEXT_API