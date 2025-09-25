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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONJOINTSNAPS_CPP__
# define ADSK_FUSION_CONFIGURATIONJOINTSNAPS_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONJOINTSNAPS_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONJOINTSNAPS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationJointSnap;
}}

namespace adsk { namespace fusion {

/// Collection object that provides access to all the joint snaps that have been
/// defined for a ConfigurationJointSnapColumn. You can also use this collection
/// to define new joint snaps that will then be available when specifying which
/// snap to use in a cell.
class ConfigurationJointSnaps : public core::Base {
public:

    /// A method that returns the specified snap using an index into the collection.
    /// index : The index of the snap to return, where the first row is index 0.
    /// Returns the specified snap or null if an invalid index was specified.
    core::Ptr<ConfigurationJointSnap> item(size_t index) const;

    /// A method that returns the snap with the specified name.
    /// name : The name of the snap to return.
    /// Returns the specified snap or null if a snap with the specified name does not exist.
    core::Ptr<ConfigurationJointSnap> itemByName(const std::string& name) const;

    /// Returns the number of snaps for the column.
    size_t count() const;

    /// Adds a new snap to the column. The snaps associated with the column can be used
    /// in the cells in the column.
    /// name : The name of the new snap. The name must be unique with respect to the other snaps
    /// defined for this column. An empty string can be provided, which will cause Fusion
    /// to use a default naming scheme to create a name.
    /// jointGeometry : A JointGeometry object that defines how the snap is defined. When creating the JointGeometry
    /// object, it must be limited to geometry in the occurrence associated with the column.
    /// Returns the newly created ConfigurationJointSnap.
    core::Ptr<ConfigurationJointSnap> add(const std::string& name, const core::Ptr<core::Base>& jointGeometry);

    typedef ConfigurationJointSnap iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CONFIGURATIONJOINTSNAPS_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONJOINTSNAPS_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONJOINTSNAPS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONJOINTSNAPS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationJointSnap* item_raw(size_t index) const = 0;
    virtual ConfigurationJointSnap* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ConfigurationJointSnap* add_raw(const char* name, core::Base* jointGeometry) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationJointSnap> ConfigurationJointSnaps::item(size_t index) const
{
    core::Ptr<ConfigurationJointSnap> res = item_raw(index);
    return res;
}

inline core::Ptr<ConfigurationJointSnap> ConfigurationJointSnaps::itemByName(const std::string& name) const
{
    core::Ptr<ConfigurationJointSnap> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t ConfigurationJointSnaps::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ConfigurationJointSnap> ConfigurationJointSnaps::add(const std::string& name, const core::Ptr<core::Base>& jointGeometry)
{
    core::Ptr<ConfigurationJointSnap> res = add_raw(name.c_str(), jointGeometry.get());
    return res;
}

template <class OutputIterator> inline void ConfigurationJointSnaps::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONJOINTSNAPS_API