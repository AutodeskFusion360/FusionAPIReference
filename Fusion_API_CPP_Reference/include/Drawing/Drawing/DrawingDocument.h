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
#include "../../Core/Application/Document.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef DRAWINGXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_DRAWING_DRAWINGDOCUMENT_CPP__
# define ADSK_DRAWING_DRAWINGDOCUMENT_API XI_EXPORT
# else
# define ADSK_DRAWING_DRAWINGDOCUMENT_API
# endif
#else
# define ADSK_DRAWING_DRAWINGDOCUMENT_API XI_IMPORT
#endif

namespace adsk { namespace drawing {
    class Drawing;
}}

namespace adsk { namespace drawing {

/// Object that represents a Fusion 360 drawing document.
class DrawingDocument : public core::Document {
public:

    /// Returns the Drawing product object associated with this drawing document.
    core::Ptr<Drawing> drawing() const;

    ADSK_DRAWING_DRAWINGDOCUMENT_API static const char* classType();
    ADSK_DRAWING_DRAWINGDOCUMENT_API const char* objectType() const override;
    ADSK_DRAWING_DRAWINGDOCUMENT_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_DRAWINGDOCUMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Drawing* drawing_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Drawing> DrawingDocument::drawing() const
{
    core::Ptr<Drawing> res = drawing_raw();
    return res;
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_DRAWINGDOCUMENT_API