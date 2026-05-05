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
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONCOLUMNS_CPP__
# define ADSK_FUSION_CONFIGURATIONCOLUMNS_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONCOLUMNS_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONCOLUMNS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Property;
}}
namespace adsk { namespace fusion {
    class ConfigurationColumn;
    class ConfigurationFeatureAspectColumn;
    class ConfigurationInsertColumn;
    class ConfigurationInsertStandardDesignColumn;
    class ConfigurationParameterColumn;
    class ConfigurationPropertyColumn;
    class ConfigurationSuppressColumn;
    class ConfigurationVisibilityColumn;
    class Feature;
    class HoleFeature;
    class Occurrence;
    class Parameter;
}}

namespace adsk { namespace fusion {

/// Returns a collection of the columns in the table. The Name column is not included in this list.
class ConfigurationColumns : public core::Base {
public:

    /// A method that returns the specified column object using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ConfigurationColumn> item(size_t index) const;

    /// A method that returns the specified column object using the ID of the column.
    /// id : The ID of the column within the collection to return.
    /// Returns the specified item or null if no column matches the provided ID.
    core::Ptr<ConfigurationColumn> itemById(const std::string& id) const;

    /// Returns the number of columns in the table. The name column is not included.
    size_t count() const;

    /// Adds a new parameter column to the configuration table. If a parameter column already
    /// exists for the parameter, the existing column is returned.
    /// 
    /// This is only valid for TopConfigurationTable and ThemeConfigurationTable objects.
    /// It will fail for all other table types.
    /// parameter : The parameter to add to the table.
    /// Returns the new column or null in the case of failure.
    core::Ptr<ConfigurationParameterColumn> addParameterColumn(const core::Ptr<Parameter>& parameter);

    /// Adds a new column to control the suppression of a feature. The term "feature" is
    /// used broadly and includes anything displayed in the timeline. If a suppression column already
    /// exists for the feature, the existing column is returned.
    /// 
    /// This is only valid for TopConfigurationTable and ThemeConfigurationTable objects.
    /// It will fail for all other table types.
    /// feature : The feature to add to the table. Any object that is displayed in the timeline can be
    /// used as input. For example, some valid objects are any modeling features, sketches,
    /// construction geometry, and joints.
    /// Returns the new column or null in the case of failure.
    core::Ptr<ConfigurationSuppressColumn> addSuppressColumn(const core::Ptr<core::Base>& feature);

    /// Adds a new column to control the visibility of an entity. If a visibility column already
    /// exists for the entity, the existing column is returned.
    /// 
    /// This is only valid for ConfigurationTopTable and ConfigurationCustomThemeTable objects
    /// and will fail for all other table types.
    /// entity : Returns the entity whose visibility will be controlled by this column.
    /// Returns the new column or null in the case of failure.
    core::Ptr<ConfigurationVisibilityColumn> addVisibilityColumn(const core::Ptr<core::Base>& entity);

    /// Add a new column to control which configuration is used for an inserted configuration.
    /// If an insert column already exists for the occurrence, the existing column is returned.
    /// 
    /// This is only valid for ConfigurationTopTable and ConfigurationCustomThemeTable objects
    /// and will fail for all other table types.
    /// occurrence : The occurrence that references a configuration.
    /// Returns the new column or null in the case of failure.
    core::Ptr<ConfigurationInsertColumn> addInsertColumn(const core::Ptr<Occurrence>& occurrence);

    /// Add a new column to control the property inside the component.
    /// The component is the owner of the property.
    /// This is only valid for TopConfigurationTable.
    /// It will fail for all other table types.
    /// property : The property to add to the table.
    /// Returns the new column or null in the case of failure.
    core::Ptr<ConfigurationPropertyColumn> addPropertyColumn(const core::Ptr<core::Property>& property);

    /// Creates the columns in the configuration table to control the type of thread associated with a
    /// thread feature or a tapped hole. Because configuring a thread requires several pieces of information,
    /// this method collects it all at once and creates all the corresponding feature aspect columns.
    /// threadFeature : The thread or tapped hole feature whose thread will be controlled by the configuration table.
    /// threadColumns : Enum value that indicates which columns should be created to control the thread type. You can fully
    /// define the thread type by specifying the type, size, designation, and class. Or you can leave the
    /// thread type controlled by the feature and only configure the size, designation, and class. Or you
    /// can leave the thread type and size controlled by the feature and only configure the designation and
    /// class. Or you can leave the thread type, size, and designation controlled by the feature and only
    /// configure the class. As a result, this can create and return 4, 3, 2, or 1 columns.
    /// Returns an array of the columns created. They are in order of type, size, designation, and class.
    std::vector<core::Ptr<ConfigurationFeatureAspectColumn>> addThreadTypeColumns(const core::Ptr<Feature>& threadFeature, ConfigurationThreadColumns threadColumns);

    /// Creates a new column to control an aspect of a feature that supports being configured.
    /// feature : The feature to be configured. The term "feature" is used broadly and includes ThreadFeature, HoleFeature that is tapped, Joint,
    /// and AsBuiltJoint objects. The existing column is returned if a feature aspect column already exists for the feature and aspect type.
    /// aspectType : The aspect type to create a column for. The type specified must be a valid type for the specified feature; otherwise, this will fail with an error.
    /// Returns the created ConfigurationFeatureAspectColumn or null in the case of failure.
    core::Ptr<ConfigurationFeatureAspectColumn> addFeatureAspectColumn(const core::Ptr<core::Base>& feature, ConfigurationFeatureAspectTypes aspectType);

    /// Creates the columns in the configuration table to control the clearance information associated with a
    /// clearance hole. Because configuring a clearance hole requires several pieces of related information,
    /// this method collects it all at once and creates all the corresponding feature aspect columns.
    /// 
    /// The fit is also a setting that controls the hole clearance, but it's independent of the other settings and can be
    /// created independently using the addFeatureAspectColumn method.
    /// holeFeature : The hole feature that defines a clearance hole whose clearance will be controlled by the configuration table.
    /// holeClearanceColumns : Enum value that indicates which columns should be created to control the clearance hole definition. You can fully
    /// define the clearance hole by specifying the standard, fastener type, and size. Or you can leave the
    /// standard controlled by the hole and only configure the fastener type, and size. Or you
    /// can leave the standard and fastener type controlled by the hole and only configure the size.
    /// As a result, this can create and return 3, 2, or 1 columns.
    /// 
    /// The fit is also a setting that controls the hole clearance, but it's independent of the other settings and can be
    /// created independently using the addFeatureAspectColumn method.
    /// Returns an array of the columns created. They are in order of standard, fastener type, and size.
    std::vector<core::Ptr<ConfigurationFeatureAspectColumn>> addClearanceTypeColumns(const core::Ptr<HoleFeature>& holeFeature, ConfigurationClearanceHoleColumns holeClearanceColumns);

    /// Add a new column to control which standard design is used for an inserted design.
    /// If an insert column already exists for the occurrence, the existing column is returned.
    /// 
    /// This is only valid for ConfigurationTopTable and ConfigurationCustomThemeTable objects
    /// and will fail for all other table types.
    /// occurrence : The occurrence that references a standard design.
    /// Returns the new column or null in the case of failure.
    core::Ptr<ConfigurationInsertStandardDesignColumn> addInsertStandardDesignColumn(const core::Ptr<Occurrence>& occurrence);

    typedef ConfigurationColumn iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CONFIGURATIONCOLUMNS_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONCOLUMNS_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONCOLUMNS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONCOLUMNS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationColumn* item_raw(size_t index) const = 0;
    virtual ConfigurationColumn* itemById_raw(const char* id) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ConfigurationParameterColumn* addParameterColumn_raw(Parameter* parameter) = 0;
    virtual ConfigurationSuppressColumn* addSuppressColumn_raw(core::Base* feature) = 0;
    virtual ConfigurationVisibilityColumn* addVisibilityColumn_raw(core::Base* entity) = 0;
    virtual ConfigurationInsertColumn* addInsertColumn_raw(Occurrence* occurrence) = 0;
    virtual ConfigurationPropertyColumn* addPropertyColumn_raw(core::Property* property) = 0;
    virtual ConfigurationFeatureAspectColumn** addThreadTypeColumns_raw(Feature* threadFeature, ConfigurationThreadColumns threadColumns, size_t& return_size) = 0;
    virtual ConfigurationFeatureAspectColumn* addFeatureAspectColumn_raw(core::Base* feature, ConfigurationFeatureAspectTypes aspectType) = 0;
    virtual ConfigurationFeatureAspectColumn** addClearanceTypeColumns_raw(HoleFeature* holeFeature, ConfigurationClearanceHoleColumns holeClearanceColumns, size_t& return_size) = 0;
    virtual ConfigurationInsertStandardDesignColumn* addInsertStandardDesignColumn_raw(Occurrence* occurrence) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationColumn> ConfigurationColumns::item(size_t index) const
{
    core::Ptr<ConfigurationColumn> res = item_raw(index);
    return res;
}

inline core::Ptr<ConfigurationColumn> ConfigurationColumns::itemById(const std::string& id) const
{
    core::Ptr<ConfigurationColumn> res = itemById_raw(id.c_str());
    return res;
}

inline size_t ConfigurationColumns::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ConfigurationParameterColumn> ConfigurationColumns::addParameterColumn(const core::Ptr<Parameter>& parameter)
{
    core::Ptr<ConfigurationParameterColumn> res = addParameterColumn_raw(parameter.get());
    return res;
}

inline core::Ptr<ConfigurationSuppressColumn> ConfigurationColumns::addSuppressColumn(const core::Ptr<core::Base>& feature)
{
    core::Ptr<ConfigurationSuppressColumn> res = addSuppressColumn_raw(feature.get());
    return res;
}

inline core::Ptr<ConfigurationVisibilityColumn> ConfigurationColumns::addVisibilityColumn(const core::Ptr<core::Base>& entity)
{
    core::Ptr<ConfigurationVisibilityColumn> res = addVisibilityColumn_raw(entity.get());
    return res;
}

inline core::Ptr<ConfigurationInsertColumn> ConfigurationColumns::addInsertColumn(const core::Ptr<Occurrence>& occurrence)
{
    core::Ptr<ConfigurationInsertColumn> res = addInsertColumn_raw(occurrence.get());
    return res;
}

inline core::Ptr<ConfigurationPropertyColumn> ConfigurationColumns::addPropertyColumn(const core::Ptr<core::Property>& property)
{
    core::Ptr<ConfigurationPropertyColumn> res = addPropertyColumn_raw(property.get());
    return res;
}

inline std::vector<core::Ptr<ConfigurationFeatureAspectColumn>> ConfigurationColumns::addThreadTypeColumns(const core::Ptr<Feature>& threadFeature, ConfigurationThreadColumns threadColumns)
{
    std::vector<core::Ptr<ConfigurationFeatureAspectColumn>> res;
    size_t s;

    ConfigurationFeatureAspectColumn** p= addThreadTypeColumns_raw(threadFeature.get(), threadColumns, s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<ConfigurationFeatureAspectColumn> ConfigurationColumns::addFeatureAspectColumn(const core::Ptr<core::Base>& feature, ConfigurationFeatureAspectTypes aspectType)
{
    core::Ptr<ConfigurationFeatureAspectColumn> res = addFeatureAspectColumn_raw(feature.get(), aspectType);
    return res;
}

inline std::vector<core::Ptr<ConfigurationFeatureAspectColumn>> ConfigurationColumns::addClearanceTypeColumns(const core::Ptr<HoleFeature>& holeFeature, ConfigurationClearanceHoleColumns holeClearanceColumns)
{
    std::vector<core::Ptr<ConfigurationFeatureAspectColumn>> res;
    size_t s;

    ConfigurationFeatureAspectColumn** p= addClearanceTypeColumns_raw(holeFeature.get(), holeClearanceColumns, s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<ConfigurationInsertStandardDesignColumn> ConfigurationColumns::addInsertStandardDesignColumn(const core::Ptr<Occurrence>& occurrence)
{
    core::Ptr<ConfigurationInsertStandardDesignColumn> res = addInsertStandardDesignColumn_raw(occurrence.get());
    return res;
}

template <class OutputIterator> inline void ConfigurationColumns::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONCOLUMNS_API