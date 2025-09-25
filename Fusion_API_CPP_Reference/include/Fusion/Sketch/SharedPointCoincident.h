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
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SHAREDPOINTCOINCIDENT_CPP__
# define ADSK_FUSION_SHAREDPOINTCOINCIDENT_API XI_EXPORT
# else
# define ADSK_FUSION_SHAREDPOINTCOINCIDENT_API
# endif
#else
# define ADSK_FUSION_SHAREDPOINTCOINCIDENT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class SketchCurve;
    class SketchPoint;
}}

namespace adsk { namespace fusion {

/// An object that is only used when a glyph representing a special type of coincident
/// constraint is selected in the user interface. An example of its use is when two lines
/// are connected at their endpoints. If you hover the mouse over the shared endpoint, a
/// coincident constraint glyph is displayed and highlights the two lines. Selecting the
/// glyph and deleting it will cause the lines to be separate. In this case, there isn't
/// a real coincident constraint, but the two lines share the same sketch point. The UI
/// uses this "fake" coincident constraint to indicate that the lines share the same point.
/// It also supports separating them when the glyph is deleted by creating a new point and
/// moving one of the lines to it.
/// 
/// A selection returns this object when a glyph representing this special type of
/// coincident constraint is selected. It is only used for selections and provides access
/// to the highlighted entities when the glyph is selected.
class SharedPointCoincident : public core::Base {
public:

    /// Returns the sketch point that the sketch curves are connected to.
    core::Ptr<SketchPoint> point() const;

    /// Returns the first sketch curve that is highlighted when the glyph was selected.
    core::Ptr<SketchCurve> curveOne() const;

    /// Returns the second sketch curve that is highlighted when the glyph was selected.
    core::Ptr<SketchCurve> curveTwo() const;

    ADSK_FUSION_SHAREDPOINTCOINCIDENT_API static const char* classType();
    ADSK_FUSION_SHAREDPOINTCOINCIDENT_API const char* objectType() const override;
    ADSK_FUSION_SHAREDPOINTCOINCIDENT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SHAREDPOINTCOINCIDENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchPoint* point_raw() const = 0;
    virtual SketchCurve* curveOne_raw() const = 0;
    virtual SketchCurve* curveTwo_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<SketchPoint> SharedPointCoincident::point() const
{
    core::Ptr<SketchPoint> res = point_raw();
    return res;
}

inline core::Ptr<SketchCurve> SharedPointCoincident::curveOne() const
{
    core::Ptr<SketchCurve> res = curveOne_raw();
    return res;
}

inline core::Ptr<SketchCurve> SharedPointCoincident::curveTwo() const
{
    core::Ptr<SketchCurve> res = curveTwo_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SHAREDPOINTCOINCIDENT_API