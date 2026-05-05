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
# ifdef __COMPILING_ADSK_FUSION_FULLROUNDFILLETFEATUREINPUT_CPP__
# define ADSK_FUSION_FULLROUNDFILLETFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_FULLROUNDFILLETFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_FULLROUNDFILLETFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BaseFeature;
    class FullRoundFilletFaceSets;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a full round fillet feature.
class FullRoundFilletFeatureInput : public core::Base {
public:

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

    /// Gets the FullRoundFilletFaceSets object that provides support to create the face
    /// sets that will be used to create the full round fillet.
    core::Ptr<FullRoundFilletFaceSets> faceSets() const;

    ADSK_FUSION_FULLROUNDFILLETFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_FULLROUNDFILLETFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_FULLROUNDFILLETFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FULLROUNDFILLETFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual FullRoundFilletFaceSets* faceSets_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<BaseFeature> FullRoundFilletFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool FullRoundFilletFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline core::Ptr<FullRoundFilletFaceSets> FullRoundFilletFeatureInput::faceSets() const
{
    core::Ptr<FullRoundFilletFaceSets> res = faceSets_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FULLROUNDFILLETFEATUREINPUT_API