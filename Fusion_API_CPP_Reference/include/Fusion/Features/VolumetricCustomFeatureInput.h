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
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_VOLUMETRICCUSTOMFEATUREINPUT_CPP__
# define ADSK_FUSION_VOLUMETRICCUSTOMFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_VOLUMETRICCUSTOMFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_VOLUMETRICCUSTOMFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// An input object for creating a volumetric custom feature.
class VolumetricCustomFeatureInput : public core::Base {
public:

    /// The boundary body of the volumetric model.
    core::Ptr<core::Base> boundaryBody() const;
    bool boundaryBody(const core::Ptr<core::Base>& value);

    ADSK_FUSION_VOLUMETRICCUSTOMFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_VOLUMETRICCUSTOMFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_VOLUMETRICCUSTOMFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_VOLUMETRICCUSTOMFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* boundaryBody_raw() const = 0;
    virtual bool boundaryBody_raw(core::Base* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> VolumetricCustomFeatureInput::boundaryBody() const
{
    core::Ptr<core::Base> res = boundaryBody_raw();
    return res;
}

inline bool VolumetricCustomFeatureInput::boundaryBody(const core::Ptr<core::Base>& value)
{
    return boundaryBody_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_VOLUMETRICCUSTOMFEATUREINPUT_API