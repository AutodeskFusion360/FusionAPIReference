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
#include "Load.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_MOMENTLOAD_CPP__
# define ADSK_SIM_MOMENTLOAD_API XI_EXPORT
# else
# define ADSK_SIM_MOMENTLOAD_API
# endif
#else
# define ADSK_SIM_MOMENTLOAD_API XI_IMPORT
#endif

namespace adsk { namespace sim {
    class RemoteDefinition;
    class VectorDefinition;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a moment load.
class MomentLoad : public Load {
public:

    /// Gets and sets the remote definition associated with the moment load.
    core::Ptr<RemoteDefinition> remoteDefinition() const;
    bool remoteDefinition(const core::Ptr<RemoteDefinition>& value);

    /// Gets and sets the moment vector definition.
    core::Ptr<VectorDefinition> moment() const;
    bool moment(const core::Ptr<VectorDefinition>& value);

    ADSK_SIM_MOMENTLOAD_API static const char* classType();
    ADSK_SIM_MOMENTLOAD_API const char* objectType() const override;
    ADSK_SIM_MOMENTLOAD_API void* queryInterface(const char* id) const override;
    ADSK_SIM_MOMENTLOAD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual RemoteDefinition* remoteDefinition_raw() const = 0;
    virtual bool remoteDefinition_raw(RemoteDefinition* value) = 0;
    virtual VectorDefinition* moment_raw() const = 0;
    virtual bool moment_raw(VectorDefinition* value) = 0;
};

// Inline wrappers

inline core::Ptr<RemoteDefinition> MomentLoad::remoteDefinition() const
{
    core::Ptr<RemoteDefinition> res = remoteDefinition_raw();
    return res;
}

inline bool MomentLoad::remoteDefinition(const core::Ptr<RemoteDefinition>& value)
{
    return remoteDefinition_raw(value.get());
}

inline core::Ptr<VectorDefinition> MomentLoad::moment() const
{
    core::Ptr<VectorDefinition> res = moment_raw();
    return res;
}

inline bool MomentLoad::moment(const core::Ptr<VectorDefinition>& value)
{
    return moment_raw(value.get());
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_MOMENTLOAD_API