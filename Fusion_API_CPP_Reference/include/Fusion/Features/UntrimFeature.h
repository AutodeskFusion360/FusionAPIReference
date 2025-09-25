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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_UNTRIMFEATURE_CPP__
# define ADSK_FUSION_UNTRIMFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_UNTRIMFEATURE_API
# endif
#else
# define ADSK_FUSION_UNTRIMFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
    class BRepLoop;
    class ModelParameter;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing Untrim feature in a design.
class UntrimFeature : public Feature {
public:

    /// Gets the loop type that was untrimmed. To change the trim type, use one of the redefine methods.
    UntrimLoopTypes untrimLoopType() const;

    /// Gets the face objects to untrim.
    /// Returns null/None in the case where loops are specified instead of faces.
    std::vector<core::Ptr<BRepFace>> facesToUntrim() const;

    /// Set the loops to be removed from a set of faces.
    /// faces : An array of BRepFace objects that will have the loops of the specified types removed.
    /// Only loops that do not have a connected face can be removed (the edges in the loop have a single face).
    /// The array can only contain faces from surface bodies, (the isSolid property of the BRepBody returns false).
    /// untrimLoopType : The loop type to be untrimmed (AllLoopUntrimType, InternalLoopUntrimType, or ExternalLoopUntrimType).
    /// Returns whether the operation was successful
    bool redefineLoopsFromFaces(const std::vector<core::Ptr<BRepFace>>& faces, UntrimLoopTypes untrimLoopType);

    /// Gets the loop objects to untrim.
    /// Returns null/None in the case where faces are specified instead of loops
    std::vector<core::Ptr<BRepLoop>> loopsToUntrim() const;

    /// Set the loops to be removed.
    /// loops : Input the entities that define loops to remove.
    /// Only loops that do not have a connected face can be removed (the edges in the loop have a single face)
    /// The array can only contain loops from surface bodies, (the isSolid property of the BRepBody returns false).
    /// Returns whether the operation was successful
    bool redefineLoops(const std::vector<core::Ptr<BRepLoop>>& loops);

    /// Gets the ModelParameter that defines the extension distance used to extend external boundaries.
    /// This can return null in the case where only internal boundaries have been removed.
    /// The value can be edited by using the properties of the returned ModelParameter object.
    core::Ptr<ModelParameter> extensionDistance() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<UntrimFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this is not the NativeObject.
    core::Ptr<UntrimFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_UNTRIMFEATURE_API static const char* classType();
    ADSK_FUSION_UNTRIMFEATURE_API const char* objectType() const override;
    ADSK_FUSION_UNTRIMFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_UNTRIMFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual UntrimLoopTypes untrimLoopType_raw() const = 0;
    virtual BRepFace** facesToUntrim_raw(size_t& return_size) const = 0;
    virtual bool redefineLoopsFromFaces_raw(BRepFace** faces, size_t faces_size, UntrimLoopTypes untrimLoopType) = 0;
    virtual BRepLoop** loopsToUntrim_raw(size_t& return_size) const = 0;
    virtual bool redefineLoops_raw(BRepLoop** loops, size_t loops_size) = 0;
    virtual ModelParameter* extensionDistance_raw() const = 0;
    virtual UntrimFeature* nativeObject_raw() const = 0;
    virtual UntrimFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline UntrimLoopTypes UntrimFeature::untrimLoopType() const
{
    UntrimLoopTypes res = untrimLoopType_raw();
    return res;
}

inline std::vector<core::Ptr<BRepFace>> UntrimFeature::facesToUntrim() const
{
    std::vector<core::Ptr<BRepFace>> res;
    size_t s;

    BRepFace** p= facesToUntrim_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool UntrimFeature::redefineLoopsFromFaces(const std::vector<core::Ptr<BRepFace>>& faces, UntrimLoopTypes untrimLoopType)
{
    BRepFace** faces_ = new BRepFace*[faces.size()];
    for(size_t i=0; i<faces.size(); ++i)
        faces_[i] = faces[i].get();

    bool res = redefineLoopsFromFaces_raw(faces_, faces.size(), untrimLoopType);
    delete[] faces_;
    return res;
}

inline std::vector<core::Ptr<BRepLoop>> UntrimFeature::loopsToUntrim() const
{
    std::vector<core::Ptr<BRepLoop>> res;
    size_t s;

    BRepLoop** p= loopsToUntrim_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool UntrimFeature::redefineLoops(const std::vector<core::Ptr<BRepLoop>>& loops)
{
    BRepLoop** loops_ = new BRepLoop*[loops.size()];
    for(size_t i=0; i<loops.size(); ++i)
        loops_[i] = loops[i].get();

    bool res = redefineLoops_raw(loops_, loops.size());
    delete[] loops_;
    return res;
}

inline core::Ptr<ModelParameter> UntrimFeature::extensionDistance() const
{
    core::Ptr<ModelParameter> res = extensionDistance_raw();
    return res;
}

inline core::Ptr<UntrimFeature> UntrimFeature::nativeObject() const
{
    core::Ptr<UntrimFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<UntrimFeature> UntrimFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<UntrimFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_UNTRIMFEATURE_API