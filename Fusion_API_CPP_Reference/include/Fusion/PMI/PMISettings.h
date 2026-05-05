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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMISETTINGS_CPP__
# define ADSK_FUSION_PMISETTINGS_API XI_EXPORT
# else
# define ADSK_FUSION_PMISETTINGS_API
# endif
#else
# define ADSK_FUSION_PMISETTINGS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Design;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Provides access to the PMISettings of a document.
class PMISettings : public core::Base {
public:

    /// Gets the parent design.
    core::Ptr<Design> parentDesign() const;

    /// Gets and sets the PMI standard type used by the document.
    PMIStandardTypes pmiStandardType() const;
    bool pmiStandardType(PMIStandardTypes value);

    /// Gets and sets the size of PMI graphics in the document in cm.
    double annotationSize() const;
    bool annotationSize(double value);

    /// Gets and sets the default tolerance value used for PMI creation in cm.
    double defaultTolerance() const;
    bool defaultTolerance(double value);

    ADSK_FUSION_PMISETTINGS_API static const char* classType();
    ADSK_FUSION_PMISETTINGS_API const char* objectType() const override;
    ADSK_FUSION_PMISETTINGS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMISETTINGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Design* parentDesign_raw() const = 0;
    virtual PMIStandardTypes pmiStandardType_raw() const = 0;
    virtual bool pmiStandardType_raw(PMIStandardTypes value) = 0;
    virtual double annotationSize_raw() const = 0;
    virtual bool annotationSize_raw(double value) = 0;
    virtual double defaultTolerance_raw() const = 0;
    virtual bool defaultTolerance_raw(double value) = 0;
};

// Inline wrappers

inline core::Ptr<Design> PMISettings::parentDesign() const
{
    core::Ptr<Design> res = parentDesign_raw();
    return res;
}

inline PMIStandardTypes PMISettings::pmiStandardType() const
{
    PMIStandardTypes res = pmiStandardType_raw();
    return res;
}

inline bool PMISettings::pmiStandardType(PMIStandardTypes value)
{
    return pmiStandardType_raw(value);
}

inline double PMISettings::annotationSize() const
{
    double res = annotationSize_raw();
    return res;
}

inline bool PMISettings::annotationSize(double value)
{
    return annotationSize_raw(value);
}

inline double PMISettings::defaultTolerance() const
{
    double res = defaultTolerance_raw();
    return res;
}

inline bool PMISettings::defaultTolerance(double value)
{
    return defaultTolerance_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMISETTINGS_API