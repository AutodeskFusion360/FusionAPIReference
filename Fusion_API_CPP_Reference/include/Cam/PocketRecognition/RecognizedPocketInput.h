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
#include "../../Core/Base.h"
#include "../CamTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_RECOGNIZEDPOCKETINPUT_CPP__
# define ADSK_CAM_RECOGNIZEDPOCKETINPUT_API XI_EXPORT
# else
# define ADSK_CAM_RECOGNIZEDPOCKETINPUT_API
# endif
#else
# define ADSK_CAM_RECOGNIZEDPOCKETINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}

namespace adsk { namespace cam {

/// Input object containing properties used to recognize pockets. Includes bosses along open and closed pockets.
/// The class is only available with the Machining Extension.
class RecognizedPocketInput : public core::Base {
public:

    /// Creates a new RecognizedPocketInput object.
    static core::Ptr<RecognizedPocketInput> create();

    /// The body on which to recognize pockets.
    core::Ptr<core::Base> body() const;
    bool body(const core::Ptr<core::Base>& value);

    /// The attack vectors used to recognize pockets.
    /// If left empty, this array will be filled with normals of all planar faces on the given body.
    /// There vectors should be pointing down along the tool towards its tip and the pocket floors.
    std::vector<core::Ptr<core::Vector3D>> attackVectors() const;
    bool attackVectors(const std::vector<core::Ptr<core::Vector3D>>& value);

    /// Sets and gets whether bosses should be included in the recognized pockets.
    /// Bosses are defined as pockets that protrude above the surrounding model faces and thus only consist of islands without an outer boundary.
    /// This value is true by default.
    bool isIncludingBosses() const;
    bool isIncludingBosses(bool value);

    ADSK_CAM_RECOGNIZEDPOCKETINPUT_API static const char* classType();
    ADSK_CAM_RECOGNIZEDPOCKETINPUT_API const char* objectType() const override;
    ADSK_CAM_RECOGNIZEDPOCKETINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_RECOGNIZEDPOCKETINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_RECOGNIZEDPOCKETINPUT_API static RecognizedPocketInput* create_raw();
    virtual core::Base* body_raw() const = 0;
    virtual bool body_raw(core::Base* value) = 0;
    virtual core::Vector3D** attackVectors_raw(size_t& return_size) const = 0;
    virtual bool attackVectors_raw(core::Vector3D** value, size_t value_size) = 0;
    virtual bool isIncludingBosses_raw() const = 0;
    virtual bool isIncludingBosses_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<RecognizedPocketInput> RecognizedPocketInput::create()
{
    core::Ptr<RecognizedPocketInput> res = create_raw();
    return res;
}

inline core::Ptr<core::Base> RecognizedPocketInput::body() const
{
    core::Ptr<core::Base> res = body_raw();
    return res;
}

inline bool RecognizedPocketInput::body(const core::Ptr<core::Base>& value)
{
    return body_raw(value.get());
}

inline std::vector<core::Ptr<core::Vector3D>> RecognizedPocketInput::attackVectors() const
{
    std::vector<core::Ptr<core::Vector3D>> res;
    size_t s;

    core::Vector3D** p= attackVectors_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool RecognizedPocketInput::attackVectors(const std::vector<core::Ptr<core::Vector3D>>& value)
{
    core::Vector3D** value_ = new core::Vector3D*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = attackVectors_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool RecognizedPocketInput::isIncludingBosses() const
{
    bool res = isIncludingBosses_raw();
    return res;
}

inline bool RecognizedPocketInput::isIncludingBosses(bool value)
{
    return isIncludingBosses_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_RECOGNIZEDPOCKETINPUT_API