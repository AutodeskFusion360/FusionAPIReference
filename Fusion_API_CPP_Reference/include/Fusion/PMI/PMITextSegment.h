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
#include "PMISegment.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMITEXTSEGMENT_CPP__
# define ADSK_FUSION_PMITEXTSEGMENT_API XI_EXPORT
# else
# define ADSK_FUSION_PMITEXTSEGMENT_API
# endif
#else
# define ADSK_FUSION_PMITEXTSEGMENT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents a segment of text used to define the text of a PMI.
/// The text can include any number of characters.
class PMITextSegment : public PMISegment {
public:

    /// Create a transient PMITextSegment object.
    /// text : A string defining the text of the segment.
    /// The newly created PMITextSegment.
    static core::Ptr<PMITextSegment> create(const std::string& text);

    /// Gets and sets the text of this segment.
    std::string text() const;
    bool text(const std::string& value);

    ADSK_FUSION_PMITEXTSEGMENT_API static const char* classType();
    ADSK_FUSION_PMITEXTSEGMENT_API const char* objectType() const override;
    ADSK_FUSION_PMITEXTSEGMENT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMITEXTSEGMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_PMITEXTSEGMENT_API static PMITextSegment* create_raw(const char* text);
    virtual char* text_raw() const = 0;
    virtual bool text_raw(const char* value) = 0;
};

// Inline wrappers

inline core::Ptr<PMITextSegment> PMITextSegment::create(const std::string& text)
{
    core::Ptr<PMITextSegment> res = create_raw(text.c_str());
    return res;
}

inline std::string PMITextSegment::text() const
{
    std::string res;

    char* p= text_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PMITextSegment::text(const std::string& value)
{
    return text_raw(value.c_str());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMITEXTSEGMENT_API