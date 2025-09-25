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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_EXPORTOPTIONS_CPP__
# define ADSK_FUSION_EXPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_FUSION_EXPORTOPTIONS_API
# endif
#else
# define ADSK_FUSION_EXPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The base class for the different export types. This class is never directly used
/// in an export because you need the specific export type to specify the type of
/// export to be performed.
class ExportOptions : public core::Base {
public:

    /// Gets and sets the filename that the exported file will be written to. This can
    /// be empty in the case of STL export and sending the result to the mesh editor.
    std::string filename() const;
    bool filename(const std::string& value);

    /// Specifies the geometry to export. This can be an Occurrence, or the root Component.
    /// For STL, OBJ, and 3MF export, it can be a BRepBody. For DXF export, it can be a sketch of flat pattern.
    core::Ptr<core::Base> geometry() const;
    bool geometry(const core::Ptr<core::Base>& value);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Specifies whether invisible bodies and surface bodies should be included in the exported file.
    /// Meshes are included as well, if they are supported by the given export format.
    /// The flag also applies to the 'Bodies' container.
    /// Currently only used in the STEPExportRequest.
    bool isIncludingInvisibleBodies() const;
    bool isIncludingInvisibleBodies(bool value);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Specifies whether invisible components should be included in the exported file.
    /// If false, visible bodies in invisible components are not exported either.
    /// Currently only used in the STEPExportRequest.
    bool isIncludingInvisibleComponents() const;
    bool isIncludingInvisibleComponents(bool value);

    ADSK_FUSION_EXPORTOPTIONS_API static const char* classType();
    ADSK_FUSION_EXPORTOPTIONS_API const char* objectType() const override;
    ADSK_FUSION_EXPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_EXPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* filename_raw() const = 0;
    virtual bool filename_raw(const char* value) = 0;
    virtual core::Base* geometry_raw() const = 0;
    virtual bool geometry_raw(core::Base* value) = 0;
    virtual bool isIncludingInvisibleBodies_raw() const = 0;
    virtual bool isIncludingInvisibleBodies_raw(bool value) = 0;
    virtual bool isIncludingInvisibleComponents_raw() const = 0;
    virtual bool isIncludingInvisibleComponents_raw(bool value) = 0;
    virtual void placeholderExportOptions0() {}
    virtual void placeholderExportOptions1() {}
    virtual void placeholderExportOptions2() {}
    virtual void placeholderExportOptions3() {}
    virtual void placeholderExportOptions4() {}
    virtual void placeholderExportOptions5() {}
    virtual void placeholderExportOptions6() {}
    virtual void placeholderExportOptions7() {}
    virtual void placeholderExportOptions8() {}
    virtual void placeholderExportOptions9() {}
    virtual void placeholderExportOptions10() {}
    virtual void placeholderExportOptions11() {}
    virtual void placeholderExportOptions12() {}
    virtual void placeholderExportOptions13() {}
    virtual void placeholderExportOptions14() {}
    virtual void placeholderExportOptions15() {}
    virtual void placeholderExportOptions16() {}
    virtual void placeholderExportOptions17() {}
    virtual void placeholderExportOptions18() {}
    virtual void placeholderExportOptions19() {}
    virtual void placeholderExportOptions20() {}
    virtual void placeholderExportOptions21() {}
    virtual void placeholderExportOptions22() {}
    virtual void placeholderExportOptions23() {}
};

// Inline wrappers

inline std::string ExportOptions::filename() const
{
    std::string res;

    char* p= filename_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ExportOptions::filename(const std::string& value)
{
    return filename_raw(value.c_str());
}

inline core::Ptr<core::Base> ExportOptions::geometry() const
{
    core::Ptr<core::Base> res = geometry_raw();
    return res;
}

inline bool ExportOptions::geometry(const core::Ptr<core::Base>& value)
{
    return geometry_raw(value.get());
}

inline bool ExportOptions::isIncludingInvisibleBodies() const
{
    bool res = isIncludingInvisibleBodies_raw();
    return res;
}

inline bool ExportOptions::isIncludingInvisibleBodies(bool value)
{
    return isIncludingInvisibleBodies_raw(value);
}

inline bool ExportOptions::isIncludingInvisibleComponents() const
{
    bool res = isIncludingInvisibleComponents_raw();
    return res;
}

inline bool ExportOptions::isIncludingInvisibleComponents(bool value)
{
    return isIncludingInvisibleComponents_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_EXPORTOPTIONS_API