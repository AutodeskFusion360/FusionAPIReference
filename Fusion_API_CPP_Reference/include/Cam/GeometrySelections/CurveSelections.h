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
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CURVESELECTIONS_CPP__
# define ADSK_CAM_CURVESELECTIONS_API XI_EXPORT
# else
# define ADSK_CAM_CURVESELECTIONS_API
# endif
#else
# define ADSK_CAM_CURVESELECTIONS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class ChainSelection;
    class CurveSelection;
    class FaceContourSelection;
    class PocketRecognitionSelection;
    class PocketSelection;
    class SilhouetteSelection;
    class SketchSelection;
}}

namespace adsk { namespace cam {

/// Collection for all curve selections to be passed to a CadContours2DParameterValue object.
/// This is a read-only container. It returns the curve selections associated with the parent parameter value object, but does not write to it.
/// To apply changes done to the collection and the selections it contains, CadContours2DParameterValue.applyCurveSelections() needs to be called.
class CurveSelections : public core::Base {
public:

    /// Function that returns the specified curve selection object using an index into the collection.
    /// index : The index of the item within the collection to return.  The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<CurveSelection> item(size_t index) const;

    /// The number of items in the collection.
    size_t count() const;

    /// Clears all entries.
    void clear();

    /// Creates a new chain selection and adds it to the end of the collection.
    /// Returns newly created ChainSelection.
    core::Ptr<ChainSelection> createNewChainSelection();

    /// Creates a new face contour selection and adds it to the end of the collection.
    /// Returns newly created FaceContourSelection.
    core::Ptr<FaceContourSelection> createNewFaceContourSelection();

    /// Creates a new silhouette selection and adds it to the end of the collection.
    /// Returns newly created SilhouetteSelection.
    core::Ptr<SilhouetteSelection> createNewSilhouetteSelection();

    /// Creates a new pocket selection and adds it to the end of the collection.
    /// Returns newly created PocketSelection.
    core::Ptr<PocketSelection> createNewPocketSelection();

    /// Creates a new sketch selection and adds it to the end of the collection.
    core::Ptr<SketchSelection> createNewSketchSelection();

    /// Creates a new pocket recognition selection and adds it to the end of the collection.
    core::Ptr<PocketRecognitionSelection> createNewPocketRecognitionSelection();

    /// Function that removes the specified curve selection object using an index in the collection.
    /// index : The index of the item within the collection to remove.  The first item in the collection has an index of 0.
    void remove(size_t index);

    /// Function that removes the specified curve selection object from the collection.
    /// selection : The item within the collection to remove.  Throws an exception if the curve selection is not part of the given selection.
    void removeByObject(const core::Ptr<CurveSelection>& selection);

    typedef CurveSelection iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_CURVESELECTIONS_API static const char* classType();
    ADSK_CAM_CURVESELECTIONS_API const char* objectType() const override;
    ADSK_CAM_CURVESELECTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CURVESELECTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CurveSelection* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual void clear_raw() = 0;
    virtual ChainSelection* createNewChainSelection_raw() = 0;
    virtual FaceContourSelection* createNewFaceContourSelection_raw() = 0;
    virtual SilhouetteSelection* createNewSilhouetteSelection_raw() = 0;
    virtual PocketSelection* createNewPocketSelection_raw() = 0;
    virtual SketchSelection* createNewSketchSelection_raw() = 0;
    virtual PocketRecognitionSelection* createNewPocketRecognitionSelection_raw() = 0;
    virtual void remove_raw(size_t index) = 0;
    virtual void removeByObject_raw(CurveSelection* selection) = 0;
};

// Inline wrappers

inline core::Ptr<CurveSelection> CurveSelections::item(size_t index) const
{
    core::Ptr<CurveSelection> res = item_raw(index);
    return res;
}

inline size_t CurveSelections::count() const
{
    size_t res = count_raw();
    return res;
}

inline void CurveSelections::clear()
{
    clear_raw();
}

inline core::Ptr<ChainSelection> CurveSelections::createNewChainSelection()
{
    core::Ptr<ChainSelection> res = createNewChainSelection_raw();
    return res;
}

inline core::Ptr<FaceContourSelection> CurveSelections::createNewFaceContourSelection()
{
    core::Ptr<FaceContourSelection> res = createNewFaceContourSelection_raw();
    return res;
}

inline core::Ptr<SilhouetteSelection> CurveSelections::createNewSilhouetteSelection()
{
    core::Ptr<SilhouetteSelection> res = createNewSilhouetteSelection_raw();
    return res;
}

inline core::Ptr<PocketSelection> CurveSelections::createNewPocketSelection()
{
    core::Ptr<PocketSelection> res = createNewPocketSelection_raw();
    return res;
}

inline core::Ptr<SketchSelection> CurveSelections::createNewSketchSelection()
{
    core::Ptr<SketchSelection> res = createNewSketchSelection_raw();
    return res;
}

inline core::Ptr<PocketRecognitionSelection> CurveSelections::createNewPocketRecognitionSelection()
{
    core::Ptr<PocketRecognitionSelection> res = createNewPocketRecognitionSelection_raw();
    return res;
}

inline void CurveSelections::remove(size_t index)
{
    remove_raw(index);
}

inline void CurveSelections::removeByObject(const core::Ptr<CurveSelection>& selection)
{
    removeByObject_raw(selection.get());
}

template <class OutputIterator> inline void CurveSelections::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CURVESELECTIONS_API