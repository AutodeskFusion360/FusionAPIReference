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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FULLROUNDFILLETFACESET_CPP__
# define ADSK_FUSION_FULLROUNDFILLETFACESET_API XI_EXPORT
# else
# define ADSK_FUSION_FULLROUNDFILLETFACESET_API
# endif
#else
# define ADSK_FUSION_FULLROUNDFILLETFACESET_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
}}

namespace adsk { namespace fusion {

/// The class for the full round fillet face set.
class FullRoundFilletFaceSet : public core::Base {
public:

    /// Gets the center face associated with this full round fillet face set.
    /// When a center face has tangentially connected faces then
    /// all the tangentially connected faces will be filleted automatically.
    /// 
    /// When this face set is associated with an existing fillet feature, to get the center face you
    /// need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True).
    core::Ptr<BRepFace> centerFace() const;

    /// Gets the side one faces.
    /// 
    /// When this face set is associated with an existing fillet feature, to get the side one faces you
    /// need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True).
    std::vector<core::Ptr<BRepFace>> sideOneFaces() const;

    /// Gets the side two faces.
    /// 
    /// When this face set is associated with an existing fillet feature, to get the side two faces you
    /// need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True).
    std::vector<core::Ptr<BRepFace>> sideTwoFaces() const;

    /// Property that returns a boolean value indicating whether the side faces are used as automatically inferred side faces.
    /// It returns true indicating that the side faces are not being shown in the dialog when the user edits the feature.
    /// Calling the setSideFaces method will cause this property to be changed to false.
    bool areAutomaticSideFaces() const;

    /// Deletes the full round fillet face set from the fillet.
    /// 
    /// When this face set is associated with an existing fillet feature, to use this method you
    /// need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True).
    /// Returns true if the operation was successful.
    bool deleteMe();

    ADSK_FUSION_FULLROUNDFILLETFACESET_API static const char* classType();
    ADSK_FUSION_FULLROUNDFILLETFACESET_API const char* objectType() const override;
    ADSK_FUSION_FULLROUNDFILLETFACESET_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FULLROUNDFILLETFACESET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFace* centerFace_raw() const = 0;
    virtual BRepFace** sideOneFaces_raw(size_t& return_size) const = 0;
    virtual BRepFace** sideTwoFaces_raw(size_t& return_size) const = 0;
    virtual bool areAutomaticSideFaces_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual void placeholderFullRoundFilletFaceSet0() {}
    virtual void placeholderFullRoundFilletFaceSet1() {}
    virtual void placeholderFullRoundFilletFaceSet2() {}
    virtual void placeholderFullRoundFilletFaceSet3() {}
    virtual void placeholderFullRoundFilletFaceSet4() {}
    virtual void placeholderFullRoundFilletFaceSet5() {}
    virtual void placeholderFullRoundFilletFaceSet6() {}
    virtual void placeholderFullRoundFilletFaceSet7() {}
    virtual void placeholderFullRoundFilletFaceSet8() {}
    virtual void placeholderFullRoundFilletFaceSet9() {}
    virtual void placeholderFullRoundFilletFaceSet10() {}
    virtual void placeholderFullRoundFilletFaceSet11() {}
    virtual void placeholderFullRoundFilletFaceSet12() {}
    virtual void placeholderFullRoundFilletFaceSet13() {}
    virtual void placeholderFullRoundFilletFaceSet14() {}
    virtual void placeholderFullRoundFilletFaceSet15() {}
    virtual void placeholderFullRoundFilletFaceSet16() {}
    virtual void placeholderFullRoundFilletFaceSet17() {}
    virtual void placeholderFullRoundFilletFaceSet18() {}
    virtual void placeholderFullRoundFilletFaceSet19() {}
    virtual void placeholderFullRoundFilletFaceSet20() {}
    virtual void placeholderFullRoundFilletFaceSet21() {}
    virtual void placeholderFullRoundFilletFaceSet22() {}
    virtual void placeholderFullRoundFilletFaceSet23() {}
    virtual void placeholderFullRoundFilletFaceSet24() {}
    virtual void placeholderFullRoundFilletFaceSet25() {}
    virtual void placeholderFullRoundFilletFaceSet26() {}
};

// Inline wrappers

inline core::Ptr<BRepFace> FullRoundFilletFaceSet::centerFace() const
{
    core::Ptr<BRepFace> res = centerFace_raw();
    return res;
}

inline std::vector<core::Ptr<BRepFace>> FullRoundFilletFaceSet::sideOneFaces() const
{
    std::vector<core::Ptr<BRepFace>> res;
    size_t s;

    BRepFace** p= sideOneFaces_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<BRepFace>> FullRoundFilletFaceSet::sideTwoFaces() const
{
    std::vector<core::Ptr<BRepFace>> res;
    size_t s;

    BRepFace** p= sideTwoFaces_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool FullRoundFilletFaceSet::areAutomaticSideFaces() const
{
    bool res = areAutomaticSideFaces_raw();
    return res;
}

inline bool FullRoundFilletFaceSet::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FULLROUNDFILLETFACESET_API