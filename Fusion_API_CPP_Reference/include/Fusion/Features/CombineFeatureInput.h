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
# ifdef __COMPILING_ADSK_FUSION_COMBINEFEATUREINPUT_CPP__
# define ADSK_FUSION_COMBINEFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_COMBINEFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_COMBINEFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepBody;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a combine
/// feature.
class CombineFeatureInput : public core::Base {
public:

    /// Gets and sets the BRep Body object that represents the blank body.
    core::Ptr<BRepBody> targetBody() const;
    bool targetBody(const core::Ptr<BRepBody>& value);

    /// Gets and sets the BRep Body objects that represent the tool bodies.
    core::Ptr<core::ObjectCollection> toolBodies() const;
    bool toolBodies(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the type of operation performed by the combine.
    /// The valid values are JoinFeatureOperation, CutFeatureOperation and IntersectFeatureOperation.
    /// The default value is JoinFeatureOperation.
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// Gets and sets a boolean value for whether or not a new component will be created with the results. The default value is false.
    /// In Base feature environment NewComponent does not work.
    bool isNewComponent() const;
    bool isNewComponent(bool value);

    /// Gets and sets a boolean value for whether or not the tool bodies are retrained after the combine results. The default value is false.
    bool isKeepToolBodies() const;
    bool isKeepToolBodies(bool value);

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

    ADSK_FUSION_COMBINEFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_COMBINEFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_COMBINEFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_COMBINEFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepBody* targetBody_raw() const = 0;
    virtual bool targetBody_raw(BRepBody* value) = 0;
    virtual core::ObjectCollection* toolBodies_raw() const = 0;
    virtual bool toolBodies_raw(core::ObjectCollection* value) = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual bool isNewComponent_raw() const = 0;
    virtual bool isNewComponent_raw(bool value) = 0;
    virtual bool isKeepToolBodies_raw() const = 0;
    virtual bool isKeepToolBodies_raw(bool value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<BRepBody> CombineFeatureInput::targetBody() const
{
    core::Ptr<BRepBody> res = targetBody_raw();
    return res;
}

inline bool CombineFeatureInput::targetBody(const core::Ptr<BRepBody>& value)
{
    return targetBody_raw(value.get());
}

inline core::Ptr<core::ObjectCollection> CombineFeatureInput::toolBodies() const
{
    core::Ptr<core::ObjectCollection> res = toolBodies_raw();
    return res;
}

inline bool CombineFeatureInput::toolBodies(const core::Ptr<core::ObjectCollection>& value)
{
    return toolBodies_raw(value.get());
}

inline FeatureOperations CombineFeatureInput::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool CombineFeatureInput::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline bool CombineFeatureInput::isNewComponent() const
{
    bool res = isNewComponent_raw();
    return res;
}

inline bool CombineFeatureInput::isNewComponent(bool value)
{
    return isNewComponent_raw(value);
}

inline bool CombineFeatureInput::isKeepToolBodies() const
{
    bool res = isKeepToolBodies_raw();
    return res;
}

inline bool CombineFeatureInput::isKeepToolBodies(bool value)
{
    return isKeepToolBodies_raw(value);
}

inline core::Ptr<BaseFeature> CombineFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool CombineFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_COMBINEFEATUREINPUT_API