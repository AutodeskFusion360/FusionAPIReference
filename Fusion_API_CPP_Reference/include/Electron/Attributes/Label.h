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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_LABEL_CPP__
# define ADSK_ELECTRON_LABEL_API XI_EXPORT
# else
# define ADSK_ELECTRON_LABEL_API
# endif
#else
# define ADSK_ELECTRON_LABEL_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Label (net name annotation) on a schematic sheet, net, or bus.
class Label : public EcadObject {
public:

    /// Rotation angle in degrees, counter-clockwise from the positive X axis (0.0–359.9).
    double angle() const;

    /// Layer number (1-based index into the layer stack).
    int layer() const;

    /// True if this label is mirrored about the Y axis.
    bool mirror() const;

    /// True if the spin flag is set, preventing automatic readability correction when mirrored.
    bool spin() const;

    /// X coordinate of the label anchor point, in internal units.
    int x() const;

    /// Y coordinate of the label anchor point, in internal units.
    int y() const;

    ADSK_ELECTRON_LABEL_API static const char* classType();
    ADSK_ELECTRON_LABEL_API const char* objectType() const override;
    ADSK_ELECTRON_LABEL_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_LABEL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double angle_raw() const = 0;
    virtual int layer_raw() const = 0;
    virtual bool mirror_raw() const = 0;
    virtual bool spin_raw() const = 0;
    virtual int x_raw() const = 0;
    virtual int y_raw() const = 0;
};

// Inline wrappers

inline double Label::angle() const
{
    double res = angle_raw();
    return res;
}

inline int Label::layer() const
{
    int res = layer_raw();
    return res;
}

inline bool Label::mirror() const
{
    bool res = mirror_raw();
    return res;
}

inline bool Label::spin() const
{
    bool res = spin_raw();
    return res;
}

inline int Label::x() const
{
    int res = x_raw();
    return res;
}

inline int Label::y() const
{
    int res = y_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_LABEL_API