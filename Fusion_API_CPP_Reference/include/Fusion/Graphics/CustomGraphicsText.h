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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSTEXT_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSTEXT_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSTEXT_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSTEXT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Represents text drawn in the graphics window. The default position of the text is at (0,0,0) and
/// orientation is the text lying on the x-y plane. To reposition and reorient the text you can use
/// the transformation property.
class CustomGraphicsText : public CustomGraphicsEntity {
public:

    /// Gets and sets the formatted text definition. This is the full string, including the
    /// formatting information, that's used to define the displayed text.
    std::string formattedText() const;
    bool formattedText(const std::string& value);

    /// Gets and sets the font used to display the text. This is the default font and applies to
    /// all of text unless there is a font override defined within the text.
    std::string font() const;
    bool font(const std::string& value);

    /// Specifies that the text displays using an italic style. This is the default italic style and applies to
    /// all of text unless there is a style override defined within the text.
    bool isItalic() const;
    bool isItalic(bool value);

    /// Specifies that the text displays using a bold style. This is the default bold style and applies to
    /// all of text unless there is a style override defined within the text.
    bool isBold() const;
    bool isBold(bool value);

    /// Specifies that the text displays using an underline style. This is the default underline style and applies to
    /// all of text unless there is a style override defined within the text.
    bool isUnderline() const;
    bool isUnderline(bool value);

    /// Specifies that the text displays using a strike through style. This is the default strike through style and applies to
    /// all of text unless there is a style override defined within the text.
    bool isStrikeThrough() const;
    bool isStrikeThrough(bool value);

    /// Gets and sets the size of the text in centimeters. This is the default size and applies to
    /// all of text unless there is a size override defined within the text.
    double size() const;
    bool size(double value);

    /// The actual width of the text in centimeters. This is useful when you want to position several
    /// GraphicsText objects together.
    double width() const;

    /// The actual height of the text in centimeters. This is useful when you want to position several
    /// GraphicsText objects together.
    double height() const;

    ADSK_FUSION_CUSTOMGRAPHICSTEXT_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSTEXT_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSTEXT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSTEXT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* formattedText_raw() const = 0;
    virtual bool formattedText_raw(const char* value) = 0;
    virtual char* font_raw() const = 0;
    virtual bool font_raw(const char* value) = 0;
    virtual bool isItalic_raw() const = 0;
    virtual bool isItalic_raw(bool value) = 0;
    virtual bool isBold_raw() const = 0;
    virtual bool isBold_raw(bool value) = 0;
    virtual bool isUnderline_raw() const = 0;
    virtual bool isUnderline_raw(bool value) = 0;
    virtual bool isStrikeThrough_raw() const = 0;
    virtual bool isStrikeThrough_raw(bool value) = 0;
    virtual double size_raw() const = 0;
    virtual bool size_raw(double value) = 0;
    virtual double width_raw() const = 0;
    virtual double height_raw() const = 0;
};

// Inline wrappers

inline std::string CustomGraphicsText::formattedText() const
{
    std::string res;

    char* p= formattedText_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomGraphicsText::formattedText(const std::string& value)
{
    return formattedText_raw(value.c_str());
}

inline std::string CustomGraphicsText::font() const
{
    std::string res;

    char* p= font_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomGraphicsText::font(const std::string& value)
{
    return font_raw(value.c_str());
}

inline bool CustomGraphicsText::isItalic() const
{
    bool res = isItalic_raw();
    return res;
}

inline bool CustomGraphicsText::isItalic(bool value)
{
    return isItalic_raw(value);
}

inline bool CustomGraphicsText::isBold() const
{
    bool res = isBold_raw();
    return res;
}

inline bool CustomGraphicsText::isBold(bool value)
{
    return isBold_raw(value);
}

inline bool CustomGraphicsText::isUnderline() const
{
    bool res = isUnderline_raw();
    return res;
}

inline bool CustomGraphicsText::isUnderline(bool value)
{
    return isUnderline_raw(value);
}

inline bool CustomGraphicsText::isStrikeThrough() const
{
    bool res = isStrikeThrough_raw();
    return res;
}

inline bool CustomGraphicsText::isStrikeThrough(bool value)
{
    return isStrikeThrough_raw(value);
}

inline double CustomGraphicsText::size() const
{
    double res = size_raw();
    return res;
}

inline bool CustomGraphicsText::size(double value)
{
    return size_raw(value);
}

inline double CustomGraphicsText::width() const
{
    double res = width_raw();
    return res;
}

inline double CustomGraphicsText::height() const
{
    double res = height_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSTEXT_API