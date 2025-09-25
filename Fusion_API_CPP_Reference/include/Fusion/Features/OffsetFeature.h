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
# ifdef __COMPILING_ADSK_FUSION_OFFSETFEATURE_CPP__
# define ADSK_FUSION_OFFSETFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_OFFSETFEATURE_API
# endif
#else
# define ADSK_FUSION_OFFSETFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing offset feature in a design.
class OffsetFeature : public Feature {
public:

    /// Sets the faces and sheet bodies to offset.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// entities : An ObjectCollection containing the BRepFace objects to offset. Additional faces may be
    /// automatically used depending on the value of the isChainSelection argument.
    /// Input faces need not be from the same body.
    /// isChainSelection : A boolean value for setting whether or not faces that are tangentially connected to
    /// the input faces (if any) will also be offset. The default value is true.
    /// Returns true if successful
    bool setInputEntities(const core::Ptr<core::ObjectCollection>& entities, bool isChainSelection = true);

    /// Gets and sets the faces to be offset.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> entities() const;
    bool entities(const core::Ptr<core::ObjectCollection>& value);

    /// Get if the faces that are tangentially connected to the input faces (if any) are also offset.
    bool isChainSelection() const;

    /// Returns the parameter controlling the offset distance. You can edit the distance
    /// by editing the value of the parameter object. A positive value specifies that the offset
    /// is in the same direction as the normal direction of the face.
    core::Ptr<ModelParameter> distance() const;

    /// Gets the feature operation that was performed when the feature was created,
    /// (either 'NewBodyFeatureOperation' or 'NewComponentFeatureOperation'.
    FeatureOperations operation() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<OffsetFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this is not the NativeObject.
    core::Ptr<OffsetFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_OFFSETFEATURE_API static const char* classType();
    ADSK_FUSION_OFFSETFEATURE_API const char* objectType() const override;
    ADSK_FUSION_OFFSETFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_OFFSETFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setInputEntities_raw(core::ObjectCollection* entities, bool isChainSelection) = 0;
    virtual core::ObjectCollection* entities_raw() const = 0;
    virtual bool entities_raw(core::ObjectCollection* value) = 0;
    virtual bool isChainSelection_raw() const = 0;
    virtual ModelParameter* distance_raw() const = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual OffsetFeature* nativeObject_raw() const = 0;
    virtual OffsetFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline bool OffsetFeature::setInputEntities(const core::Ptr<core::ObjectCollection>& entities, bool isChainSelection)
{
    bool res = setInputEntities_raw(entities.get(), isChainSelection);
    return res;
}

inline core::Ptr<core::ObjectCollection> OffsetFeature::entities() const
{
    core::Ptr<core::ObjectCollection> res = entities_raw();
    return res;
}

inline bool OffsetFeature::entities(const core::Ptr<core::ObjectCollection>& value)
{
    return entities_raw(value.get());
}

inline bool OffsetFeature::isChainSelection() const
{
    bool res = isChainSelection_raw();
    return res;
}

inline core::Ptr<ModelParameter> OffsetFeature::distance() const
{
    core::Ptr<ModelParameter> res = distance_raw();
    return res;
}

inline FeatureOperations OffsetFeature::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline core::Ptr<OffsetFeature> OffsetFeature::nativeObject() const
{
    core::Ptr<OffsetFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<OffsetFeature> OffsetFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<OffsetFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_OFFSETFEATURE_API