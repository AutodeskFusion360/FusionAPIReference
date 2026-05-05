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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_DERIVEFEATUREINPUT_CPP__
# define ADSK_FUSION_DERIVEFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_DERIVEFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_DERIVEFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Design;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a derive feature.
class DeriveFeatureInput : public core::Base {
public:

    /// The Design that is obtained from the input DataFile. You can use the API to access various elements within the
    /// design to add them to the list of elements to be derived.
    core::Ptr<Design> sourceDesign() const;

    /// The array of entities that will be derived. These can be any entity that is supported by derive.
    /// For example, BRepBody, MeshBody, Sketch, ConstructionPlane, Occurrence, Component(rootComponent), FlatPattern, Canvas etc.
    std::vector<core::Ptr<core::Base>> sourceEntities() const;
    bool sourceEntities(const std::vector<core::Ptr<core::Base>>& value);

    /// The array of entities that will be excluded from the sourceEntities. These can be any entity that is supported by derive.
    /// For example, BRepBody, MeshBody, Sketch, ConstructionPlane, Occurrence, Component(rootComponent), FlatPattern, Canvas etc.
    std::vector<core::Ptr<core::Base>> excludedEntities() const;
    bool excludedEntities(const std::vector<core::Ptr<core::Base>>& value);

    /// Gets or sets whether favorite parameters in the source design are derived or not.
    bool isIncludeFavoriteParameters() const;
    bool isIncludeFavoriteParameters(bool value);

    /// Gets or sets whether all feature parameters from all selected components
    /// from the source design are derived or not.
    bool isIncludeComponentParameters() const;
    bool isIncludeComponentParameters(bool value);

    /// Gets or sets whether to place all derived objects at the origin in
    /// the destination design or not.
    bool isPlaceObjectsAtOrigin() const;
    bool isPlaceObjectsAtOrigin(bool value);

    ADSK_FUSION_DERIVEFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_DERIVEFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_DERIVEFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DERIVEFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Design* sourceDesign_raw() const = 0;
    virtual core::Base** sourceEntities_raw(size_t& return_size) const = 0;
    virtual bool sourceEntities_raw(core::Base** value, size_t value_size) = 0;
    virtual core::Base** excludedEntities_raw(size_t& return_size) const = 0;
    virtual bool excludedEntities_raw(core::Base** value, size_t value_size) = 0;
    virtual bool isIncludeFavoriteParameters_raw() const = 0;
    virtual bool isIncludeFavoriteParameters_raw(bool value) = 0;
    virtual bool isIncludeComponentParameters_raw() const = 0;
    virtual bool isIncludeComponentParameters_raw(bool value) = 0;
    virtual bool isPlaceObjectsAtOrigin_raw() const = 0;
    virtual bool isPlaceObjectsAtOrigin_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<Design> DeriveFeatureInput::sourceDesign() const
{
    core::Ptr<Design> res = sourceDesign_raw();
    return res;
}

inline std::vector<core::Ptr<core::Base>> DeriveFeatureInput::sourceEntities() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= sourceEntities_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool DeriveFeatureInput::sourceEntities(const std::vector<core::Ptr<core::Base>>& value)
{
    core::Base** value_ = new core::Base*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = sourceEntities_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline std::vector<core::Ptr<core::Base>> DeriveFeatureInput::excludedEntities() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= excludedEntities_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool DeriveFeatureInput::excludedEntities(const std::vector<core::Ptr<core::Base>>& value)
{
    core::Base** value_ = new core::Base*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = excludedEntities_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool DeriveFeatureInput::isIncludeFavoriteParameters() const
{
    bool res = isIncludeFavoriteParameters_raw();
    return res;
}

inline bool DeriveFeatureInput::isIncludeFavoriteParameters(bool value)
{
    return isIncludeFavoriteParameters_raw(value);
}

inline bool DeriveFeatureInput::isIncludeComponentParameters() const
{
    bool res = isIncludeComponentParameters_raw();
    return res;
}

inline bool DeriveFeatureInput::isIncludeComponentParameters(bool value)
{
    return isIncludeComponentParameters_raw(value);
}

inline bool DeriveFeatureInput::isPlaceObjectsAtOrigin() const
{
    bool res = isPlaceObjectsAtOrigin_raw();
    return res;
}

inline bool DeriveFeatureInput::isPlaceObjectsAtOrigin(bool value)
{
    return isPlaceObjectsAtOrigin_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DERIVEFEATUREINPUT_API