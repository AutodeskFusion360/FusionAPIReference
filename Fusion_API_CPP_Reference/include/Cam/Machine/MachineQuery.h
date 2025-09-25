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
# ifdef __COMPILING_ADSK_CAM_MACHINEQUERY_CPP__
# define ADSK_CAM_MACHINEQUERY_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEQUERY_API
# endif
#else
# define ADSK_CAM_MACHINEQUERY_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Machine;
}}
namespace adsk { namespace core {
    class URL;
}}

namespace adsk { namespace cam {

/// MachineQuery defines the query to access Machines.
class MachineQuery : public core::Base {
public:

    /// The case-insensitive vendor specifies the vendor of the machine. The default empty vendor applies to all machines.
    std::string vendor() const;
    bool vendor(const std::string& value);

    /// The case-insensitive model specifies the model of the machine. The default empty model applies to all machines.
    std::string model() const;
    bool model(const std::string& value);

    /// The URL specifies the location and folder to search for in the machine library.
    /// Setting the URL updates the location.
    core::Ptr<core::URL> url() const;
    bool url(const core::Ptr<core::URL>& value);

    /// The location specifies the location to search in the machine library.
    /// Setting the location clears any previous specified URL.
    LibraryLocations location() const;
    bool location(LibraryLocations value);

    /// Executes the query for specific machines based on the query's properties.
    /// Returns a list of `Machine`. Each returned machine matches this query.
    std::vector<core::Ptr<Machine>> execute() const;

    ADSK_CAM_MACHINEQUERY_API static const char* classType();
    ADSK_CAM_MACHINEQUERY_API const char* objectType() const override;
    ADSK_CAM_MACHINEQUERY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEQUERY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* vendor_raw() const = 0;
    virtual bool vendor_raw(const char* value) = 0;
    virtual char* model_raw() const = 0;
    virtual bool model_raw(const char* value) = 0;
    virtual core::URL* url_raw() const = 0;
    virtual bool url_raw(core::URL* value) = 0;
    virtual LibraryLocations location_raw() const = 0;
    virtual bool location_raw(LibraryLocations value) = 0;
    virtual Machine** execute_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline std::string MachineQuery::vendor() const
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

inline bool MachineQuery::vendor(const std::string& value)
{
    return vendor_raw(value.c_str());
}

inline std::string MachineQuery::model() const
{
    std::string res;

    char* p= model_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MachineQuery::model(const std::string& value)
{
    return model_raw(value.c_str());
}

inline core::Ptr<core::URL> MachineQuery::url() const
{
    core::Ptr<core::URL> res = url_raw();
    return res;
}

inline bool MachineQuery::url(const core::Ptr<core::URL>& value)
{
    return url_raw(value.get());
}

inline LibraryLocations MachineQuery::location() const
{
    LibraryLocations res = location_raw();
    return res;
}

inline bool MachineQuery::location(LibraryLocations value)
{
    return location_raw(value);
}

inline std::vector<core::Ptr<Machine>> MachineQuery::execute() const
{
    std::vector<core::Ptr<Machine>> res;
    size_t s;

    Machine** p= execute_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEQUERY_API