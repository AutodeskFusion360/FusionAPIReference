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
#include "ArrangeEnvelopeDefinition.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGEPROFILEORFACEENVELOPEDEFINITION_CPP__
# define ADSK_FUSION_ARRANGEPROFILEORFACEENVELOPEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGEPROFILEORFACEENVELOPEDEFINITION_API
# endif
#else
# define ADSK_FUSION_ARRANGEPROFILEORFACEENVELOPEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The ArrangeProfileEnvelopeDefinition object represents envelopes defined by a profile or
/// face in an Arrange feature. This defines the settings of the envelope and the
/// EnvelopeResult provides access to the resulting envelope and its contents.
class ArrangeProfileOrFaceEnvelopeDefinition : public ArrangeEnvelopeDefinition {
public:

    /// Gets and sets an array containing any combination of Profile and planar
    /// BRepFace objects. These objects define the shapes of the envelopes. Currently,
    /// if a Profile is used, it must be the only Profile in its parent sketch.
    std::vector<core::Ptr<core::Base>> profilesAndFaces() const;
    bool profilesAndFaces(const std::vector<core::Ptr<core::Base>>& value);

    ADSK_FUSION_ARRANGEPROFILEORFACEENVELOPEDEFINITION_API static const char* classType();
    ADSK_FUSION_ARRANGEPROFILEORFACEENVELOPEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_ARRANGEPROFILEORFACEENVELOPEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGEPROFILEORFACEENVELOPEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base** profilesAndFaces_raw(size_t& return_size) const = 0;
    virtual bool profilesAndFaces_raw(core::Base** value, size_t value_size) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<core::Base>> ArrangeProfileOrFaceEnvelopeDefinition::profilesAndFaces() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= profilesAndFaces_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ArrangeProfileOrFaceEnvelopeDefinition::profilesAndFaces(const std::vector<core::Ptr<core::Base>>& value)
{
    core::Base** value_ = new core::Base*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = profilesAndFaces_raw(value_, value.size());
    delete[] value_;
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGEPROFILEORFACEENVELOPEDEFINITION_API