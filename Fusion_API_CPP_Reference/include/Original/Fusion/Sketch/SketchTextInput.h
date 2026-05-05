//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"
#include <API/XInterface/Public/Core/CoreTypeDefs.h>
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SKETCHTEXTINPUT_CPP__
# define ADSK_FUSION_SKETCHTEXTINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHTEXTINPUT_API
# endif
#else
# define ADSK_FUSION_SKETCHTEXTINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class SketchTextDefinition;
}}

namespace adsk { namespace fusion {

/// The SketchTextInput object is equivalent to the Sketch Text dialog in that it collects all of the input required
/// to create sketch text. Once the properties of the SketchTextInput object have been defined, use the add method
/// to create the sketch text. A SketchTextInput object is created by using the createInput of the SketchTexts object.
class SketchTextInput : public core::Base {
public:

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// This property has been retired and replaced by the height2 property.
    double height() const;
    bool height(double value);

    /// Gets and sets the displayed text. This represents the text that results from evaluating the input formatted text. For example,
    /// if the formatted text is "'Length: ' + lengthParam", this property will return "Length: 3.0 in".
    /// 
    /// Setting this property will overwrite any equation defined by the expression and replace it with simple text. Use the
    /// expression property to be able to define a full expression.
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
    /// can be combined to apply multiple styles. For example you can apply bold and italic.
    TextStyles textStyle() const;
    bool textStyle(TextStyles value);

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
    bool setAsFitOnPath(const core::Ptr<core::Base>& path, bool isAbovePath);

    /// Sets this SketchTextInput to define text that follows along a specified path.
    /// path : The entity that defines the path for the text. This can be a SketchCurve or BRepEdge object.
    /// isAbovePath : Indicates if the text should be positioned above or below the path entity.
    /// horizontalAlignment : Specifies the horizontal alignment of the text with respect to the path curve.
    /// characterSpacing : The percentage change in default spacing between characters.
    /// Returns true if the setting the definition was successful.
    bool setAsAlongPath(const core::Ptr<core::Base>& path, bool isAbovePath, core::HorizontalAlignments horizontalAlignment, double characterSpacing);

    /// Defines the first corner point of the rectangle that will contain the text.
    /// cornerPoint : Specifies the location of one of the corner points of the rectangle that will contain the text.
    /// This can be a Point3D object, with a Z component of zero, to define any arbitrary location on the X-Y
    /// plane of the sketch or it can be an existing SketchPoint that lies on the sketch X-Y plane.
    /// diagonalPoint : Specifies the location of the diagonal point of the rectangle that will contain the text. This point
    /// cannot be aligned vertically or horizontally to the corner point but be a diagonal point to define
    /// a rectangle. This can be a Point3D object, with a Z component of zero, to define any arbitrary location on the X-Y
    /// plane of the sketch or it can be an existing SketchPoint that lies on the sketch X-Y plane and the sketch point
    /// will become the opposing corner point.
    /// horizontalAlignment : Specifies the horizontal alignment of the text with respect to the text rectangle.
    /// verticalAlignment : Specifies the vertical alignment of the text with respect to the text rectangle.
    /// characterSpacing : The spacing between the characters. This is an additional spacing to apply that is defined
    /// as a percentage of the default spacing. A spacing of 0 indicates no additional spacing.
    /// A spacing of 50 indicates to use the default plus 50% of the default.
    /// Returns true if the setting the definition was successful.
    bool setAsMultiLine(const core::Ptr<core::Base>& cornerPoint, const core::Ptr<core::Base>& diagonalPoint, core::HorizontalAlignments horizontalAlignment, core::VerticalAlignments verticalAlignment, double characterSpacing);

    /// Returns the SketchTextDefinition object associated with this input. When the SketchTextInput is first created this
    /// property will return null. Once one of the "set" methods have been called, this will return the SketchTextDefinition
    /// of the appropriate type and can be used to make any additional changes to the text.
    core::Ptr<SketchTextDefinition> definition() const;

    /// Gets and sets the expression of the parameter that will be created when this SketchText is created. It can be a simple string
    /// or it can be an expression that combines text with parameter values. Simple text must be enclosed within single quotes,
    /// the same as it is required in the TEXT command dialog.
    /// 
    /// An example of a valid expression is: "'Length: ' + lengthParam" and will result in "Length: 3.0 mm". The expression
    /// result can be obtained by using the text property on the created SketchTextInput object.
    std::string expression() const;
    bool expression(const std::string& value);

    /// Gets and sets the ValueInput that defines the height of the text. This value is used to create a
    /// parameter that will control the height of the text. It can be a value where it defines the height
    /// of the text in centimeters, or it can be a string where it defines the equation of the parameter
    /// and must evaluate to a valid length.
    core::Ptr<core::ValueInput> height2() const;
    bool height2(const core::Ptr<core::ValueInput>& value);

    ADSK_FUSION_SKETCHTEXTINPUT_API static const char* classType();
    ADSK_FUSION_SKETCHTEXTINPUT_API const char* objectType() const override;
    ADSK_FUSION_SKETCHTEXTINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHTEXTINPUT_API static const char* interfaceId() { return classType(); }

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
    virtual bool isHorizontalFlip_raw() const = 0;
    virtual bool isHorizontalFlip_raw(bool value) = 0;
    virtual bool isVerticalFlip_raw() const = 0;
    virtual bool isVerticalFlip_raw(bool value) = 0;
    virtual bool setAsFitOnPath_raw(core::Base* path, bool isAbovePath) = 0;
    virtual bool setAsAlongPath_raw(core::Base* path, bool isAbovePath, core::HorizontalAlignments horizontalAlignment, double characterSpacing) = 0;
    virtual bool setAsMultiLine_raw(core::Base* cornerPoint, core::Base* diagonalPoint, core::HorizontalAlignments horizontalAlignment, core::VerticalAlignments verticalAlignment, double characterSpacing) = 0;
    virtual SketchTextDefinition* definition_raw() const = 0;
    virtual char* expression_raw() const = 0;
    virtual bool expression_raw(const char* value) = 0;
    virtual core::ValueInput* height2_raw() const = 0;
    virtual bool height2_raw(core::ValueInput* value) = 0;
};

// Inline wrappers

inline double SketchTextInput::height() const
{
    double res = height_raw();
    return res;
}

inline bool SketchTextInput::height(double value)
{
    return height_raw(value);
}

inline std::string SketchTextInput::text() const
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

inline bool SketchTextInput::text(const std::string& value)
{
    return text_raw(value.c_str());
}

inline core::Ptr<core::Point3D> SketchTextInput::position() const
{
    core::Ptr<core::Point3D> res = position_raw();
    return res;
}

inline bool SketchTextInput::position(const core::Ptr<core::Point3D>& value)
{
    return position_raw(value.get());
}

inline std::string SketchTextInput::fontName() const
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

inline bool SketchTextInput::fontName(const std::string& value)
{
    return fontName_raw(value.c_str());
}

inline double SketchTextInput::angle() const
{
    double res = angle_raw();
    return res;
}

inline bool SketchTextInput::angle(double value)
{
    return angle_raw(value);
}

inline TextStyles SketchTextInput::textStyle() const
{
    TextStyles res = textStyle_raw();
    return res;
}

inline bool SketchTextInput::textStyle(TextStyles value)
{
    return textStyle_raw(value);
}

inline bool SketchTextInput::isHorizontalFlip() const
{
    bool res = isHorizontalFlip_raw();
    return res;
}

inline bool SketchTextInput::isHorizontalFlip(bool value)
{
    return isHorizontalFlip_raw(value);
}

inline bool SketchTextInput::isVerticalFlip() const
{
    bool res = isVerticalFlip_raw();
    return res;
}

inline bool SketchTextInput::isVerticalFlip(bool value)
{
    return isVerticalFlip_raw(value);
}

inline bool SketchTextInput::setAsFitOnPath(const core::Ptr<core::Base>& path, bool isAbovePath)
{
    bool res = setAsFitOnPath_raw(path.get(), isAbovePath);
    return res;
}

inline bool SketchTextInput::setAsAlongPath(const core::Ptr<core::Base>& path, bool isAbovePath, core::HorizontalAlignments horizontalAlignment, double characterSpacing)
{
    bool res = setAsAlongPath_raw(path.get(), isAbovePath, horizontalAlignment, characterSpacing);
    return res;
}

inline bool SketchTextInput::setAsMultiLine(const core::Ptr<core::Base>& cornerPoint, const core::Ptr<core::Base>& diagonalPoint, core::HorizontalAlignments horizontalAlignment, core::VerticalAlignments verticalAlignment, double characterSpacing)
{
    bool res = setAsMultiLine_raw(cornerPoint.get(), diagonalPoint.get(), horizontalAlignment, verticalAlignment, characterSpacing);
    return res;
}

inline core::Ptr<SketchTextDefinition> SketchTextInput::definition() const
{
    core::Ptr<SketchTextDefinition> res = definition_raw();
    return res;
}

inline std::string SketchTextInput::expression() const
{
    std::string res;

    char* p= expression_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool SketchTextInput::expression(const std::string& value)
{
    return expression_raw(value.c_str());
}

inline core::Ptr<core::ValueInput> SketchTextInput::height2() const
{
    core::Ptr<core::ValueInput> res = height2_raw();
    return res;
}

inline bool SketchTextInput::height2(const core::Ptr<core::ValueInput>& value)
{
    return height2_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHTEXTINPUT_API