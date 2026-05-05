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
# ifdef __COMPILING_ADSK_FUSION_OFFSETFEATUREINPUT_CPP__
# define ADSK_FUSION_OFFSETFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_OFFSETFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_OFFSETFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of an offset feature.
class OffsetFeatureInput : public core::Base {
public:

    /// An ObjectCollection containing the BRepFace objects being offset.
    core::Ptr<core::ObjectCollection> entities() const;
    bool entities(const core::Ptr<core::ObjectCollection>& value);

    /// Get and sets whether faces that are tangentially connected to the input faces will be included in the offset.
    bool isChainSelection() const;
    bool isChainSelection(bool value);

    /// Gets and sets the ValueInput object that defines the offset distance. A positive distance value results
    /// in an offset in the positive normal direction of the faces.
    core::Ptr<core::ValueInput> distance() const;
    bool distance(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the feature operation to perform. Can be 'NewBodyFeatureOperation' or 'NewComponentFeatureOperation'.
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

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

    ADSK_FUSION_OFFSETFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_OFFSETFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_OFFSETFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_OFFSETFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* entities_raw() const = 0;
    virtual bool entities_raw(core::ObjectCollection* value) = 0;
    virtual bool isChainSelection_raw() const = 0;
    virtual bool isChainSelection_raw(bool value) = 0;
    virtual core::ValueInput* distance_raw() const = 0;
    virtual bool distance_raw(core::ValueInput* value) = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> OffsetFeatureInput::entities() const
{
    core::Ptr<core::ObjectCollection> res = entities_raw();
    return res;
}

inline bool OffsetFeatureInput::entities(const core::Ptr<core::ObjectCollection>& value)
{
    return entities_raw(value.get());
}

inline bool OffsetFeatureInput::isChainSelection() const
{
    bool res = isChainSelection_raw();
    return res;
}

inline bool OffsetFeatureInput::isChainSelection(bool value)
{
    return isChainSelection_raw(value);
}

inline core::Ptr<core::ValueInput> OffsetFeatureInput::distance() const
{
    core::Ptr<core::ValueInput> res = distance_raw();
    return res;
}

inline bool OffsetFeatureInput::distance(const core::Ptr<core::ValueInput>& value)
{
    return distance_raw(value.get());
}

inline FeatureOperations OffsetFeatureInput::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool OffsetFeatureInput::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline core::Ptr<BaseFeature> OffsetFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool OffsetFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_OFFSETFEATUREINPUT_API