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
# ifdef __COMPILING_ADSK_FUSION_THREADFEATURES_CPP__
# define ADSK_FUSION_THREADFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_THREADFEATURES_API
# endif
#else
# define ADSK_FUSION_THREADFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ThreadDataQuery;
    class ThreadFeature;
    class ThreadFeatureInput;
    class ThreadInfo;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing thread features in a component
/// and supports the ability to create new thread features.
/// 
/// The creation of a tapped hole also results in the creation of a thread feature. These
/// thread features are also returned by this collection, even though they aren't present
/// in the timeline and are represented by the hole feature.
class ThreadFeatures : public core::Base {
public:

    /// Function that returns the specified thread feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ThreadFeature> item(size_t index) const;

    /// The number of thread features in the collection.
    size_t count() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Property that returns the ThreadDataQuery object. When creating a thread, the type and size of the thread
    /// is specified by referencing thread information defined in one of the XML files in the ThreadData folder.
    /// The ThreadDataQuery is an object that supports methods to query the existing threads defined in these files.
    core::Ptr<ThreadDataQuery> threadDataQuery() const;

    /// Creates a ThreadFeatureInput object. This object is the API equivalent of the Thread feature dialog. It collects
    /// the required input and once fully defined you can pass this object to the ThreadFeatures.add method to create
    /// the thread feature.
    /// inputCylindricalFaces : A single cylindrical BRep face or a collection of cylindrical BRep faces to thread.
    /// A collection of faces must all be from either holes (for internal threading) or all from cylinders (for external threading).
    /// Both internal and external threads cannot be created in the same feature.
    /// The faces in a collection can come from different bodies or components.
    /// threadInfo : The ThreadInfo object that defines the type and size of the thread to create. When creating a thread, the type and size
    /// of the thread is specified by referencing thread information defined in one of the XML files in the ThreadData folder within
    /// the Fusion install folder. You can use the ThreadDataQuery object to query these XML files to find the specific thread you
    /// want to create. The ThreadDataQuery object can be obtained by using the ThreadFeatures.threadDataQuery property. You then use
    /// this information to create a ThreadInfo object using the ThreadFeatures.createThreadInfo method.
    /// Returns the newly created ThreadFeatureInput object or null/None if the creation failed.
    core::Ptr<ThreadFeatureInput> createInput(const core::Ptr<core::Base>& inputCylindricalFaces, const core::Ptr<ThreadInfo>& threadInfo) const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Method that creates a new ThreadInfo object that can be used in creating thread features.
    /// The ThreadInfo object that defines the type and size of the thread to create. When creating a thread, the type and size
    /// of the thread is specified by referencing thread information defined in one of the XML files in the ThreadData folder within
    /// the Fusion install folder. You can use the ThreadDataQuery object to query these XML files to find the specific thread you
    /// want to create. The ThreadDataQuery object can be obtained by using the ThreadFeatures.threadDataQuery property.
    /// isInternal : Input Boolean that indicates if the thread is an internal or external thread. A value of true indicates an internal thread.
    /// threadType : Input string that defines the thread type.
    /// threadDesignation : Input string that contains the thread designation.
    /// This is input as the full thread designation that will be used in a drawing for the thread call-out.
    /// The nominal size and pitch information are extracted from the designation.
    /// threadClass : Input string that defines the thread class.
    /// Returns the newly created ThreadInfo object or null if the creation failed.
    core::Ptr<ThreadInfo> createThreadInfo(bool isInternal, const std::string& threadType, const std::string& threadDesignation, const std::string& threadClass) const;

    /// Creates a new thread feature.
    /// input : A ThreadFeatureInput object that defines the desired thread. Use the createInput
    /// method to create a new ThreadFeatureInput object and then use methods on it
    /// (the ThreadFeatureInput object) to define the thread.
    /// Returns the newly created ThreadFeature object or null if the creation failed.
    core::Ptr<ThreadFeature> add(const core::Ptr<ThreadFeatureInput>& input);

    /// Function that returns the specified thread feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<ThreadFeature> itemByName(const std::string& name) const;

    typedef ThreadFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_THREADFEATURES_API static const char* classType();
    ADSK_FUSION_THREADFEATURES_API const char* objectType() const override;
    ADSK_FUSION_THREADFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_THREADFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ThreadFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ThreadDataQuery* threadDataQuery_raw() const = 0;
    virtual ThreadFeatureInput* createInput_raw(core::Base* inputCylindricalFaces, ThreadInfo* threadInfo) const = 0;
    virtual ThreadInfo* createThreadInfo_raw(bool isInternal, const char* threadType, const char* threadDesignation, const char* threadClass) const = 0;
    virtual ThreadFeature* add_raw(ThreadFeatureInput* input) = 0;
    virtual ThreadFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<ThreadFeature> ThreadFeatures::item(size_t index) const
{
    core::Ptr<ThreadFeature> res = item_raw(index);
    return res;
}

inline size_t ThreadFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ThreadDataQuery> ThreadFeatures::threadDataQuery() const
{
    core::Ptr<ThreadDataQuery> res = threadDataQuery_raw();
    return res;
}

inline core::Ptr<ThreadFeatureInput> ThreadFeatures::createInput(const core::Ptr<core::Base>& inputCylindricalFaces, const core::Ptr<ThreadInfo>& threadInfo) const
{
    core::Ptr<ThreadFeatureInput> res = createInput_raw(inputCylindricalFaces.get(), threadInfo.get());
    return res;
}

inline core::Ptr<ThreadInfo> ThreadFeatures::createThreadInfo(bool isInternal, const std::string& threadType, const std::string& threadDesignation, const std::string& threadClass) const
{
    core::Ptr<ThreadInfo> res = createThreadInfo_raw(isInternal, threadType.c_str(), threadDesignation.c_str(), threadClass.c_str());
    return res;
}

inline core::Ptr<ThreadFeature> ThreadFeatures::add(const core::Ptr<ThreadFeatureInput>& input)
{
    core::Ptr<ThreadFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<ThreadFeature> ThreadFeatures::itemByName(const std::string& name) const
{
    core::Ptr<ThreadFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void ThreadFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_THREADFEATURES_API