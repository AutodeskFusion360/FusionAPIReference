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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_BOUNDARYFILLFEATUREINPUT_CPP__
# define ADSK_FUSION_BOUNDARYFILLFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_BOUNDARYFILLFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_BOUNDARYFILLFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepCells;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a BoundaryFillFeatureInput.
class BoundaryFillFeatureInput : public core::Base {
public:

    /// Returns the collection of the valid cells that have been calculated based on the set of input tools.
    /// You use this collection to specify which cells you want included in the output.
    core::Ptr<BRepCells> bRepCells() const;

    /// Gets and sets the type of operation performed by the boundary fill feature.
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// In order for geometry to be transformed correctly, an Occurrence for creation needs to be
    /// specified when the Boundary Fill is created based on geometry (e.g. a profile and/or face(s))
    /// in another component AND (the Boundary Fill) is not in the root component.
    /// The CreationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    /// Gets and sets the collection of one or more construction planes and open or closed
    /// BRepBody objects that are used in calculating the possible closed boundaries.
    core::Ptr<core::ObjectCollection> tools() const;
    bool tools(const core::Ptr<core::ObjectCollection>& value);

    /// When creating a feature that is owned by a base feature, set this property to the
    /// base feature you want to associate the new feature with. By default, this is null,
    /// meaning it will not be associated with a base feature.
    /// 
    /// Because of a current limitation, if you want to create a feature associated with a base
    /// feature, you must set this property AND call the startEdit method of the base feature,
    /// create the feature, and then call the finishEdit method of the base feature. The base
    /// feature must be in an "edit" state to be able to add any additional items to it.
    core::Ptr<BaseFeature> targetBaseFeature() const;
    bool targetBaseFeature(const core::Ptr<BaseFeature>& value);

    /// To determine the possible boundaries and allow you to choose which cells to keep, the boundary
    /// fill feature does a partial compute when the input object is created. To do this it starts a boundary
    /// fill feature transaction and completes the transaction when you call the add method. If you don't
    /// call the add method to finish the transaction it leaves Fusion in a bad state and there will be undo
    /// problems and possibly a crash. If you have created a BoundFillFeatureInput object and don't want to finish
    /// the feature creation, you need to call the cancel method on the BoundaryFillFeatureInput object to
    /// safely abort the current boundary fill transaction.
    /// Returns true if successful.
    bool cancel();

    /// Gets and sets whether any BRepBodys that were used as tools should be removed as part of the feature creation.
    bool isRemoveTools() const;
    bool isRemoveTools(bool value);

    ADSK_FUSION_BOUNDARYFILLFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_BOUNDARYFILLFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_BOUNDARYFILLFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BOUNDARYFILLFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepCells* bRepCells_raw() const = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
    virtual core::ObjectCollection* tools_raw() const = 0;
    virtual bool tools_raw(core::ObjectCollection* value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual bool cancel_raw() = 0;
    virtual bool isRemoveTools_raw() const = 0;
    virtual bool isRemoveTools_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<BRepCells> BoundaryFillFeatureInput::bRepCells() const
{
    core::Ptr<BRepCells> res = bRepCells_raw();
    return res;
}

inline FeatureOperations BoundaryFillFeatureInput::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool BoundaryFillFeatureInput::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline core::Ptr<Occurrence> BoundaryFillFeatureInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool BoundaryFillFeatureInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}

inline core::Ptr<core::ObjectCollection> BoundaryFillFeatureInput::tools() const
{
    core::Ptr<core::ObjectCollection> res = tools_raw();
    return res;
}

inline bool BoundaryFillFeatureInput::tools(const core::Ptr<core::ObjectCollection>& value)
{
    return tools_raw(value.get());
}

inline core::Ptr<BaseFeature> BoundaryFillFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool BoundaryFillFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline bool BoundaryFillFeatureInput::cancel()
{
    bool res = cancel_raw();
    return res;
}

inline bool BoundaryFillFeatureInput::isRemoveTools() const
{
    bool res = isRemoveTools_raw();
    return res;
}

inline bool BoundaryFillFeatureInput::isRemoveTools(bool value)
{
    return isRemoveTools_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BOUNDARYFILLFEATUREINPUT_API