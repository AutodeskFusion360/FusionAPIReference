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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FILLETEDGESET_CPP__
# define ADSK_FUSION_FILLETEDGESET_API XI_EXPORT
# else
# define ADSK_FUSION_FILLETEDGESET_API
# endif
#else
# define ADSK_FUSION_FILLETEDGESET_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// The base class for the classes that define the different types of fillet edge sets.
class FilletEdgeSet : public core::Base {
public:

    /// Gets and sets the Tangent chain for fillet. This enables tangent chain option for fillet.
    bool isTangentChain() const;
    bool isTangentChain(bool value);

    /// Gets and sets the continuity of the fillet edge set. Valid values are
    /// TangentSurfaceContinuityType and CurvatureSurfaceContinuityType.
    SurfaceContinuityTypes continuity() const;
    bool continuity(SurfaceContinuityTypes value);

    /// Returns the model parameter that controls the G1 or G2 tangency weight of the fillet.
    /// It must be a real value between 0.1 and 2.0 inclusive. You can edit the tangency weight
    /// by using the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> tangencyWeight() const;

    /// Deletes the fillet edge set from the fillet.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// Returns true if the operation was successful.
    bool deleteMe();

    ADSK_FUSION_FILLETEDGESET_API static const char* classType();
    ADSK_FUSION_FILLETEDGESET_API const char* objectType() const override;
    ADSK_FUSION_FILLETEDGESET_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FILLETEDGESET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isTangentChain_raw() const = 0;
    virtual bool isTangentChain_raw(bool value) = 0;
    virtual SurfaceContinuityTypes continuity_raw() const = 0;
    virtual bool continuity_raw(SurfaceContinuityTypes value) = 0;
    virtual ModelParameter* tangencyWeight_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual void placeholderFilletEdgeSet0() {}
    virtual void placeholderFilletEdgeSet1() {}
    virtual void placeholderFilletEdgeSet2() {}
    virtual void placeholderFilletEdgeSet3() {}
    virtual void placeholderFilletEdgeSet4() {}
    virtual void placeholderFilletEdgeSet5() {}
    virtual void placeholderFilletEdgeSet6() {}
    virtual void placeholderFilletEdgeSet7() {}
    virtual void placeholderFilletEdgeSet8() {}
    virtual void placeholderFilletEdgeSet9() {}
    virtual void placeholderFilletEdgeSet10() {}
    virtual void placeholderFilletEdgeSet11() {}
    virtual void placeholderFilletEdgeSet12() {}
    virtual void placeholderFilletEdgeSet13() {}
    virtual void placeholderFilletEdgeSet14() {}
    virtual void placeholderFilletEdgeSet15() {}
    virtual void placeholderFilletEdgeSet16() {}
    virtual void placeholderFilletEdgeSet17() {}
    virtual void placeholderFilletEdgeSet18() {}
    virtual void placeholderFilletEdgeSet19() {}
    virtual void placeholderFilletEdgeSet20() {}
    virtual void placeholderFilletEdgeSet21() {}
    virtual void placeholderFilletEdgeSet22() {}
    virtual void placeholderFilletEdgeSet23() {}
    virtual void placeholderFilletEdgeSet24() {}
    virtual void placeholderFilletEdgeSet25() {}
};

// Inline wrappers

inline bool FilletEdgeSet::isTangentChain() const
{
    bool res = isTangentChain_raw();
    return res;
}

inline bool FilletEdgeSet::isTangentChain(bool value)
{
    return isTangentChain_raw(value);
}

inline SurfaceContinuityTypes FilletEdgeSet::continuity() const
{
    SurfaceContinuityTypes res = continuity_raw();
    return res;
}

inline bool FilletEdgeSet::continuity(SurfaceContinuityTypes value)
{
    return continuity_raw(value);
}

inline core::Ptr<ModelParameter> FilletEdgeSet::tangencyWeight() const
{
    core::Ptr<ModelParameter> res = tangencyWeight_raw();
    return res;
}

inline bool FilletEdgeSet::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FILLETEDGESET_API