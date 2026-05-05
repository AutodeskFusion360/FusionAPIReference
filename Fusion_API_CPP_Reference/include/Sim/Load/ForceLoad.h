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
#include "StructuralLoadDirectional.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_FORCELOAD_CPP__
# define ADSK_SIM_FORCELOAD_API XI_EXPORT
# else
# define ADSK_SIM_FORCELOAD_API
# endif
#else
# define ADSK_SIM_FORCELOAD_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a Force load.
class ForceLoad : public StructuralLoadDirectional {
public:

    /// The load-per-entity as a bool.
    bool loadPerEntity() const;
    bool loadPerEntity(bool value);

    ADSK_SIM_FORCELOAD_API static const char* classType();
    ADSK_SIM_FORCELOAD_API const char* objectType() const override;
    ADSK_SIM_FORCELOAD_API void* queryInterface(const char* id) const override;
    ADSK_SIM_FORCELOAD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool loadPerEntity_raw() const = 0;
    virtual bool loadPerEntity_raw(bool value) = 0;
};

// Inline wrappers

inline bool ForceLoad::loadPerEntity() const
{
    bool res = loadPerEntity_raw();
    return res;
}

inline bool ForceLoad::loadPerEntity(bool value)
{
    return loadPerEntity_raw(value);
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_FORCELOAD_API