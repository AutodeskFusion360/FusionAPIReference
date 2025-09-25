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
# ifdef __COMPILING_ADSK_FUSION_REPLACEFACEFEATUREINPUT_CPP__
# define ADSK_FUSION_REPLACEFACEFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_REPLACEFACEFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_REPLACEFACEFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a replace face feature.
class ReplaceFaceFeatureInput : public core::Base {
public:

    /// Gets and sets the entities that define the source faces to perform replace.
    /// The collection can contain the faces from a solid and/or from features. All the faces must be on the same body.
    core::Ptr<core::ObjectCollection> sourceFaces() const;
    bool sourceFaces(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the entities that define the target faces. The new faces must completely intersect the part.
    /// The collection can contain the surface faces, surface bodies and construction planes.
    core::Ptr<core::Base> targetFaces() const;
    bool targetFaces(const core::Ptr<core::Base>& value);

    /// Gets and sets if any faces that are tangentially connected to any of
    /// the input faces will also be included in setting InputEntities. It defaults to true.
    bool isTangentChain() const;
    bool isTangentChain(bool value);

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

    ADSK_FUSION_REPLACEFACEFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_REPLACEFACEFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_REPLACEFACEFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_REPLACEFACEFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* sourceFaces_raw() const = 0;
    virtual bool sourceFaces_raw(core::ObjectCollection* value) = 0;
    virtual core::Base* targetFaces_raw() const = 0;
    virtual bool targetFaces_raw(core::Base* value) = 0;
    virtual bool isTangentChain_raw() const = 0;
    virtual bool isTangentChain_raw(bool value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> ReplaceFaceFeatureInput::sourceFaces() const
{
    core::Ptr<core::ObjectCollection> res = sourceFaces_raw();
    return res;
}

inline bool ReplaceFaceFeatureInput::sourceFaces(const core::Ptr<core::ObjectCollection>& value)
{
    return sourceFaces_raw(value.get());
}

inline core::Ptr<core::Base> ReplaceFaceFeatureInput::targetFaces() const
{
    core::Ptr<core::Base> res = targetFaces_raw();
    return res;
}

inline bool ReplaceFaceFeatureInput::targetFaces(const core::Ptr<core::Base>& value)
{
    return targetFaces_raw(value.get());
}

inline bool ReplaceFaceFeatureInput::isTangentChain() const
{
    bool res = isTangentChain_raw();
    return res;
}

inline bool ReplaceFaceFeatureInput::isTangentChain(bool value)
{
    return isTangentChain_raw(value);
}

inline core::Ptr<BaseFeature> ReplaceFaceFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool ReplaceFaceFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_REPLACEFACEFEATUREINPUT_API