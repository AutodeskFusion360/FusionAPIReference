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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_AUTOCONSTRAINRESULT_CPP__
# define ADSK_FUSION_AUTOCONSTRAINRESULT_API XI_EXPORT
# else
# define ADSK_FUSION_AUTOCONSTRAINRESULT_API
# endif
#else
# define ADSK_FUSION_AUTOCONSTRAINRESULT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class GeometricConstraint;
    class SketchDimension;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Provides the result information after a sketch auto constrain operation has been executed.
/// This object contains details about what constraints and dimensions were added and whether
/// the sketch was successfully fully constrained.
class AutoConstrainResult : public core::Base {
public:

    /// Returns an array of the SketchDimension objects that were added to constrain the sketch.
    /// If no dimensions were added during the auto constrain operation, this property returns
    /// an empty array.
    std::vector<core::Ptr<SketchDimension>> addedDimensions() const;

    /// Returns an array of the GeometricConstraint objects that were added to constrain the sketch.
    /// If no geometric constraints were added during the auto constrain operation, this property
    /// returns an empty array.
    std::vector<core::Ptr<GeometricConstraint>> addedConstraints() const;

    /// Indicates if the auto constrain operation successfully auto constrained the sketch. Returns true if
    /// the sketch is fully constrained after the operation, false otherwise. A value of false may indicate
    /// that additional constraints are needed or that the current sketch geometry cannot be fully constrained
    /// with the current settings.
    bool isFullyConstrained() const;

    ADSK_FUSION_AUTOCONSTRAINRESULT_API static const char* classType();
    ADSK_FUSION_AUTOCONSTRAINRESULT_API const char* objectType() const override;
    ADSK_FUSION_AUTOCONSTRAINRESULT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_AUTOCONSTRAINRESULT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchDimension** addedDimensions_raw(size_t& return_size) const = 0;
    virtual GeometricConstraint** addedConstraints_raw(size_t& return_size) const = 0;
    virtual bool isFullyConstrained_raw() const = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<SketchDimension>> AutoConstrainResult::addedDimensions() const
{
    std::vector<core::Ptr<SketchDimension>> res;
    size_t s;

    SketchDimension** p= addedDimensions_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<GeometricConstraint>> AutoConstrainResult::addedConstraints() const
{
    std::vector<core::Ptr<GeometricConstraint>> res;
    size_t s;

    GeometricConstraint** p= addedConstraints_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool AutoConstrainResult::isFullyConstrained() const
{
    bool res = isFullyConstrained_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_AUTOCONSTRAINRESULT_API