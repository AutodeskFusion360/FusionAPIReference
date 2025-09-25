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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_JOINTORIGINS_CPP__
# define ADSK_FUSION_JOINTORIGINS_API XI_EXPORT
# else
# define ADSK_FUSION_JOINTORIGINS_API
# endif
#else
# define ADSK_FUSION_JOINTORIGINS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class JointGeometry;
    class JointOrigin;
    class JointOriginInput;
}}

namespace adsk { namespace fusion {

/// The collection of joint origins in this component. This provides access to all existing
/// joint origins and supports the ability to create new joint origins.
class JointOrigins : public core::Base {
public:

    /// Function that returns the specified joint origin using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<JointOrigin> item(size_t index) const;

    /// Function that returns the specified joint origin using a name.
    /// name : The name of the item within the collection to return.
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<JointOrigin> itemByName(const std::string& name) const;

    /// Returns number of joint origins in the collection.
    size_t count() const;

    /// Creates a JointOriginInput object which is used to collect all of the information
    /// needed to create a simple joint origin. The creation of the input object takes the required
    /// input as the geometry argument and you can optionally use methods and properties on the created
    /// JointOriginInput to set other optional settings. The JointOrigin is created by calling the add
    /// method of the JointOrigins object and passing it the JointOriginInput object.
    /// geometry : A JointGeometry object that defines the geometry the joint origin will be created on.
    /// Returns a JointOriginInput object if successfully created and null if it fails.
    core::Ptr<JointOriginInput> createInput(const core::Ptr<JointGeometry>& geometry);

    /// Create a new joint origin.
    /// input : A JointOriginInput object that full defines all of the information needed to create a joint origin.
    /// You create a JointOriginInput by using the createInput method of the JointOrigins object.
    /// Returns a JointOrigin object if successfully created and null if it fails.
    core::Ptr<JointOrigin> add(const core::Ptr<JointOriginInput>& input);

    typedef JointOrigin iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_JOINTORIGINS_API static const char* classType();
    ADSK_FUSION_JOINTORIGINS_API const char* objectType() const override;
    ADSK_FUSION_JOINTORIGINS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_JOINTORIGINS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual JointOrigin* item_raw(size_t index) const = 0;
    virtual JointOrigin* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual JointOriginInput* createInput_raw(JointGeometry* geometry) = 0;
    virtual JointOrigin* add_raw(JointOriginInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<JointOrigin> JointOrigins::item(size_t index) const
{
    core::Ptr<JointOrigin> res = item_raw(index);
    return res;
}

inline core::Ptr<JointOrigin> JointOrigins::itemByName(const std::string& name) const
{
    core::Ptr<JointOrigin> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t JointOrigins::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<JointOriginInput> JointOrigins::createInput(const core::Ptr<JointGeometry>& geometry)
{
    core::Ptr<JointOriginInput> res = createInput_raw(geometry.get());
    return res;
}

inline core::Ptr<JointOrigin> JointOrigins::add(const core::Ptr<JointOriginInput>& input)
{
    core::Ptr<JointOrigin> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void JointOrigins::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_JOINTORIGINS_API