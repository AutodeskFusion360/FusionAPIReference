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
#include "../EcadDocument/EcadDocument.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_ECADDESIGN_CPP__
# define ADSK_ELECTRON_ECADDESIGN_API XI_EXPORT
# else
# define ADSK_ELECTRON_ECADDESIGN_API
# endif
#else
# define ADSK_ELECTRON_ECADDESIGN_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Board;
    class Schematic;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents an electronics design that contains both schematic and board representations.
class EcadDesign : public EcadDocument {
public:

    /// Schematic in this design.
    core::Ptr<Schematic> schematic() const;

    /// PCB in this design.
    core::Ptr<Board> board() const;

    ADSK_ELECTRON_ECADDESIGN_API static const char* classType();
    ADSK_ELECTRON_ECADDESIGN_API const char* objectType() const override;
    ADSK_ELECTRON_ECADDESIGN_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_ECADDESIGN_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Schematic* schematic_raw() const = 0;
    virtual Board* board_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Schematic> EcadDesign::schematic() const
{
    core::Ptr<Schematic> res = schematic_raw();
    return res;
}

inline core::Ptr<Board> EcadDesign::board() const
{
    core::Ptr<Board> res = board_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_ECADDESIGN_API