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
#include "FlangeFeature.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_HEMFEATURE_CPP__
# define ADSK_FUSION_HEMFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_HEMFEATURE_API
# endif
#else
# define ADSK_FUSION_HEMFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class HemFeatureDefinition;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Defines a hem feature, providing methods to redefine the type of hem.
class HemFeature : public FlangeFeature {
public:

    /// Gets the type of hem defined.
    HemFeatureDefinitionTypes definitionType() const;

    /// Returns the HemFeatureDefinition object which provides access to the information
    /// defining this HemFeature and the ability to edit it.
    core::Ptr<HemFeatureDefinition> definition() const;

    /// Redefines the hem as a flat hem.
    /// length : The length of the hem.
    /// isFlipped : Indicates if the hem direction is flipped.
    /// bendPositionType : The bend location type for the hem.
    /// Returns true if defining the hem is successful.
    bool redefineAsFlatHem(const core::Ptr<core::ValueInput>& length, bool isFlipped, BendPositionTypes bendPositionType);

    /// Redefines the hem as an open hem.
    /// length : The length of the hem.
    /// gap : The gap distance of the hem.
    /// isFlipped : Indicates if the hem direction is flipped.
    /// bendPositionType : The bend location type for the hem.
    /// Returns true if defining the hem is successful.
    bool redefineAsOpenHem(const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& gap, bool isFlipped, BendPositionTypes bendPositionType);

    /// Redefines the hem as a rolled hem.
    /// radius : The radius of the rolled hem.
    /// angle : The angle of the rolled hem.
    /// isFlipped : Indicates if the hem direction is flipped.
    /// bendPositionType : The bend location type for the hem.
    /// Returns true if defining the hem is successful.
    bool redefineAsRolledHem(const core::Ptr<core::ValueInput>& radius, const core::Ptr<core::ValueInput>& angle, bool isFlipped, BendPositionTypes bendPositionType);

    /// Redefines the hem as a rope hem.
    /// length : The length of the rope hem.
    /// gap : The gap distance of the hem.
    /// radius : The radius of the rope hem.
    /// isFlipped : Indicates if the hem direction is flipped.
    /// bendPositionType : The bend location type for the hem.
    /// Returns true if defining the hem is successful.
    bool redefineAsRopeHem(const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& gap, const core::Ptr<core::ValueInput>& radius, bool isFlipped, BendPositionTypes bendPositionType);

    /// Redefines the hem as a teardrop hem.
    /// radius : The radius of the teardrop hem.
    /// length : The length of the teardrop hem.
    /// gap : The gap distance of the hem.
    /// isFlipped : Indicates if the hem direction is flipped.
    /// bendPositionType : The bend location type for the hem.
    /// Returns true if defining the hem is successful.
    bool redefineAsTeardropHem(const core::Ptr<core::ValueInput>& radius, const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& gap, bool isFlipped, BendPositionTypes bendPositionType);

    /// Redefines the hem as a double hem.
    /// gap : The gap distance of the hem.
    /// length : The length of the double hem.
    /// setback : The setback of the double hem.
    /// isFlipped : Indicates if the hem direction is flipped.
    /// bendPositionType : The bend location type for the hem.
    /// Returns true if defining the hem is successful.
    bool redefineAsDoubleHem(const core::Ptr<core::ValueInput>& gap, const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& setback, bool isFlipped, BendPositionTypes bendPositionType);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<HemFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this is not the NativeObject.
    core::Ptr<HemFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_HEMFEATURE_API static const char* classType();
    ADSK_FUSION_HEMFEATURE_API const char* objectType() const override;
    ADSK_FUSION_HEMFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_HEMFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual HemFeatureDefinitionTypes definitionType_raw() const = 0;
    virtual HemFeatureDefinition* definition_raw() const = 0;
    virtual bool redefineAsFlatHem_raw(core::ValueInput* length, bool isFlipped, BendPositionTypes bendPositionType) = 0;
    virtual bool redefineAsOpenHem_raw(core::ValueInput* length, core::ValueInput* gap, bool isFlipped, BendPositionTypes bendPositionType) = 0;
    virtual bool redefineAsRolledHem_raw(core::ValueInput* radius, core::ValueInput* angle, bool isFlipped, BendPositionTypes bendPositionType) = 0;
    virtual bool redefineAsRopeHem_raw(core::ValueInput* length, core::ValueInput* gap, core::ValueInput* radius, bool isFlipped, BendPositionTypes bendPositionType) = 0;
    virtual bool redefineAsTeardropHem_raw(core::ValueInput* radius, core::ValueInput* length, core::ValueInput* gap, bool isFlipped, BendPositionTypes bendPositionType) = 0;
    virtual bool redefineAsDoubleHem_raw(core::ValueInput* gap, core::ValueInput* length, core::ValueInput* setback, bool isFlipped, BendPositionTypes bendPositionType) = 0;
    virtual HemFeature* nativeObject_raw() const = 0;
    virtual HemFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline HemFeatureDefinitionTypes HemFeature::definitionType() const
{
    HemFeatureDefinitionTypes res = definitionType_raw();
    return res;
}

inline core::Ptr<HemFeatureDefinition> HemFeature::definition() const
{
    core::Ptr<HemFeatureDefinition> res = definition_raw();
    return res;
}

inline bool HemFeature::redefineAsFlatHem(const core::Ptr<core::ValueInput>& length, bool isFlipped, BendPositionTypes bendPositionType)
{
    bool res = redefineAsFlatHem_raw(length.get(), isFlipped, bendPositionType);
    return res;
}

inline bool HemFeature::redefineAsOpenHem(const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& gap, bool isFlipped, BendPositionTypes bendPositionType)
{
    bool res = redefineAsOpenHem_raw(length.get(), gap.get(), isFlipped, bendPositionType);
    return res;
}

inline bool HemFeature::redefineAsRolledHem(const core::Ptr<core::ValueInput>& radius, const core::Ptr<core::ValueInput>& angle, bool isFlipped, BendPositionTypes bendPositionType)
{
    bool res = redefineAsRolledHem_raw(radius.get(), angle.get(), isFlipped, bendPositionType);
    return res;
}

inline bool HemFeature::redefineAsRopeHem(const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& gap, const core::Ptr<core::ValueInput>& radius, bool isFlipped, BendPositionTypes bendPositionType)
{
    bool res = redefineAsRopeHem_raw(length.get(), gap.get(), radius.get(), isFlipped, bendPositionType);
    return res;
}

inline bool HemFeature::redefineAsTeardropHem(const core::Ptr<core::ValueInput>& radius, const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& gap, bool isFlipped, BendPositionTypes bendPositionType)
{
    bool res = redefineAsTeardropHem_raw(radius.get(), length.get(), gap.get(), isFlipped, bendPositionType);
    return res;
}

inline bool HemFeature::redefineAsDoubleHem(const core::Ptr<core::ValueInput>& gap, const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& setback, bool isFlipped, BendPositionTypes bendPositionType)
{
    bool res = redefineAsDoubleHem_raw(gap.get(), length.get(), setback.get(), isFlipped, bendPositionType);
    return res;
}

inline core::Ptr<HemFeature> HemFeature::nativeObject() const
{
    core::Ptr<HemFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<HemFeature> HemFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<HemFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_HEMFEATURE_API