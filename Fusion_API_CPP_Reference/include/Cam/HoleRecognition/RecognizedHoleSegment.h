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
#include "../CamTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_RECOGNIZEDHOLESEGMENT_CPP__
# define ADSK_CAM_RECOGNIZEDHOLESEGMENT_API XI_EXPORT
# else
# define ADSK_CAM_RECOGNIZEDHOLESEGMENT_API
# endif
#else
# define ADSK_CAM_RECOGNIZEDHOLESEGMENT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class ThreadFeature;
}}

namespace adsk { namespace cam {

/// Object that represents a hole segment, i.e. a single geometric shape like a cylinder or cone within the context of a hole.
/// A segment represents a hole face.
class RecognizedHoleSegment : public core::Base {
public:

    /// Returns whether this segment represents a cylinder, cone, flat, or torus geometry type
    HoleSegmentType holeSegmentType() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the model face this segment references.
    core::Ptr<core::Base> face() const;

    /// Returns the diameter of the top of this segment.
    double topDiameter() const;

    /// Returns the diameter of the bottom of this segment.
    double bottomDiameter() const;

    /// Returns the height of this segment from top to bottom.
    double height() const;

    /// Returns the unit vector that points straight up out of the segment in the global coordinate system.
    core::Ptr<core::Vector3D> axis() const;

    /// Returns true if this segment is threaded, i.e. associated with a thread feature.
    bool isThreaded() const;

    /// Returns the thread features associated with this segment, or null if none exist for this segment.
    std::vector<core::Ptr<fusion::ThreadFeature>> threadFeatures() const;

    /// For hole segments of type Cone, returns the cone's half angle,
    /// i.e. the angle between the axis of the cone and its surface. Returns 0 for other segment types.
    double halfAngle() const;

    /// Returns the model faces this segment references.
    std::vector<core::Ptr<core::Base>> faces() const;

    ADSK_CAM_RECOGNIZEDHOLESEGMENT_API static const char* classType();
    ADSK_CAM_RECOGNIZEDHOLESEGMENT_API const char* objectType() const override;
    ADSK_CAM_RECOGNIZEDHOLESEGMENT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_RECOGNIZEDHOLESEGMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual HoleSegmentType holeSegmentType_raw() const = 0;
    virtual core::Base* face_raw() const = 0;
    virtual double topDiameter_raw() const = 0;
    virtual double bottomDiameter_raw() const = 0;
    virtual double height_raw() const = 0;
    virtual core::Vector3D* axis_raw() const = 0;
    virtual bool isThreaded_raw() const = 0;
    virtual fusion::ThreadFeature** threadFeatures_raw(size_t& return_size) const = 0;
    virtual double halfAngle_raw() const = 0;
    virtual core::Base** faces_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline HoleSegmentType RecognizedHoleSegment::holeSegmentType() const
{
    HoleSegmentType res = holeSegmentType_raw();
    return res;
}

inline core::Ptr<core::Base> RecognizedHoleSegment::face() const
{
    core::Ptr<core::Base> res = face_raw();
    return res;
}

inline double RecognizedHoleSegment::topDiameter() const
{
    double res = topDiameter_raw();
    return res;
}

inline double RecognizedHoleSegment::bottomDiameter() const
{
    double res = bottomDiameter_raw();
    return res;
}

inline double RecognizedHoleSegment::height() const
{
    double res = height_raw();
    return res;
}

inline core::Ptr<core::Vector3D> RecognizedHoleSegment::axis() const
{
    core::Ptr<core::Vector3D> res = axis_raw();
    return res;
}

inline bool RecognizedHoleSegment::isThreaded() const
{
    bool res = isThreaded_raw();
    return res;
}

inline std::vector<core::Ptr<fusion::ThreadFeature>> RecognizedHoleSegment::threadFeatures() const
{
    std::vector<core::Ptr<fusion::ThreadFeature>> res;
    size_t s;

    fusion::ThreadFeature** p= threadFeatures_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline double RecognizedHoleSegment::halfAngle() const
{
    double res = halfAngle_raw();
    return res;
}

inline std::vector<core::Ptr<core::Base>> RecognizedHoleSegment::faces() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= faces_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_RECOGNIZEDHOLESEGMENT_API