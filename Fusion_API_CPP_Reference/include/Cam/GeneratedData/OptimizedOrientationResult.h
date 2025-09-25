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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_OPTIMIZEDORIENTATIONRESULT_CPP__
# define ADSK_CAM_OPTIMIZEDORIENTATIONRESULT_API XI_EXPORT
# else
# define ADSK_CAM_OPTIMIZEDORIENTATIONRESULT_API
# endif
#else
# define ADSK_CAM_OPTIMIZEDORIENTATIONRESULT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
}}

namespace adsk { namespace cam {

/// The orientation result instance.
/// Contains properties that can be used to create a custom ranking and the orientation matrix.
/// The calculated ranking is based on the orientation operation's ranking priorities.
class OptimizedOrientationResult : public core::Base {
public:

    /// The volume of the support hull below the oriented part.
    /// The value is given in cubic centimeters
    float supportVolume() const;

    /// The shadow area of the support hull below the oriented part.
    /// The value is given in squared centimeters
    float supportArea() const;

    /// The volume of the bounding box aligned to the world coordinate system of the oriented part.
    /// The value is given in cubic centimeters
    float boundingBoxVolume() const;

    /// The resulting height of the oriented part.
    /// The value is given in centimeters
    float partHeight() const;

    /// The height of the center of gravity of the oriented part.
    /// The value is given in centimeters
    float centerOfGravityHeight() const;

    /// The value which the initial ordering is based on. Calculated based on the properties above by the orientation operation.
    float rankingValue() const;

    /// The transformation matrix to be applied onto the occurrence's existing transformation at the time of the calculation.
    core::Ptr<core::Matrix3D> transformation() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// The index in the initial ordering list in the collection.
    int index() const;

    ADSK_CAM_OPTIMIZEDORIENTATIONRESULT_API static const char* classType();
    ADSK_CAM_OPTIMIZEDORIENTATIONRESULT_API const char* objectType() const override;
    ADSK_CAM_OPTIMIZEDORIENTATIONRESULT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_OPTIMIZEDORIENTATIONRESULT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual float supportVolume_raw() const = 0;
    virtual float supportArea_raw() const = 0;
    virtual float boundingBoxVolume_raw() const = 0;
    virtual float partHeight_raw() const = 0;
    virtual float centerOfGravityHeight_raw() const = 0;
    virtual float rankingValue_raw() const = 0;
    virtual core::Matrix3D* transformation_raw() const = 0;
    virtual int index_raw() const = 0;
};

// Inline wrappers

inline float OptimizedOrientationResult::supportVolume() const
{
    float res = supportVolume_raw();
    return res;
}

inline float OptimizedOrientationResult::supportArea() const
{
    float res = supportArea_raw();
    return res;
}

inline float OptimizedOrientationResult::boundingBoxVolume() const
{
    float res = boundingBoxVolume_raw();
    return res;
}

inline float OptimizedOrientationResult::partHeight() const
{
    float res = partHeight_raw();
    return res;
}

inline float OptimizedOrientationResult::centerOfGravityHeight() const
{
    float res = centerOfGravityHeight_raw();
    return res;
}

inline float OptimizedOrientationResult::rankingValue() const
{
    float res = rankingValue_raw();
    return res;
}

inline core::Ptr<core::Matrix3D> OptimizedOrientationResult::transformation() const
{
    core::Ptr<core::Matrix3D> res = transformation_raw();
    return res;
}

inline int OptimizedOrientationResult::index() const
{
    int res = index_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_OPTIMIZEDORIENTATIONRESULT_API