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
#include "../FusionTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIDATUMTARGET_CPP__
# define ADSK_FUSION_PMIDATUMTARGET_API XI_EXPORT
# else
# define ADSK_FUSION_PMIDATUMTARGET_API
# endif
#else
# define ADSK_FUSION_PMIDATUMTARGET_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Curve3D;
    class Matrix3D;
    class Point3D;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents a datum target belonging to an PMIImportedGDTDatum.
/// A datum target is used to define a specific location on a PMI GDT Datum.
class PMIDatumTarget : public core::Base {
public:

    /// Gets the id of this datum target.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    std::string targetId() const;

    /// Gets the type of this datum target.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    PMIDatumTargetTypes type() const;

    /// Gets the array of lengths defining this datum target, if any.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    std::vector<double> lengths() const;

    /// Gets the orientation of this datum target.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    core::Ptr<core::Matrix3D> orientation() const;

    /// Gets whether there is a point associated with this datum target.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    bool hasPointTarget() const;

    /// Gets the point target of this datum target.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    core::Ptr<core::Point3D> pointTarget() const;

    /// Gets the curves being targeted by this datum target, if any.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    std::vector<core::Ptr<core::Curve3D>> curveTargets() const;

    ADSK_FUSION_PMIDATUMTARGET_API static const char* classType();
    ADSK_FUSION_PMIDATUMTARGET_API const char* objectType() const override;
    ADSK_FUSION_PMIDATUMTARGET_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIDATUMTARGET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* targetId_raw() const = 0;
    virtual PMIDatumTargetTypes type_raw() const = 0;
    virtual double* lengths_raw(size_t& return_size) const = 0;
    virtual core::Matrix3D* orientation_raw() const = 0;
    virtual bool hasPointTarget_raw() const = 0;
    virtual core::Point3D* pointTarget_raw() const = 0;
    virtual core::Curve3D** curveTargets_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline std::string PMIDatumTarget::targetId() const
{
    std::string res;

    char* p= targetId_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline PMIDatumTargetTypes PMIDatumTarget::type() const
{
    PMIDatumTargetTypes res = type_raw();
    return res;
}

inline std::vector<double> PMIDatumTarget::lengths() const
{
    std::vector<double> res;
    size_t s;

    double* p= lengths_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<core::Matrix3D> PMIDatumTarget::orientation() const
{
    core::Ptr<core::Matrix3D> res = orientation_raw();
    return res;
}

inline bool PMIDatumTarget::hasPointTarget() const
{
    bool res = hasPointTarget_raw();
    return res;
}

inline core::Ptr<core::Point3D> PMIDatumTarget::pointTarget() const
{
    core::Ptr<core::Point3D> res = pointTarget_raw();
    return res;
}

inline std::vector<core::Ptr<core::Curve3D>> PMIDatumTarget::curveTargets() const
{
    std::vector<core::Ptr<core::Curve3D>> res;
    size_t s;

    core::Curve3D** p= curveTargets_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIDATUMTARGET_API