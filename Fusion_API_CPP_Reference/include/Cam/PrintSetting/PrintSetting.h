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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_PRINTSETTING_CPP__
# define ADSK_CAM_PRINTSETTING_API XI_EXPORT
# else
# define ADSK_CAM_PRINTSETTING_API
# endif
#else
# define ADSK_CAM_PRINTSETTING_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMParameters;
    class Machine;
    class PrintSettingItem;
}}

namespace adsk { namespace cam {

/// Object that represents a PrintSetting.
class PrintSetting : public core::Base {
public:

    /// Gets and sets the name of the PrintSetting.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets and sets the description of the PrintSetting.
    std::string description() const;
    bool description(const std::string& value);

    /// Gets the technology of the PrintSetting.
    std::string technology() const;

    /// Gets the unique identifier of the PrintSetting.
    /// Can be used for comparing PrintSettings within the document.
    std::string id() const;

    /// Creates a PrintSetting from a xml content.
    /// xmlContent : The xml content string of a PrintSetting file to act as a base for creating a PrintSetting from.
    /// Returns the newly created PrintSetting.
    static core::Ptr<PrintSetting> createFromXML(const std::string& xmlContent);

    /// Function that returns the specified parameterTable using an enum into the collection.
    /// type : The type of the item within the collection to return.
    /// Returns the specified type of parameters or null if an invalid type was specified.
    core::Ptr<CAMParameters> parameters(PrintSettingItemTypes type);

    /// Returns the PrintSetting item of the specified body preset.
    /// name : The body preset id of the parameters.
    /// Returns the specified parameters or  throws exception in the case where there is no parameters with the specified id.
    core::Ptr<PrintSettingItem> itemByName(const std::string& name);

    /// Duplicates the PrintSetting item of the specified body preset.
    /// name : The body preset id of the parameters that has to be duplicated.
    /// Returns the specified parameters or throws exception in the case where there is no parameters with the specified id.
    core::Ptr<PrintSettingItem> duplicatePrintSettingItem(const std::string& name);

    /// Deletes the PrintSettingItem of the specified body preset.
    /// Throws an exception when the name does not match any available PrintSettingItems or when trying to delete the default PrintSettingItem.
    /// name : The body preset id of the parameters that has to be deleted.
    void deletePrintSettingItem(const std::string& name);

    /// Defaults the PrintSetting item of the specified body preset. Throws exception when name not found.
    /// name : The body preset id of the parameters that has to be defaulted.
    void setDefaultPrintSettingItem(const std::string& name);

    /// Gets the default PrintSetting item of the specified body preset. Throws exception when name not found.
    /// Returns the default parameters.
    core::Ptr<PrintSettingItem> getDefaultPrintSettingItem();

    /// Get the PrintSettingItem at index in PrintSetting.
    /// index : The index of the PrintSettingItem.
    /// The PrintSettingItem at index.
    core::Ptr<PrintSettingItem> item(int index);

    /// Get the number of PrintSettingItems in this collection.
    size_t count() const;

    /// Synchronizes the print setting with the given machine, making extruder parameter options dependent on the available extruders in the machine.
    bool syncWithMachine(const core::Ptr<Machine>& machine);

    /// Checks whether the print setting is usable with the given machine.
    bool isCompatibleWithMachine(const core::Ptr<Machine>& machine);

    typedef PrintSettingItem iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_PRINTSETTING_API static const char* classType();
    ADSK_CAM_PRINTSETTING_API const char* objectType() const override;
    ADSK_CAM_PRINTSETTING_API void* queryInterface(const char* id) const override;
    ADSK_CAM_PRINTSETTING_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual char* description_raw() const = 0;
    virtual bool description_raw(const char* value) = 0;
    virtual char* technology_raw() const = 0;
    virtual char* id_raw() const = 0;
    ADSK_CAM_PRINTSETTING_API static PrintSetting* createFromXML_raw(const char* xmlContent);
    virtual CAMParameters* parameters_raw(PrintSettingItemTypes type) = 0;
    virtual PrintSettingItem* itemByName_raw(const char* name) = 0;
    virtual PrintSettingItem* duplicatePrintSettingItem_raw(const char* name) = 0;
    virtual void deletePrintSettingItem_raw(const char* name) = 0;
    virtual void setDefaultPrintSettingItem_raw(const char* name) = 0;
    virtual PrintSettingItem* getDefaultPrintSettingItem_raw() = 0;
    virtual PrintSettingItem* item_raw(int index) = 0;
    virtual size_t count_raw() const = 0;
    virtual bool syncWithMachine_raw(Machine* machine) = 0;
    virtual bool isCompatibleWithMachine_raw(Machine* machine) = 0;
};

// Inline wrappers

inline std::string PrintSetting::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PrintSetting::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline std::string PrintSetting::description() const
{
    std::string res;

    char* p= description_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PrintSetting::description(const std::string& value)
{
    return description_raw(value.c_str());
}

inline std::string PrintSetting::technology() const
{
    std::string res;

    char* p= technology_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string PrintSetting::id() const
{
    std::string res;

    char* p= id_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<PrintSetting> PrintSetting::createFromXML(const std::string& xmlContent)
{
    core::Ptr<PrintSetting> res = createFromXML_raw(xmlContent.c_str());
    return res;
}

inline core::Ptr<CAMParameters> PrintSetting::parameters(PrintSettingItemTypes type)
{
    core::Ptr<CAMParameters> res = parameters_raw(type);
    return res;
}

inline core::Ptr<PrintSettingItem> PrintSetting::itemByName(const std::string& name)
{
    core::Ptr<PrintSettingItem> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<PrintSettingItem> PrintSetting::duplicatePrintSettingItem(const std::string& name)
{
    core::Ptr<PrintSettingItem> res = duplicatePrintSettingItem_raw(name.c_str());
    return res;
}

inline void PrintSetting::deletePrintSettingItem(const std::string& name)
{
    deletePrintSettingItem_raw(name.c_str());
}

inline void PrintSetting::setDefaultPrintSettingItem(const std::string& name)
{
    setDefaultPrintSettingItem_raw(name.c_str());
}

inline core::Ptr<PrintSettingItem> PrintSetting::getDefaultPrintSettingItem()
{
    core::Ptr<PrintSettingItem> res = getDefaultPrintSettingItem_raw();
    return res;
}

inline core::Ptr<PrintSettingItem> PrintSetting::item(int index)
{
    core::Ptr<PrintSettingItem> res = item_raw(index);
    return res;
}

inline size_t PrintSetting::count() const
{
    size_t res = count_raw();
    return res;
}

inline bool PrintSetting::syncWithMachine(const core::Ptr<Machine>& machine)
{
    bool res = syncWithMachine_raw(machine.get());
    return res;
}

inline bool PrintSetting::isCompatibleWithMachine(const core::Ptr<Machine>& machine)
{
    bool res = isCompatibleWithMachine_raw(machine.get());
    return res;
}

template <class OutputIterator> inline void PrintSetting::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_PRINTSETTING_API