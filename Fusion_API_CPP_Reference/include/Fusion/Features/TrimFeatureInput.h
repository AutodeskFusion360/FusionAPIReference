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
# ifdef __COMPILING_ADSK_FUSION_TRIMFEATUREINPUT_CPP__
# define ADSK_FUSION_TRIMFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_TRIMFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_TRIMFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepCells;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a TrimFeatureInput.
class TrimFeatureInput : public core::Base {
public:

    /// Returns the collection of the valid cells that have been calculated based on the trim tool.
    /// Use this collection to specify which cells to trim away.
    core::Ptr<BRepCells> bRepCells() const;

    /// Gets and sets the entity (a patch body, B-Rep face, construction plane or sketch curve) that intersects the trim tool
    core::Ptr<core::Base> trimTool() const;
    bool trimTool(const core::Ptr<core::Base>& value);

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

    /// To determine the possible boundaries and allow you to choose which cells to keep, the trim
    /// feature does a partial compute when the input object is created. To do this it starts a trim
    /// feature transaction and completes the transaction when you call the add method. If you don't
    /// call the add method it leaves Fusion in a bad state and there will be undo problems and it
    /// will possibly crash. If you have created a TrimFeatureInput object and don't want to finish
    /// the feature creation, you need to call the cancel method on the TrimFeatureInput object to
    /// safely abort the current trim feature transaction.
    bool cancel();

    ADSK_FUSION_TRIMFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_TRIMFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_TRIMFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TRIMFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepCells* bRepCells_raw() const = 0;
    virtual core::Base* trimTool_raw() const = 0;
    virtual bool trimTool_raw(core::Base* value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual bool cancel_raw() = 0;
};

// Inline wrappers

inline core::Ptr<BRepCells> TrimFeatureInput::bRepCells() const
{
    core::Ptr<BRepCells> res = bRepCells_raw();
    return res;
}

inline core::Ptr<core::Base> TrimFeatureInput::trimTool() const
{
    core::Ptr<core::Base> res = trimTool_raw();
    return res;
}

inline bool TrimFeatureInput::trimTool(const core::Ptr<core::Base>& value)
{
    return trimTool_raw(value.get());
}

inline core::Ptr<BaseFeature> TrimFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool TrimFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline bool TrimFeatureInput::cancel()
{
    bool res = cancel_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TRIMFEATUREINPUT_API