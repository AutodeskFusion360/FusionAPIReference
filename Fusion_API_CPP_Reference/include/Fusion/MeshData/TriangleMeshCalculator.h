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
# ifdef __COMPILING_ADSK_FUSION_TRIANGLEMESHCALCULATOR_CPP__
# define ADSK_FUSION_TRIANGLEMESHCALCULATOR_API XI_EXPORT
# else
# define ADSK_FUSION_TRIANGLEMESHCALCULATOR_API
# endif
#else
# define ADSK_FUSION_TRIANGLEMESHCALCULATOR_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class MeshManager;
    class TriangleMesh;
}}

namespace adsk { namespace fusion {

/// Used to calculate new meshes for a B-Rep or T-Spline using defined criteria.
class TriangleMeshCalculator : public core::Base {
public:

    /// This is a simplified way to set the various settings that control the resulting mesh. When used it automatically
    /// adjusts all of the property values appropriately. It does this for the given geometry by computing its bounding
    /// box diameter. Then the surface tolerance is calculated as shown below where the meshLOD is the "Level of Detail" and
    /// is described in more detail below. The diameter is the bounding box diameter.
    /// 
    ///   double nodeApproximateSize = std::pow(2.0, meshLOD);
    ///   double fracTol = 1.0 / nodeApproximateSize;
    ///   surfaceTolerance = fracTol * diameter;
    /// 
    /// triangleMeshQuality : The mesh quality is specified by using an item from the enum list where the following items result
    /// in a corresponding mesh LOD that's used in the equation above.
    /// 
    /// LowQualityTriangleMesh: 8
    /// NormalQualityTriangleMesh: 11
    /// HighQualityTriangleMesh: 13
    /// VeryHighQualityTriangleMesh: 15
    /// Returns true if setting the quality was successful.
    bool setQuality(TriangleMeshQualityOptions triangleMeshQuality);

    /// Specifies the maximum distance that the mesh can deviate from the smooth surface.
    /// The value is in centimeters. Smaller values can result in a much greater number
    /// of facets being returned and will require more processing time to calculate.
    double surfaceTolerance() const;
    bool surfaceTolerance(double value);

    /// Specifies the maximum side of any triangle in the mesh. A value of 0 (the default)
    /// indicates that no maximum length is specified. The value is specified in centimeters.
    double maxSideLength() const;
    bool maxSideLength(double value);

    /// Specifies the maximum length to height ratio that a triangle can have.
    /// This helps to avoid long skinny triangles. A value of 0 (the default)
    /// indicates that no maximum aspect ratio is specified.
    double maxAspectRatio() const;
    bool maxAspectRatio(double value);

    /// Specifies the maximum deviation between adjacent vertex normals.
    /// This value is the maximum angle allowed between normals and is
    /// specified in radians. A value of 0 (the default) indicates that no normal deviation is specified.
    double maxNormalDeviation() const;
    bool maxNormalDeviation(double value);

    /// Calculates a new triangle mesh based on the current settings.
    /// Returns the new TriangleMesh object or null in the case where the calculation failed.
    core::Ptr<TriangleMesh> calculate();

    /// Returns the parent MeshManager object.
    core::Ptr<MeshManager> parentMeshManager() const;

    ADSK_FUSION_TRIANGLEMESHCALCULATOR_API static const char* classType();
    ADSK_FUSION_TRIANGLEMESHCALCULATOR_API const char* objectType() const override;
    ADSK_FUSION_TRIANGLEMESHCALCULATOR_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TRIANGLEMESHCALCULATOR_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setQuality_raw(TriangleMeshQualityOptions triangleMeshQuality) = 0;
    virtual double surfaceTolerance_raw() const = 0;
    virtual bool surfaceTolerance_raw(double value) = 0;
    virtual double maxSideLength_raw() const = 0;
    virtual bool maxSideLength_raw(double value) = 0;
    virtual double maxAspectRatio_raw() const = 0;
    virtual bool maxAspectRatio_raw(double value) = 0;
    virtual double maxNormalDeviation_raw() const = 0;
    virtual bool maxNormalDeviation_raw(double value) = 0;
    virtual TriangleMesh* calculate_raw() = 0;
    virtual MeshManager* parentMeshManager_raw() const = 0;
};

// Inline wrappers

inline bool TriangleMeshCalculator::setQuality(TriangleMeshQualityOptions triangleMeshQuality)
{
    bool res = setQuality_raw(triangleMeshQuality);
    return res;
}

inline double TriangleMeshCalculator::surfaceTolerance() const
{
    double res = surfaceTolerance_raw();
    return res;
}

inline bool TriangleMeshCalculator::surfaceTolerance(double value)
{
    return surfaceTolerance_raw(value);
}

inline double TriangleMeshCalculator::maxSideLength() const
{
    double res = maxSideLength_raw();
    return res;
}

inline bool TriangleMeshCalculator::maxSideLength(double value)
{
    return maxSideLength_raw(value);
}

inline double TriangleMeshCalculator::maxAspectRatio() const
{
    double res = maxAspectRatio_raw();
    return res;
}

inline bool TriangleMeshCalculator::maxAspectRatio(double value)
{
    return maxAspectRatio_raw(value);
}

inline double TriangleMeshCalculator::maxNormalDeviation() const
{
    double res = maxNormalDeviation_raw();
    return res;
}

inline bool TriangleMeshCalculator::maxNormalDeviation(double value)
{
    return maxNormalDeviation_raw(value);
}

inline core::Ptr<TriangleMesh> TriangleMeshCalculator::calculate()
{
    core::Ptr<TriangleMesh> res = calculate_raw();
    return res;
}

inline core::Ptr<MeshManager> TriangleMeshCalculator::parentMeshManager() const
{
    core::Ptr<MeshManager> res = parentMeshManager_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TRIANGLEMESHCALCULATOR_API