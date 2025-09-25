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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MERGEFACESFEATURES_CPP__
# define ADSK_FUSION_MERGEFACESFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_MERGEFACESFEATURES_API
# endif
#else
# define ADSK_FUSION_MERGEFACESFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
    class MergeFacesFeatureInput;
}}

namespace adsk { namespace fusion {

/// A collection object that supports the ability to merge faces. Merging faces is currently
/// limited to a Direct Modeling design or a body in a base feature. The result of merging faces
/// is a direct B-Rep modification, and the change is not represented as a feature in the browser.
/// As a result, a MergeFacesFeature object does not exist, and this collection only supports the
/// merging faces and not accessing any existing features.
class MergeFacesFeatures : public core::Base {
public:

    /// Creates a MergeFacesFeatureInput object for defining a simple merge face feature.
    /// Use properties and methods on this object to define the merge you want to create and then use the Add method,
    /// passing in the MergeFacesFeatureInput object.
    /// inputFaces : An array of BRepFace objects that define the faces the merge will be performed on.
    /// The faces need to be connected and from the same body (solid or surface).
    /// isChainSelection : A boolean value for setting whether or not faces that are connected and from the same body
    /// (solid or surface) will be included in the faces to merge. The default value is false.
    /// Returns the newly created MergeFacesFeatureInput object or null if the creation failed.
    core::Ptr<MergeFacesFeatureInput> createInput(const std::vector<core::Ptr<BRepFace>>& inputFaces, bool isChainSelection = false) const;

    /// Creates a new merge face feature.
    /// input : A MergeFacesFeatureInput object that defines the desired merge. Use the createInput
    /// method to create a new MergeFacesFeatureInput object and then use methods on it
    /// (the MergeFacesFeatureInput object) to define the merge.
    /// Returns true if successful. Because this is limited to direct modeling only that directly
    /// modifies the B-Rep body and does not create a MergeFacesFeature object there is nothing to
    /// return besides if the merge was successful or no.
    bool add(const core::Ptr<MergeFacesFeatureInput>& input);

    ADSK_FUSION_MERGEFACESFEATURES_API static const char* classType();
    ADSK_FUSION_MERGEFACESFEATURES_API const char* objectType() const override;
    ADSK_FUSION_MERGEFACESFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MERGEFACESFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MergeFacesFeatureInput* createInput_raw(BRepFace** inputFaces, size_t inputFaces_size, bool isChainSelection) const = 0;
    virtual bool add_raw(MergeFacesFeatureInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<MergeFacesFeatureInput> MergeFacesFeatures::createInput(const std::vector<core::Ptr<BRepFace>>& inputFaces, bool isChainSelection) const
{
    BRepFace** inputFaces_ = new BRepFace*[inputFaces.size()];
    for(size_t i=0; i<inputFaces.size(); ++i)
        inputFaces_[i] = inputFaces[i].get();

    core::Ptr<MergeFacesFeatureInput> res = createInput_raw(inputFaces_, inputFaces.size(), isChainSelection);
    delete[] inputFaces_;
    return res;
}

inline bool MergeFacesFeatures::add(const core::Ptr<MergeFacesFeatureInput>& input)
{
    bool res = add_raw(input.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MERGEFACESFEATURES_API