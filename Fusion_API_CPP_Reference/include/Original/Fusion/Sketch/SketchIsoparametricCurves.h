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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SKETCHISOPARAMETRICCURVES_CPP__
# define ADSK_FUSION_SKETCHISOPARAMETRICCURVES_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHISOPARAMETRICCURVES_API
# endif
#else
# define ADSK_FUSION_SKETCHISOPARAMETRICCURVES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
    class IsoparametricCurveInput;
    class SketchCurve;
    class SketchIsoparametricCurve;
}}

namespace adsk { namespace fusion {

/// The collection of isoparametric curves in a sketch. This provides access to the existing
/// isoparametric curves and supports the method to create new isoparametric curves.
class SketchIsoparametricCurves : public core::Base {
public:

    /// Function that returns the specified isoparametric curve using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SketchIsoparametricCurve> item(size_t index) const;

    /// Returns the number of isoparametric curves in the sketch.
    size_t count() const;

    /// Creates a new IsoparametricCurveInput object that is used to specify the input needed
    /// to create new isoparametric curves.
    /// face : The BRepFace on which to create the isoparametric curve.
    /// Returns the newly created IsoparametricCurveInput object or null if the creation failed.
    core::Ptr<IsoparametricCurveInput> createInput(const core::Ptr<BRepFace>& face);

    /// Creates sketch geometry that represents isoparametric curves on a face.
    /// An isoparametric curve follows the surface in either the U or V parametric
    /// direction at a constant parameter value. This results in the creation of
    /// associative isoparametric curves, which means they remain associated with
    /// the face and will update if the model changes. You can create a non-associative
    /// result by using the addUnlinked method..
    /// 
    /// The created curves can be accessed through the returned SketchIsoparametricCurve
    /// object and they are also available in the appropriate collections. For example,
    /// any lines will also be in the SketchLines collection.
    /// input : The IsoparametricCurveInput object that specifies the input needed to create the
    /// isoparametric curve(s).
    /// Returns the SketchIsoparametricCurve object that was created as a result of the
    /// isoparametric curve operation.
    core::Ptr<SketchIsoparametricCurve> add(const core::Ptr<IsoparametricCurveInput>& input);

    /// Creates sketch geometry that represents isoparametric curves on a face.
    /// An isoparametric curve follows the surface in either the U or V parametric
    /// direction at a constant parameter value. This method calculates and creates
    /// sketch geometry that represents the isoparametric curves but all intelligence
    /// about how they were created is lost and the result is regular sketch curves.
    /// 
    /// To create parametric isoparametric curves, use the add method.
    /// input : The IsoparametricCurveInput object that specifies the input needed to create the
    /// isoparametric curve(s). This is created using the createInput method.
    /// An array of sketch curves that were created as a result of the isoparametric
    /// curve operation.
    std::vector<core::Ptr<SketchCurve>> addUnlinked(const core::Ptr<IsoparametricCurveInput>& input);

    typedef SketchIsoparametricCurve iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SKETCHISOPARAMETRICCURVES_API static const char* classType();
    ADSK_FUSION_SKETCHISOPARAMETRICCURVES_API const char* objectType() const override;
    ADSK_FUSION_SKETCHISOPARAMETRICCURVES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHISOPARAMETRICCURVES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchIsoparametricCurve* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual IsoparametricCurveInput* createInput_raw(BRepFace* face) = 0;
    virtual SketchIsoparametricCurve* add_raw(IsoparametricCurveInput* input) = 0;
    virtual SketchCurve** addUnlinked_raw(IsoparametricCurveInput* input, size_t& return_size) = 0;
};

// Inline wrappers

inline core::Ptr<SketchIsoparametricCurve> SketchIsoparametricCurves::item(size_t index) const
{
    core::Ptr<SketchIsoparametricCurve> res = item_raw(index);
    return res;
}

inline size_t SketchIsoparametricCurves::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<IsoparametricCurveInput> SketchIsoparametricCurves::createInput(const core::Ptr<BRepFace>& face)
{
    core::Ptr<IsoparametricCurveInput> res = createInput_raw(face.get());
    return res;
}

inline core::Ptr<SketchIsoparametricCurve> SketchIsoparametricCurves::add(const core::Ptr<IsoparametricCurveInput>& input)
{
    core::Ptr<SketchIsoparametricCurve> res = add_raw(input.get());
    return res;
}

inline std::vector<core::Ptr<SketchCurve>> SketchIsoparametricCurves::addUnlinked(const core::Ptr<IsoparametricCurveInput>& input)
{
    std::vector<core::Ptr<SketchCurve>> res;
    size_t s;

    SketchCurve** p= addUnlinked_raw(input.get(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

template <class OutputIterator> inline void SketchIsoparametricCurves::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHISOPARAMETRICCURVES_API