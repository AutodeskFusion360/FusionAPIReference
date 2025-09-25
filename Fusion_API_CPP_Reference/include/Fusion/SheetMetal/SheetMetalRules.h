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
# ifdef __COMPILING_ADSK_FUSION_SHEETMETALRULES_CPP__
# define ADSK_FUSION_SHEETMETALRULES_API XI_EXPORT
# else
# define ADSK_FUSION_SHEETMETALRULES_API
# endif
#else
# define ADSK_FUSION_SHEETMETALRULES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class SheetMetalRule;
}}

namespace adsk { namespace fusion {

/// A collection of sheet metal rules.
class SheetMetalRules : public core::Base {
public:

    /// Function that returns the specified sheet metal rule using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SheetMetalRule> item(size_t index);

    /// The number of sheet metal rules in the collection.
    size_t count() const;

    /// Function that returns the specified sheet metal rule using the name of the rule.
    /// name : The name of the rule within the collection to return. This is the name seen in the Sheet Metal Rules dialog.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<SheetMetalRule> itemByName(const std::string& name);

    /// Creates a new sheet metal rule by copying an existing rule. The new rule
    /// can then be edited to define the rule characteristics you want.
    /// existingSheetMetalRule : The existing SheetMetalRule object you want to copy. This can be a rule from the
    /// library or the design.
    /// name : The name to assign to the new sheet metal rule. This name must be unique with respect to other
    /// sheet metal rules in the design or library it's created in.
    /// Returns the new SheetMetalRule object or will assert in the case where it fails.
    core::Ptr<SheetMetalRule> addByCopy(const core::Ptr<SheetMetalRule>& existingSheetMetalRule, const std::string& name);

    typedef SheetMetalRule iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SHEETMETALRULES_API static const char* classType();
    ADSK_FUSION_SHEETMETALRULES_API const char* objectType() const override;
    ADSK_FUSION_SHEETMETALRULES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SHEETMETALRULES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SheetMetalRule* item_raw(size_t index) = 0;
    virtual size_t count_raw() const = 0;
    virtual SheetMetalRule* itemByName_raw(const char* name) = 0;
    virtual SheetMetalRule* addByCopy_raw(SheetMetalRule* existingSheetMetalRule, const char* name) = 0;
};

// Inline wrappers

inline core::Ptr<SheetMetalRule> SheetMetalRules::item(size_t index)
{
    core::Ptr<SheetMetalRule> res = item_raw(index);
    return res;
}

inline size_t SheetMetalRules::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SheetMetalRule> SheetMetalRules::itemByName(const std::string& name)
{
    core::Ptr<SheetMetalRule> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<SheetMetalRule> SheetMetalRules::addByCopy(const core::Ptr<SheetMetalRule>& existingSheetMetalRule, const std::string& name)
{
    core::Ptr<SheetMetalRule> res = addByCopy_raw(existingSheetMetalRule.get(), name.c_str());
    return res;
}

template <class OutputIterator> inline void SheetMetalRules::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SHEETMETALRULES_API