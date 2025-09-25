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
# ifdef __COMPILING_ADSK_FUSION_JOINTMOTION_CPP__
# define ADSK_FUSION_JOINTMOTION_API XI_EXPORT
# else
# define ADSK_FUSION_JOINTMOTION_API
# endif
#else
# define ADSK_FUSION_JOINTMOTION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The base class for the classes that represent all of the
/// various joint types.
class JointMotion : public core::Base {
public:

    /// Returns an enum value indicating the type of joint this joint represents.
    JointTypes jointType() const;

    ADSK_FUSION_JOINTMOTION_API static const char* classType();
    ADSK_FUSION_JOINTMOTION_API const char* objectType() const override;
    ADSK_FUSION_JOINTMOTION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_JOINTMOTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual JointTypes jointType_raw() const = 0;
    virtual void placeholderJointMotion0() {}
    virtual void placeholderJointMotion1() {}
    virtual void placeholderJointMotion2() {}
    virtual void placeholderJointMotion3() {}
    virtual void placeholderJointMotion4() {}
    virtual void placeholderJointMotion5() {}
    virtual void placeholderJointMotion6() {}
    virtual void placeholderJointMotion7() {}
    virtual void placeholderJointMotion8() {}
    virtual void placeholderJointMotion9() {}
    virtual void placeholderJointMotion10() {}
    virtual void placeholderJointMotion11() {}
    virtual void placeholderJointMotion12() {}
    virtual void placeholderJointMotion13() {}
    virtual void placeholderJointMotion14() {}
};

// Inline wrappers

inline JointTypes JointMotion::jointType() const
{
    JointTypes res = jointType_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_JOINTMOTION_API