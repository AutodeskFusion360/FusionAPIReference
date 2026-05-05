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
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FULLROUNDFILLETFACESETS_CPP__
# define ADSK_FUSION_FULLROUNDFILLETFACESETS_API XI_EXPORT
# else
# define ADSK_FUSION_FULLROUNDFILLETFACESETS_API
# endif
#else
# define ADSK_FUSION_FULLROUNDFILLETFACESETS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
    class FullRoundFilletFaceSet;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all existing full round fillet face sets associated with a full round fillet feature
/// or a FullRoundFilletFeatureInput object, and allows adding new full round fillet face sets.
class FullRoundFilletFaceSets : public core::Base {
public:

    /// Function that returns the specified full round fillet face set using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<FullRoundFilletFaceSet> item(size_t index) const;

    /// The number of full round fillet face sets in the collection.
    size_t count() const;

    /// Adds a set of faces to be filleted to the full round fillet feature.
    /// 
    /// When this face set is associated with an existing fillet feature, to use this method you
    /// need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True).
    /// centerFace : Input a BRepFace object that specifies the center face to be filleted.
    /// 
    /// When specifying a center face which has tangentially connected faces then
    /// all the tangentially connected faces will be filleted automatically.
    /// sideOneFaces : Input array of BRepFace objects to specify the side one faces.
    /// Only one BRepFace object which is adjacent to the center face can be provided if you set areAutomaticSideFaces to true.
    /// sideTwoFaces : Input array of BRepFace objects to specify the side two faces.
    /// Only one BRepFace object which is adjacent to the center face can be provided if you set areAutomaticSideFaces to true.
    /// areAutomaticSideFaces : Optional input boolean that specifies whether the input side faces are used as automatically inferred side faces.
    /// It defaults to true, which results in the side faces not being shown in the dialog when the user edits the feature.
    /// The same as when the user infers the side faces from the center face selection.
    /// When this is set to false, the side faces will be shown in the dialog as if the user had used the side face selection inputs when creating the feature.
    /// For the default to apply the input must meet the requirements that one side one face and one side two face is input
    /// and those faces are connected to the center face.
    /// Returns the newly created FullRoundFilletFaceSet or null in the case of failure.
    core::Ptr<FullRoundFilletFaceSet> add(const core::Ptr<BRepFace>& centerFace, const std::vector<core::Ptr<BRepFace>>& sideOneFaces, const std::vector<core::Ptr<BRepFace>>& sideTwoFaces, bool areAutomaticSideFaces = true);

    typedef FullRoundFilletFaceSet iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_FULLROUNDFILLETFACESETS_API static const char* classType();
    ADSK_FUSION_FULLROUNDFILLETFACESETS_API const char* objectType() const override;
    ADSK_FUSION_FULLROUNDFILLETFACESETS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FULLROUNDFILLETFACESETS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual FullRoundFilletFaceSet* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual FullRoundFilletFaceSet* add_raw(BRepFace* centerFace, BRepFace** sideOneFaces, size_t sideOneFaces_size, BRepFace** sideTwoFaces, size_t sideTwoFaces_size, bool areAutomaticSideFaces) = 0;
};

// Inline wrappers

inline core::Ptr<FullRoundFilletFaceSet> FullRoundFilletFaceSets::item(size_t index) const
{
    core::Ptr<FullRoundFilletFaceSet> res = item_raw(index);
    return res;
}

inline size_t FullRoundFilletFaceSets::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<FullRoundFilletFaceSet> FullRoundFilletFaceSets::add(const core::Ptr<BRepFace>& centerFace, const std::vector<core::Ptr<BRepFace>>& sideOneFaces, const std::vector<core::Ptr<BRepFace>>& sideTwoFaces, bool areAutomaticSideFaces)
{
    BRepFace** sideOneFaces_ = new BRepFace*[sideOneFaces.size()];
    for(size_t i=0; i<sideOneFaces.size(); ++i)
        sideOneFaces_[i] = sideOneFaces[i].get();
    BRepFace** sideTwoFaces_ = new BRepFace*[sideTwoFaces.size()];
    for(size_t i=0; i<sideTwoFaces.size(); ++i)
        sideTwoFaces_[i] = sideTwoFaces[i].get();

    core::Ptr<FullRoundFilletFaceSet> res = add_raw(centerFace.get(), sideOneFaces_, sideOneFaces.size(), sideTwoFaces_, sideTwoFaces.size(), areAutomaticSideFaces);
    delete[] sideOneFaces_;
    delete[] sideTwoFaces_;
    return res;
}

template <class OutputIterator> inline void FullRoundFilletFaceSets::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FULLROUNDFILLETFACESETS_API