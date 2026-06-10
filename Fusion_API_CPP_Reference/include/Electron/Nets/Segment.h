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
# ifdef __COMPILING_ADSK_ELECTRON_SEGMENT_CPP__
# define ADSK_ELECTRON_SEGMENT_API XI_EXPORT
# else
# define ADSK_ELECTRON_SEGMENT_API
# endif
#else
# define ADSK_ELECTRON_SEGMENT_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Junctions;
    class Labels;
    class PinRefs;
    class PortRefs;
    class Wires;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Wire segment group within a net or bus; connects pin references, port references, and wires.
class Segment : public EcadObject {
public:

    /// Junctions in this segment.
    core::Ptr<Junctions> junctions() const;

    /// Pin references in this segment.
    core::Ptr<PinRefs> pinRefs() const;

    /// Port references in this segment.
    core::Ptr<PortRefs> portRefs() const;

    /// Labels (net name annotations) in this segment.
    core::Ptr<Labels> labels() const;

    /// Wire segments in this segment.
    core::Ptr<Wires> wires() const;

    ADSK_ELECTRON_SEGMENT_API static const char* classType();
    ADSK_ELECTRON_SEGMENT_API const char* objectType() const override;
    ADSK_ELECTRON_SEGMENT_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_SEGMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Junctions* junctions_raw() const = 0;
    virtual PinRefs* pinRefs_raw() const = 0;
    virtual PortRefs* portRefs_raw() const = 0;
    virtual Labels* labels_raw() const = 0;
    virtual Wires* wires_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Junctions> Segment::junctions() const
{
    core::Ptr<Junctions> res = junctions_raw();
    return res;
}

inline core::Ptr<PinRefs> Segment::pinRefs() const
{
    core::Ptr<PinRefs> res = pinRefs_raw();
    return res;
}

inline core::Ptr<PortRefs> Segment::portRefs() const
{
    core::Ptr<PortRefs> res = portRefs_raw();
    return res;
}

inline core::Ptr<Labels> Segment::labels() const
{
    core::Ptr<Labels> res = labels_raw();
    return res;
}

inline core::Ptr<Wires> Segment::wires() const
{
    core::Ptr<Wires> res = wires_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_SEGMENT_API