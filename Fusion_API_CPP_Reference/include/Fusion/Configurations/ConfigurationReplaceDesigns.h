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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONREPLACEDESIGNS_CPP__
# define ADSK_FUSION_CONFIGURATIONREPLACEDESIGNS_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONREPLACEDESIGNS_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONREPLACEDESIGNS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataFile;
}}
namespace adsk { namespace fusion {
    class ConfigurationReplaceDesign;
}}

namespace adsk { namespace fusion {

/// Collection object that provides access to all the ConfigurationReplaceDesign objects
/// that have been defined for a ConfigurationReplaceDesignColumn. You can also use this
/// collection to define new replace designs that will then be available when specifying which
/// design to use in a cell.
class ConfigurationReplaceDesigns : public core::Base {
public:

    /// A method that returns the specified ConfigurationReplaceDesign object using an index into the collection.
    /// index : The index of the ConfigurationReplaceDesign object to return, where the first row is index 0.
    /// Returns the specified ConfigurationReplaceDesign object or null if an invalid index was specified.
    core::Ptr<ConfigurationReplaceDesign> item(size_t index) const;

    /// A method that returns the ConfigurationReplaceDesign object with the specified name.
    /// name : The name of the ConfigurationReplaceDesign object to return.
    /// Returns the specified ConfigurationReplaceDesign object or null if a ConfigurationReplaceDesign
    /// object with the specified name does not exist.
    core::Ptr<ConfigurationReplaceDesign> itemByName(const std::string& name) const;

    /// Returns the number of ConfigurationReplaceDesign objects defined for the column.
    size_t count() const;

    /// Adds a new ConfigurationReplaceDesign object to the column. The ConfigurationReplaceDesign objects
    /// associated with the column can be used in the cells in the column.
    /// name : The name of the new ConfigurationReplaceDesign object. The name must be unique with respect to the
    /// other ConfigurationReplaceDesign objects defined for this column. An empty string can be provided,
    /// which will cause Fusion to use a default naming scheme to create a name.
    /// dataFile : A DataFile object that defines which Design to use. This must be a DataFile object that represents
    /// a standard design, not a configured design.
    /// Returns the newly created ConfigurationReplaceDesign.
    core::Ptr<ConfigurationReplaceDesign> add(const std::string& name, const core::Ptr<core::DataFile>& dataFile);

    typedef ConfigurationReplaceDesign iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CONFIGURATIONREPLACEDESIGNS_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONREPLACEDESIGNS_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONREPLACEDESIGNS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONREPLACEDESIGNS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationReplaceDesign* item_raw(size_t index) const = 0;
    virtual ConfigurationReplaceDesign* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ConfigurationReplaceDesign* add_raw(const char* name, core::DataFile* dataFile) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationReplaceDesign> ConfigurationReplaceDesigns::item(size_t index) const
{
    core::Ptr<ConfigurationReplaceDesign> res = item_raw(index);
    return res;
}

inline core::Ptr<ConfigurationReplaceDesign> ConfigurationReplaceDesigns::itemByName(const std::string& name) const
{
    core::Ptr<ConfigurationReplaceDesign> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t ConfigurationReplaceDesigns::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ConfigurationReplaceDesign> ConfigurationReplaceDesigns::add(const std::string& name, const core::Ptr<core::DataFile>& dataFile)
{
    core::Ptr<ConfigurationReplaceDesign> res = add_raw(name.c_str(), dataFile.get());
    return res;
}

template <class OutputIterator> inline void ConfigurationReplaceDesigns::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONREPLACEDESIGNS_API