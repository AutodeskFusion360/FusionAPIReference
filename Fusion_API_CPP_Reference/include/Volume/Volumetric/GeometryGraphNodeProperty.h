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
#include "GraphNodeProperty.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef VOLUMEXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_VOLUME_GEOMETRYGRAPHNODEPROPERTY_CPP__
# define ADSK_VOLUME_GEOMETRYGRAPHNODEPROPERTY_API XI_EXPORT
# else
# define ADSK_VOLUME_GEOMETRYGRAPHNODEPROPERTY_API
# endif
#else
# define ADSK_VOLUME_GEOMETRYGRAPHNODEPROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace volume {
    class BeamNetwork;
}}

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A property value that represents a link to a geometric object.
class GeometryGraphNodeProperty : public GraphNodeProperty {
public:

    /// Get or set the value of the property. This should be one or more CAD geometry objects,
    /// such as a BREP or mesh bodies, faces or sketch curves. Setting this will override any
    /// value set by customSDFCallbackID.
    std::vector<core::Ptr<core::Base>> value() const;
    bool value(const std::vector<core::Ptr<core::Base>>& value);

    /// The ID of a custom Signed Distance Field callback object registered with CustomSDFCallbackRegistry.
    /// Setting this will override any CAD geometry set previously.
    std::string customSDFCallbackID() const;
    bool customSDFCallbackID(const std::string& value);

    /// Set the value of the property. The value should be a BeamNetwork object,
    /// which defines the geometry by defining vertices, beams and radii of the beams.
    core::Ptr<BeamNetwork> beamNetwork() const;
    bool beamNetwork(const core::Ptr<BeamNetwork>& value);

    ADSK_VOLUME_GEOMETRYGRAPHNODEPROPERTY_API static const char* classType();
    ADSK_VOLUME_GEOMETRYGRAPHNODEPROPERTY_API const char* objectType() const override;
    ADSK_VOLUME_GEOMETRYGRAPHNODEPROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_GEOMETRYGRAPHNODEPROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base** value_raw(size_t& return_size) const = 0;
    virtual bool value_raw(core::Base** value, size_t value_size) = 0;
    virtual char* customSDFCallbackID_raw() const = 0;
    virtual bool customSDFCallbackID_raw(const char* value) = 0;
    virtual BeamNetwork* beamNetwork_raw() const = 0;
    virtual bool beamNetwork_raw(BeamNetwork* value) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<core::Base>> GeometryGraphNodeProperty::value() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= value_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool GeometryGraphNodeProperty::value(const std::vector<core::Ptr<core::Base>>& value)
{
    core::Base** value_ = new core::Base*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = value_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline std::string GeometryGraphNodeProperty::customSDFCallbackID() const
{
    std::string res;

    char* p= customSDFCallbackID_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool GeometryGraphNodeProperty::customSDFCallbackID(const std::string& value)
{
    return customSDFCallbackID_raw(value.c_str());
}

inline core::Ptr<BeamNetwork> GeometryGraphNodeProperty::beamNetwork() const
{
    core::Ptr<BeamNetwork> res = beamNetwork_raw();
    return res;
}

inline bool GeometryGraphNodeProperty::beamNetwork(const core::Ptr<BeamNetwork>& value)
{
    return beamNetwork_raw(value.get());
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_GEOMETRYGRAPHNODEPROPERTY_API