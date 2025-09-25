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
#include "GeometrySelection.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CURVESELECTION_CPP__
# define ADSK_CAM_CURVESELECTION_API XI_EXPORT
# else
# define ADSK_CAM_CURVESELECTION_API
# endif
#else
# define ADSK_CAM_CURVESELECTION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Curve3DPath;
}}

namespace adsk { namespace cam {

/// Base class of all curve based geometry selections.
class CurveSelection : public GeometrySelection {
public:

    /// Get or set the value of the input geometry.
    /// If the value originates from a component instead of an occurrence, or an occurrence outside of the CAM environment, then the subpath is checked against the CAM model tree.
    /// For some child classes, this may be the same as the value property, but might also consist of fewer elements.
    /// Valid elements depend on the capabilities of the derived class. An exception is thrown if the matching fails or the given entity does not match the expected type.
    std::vector<core::Ptr<core::Base>> inputGeometry() const;
    bool inputGeometry(const std::vector<core::Ptr<core::Base>>& value);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Gets the contained curves as raw geometry.
    /// Returns the raw curve geometry in a Curve3DPath array.
    std::vector<core::Ptr<core::Curve3DPath>> outputGeometry() const;

    ADSK_CAM_CURVESELECTION_API static const char* classType();
    ADSK_CAM_CURVESELECTION_API const char* objectType() const override;
    ADSK_CAM_CURVESELECTION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CURVESELECTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base** inputGeometry_raw(size_t& return_size) const = 0;
    virtual bool inputGeometry_raw(core::Base** value, size_t value_size) = 0;
    virtual core::Curve3DPath** outputGeometry_raw(size_t& return_size) const = 0;
    virtual void placeholderCurveSelection0() {}
    virtual void placeholderCurveSelection1() {}
    virtual void placeholderCurveSelection2() {}
    virtual void placeholderCurveSelection3() {}
    virtual void placeholderCurveSelection4() {}
    virtual void placeholderCurveSelection5() {}
    virtual void placeholderCurveSelection6() {}
    virtual void placeholderCurveSelection7() {}
    virtual void placeholderCurveSelection8() {}
    virtual void placeholderCurveSelection9() {}
    virtual void placeholderCurveSelection10() {}
    virtual void placeholderCurveSelection11() {}
    virtual void placeholderCurveSelection12() {}
    virtual void placeholderCurveSelection13() {}
    virtual void placeholderCurveSelection14() {}
    virtual void placeholderCurveSelection15() {}
    virtual void placeholderCurveSelection16() {}
    virtual void placeholderCurveSelection17() {}
    virtual void placeholderCurveSelection18() {}
    virtual void placeholderCurveSelection19() {}
    virtual void placeholderCurveSelection20() {}
    virtual void placeholderCurveSelection21() {}
    virtual void placeholderCurveSelection22() {}
    virtual void placeholderCurveSelection23() {}
    virtual void placeholderCurveSelection24() {}
    virtual void placeholderCurveSelection25() {}
    virtual void placeholderCurveSelection26() {}
    virtual void placeholderCurveSelection27() {}
    virtual void placeholderCurveSelection28() {}
};

// Inline wrappers

inline std::vector<core::Ptr<core::Base>> CurveSelection::inputGeometry() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= inputGeometry_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CurveSelection::inputGeometry(const std::vector<core::Ptr<core::Base>>& value)
{
    core::Base** value_ = new core::Base*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = inputGeometry_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline std::vector<core::Ptr<core::Curve3DPath>> CurveSelection::outputGeometry() const
{
    std::vector<core::Ptr<core::Curve3DPath>> res;
    size_t s;

    core::Curve3DPath** p= outputGeometry_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CURVESELECTION_API