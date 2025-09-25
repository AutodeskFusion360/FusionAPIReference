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
# ifdef __COMPILING_ADSK_FUSION_INTERFERENCERESULT_CPP__
# define ADSK_FUSION_INTERFERENCERESULT_API XI_EXPORT
# else
# define ADSK_FUSION_INTERFERENCERESULT_API
# endif
#else
# define ADSK_FUSION_INTERFERENCERESULT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepBody;
}}

namespace adsk { namespace fusion {

/// Represents the interference between bodies and/or occurrences in an interference analysis.
class InterferenceResult : public core::Base {
public:

    /// Returns the first entity involved in the interference
    core::Ptr<core::Base> entityOne() const;

    /// Returns the second entity involved in the interference
    core::Ptr<core::Base> entityTwo() const;

    /// Returns a transient BRepBody that represents the volume of interference.
    core::Ptr<BRepBody> interferenceBody() const;

    /// Gets and sets if this interference volume should be created as a model body. Setting
    /// this to true doesn't create the body just indicates that a body is desired. Calling
    /// the createBodies method on the interferenceResults object will result in the creation
    /// of the model body if this property is true.
    bool isCreateBody() const;
    bool isCreateBody(bool value);

    ADSK_FUSION_INTERFERENCERESULT_API static const char* classType();
    ADSK_FUSION_INTERFERENCERESULT_API const char* objectType() const override;
    ADSK_FUSION_INTERFERENCERESULT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_INTERFERENCERESULT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* entityOne_raw() const = 0;
    virtual core::Base* entityTwo_raw() const = 0;
    virtual BRepBody* interferenceBody_raw() const = 0;
    virtual bool isCreateBody_raw() const = 0;
    virtual bool isCreateBody_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> InterferenceResult::entityOne() const
{
    core::Ptr<core::Base> res = entityOne_raw();
    return res;
}

inline core::Ptr<core::Base> InterferenceResult::entityTwo() const
{
    core::Ptr<core::Base> res = entityTwo_raw();
    return res;
}

inline core::Ptr<BRepBody> InterferenceResult::interferenceBody() const
{
    core::Ptr<BRepBody> res = interferenceBody_raw();
    return res;
}

inline bool InterferenceResult::isCreateBody() const
{
    bool res = isCreateBody_raw();
    return res;
}

inline bool InterferenceResult::isCreateBody(bool value)
{
    return isCreateBody_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_INTERFERENCERESULT_API