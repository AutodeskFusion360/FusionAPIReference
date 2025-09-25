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
# ifdef __COMPILING_ADSK_FUSION_MERGEFACESFEATUREINPUT_CPP__
# define ADSK_FUSION_MERGEFACESFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_MERGEFACESFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_MERGEFACESFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a merge
/// face feature.
class MergeFacesFeatureInput : public core::Base {
public:

    /// Gets and sets an array of BRepFace objects that define the faces the merge will be performed on.
    /// The faces need to be connected and from the same body (solid or surface).
    std::vector<core::Ptr<BRepFace>> inputFaces() const;
    bool inputFaces(const std::vector<core::Ptr<BRepFace>>& value);

    /// Get and sets whether or not faces that are tangentially connected and from the same body
    /// (solid or surface) will be included in the faces to merge
    bool isChainSelection() const;
    bool isChainSelection(bool value);

    /// In order for geometry to be transformed correctly, an Occurrence for creation needs to be
    /// specified when the Merge is created based on geometry (e.g. faces)
    /// in another component AND (Merge) is not in the root component.
    /// The CreationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    ADSK_FUSION_MERGEFACESFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_MERGEFACESFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_MERGEFACESFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MERGEFACESFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFace** inputFaces_raw(size_t& return_size) const = 0;
    virtual bool inputFaces_raw(BRepFace** value, size_t value_size) = 0;
    virtual bool isChainSelection_raw() const = 0;
    virtual bool isChainSelection_raw(bool value) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<BRepFace>> MergeFacesFeatureInput::inputFaces() const
{
    std::vector<core::Ptr<BRepFace>> res;
    size_t s;

    BRepFace** p= inputFaces_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MergeFacesFeatureInput::inputFaces(const std::vector<core::Ptr<BRepFace>>& value)
{
    BRepFace** value_ = new BRepFace*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = inputFaces_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool MergeFacesFeatureInput::isChainSelection() const
{
    bool res = isChainSelection_raw();
    return res;
}

inline bool MergeFacesFeatureInput::isChainSelection(bool value)
{
    return isChainSelection_raw(value);
}

inline core::Ptr<Occurrence> MergeFacesFeatureInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool MergeFacesFeatureInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MERGEFACESFEATUREINPUT_API