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
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MOTIONLINKS_CPP__
# define ADSK_FUSION_MOTIONLINKS_API XI_EXPORT
# else
# define ADSK_FUSION_MOTIONLINKS_API
# endif
#else
# define ADSK_FUSION_MOTIONLINKS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class MotionLink;
    class MotionLinkInput;
}}

namespace adsk { namespace fusion {

/// The collection of MotionLinks in this component. This provides access to all existing MotionLinks
/// and supports the ability to create new MotionLinks.
class MotionLinks : public core::Base {
public:

    /// Function that returns the specified MotionLink using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<MotionLink> item(size_t index) const;

    /// Creates a MotionLinkInput object, which is the API equivalent to the Motion Link command dialog.
    /// You can use methods and properties on the returned object to set the desired options, similar to
    /// providing input and setting options in the MotionLink command dialog. Once the settings are defined
    /// you call the MotionLinks.add method passing in the MotionLinkInput object to create the actual MotionLink.
    /// jointOne : Inputs the first Joint or AsBuiltJoint to link its motion(s). If the jointTwo is set to null, then two motions from the jointOne will be linked,
    /// and in this case a valid Joint or AsBuiltJoint for jointOne should have its joint motion type of BallJointType, CylindricalJointType, PinSlotJointType or PlanarJointType.
    /// A Joint or AsBuiltJoint whose joint motion is a RigidJointMotion type is never valid as the first joint.
    /// jointTwo : Inputs the second Joint or AsBuiltJoint to link its motion. If this is set to null, then the two motions from the jointOne will be linked.
    /// A Joint or AsBuiltJoint whose joint motion is a RigidJointMotion type is never valid as the second joint.
    /// Returns the MotionLinkInput object or null if the creation failed.
    core::Ptr<MotionLinkInput> createInput(const core::Ptr<core::Base>& jointOne, const core::Ptr<core::Base>& jointTwo = NULL);

    /// Creates a new MotionLink.
    /// input : The MotionLinkInput object that defines various inputs that fully define a MotionLink.
    /// A MotionLinkInput object is created using the MotionLinks.createInput method.
    /// Returns the newly created MotionLink or null in the case of failure.
    core::Ptr<MotionLink> add(const core::Ptr<MotionLinkInput>& input);

    /// Returns number of MotionLinks in the collection.
    size_t count() const;

    /// Function that returns the specified MotionLink using a name.
    /// name : The name of the item within the collection to return.
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<MotionLink> itemByName(const std::string& name) const;

    typedef MotionLink iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_MOTIONLINKS_API static const char* classType();
    ADSK_FUSION_MOTIONLINKS_API const char* objectType() const override;
    ADSK_FUSION_MOTIONLINKS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MOTIONLINKS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MotionLink* item_raw(size_t index) const = 0;
    virtual MotionLinkInput* createInput_raw(core::Base* jointOne, core::Base* jointTwo) = 0;
    virtual MotionLink* add_raw(MotionLinkInput* input) = 0;
    virtual size_t count_raw() const = 0;
    virtual MotionLink* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<MotionLink> MotionLinks::item(size_t index) const
{
    core::Ptr<MotionLink> res = item_raw(index);
    return res;
}

inline core::Ptr<MotionLinkInput> MotionLinks::createInput(const core::Ptr<core::Base>& jointOne, const core::Ptr<core::Base>& jointTwo)
{
    core::Ptr<MotionLinkInput> res = createInput_raw(jointOne.get(), jointTwo.get());
    return res;
}

inline core::Ptr<MotionLink> MotionLinks::add(const core::Ptr<MotionLinkInput>& input)
{
    core::Ptr<MotionLink> res = add_raw(input.get());
    return res;
}

inline size_t MotionLinks::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<MotionLink> MotionLinks::itemByName(const std::string& name) const
{
    core::Ptr<MotionLink> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void MotionLinks::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MOTIONLINKS_API