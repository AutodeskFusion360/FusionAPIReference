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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MOVEFEATURES_CPP__
# define ADSK_FUSION_MOVEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_MOVEFEATURES_API
# endif
#else
# define ADSK_FUSION_MOVEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class MoveFeature;
    class MoveFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing move features in a component
/// and supports the ability to create new move features.
class MoveFeatures : public core::Base {
public:

    /// Function that returns the specified move feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<MoveFeature> item(size_t index) const;

    /// The number of move features in the collection.
    size_t count() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a MoveFeatureInput object. Use properties and methods on this object
    /// to define the move feature you want to create and then use the Add method, passing in
    /// the MoveFeatureInput object.
    /// inputEntities : An ObjectCollection containing the entities to move. This collection can only contain
    /// BRepBody objects in parametric modeling. It can be BRep bodies, T-Spline bodies,
    /// mesh bodies mixed or faces and features mixed in non-parametric modeling.
    /// transform : The transform to apply to the input entities. This can describe a move (translation) or a rotation. The
    /// matrix must define an orthogonal transform. That is the axes must be perpendicular to each other and there
    /// can't be any scaling or mirroring defined.
    /// Returns the newly created MoveFeatureInput object or null if the creation failed.
    core::Ptr<MoveFeatureInput> createInput(const core::Ptr<core::ObjectCollection>& inputEntities, const core::Ptr<core::Matrix3D>& transform) const;

    /// Creates a new move feature.
    /// input : A MoveFeatureInput object that defines the desired move feature. Use the createInput2
    /// method to create a new MoveFeatureInput object and then use methods on the MoveFeatureInput
    /// object to define the move feature.
    /// Returns the newly created MoveFeature object or null if the creation failed.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<MoveFeature> add(const core::Ptr<MoveFeatureInput>& input);

    /// Function that returns the specified move feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<MoveFeature> itemByName(const std::string& name) const;

    /// Creates a MoveFeatureInput object. Use properties and methods on this object
    /// to define how the move is defined and then use the MoveFeatues.add method, passing in
    /// the MoveFeatureInput object to create a move feature.
    /// inputEntities : An ObjectCollection containing the objects to move. For a parametric model, the collection can contain
    /// BRepBody or BRepFace objects but not a combination of both.
    /// Returns the newly created MoveFeatureInput object or null if the creation failed.
    core::Ptr<MoveFeatureInput> createInput2(const core::Ptr<core::ObjectCollection>& inputEntities) const;

    typedef MoveFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_MOVEFEATURES_API static const char* classType();
    ADSK_FUSION_MOVEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_MOVEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MOVEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MoveFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual MoveFeatureInput* createInput_raw(core::ObjectCollection* inputEntities, core::Matrix3D* transform) const = 0;
    virtual MoveFeature* add_raw(MoveFeatureInput* input) = 0;
    virtual MoveFeature* itemByName_raw(const char* name) const = 0;
    virtual MoveFeatureInput* createInput2_raw(core::ObjectCollection* inputEntities) const = 0;
};

// Inline wrappers

inline core::Ptr<MoveFeature> MoveFeatures::item(size_t index) const
{
    core::Ptr<MoveFeature> res = item_raw(index);
    return res;
}

inline size_t MoveFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<MoveFeatureInput> MoveFeatures::createInput(const core::Ptr<core::ObjectCollection>& inputEntities, const core::Ptr<core::Matrix3D>& transform) const
{
    core::Ptr<MoveFeatureInput> res = createInput_raw(inputEntities.get(), transform.get());
    return res;
}

inline core::Ptr<MoveFeature> MoveFeatures::add(const core::Ptr<MoveFeatureInput>& input)
{
    core::Ptr<MoveFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<MoveFeature> MoveFeatures::itemByName(const std::string& name) const
{
    core::Ptr<MoveFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<MoveFeatureInput> MoveFeatures::createInput2(const core::Ptr<core::ObjectCollection>& inputEntities) const
{
    core::Ptr<MoveFeatureInput> res = createInput2_raw(inputEntities.get());
    return res;
}

template <class OutputIterator> inline void MoveFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MOVEFEATURES_API