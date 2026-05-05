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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_UNTRIMFEATUREINPUT_CPP__
# define ADSK_FUSION_UNTRIMFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_UNTRIMFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_UNTRIMFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BRepFace;
    class BRepLoop;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of an Untrim feature.
class UntrimFeatureInput : public core::Base {
public:

    /// Gets the loop type to be untrimmed. This is only used when faces are being untrimmed and is ignored for loops.
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
    bool setLoopsFromFaces(const std::vector<core::Ptr<BRepFace>>& faces, UntrimLoopTypes untrimLoopType);

    /// Gets the loop objects to untrim.
    /// Returns null/None in the case where faces are specified instead of loops
    std::vector<core::Ptr<BRepLoop>> loopsToUntrim() const;

    /// Set the loops to be removed.
    /// loops : Redefines this input to remove loops from the body. If faces were previously defined, that information will be lost.
    /// Only loops that do not have a connected face can be removed (the edges in the loop have a single face)
    /// The array can only contain loops from surface bodies, (the isSolid property of the BRepBody returns false).
    /// Returns whether the operation was successful
    bool setLoops(const std::vector<core::Ptr<BRepLoop>>& loops);

    /// Gets and sets the ValueInput object that defines the extension distance applied to faces when an
    /// external boundary is removed.
    core::Ptr<core::ValueInput> extensionDistance() const;
    bool extensionDistance(const core::Ptr<core::ValueInput>& value);

    ADSK_FUSION_UNTRIMFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_UNTRIMFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_UNTRIMFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_UNTRIMFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual UntrimLoopTypes untrimLoopType_raw() const = 0;
    virtual BRepFace** facesToUntrim_raw(size_t& return_size) const = 0;
    virtual bool setLoopsFromFaces_raw(BRepFace** faces, size_t faces_size, UntrimLoopTypes untrimLoopType) = 0;
    virtual BRepLoop** loopsToUntrim_raw(size_t& return_size) const = 0;
    virtual bool setLoops_raw(BRepLoop** loops, size_t loops_size) = 0;
    virtual core::ValueInput* extensionDistance_raw() const = 0;
    virtual bool extensionDistance_raw(core::ValueInput* value) = 0;
};

// Inline wrappers

inline UntrimLoopTypes UntrimFeatureInput::untrimLoopType() const
{
    UntrimLoopTypes res = untrimLoopType_raw();
    return res;
}

inline std::vector<core::Ptr<BRepFace>> UntrimFeatureInput::facesToUntrim() const
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

inline bool UntrimFeatureInput::setLoopsFromFaces(const std::vector<core::Ptr<BRepFace>>& faces, UntrimLoopTypes untrimLoopType)
{
    BRepFace** faces_ = new BRepFace*[faces.size()];
    for(size_t i=0; i<faces.size(); ++i)
        faces_[i] = faces[i].get();

    bool res = setLoopsFromFaces_raw(faces_, faces.size(), untrimLoopType);
    delete[] faces_;
    return res;
}

inline std::vector<core::Ptr<BRepLoop>> UntrimFeatureInput::loopsToUntrim() const
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

inline bool UntrimFeatureInput::setLoops(const std::vector<core::Ptr<BRepLoop>>& loops)
{
    BRepLoop** loops_ = new BRepLoop*[loops.size()];
    for(size_t i=0; i<loops.size(); ++i)
        loops_[i] = loops[i].get();

    bool res = setLoops_raw(loops_, loops.size());
    delete[] loops_;
    return res;
}

inline core::Ptr<core::ValueInput> UntrimFeatureInput::extensionDistance() const
{
    core::Ptr<core::ValueInput> res = extensionDistance_raw();
    return res;
}

inline bool UntrimFeatureInput::extensionDistance(const core::Ptr<core::ValueInput>& value)
{
    return extensionDistance_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_UNTRIMFEATUREINPUT_API