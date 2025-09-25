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
#include "Feature.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SPLITBODYFEATURE_CPP__
# define ADSK_FUSION_SPLITBODYFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_SPLITBODYFEATURE_API
# endif
#else
# define ADSK_FUSION_SPLITBODYFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing split body feature in a design.
class SplitBodyFeature : public Feature {
public:

    /// Gets and sets the input solid or open bodies that are split.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> splitBodies() const;
    bool splitBodies(const core::Ptr<core::ObjectCollection>& value);

    /// Sets the splitting tool used for the feature.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// splittingTool : Input entity that defines the splitting tool. The splitting tool is a single entity that can be either a solid body,
    /// open body, construction plane, face, or sketch curve that partially or fully intersects the body to split.
    /// isSplittingToolExtended : A boolean value for setting whether or not the splittingTool is to be automatically extended (if possible) so as to
    /// completely intersect the facesToSplit.
    /// Returns true if successful.
    bool setSplittingTool(const core::Ptr<core::Base>& splittingTool, bool isSplittingToolExtended);

    /// Gets the entity that defines the splitting tool. The splitting tool is a single entity that can be either a
    /// solid body, open body, plane, sketch curve or face that partially or fully intersects the bodyToSplit.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> splittingTool() const;

    /// Gets whether or not the splitting tool is to be automatically extended (if possible) so as to
    /// completely intersect the bodyToSplit.
    bool isSplittingToolExtended() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<SplitBodyFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this is not the NativeObject.
    core::Ptr<SplitBodyFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_SPLITBODYFEATURE_API static const char* classType();
    ADSK_FUSION_SPLITBODYFEATURE_API const char* objectType() const override;
    ADSK_FUSION_SPLITBODYFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SPLITBODYFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* splitBodies_raw() const = 0;
    virtual bool splitBodies_raw(core::ObjectCollection* value) = 0;
    virtual bool setSplittingTool_raw(core::Base* splittingTool, bool isSplittingToolExtended) = 0;
    virtual core::Base* splittingTool_raw() const = 0;
    virtual bool isSplittingToolExtended_raw() const = 0;
    virtual SplitBodyFeature* nativeObject_raw() const = 0;
    virtual SplitBodyFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> SplitBodyFeature::splitBodies() const
{
    core::Ptr<core::ObjectCollection> res = splitBodies_raw();
    return res;
}

inline bool SplitBodyFeature::splitBodies(const core::Ptr<core::ObjectCollection>& value)
{
    return splitBodies_raw(value.get());
}

inline bool SplitBodyFeature::setSplittingTool(const core::Ptr<core::Base>& splittingTool, bool isSplittingToolExtended)
{
    bool res = setSplittingTool_raw(splittingTool.get(), isSplittingToolExtended);
    return res;
}

inline core::Ptr<core::Base> SplitBodyFeature::splittingTool() const
{
    core::Ptr<core::Base> res = splittingTool_raw();
    return res;
}

inline bool SplitBodyFeature::isSplittingToolExtended() const
{
    bool res = isSplittingToolExtended_raw();
    return res;
}

inline core::Ptr<SplitBodyFeature> SplitBodyFeature::nativeObject() const
{
    core::Ptr<SplitBodyFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<SplitBodyFeature> SplitBodyFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<SplitBodyFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SPLITBODYFEATURE_API