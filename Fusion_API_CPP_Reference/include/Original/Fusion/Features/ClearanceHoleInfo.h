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
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CLEARANCEHOLEINFO_CPP__
# define ADSK_FUSION_CLEARANCEHOLEINFO_API XI_EXPORT
# else
# define ADSK_FUSION_CLEARANCEHOLEINFO_API
# endif
#else
# define ADSK_FUSION_CLEARANCEHOLEINFO_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// This object defines the methods and properties that define the size of a clearance hole. This object is used
/// to create new hole features whose size is defined as a clearance hole for a specific size fastener. A new
/// ClearanceHoleInfo object is created by using the ClearanceHoleInfo.create method. To determine valid values
/// when creating a ClearanceHoleInfo object, you can use the ClearanceHoleDataQuery object, which is statically
/// created using the ClearanceHoleDataQuery.create method.
/// 
/// If the ClearanceHoleInfo object is obtained from an existing HoleFeature object, modifying properties on
/// the returned ClearanceHoleInfo object will modify the feature.
class ClearanceHoleInfo : public core::Base {
public:

    /// Method that creates a new ClearanceHoleInfo object to use in creating clearance holes.
    /// The ClearanceHoleInfo object defines the type, size, and fit of the clearance hole to create.
    /// Fusion uses this information to look up the full details of the clearance hole in tables delivered
    /// with Fusion. The ClearanceHoleDataQuery object can be used to determine valid input for this information.
    /// It's statically created using the ClearanceHoleDataQuery.create method.
    /// standard : Input string that specifies the standard.
    /// fastenerType : Input string that specifies the fastener type.
    /// size : Input string that specifies the fastener size.
    /// fit : Input enum value that specifies the fit of the fastener within the hole.
    /// Returns the newly created ClearanceHoleInfo object or null if the creation failed.
    static core::Ptr<ClearanceHoleInfo> create(const std::string& standard, const std::string& fastenerType, const std::string& size, ClearanceHoleFits fit);

    /// Returns the string that defines the standard. This is typically obtained by using the
    /// ClearanceHoleDataQuery object.
    std::string standard() const;

    /// Returns the string that defines the fastener type.
    std::string fastenerType() const;

    /// Returns the string that defines the fastener size the clearance hole is sized for.
    std::string size() const;

    /// Returns the enum value that defines the amount of clearance
    /// between the hole and the fastener.
    ClearanceHoleFits fit() const;

    /// Method that redefines the values associated with an existing ClearanceHoleInfo object. This is
    /// done to modify an existing clearance hole. The ClearanceHoleInfo object defines the type, size,
    /// and fit of the clearance hole to create. Fusion uses this information to look up the full details
    /// of the clearance hole in tables delivered with Fusion. The ClearanceHoleDataQuery object can be
    /// used to determine valid input for this information.
    /// standard : Input string that specifies the standard.
    /// fastenerType : Input string that specifies the fastener type.
    /// size : Input string that specifies the fastener size.
    /// fit : Input enum value that specifies the amount of clearance between the hole and the fastener.
    /// Returns true if the redefinition was successful.
    bool redefine(const std::string& standard, const std::string& fastenerType, const std::string& size, ClearanceHoleFits fit);

    ADSK_FUSION_CLEARANCEHOLEINFO_API static const char* classType();
    ADSK_FUSION_CLEARANCEHOLEINFO_API const char* objectType() const override;
    ADSK_FUSION_CLEARANCEHOLEINFO_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CLEARANCEHOLEINFO_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_CLEARANCEHOLEINFO_API static ClearanceHoleInfo* create_raw(const char* standard, const char* fastenerType, const char* size, ClearanceHoleFits fit);
    virtual char* standard_raw() const = 0;
    virtual char* fastenerType_raw() const = 0;
    virtual char* size_raw() const = 0;
    virtual ClearanceHoleFits fit_raw() const = 0;
    virtual bool redefine_raw(const char* standard, const char* fastenerType, const char* size, ClearanceHoleFits fit) = 0;
};

// Inline wrappers

inline core::Ptr<ClearanceHoleInfo> ClearanceHoleInfo::create(const std::string& standard, const std::string& fastenerType, const std::string& size, ClearanceHoleFits fit)
{
    core::Ptr<ClearanceHoleInfo> res = create_raw(standard.c_str(), fastenerType.c_str(), size.c_str(), fit);
    return res;
}

inline std::string ClearanceHoleInfo::standard() const
{
    std::string res;

    char* p= standard_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string ClearanceHoleInfo::fastenerType() const
{
    std::string res;

    char* p= fastenerType_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string ClearanceHoleInfo::size() const
{
    std::string res;

    char* p= size_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline ClearanceHoleFits ClearanceHoleInfo::fit() const
{
    ClearanceHoleFits res = fit_raw();
    return res;
}

inline bool ClearanceHoleInfo::redefine(const std::string& standard, const std::string& fastenerType, const std::string& size, ClearanceHoleFits fit)
{
    bool res = redefine_raw(standard.c_str(), fastenerType.c_str(), size.c_str(), fit);
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CLEARANCEHOLEINFO_API