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
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGECOMPONENTS_CPP__
# define ADSK_FUSION_ARRANGECOMPONENTS_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGECOMPONENTS_API
# endif
#else
# define ADSK_FUSION_ARRANGECOMPONENTS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ArrangeComponent;
}}

namespace adsk { namespace fusion {

/// The collection of ArrangeComponent objects associated with an arrangement. This provides
/// access to existing ArrangeComponent objects and supports adding new components to
/// the arrangement. An ArrangeComponent object defines an occurrence along with additional
/// arrangement information. This object is used for both the creation of a new Arrange
/// feature and querying and modifying an existing Arrange feature.
class ArrangeComponents : public core::Base {
public:

    /// Returns an ArrangeComponent object using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ArrangeComponent> item(size_t index) const;

    /// Returns the number of ArrangeComponent objects in the collection.
    size_t count() const;

    /// Adds a new ArrangeComponent object to the collection.
    /// occurrenceOrFace : For a 2D arrange this can be an Occurrence or BRepFace object that defines which component to use.
    /// If a BRepFace object is used, the face is used to orient the part in the arrangement and will face
    /// up or down depending on the isGlobalDirectionFaceUp property on the ArrangeFeature2DInput object.
    /// 
    /// For a 2D arrange, if an Occurrence is provided, the Occurrence will be oriented in the arrangement such that the
    /// largest face points downward.
    /// 
    /// For a 3D arrange this can be an Occurrence or BRepFace object but if a BRepFace is provided it does
    /// not define the orientation but is only used to get the parent Occurrence. For a 3D arrange the arranged
    /// occurrences have the same orientation as the original occurrence but are positioned within the 3D envelope.
    /// Returns the created ArrangeComponent where you can use properties on it to define the various
    /// other settings supported to control how the component is arranged.
    core::Ptr<ArrangeComponent> add(const core::Ptr<core::Base>& occurrenceOrFace);

    typedef ArrangeComponent iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_ARRANGECOMPONENTS_API static const char* classType();
    ADSK_FUSION_ARRANGECOMPONENTS_API const char* objectType() const override;
    ADSK_FUSION_ARRANGECOMPONENTS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGECOMPONENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ArrangeComponent* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ArrangeComponent* add_raw(core::Base* occurrenceOrFace) = 0;
};

// Inline wrappers

inline core::Ptr<ArrangeComponent> ArrangeComponents::item(size_t index) const
{
    core::Ptr<ArrangeComponent> res = item_raw(index);
    return res;
}

inline size_t ArrangeComponents::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ArrangeComponent> ArrangeComponents::add(const core::Ptr<core::Base>& occurrenceOrFace)
{
    core::Ptr<ArrangeComponent> res = add_raw(occurrenceOrFace.get());
    return res;
}

template <class OutputIterator> inline void ArrangeComponents::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGECOMPONENTS_API