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
# ifdef __COMPILING_ADSK_FUSION_ASBUILTJOINTS_CPP__
# define ADSK_FUSION_ASBUILTJOINTS_API XI_EXPORT
# else
# define ADSK_FUSION_ASBUILTJOINTS_API
# endif
#else
# define ADSK_FUSION_ASBUILTJOINTS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class AsBuiltJoint;
    class AsBuiltJointInput;
    class JointGeometry;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// The collection of as-built joints in this component. This provides access to all existing
/// as-built joints and supports the ability to create new as-built joints.
class AsBuiltJoints : public core::Base {
public:

    /// Function that returns the specified as-built joint using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<AsBuiltJoint> item(size_t index) const;

    /// Function that returns the specified as-built joint using a name.
    /// name : The name of the item within the collection to return.
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<AsBuiltJoint> itemByName(const std::string& name) const;

    /// Returns number of joint origins in the collection.
    size_t count() const;

    /// Creates an AsBuiltJointInput object which is used to collect all of the information needed
    /// to create an as-built joint. This object is equivalent to the as-built joint dialog in the
    /// user-interface in that it doesn't represent an actual joint but just the information needed
    /// to create an as-built joint. Once this is fully defined the add method can be called, passing
    /// this object in to create the actual joint.
    /// occurrenceOne : Specifies the first of two occurrences the joint is between.
    /// occurrenceTwo : Specifies the second of two occurrences the joint is between.
    /// geometry : Specifies the geometry of where the joint will be positioned. If the as-built joint is
    /// a rigid joint, this argument should be null because no geometry is needed.
    /// Returns the new AsBuiltJointInput object or null in the case of failure.
    core::Ptr<AsBuiltJointInput> createInput(const core::Ptr<Occurrence>& occurrenceOne, const core::Ptr<Occurrence>& occurrenceTwo, const core::Ptr<JointGeometry>& geometry);

    /// Creates a new as-built joint.
    /// input : An AsBuiltJointInput object that was created using the AsBuiltJoints.createInput method and then fully defined
    /// using the properties and methods on the AsBuiltJointInput object.
    /// Returns the new AsBuiltJoint object or null in the case of failure.
    core::Ptr<AsBuiltJoint> add(const core::Ptr<AsBuiltJointInput>& input);

    typedef AsBuiltJoint iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_ASBUILTJOINTS_API static const char* classType();
    ADSK_FUSION_ASBUILTJOINTS_API const char* objectType() const override;
    ADSK_FUSION_ASBUILTJOINTS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ASBUILTJOINTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual AsBuiltJoint* item_raw(size_t index) const = 0;
    virtual AsBuiltJoint* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual AsBuiltJointInput* createInput_raw(Occurrence* occurrenceOne, Occurrence* occurrenceTwo, JointGeometry* geometry) = 0;
    virtual AsBuiltJoint* add_raw(AsBuiltJointInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<AsBuiltJoint> AsBuiltJoints::item(size_t index) const
{
    core::Ptr<AsBuiltJoint> res = item_raw(index);
    return res;
}

inline core::Ptr<AsBuiltJoint> AsBuiltJoints::itemByName(const std::string& name) const
{
    core::Ptr<AsBuiltJoint> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t AsBuiltJoints::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<AsBuiltJointInput> AsBuiltJoints::createInput(const core::Ptr<Occurrence>& occurrenceOne, const core::Ptr<Occurrence>& occurrenceTwo, const core::Ptr<JointGeometry>& geometry)
{
    core::Ptr<AsBuiltJointInput> res = createInput_raw(occurrenceOne.get(), occurrenceTwo.get(), geometry.get());
    return res;
}

inline core::Ptr<AsBuiltJoint> AsBuiltJoints::add(const core::Ptr<AsBuiltJointInput>& input)
{
    core::Ptr<AsBuiltJoint> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void AsBuiltJoints::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ASBUILTJOINTS_API