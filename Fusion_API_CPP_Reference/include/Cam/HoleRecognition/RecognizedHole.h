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
# ifdef __COMPILING_ADSK_CAM_RECOGNIZEDHOLE_CPP__
# define ADSK_CAM_RECOGNIZEDHOLE_API XI_EXPORT
# else
# define ADSK_CAM_RECOGNIZEDHOLE_API
# endif
#else
# define ADSK_CAM_RECOGNIZEDHOLE_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class RecognizedHoles;
    class RecognizedHoleSegment;
    class RecognizedHolesInput;
}}
namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace cam {

/// Object that represents a hole, a hole is made of one or more segments.
class RecognizedHole : public core::Base {
public:

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns a collection of all recognized holes.
    /// bodies : Model bodies on which to recognize holes.
    static core::Ptr<RecognizedHoles> recognizeHoles(const std::vector<core::Ptr<core::Base>>& bodies);

    /// Returns the unit vector that points straight up out of the hole in the global coordinate system.
    core::Ptr<core::Vector3D> axis() const;

    /// Returns true if at least one segment of this hole is threaded, i.e. associated with a thread feature.
    bool isThreaded() const;

    /// Returns the segment at the specified index from this hole. The collection of segments that comprise this hole
    /// are in order. The first segment is at the top of this hole and the last segment is at the bottom.
    /// index : The index of the segment within this hole to return. The first segment in this hole has an index of 0.
    core::Ptr<RecognizedHoleSegment> segment(size_t index) const;

    /// Returns the number of segments contained in this hole.
    size_t segmentCount() const;

    /// Returns a point at the center of the hole top.
    core::Ptr<core::Point3D> top() const;

    /// Returns a point at the center of the hole bottom.
    core::Ptr<core::Point3D> bottom() const;

    /// Returns the diameter of the top of this hole (top diameter of the first segment contained in this hole).
    double topDiameter() const;

    /// Returns the diameter of the bottom of this hole (bottom diameter of the last segment contained in this hole).
    double bottomDiameter() const;

    /// Returns the total length of all segments contained in this hole.
    double totalLength() const;

    /// Returns true if there are any warnings associated with this hole.
    bool hasWarnings() const;

    /// Returns true if there are any errors associated with this hole.
    bool hasErrors() const;

    /// Returns true if this is a through hole, i.e. if the bottom is open.
    bool isThrough() const;

    /// Returns a collection of all recognized holes.
    /// bodies : Model bodies on which to recognize holes.
    /// input : Input object that contains filtering settings
    static core::Ptr<RecognizedHoles> recognizeHolesWithInput(const std::vector<core::Ptr<core::Base>>& bodies, const core::Ptr<RecognizedHolesInput>& input);

    ADSK_CAM_RECOGNIZEDHOLE_API static const char* classType();
    ADSK_CAM_RECOGNIZEDHOLE_API const char* objectType() const override;
    ADSK_CAM_RECOGNIZEDHOLE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_RECOGNIZEDHOLE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_RECOGNIZEDHOLE_API static RecognizedHoles* recognizeHoles_raw(core::Base** bodies, size_t bodies_size);
    virtual core::Vector3D* axis_raw() const = 0;
    virtual bool isThreaded_raw() const = 0;
    virtual RecognizedHoleSegment* segment_raw(size_t index) const = 0;
    virtual size_t segmentCount_raw() const = 0;
    virtual core::Point3D* top_raw() const = 0;
    virtual core::Point3D* bottom_raw() const = 0;
    virtual double topDiameter_raw() const = 0;
    virtual double bottomDiameter_raw() const = 0;
    virtual double totalLength_raw() const = 0;
    virtual bool hasWarnings_raw() const = 0;
    virtual bool hasErrors_raw() const = 0;
    virtual bool isThrough_raw() const = 0;
    ADSK_CAM_RECOGNIZEDHOLE_API static RecognizedHoles* recognizeHolesWithInput_raw(core::Base** bodies, size_t bodies_size, RecognizedHolesInput* input);
};

// Inline wrappers

inline core::Ptr<RecognizedHoles> RecognizedHole::recognizeHoles(const std::vector<core::Ptr<core::Base>>& bodies)
{
    core::Base** bodies_ = new core::Base*[bodies.size()];
    for(size_t i=0; i<bodies.size(); ++i)
        bodies_[i] = bodies[i].get();

    core::Ptr<RecognizedHoles> res = recognizeHoles_raw(bodies_, bodies.size());
    delete[] bodies_;
    return res;
}

inline core::Ptr<core::Vector3D> RecognizedHole::axis() const
{
    core::Ptr<core::Vector3D> res = axis_raw();
    return res;
}

inline bool RecognizedHole::isThreaded() const
{
    bool res = isThreaded_raw();
    return res;
}

inline core::Ptr<RecognizedHoleSegment> RecognizedHole::segment(size_t index) const
{
    core::Ptr<RecognizedHoleSegment> res = segment_raw(index);
    return res;
}

inline size_t RecognizedHole::segmentCount() const
{
    size_t res = segmentCount_raw();
    return res;
}

inline core::Ptr<core::Point3D> RecognizedHole::top() const
{
    core::Ptr<core::Point3D> res = top_raw();
    return res;
}

inline core::Ptr<core::Point3D> RecognizedHole::bottom() const
{
    core::Ptr<core::Point3D> res = bottom_raw();
    return res;
}

inline double RecognizedHole::topDiameter() const
{
    double res = topDiameter_raw();
    return res;
}

inline double RecognizedHole::bottomDiameter() const
{
    double res = bottomDiameter_raw();
    return res;
}

inline double RecognizedHole::totalLength() const
{
    double res = totalLength_raw();
    return res;
}

inline bool RecognizedHole::hasWarnings() const
{
    bool res = hasWarnings_raw();
    return res;
}

inline bool RecognizedHole::hasErrors() const
{
    bool res = hasErrors_raw();
    return res;
}

inline bool RecognizedHole::isThrough() const
{
    bool res = isThrough_raw();
    return res;
}

inline core::Ptr<RecognizedHoles> RecognizedHole::recognizeHolesWithInput(const std::vector<core::Ptr<core::Base>>& bodies, const core::Ptr<RecognizedHolesInput>& input)
{
    core::Base** bodies_ = new core::Base*[bodies.size()];
    for(size_t i=0; i<bodies.size(); ++i)
        bodies_[i] = bodies[i].get();

    core::Ptr<RecognizedHoles> res = recognizeHolesWithInput_raw(bodies_, bodies.size(), input.get());
    delete[] bodies_;
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_RECOGNIZEDHOLE_API