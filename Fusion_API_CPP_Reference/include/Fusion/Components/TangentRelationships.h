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
# ifdef __COMPILING_ADSK_FUSION_TANGENTRELATIONSHIPS_CPP__
# define ADSK_FUSION_TANGENTRELATIONSHIPS_API XI_EXPORT
# else
# define ADSK_FUSION_TANGENTRELATIONSHIPS_API
# endif
#else
# define ADSK_FUSION_TANGENTRELATIONSHIPS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
    class TangentRelationship;
    class TangentRelationshipInput;
}}

namespace adsk { namespace fusion {

/// The collection of Tangent Relationships in this component. This provides access to all existing tangent relationships
/// and supports the ability to create new tangent relationships.
class TangentRelationships : public core::Base {
public:

    /// Function that returns the specified tangent relationship using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<TangentRelationship> item(size_t index);

    /// Creates a TangentRelationshipInput object, which is the API equivalent to the Tangent Relationship
    /// command dialog. You use methods and properties on the returned class to set the desired options,
    /// similar to providing input in the Tangent Relationship command dialog. Once the settings are defined
    /// you call the TangentRelationships.add method passing in the TangentRelationshipInput object to create
    /// the actual TangentRelationship.
    /// faceOne : A BRepFace object that will remain tangent to the set of specified tangent faces.
    /// tangentFaces : A single BRepFace object that is part of the body that faceOne will remain tangent to. All
    /// of the faces of the body will be used when computing the tangent relationship.
    /// Returns the TangentRelationshipInput object or null if the creation failed.
    core::Ptr<TangentRelationshipInput> createInput(const core::Ptr<BRepFace>& faceOne, const core::Ptr<core::Base>& tangentFaces);

    /// Creates a new tangent relationship between two components.
    /// input : The TangentRelationshipInput object that defines the geometry and various inputs that fully define a tangent
    /// relationship. A TangentRelationshipInput object is created using the TangentRelationships.createInput method.
    /// Returns the newly created TangentRelationship or null in the case of failure.
    core::Ptr<TangentRelationship> add(const core::Ptr<TangentRelationshipInput>& input);

    /// Returns number of TangentRelationship objects in the collection.
    size_t count() const;

    /// Function that returns the specified tangent relationship using a name.
    /// name : The name of the item within the collection to return.
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<TangentRelationship> itemByName(const std::string& name);

    typedef TangentRelationship iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_TANGENTRELATIONSHIPS_API static const char* classType();
    ADSK_FUSION_TANGENTRELATIONSHIPS_API const char* objectType() const override;
    ADSK_FUSION_TANGENTRELATIONSHIPS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TANGENTRELATIONSHIPS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual TangentRelationship* item_raw(size_t index) = 0;
    virtual TangentRelationshipInput* createInput_raw(BRepFace* faceOne, core::Base* tangentFaces) = 0;
    virtual TangentRelationship* add_raw(TangentRelationshipInput* input) = 0;
    virtual size_t count_raw() const = 0;
    virtual TangentRelationship* itemByName_raw(const char* name) = 0;
};

// Inline wrappers

inline core::Ptr<TangentRelationship> TangentRelationships::item(size_t index)
{
    core::Ptr<TangentRelationship> res = item_raw(index);
    return res;
}

inline core::Ptr<TangentRelationshipInput> TangentRelationships::createInput(const core::Ptr<BRepFace>& faceOne, const core::Ptr<core::Base>& tangentFaces)
{
    core::Ptr<TangentRelationshipInput> res = createInput_raw(faceOne.get(), tangentFaces.get());
    return res;
}

inline core::Ptr<TangentRelationship> TangentRelationships::add(const core::Ptr<TangentRelationshipInput>& input)
{
    core::Ptr<TangentRelationship> res = add_raw(input.get());
    return res;
}

inline size_t TangentRelationships::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<TangentRelationship> TangentRelationships::itemByName(const std::string& name)
{
    core::Ptr<TangentRelationship> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void TangentRelationships::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TANGENTRELATIONSHIPS_API