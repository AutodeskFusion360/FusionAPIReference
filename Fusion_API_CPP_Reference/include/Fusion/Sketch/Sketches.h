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
# ifdef __COMPILING_ADSK_FUSION_SKETCHES_CPP__
# define ADSK_FUSION_SKETCHES_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHES_API
# endif
#else
# define ADSK_FUSION_SKETCHES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
    class Sketch;
}}

namespace adsk { namespace fusion {

/// Provides access to the sketches within a design and provides
/// methods to create new sketches.
class Sketches : public core::Base {
public:

    /// Function that returns the specified sketch using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the
    /// collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Sketch> item(size_t index) const;

    /// Returns the sketch with the specified name.
    /// name : The name of the sketch as seen in the browser and the timeline.
    /// Returns the sketch or null if there isn't a sketch with that name.
    core::Ptr<Sketch> itemByName(const std::string& name) const;

    /// Returns the number of sketches in a component
    size_t count() const;

    /// Creates a new sketch on the specified planar entity.
    /// planarEntity : A construction plane or planar face that defines the sketch plane
    /// occurrenceForCreation : A creation occurrence is needed if the planarEntity is in another component AND the
    /// sketch is not in the root component. The occurrenceForCreation is analogous
    /// to the active occurrence in the UI.
    /// Returns the newly created Sketch or null if the creation failed.
    core::Ptr<Sketch> add(const core::Ptr<core::Base>& planarEntity, const core::Ptr<Occurrence>& occurrenceForCreation = NULL);

    /// Creates a parametric sketch that is associated with a base feature.
    /// 
    /// Because of a current limitation, if you want to create a sketch associated with a base
    /// feature, you must first call the edit method of the base feature, use this method to
    /// create the sketch, and then call the finishEdit method of the base feature. The base
    /// feature must be in an "edit" state to be able to add any additional items to it.
    /// planarEntity : A construction plane or planar face that defines the sketch plane.
    /// targetBaseOrFormFeature : The existing base feature that you want to associate this sketch with.
    /// includeFaceEdges : When a BrepFace is used as the planarEntity argument, this defines if the edges of the face
    /// should be included in the sketch.
    /// Returns the newly created Sketch or null if the creation failed.
    core::Ptr<Sketch> addToBaseOrFormFeature(const core::Ptr<core::Base>& planarEntity, const core::Ptr<core::Base>& targetBaseOrFormFeature, bool includeFaceEdges);

    /// Creates a new sketch on the specified planar entity. If a BRepFace is provided, the edges of the face
    /// are not projected into the sketch so the result of creating a new sketch with this method will
    /// always be a new empty sketch.
    /// planarEntity : A construction plane or planar face that defines the sketch plane.
    /// occurrenceForCreation : A creation occurrence is needed if the planarEntity is in another component AND the
    /// sketch is not in the root component. The occurrenceForCreation is analogous
    /// to the active occurrence in the UI.
    /// Returns the newly created Sketch or null if the creation failed.
    core::Ptr<Sketch> addWithoutEdges(const core::Ptr<core::Base>& planarEntity, const core::Ptr<Occurrence>& occurrenceForCreation = NULL);

    typedef Sketch iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SKETCHES_API static const char* classType();
    ADSK_FUSION_SKETCHES_API const char* objectType() const override;
    ADSK_FUSION_SKETCHES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Sketch* item_raw(size_t index) const = 0;
    virtual Sketch* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Sketch* add_raw(core::Base* planarEntity, Occurrence* occurrenceForCreation) = 0;
    virtual Sketch* addToBaseOrFormFeature_raw(core::Base* planarEntity, core::Base* targetBaseOrFormFeature, bool includeFaceEdges) = 0;
    virtual Sketch* addWithoutEdges_raw(core::Base* planarEntity, Occurrence* occurrenceForCreation) = 0;
};

// Inline wrappers

inline core::Ptr<Sketch> Sketches::item(size_t index) const
{
    core::Ptr<Sketch> res = item_raw(index);
    return res;
}

inline core::Ptr<Sketch> Sketches::itemByName(const std::string& name) const
{
    core::Ptr<Sketch> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t Sketches::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<Sketch> Sketches::add(const core::Ptr<core::Base>& planarEntity, const core::Ptr<Occurrence>& occurrenceForCreation)
{
    core::Ptr<Sketch> res = add_raw(planarEntity.get(), occurrenceForCreation.get());
    return res;
}

inline core::Ptr<Sketch> Sketches::addToBaseOrFormFeature(const core::Ptr<core::Base>& planarEntity, const core::Ptr<core::Base>& targetBaseOrFormFeature, bool includeFaceEdges)
{
    core::Ptr<Sketch> res = addToBaseOrFormFeature_raw(planarEntity.get(), targetBaseOrFormFeature.get(), includeFaceEdges);
    return res;
}

inline core::Ptr<Sketch> Sketches::addWithoutEdges(const core::Ptr<core::Base>& planarEntity, const core::Ptr<Occurrence>& occurrenceForCreation)
{
    core::Ptr<Sketch> res = addWithoutEdges_raw(planarEntity.get(), occurrenceForCreation.get());
    return res;
}

template <class OutputIterator> inline void Sketches::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHES_API