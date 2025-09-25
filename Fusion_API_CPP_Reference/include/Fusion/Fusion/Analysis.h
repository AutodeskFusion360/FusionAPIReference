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
# ifdef __COMPILING_ADSK_FUSION_ANALYSIS_CPP__
# define ADSK_FUSION_ANALYSIS_API XI_EXPORT
# else
# define ADSK_FUSION_ANALYSIS_API
# endif
#else
# define ADSK_FUSION_ANALYSIS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
}}

namespace adsk { namespace fusion {

/// The base class Analysis object that represents all the types of analysis results.
class Analysis : public core::Base {
public:

    /// A property that gets and sets the name of the analysis. If you use a name that is not unique,
    /// Fusion will automatically append a number to the name to make it unique.
    std::string name() const;
    bool name(const std::string& value);

    /// A property that gets and sets if the display is enabled for this Analysis object. If false,
    /// this analysis will be hidden. If true and the IsLightBulbOn property of the
    /// Analyses object is True the Analysis will be visible.
    bool isLightBulbOn() const;
    bool isLightBulbOn(bool value);

    /// Gets if this Analysis is currently visible in the graphics window. The visibility is
    /// controlled by a combination of the isLightBulbOn properties of the Analyses collection
    /// object and the Analysis object. If both are true, the Analysis will be visible.
    bool isVisible() const;

    /// A method that deletes this Analysis.
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// A property that returns the collection of attributes associated with this Analysis.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns a token for the Analysis object. The token can be saved and used later with
    /// the Design.findEntityByToken method to get back the same Analysis.
    /// 
    /// When using entity tokens, it's crucial to understand that the token string returned
    /// for a specific entity can be different over time. For example, you can have two different
    /// token strings obtained from the same entity at different times, and when you use
    /// findEntityByToken they will both return the same entity. Because of that, you should
    /// never compare entity tokens as a way to determine what the token represents. Instead,
    /// you need to use the findEntityByToken method to get the two entities identified by the
    /// tokens and then compare them.
    std::string entityToken() const;

    ADSK_FUSION_ANALYSIS_API static const char* classType();
    ADSK_FUSION_ANALYSIS_API const char* objectType() const override;
    ADSK_FUSION_ANALYSIS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ANALYSIS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual bool isLightBulbOn_raw() const = 0;
    virtual bool isLightBulbOn_raw(bool value) = 0;
    virtual bool isVisible_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
    virtual void placeholderAnalysis0() {}
    virtual void placeholderAnalysis1() {}
    virtual void placeholderAnalysis2() {}
    virtual void placeholderAnalysis3() {}
    virtual void placeholderAnalysis4() {}
    virtual void placeholderAnalysis5() {}
    virtual void placeholderAnalysis6() {}
    virtual void placeholderAnalysis7() {}
    virtual void placeholderAnalysis8() {}
    virtual void placeholderAnalysis9() {}
    virtual void placeholderAnalysis10() {}
    virtual void placeholderAnalysis11() {}
    virtual void placeholderAnalysis12() {}
    virtual void placeholderAnalysis13() {}
    virtual void placeholderAnalysis14() {}
    virtual void placeholderAnalysis15() {}
    virtual void placeholderAnalysis16() {}
    virtual void placeholderAnalysis17() {}
    virtual void placeholderAnalysis18() {}
    virtual void placeholderAnalysis19() {}
    virtual void placeholderAnalysis20() {}
    virtual void placeholderAnalysis21() {}
    virtual void placeholderAnalysis22() {}
    virtual void placeholderAnalysis23() {}
};

// Inline wrappers

inline std::string Analysis::name() const
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

inline bool Analysis::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline bool Analysis::isLightBulbOn() const
{
    bool res = isLightBulbOn_raw();
    return res;
}

inline bool Analysis::isLightBulbOn(bool value)
{
    return isLightBulbOn_raw(value);
}

inline bool Analysis::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline bool Analysis::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<core::Attributes> Analysis::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline std::string Analysis::entityToken() const
{
    std::string res;

    char* p= entityToken_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ANALYSIS_API