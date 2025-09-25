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
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_PRINTSETTINGQUERY_CPP__
# define ADSK_CAM_PRINTSETTINGQUERY_API XI_EXPORT
# else
# define ADSK_CAM_PRINTSETTINGQUERY_API
# endif
#else
# define ADSK_CAM_PRINTSETTINGQUERY_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Machine;
    class PrintSetting;
}}
namespace adsk { namespace core {
    class URL;
}}

namespace adsk { namespace cam {

/// A PrintSettingQuery can be used to search a LibraryLocation for a set of PrintSetting objects matching the required properties.
class PrintSettingQuery : public core::Base {
public:

    /// The case-insensitive name specifies the name of the PrintSetting.
    std::string name() const;
    bool name(const std::string& value);

    /// The case-insensitive technology specifies technology of the PrintSetting.
    std::string technology() const;
    bool technology(const std::string& value);

    /// The case-insensitive vendor specifies vendor of the PrintSetting. Generic FFF PrintSetting doesnt have a vendor.
    std::string vendor() const;
    bool vendor(const std::string& value);

    /// The case-insensitive material specifies material of the MPBF PrintSetting.
    std::string material() const;
    bool material(const std::string& value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// The filament diameter specifies filament diameter for FFF Printer. This should match the FFF PrintSetting filament diameter in cm.
    double filamentDiameter() const;
    bool filamentDiameter(double value);

    /// The layer height specifies layer height of the PrintSetting. This should match the PrintSetting layer height in cm.
    double layerHeight() const;
    bool layerHeight(double value);

    /// The URL specifies the location and folder to search for in the PrintSetting library.
    /// Setting the URL updates the location.
    core::Ptr<core::URL> url() const;
    bool url(const core::Ptr<core::URL>& value);

    /// The location specifies the location to search in the PrintSetting library.
    /// Setting the location clears any previous specified URL.
    LibraryLocations location() const;
    bool location(LibraryLocations value);

    /// Query for specific PrintSettings. This PrintSettingQuery query.
    /// Returns a list of PrintSetting. Each returned PrintSetting matches this query.
    std::vector<core::Ptr<PrintSetting>> execute() const;

    /// The machine specifies which machine the found print setting are compatible with.
    core::Ptr<Machine> machine() const;
    bool machine(const core::Ptr<Machine>& value);

    ADSK_CAM_PRINTSETTINGQUERY_API static const char* classType();
    ADSK_CAM_PRINTSETTINGQUERY_API const char* objectType() const override;
    ADSK_CAM_PRINTSETTINGQUERY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_PRINTSETTINGQUERY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual char* technology_raw() const = 0;
    virtual bool technology_raw(const char* value) = 0;
    virtual char* vendor_raw() const = 0;
    virtual bool vendor_raw(const char* value) = 0;
    virtual char* material_raw() const = 0;
    virtual bool material_raw(const char* value) = 0;
    virtual double filamentDiameter_raw() const = 0;
    virtual bool filamentDiameter_raw(double value) = 0;
    virtual double layerHeight_raw() const = 0;
    virtual bool layerHeight_raw(double value) = 0;
    virtual core::URL* url_raw() const = 0;
    virtual bool url_raw(core::URL* value) = 0;
    virtual LibraryLocations location_raw() const = 0;
    virtual bool location_raw(LibraryLocations value) = 0;
    virtual PrintSetting** execute_raw(size_t& return_size) const = 0;
    virtual Machine* machine_raw() const = 0;
    virtual bool machine_raw(Machine* value) = 0;
};

// Inline wrappers

inline std::string PrintSettingQuery::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PrintSettingQuery::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline std::string PrintSettingQuery::technology() const
{
    std::string res;

    char* p= technology_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PrintSettingQuery::technology(const std::string& value)
{
    return technology_raw(value.c_str());
}

inline std::string PrintSettingQuery::vendor() const
{
    std::string res;

    char* p= vendor_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PrintSettingQuery::vendor(const std::string& value)
{
    return vendor_raw(value.c_str());
}

inline std::string PrintSettingQuery::material() const
{
    std::string res;

    char* p= material_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PrintSettingQuery::material(const std::string& value)
{
    return material_raw(value.c_str());
}

inline double PrintSettingQuery::filamentDiameter() const
{
    double res = filamentDiameter_raw();
    return res;
}

inline bool PrintSettingQuery::filamentDiameter(double value)
{
    return filamentDiameter_raw(value);
}

inline double PrintSettingQuery::layerHeight() const
{
    double res = layerHeight_raw();
    return res;
}

inline bool PrintSettingQuery::layerHeight(double value)
{
    return layerHeight_raw(value);
}

inline core::Ptr<core::URL> PrintSettingQuery::url() const
{
    core::Ptr<core::URL> res = url_raw();
    return res;
}

inline bool PrintSettingQuery::url(const core::Ptr<core::URL>& value)
{
    return url_raw(value.get());
}

inline LibraryLocations PrintSettingQuery::location() const
{
    LibraryLocations res = location_raw();
    return res;
}

inline bool PrintSettingQuery::location(LibraryLocations value)
{
    return location_raw(value);
}

inline std::vector<core::Ptr<PrintSetting>> PrintSettingQuery::execute() const
{
    std::vector<core::Ptr<PrintSetting>> res;
    size_t s;

    PrintSetting** p= execute_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<Machine> PrintSettingQuery::machine() const
{
    core::Ptr<Machine> res = machine_raw();
    return res;
}

inline bool PrintSettingQuery::machine(const core::Ptr<Machine>& value)
{
    return machine_raw(value.get());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_PRINTSETTINGQUERY_API