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
# ifdef __COMPILING_ADSK_SIM_REMOTEMOMENTLOAD_CPP__
# define ADSK_SIM_REMOTEMOMENTLOAD_API XI_EXPORT
# else
# define ADSK_SIM_REMOTEMOMENTLOAD_API
# endif
#else
# define ADSK_SIM_REMOTEMOMENTLOAD_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a Remote Moment load.
class RemoteMomentLoad : public StructuralLoadDirectional {
public:

    /// The X position of the remote moment load.
    double positionX() const;
    bool positionX(double value);

    /// The Y position of the remote moment load.
    double positionY() const;
    bool positionY(double value);

    /// The Z position of the remote moment load.
    double positionZ() const;
    bool positionZ(double value);

    ADSK_SIM_REMOTEMOMENTLOAD_API static const char* classType();
    ADSK_SIM_REMOTEMOMENTLOAD_API const char* objectType() const override;
    ADSK_SIM_REMOTEMOMENTLOAD_API void* queryInterface(const char* id) const override;
    ADSK_SIM_REMOTEMOMENTLOAD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double positionX_raw() const = 0;
    virtual bool positionX_raw(double value) = 0;
    virtual double positionY_raw() const = 0;
    virtual bool positionY_raw(double value) = 0;
    virtual double positionZ_raw() const = 0;
    virtual bool positionZ_raw(double value) = 0;
};

// Inline wrappers

inline double RemoteMomentLoad::positionX() const
{
    double res = positionX_raw();
    return res;
}

inline bool RemoteMomentLoad::positionX(double value)
{
    return positionX_raw(value);
}

inline double RemoteMomentLoad::positionY() const
{
    double res = positionY_raw();
    return res;
}

inline bool RemoteMomentLoad::positionY(double value)
{
    return positionY_raw(value);
}

inline double RemoteMomentLoad::positionZ() const
{
    double res = positionZ_raw();
    return res;
}

inline bool RemoteMomentLoad::positionZ(double value)
{
    return positionZ_raw(value);
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_REMOTEMOMENTLOAD_API