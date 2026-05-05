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
#include "Feature.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_DERIVEFEATURE_CPP__
# define ADSK_FUSION_DERIVEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_DERIVEFEATURE_API
# endif
#else
# define ADSK_FUSION_DERIVEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DocumentReference;
}}
namespace adsk { namespace fusion {
    class Design;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing derive feature in a design.
class DeriveFeature : public Feature {
public:

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<DeriveFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<DeriveFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// The source Design of this derive feature. You can use the API to access various elements within the
    /// design to add them to the list of elements to be derived.
    core::Ptr<Design> sourceDesign() const;

    /// The array of entities that are derived.
    std::vector<core::Ptr<core::Base>> sourceEntities() const;

    /// The array of entities that are excluded from the derived set.
    std::vector<core::Ptr<core::Base>> excludedEntities() const;

    /// Sets the array of entities that are derived.
    bool setSourceEntities(const std::vector<core::Ptr<core::Base>>& entities, const std::vector<core::Ptr<core::Base>>& excludedEntities);

    /// Gets or sets whether favorite parameters in source design are derived or not.
    bool isIncludeFavoriteParameters() const;
    bool isIncludeFavoriteParameters(bool value);

    /// Gets or sets whether all feature parameters from all derived components
    /// from the source design are derived or not.
    bool isIncludeComponentParameters() const;
    bool isIncludeComponentParameters(bool value);

    /// Gets or sets whether to place all derived objects at the origin in
    /// the destination design or not.
    bool isPlaceObjectsAtOrigin() const;
    bool isPlaceObjectsAtOrigin(bool value);

    /// Method that breaks the link between the source design and the destination design.
    /// The derived objects are converted to base features and added to the Timeline.
    /// Returns true if the break link was successful.
    bool breakLink();

    /// Returns the DocumentReference for this derived design.
    /// Through the DocumentReference object you can modify the version and get other information associated with the reference.
    core::Ptr<core::DocumentReference> documentReference() const;

    /// Method that returns the source entity for a derived entity.
    /// derivedEntity : Input an entity (e.g. a BRepBody, MeshBody, Sketch, SketchEntity, ConstructionPlane, Occurrence, Canvas etc.)
    /// that was derived by this DeriveFeature.
    /// Returns the source entity for the derived entity or null if it failed.
    core::Ptr<core::Base> getSourceEntity(const core::Ptr<core::Base>& derivedEntity) const;

    /// Method that returns the derived entity for a source entity.
    /// sourceEntity : Input an entity (e.g. a BRepBody, MeshBody, Sketch, SketchEntity, ConstructionPlane, Occurrence, Canvas etc.)
    /// from the sourceDesign that is derived by this DeriveFeature.
    /// Returns the derived entity for the source entity or null if it failed.
    core::Ptr<core::Base> getDerivedEntity(const core::Ptr<core::Base>& sourceEntity) const;

    ADSK_FUSION_DERIVEFEATURE_API static const char* classType();
    ADSK_FUSION_DERIVEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_DERIVEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DERIVEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DeriveFeature* nativeObject_raw() const = 0;
    virtual DeriveFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual Design* sourceDesign_raw() const = 0;
    virtual core::Base** sourceEntities_raw(size_t& return_size) const = 0;
    virtual core::Base** excludedEntities_raw(size_t& return_size) const = 0;
    virtual bool setSourceEntities_raw(core::Base** entities, size_t entities_size, core::Base** excludedEntities, size_t excludedEntities_size) = 0;
    virtual bool isIncludeFavoriteParameters_raw() const = 0;
    virtual bool isIncludeFavoriteParameters_raw(bool value) = 0;
    virtual bool isIncludeComponentParameters_raw() const = 0;
    virtual bool isIncludeComponentParameters_raw(bool value) = 0;
    virtual bool isPlaceObjectsAtOrigin_raw() const = 0;
    virtual bool isPlaceObjectsAtOrigin_raw(bool value) = 0;
    virtual bool breakLink_raw() = 0;
    virtual core::DocumentReference* documentReference_raw() const = 0;
    virtual core::Base* getSourceEntity_raw(core::Base* derivedEntity) const = 0;
    virtual core::Base* getDerivedEntity_raw(core::Base* sourceEntity) const = 0;
};

// Inline wrappers

inline core::Ptr<DeriveFeature> DeriveFeature::nativeObject() const
{
    core::Ptr<DeriveFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<DeriveFeature> DeriveFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<DeriveFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<Design> DeriveFeature::sourceDesign() const
{
    core::Ptr<Design> res = sourceDesign_raw();
    return res;
}

inline std::vector<core::Ptr<core::Base>> DeriveFeature::sourceEntities() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= sourceEntities_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<core::Base>> DeriveFeature::excludedEntities() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= excludedEntities_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool DeriveFeature::setSourceEntities(const std::vector<core::Ptr<core::Base>>& entities, const std::vector<core::Ptr<core::Base>>& excludedEntities)
{
    core::Base** entities_ = new core::Base*[entities.size()];
    for(size_t i=0; i<entities.size(); ++i)
        entities_[i] = entities[i].get();
    core::Base** excludedEntities_ = new core::Base*[excludedEntities.size()];
    for(size_t i=0; i<excludedEntities.size(); ++i)
        excludedEntities_[i] = excludedEntities[i].get();

    bool res = setSourceEntities_raw(entities_, entities.size(), excludedEntities_, excludedEntities.size());
    delete[] entities_;
    delete[] excludedEntities_;
    return res;
}

inline bool DeriveFeature::isIncludeFavoriteParameters() const
{
    bool res = isIncludeFavoriteParameters_raw();
    return res;
}

inline bool DeriveFeature::isIncludeFavoriteParameters(bool value)
{
    return isIncludeFavoriteParameters_raw(value);
}

inline bool DeriveFeature::isIncludeComponentParameters() const
{
    bool res = isIncludeComponentParameters_raw();
    return res;
}

inline bool DeriveFeature::isIncludeComponentParameters(bool value)
{
    return isIncludeComponentParameters_raw(value);
}

inline bool DeriveFeature::isPlaceObjectsAtOrigin() const
{
    bool res = isPlaceObjectsAtOrigin_raw();
    return res;
}

inline bool DeriveFeature::isPlaceObjectsAtOrigin(bool value)
{
    return isPlaceObjectsAtOrigin_raw(value);
}

inline bool DeriveFeature::breakLink()
{
    bool res = breakLink_raw();
    return res;
}

inline core::Ptr<core::DocumentReference> DeriveFeature::documentReference() const
{
    core::Ptr<core::DocumentReference> res = documentReference_raw();
    return res;
}

inline core::Ptr<core::Base> DeriveFeature::getSourceEntity(const core::Ptr<core::Base>& derivedEntity) const
{
    core::Ptr<core::Base> res = getSourceEntity_raw(derivedEntity.get());
    return res;
}

inline core::Ptr<core::Base> DeriveFeature::getDerivedEntity(const core::Ptr<core::Base>& sourceEntity) const
{
    core::Ptr<core::Base> res = getDerivedEntity_raw(sourceEntity.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DERIVEFEATURE_API