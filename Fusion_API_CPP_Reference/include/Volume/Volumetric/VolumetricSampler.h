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
# ifdef __COMPILING_ADSK_VOLUME_VOLUMETRICSAMPLER_CPP__
# define ADSK_VOLUME_VOLUMETRICSAMPLER_API XI_EXPORT
# else
# define ADSK_VOLUME_VOLUMETRICSAMPLER_API
# endif
#else
# define ADSK_VOLUME_VOLUMETRICSAMPLER_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class BoundingBox3D;
    class Plane;
    class Point3D;
    class Vector3D;
}}
namespace adsk { namespace volume {
    class GraphNode;
    class VolumetricColorSample;
    class VolumetricSample;
    class VolumetricScalarSample;
}}

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The VolumetricSampler object which is used for controled sampling of the volumetric model.
class VolumetricSampler : public core::Base {
public:

    /// Sets sample points to be used for sampling the volumetric model.
    /// samplePoints : The sample points to be used for sampling the volumetric model.
    /// True if the sample points were set successfully.
    bool setSamplePoints(const std::vector<core::Ptr<core::Point3D>>& samplePoints);

    /// Appends sample points to the existing sample points to be used for sampling the volumetric model.
    /// samplePoints : The sample points to be added to the sampler.
    bool addSamplePoints(const std::vector<core::Ptr<core::Point3D>>& samplePoints);

    /// Clears the sample points that have been set for sampling the volumetric model.
    /// True if the sample points were successfully cleared.
    bool clearSamplePoints();

    /// Calculates and sets the sample points to be used for sampling the volumetric model for a given resolution throughout
    /// the bounding box provided. This will override any previously set sample points.
    /// elementSize : The approximate spacing between sample points. The units used for the element size are centimeters.
    /// boundingBox3d : The bounding box in which the sample points will be distributed.
    /// True if the sample points were set successfully.
    bool setBoundingBoxSampling(double elementSize, const core::Ptr<core::BoundingBox3D>& boundingBox3d);

    /// Calculates and sets the sample points to be used for sampling the volumetric model for a given resolution, plane
    /// and primary axis. The points will be distributed in a grid pattern on the plane, starting at the plane origin and
    /// extend in the primary axis and secodary axis for the axis size arguments. The secondary axis is calculated from the
    /// cross product of the plane normal and the primary axis. This will override any previously set sample points.
    /// elementSize : The approximate spacing between sample points. The units used for the element size are centimeters.
    /// plane : The plane on which the points will be distributed.
    /// primaryAxis : The primary axis of the plane. This vector should be on the plane. The secondary axis
    /// of the plane is calculated as the cross-product of the plane normal and the primary axis
    /// primaryAxisSize : The size of the plane in the primary axis direction.
    /// secondaryAxisSize : The size of the plane in the secondary axis direction.
    /// True if the sample points were set successfully.
    bool setPlaneSampling(double elementSize, const core::Ptr<core::Plane>& plane, const core::Ptr<core::Vector3D>& primaryAxis, double primaryAxisSize, double secondaryAxisSize);

    /// Gets the number of sample points that will be used for sampling the volumetric model.
    /// The number of sample points that will be used for sampling the volumetric model.
    size_t samplePointCount() const;

    /// Evaluates the volumetric model at the previously set sample points for the given node and returns the results.
    /// graphNode : The graph node to evaluate at the sample points.
    /// isOutput : Optional argument that controls the sampling. If set to true samples an output pin, if set to false samples an input pin. Default is True.
    /// index : Optional argument that controls the index of the pin to sample. Default is 0 which is the first pin.
    /// An array of VolumetricSample objects that contain the results of sampling the volumetric model.
    std::vector<core::Ptr<VolumetricSample>> evaluate(const core::Ptr<GraphNode>& graphNode, bool isOutput = true, int index = 0) const;

    /// Evaluates the density of the model at the previously set sample points and returns the results. This value
    /// is what is used to determine the level set of the model.
    /// An array of VolumetricScalarSample objects that contain the results of sampling the volumetric model.
    std::vector<core::Ptr<VolumetricScalarSample>> evaluateDensity() const;

    /// Evaluates the level set function of the model at the previously set sample points and returns the results.
    /// An array of VolumetricScalarSample objectst that contain the results of sampling the volumetric model.
    std::vector<core::Ptr<VolumetricScalarSample>> evaluateLevelSet() const;

    /// Evaluates the color of the model at the previously set sample points and returns the results.
    /// An array of VolumetricColorSample objects that contain the results of sampling the volumetric model.
    std::vector<core::Ptr<VolumetricColorSample>> evaluateColor() const;

    ADSK_VOLUME_VOLUMETRICSAMPLER_API static const char* classType();
    ADSK_VOLUME_VOLUMETRICSAMPLER_API const char* objectType() const override;
    ADSK_VOLUME_VOLUMETRICSAMPLER_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_VOLUMETRICSAMPLER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setSamplePoints_raw(core::Point3D** samplePoints, size_t samplePoints_size) = 0;
    virtual bool addSamplePoints_raw(core::Point3D** samplePoints, size_t samplePoints_size) = 0;
    virtual bool clearSamplePoints_raw() = 0;
    virtual bool setBoundingBoxSampling_raw(double elementSize, core::BoundingBox3D* boundingBox3d) = 0;
    virtual bool setPlaneSampling_raw(double elementSize, core::Plane* plane, core::Vector3D* primaryAxis, double primaryAxisSize, double secondaryAxisSize) = 0;
    virtual size_t samplePointCount_raw() const = 0;
    virtual VolumetricSample** evaluate_raw(GraphNode* graphNode, bool isOutput, int index, size_t& return_size) const = 0;
    virtual VolumetricScalarSample** evaluateDensity_raw(size_t& return_size) const = 0;
    virtual VolumetricScalarSample** evaluateLevelSet_raw(size_t& return_size) const = 0;
    virtual VolumetricColorSample** evaluateColor_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline bool VolumetricSampler::setSamplePoints(const std::vector<core::Ptr<core::Point3D>>& samplePoints)
{
    core::Point3D** samplePoints_ = new core::Point3D*[samplePoints.size()];
    for(size_t i=0; i<samplePoints.size(); ++i)
        samplePoints_[i] = samplePoints[i].get();

    bool res = setSamplePoints_raw(samplePoints_, samplePoints.size());
    delete[] samplePoints_;
    return res;
}

inline bool VolumetricSampler::addSamplePoints(const std::vector<core::Ptr<core::Point3D>>& samplePoints)
{
    core::Point3D** samplePoints_ = new core::Point3D*[samplePoints.size()];
    for(size_t i=0; i<samplePoints.size(); ++i)
        samplePoints_[i] = samplePoints[i].get();

    bool res = addSamplePoints_raw(samplePoints_, samplePoints.size());
    delete[] samplePoints_;
    return res;
}

inline bool VolumetricSampler::clearSamplePoints()
{
    bool res = clearSamplePoints_raw();
    return res;
}

inline bool VolumetricSampler::setBoundingBoxSampling(double elementSize, const core::Ptr<core::BoundingBox3D>& boundingBox3d)
{
    bool res = setBoundingBoxSampling_raw(elementSize, boundingBox3d.get());
    return res;
}

inline bool VolumetricSampler::setPlaneSampling(double elementSize, const core::Ptr<core::Plane>& plane, const core::Ptr<core::Vector3D>& primaryAxis, double primaryAxisSize, double secondaryAxisSize)
{
    bool res = setPlaneSampling_raw(elementSize, plane.get(), primaryAxis.get(), primaryAxisSize, secondaryAxisSize);
    return res;
}

inline size_t VolumetricSampler::samplePointCount() const
{
    size_t res = samplePointCount_raw();
    return res;
}

inline std::vector<core::Ptr<VolumetricSample>> VolumetricSampler::evaluate(const core::Ptr<GraphNode>& graphNode, bool isOutput, int index) const
{
    std::vector<core::Ptr<VolumetricSample>> res;
    size_t s;

    VolumetricSample** p= evaluate_raw(graphNode.get(), isOutput, index, s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<VolumetricScalarSample>> VolumetricSampler::evaluateDensity() const
{
    std::vector<core::Ptr<VolumetricScalarSample>> res;
    size_t s;

    VolumetricScalarSample** p= evaluateDensity_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<VolumetricScalarSample>> VolumetricSampler::evaluateLevelSet() const
{
    std::vector<core::Ptr<VolumetricScalarSample>> res;
    size_t s;

    VolumetricScalarSample** p= evaluateLevelSet_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<VolumetricColorSample>> VolumetricSampler::evaluateColor() const
{
    std::vector<core::Ptr<VolumetricColorSample>> res;
    size_t s;

    VolumetricColorSample** p= evaluateColor_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_VOLUMETRICSAMPLER_API