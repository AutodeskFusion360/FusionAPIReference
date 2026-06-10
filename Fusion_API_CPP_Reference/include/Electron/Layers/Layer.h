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
# ifdef __COMPILING_ADSK_ELECTRON_LAYER_CPP__
# define ADSK_ELECTRON_LAYER_API XI_EXPORT
# else
# define ADSK_ELECTRON_LAYER_API
# endif
#else
# define ADSK_ELECTRON_LAYER_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Layer in a board, schematic, or library.
class Layer : public EcadObject {
public:

    /// Layer color as ARGB hex string (e.g., ``0xc8ff0000``).
    std::string color() const;

    /// Fill pattern used in layer icon.
    FillPatterns fill() const;

    /// Display name of this layer (e.g., Top, Bottom, tPlace).
    std::string name() const;

    /// Layer number (1-based index into the layer stack).
    int number() const;

    /// True if this layer contains objects; False if empty.
    bool used() const;

    /// True if this layer is visible in the editor; False if hidden.
    bool visible() const;

    ADSK_ELECTRON_LAYER_API static const char* classType();
    ADSK_ELECTRON_LAYER_API const char* objectType() const override;
    ADSK_ELECTRON_LAYER_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_LAYER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* color_raw() const = 0;
    virtual FillPatterns fill_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual int number_raw() const = 0;
    virtual bool used_raw() const = 0;
    virtual bool visible_raw() const = 0;
};

// Inline wrappers

inline std::string Layer::color() const
{
    std::string res;

    char* p= color_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline FillPatterns Layer::fill() const
{
    FillPatterns res = fill_raw();
    return res;
}

inline std::string Layer::name() const
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

inline int Layer::number() const
{
    int res = number_raw();
    return res;
}

inline bool Layer::used() const
{
    bool res = used_raw();
    return res;
}

inline bool Layer::visible() const
{
    bool res = visible_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_LAYER_API