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
# ifdef __COMPILING_ADSK_VOLUME_TRANSFORMREFGRAPHNODEPROPERTY_CPP__
# define ADSK_VOLUME_TRANSFORMREFGRAPHNODEPROPERTY_API XI_EXPORT
# else
# define ADSK_VOLUME_TRANSFORMREFGRAPHNODEPROPERTY_API
# endif
#else
# define ADSK_VOLUME_TRANSFORMREFGRAPHNODEPROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
}}

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A property value that is provides a transform to a node. This is set with an Occurrence of a Component.
class TransformRefGraphNodeProperty : public GraphNodeProperty {
public:

    /// Get or set the value of the property. This should be the occurrence of a component.
    core::Ptr<fusion::Occurrence> value() const;
    bool value(const core::Ptr<fusion::Occurrence>& value);

    ADSK_VOLUME_TRANSFORMREFGRAPHNODEPROPERTY_API static const char* classType();
    ADSK_VOLUME_TRANSFORMREFGRAPHNODEPROPERTY_API const char* objectType() const override;
    ADSK_VOLUME_TRANSFORMREFGRAPHNODEPROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_TRANSFORMREFGRAPHNODEPROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual fusion::Occurrence* value_raw() const = 0;
    virtual bool value_raw(fusion::Occurrence* value) = 0;
};

// Inline wrappers

inline core::Ptr<fusion::Occurrence> TransformRefGraphNodeProperty::value() const
{
    core::Ptr<fusion::Occurrence> res = value_raw();
    return res;
}

inline bool TransformRefGraphNodeProperty::value(const core::Ptr<fusion::Occurrence>& value)
{
    return value_raw(value.get());
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_TRANSFORMREFGRAPHNODEPROPERTY_API