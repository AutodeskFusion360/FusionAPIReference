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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SPUNPROFILEINPUT_CPP__
# define ADSK_FUSION_SPUNPROFILEINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_SPUNPROFILEINPUT_API
# endif
#else
# define ADSK_FUSION_SPUNPROFILEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The input object that defines the required input to create a spun profile when using the
/// Sketch.createSpunProfile method. Created using the Sketch.createSpunProfileInput method.
class SpunProfileInput : public core::Base {
public:

    /// Gets and sets the entities (BRepBody or BRepFace) used to define the shape of the spun profile.
    std::vector<core::Ptr<core::Base>> entities() const;
    bool entities(const std::vector<core::Ptr<core::Base>>& value);

    /// Gets and sets the entity used to define the axis of revolution.
    /// The axis can be a sketch line, construction axis, or linear edge.
    /// The axis must not be perpendicular to the sketch plane.
    core::Ptr<core::Base> axis() const;
    bool axis(const core::Ptr<core::Base>& value);

    /// Specifies if the axis will be projected to the sketch plane before making the spun profile.
    /// Otherwise, the spun profile will be generated around the axis in space. Defaults to true.
    bool isAxisProjected() const;
    bool isAxisProjected(bool value);

    /// Gets and sets the linear tolerance in cm used for creating the spun profile. Defaults to 0.001cm.
    double tolerance() const;
    bool tolerance(double value);

    /// Gets and sets whether the profile will be created on the opposite side of the axis.
    bool flipResult() const;
    bool flipResult(bool value);

    /// Gets and sets whether a resulting spun profile that would be open, will be closed along the axis of rotation.
    /// This closes the sketch so it is ready for further design operations, like revolving the sketch for example.
    /// Defaults to true.
    bool isCenterlineAdded() const;
    bool isCenterlineAdded(bool value);

    ADSK_FUSION_SPUNPROFILEINPUT_API static const char* classType();
    ADSK_FUSION_SPUNPROFILEINPUT_API const char* objectType() const override;
    ADSK_FUSION_SPUNPROFILEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SPUNPROFILEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base** entities_raw(size_t& return_size) const = 0;
    virtual bool entities_raw(core::Base** value, size_t value_size) = 0;
    virtual core::Base* axis_raw() const = 0;
    virtual bool axis_raw(core::Base* value) = 0;
    virtual bool isAxisProjected_raw() const = 0;
    virtual bool isAxisProjected_raw(bool value) = 0;
    virtual double tolerance_raw() const = 0;
    virtual bool tolerance_raw(double value) = 0;
    virtual bool flipResult_raw() const = 0;
    virtual bool flipResult_raw(bool value) = 0;
    virtual bool isCenterlineAdded_raw() const = 0;
    virtual bool isCenterlineAdded_raw(bool value) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<core::Base>> SpunProfileInput::entities() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= entities_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool SpunProfileInput::entities(const std::vector<core::Ptr<core::Base>>& value)
{
    core::Base** value_ = new core::Base*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = entities_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline core::Ptr<core::Base> SpunProfileInput::axis() const
{
    core::Ptr<core::Base> res = axis_raw();
    return res;
}

inline bool SpunProfileInput::axis(const core::Ptr<core::Base>& value)
{
    return axis_raw(value.get());
}

inline bool SpunProfileInput::isAxisProjected() const
{
    bool res = isAxisProjected_raw();
    return res;
}

inline bool SpunProfileInput::isAxisProjected(bool value)
{
    return isAxisProjected_raw(value);
}

inline double SpunProfileInput::tolerance() const
{
    double res = tolerance_raw();
    return res;
}

inline bool SpunProfileInput::tolerance(double value)
{
    return tolerance_raw(value);
}

inline bool SpunProfileInput::flipResult() const
{
    bool res = flipResult_raw();
    return res;
}

inline bool SpunProfileInput::flipResult(bool value)
{
    return flipResult_raw(value);
}

inline bool SpunProfileInput::isCenterlineAdded() const
{
    bool res = isCenterlineAdded_raw();
    return res;
}

inline bool SpunProfileInput::isCenterlineAdded(bool value)
{
    return isCenterlineAdded_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SPUNPROFILEINPUT_API