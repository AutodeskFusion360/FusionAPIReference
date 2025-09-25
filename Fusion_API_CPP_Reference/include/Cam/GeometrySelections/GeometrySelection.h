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
#include "../CamTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_GEOMETRYSELECTION_CPP__
# define ADSK_CAM_GEOMETRYSELECTION_API XI_EXPORT
# else
# define ADSK_CAM_GEOMETRYSELECTION_API
# endif
#else
# define ADSK_CAM_GEOMETRYSELECTION_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Base parent class for all selection classes. All selections are currently restricted to B-Rep entities or sketches.
class GeometrySelection : public core::Base {
public:

    /// Returns the resulting value of the selection. In general, this returns the input selection, but child classes can override the return value if needed.
    /// Refer to the child classes comments for further details. The collection may contain duplicates.
    /// For OperationInputs, the return value may not be the same as for Operations, as additional geometry selected by child classes is not evaluated for OperationInputs.
    std::vector<core::Ptr<core::Base>> value() const;

    /// Gets if warnings were encountered when applying the selection to a parent.
    bool hasWarning() const;

    /// Gets if errors were encountered when applying the selection to a a parent.
    bool hasError() const;

    /// Gets the last warning string encountered after the selection was applied to a parent.
    std::string warning() const;

    /// Gets the last warning string encountered after the selection was applied to a parent.
    std::string error() const;

    ADSK_CAM_GEOMETRYSELECTION_API static const char* classType();
    ADSK_CAM_GEOMETRYSELECTION_API const char* objectType() const override;
    ADSK_CAM_GEOMETRYSELECTION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_GEOMETRYSELECTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base** value_raw(size_t& return_size) const = 0;
    virtual bool hasWarning_raw() const = 0;
    virtual bool hasError_raw() const = 0;
    virtual char* warning_raw() const = 0;
    virtual char* error_raw() const = 0;
    virtual void placeholderGeometrySelection0() {}
    virtual void placeholderGeometrySelection1() {}
    virtual void placeholderGeometrySelection2() {}
    virtual void placeholderGeometrySelection3() {}
    virtual void placeholderGeometrySelection4() {}
    virtual void placeholderGeometrySelection5() {}
    virtual void placeholderGeometrySelection6() {}
    virtual void placeholderGeometrySelection7() {}
    virtual void placeholderGeometrySelection8() {}
    virtual void placeholderGeometrySelection9() {}
    virtual void placeholderGeometrySelection10() {}
    virtual void placeholderGeometrySelection11() {}
    virtual void placeholderGeometrySelection12() {}
    virtual void placeholderGeometrySelection13() {}
    virtual void placeholderGeometrySelection14() {}
    virtual void placeholderGeometrySelection15() {}
    virtual void placeholderGeometrySelection16() {}
    virtual void placeholderGeometrySelection17() {}
    virtual void placeholderGeometrySelection18() {}
    virtual void placeholderGeometrySelection19() {}
    virtual void placeholderGeometrySelection20() {}
    virtual void placeholderGeometrySelection21() {}
    virtual void placeholderGeometrySelection22() {}
    virtual void placeholderGeometrySelection23() {}
    virtual void placeholderGeometrySelection24() {}
    virtual void placeholderGeometrySelection25() {}
    virtual void placeholderGeometrySelection26() {}
    virtual void placeholderGeometrySelection27() {}
    virtual void placeholderGeometrySelection28() {}
    virtual void placeholderGeometrySelection29() {}
    virtual void placeholderGeometrySelection30() {}
    virtual void placeholderGeometrySelection31() {}
    virtual void placeholderGeometrySelection32() {}
    virtual void placeholderGeometrySelection33() {}
    virtual void placeholderGeometrySelection34() {}
    virtual void placeholderGeometrySelection35() {}
    virtual void placeholderGeometrySelection36() {}
    virtual void placeholderGeometrySelection37() {}
    virtual void placeholderGeometrySelection38() {}
    virtual void placeholderGeometrySelection39() {}
    virtual void placeholderGeometrySelection40() {}
    virtual void placeholderGeometrySelection41() {}
    virtual void placeholderGeometrySelection42() {}
    virtual void placeholderGeometrySelection43() {}
    virtual void placeholderGeometrySelection44() {}
    virtual void placeholderGeometrySelection45() {}
    virtual void placeholderGeometrySelection46() {}
    virtual void placeholderGeometrySelection47() {}
    virtual void placeholderGeometrySelection48() {}
    virtual void placeholderGeometrySelection49() {}
    virtual void placeholderGeometrySelection50() {}
    virtual void placeholderGeometrySelection51() {}
    virtual void placeholderGeometrySelection52() {}
    virtual void placeholderGeometrySelection53() {}
    virtual void placeholderGeometrySelection54() {}
    virtual void placeholderGeometrySelection55() {}
    virtual void placeholderGeometrySelection56() {}
    virtual void placeholderGeometrySelection57() {}
    virtual void placeholderGeometrySelection58() {}
};

// Inline wrappers

inline std::vector<core::Ptr<core::Base>> GeometrySelection::value() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= value_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool GeometrySelection::hasWarning() const
{
    bool res = hasWarning_raw();
    return res;
}

inline bool GeometrySelection::hasError() const
{
    bool res = hasError_raw();
    return res;
}

inline std::string GeometrySelection::warning() const
{
    std::string res;

    char* p= warning_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string GeometrySelection::error() const
{
    std::string res;

    char* p= error_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_GEOMETRYSELECTION_API