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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_ASSEMBLYCOMPONENTGEOMETRY_CPP__
# define ADSK_CAM_ASSEMBLYCOMPONENTGEOMETRY_API XI_EXPORT
# else
# define ADSK_CAM_ASSEMBLYCOMPONENTGEOMETRY_API
# endif
#else
# define ADSK_CAM_ASSEMBLYCOMPONENTGEOMETRY_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents the 3D geometry and attachment points for a tool component (such as a tool holder or tool block).
/// 
/// AssemblyComponentGeometry provides the ability to define custom 3D geometry for tool components using STEP file data,
/// along with joint origins that specify how the component attaches to other parts of the tool assembly (machine side and cutting side).
class AssemblyComponentGeometry : public core::Base {
public:

    /// An Assembly Component Geometry instance is valid if we have all of:
    /// 1. Valid solid geometry representing the shape of the item
    /// 2. A valid joint origin for both Machine and Cutting side attachments
    /// 
    /// If we are missing any or all of these elements the item is invalid, and will not be used by any tool it
    /// is attached to for rendering or simulation purposes.
    bool isValidGeometry() const;

    /// Use the given step file geometry to set the geometry of the tool item.
    /// stepFileContents : Contents of a STEP file as a string that contains the geometry to use for this tool item.
    void setStepGeometry(const std::string& stepFileContents);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Set the position and orientation of a joint. Specify the joint to set using ToolJointType
    /// and a 4x4 matrix that defines the joint origin and axes.
    /// jointType : The type of joint to set. Use one of the ToolJointType enum values:
    /// CuttingSideWCS for the cutting side attachment point,
    /// MachineSideWCS for the machine side attachment point or
    /// ToolHolderWCS for the tool holder attachment point.
    /// jointOrigin : A 4x4 matrix that defines the position and orientation of the joint origin.
    void setJointOrigin(ToolJointType jointType, const core::Ptr<core::Matrix3D>& jointOrigin);

    ADSK_CAM_ASSEMBLYCOMPONENTGEOMETRY_API static const char* classType();
    ADSK_CAM_ASSEMBLYCOMPONENTGEOMETRY_API const char* objectType() const override;
    ADSK_CAM_ASSEMBLYCOMPONENTGEOMETRY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_ASSEMBLYCOMPONENTGEOMETRY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isValidGeometry_raw() const = 0;
    virtual void setStepGeometry_raw(const char* stepFileContents) = 0;
    virtual void setJointOrigin_raw(ToolJointType jointType, core::Matrix3D* jointOrigin) = 0;
    virtual void placeholderAssemblyComponentGeometry0() {}
    virtual void placeholderAssemblyComponentGeometry1() {}
    virtual void placeholderAssemblyComponentGeometry2() {}
    virtual void placeholderAssemblyComponentGeometry3() {}
    virtual void placeholderAssemblyComponentGeometry4() {}
};

// Inline wrappers

inline bool AssemblyComponentGeometry::isValidGeometry() const
{
    bool res = isValidGeometry_raw();
    return res;
}

inline void AssemblyComponentGeometry::setStepGeometry(const std::string& stepFileContents)
{
    setStepGeometry_raw(stepFileContents.c_str());
}

inline void AssemblyComponentGeometry::setJointOrigin(ToolJointType jointType, const core::Ptr<core::Matrix3D>& jointOrigin)
{
    setJointOrigin_raw(jointType, jointOrigin.get());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_ASSEMBLYCOMPONENTGEOMETRY_API