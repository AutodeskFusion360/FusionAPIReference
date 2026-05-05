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
# ifdef __COMPILING_ADSK_FUSION_PMIANNOTATION_CPP__
# define ADSK_FUSION_PMIANNOTATION_API XI_EXPORT
# else
# define ADSK_FUSION_PMIANNOTATION_API
# endif
#else
# define ADSK_FUSION_PMIANNOTATION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Component;
    class Occurrence;
    class TimelineObject;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A Base class representing a PMI (Product Manufacturing Information) annotation in a component.
/// 
/// This can either be PMI that was imported alongside the model, or Fusion specific PMI.
class PMIAnnotation : public core::Base {
public:

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// Gets and sets the name of the PMI as it is shown in the browser.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets the type of this PMI annotation.
    PMITypes type() const;

    /// Deletes the PMI.
    /// Returns a true if the delete was successful, false otherwise.
    bool deleteMe();

    /// Indicates if this PMI can be deleted.
    bool isDeletable() const;

    /// Indicates if the light bulb (as displayed in the browser) is on.
    /// 
    /// A PMI will only be visible if its light bulb, the containing folder's light bulb,
    /// the collection's and the component's light bulbs are all on.
    bool isLightBulbOn() const;
    bool isLightBulbOn(bool value);

    /// Indicates if the PMI is visible.
    /// This property is affected by the AssemblyContext (parent component) of the PMI.
    bool isVisible() const;

    /// Gets the component this PMI belongs to.
    core::Ptr<Component> parentComponent() const;

    /// Indicates if this PMI is parametric or not.
    bool isParametric() const;

    /// Gets the timeline object associated with this PMI.
    /// Only applies to PMI that has an associated timeline feature.
    /// 
    /// Returns null if the PMI does not have an associated timeline feature.
    core::Ptr<TimelineObject> timelineObject() const;

    /// Gets the health state of the PMI. Only applies to PMI that have a timeline object, in Parametric Modelling.
    /// 
    /// Returns UnknownFeatureHealthState for other PMI types that don't have a parametric Feature.
    FeatureHealthStates healthState() const;

    /// If there are errors or warnings in the PMI, this property will
    /// return a string that contains the error or warning message.
    /// Otherwise it returns an empty string. Only applies to PMI that has
    /// an associated parametric Feature.
    /// 
    /// Returns empty string for other PMI types that don't have a parametric Feature.
    std::string errorOrWarningMessage() const;

    /// Indicates if this PMI is suppressed. Only applies to PMI that has
    /// an associated parametric Feature.
    /// 
    /// Returns false for other PMI types that don't have a parametric Feature.
    bool isSuppressed() const;
    bool isSuppressed(bool value);

    /// Indicates if this PMI is outdated and needs to be recomputed.
    /// This typically happens when the geometry or parameters that the PMI
    /// references have been modified. Applicable for both imported and created PMI,
    /// regardless of whether they are parametric or not.
    bool isOutOfDate() const;

    /// Marks the PMI as up-to-date and dismisses warnings.
    /// Returns false if the warnings cannot be dismissed without changes and the PMI remains out of date.
    bool markUpToDate();

    /// Converts this PMIAnnotation to a Fusion PMIAnnotation if it is of supported type and has valid reference geometry.
    /// 
    /// Supported types are:
    /// 
    /// Imported PMI annotation (PMIImportedDimension) and valid reference geometry is converted to Hole/Thread Note PMI.
    /// 
    /// Imported PMI annotation (PMIImportedNote) and valid reference geometry is converted to Leader Line Note PMI.
    /// 
    /// Imported PMI folder (PMIImportedFolder) which includes information about a Hole Note is converted to Hole/Thread Note PMI.
    /// 
    /// The converted PMIAnnotation can then be edited.
    /// 
    /// After successful conversion, the new PMIAnnotation will be added to the collection of PMI in the component, and the original
    /// PMIAnnotation will be removed.
    /// If it fails to convert, the original PMIAnnotation remains unchanged.
    /// Returns the converted Fusion PMIAnnotation or null in the case of failure to convert.
    /// 
    /// The type of the object returned is the base class PMIAnnotation.
    core::Ptr<PMIAnnotation> convertImportedToFusionPMI();

    /// Returns an array of referenced entities for this PMI.
    std::vector<core::Ptr<core::Base>> referencedEntities() const;

    ADSK_FUSION_PMIANNOTATION_API static const char* classType();
    ADSK_FUSION_PMIANNOTATION_API const char* objectType() const override;
    ADSK_FUSION_PMIANNOTATION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIANNOTATION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual PMITypes type_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual bool isDeletable_raw() const = 0;
    virtual bool isLightBulbOn_raw() const = 0;
    virtual bool isLightBulbOn_raw(bool value) = 0;
    virtual bool isVisible_raw() const = 0;
    virtual Component* parentComponent_raw() const = 0;
    virtual bool isParametric_raw() const = 0;
    virtual TimelineObject* timelineObject_raw() const = 0;
    virtual FeatureHealthStates healthState_raw() const = 0;
    virtual char* errorOrWarningMessage_raw() const = 0;
    virtual bool isSuppressed_raw() const = 0;
    virtual bool isSuppressed_raw(bool value) = 0;
    virtual bool isOutOfDate_raw() const = 0;
    virtual bool markUpToDate_raw() = 0;
    virtual PMIAnnotation* convertImportedToFusionPMI_raw() = 0;
    virtual core::Base** referencedEntities_raw(size_t& return_size) const = 0;
    virtual void placeholderPMIAnnotation0() {}
    virtual void placeholderPMIAnnotation1() {}
    virtual void placeholderPMIAnnotation2() {}
    virtual void placeholderPMIAnnotation3() {}
    virtual void placeholderPMIAnnotation4() {}
    virtual void placeholderPMIAnnotation5() {}
    virtual void placeholderPMIAnnotation6() {}
    virtual void placeholderPMIAnnotation7() {}
    virtual void placeholderPMIAnnotation8() {}
    virtual void placeholderPMIAnnotation9() {}
    virtual void placeholderPMIAnnotation10() {}
    virtual void placeholderPMIAnnotation11() {}
    virtual void placeholderPMIAnnotation12() {}
    virtual void placeholderPMIAnnotation13() {}
    virtual void placeholderPMIAnnotation14() {}
    virtual void placeholderPMIAnnotation15() {}
    virtual void placeholderPMIAnnotation16() {}
    virtual void placeholderPMIAnnotation17() {}
    virtual void placeholderPMIAnnotation18() {}
    virtual void placeholderPMIAnnotation19() {}
    virtual void placeholderPMIAnnotation20() {}
    virtual void placeholderPMIAnnotation21() {}
    virtual void placeholderPMIAnnotation22() {}
    virtual void placeholderPMIAnnotation23() {}
    virtual void placeholderPMIAnnotation24() {}
    virtual void placeholderPMIAnnotation25() {}
    virtual void placeholderPMIAnnotation26() {}
    virtual void placeholderPMIAnnotation27() {}
    virtual void placeholderPMIAnnotation28() {}
    virtual void placeholderPMIAnnotation29() {}
    virtual void placeholderPMIAnnotation30() {}
    virtual void placeholderPMIAnnotation31() {}
    virtual void placeholderPMIAnnotation32() {}
    virtual void placeholderPMIAnnotation33() {}
    virtual void placeholderPMIAnnotation34() {}
    virtual void placeholderPMIAnnotation35() {}
    virtual void placeholderPMIAnnotation36() {}
    virtual void placeholderPMIAnnotation37() {}
    virtual void placeholderPMIAnnotation38() {}
    virtual void placeholderPMIAnnotation39() {}
    virtual void placeholderPMIAnnotation40() {}
    virtual void placeholderPMIAnnotation41() {}
    virtual void placeholderPMIAnnotation42() {}
    virtual void placeholderPMIAnnotation43() {}
    virtual void placeholderPMIAnnotation44() {}
    virtual void placeholderPMIAnnotation45() {}
    virtual void placeholderPMIAnnotation46() {}
    virtual void placeholderPMIAnnotation47() {}
    virtual void placeholderPMIAnnotation48() {}
    virtual void placeholderPMIAnnotation49() {}
    virtual void placeholderPMIAnnotation50() {}
    virtual void placeholderPMIAnnotation51() {}
    virtual void placeholderPMIAnnotation52() {}
    virtual void placeholderPMIAnnotation53() {}
    virtual void placeholderPMIAnnotation54() {}
    virtual void placeholderPMIAnnotation55() {}
    virtual void placeholderPMIAnnotation56() {}
    virtual void placeholderPMIAnnotation57() {}
    virtual void placeholderPMIAnnotation58() {}
    virtual void placeholderPMIAnnotation59() {}
    virtual void placeholderPMIAnnotation60() {}
    virtual void placeholderPMIAnnotation61() {}
    virtual void placeholderPMIAnnotation62() {}
    virtual void placeholderPMIAnnotation63() {}
    virtual void placeholderPMIAnnotation64() {}
    virtual void placeholderPMIAnnotation65() {}
    virtual void placeholderPMIAnnotation66() {}
    virtual void placeholderPMIAnnotation67() {}
    virtual void placeholderPMIAnnotation68() {}
    virtual void placeholderPMIAnnotation69() {}
    virtual void placeholderPMIAnnotation70() {}
    virtual void placeholderPMIAnnotation71() {}
    virtual void placeholderPMIAnnotation72() {}
    virtual void placeholderPMIAnnotation73() {}
    virtual void placeholderPMIAnnotation74() {}
    virtual void placeholderPMIAnnotation75() {}
    virtual void placeholderPMIAnnotation76() {}
    virtual void placeholderPMIAnnotation77() {}
    virtual void placeholderPMIAnnotation78() {}
    virtual void placeholderPMIAnnotation79() {}
    virtual void placeholderPMIAnnotation80() {}
    virtual void placeholderPMIAnnotation81() {}
    virtual void placeholderPMIAnnotation82() {}
    virtual void placeholderPMIAnnotation83() {}
    virtual void placeholderPMIAnnotation84() {}
    virtual void placeholderPMIAnnotation85() {}
    virtual void placeholderPMIAnnotation86() {}
    virtual void placeholderPMIAnnotation87() {}
    virtual void placeholderPMIAnnotation88() {}
    virtual void placeholderPMIAnnotation89() {}
    virtual void placeholderPMIAnnotation90() {}
    virtual void placeholderPMIAnnotation91() {}
    virtual void placeholderPMIAnnotation92() {}
    virtual void placeholderPMIAnnotation93() {}
    virtual void placeholderPMIAnnotation94() {}
    virtual void placeholderPMIAnnotation95() {}
    virtual void placeholderPMIAnnotation96() {}
    virtual void placeholderPMIAnnotation97() {}
    virtual void placeholderPMIAnnotation98() {}
    virtual void placeholderPMIAnnotation99() {}
    virtual void placeholderPMIAnnotation100() {}
    virtual void placeholderPMIAnnotation101() {}
    virtual void placeholderPMIAnnotation102() {}
    virtual void placeholderPMIAnnotation103() {}
    virtual void placeholderPMIAnnotation104() {}
    virtual void placeholderPMIAnnotation105() {}
    virtual void placeholderPMIAnnotation106() {}
    virtual void placeholderPMIAnnotation107() {}
};

// Inline wrappers

inline core::Ptr<Occurrence> PMIAnnotation::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline std::string PMIAnnotation::name() const
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

inline bool PMIAnnotation::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline PMITypes PMIAnnotation::type() const
{
    PMITypes res = type_raw();
    return res;
}

inline bool PMIAnnotation::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool PMIAnnotation::isDeletable() const
{
    bool res = isDeletable_raw();
    return res;
}

inline bool PMIAnnotation::isLightBulbOn() const
{
    bool res = isLightBulbOn_raw();
    return res;
}

inline bool PMIAnnotation::isLightBulbOn(bool value)
{
    return isLightBulbOn_raw(value);
}

inline bool PMIAnnotation::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline core::Ptr<Component> PMIAnnotation::parentComponent() const
{
    core::Ptr<Component> res = parentComponent_raw();
    return res;
}

inline bool PMIAnnotation::isParametric() const
{
    bool res = isParametric_raw();
    return res;
}

inline core::Ptr<TimelineObject> PMIAnnotation::timelineObject() const
{
    core::Ptr<TimelineObject> res = timelineObject_raw();
    return res;
}

inline FeatureHealthStates PMIAnnotation::healthState() const
{
    FeatureHealthStates res = healthState_raw();
    return res;
}

inline std::string PMIAnnotation::errorOrWarningMessage() const
{
    std::string res;

    char* p= errorOrWarningMessage_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PMIAnnotation::isSuppressed() const
{
    bool res = isSuppressed_raw();
    return res;
}

inline bool PMIAnnotation::isSuppressed(bool value)
{
    return isSuppressed_raw(value);
}

inline bool PMIAnnotation::isOutOfDate() const
{
    bool res = isOutOfDate_raw();
    return res;
}

inline bool PMIAnnotation::markUpToDate()
{
    bool res = markUpToDate_raw();
    return res;
}

inline core::Ptr<PMIAnnotation> PMIAnnotation::convertImportedToFusionPMI()
{
    core::Ptr<PMIAnnotation> res = convertImportedToFusionPMI_raw();
    return res;
}

inline std::vector<core::Ptr<core::Base>> PMIAnnotation::referencedEntities() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= referencedEntities_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIANNOTATION_API