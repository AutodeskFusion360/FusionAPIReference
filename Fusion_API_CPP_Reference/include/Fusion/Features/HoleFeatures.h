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
# ifdef __COMPILING_ADSK_FUSION_HOLEFEATURES_CPP__
# define ADSK_FUSION_HOLEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_HOLEFEATURES_API
# endif
#else
# define ADSK_FUSION_HOLEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class HoleFeature;
    class HoleFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing hole features in a component
/// and supports the ability to create new hole features.
class HoleFeatures : public core::Base {
public:

    /// Function that returns the specified hole feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<HoleFeature> item(size_t index) const;

    /// The number of hole features in the collection.
    size_t count() const;

    /// Creates a HoleFeatureInput object that defines a simple hole (a single diameter).
    /// This is not a hole feature, but an object used to create a hole feature. Functionality
    /// on the returned HoleFeatureInput object is used to define the position and extent
    /// of the hole.
    /// holeDiameter : A ValueInput object that defines the diameter of the hole. If the ValueInput uses
    /// a real, it is interpreted as centimeters. If it is a string, the units
    /// can be defined as part of the string (i.e. "3 in") If no units are specified,
    /// it is interpreted using the current default units for length.
    /// 
    /// If tap information is added to the hole using the returned HoleFeatureInput, it will
    /// override this diameter, and the hole will be the correct size for the specified tap.
    /// Returns the newly created HoleFeatureInput object or null if the creation failed.
    core::Ptr<HoleFeatureInput> createSimpleInput(const core::Ptr<core::ValueInput>& holeDiameter) const;

    /// Creates a HoleFeatureInput object that defines a counterbore hole. This is not
    /// a hole feature but an object used to create a hole feature. Functionality
    /// on the returned HoleFeatureInput object is used to define the position and extent
    /// of the hole.
    /// holeDiameter : A ValueInput object that defines the diameter of the hole. If the ValueInput uses
    /// a real, it is interpreted as centimeters. If it is a string, the units
    /// can be defined as part of the string (i.e. "3 in") If no units are specified,
    /// it is interpreted using the current default units for length.
    /// 
    /// If tap information is added to the hole using the returned HoleFeatureInput, it will
    /// override this diameter, and the hole will be the correct size for the specified tap.
    /// counterboreDiameter : A ValueInput object that defines the counterbore diameter of the hole. If the ValueInput uses
    /// a real, it is interpreted as centimeters. If it is a string, the units
    /// can be defined as part of the string (i.e. "3 in") If no units are specified,
    /// it is interpreted using the current default units for length.
    /// counterboreDepth : A ValueInput object that defines the counterbore depth of the hole. If the ValueInput uses
    /// a real, it is interpreted as centimeters. If it is a string, the units
    /// can be defined as part of the string (i.e. "3 in") If no units are specified,
    /// it is interpreted using the current default units for length.
    /// Returns the newly created HoleFeatureInput object or null if the creation failed.
    core::Ptr<HoleFeatureInput> createCounterboreInput(const core::Ptr<core::ValueInput>& holeDiameter, const core::Ptr<core::ValueInput>& counterboreDiameter, const core::Ptr<core::ValueInput>& counterboreDepth) const;

    /// Creates a HoleFeatureInput object that defines a countersink hole. This is not
    /// a hole feature but an object used to create a hole feature. Functionality
    /// on the returned HoleFeatureInput object is used to define the position and extent of the hole.
    /// holeDiameter : A ValueInput object that defines the diameter of the hole. If the ValueInput uses
    /// a real, it is interpreted as centimeters. If it is a string, the units
    /// can be defined as part of the string (i.e. "3 in") If no units are specified,
    /// it is interpreted using the current default units for length.
    /// 
    /// If tap information is added to the hole using the returned HoleFeatureInput, it will
    /// override this diameter, and the hole will be the correct size for the specified tap.
    /// countersinkDiameter : A ValueInput object that defines the diameter of the countersink. If the ValueInput uses
    /// a real, it is interpreted as centimeters. If it is a string, the units
    /// can be defined as part of the string (i.e. "3 in") If no units are specified,
    /// it is interpreted using the current default units for length.
    /// countersinkAngle : A ValueInput object that defines the angle of the countersink. If the ValueInput uses
    /// a real then it is interpreted as radians. If it is a string then the units
    /// can be defined as part of the string (i.e. "120 deg"). If no units are specified
    /// it is interpreted using the current default units for angles.
    /// Returns the newly created HoleFeatureInput object or null if the creation failed.
    core::Ptr<HoleFeatureInput> createCountersinkInput(const core::Ptr<core::ValueInput>& holeDiameter, const core::Ptr<core::ValueInput>& countersinkDiameter, const core::Ptr<core::ValueInput>& countersinkAngle) const;

    /// Creates a new hole feature based on the information provided by a HoleFeatureInput object.
    /// To create a new hole, use one of the createInput functions to define a new input object for
    /// the type of hole you want to create. Use the methods and properties on the input object
    /// to define any additional input. Once the information is defined on the input object, you
    /// can pass it to the Add method to create the hole.
    /// input : The HoleFeatureInput object that defines the hole you want to create.
    /// Returns the newly created HoleFeature or null if the creation failed.
    core::Ptr<HoleFeature> add(const core::Ptr<HoleFeatureInput>& input);

    /// Function that returns the specified hole feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<HoleFeature> itemByName(const std::string& name) const;

    typedef HoleFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_HOLEFEATURES_API static const char* classType();
    ADSK_FUSION_HOLEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_HOLEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_HOLEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual HoleFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual HoleFeatureInput* createSimpleInput_raw(core::ValueInput* holeDiameter) const = 0;
    virtual HoleFeatureInput* createCounterboreInput_raw(core::ValueInput* holeDiameter, core::ValueInput* counterboreDiameter, core::ValueInput* counterboreDepth) const = 0;
    virtual HoleFeatureInput* createCountersinkInput_raw(core::ValueInput* holeDiameter, core::ValueInput* countersinkDiameter, core::ValueInput* countersinkAngle) const = 0;
    virtual HoleFeature* add_raw(HoleFeatureInput* input) = 0;
    virtual HoleFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<HoleFeature> HoleFeatures::item(size_t index) const
{
    core::Ptr<HoleFeature> res = item_raw(index);
    return res;
}

inline size_t HoleFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<HoleFeatureInput> HoleFeatures::createSimpleInput(const core::Ptr<core::ValueInput>& holeDiameter) const
{
    core::Ptr<HoleFeatureInput> res = createSimpleInput_raw(holeDiameter.get());
    return res;
}

inline core::Ptr<HoleFeatureInput> HoleFeatures::createCounterboreInput(const core::Ptr<core::ValueInput>& holeDiameter, const core::Ptr<core::ValueInput>& counterboreDiameter, const core::Ptr<core::ValueInput>& counterboreDepth) const
{
    core::Ptr<HoleFeatureInput> res = createCounterboreInput_raw(holeDiameter.get(), counterboreDiameter.get(), counterboreDepth.get());
    return res;
}

inline core::Ptr<HoleFeatureInput> HoleFeatures::createCountersinkInput(const core::Ptr<core::ValueInput>& holeDiameter, const core::Ptr<core::ValueInput>& countersinkDiameter, const core::Ptr<core::ValueInput>& countersinkAngle) const
{
    core::Ptr<HoleFeatureInput> res = createCountersinkInput_raw(holeDiameter.get(), countersinkDiameter.get(), countersinkAngle.get());
    return res;
}

inline core::Ptr<HoleFeature> HoleFeatures::add(const core::Ptr<HoleFeatureInput>& input)
{
    core::Ptr<HoleFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<HoleFeature> HoleFeatures::itemByName(const std::string& name) const
{
    core::Ptr<HoleFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void HoleFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_HOLEFEATURES_API