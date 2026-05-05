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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FILLETEDGESETINPUT_CPP__
# define ADSK_FUSION_FILLETEDGESETINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_FILLETEDGESETINPUT_API
# endif
#else
# define ADSK_FUSION_FILLETEDGESETINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}

namespace adsk { namespace fusion {

/// Represents the input to define a fillet edge set.
class FilletEdgeSetInput : public core::Base {
public:

    /// Gets and sets the entities associated with this fillet edge set. For constant radius and chord length
    /// edge sets, this can be edges, faces, and features. For variable radius edges sets, this must be edges.
    core::Ptr<core::ObjectCollection> entities() const;
    bool entities(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the continuity of the fillet edge set. Valid values are
    /// TangentSurfaceContinuityType and CurvatureSurfaceContinuityType. The default
    /// is TangentSurfaceContinuityType.
    /// 
    /// For an asymmetric fillet edge set, this must always be tangent continuity (G1)
    /// and setting it to another value will fail.
    SurfaceContinuityTypes continuity() const;
    bool continuity(SurfaceContinuityTypes value);

    /// Gets and sets the tangency weight for the given edge set. The tangency weight controls the influence
    /// of the continuity (G1 or G2) on the fillet. The ValueInput must be a real value between 0.1 and 2.0 inclusive,
    /// with no units. The default value is 1.0.
    core::Ptr<core::ValueInput> tangencyWeight() const;
    bool tangencyWeight(const core::Ptr<core::ValueInput>& value);

    ADSK_FUSION_FILLETEDGESETINPUT_API static const char* classType();
    ADSK_FUSION_FILLETEDGESETINPUT_API const char* objectType() const override;
    ADSK_FUSION_FILLETEDGESETINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FILLETEDGESETINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* entities_raw() const = 0;
    virtual bool entities_raw(core::ObjectCollection* value) = 0;
    virtual SurfaceContinuityTypes continuity_raw() const = 0;
    virtual bool continuity_raw(SurfaceContinuityTypes value) = 0;
    virtual core::ValueInput* tangencyWeight_raw() const = 0;
    virtual bool tangencyWeight_raw(core::ValueInput* value) = 0;
    virtual void placeholderFilletEdgeSetInput0() {}
    virtual void placeholderFilletEdgeSetInput1() {}
    virtual void placeholderFilletEdgeSetInput2() {}
    virtual void placeholderFilletEdgeSetInput3() {}
    virtual void placeholderFilletEdgeSetInput4() {}
    virtual void placeholderFilletEdgeSetInput5() {}
    virtual void placeholderFilletEdgeSetInput6() {}
    virtual void placeholderFilletEdgeSetInput7() {}
    virtual void placeholderFilletEdgeSetInput8() {}
    virtual void placeholderFilletEdgeSetInput9() {}
    virtual void placeholderFilletEdgeSetInput10() {}
    virtual void placeholderFilletEdgeSetInput11() {}
    virtual void placeholderFilletEdgeSetInput12() {}
    virtual void placeholderFilletEdgeSetInput13() {}
    virtual void placeholderFilletEdgeSetInput14() {}
    virtual void placeholderFilletEdgeSetInput15() {}
    virtual void placeholderFilletEdgeSetInput16() {}
    virtual void placeholderFilletEdgeSetInput17() {}
    virtual void placeholderFilletEdgeSetInput18() {}
    virtual void placeholderFilletEdgeSetInput19() {}
    virtual void placeholderFilletEdgeSetInput20() {}
    virtual void placeholderFilletEdgeSetInput21() {}
    virtual void placeholderFilletEdgeSetInput22() {}
    virtual void placeholderFilletEdgeSetInput23() {}
    virtual void placeholderFilletEdgeSetInput24() {}
    virtual void placeholderFilletEdgeSetInput25() {}
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> FilletEdgeSetInput::entities() const
{
    core::Ptr<core::ObjectCollection> res = entities_raw();
    return res;
}

inline bool FilletEdgeSetInput::entities(const core::Ptr<core::ObjectCollection>& value)
{
    return entities_raw(value.get());
}

inline SurfaceContinuityTypes FilletEdgeSetInput::continuity() const
{
    SurfaceContinuityTypes res = continuity_raw();
    return res;
}

inline bool FilletEdgeSetInput::continuity(SurfaceContinuityTypes value)
{
    return continuity_raw(value);
}

inline core::Ptr<core::ValueInput> FilletEdgeSetInput::tangencyWeight() const
{
    core::Ptr<core::ValueInput> res = tangencyWeight_raw();
    return res;
}

inline bool FilletEdgeSetInput::tangencyWeight(const core::Ptr<core::ValueInput>& value)
{
    return tangencyWeight_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FILLETEDGESETINPUT_API