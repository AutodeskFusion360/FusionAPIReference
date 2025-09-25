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
# ifdef __COMPILING_ADSK_FUSION_TRIMFEATURE_CPP__
# define ADSK_FUSION_TRIMFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_TRIMFEATURE_API
# endif
#else
# define ADSK_FUSION_TRIMFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepCells;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing trim feature in a design.
class TrimFeature : public Feature {
public:

    /// Gets and sets the entity (a patch body, B-Rep face, construction plane or sketch curve) that intersects the trim tool.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> trimTool() const;
    bool trimTool(const core::Ptr<core::Base>& value);

    /// Gets the set of valid cells that have been calculated based on the current inputs.
    /// To get this collection the model must be in the state it was when the feature
    /// was initially computed, which means the timeline marker must be positioned to immediately
    /// before this feature.
    /// 
    /// After changing any selected cells you must call the applyCellChanges method to update
    /// the feature with the changes.
    core::Ptr<BRepCells> bRepCells() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<TrimFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<TrimFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// After making any changes to the set of selected cells you must call this method to
    /// indicate all changes have been made and to apply those changes to the feature.
    /// Returns true if the apply was successful.
    bool applyCellChanges();

    ADSK_FUSION_TRIMFEATURE_API static const char* classType();
    ADSK_FUSION_TRIMFEATURE_API const char* objectType() const override;
    ADSK_FUSION_TRIMFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TRIMFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* trimTool_raw() const = 0;
    virtual bool trimTool_raw(core::Base* value) = 0;
    virtual BRepCells* bRepCells_raw() const = 0;
    virtual TrimFeature* nativeObject_raw() const = 0;
    virtual TrimFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual bool applyCellChanges_raw() = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> TrimFeature::trimTool() const
{
    core::Ptr<core::Base> res = trimTool_raw();
    return res;
}

inline bool TrimFeature::trimTool(const core::Ptr<core::Base>& value)
{
    return trimTool_raw(value.get());
}

inline core::Ptr<BRepCells> TrimFeature::bRepCells() const
{
    core::Ptr<BRepCells> res = bRepCells_raw();
    return res;
}

inline core::Ptr<TrimFeature> TrimFeature::nativeObject() const
{
    core::Ptr<TrimFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<TrimFeature> TrimFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<TrimFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline bool TrimFeature::applyCellChanges()
{
    bool res = applyCellChanges_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TRIMFEATURE_API