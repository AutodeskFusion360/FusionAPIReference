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
#include "../VolumeTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef VOLUMEXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_VOLUME_GRAPHNODEPROPERTY_CPP__
# define ADSK_VOLUME_GRAPHNODEPROPERTY_API XI_EXPORT
# else
# define ADSK_VOLUME_GRAPHNODEPROPERTY_API
# endif
#else
# define ADSK_VOLUME_GRAPHNODEPROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Class for representing a property of a graph node. These can be of many types.
class GraphNodeProperty : public core::Base {
public:

    /// Gets the internal name of the property.
    std::string name() const;

    /// Returns the description of this property.
    /// This description is localized and can change based on the current language.
    std::string description() const;

    ADSK_VOLUME_GRAPHNODEPROPERTY_API static const char* classType();
    ADSK_VOLUME_GRAPHNODEPROPERTY_API const char* objectType() const override;
    ADSK_VOLUME_GRAPHNODEPROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_GRAPHNODEPROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual char* description_raw() const = 0;
    virtual void placeholderGraphNodeProperty0() {}
    virtual void placeholderGraphNodeProperty1() {}
    virtual void placeholderGraphNodeProperty2() {}
    virtual void placeholderGraphNodeProperty3() {}
    virtual void placeholderGraphNodeProperty4() {}
    virtual void placeholderGraphNodeProperty5() {}
    virtual void placeholderGraphNodeProperty6() {}
    virtual void placeholderGraphNodeProperty7() {}
    virtual void placeholderGraphNodeProperty8() {}
    virtual void placeholderGraphNodeProperty9() {}
    virtual void placeholderGraphNodeProperty10() {}
    virtual void placeholderGraphNodeProperty11() {}
    virtual void placeholderGraphNodeProperty12() {}
    virtual void placeholderGraphNodeProperty13() {}
};

// Inline wrappers

inline std::string GraphNodeProperty::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string GraphNodeProperty::description() const
{
    std::string res;

    char* p= description_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_GRAPHNODEPROPERTY_API