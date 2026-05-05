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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_HEMFEATUREINPUT_CPP__
# define ADSK_FUSION_HEMFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_HEMFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_HEMFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BRepEdge;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// This class defines the methods and properties that pertain to the definition of a hem feature.
class HemFeatureInput : public core::Base {
public:

    /// Sets the hem input with the values to be used in order to create a flat hem feature.
    /// edge : The BRepEdge that defines the location of the hem.
    /// length : The length of the hem.
    /// isFlipped : Indicates if the hem direction is flipped.
    /// bendPositionType : The bend location type for the hem.
    /// Returns true if defining the hem is successful.
    bool setFlatHem(const core::Ptr<BRepEdge>& edge, const core::Ptr<core::ValueInput>& length, bool isFlipped, BendPositionTypes bendPositionType);

    /// Sets the hem input with the values to be used in order to create an open hem feature.
    /// edge : The BRepEdge that defines the location of the hem.
    /// length : The length of the hem.
    /// gap : The gap distance of the hem.
    /// isFlipped : Indicates if the hem direction is flipped.
    /// bendPositionType : The bend location type for the hem.
    /// Returns true if defining the hem is successful.
    bool setOpenHem(const core::Ptr<BRepEdge>& edge, const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& gap, bool isFlipped, BendPositionTypes bendPositionType);

    /// Sets the hem input with the values to be used in order to create a rolled hem feature.
    /// edge : The BRepEdge that defines the location of the hem.
    /// radius : The radius of the rolled hem.
    /// angle : The angle of the rolled hem.
    /// isFlipped : Indicates if the hem direction is flipped.
    /// bendPositionType : The bend location type for the hem.
    /// Returns true if defining the hem is successful.
    bool setRolledHem(const core::Ptr<BRepEdge>& edge, const core::Ptr<core::ValueInput>& radius, const core::Ptr<core::ValueInput>& angle, bool isFlipped, BendPositionTypes bendPositionType);

    /// Sets the hem input with the values to be used in order to create a rope hem feature.
    /// edge : The BRepEdge that defines the location of the hem.
    /// length : The length of the rope hem.
    /// gap : The gap distance of the hem.
    /// radius : The radius of the rope hem.
    /// isFlipped : Indicates if the hem direction is flipped.
    /// bendPositionType : The bend location type for the hem.
    /// Returns true if defining the hem is successful.
    bool setRopeHem(const core::Ptr<BRepEdge>& edge, const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& gap, const core::Ptr<core::ValueInput>& radius, bool isFlipped, BendPositionTypes bendPositionType);

    /// Sets the hem input with the values to be used in order to create a teardrop hem feature.
    /// edge : The BRepEdge that defines the location of the hem.
    /// radius : The radius of the teardrop hem.
    /// length : The angle of the teardrop hem.
    /// gap : The gap distance of the hem.
    /// isFlipped : Indicates if the hem direction is flipped.
    /// bendPositionType : The bend location type for the hem.
    /// Returns true if defining the hem is successful.
    bool setTeardropHem(const core::Ptr<BRepEdge>& edge, const core::Ptr<core::ValueInput>& radius, const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& gap, bool isFlipped, BendPositionTypes bendPositionType);

    /// Sets the hem input with the values to be used in order to create a double hem feature.
    /// edge : The BRepEdge that defines the location of the hem.
    /// gap : The gap distance of the hem.
    /// length : The length of the double hem.
    /// setback : The setback of the double hem.
    /// isFlipped : Indicates if the hem direction is flipped.
    /// bendPositionType : The bend location type for the hem.
    /// Returns true if defining the hem is successful.
    bool setDoubleHem(const core::Ptr<BRepEdge>& edge, const core::Ptr<core::ValueInput>& gap, const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& setback, bool isFlipped, BendPositionTypes bendPositionType);

    ADSK_FUSION_HEMFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_HEMFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_HEMFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_HEMFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setFlatHem_raw(BRepEdge* edge, core::ValueInput* length, bool isFlipped, BendPositionTypes bendPositionType) = 0;
    virtual bool setOpenHem_raw(BRepEdge* edge, core::ValueInput* length, core::ValueInput* gap, bool isFlipped, BendPositionTypes bendPositionType) = 0;
    virtual bool setRolledHem_raw(BRepEdge* edge, core::ValueInput* radius, core::ValueInput* angle, bool isFlipped, BendPositionTypes bendPositionType) = 0;
    virtual bool setRopeHem_raw(BRepEdge* edge, core::ValueInput* length, core::ValueInput* gap, core::ValueInput* radius, bool isFlipped, BendPositionTypes bendPositionType) = 0;
    virtual bool setTeardropHem_raw(BRepEdge* edge, core::ValueInput* radius, core::ValueInput* length, core::ValueInput* gap, bool isFlipped, BendPositionTypes bendPositionType) = 0;
    virtual bool setDoubleHem_raw(BRepEdge* edge, core::ValueInput* gap, core::ValueInput* length, core::ValueInput* setback, bool isFlipped, BendPositionTypes bendPositionType) = 0;
};

// Inline wrappers

inline bool HemFeatureInput::setFlatHem(const core::Ptr<BRepEdge>& edge, const core::Ptr<core::ValueInput>& length, bool isFlipped, BendPositionTypes bendPositionType)
{
    bool res = setFlatHem_raw(edge.get(), length.get(), isFlipped, bendPositionType);
    return res;
}

inline bool HemFeatureInput::setOpenHem(const core::Ptr<BRepEdge>& edge, const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& gap, bool isFlipped, BendPositionTypes bendPositionType)
{
    bool res = setOpenHem_raw(edge.get(), length.get(), gap.get(), isFlipped, bendPositionType);
    return res;
}

inline bool HemFeatureInput::setRolledHem(const core::Ptr<BRepEdge>& edge, const core::Ptr<core::ValueInput>& radius, const core::Ptr<core::ValueInput>& angle, bool isFlipped, BendPositionTypes bendPositionType)
{
    bool res = setRolledHem_raw(edge.get(), radius.get(), angle.get(), isFlipped, bendPositionType);
    return res;
}

inline bool HemFeatureInput::setRopeHem(const core::Ptr<BRepEdge>& edge, const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& gap, const core::Ptr<core::ValueInput>& radius, bool isFlipped, BendPositionTypes bendPositionType)
{
    bool res = setRopeHem_raw(edge.get(), length.get(), gap.get(), radius.get(), isFlipped, bendPositionType);
    return res;
}

inline bool HemFeatureInput::setTeardropHem(const core::Ptr<BRepEdge>& edge, const core::Ptr<core::ValueInput>& radius, const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& gap, bool isFlipped, BendPositionTypes bendPositionType)
{
    bool res = setTeardropHem_raw(edge.get(), radius.get(), length.get(), gap.get(), isFlipped, bendPositionType);
    return res;
}

inline bool HemFeatureInput::setDoubleHem(const core::Ptr<BRepEdge>& edge, const core::Ptr<core::ValueInput>& gap, const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& setback, bool isFlipped, BendPositionTypes bendPositionType)
{
    bool res = setDoubleHem_raw(edge.get(), gap.get(), length.get(), setback.get(), isFlipped, bendPositionType);
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_HEMFEATUREINPUT_API