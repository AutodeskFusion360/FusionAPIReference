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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_STOCKMATERIAL_CPP__
# define ADSK_CAM_STOCKMATERIAL_API XI_EXPORT
# else
# define ADSK_CAM_STOCKMATERIAL_API
# endif
#else
# define ADSK_CAM_STOCKMATERIAL_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents a StockMaterial.
class StockMaterial : public core::Base {
public:

    /// Creates a StockMaterial object from given JSON string.
    /// json : The JSON should fully define the StockMaterial and contain all StockMaterial parameters.
    /// If the JSON contains more than one StockMaterial, only the first StockMaterial is loaded.
    /// Returns the newly created StockMaterial.
    static core::Ptr<StockMaterial> createFromJson(const std::string& json);

    /// Generates and returns a JSON string that contains a description of this StockMaterial.
    /// Returns a JSON string that contains a description of this StockMaterial.
    std::string toJson() const;

    /// Gets and sets the category of the stock material.
    std::string category() const;
    bool category(const std::string& value);

    /// Gets and sets the name of the stock material.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets a list of designators of the stock material.
    std::vector<std::string> designators() const;
    bool designators(const std::vector<std::string>& value);

    /// Get and sets the hardness of the stock materials.
    /// NOTE: the hardness can be NaN if not set. and user can set the hardness to NaN.
    double hardness() const;
    bool hardness(double value);

    ADSK_CAM_STOCKMATERIAL_API static const char* classType();
    ADSK_CAM_STOCKMATERIAL_API const char* objectType() const override;
    ADSK_CAM_STOCKMATERIAL_API void* queryInterface(const char* id) const override;
    ADSK_CAM_STOCKMATERIAL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_STOCKMATERIAL_API static StockMaterial* createFromJson_raw(const char* json);
    virtual char* toJson_raw() const = 0;
    virtual char* category_raw() const = 0;
    virtual bool category_raw(const char* value) = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual char** designators_raw(size_t& return_size) const = 0;
    virtual bool designators_raw(const char** value, size_t value_size) = 0;
    virtual double hardness_raw() const = 0;
    virtual bool hardness_raw(double value) = 0;
};

// Inline wrappers

inline core::Ptr<StockMaterial> StockMaterial::createFromJson(const std::string& json)
{
    core::Ptr<StockMaterial> res = createFromJson_raw(json.c_str());
    return res;
}

inline std::string StockMaterial::toJson() const
{
    std::string res;

    char* p= toJson_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string StockMaterial::category() const
{
    std::string res;

    char* p= category_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool StockMaterial::category(const std::string& value)
{
    return category_raw(value.c_str());
}

inline std::string StockMaterial::name() const
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

inline bool StockMaterial::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline std::vector<std::string> StockMaterial::designators() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= designators_raw(s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            core::DeallocateArray(pChar);
        }
        core::DeallocateArray(p);
    }
    return res;
}

inline bool StockMaterial::designators(const std::vector<std::string>& value)
{
    const char** value_ = value.empty() ? nullptr : (new const char*[value.size()]);
    for(size_t i = 0; i < value.size(); ++i)
    {
        value_[i] = value[i].c_str();
    }

    bool res = designators_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline double StockMaterial::hardness() const
{
    double res = hardness_raw();
    return res;
}

inline bool StockMaterial::hardness(double value)
{
    return hardness_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_STOCKMATERIAL_API