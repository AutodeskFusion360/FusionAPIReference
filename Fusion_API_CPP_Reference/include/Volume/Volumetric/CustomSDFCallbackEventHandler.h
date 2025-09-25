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
#include "../../Core/Application/EventHandler.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef VOLUMEXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_VOLUME_CUSTOMSDFCALLBACKEVENTHANDLER_CPP__
# define ADSK_VOLUME_CUSTOMSDFCALLBACKEVENTHANDLER_API XI_EXPORT
# else
# define ADSK_VOLUME_CUSTOMSDFCALLBACKEVENTHANDLER_API
# endif
#else
# define ADSK_VOLUME_CUSTOMSDFCALLBACKEVENTHANDLER_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class BoundingBox3D;
}}

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// API clients can implement subclasses of this handler to enable custom Signed Distance Field geometries.
class CustomSDFCallbackEventHandler : public core::EventHandler {
public:

    /// This method should be implemented in the subclass of the handler to return the bounding box of
    /// the Signed Distance Field that it can provide. This method will be called infrequently by the system.
    /// bboxOut : This is a return parameter. The values of this should be set by the client implementation.
    /// True if there is a valid bounding box.
    ADSK_VOLUME_CUSTOMSDFCALLBACKEVENTHANDLER_API virtual bool boundingBox(const core::Ptr<core::BoundingBox3D>& bboxOut) = 0;

    /// This method should be implemented in the subclass of the handler to return the Signed Distance
    /// value at the given coordinates within the bounding box. This method will be called very
    /// frequently and potentially from several differrent threads, it should be made as fast as possible
    /// x : X coordinate of the sampled point.
    /// y : Y coordinate of the sampled point.
    /// z : Z coordinate of the sampled point.
    /// The signed distance value at the sampled point (X,Y,Z).
    ADSK_VOLUME_CUSTOMSDFCALLBACKEVENTHANDLER_API virtual double signedDistanceAt(double x, double y, double z) = 0;
};

}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_CUSTOMSDFCALLBACKEVENTHANDLER_API