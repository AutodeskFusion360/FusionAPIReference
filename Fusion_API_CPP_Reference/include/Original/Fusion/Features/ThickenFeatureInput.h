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
# ifdef __COMPILING_ADSK_FUSION_THICKENFEATUREINPUT_CPP__
# define ADSK_FUSION_THICKENFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_THICKENFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_THICKENFEATUREINPUT_API XI_IMPORT
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

/// This class defines the methods and properties that pertain to the definition of a Thicken feature.
class ThickenFeatureInput : public core::Base {
public:

    /// An ObjectCollection containing the face and/or patch bodies to thicken.
    core::Ptr<core::ObjectCollection> inputFaces() const;
    bool inputFaces(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the ValueInput object that defines the thickness distance.
    core::Ptr<core::ValueInput> thickness() const;
    bool thickness(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets whether to add thickness symmetrically or only on one side of the face/s to thicken
    bool isSymmetric() const;
    bool isSymmetric(bool value);

    /// Gets and sets the feature operation to perform.
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// Get and sets whether faces that are tangentially connected to the input faces will be included in the thicken feature.
    bool isChainSelection() const;
    bool isChainSelection(bool value);

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

    /// In order for geometry to be transformed correctly, an Occurrence for creation needs to be
    /// specified when the Thicken feature is created based on geometry (e.g. a profile and/or face(s))
    /// in another component AND (the Thicken feature) is not in the root component.
    /// The CreationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    /// The thicken type used when creating a thicken.
    /// The default value is SharpThickenType.
    ThickenTypes thickenType() const;
    bool thickenType(ThickenTypes value);

    ADSK_FUSION_THICKENFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_THICKENFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_THICKENFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_THICKENFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* inputFaces_raw() const = 0;
    virtual bool inputFaces_raw(core::ObjectCollection* value) = 0;
    virtual core::ValueInput* thickness_raw() const = 0;
    virtual bool thickness_raw(core::ValueInput* value) = 0;
    virtual bool isSymmetric_raw() const = 0;
    virtual bool isSymmetric_raw(bool value) = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual bool isChainSelection_raw() const = 0;
    virtual bool isChainSelection_raw(bool value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
    virtual ThickenTypes thickenType_raw() const = 0;
    virtual bool thickenType_raw(ThickenTypes value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> ThickenFeatureInput::inputFaces() const
{
    core::Ptr<core::ObjectCollection> res = inputFaces_raw();
    return res;
}

inline bool ThickenFeatureInput::inputFaces(const core::Ptr<core::ObjectCollection>& value)
{
    return inputFaces_raw(value.get());
}

inline core::Ptr<core::ValueInput> ThickenFeatureInput::thickness() const
{
    core::Ptr<core::ValueInput> res = thickness_raw();
    return res;
}

inline bool ThickenFeatureInput::thickness(const core::Ptr<core::ValueInput>& value)
{
    return thickness_raw(value.get());
}

inline bool ThickenFeatureInput::isSymmetric() const
{
    bool res = isSymmetric_raw();
    return res;
}

inline bool ThickenFeatureInput::isSymmetric(bool value)
{
    return isSymmetric_raw(value);
}

inline FeatureOperations ThickenFeatureInput::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool ThickenFeatureInput::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline bool ThickenFeatureInput::isChainSelection() const
{
    bool res = isChainSelection_raw();
    return res;
}

inline bool ThickenFeatureInput::isChainSelection(bool value)
{
    return isChainSelection_raw(value);
}

inline core::Ptr<BaseFeature> ThickenFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool ThickenFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline core::Ptr<Occurrence> ThickenFeatureInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool ThickenFeatureInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}

inline ThickenTypes ThickenFeatureInput::thickenType() const
{
    ThickenTypes res = thickenType_raw();
    return res;
}

inline bool ThickenFeatureInput::thickenType(ThickenTypes value)
{
    return thickenType_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_THICKENFEATUREINPUT_API