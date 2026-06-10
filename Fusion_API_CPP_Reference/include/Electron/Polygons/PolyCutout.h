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
# ifdef __COMPILING_ADSK_ELECTRON_POLYCUTOUT_CPP__
# define ADSK_ELECTRON_POLYCUTOUT_API XI_EXPORT
# else
# define ADSK_ELECTRON_POLYCUTOUT_API
# endif
#else
# define ADSK_ELECTRON_POLYCUTOUT_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Wires;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Polygon cutout region that subtracts from signal polygons in the same layer.
class PolyCutout : public EcadObject {
public:

    /// Layer number (1-based index into the layer stack).
    int layer() const;

    /// Wires forming the polygon outline.
    core::Ptr<Wires> wires() const;

    ADSK_ELECTRON_POLYCUTOUT_API static const char* classType();
    ADSK_ELECTRON_POLYCUTOUT_API const char* objectType() const override;
    ADSK_ELECTRON_POLYCUTOUT_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_POLYCUTOUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int layer_raw() const = 0;
    virtual Wires* wires_raw() const = 0;
};

// Inline wrappers

inline int PolyCutout::layer() const
{
    int res = layer_raw();
    return res;
}

inline core::Ptr<Wires> PolyCutout::wires() const
{
    core::Ptr<Wires> res = wires_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_POLYCUTOUT_API