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
# ifdef __COMPILING_ADSK_FUSION_BOUNDARYFILLFEATURE_CPP__
# define ADSK_FUSION_BOUNDARYFILLFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_BOUNDARYFILLFEATURE_API
# endif
#else
# define ADSK_FUSION_BOUNDARYFILLFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class BRepCells;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing boundary fill feature in a design.
class BoundaryFillFeature : public Feature {
public:

    /// A collection of construction planes and open or closed BRepBody objects that define the
    /// set of boundaries that have been used in the calculation of available closed boundaries.
    /// Setting this property will clear all currently selected tools.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> tools() const;
    bool tools(const core::Ptr<core::ObjectCollection>& value);

    /// Gets the set of closed boundaries that have been calculated based on the current set of
    /// tools. To get this collection the model must be in the state it was when the feature
    /// was initially computed, which means the timeline marker must be positioned to immediately
    /// before this feature.
    /// 
    /// After changing any selected cells you must call the applyCellChanges method to update
    /// the feature with the changes.
    core::Ptr<BRepCells> bRepCells() const;

    /// Gets and sets the type of operation performed by the boundary fill feature.
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<BoundaryFillFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<BoundaryFillFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// After making any changes to the set of selected cells you must call this method to
    /// indicate all changes have been made and to apply those changes to the feature.
    /// Returns true if the apply was successful.
    bool applyCellChanges();

    /// Gets and sets whether any BRepBodys that were used as tools should be removed as part of the feature creation.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isRemoveTools() const;
    bool isRemoveTools(bool value);

    ADSK_FUSION_BOUNDARYFILLFEATURE_API static const char* classType();
    ADSK_FUSION_BOUNDARYFILLFEATURE_API const char* objectType() const override;
    ADSK_FUSION_BOUNDARYFILLFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BOUNDARYFILLFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* tools_raw() const = 0;
    virtual bool tools_raw(core::ObjectCollection* value) = 0;
    virtual BRepCells* bRepCells_raw() const = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual BoundaryFillFeature* nativeObject_raw() const = 0;
    virtual BoundaryFillFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual bool applyCellChanges_raw() = 0;
    virtual bool isRemoveTools_raw() const = 0;
    virtual bool isRemoveTools_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> BoundaryFillFeature::tools() const
{
    core::Ptr<core::ObjectCollection> res = tools_raw();
    return res;
}

inline bool BoundaryFillFeature::tools(const core::Ptr<core::ObjectCollection>& value)
{
    return tools_raw(value.get());
}

inline core::Ptr<BRepCells> BoundaryFillFeature::bRepCells() const
{
    core::Ptr<BRepCells> res = bRepCells_raw();
    return res;
}

inline FeatureOperations BoundaryFillFeature::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool BoundaryFillFeature::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline core::Ptr<BoundaryFillFeature> BoundaryFillFeature::nativeObject() const
{
    core::Ptr<BoundaryFillFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<BoundaryFillFeature> BoundaryFillFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<BoundaryFillFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline bool BoundaryFillFeature::applyCellChanges()
{
    bool res = applyCellChanges_raw();
    return res;
}

inline bool BoundaryFillFeature::isRemoveTools() const
{
    bool res = isRemoveTools_raw();
    return res;
}

inline bool BoundaryFillFeature::isRemoveTools(bool value)
{
    return isRemoveTools_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BOUNDARYFILLFEATURE_API