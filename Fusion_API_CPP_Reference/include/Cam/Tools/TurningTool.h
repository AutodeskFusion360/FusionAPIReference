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
#include "Tool.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_TURNINGTOOL_CPP__
# define ADSK_CAM_TURNINGTOOL_API XI_EXPORT
# else
# define ADSK_CAM_TURNINGTOOL_API
# endif
#else
# define ADSK_CAM_TURNINGTOOL_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class AssemblyComponentGeometry;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents a Turning Tool.
/// 
/// A turning tool is comprised of an insert and potentially a holder. 3D geometry can be supplied to represent
/// the shape of the holder instead of the auto-generated shape derived from parameters.
class TurningTool : public Tool {
public:

    /// Get or set the geometry and attachment points for the holder for this turning tool.
    /// 
    /// A Null Object represents a tool without any 3D data associated.
    /// 
    core::Ptr<AssemblyComponentGeometry> holderGeometry() const;
    bool holderGeometry(const core::Ptr<AssemblyComponentGeometry>& value);

    ADSK_CAM_TURNINGTOOL_API static const char* classType();
    ADSK_CAM_TURNINGTOOL_API const char* objectType() const override;
    ADSK_CAM_TURNINGTOOL_API void* queryInterface(const char* id) const override;
    ADSK_CAM_TURNINGTOOL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual AssemblyComponentGeometry* holderGeometry_raw() const = 0;
    virtual bool holderGeometry_raw(AssemblyComponentGeometry* value) = 0;
    virtual void placeholderTurningTool0() {}
    virtual void placeholderTurningTool1() {}
    virtual void placeholderTurningTool2() {}
    virtual void placeholderTurningTool3() {}
    virtual void placeholderTurningTool4() {}
    virtual void placeholderTurningTool5() {}
};

// Inline wrappers

inline core::Ptr<AssemblyComponentGeometry> TurningTool::holderGeometry() const
{
    core::Ptr<AssemblyComponentGeometry> res = holderGeometry_raw();
    return res;
}

inline bool TurningTool::holderGeometry(const core::Ptr<AssemblyComponentGeometry>& value)
{
    return holderGeometry_raw(value.get());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_TURNINGTOOL_API