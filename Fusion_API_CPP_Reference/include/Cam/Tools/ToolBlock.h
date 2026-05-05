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
# ifdef __COMPILING_ADSK_CAM_TOOLBLOCK_CPP__
# define ADSK_CAM_TOOLBLOCK_API XI_EXPORT
# else
# define ADSK_CAM_TOOLBLOCK_API
# endif
#else
# define ADSK_CAM_TOOLBLOCK_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class AssemblyComponentGeometry;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents a Tool Block.
/// 
/// A tool block is a type of tool that can have 3D geometry associated with it. 3D geometry can be supplied to represent
/// the shape of the tool block instead of an auto-generated shape derived from parameters.
class ToolBlock : public Tool {
public:

    /// Get or set the geometry and attachment points for this tool block.
    /// 
    /// A Null Object represents a tool without any 3D data associated.
    /// 
    core::Ptr<AssemblyComponentGeometry> geometry() const;
    bool geometry(const core::Ptr<AssemblyComponentGeometry>& value);

    ADSK_CAM_TOOLBLOCK_API static const char* classType();
    ADSK_CAM_TOOLBLOCK_API const char* objectType() const override;
    ADSK_CAM_TOOLBLOCK_API void* queryInterface(const char* id) const override;
    ADSK_CAM_TOOLBLOCK_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual AssemblyComponentGeometry* geometry_raw() const = 0;
    virtual bool geometry_raw(AssemblyComponentGeometry* value) = 0;
    virtual void placeholderToolBlock0() {}
    virtual void placeholderToolBlock1() {}
    virtual void placeholderToolBlock2() {}
    virtual void placeholderToolBlock3() {}
    virtual void placeholderToolBlock4() {}
    virtual void placeholderToolBlock5() {}
};

// Inline wrappers

inline core::Ptr<AssemblyComponentGeometry> ToolBlock::geometry() const
{
    core::Ptr<AssemblyComponentGeometry> res = geometry_raw();
    return res;
}

inline bool ToolBlock::geometry(const core::Ptr<AssemblyComponentGeometry>& value)
{
    return geometry_raw(value.get());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_TOOLBLOCK_API