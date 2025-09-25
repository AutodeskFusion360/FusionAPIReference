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
# ifdef __COMPILING_ADSK_FUSION_SHELLFEATUREINPUT_CPP__
# define ADSK_FUSION_SHELLFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_SHELLFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_SHELLFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a shell
/// feature.
class ShellFeatureInput : public core::Base {
public:

    /// Gets and sets the input faces/bodies.
    /// If IsTangentChain is true, all the faces that are tangentially connected to the input faces (if any) will also be included.
    /// Fails if any faces are input, and the owning bodies of the faces are also input.
    core::Ptr<core::ObjectCollection> inputEntities() const;
    bool inputEntities(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets if any faces that are tangentially connected to any of
    /// the input faces will also be included in setting InputEntities. It defaults to true.
    bool isTangentChain() const;
    bool isTangentChain(bool value);

    /// Gets and sets the inside thickness.
    core::Ptr<core::ValueInput> insideThickness() const;
    bool insideThickness(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the outside thickness.
    core::Ptr<core::ValueInput> outsideThickness() const;
    bool outsideThickness(const core::Ptr<core::ValueInput>& value);

    /// In order for geometry to be transformed correctly, an Occurrence for creation needs to be
    /// specified when the shell is created based on geometry (e.g. a profile and/or face(s))
    /// in another component AND (the shell) is not in the root component.
    /// The CreationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    /// When creating a feature that is owned by a base feature, set this property to the
    /// base feature you want to associate the new feature with. By default, this is null,
    /// meaning it will not be associated with a base feature.
    /// 
    /// Because of a current limitation, if you want to create a feature associated with a base
    /// feature, you must set this property AND call the startEdit method of the base feature,
    /// create the feature, and then call the finishEdit method of the base feature. The base
    /// feature must be in an "edit" state to be able to add any additional items to it.
    core::Ptr<BaseFeature> targetBaseFeature() const;
    bool targetBaseFeature(const core::Ptr<BaseFeature>& value);

    /// The shell type used when creating a shell.
    /// The default value is SharpOffsetShellType.
    ShellTypes shellType() const;
    bool shellType(ShellTypes value);

    ADSK_FUSION_SHELLFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_SHELLFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_SHELLFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SHELLFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* inputEntities_raw() const = 0;
    virtual bool inputEntities_raw(core::ObjectCollection* value) = 0;
    virtual bool isTangentChain_raw() const = 0;
    virtual bool isTangentChain_raw(bool value) = 0;
    virtual core::ValueInput* insideThickness_raw() const = 0;
    virtual bool insideThickness_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* outsideThickness_raw() const = 0;
    virtual bool outsideThickness_raw(core::ValueInput* value) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual ShellTypes shellType_raw() const = 0;
    virtual bool shellType_raw(ShellTypes value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> ShellFeatureInput::inputEntities() const
{
    core::Ptr<core::ObjectCollection> res = inputEntities_raw();
    return res;
}

inline bool ShellFeatureInput::inputEntities(const core::Ptr<core::ObjectCollection>& value)
{
    return inputEntities_raw(value.get());
}

inline bool ShellFeatureInput::isTangentChain() const
{
    bool res = isTangentChain_raw();
    return res;
}

inline bool ShellFeatureInput::isTangentChain(bool value)
{
    return isTangentChain_raw(value);
}

inline core::Ptr<core::ValueInput> ShellFeatureInput::insideThickness() const
{
    core::Ptr<core::ValueInput> res = insideThickness_raw();
    return res;
}

inline bool ShellFeatureInput::insideThickness(const core::Ptr<core::ValueInput>& value)
{
    return insideThickness_raw(value.get());
}

inline core::Ptr<core::ValueInput> ShellFeatureInput::outsideThickness() const
{
    core::Ptr<core::ValueInput> res = outsideThickness_raw();
    return res;
}

inline bool ShellFeatureInput::outsideThickness(const core::Ptr<core::ValueInput>& value)
{
    return outsideThickness_raw(value.get());
}

inline core::Ptr<Occurrence> ShellFeatureInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool ShellFeatureInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}

inline core::Ptr<BaseFeature> ShellFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool ShellFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline ShellTypes ShellFeatureInput::shellType() const
{
    ShellTypes res = shellType_raw();
    return res;
}

inline bool ShellFeatureInput::shellType(ShellTypes value)
{
    return shellType_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SHELLFEATUREINPUT_API