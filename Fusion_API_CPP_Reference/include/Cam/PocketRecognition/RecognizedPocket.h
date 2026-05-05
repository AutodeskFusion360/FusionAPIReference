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
#include "../../Core/Base.h"
#include "../CamTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_RECOGNIZEDPOCKET_CPP__
# define ADSK_CAM_RECOGNIZEDPOCKET_API XI_EXPORT
# else
# define ADSK_CAM_RECOGNIZEDPOCKET_API
# endif
#else
# define ADSK_CAM_RECOGNIZEDPOCKET_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class RecognizedPocketInput;
    class RecognizedPockets;
}}
namespace adsk { namespace core {
    class Curve3DPath;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class BRepFace;
}}

namespace adsk { namespace cam {

/// Object that represents a single pocket (an outer boundary with depth and optional islands)
/// which has been recognized on the model.
/// See PocketRecognitionSelection for making a selection as in the UI.
class RecognizedPocket : public core::Base {
public:

    /// Gets all recognized pockets from the given body and returns them.
    /// This recognition method does not contain bosses.
    /// body : Model body on which to recognize pockets
    /// attackVector : A vector defining the orientation in which to search for pockets. This should be the
    /// vector pointing down along the tool towards its tip and the pocket floors.
    static core::Ptr<RecognizedPockets> recognizePockets(const core::Ptr<core::Base>& body, const core::Ptr<core::Vector3D>& attackVector);

    /// Returns the outside boundaries of this pocket (in cm).
    std::vector<core::Ptr<core::Curve3DPath>> boundaries() const;

    /// Returns each island inside this pocket as a separate ProfileLoop object (in cm).
    std::vector<core::Ptr<core::Curve3DPath>> islands() const;

    /// Returns the depth of the pocket in centimeters, i.e. the positive distance from top to bottom
    double depth() const;

    /// Returns true if this is a through pocket, i.e. if the bottom is open.
    bool isThrough() const;

    /// Returns true if this pocket is closed, i.e. if its boundary is a single closed curve.
    bool isClosed() const;

    /// Returns the type of bottom edge this pocket has.
    RecognizedPocketBottomType bottomType() const;

    /// Returns all faces making up the pocket.
    std::vector<core::Ptr<fusion::BRepFace>> faces() const;

    /// Returns all faces making up the pocket, which are shared with other pockets.
    std::vector<core::Ptr<fusion::BRepFace>> sharedFaces() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets all recognized pockets based on the properties in the given input object and returns them.
    /// The method is only available with the Machining Extension.
    /// input : An input object defining the body and search parameters for recognizing pockets.
    static core::Ptr<RecognizedPockets> recognizePocketsWithInput(const core::Ptr<RecognizedPocketInput>& input);

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the attack vector that was used to recognize this pocket.
    core::Ptr<core::Vector3D> attackVector() const;

    ADSK_CAM_RECOGNIZEDPOCKET_API static const char* classType();
    ADSK_CAM_RECOGNIZEDPOCKET_API const char* objectType() const override;
    ADSK_CAM_RECOGNIZEDPOCKET_API void* queryInterface(const char* id) const override;
    ADSK_CAM_RECOGNIZEDPOCKET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_RECOGNIZEDPOCKET_API static RecognizedPockets* recognizePockets_raw(core::Base* body, core::Vector3D* attackVector);
    virtual core::Curve3DPath** boundaries_raw(size_t& return_size) const = 0;
    virtual core::Curve3DPath** islands_raw(size_t& return_size) const = 0;
    virtual double depth_raw() const = 0;
    virtual bool isThrough_raw() const = 0;
    virtual bool isClosed_raw() const = 0;
    virtual RecognizedPocketBottomType bottomType_raw() const = 0;
    virtual fusion::BRepFace** faces_raw(size_t& return_size) const = 0;
    virtual fusion::BRepFace** sharedFaces_raw(size_t& return_size) const = 0;
    ADSK_CAM_RECOGNIZEDPOCKET_API static RecognizedPockets* recognizePocketsWithInput_raw(RecognizedPocketInput* input);
    virtual core::Vector3D* attackVector_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<RecognizedPockets> RecognizedPocket::recognizePockets(const core::Ptr<core::Base>& body, const core::Ptr<core::Vector3D>& attackVector)
{
    core::Ptr<RecognizedPockets> res = recognizePockets_raw(body.get(), attackVector.get());
    return res;
}

inline std::vector<core::Ptr<core::Curve3DPath>> RecognizedPocket::boundaries() const
{
    std::vector<core::Ptr<core::Curve3DPath>> res;
    size_t s;

    core::Curve3DPath** p= boundaries_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<core::Curve3DPath>> RecognizedPocket::islands() const
{
    std::vector<core::Ptr<core::Curve3DPath>> res;
    size_t s;

    core::Curve3DPath** p= islands_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline double RecognizedPocket::depth() const
{
    double res = depth_raw();
    return res;
}

inline bool RecognizedPocket::isThrough() const
{
    bool res = isThrough_raw();
    return res;
}

inline bool RecognizedPocket::isClosed() const
{
    bool res = isClosed_raw();
    return res;
}

inline RecognizedPocketBottomType RecognizedPocket::bottomType() const
{
    RecognizedPocketBottomType res = bottomType_raw();
    return res;
}

inline std::vector<core::Ptr<fusion::BRepFace>> RecognizedPocket::faces() const
{
    std::vector<core::Ptr<fusion::BRepFace>> res;
    size_t s;

    fusion::BRepFace** p= faces_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<fusion::BRepFace>> RecognizedPocket::sharedFaces() const
{
    std::vector<core::Ptr<fusion::BRepFace>> res;
    size_t s;

    fusion::BRepFace** p= sharedFaces_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<RecognizedPockets> RecognizedPocket::recognizePocketsWithInput(const core::Ptr<RecognizedPocketInput>& input)
{
    core::Ptr<RecognizedPockets> res = recognizePocketsWithInput_raw(input.get());
    return res;
}

inline core::Ptr<core::Vector3D> RecognizedPocket::attackVector() const
{
    core::Ptr<core::Vector3D> res = attackVector_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_RECOGNIZEDPOCKET_API