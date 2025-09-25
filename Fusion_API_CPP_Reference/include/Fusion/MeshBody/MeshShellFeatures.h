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
# ifdef __COMPILING_ADSK_FUSION_MESHSHELLFEATURES_CPP__
# define ADSK_FUSION_MESHSHELLFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_MESHSHELLFEATURES_API
# endif
#else
# define ADSK_FUSION_MESHSHELLFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class MeshShellFeature;
    class MeshShellFeatureInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing mesh shell features in a component
/// and supports the ability to create new mesh shell features.
class MeshShellFeatures : public core::Base {
public:

    /// Function that returns the specified mesh shell feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<MeshShellFeature> item(size_t index) const;

    /// The number of mesh shell features in the collection.
    size_t count() const;

    /// Creates a MeshShellFeatureInput object. Use properties and methods on this object
    /// to define the mesh shell you want to create and then use the add method, passing in
    /// the MeshShellFeatureInput object.
    /// mesh : A MeshBody in either a parametric or direct modeling design.
    /// Returns the newly created MeshShellFeatureInput object or null if the creation failed.
    core::Ptr<MeshShellFeatureInput> createInput(const core::Ptr<core::Base>& mesh) const;

    /// Creates a mesh shell feature.
    /// input : A MeshShellFeatureInput object that defines the desired shell feature. Use the createInput
    /// method to create a new MeshShellFeatureInput object and then use methods on it
    /// (the MeshShellFeatureInput object) to define the shell.
    /// Returns the newly created MeshShellFeatureInput object or null if the creation failed.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<MeshShellFeature> add(const core::Ptr<MeshShellFeatureInput>& input);

    /// Function that returns the specified MeshShell feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<MeshShellFeature> itemByName(const std::string& name) const;

    typedef MeshShellFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_MESHSHELLFEATURES_API static const char* classType();
    ADSK_FUSION_MESHSHELLFEATURES_API const char* objectType() const override;
    ADSK_FUSION_MESHSHELLFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHSHELLFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshShellFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual MeshShellFeatureInput* createInput_raw(core::Base* mesh) const = 0;
    virtual MeshShellFeature* add_raw(MeshShellFeatureInput* input) = 0;
    virtual MeshShellFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<MeshShellFeature> MeshShellFeatures::item(size_t index) const
{
    core::Ptr<MeshShellFeature> res = item_raw(index);
    return res;
}

inline size_t MeshShellFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<MeshShellFeatureInput> MeshShellFeatures::createInput(const core::Ptr<core::Base>& mesh) const
{
    core::Ptr<MeshShellFeatureInput> res = createInput_raw(mesh.get());
    return res;
}

inline core::Ptr<MeshShellFeature> MeshShellFeatures::add(const core::Ptr<MeshShellFeatureInput>& input)
{
    core::Ptr<MeshShellFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<MeshShellFeature> MeshShellFeatures::itemByName(const std::string& name) const
{
    core::Ptr<MeshShellFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void MeshShellFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHSHELLFEATURES_API