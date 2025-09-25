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
# ifdef __COMPILING_ADSK_FUSION_CHAMFEREDGESET_CPP__
# define ADSK_FUSION_CHAMFEREDGESET_API XI_EXPORT
# else
# define ADSK_FUSION_CHAMFEREDGESET_API
# endif
#else
# define ADSK_FUSION_CHAMFEREDGESET_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The base class for the classes that define the different types of chamfer edge sets.
class ChamferEdgeSet : public core::Base {
public:

    /// Deletes the chamfer edge set from the chamfer.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// Returns true if the operation was successful.
    bool deleteMe();

    /// Gets and sets the Tangent chain for chamfer. This enables tangent chain option for chamfer.
    bool isTangentChain() const;
    bool isTangentChain(bool value);

    ADSK_FUSION_CHAMFEREDGESET_API static const char* classType();
    ADSK_FUSION_CHAMFEREDGESET_API const char* objectType() const override;
    ADSK_FUSION_CHAMFEREDGESET_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CHAMFEREDGESET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool deleteMe_raw() = 0;
    virtual bool isTangentChain_raw() const = 0;
    virtual bool isTangentChain_raw(bool value) = 0;
    virtual void placeholderChamferEdgeSet0() {}
    virtual void placeholderChamferEdgeSet1() {}
    virtual void placeholderChamferEdgeSet2() {}
    virtual void placeholderChamferEdgeSet3() {}
    virtual void placeholderChamferEdgeSet4() {}
    virtual void placeholderChamferEdgeSet5() {}
    virtual void placeholderChamferEdgeSet6() {}
    virtual void placeholderChamferEdgeSet7() {}
    virtual void placeholderChamferEdgeSet8() {}
    virtual void placeholderChamferEdgeSet9() {}
    virtual void placeholderChamferEdgeSet10() {}
    virtual void placeholderChamferEdgeSet11() {}
    virtual void placeholderChamferEdgeSet12() {}
    virtual void placeholderChamferEdgeSet13() {}
    virtual void placeholderChamferEdgeSet14() {}
    virtual void placeholderChamferEdgeSet15() {}
    virtual void placeholderChamferEdgeSet16() {}
    virtual void placeholderChamferEdgeSet17() {}
    virtual void placeholderChamferEdgeSet18() {}
    virtual void placeholderChamferEdgeSet19() {}
    virtual void placeholderChamferEdgeSet20() {}
    virtual void placeholderChamferEdgeSet21() {}
    virtual void placeholderChamferEdgeSet22() {}
    virtual void placeholderChamferEdgeSet23() {}
    virtual void placeholderChamferEdgeSet24() {}
    virtual void placeholderChamferEdgeSet25() {}
    virtual void placeholderChamferEdgeSet26() {}
    virtual void placeholderChamferEdgeSet27() {}
    virtual void placeholderChamferEdgeSet28() {}
};

// Inline wrappers

inline bool ChamferEdgeSet::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool ChamferEdgeSet::isTangentChain() const
{
    bool res = isTangentChain_raw();
    return res;
}

inline bool ChamferEdgeSet::isTangentChain(bool value)
{
    return isTangentChain_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CHAMFEREDGESET_API