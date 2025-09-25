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
# ifdef __COMPILING_ADSK_FUSION_JOINTS_CPP__
# define ADSK_FUSION_JOINTS_API XI_EXPORT
# else
# define ADSK_FUSION_JOINTS_API
# endif
#else
# define ADSK_FUSION_JOINTS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class InferredJointInput;
    class Joint;
    class JointInput;
}}

namespace adsk { namespace fusion {

/// The collection of joints in this component. This provides access to all existing joints
/// and supports the ability to create new joints.
class Joints : public core::Base {
public:

    /// Function that returns the specified joint using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Joint> item(size_t index) const;

    /// Creates a JointInput object, which is the API equivalent to the Joint command dialog. You
    /// you use methods and properties on the returned class to set the desired options, similar to
    /// providing input and setting options in the Joint command dialog. Once the settings are defined
    /// you call the Joints.add method passing in the JointInput object to create the actual joint.
    /// geometryOrOriginOne : A JointGeometry or JointOrigin object that defines the first set of geometry of the joint.
    /// JointGeometry objects are created by using the various static methods on the JointGeometry class
    /// and JointOrigin objects are created through the JointOrigins object.
    /// geometryOrOriginTwo : A JointGeometry or JointOrigin object that defines the second set of geometry of the joint.
    /// JointGeometry objects are created by using the various static methods on the JointGeometry class
    /// and JointOrigin objects are created through the JointOrigins object.
    /// Returns the JointInput object or null if the creation failed.
    core::Ptr<JointInput> createInput(const core::Ptr<core::Base>& geometryOrOriginOne, const core::Ptr<core::Base>& geometryOrOriginTwo);

    /// Creates a new joint.
    /// input : The JointInput object that defines the geometry and various inputs that fully define a joint.
    /// A JointInput object is created using the Joints.createInput method.
    /// Returns the newly created Joint or null in the case of failure.
    core::Ptr<Joint> add(const core::Ptr<JointInput>& input);

    /// Returns number of joints in the collection.
    size_t count() const;

    /// Function that returns the specified joint using a name.
    /// name : The name of the item within the collection to return.
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<Joint> itemByName(const std::string& name) const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a joint input to define an inferred joint. Use functionality on
    /// the returned InferredJointInput to define the input needed to infer a joint.
    /// Returns an InferredJointInput.
    core::Ptr<InferredJointInput> createInferredJointInput();

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a new inferred joint.
    /// input : The InferredJointInput object that defines the pairs of geometry and other settings
    /// that Fusion will use to infer a joint from.
    /// An InferredJointInput object is created using the Joints.createInferredJointInput method.
    /// Returns the newly created Joint or fails if there is bad input.
    core::Ptr<Joint> addInferredJoint(const core::Ptr<InferredJointInput>& input);

    typedef Joint iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_JOINTS_API static const char* classType();
    ADSK_FUSION_JOINTS_API const char* objectType() const override;
    ADSK_FUSION_JOINTS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_JOINTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Joint* item_raw(size_t index) const = 0;
    virtual JointInput* createInput_raw(core::Base* geometryOrOriginOne, core::Base* geometryOrOriginTwo) = 0;
    virtual Joint* add_raw(JointInput* input) = 0;
    virtual size_t count_raw() const = 0;
    virtual Joint* itemByName_raw(const char* name) const = 0;
    virtual InferredJointInput* createInferredJointInput_raw() = 0;
    virtual Joint* addInferredJoint_raw(InferredJointInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<Joint> Joints::item(size_t index) const
{
    core::Ptr<Joint> res = item_raw(index);
    return res;
}

inline core::Ptr<JointInput> Joints::createInput(const core::Ptr<core::Base>& geometryOrOriginOne, const core::Ptr<core::Base>& geometryOrOriginTwo)
{
    core::Ptr<JointInput> res = createInput_raw(geometryOrOriginOne.get(), geometryOrOriginTwo.get());
    return res;
}

inline core::Ptr<Joint> Joints::add(const core::Ptr<JointInput>& input)
{
    core::Ptr<Joint> res = add_raw(input.get());
    return res;
}

inline size_t Joints::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<Joint> Joints::itemByName(const std::string& name) const
{
    core::Ptr<Joint> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<InferredJointInput> Joints::createInferredJointInput()
{
    core::Ptr<InferredJointInput> res = createInferredJointInput_raw();
    return res;
}

inline core::Ptr<Joint> Joints::addInferredJoint(const core::Ptr<InferredJointInput>& input)
{
    core::Ptr<Joint> res = addInferredJoint_raw(input.get());
    return res;
}

template <class OutputIterator> inline void Joints::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_JOINTS_API