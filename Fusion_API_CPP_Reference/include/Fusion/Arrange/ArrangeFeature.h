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
#include "../Features/Feature.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGEFEATURE_CPP__
# define ADSK_FUSION_ARRANGEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGEFEATURE_API
# endif
#else
# define ADSK_FUSION_ARRANGEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ArrangeComponent;
    class ArrangeComponents;
    class ArrangeDefinition;
    class ArrangeEnvelopeDefinition;
    class ArrangeResultEnvelopes;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents an Arrange feature within a component.
class ArrangeFeature : public Feature {
public:

    /// Returns a definition object that provides access to the information defining this arrange
    /// feature and provides access to the resulting arrangement of occurrences.
    /// 
    /// To use this property, you need to position the timeline marker immediately before the Arrange feature.
    /// This can be accomplished using the following code: arrangeFeature.timelineObject.rollTo(True)
    core::Ptr<ArrangeDefinition> definition() const;

    /// Returns the collection of ArrangeComponent objects that are being arranged.
    /// 
    /// To use this property, you need to position the timeline marker immediately before the Arrange feature.
    /// This can be accomplished using the following code: arrangeFeature.timelineObject.rollTo(True)
    core::Ptr<ArrangeComponents> arrangeComponents() const;

    /// Returns the envelope definition associated with this arrangement.
    /// 
    /// To use this property, you need to position the timeline marker immediately before the Arrange feature.
    /// This can be accomplished using the following code: arrangeFeature.timelineObject.rollTo(True)
    core::Ptr<ArrangeEnvelopeDefinition> envelopeDefinition() const;

    /// Returns the resulting envelopes and their contents.
    core::Ptr<ArrangeResultEnvelopes> resultEnvelopes() const;

    /// Returns an array of ArrangeComponent objects that did not fit in the arrangement. This is
    /// most useful in the case where partial arrange has been enabled, which means some
    /// components may have been arranged and others were left out.
    /// 
    /// To use this property, you need to position the timeline marker immediately before the Arrange feature.
    /// This can be accomplished using the following code: arrangeFeature.timelineObject.rollTo(True)
    std::vector<core::Ptr<ArrangeComponent>> unusedComponents() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<ArrangeFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<ArrangeFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns statistics about the arrangement in JSON format as a string. Each item in the JSON is identified with its English name,
    /// and the current localized name is also provided. The values follow the API rules, where all length values are in centimeters,
    /// and areas are in square centimeters. The returned JSON may include additional values in the future, so code consuming this
    /// output should be tolerant of new fields.
    /// A JSON string containing the arrangement statistics, or an empty string if the operation fails.
    std::string arrangeStatistics() const;

    ADSK_FUSION_ARRANGEFEATURE_API static const char* classType();
    ADSK_FUSION_ARRANGEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_ARRANGEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ArrangeDefinition* definition_raw() const = 0;
    virtual ArrangeComponents* arrangeComponents_raw() const = 0;
    virtual ArrangeEnvelopeDefinition* envelopeDefinition_raw() const = 0;
    virtual ArrangeResultEnvelopes* resultEnvelopes_raw() const = 0;
    virtual ArrangeComponent** unusedComponents_raw(size_t& return_size) const = 0;
    virtual ArrangeFeature* nativeObject_raw() const = 0;
    virtual ArrangeFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual char* arrangeStatistics_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ArrangeDefinition> ArrangeFeature::definition() const
{
    core::Ptr<ArrangeDefinition> res = definition_raw();
    return res;
}

inline core::Ptr<ArrangeComponents> ArrangeFeature::arrangeComponents() const
{
    core::Ptr<ArrangeComponents> res = arrangeComponents_raw();
    return res;
}

inline core::Ptr<ArrangeEnvelopeDefinition> ArrangeFeature::envelopeDefinition() const
{
    core::Ptr<ArrangeEnvelopeDefinition> res = envelopeDefinition_raw();
    return res;
}

inline core::Ptr<ArrangeResultEnvelopes> ArrangeFeature::resultEnvelopes() const
{
    core::Ptr<ArrangeResultEnvelopes> res = resultEnvelopes_raw();
    return res;
}

inline std::vector<core::Ptr<ArrangeComponent>> ArrangeFeature::unusedComponents() const
{
    std::vector<core::Ptr<ArrangeComponent>> res;
    size_t s;

    ArrangeComponent** p= unusedComponents_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<ArrangeFeature> ArrangeFeature::nativeObject() const
{
    core::Ptr<ArrangeFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<ArrangeFeature> ArrangeFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<ArrangeFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline std::string ArrangeFeature::arrangeStatistics() const
{
    std::string res;

    char* p= arrangeStatistics_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGEFEATURE_API