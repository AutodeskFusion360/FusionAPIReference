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
#include "GraphNodeProperty.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef VOLUMEXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_VOLUME_COLORGRAPHNODEPROPERTY_CPP__
# define ADSK_VOLUME_COLORGRAPHNODEPROPERTY_API XI_EXPORT
# else
# define ADSK_VOLUME_COLORGRAPHNODEPROPERTY_API
# endif
#else
# define ADSK_VOLUME_COLORGRAPHNODEPROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Color;
}}

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A property value that is a color.
class ColorGraphNodeProperty : public GraphNodeProperty {
public:

    /// Get or set the value of the property.
    core::Ptr<core::Color> value() const;
    bool value(const core::Ptr<core::Color>& value);

    ADSK_VOLUME_COLORGRAPHNODEPROPERTY_API static const char* classType();
    ADSK_VOLUME_COLORGRAPHNODEPROPERTY_API const char* objectType() const override;
    ADSK_VOLUME_COLORGRAPHNODEPROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_COLORGRAPHNODEPROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Color* value_raw() const = 0;
    virtual bool value_raw(core::Color* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Color> ColorGraphNodeProperty::value() const
{
    core::Ptr<core::Color> res = value_raw();
    return res;
}

inline bool ColorGraphNodeProperty::value(const core::Ptr<core::Color>& value)
{
    return value_raw(value.get());
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_COLORGRAPHNODEPROPERTY_API