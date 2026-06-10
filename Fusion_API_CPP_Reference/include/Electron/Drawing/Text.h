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
#include "../Core/EcadObject.h"
#include "../ElectronTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_TEXT_CPP__
# define ADSK_ELECTRON_TEXT_API XI_EXPORT
# else
# define ADSK_ELECTRON_TEXT_API
# endif
#else
# define ADSK_ELECTRON_TEXT_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Text annotation on a PCB board, schematic sheet, symbol, or package.
class Text : public EcadObject {
public:

    /// Rotation angle in degrees, counter-clockwise from the positive X axis (0.0–359.9).
    double angle() const;

    /// Horizontal and vertical alignment of this text.
    TextAlignments align() const;

    /// Font style used to render this text (vector, proportional, or fixed).
    Fonts font() const;

    /// Layer number (1-based index into the layer stack).
    int layer() const;

    /// Line spacing between lines of text, in internal units.
    int lineDistance() const;

    /// True if this text is mirrored about the Y axis.
    bool mirror() const;

    /// Character width to height ratio.
    int ratio() const;

    /// Text height (character size), in internal units.
    int size() const;

    /// True if the spin flag is set, preventing automatic readability correction when mirrored.
    bool spin() const;

    /// Text content.
    std::string value() const;

    /// X coordinate of the text anchor point, in internal units.
    int x() const;

    /// Y coordinate of the text anchor point, in internal units.
    int y() const;

    ADSK_ELECTRON_TEXT_API static const char* classType();
    ADSK_ELECTRON_TEXT_API const char* objectType() const override;
    ADSK_ELECTRON_TEXT_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_TEXT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double angle_raw() const = 0;
    virtual TextAlignments align_raw() const = 0;
    virtual Fonts font_raw() const = 0;
    virtual int layer_raw() const = 0;
    virtual int lineDistance_raw() const = 0;
    virtual bool mirror_raw() const = 0;
    virtual int ratio_raw() const = 0;
    virtual int size_raw() const = 0;
    virtual bool spin_raw() const = 0;
    virtual char* value_raw() const = 0;
    virtual int x_raw() const = 0;
    virtual int y_raw() const = 0;
};

// Inline wrappers

inline double Text::angle() const
{
    double res = angle_raw();
    return res;
}

inline TextAlignments Text::align() const
{
    TextAlignments res = align_raw();
    return res;
}

inline Fonts Text::font() const
{
    Fonts res = font_raw();
    return res;
}

inline int Text::layer() const
{
    int res = layer_raw();
    return res;
}

inline int Text::lineDistance() const
{
    int res = lineDistance_raw();
    return res;
}

inline bool Text::mirror() const
{
    bool res = mirror_raw();
    return res;
}

inline int Text::ratio() const
{
    int res = ratio_raw();
    return res;
}

inline int Text::size() const
{
    int res = size_raw();
    return res;
}

inline bool Text::spin() const
{
    bool res = spin_raw();
    return res;
}

inline std::string Text::value() const
{
    std::string res;

    char* p= value_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline int Text::x() const
{
    int res = x_raw();
    return res;
}

inline int Text::y() const
{
    int res = y_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_TEXT_API