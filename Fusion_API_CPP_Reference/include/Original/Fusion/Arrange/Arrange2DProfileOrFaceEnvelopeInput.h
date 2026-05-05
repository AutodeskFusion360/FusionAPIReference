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
#include "Arrange2DEnvelopeInput.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGE2DPROFILEORFACEENVELOPEINPUT_CPP__
# define ADSK_FUSION_ARRANGE2DPROFILEORFACEENVELOPEINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGE2DPROFILEORFACEENVELOPEINPUT_API
# endif
#else
# define ADSK_FUSION_ARRANGE2DPROFILEORFACEENVELOPEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// This object is used to specify the input needed to define an envelope using profiles and planar
/// faces to define the envelope shapes.
class Arrange2DProfileOrFaceEnvelopeInput : public Arrange2DEnvelopeInput {
public:

    /// Gets and sets an array that contains a combination of Profile and planar BRepFace objects that will be used to define
    /// the shape of the envelopes.
    std::vector<core::Ptr<core::Base>> profilesOrFaces() const;
    bool profilesOrFaces(const std::vector<core::Ptr<core::Base>>& value);

    ADSK_FUSION_ARRANGE2DPROFILEORFACEENVELOPEINPUT_API static const char* classType();
    ADSK_FUSION_ARRANGE2DPROFILEORFACEENVELOPEINPUT_API const char* objectType() const override;
    ADSK_FUSION_ARRANGE2DPROFILEORFACEENVELOPEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGE2DPROFILEORFACEENVELOPEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base** profilesOrFaces_raw(size_t& return_size) const = 0;
    virtual bool profilesOrFaces_raw(core::Base** value, size_t value_size) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<core::Base>> Arrange2DProfileOrFaceEnvelopeInput::profilesOrFaces() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= profilesOrFaces_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Arrange2DProfileOrFaceEnvelopeInput::profilesOrFaces(const std::vector<core::Ptr<core::Base>>& value)
{
    core::Base** value_ = new core::Base*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = profilesOrFaces_raw(value_, value.size());
    delete[] value_;
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGE2DPROFILEORFACEENVELOPEINPUT_API