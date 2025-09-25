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
# ifdef __COMPILING_ADSK_FUSION_UNSTITCHFEATURE_CPP__
# define ADSK_FUSION_UNSTITCHFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_UNSTITCHFEATURE_API
# endif
#else
# define ADSK_FUSION_UNSTITCHFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing Unstitch feature in a design.
class UnstitchFeature : public Feature {
public:

    /// Sets the faces and/or bodies to be unstitched.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// faces : The faces and/or bodies to Unstitch. Individual faces can be unstitched from solids and/or patch bodies.
    /// The faces being unstitched need not all come from the same body.
    /// isChainSelection : A boolean value for setting whether or not faces that are connected and adjacent to
    /// the input faces will be included in the selection. The default value is true.
    /// Returns true if successful.
    bool setInputFaces(const core::Ptr<core::ObjectCollection>& faces, bool isChainSelection = true) const;

    /// Gets the faces that were input to be unstitched.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> inputFaces() const;

    /// A boolean value for setting whether or not faces that are connected and adjacent to
    /// the input faces will be included in the selection. The default value is true.
    bool isChainSelection() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<UnstitchFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this is not the NativeObject.
    core::Ptr<UnstitchFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_UNSTITCHFEATURE_API static const char* classType();
    ADSK_FUSION_UNSTITCHFEATURE_API const char* objectType() const override;
    ADSK_FUSION_UNSTITCHFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_UNSTITCHFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setInputFaces_raw(core::ObjectCollection* faces, bool isChainSelection) const = 0;
    virtual core::ObjectCollection* inputFaces_raw() const = 0;
    virtual bool isChainSelection_raw() const = 0;
    virtual UnstitchFeature* nativeObject_raw() const = 0;
    virtual UnstitchFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline bool UnstitchFeature::setInputFaces(const core::Ptr<core::ObjectCollection>& faces, bool isChainSelection) const
{
    bool res = setInputFaces_raw(faces.get(), isChainSelection);
    return res;
}

inline core::Ptr<core::ObjectCollection> UnstitchFeature::inputFaces() const
{
    core::Ptr<core::ObjectCollection> res = inputFaces_raw();
    return res;
}

inline bool UnstitchFeature::isChainSelection() const
{
    bool res = isChainSelection_raw();
    return res;
}

inline core::Ptr<UnstitchFeature> UnstitchFeature::nativeObject() const
{
    core::Ptr<UnstitchFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<UnstitchFeature> UnstitchFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<UnstitchFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_UNSTITCHFEATURE_API