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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_BASEFEATURE_CPP__
# define ADSK_FUSION_BASEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_BASEFEATURE_API
# endif
#else
# define ADSK_FUSION_BASEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepBody;
    class ConstructionAxis;
    class ConstructionPlane;
    class ConstructionPoint;
    class MeshBody;
    class Occurrence;
    class Sketch;
}}

namespace adsk { namespace fusion {

/// The BaseFeature class represents a direct edit feature within a parametric design.
class BaseFeature : public Feature {
public:

    /// Returns an array of the construction planes associated with this base feature.
    std::vector<core::Ptr<ConstructionPlane>> constructionPlanes() const;

    /// Returns an array of the construction axes associated with this base feature.
    std::vector<core::Ptr<ConstructionAxis>> constructionAxes() const;

    /// Returns an array of the construction points associated with this base feature.
    std::vector<core::Ptr<ConstructionPoint>> constructionPoints() const;

    /// Returns an array of the sketches associated with this base feature.
    std::vector<core::Ptr<Sketch>> sketches() const;

    /// Returns an array of the mesh bodies associated with this base feature.
    std::vector<core::Ptr<MeshBody>> meshBodies() const;

    /// Set the user-interface so that the base body is in edit mode.
    /// Returns true if successful.
    bool startEdit();

    /// Exits from edit mode in the user-interface. If this base feature in not
    /// in edit mode, then nothing happens.
    /// Returns true if successful.
    bool finishEdit();

    /// Update an existing source BRepBody created by this BaseFeature.
    /// The input BRepBody definition will be copied into the existing BRepBody.
    /// sourceBody : The source BRepBody to update. The source bodies of a BaseFeature are only available
    /// from the bodies collection of the BaseFeature when the BaseFeature is in edit mode.
    /// newBody : The BRepBody whose definition will be used to replace the existing source body's definition.
    /// Returns true if the body was updated, or false if the update failed.
    bool updateBody(const core::Ptr<BRepBody>& sourceBody, const core::Ptr<BRepBody>& newBody);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<BaseFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this is not the NativeObject.
    core::Ptr<BaseFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the B-Rep bodies owned by the base feature.
    /// 
    /// When a body is added to a base feature, that body is owned by the base feature
    /// and is only seen in the UI when the base feature is active. This body is referred
    /// to as a "source body". Fusion creates a parametric copy of the body when you
    /// exit the base feature. This copy is referred to as the "result body," and it
    /// is used for subsequent modeling operations. The result bodies can be obtained by
    /// using the bodies property of the BaseFeature object.
    /// 
    /// You can map between the source and result bodies by using their position
    /// within the bodies returned. To get a valid list of result bodies, you should
    /// roll the timeline to immediately after the base feature node in the timeline.
    /// Otherwise, subsequent operations could have done something to cause one or
    /// more bodies to no longer be available.
    std::vector<core::Ptr<BRepBody>> sourceBodies() const;

    ADSK_FUSION_BASEFEATURE_API static const char* classType();
    ADSK_FUSION_BASEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_BASEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BASEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConstructionPlane** constructionPlanes_raw(size_t& return_size) const = 0;
    virtual ConstructionAxis** constructionAxes_raw(size_t& return_size) const = 0;
    virtual ConstructionPoint** constructionPoints_raw(size_t& return_size) const = 0;
    virtual Sketch** sketches_raw(size_t& return_size) const = 0;
    virtual MeshBody** meshBodies_raw(size_t& return_size) const = 0;
    virtual bool startEdit_raw() = 0;
    virtual bool finishEdit_raw() = 0;
    virtual bool updateBody_raw(BRepBody* sourceBody, BRepBody* newBody) = 0;
    virtual BaseFeature* nativeObject_raw() const = 0;
    virtual BaseFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual BRepBody** sourceBodies_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<ConstructionPlane>> BaseFeature::constructionPlanes() const
{
    std::vector<core::Ptr<ConstructionPlane>> res;
    size_t s;

    ConstructionPlane** p= constructionPlanes_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<ConstructionAxis>> BaseFeature::constructionAxes() const
{
    std::vector<core::Ptr<ConstructionAxis>> res;
    size_t s;

    ConstructionAxis** p= constructionAxes_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<ConstructionPoint>> BaseFeature::constructionPoints() const
{
    std::vector<core::Ptr<ConstructionPoint>> res;
    size_t s;

    ConstructionPoint** p= constructionPoints_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<Sketch>> BaseFeature::sketches() const
{
    std::vector<core::Ptr<Sketch>> res;
    size_t s;

    Sketch** p= sketches_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<MeshBody>> BaseFeature::meshBodies() const
{
    std::vector<core::Ptr<MeshBody>> res;
    size_t s;

    MeshBody** p= meshBodies_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool BaseFeature::startEdit()
{
    bool res = startEdit_raw();
    return res;
}

inline bool BaseFeature::finishEdit()
{
    bool res = finishEdit_raw();
    return res;
}

inline bool BaseFeature::updateBody(const core::Ptr<BRepBody>& sourceBody, const core::Ptr<BRepBody>& newBody)
{
    bool res = updateBody_raw(sourceBody.get(), newBody.get());
    return res;
}

inline core::Ptr<BaseFeature> BaseFeature::nativeObject() const
{
    core::Ptr<BaseFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<BaseFeature> BaseFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<BaseFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline std::vector<core::Ptr<BRepBody>> BaseFeature::sourceBodies() const
{
    std::vector<core::Ptr<BRepBody>> res;
    size_t s;

    BRepBody** p= sourceBodies_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BASEFEATURE_API