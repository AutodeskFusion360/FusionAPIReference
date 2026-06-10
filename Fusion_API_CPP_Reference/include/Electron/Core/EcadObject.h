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
#include "../ElectronTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_ECADOBJECT_CPP__
# define ADSK_ELECTRON_ECADOBJECT_API XI_EXPORT
# else
# define ADSK_ELECTRON_ECADOBJECT_API
# endif
#else
# define ADSK_ELECTRON_ECADOBJECT_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Base class for all electronics design objects.
class EcadObject : public core::Base {
public:

    /// Identifier of the object.
    size_t id() const;

    ADSK_ELECTRON_ECADOBJECT_API static const char* classType();
    ADSK_ELECTRON_ECADOBJECT_API const char* objectType() const override;
    ADSK_ELECTRON_ECADOBJECT_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_ECADOBJECT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t id_raw() const = 0;
    virtual void placeholderEcadObject0() {}
    virtual void placeholderEcadObject1() {}
    virtual void placeholderEcadObject2() {}
    virtual void placeholderEcadObject3() {}
    virtual void placeholderEcadObject4() {}
    virtual void placeholderEcadObject5() {}
    virtual void placeholderEcadObject6() {}
    virtual void placeholderEcadObject7() {}
    virtual void placeholderEcadObject8() {}
    virtual void placeholderEcadObject9() {}
    virtual void placeholderEcadObject10() {}
    virtual void placeholderEcadObject11() {}
    virtual void placeholderEcadObject12() {}
    virtual void placeholderEcadObject13() {}
    virtual void placeholderEcadObject14() {}
    virtual void placeholderEcadObject15() {}
    virtual void placeholderEcadObject16() {}
    virtual void placeholderEcadObject17() {}
    virtual void placeholderEcadObject18() {}
    virtual void placeholderEcadObject19() {}
    virtual void placeholderEcadObject20() {}
    virtual void placeholderEcadObject21() {}
    virtual void placeholderEcadObject22() {}
    virtual void placeholderEcadObject23() {}
    virtual void placeholderEcadObject24() {}
    virtual void placeholderEcadObject25() {}
    virtual void placeholderEcadObject26() {}
    virtual void placeholderEcadObject27() {}
    virtual void placeholderEcadObject28() {}
    virtual void placeholderEcadObject29() {}
    virtual void placeholderEcadObject30() {}
};

// Inline wrappers

inline size_t EcadObject::id() const
{
    size_t res = id_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_ECADOBJECT_API