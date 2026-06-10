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
#include "../Core/SimAttribute.h"
#include "../SimTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_LOAD_CPP__
# define ADSK_SIM_LOAD_API XI_EXPORT
# else
# define ADSK_SIM_LOAD_API
# endif
#else
# define ADSK_SIM_LOAD_API XI_IMPORT
#endif

namespace adsk { namespace sim {
    class TransientDefinition;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a load.
class Load : public SimAttribute {
public:

    /// Gets the load type.
    LoadTypes type() const;

    /// Gets the transient definition associated with the load.
    core::Ptr<TransientDefinition> transientDefinition() const;

    ADSK_SIM_LOAD_API static const char* classType();
    ADSK_SIM_LOAD_API const char* objectType() const override;
    ADSK_SIM_LOAD_API void* queryInterface(const char* id) const override;
    ADSK_SIM_LOAD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual LoadTypes type_raw() const = 0;
    virtual TransientDefinition* transientDefinition_raw() const = 0;
    virtual void placeholderLoad0() {}
    virtual void placeholderLoad1() {}
    virtual void placeholderLoad2() {}
    virtual void placeholderLoad3() {}
    virtual void placeholderLoad4() {}
    virtual void placeholderLoad5() {}
    virtual void placeholderLoad6() {}
    virtual void placeholderLoad7() {}
    virtual void placeholderLoad8() {}
    virtual void placeholderLoad9() {}
    virtual void placeholderLoad10() {}
    virtual void placeholderLoad11() {}
    virtual void placeholderLoad12() {}
    virtual void placeholderLoad13() {}
    virtual void placeholderLoad14() {}
    virtual void placeholderLoad15() {}
    virtual void placeholderLoad16() {}
    virtual void placeholderLoad17() {}
    virtual void placeholderLoad18() {}
    virtual void placeholderLoad19() {}
    virtual void placeholderLoad20() {}
    virtual void placeholderLoad21() {}
    virtual void placeholderLoad22() {}
    virtual void placeholderLoad23() {}
    virtual void placeholderLoad24() {}
    virtual void placeholderLoad25() {}
    virtual void placeholderLoad26() {}
    virtual void placeholderLoad27() {}
    virtual void placeholderLoad28() {}
    virtual void placeholderLoad29() {}
};

// Inline wrappers

inline LoadTypes Load::type() const
{
    LoadTypes res = type_raw();
    return res;
}

inline core::Ptr<TransientDefinition> Load::transientDefinition() const
{
    core::Ptr<TransientDefinition> res = transientDefinition_raw();
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_LOAD_API