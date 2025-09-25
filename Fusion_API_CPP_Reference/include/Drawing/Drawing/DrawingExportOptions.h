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
#include "../DrawingTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef DRAWINGXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_DRAWING_DRAWINGEXPORTOPTIONS_CPP__
# define ADSK_DRAWING_DRAWINGEXPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_DRAWING_DRAWINGEXPORTOPTIONS_API
# endif
#else
# define ADSK_DRAWING_DRAWINGEXPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace drawing {

/// The base class for the different drawing export types.  This class is never directly used
/// in an export because you need the specific export type to specify the type of
/// export to be performed.
class DrawingExportOptions : public core::Base {
public:

    /// Gets and sets the filename that the exported file will be written to.
    std::string filename() const;
    bool filename(const std::string& value);

    ADSK_DRAWING_DRAWINGEXPORTOPTIONS_API static const char* classType();
    ADSK_DRAWING_DRAWINGEXPORTOPTIONS_API const char* objectType() const override;
    ADSK_DRAWING_DRAWINGEXPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_DRAWINGEXPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* filename_raw() const = 0;
    virtual bool filename_raw(const char* value) = 0;
    virtual void placeholderDrawingExportOptions0() {}
    virtual void placeholderDrawingExportOptions1() {}
    virtual void placeholderDrawingExportOptions2() {}
    virtual void placeholderDrawingExportOptions3() {}
    virtual void placeholderDrawingExportOptions4() {}
    virtual void placeholderDrawingExportOptions5() {}
    virtual void placeholderDrawingExportOptions6() {}
    virtual void placeholderDrawingExportOptions7() {}
    virtual void placeholderDrawingExportOptions8() {}
    virtual void placeholderDrawingExportOptions9() {}
    virtual void placeholderDrawingExportOptions10() {}
    virtual void placeholderDrawingExportOptions11() {}
    virtual void placeholderDrawingExportOptions12() {}
    virtual void placeholderDrawingExportOptions13() {}
    virtual void placeholderDrawingExportOptions14() {}
    virtual void placeholderDrawingExportOptions15() {}
    virtual void placeholderDrawingExportOptions16() {}
    virtual void placeholderDrawingExportOptions17() {}
    virtual void placeholderDrawingExportOptions18() {}
    virtual void placeholderDrawingExportOptions19() {}
    virtual void placeholderDrawingExportOptions20() {}
    virtual void placeholderDrawingExportOptions21() {}
    virtual void placeholderDrawingExportOptions22() {}
    virtual void placeholderDrawingExportOptions23() {}
    virtual void placeholderDrawingExportOptions24() {}
    virtual void placeholderDrawingExportOptions25() {}
    virtual void placeholderDrawingExportOptions26() {}
    virtual void placeholderDrawingExportOptions27() {}
    virtual void placeholderDrawingExportOptions28() {}
    virtual void placeholderDrawingExportOptions29() {}
};

// Inline wrappers

inline std::string DrawingExportOptions::filename() const
{
    std::string res;

    char* p= filename_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool DrawingExportOptions::filename(const std::string& value)
{
    return filename_raw(value.c_str());
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_DRAWINGEXPORTOPTIONS_API