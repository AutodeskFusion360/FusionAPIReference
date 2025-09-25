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
#include "../VolumeTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef VOLUMEXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_VOLUME_VOLUMETRICMODEL_CPP__
# define ADSK_VOLUME_VOLUMETRICMODEL_API XI_EXPORT
# else
# define ADSK_VOLUME_VOLUMETRICMODEL_API
# endif
#else
# define ADSK_VOLUME_VOLUMETRICMODEL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Component;
}}
namespace adsk { namespace volume {
    class CustomSDFCallbackEventHandler;
    class Graph;
    class VolumetricSampler;
}}

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The main volumetric graph object. It has a parent component and is defined in this parent component's space.
/// It also contains the primary and cell graphs.
class VolumetricModel : public core::Base {
public:

    /// Returns a graph from the volumetric model.
    /// graphType : Which kind of graph to return.
    /// 
    core::Ptr<Graph> getGraph(GraphTypes graphType) const;

    /// Is the light bulb / eye (as displayed in the browser) controlling the model's visibility on.
    bool isLightBulbOn() const;
    bool isLightBulbOn(bool value);

    /// Returns the parent Component.
    core::Ptr<fusion::Component> parentComponent() const;

    /// Get or set the main boundary body for this volumetric model.
    /// The volumetric model is bound by the axis aligned bounding box and will only be
    /// rendered within this body.
    core::Ptr<core::Base> boundaryBody() const;

    /// Handling for custom Signed Distance Field callback events. These can be registered by the API client,
    /// they will provide a string ID and a handler object that implements the abstract methods.
    /// To use the callback, a GeometryGraphNodeProperty's customSDFCallbackID should be set to the same string ID.
    /// 
    /// Register a custom Signed Distance Field callback handler with a given ID.
    /// id : The ID to be used in a GeometryGraphNodeProperty's customSDFCallbackID.
    /// callback : The callback object implemented by the client.
    /// True if registered successfully. False otherwise.
    bool registerCustomSDFCallback(const std::string& id, CustomSDFCallbackEventHandler* callback);

    /// De-register the Signed Distance Field callback handler with the given ID.
    /// id : The ID used in registerCustomSDFCallback()
    /// True if removed successfully. False otherwise.
    bool removeCustomSDFCallback(const std::string& id);

    /// Creates a VolumetricSampler object that can be used to sample the volumetric model.
    /// Returns a VolumetricSampler object that will sample this VolumetricModel.
    core::Ptr<VolumetricSampler> createSampler() const;

    ADSK_VOLUME_VOLUMETRICMODEL_API static const char* classType();
    ADSK_VOLUME_VOLUMETRICMODEL_API const char* objectType() const override;
    ADSK_VOLUME_VOLUMETRICMODEL_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_VOLUMETRICMODEL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Graph* getGraph_raw(GraphTypes graphType) const = 0;
    virtual bool isLightBulbOn_raw() const = 0;
    virtual bool isLightBulbOn_raw(bool value) = 0;
    virtual fusion::Component* parentComponent_raw() const = 0;
    virtual core::Base* boundaryBody_raw() const = 0;
    virtual bool registerCustomSDFCallback_raw(const char* id, CustomSDFCallbackEventHandler* callback) = 0;
    virtual bool removeCustomSDFCallback_raw(const char* id) = 0;
    virtual VolumetricSampler* createSampler_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Graph> VolumetricModel::getGraph(GraphTypes graphType) const
{
    core::Ptr<Graph> res = getGraph_raw(graphType);
    return res;
}

inline bool VolumetricModel::isLightBulbOn() const
{
    bool res = isLightBulbOn_raw();
    return res;
}

inline bool VolumetricModel::isLightBulbOn(bool value)
{
    return isLightBulbOn_raw(value);
}

inline core::Ptr<fusion::Component> VolumetricModel::parentComponent() const
{
    core::Ptr<fusion::Component> res = parentComponent_raw();
    return res;
}

inline core::Ptr<core::Base> VolumetricModel::boundaryBody() const
{
    core::Ptr<core::Base> res = boundaryBody_raw();
    return res;
}

inline bool VolumetricModel::registerCustomSDFCallback(const std::string& id, CustomSDFCallbackEventHandler* callback)
{
    bool res = registerCustomSDFCallback_raw(id.c_str(), callback);
    return res;
}

inline bool VolumetricModel::removeCustomSDFCallback(const std::string& id)
{
    bool res = removeCustomSDFCallback_raw(id.c_str());
    return res;
}

inline core::Ptr<VolumetricSampler> VolumetricModel::createSampler() const
{
    core::Ptr<VolumetricSampler> res = createSampler_raw();
    return res;
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_VOLUMETRICMODEL_API