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
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_COMBINEFEATURE_CPP__
# define ADSK_FUSION_COMBINEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_COMBINEFEATURE_API
# endif
#else
# define ADSK_FUSION_COMBINEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class BRepBody;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing Combine feature in a design.
/// In non-parametric environment this object does not exist.
class CombineFeature : public Feature {
public:

    /// Gets and sets the BRep Body object that represents the blank body.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<BRepBody> targetBody() const;
    bool targetBody(const core::Ptr<BRepBody>& value);

    /// Gets and sets the BRep Body objects that represent the tool bodies.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> toolBodies() const;
    bool toolBodies(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the type of operation performed by the combine.
    /// The valid values are JoinFeatureOperation, CutFeatureOperation and IntersectFeatureOperation.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// Gets a boolean value for whether or not a new component was created when this feature was created.
    bool isNewComponent() const;

    /// Gets and sets a boolean value for whether or not the tool bodies are retrained after the combine results.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isKeepToolBodies() const;
    bool isKeepToolBodies(bool value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<CombineFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<CombineFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_COMBINEFEATURE_API static const char* classType();
    ADSK_FUSION_COMBINEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_COMBINEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_COMBINEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepBody* targetBody_raw() const = 0;
    virtual bool targetBody_raw(BRepBody* value) = 0;
    virtual core::ObjectCollection* toolBodies_raw() const = 0;
    virtual bool toolBodies_raw(core::ObjectCollection* value) = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual bool isNewComponent_raw() const = 0;
    virtual bool isKeepToolBodies_raw() const = 0;
    virtual bool isKeepToolBodies_raw(bool value) = 0;
    virtual CombineFeature* nativeObject_raw() const = 0;
    virtual CombineFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<BRepBody> CombineFeature::targetBody() const
{
    core::Ptr<BRepBody> res = targetBody_raw();
    return res;
}

inline bool CombineFeature::targetBody(const core::Ptr<BRepBody>& value)
{
    return targetBody_raw(value.get());
}

inline core::Ptr<core::ObjectCollection> CombineFeature::toolBodies() const
{
    core::Ptr<core::ObjectCollection> res = toolBodies_raw();
    return res;
}

inline bool CombineFeature::toolBodies(const core::Ptr<core::ObjectCollection>& value)
{
    return toolBodies_raw(value.get());
}

inline FeatureOperations CombineFeature::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool CombineFeature::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline bool CombineFeature::isNewComponent() const
{
    bool res = isNewComponent_raw();
    return res;
}

inline bool CombineFeature::isKeepToolBodies() const
{
    bool res = isKeepToolBodies_raw();
    return res;
}

inline bool CombineFeature::isKeepToolBodies(bool value)
{
    return isKeepToolBodies_raw(value);
}

inline core::Ptr<CombineFeature> CombineFeature::nativeObject() const
{
    core::Ptr<CombineFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<CombineFeature> CombineFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<CombineFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_COMBINEFEATURE_API