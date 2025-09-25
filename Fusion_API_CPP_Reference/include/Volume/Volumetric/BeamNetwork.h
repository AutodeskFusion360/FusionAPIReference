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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef VOLUMEXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_VOLUME_BEAMNETWORK_CPP__
# define ADSK_VOLUME_BEAMNETWORK_API XI_EXPORT
# else
# define ADSK_VOLUME_BEAMNETWORK_API
# endif
#else
# define ADSK_VOLUME_BEAMNETWORK_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A geometry reference property that defines a BeamNetwork object which is
/// commonly used in discrete lattice structures.
class BeamNetwork : public core::Base {
public:

    /// The creator function of the BeamNetwork object.
    static core::Ptr<BeamNetwork> create();

    /// The vertices of the beam network. Each vertex is a Point3D.
    std::vector<core::Ptr<core::Point3D>> vertices() const;
    bool vertices(const std::vector<core::Ptr<core::Point3D>>& value);

    /// The beams of the beam network. Each beam is a pair of vertex indices.
    /// The size of the array should be a multiple of 2, and equal to the length of the radii array.
    std::vector<size_t> beams() const;
    bool beams(const std::vector<size_t>& value);

    /// The radii of the beams. Each radius is a double value. The radii define
    /// the radius of one end of the beam that corresponds to the same index in the beams array.
    /// The size of the array should be a multiple of 2, and equal to the length of the beams array.
    std::vector<double> radii() const;
    bool radii(const std::vector<double>& value);

    ADSK_VOLUME_BEAMNETWORK_API static const char* classType();
    ADSK_VOLUME_BEAMNETWORK_API const char* objectType() const override;
    ADSK_VOLUME_BEAMNETWORK_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_BEAMNETWORK_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_VOLUME_BEAMNETWORK_API static BeamNetwork* create_raw();
    virtual core::Point3D** vertices_raw(size_t& return_size) const = 0;
    virtual bool vertices_raw(core::Point3D** value, size_t value_size) = 0;
    virtual size_t* beams_raw(size_t& return_size) const = 0;
    virtual bool beams_raw(const size_t* value, size_t value_size) = 0;
    virtual double* radii_raw(size_t& return_size) const = 0;
    virtual bool radii_raw(const double* value, size_t value_size) = 0;
};

// Inline wrappers

inline core::Ptr<BeamNetwork> BeamNetwork::create()
{
    core::Ptr<BeamNetwork> res = create_raw();
    return res;
}

inline std::vector<core::Ptr<core::Point3D>> BeamNetwork::vertices() const
{
    std::vector<core::Ptr<core::Point3D>> res;
    size_t s;

    core::Point3D** p= vertices_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool BeamNetwork::vertices(const std::vector<core::Ptr<core::Point3D>>& value)
{
    core::Point3D** value_ = new core::Point3D*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = vertices_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline std::vector<size_t> BeamNetwork::beams() const
{
    std::vector<size_t> res;
    size_t s;

    size_t* p= beams_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool BeamNetwork::beams(const std::vector<size_t>& value)
{
    return beams_raw(value.empty() ? nullptr : &value[0], value.size());
}

inline std::vector<double> BeamNetwork::radii() const
{
    std::vector<double> res;
    size_t s;

    double* p= radii_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool BeamNetwork::radii(const std::vector<double>& value)
{
    return radii_raw(value.empty() ? nullptr : &value[0], value.size());
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_BEAMNETWORK_API