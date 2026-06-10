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
#include "../../Core/CoreTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIINPUT_CPP__
# define ADSK_FUSION_PMIINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_PMIINPUT_API
# endif
#else
# define ADSK_FUSION_PMIINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Plane;
    class Point3D;
}}
namespace adsk { namespace fusion {
    class PMISegment;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A Base class for all PMI creation input types. The different types of PMI creation inputs are derived from this base class.
class PMIInput : public core::Base {
public:

    /// Controls whether the PMI text is perpendicular to the leader line or parallel to it.
    bool isPerpendicularLine() const;
    bool isPerpendicularLine(bool value);

    /// Controls the horizontal alignment of the PMI text relative to its anchor point.
    /// 
    /// This determines how the text box is positioned relative to the text placement point.
    core::HorizontalAlignments horizontalAlignment() const;
    bool horizontalAlignment(core::HorizontalAlignments value);

    /// Controls the vertical alignment of the PMI text relative to its anchor point.
    /// 
    /// This determines the vertical positioning of the text box relative to the calculated text placement point.
    core::VerticalAlignments verticalAlignment() const;
    bool verticalAlignment(core::VerticalAlignments value);

    /// Get the annotation plane of the PMI.
    /// 
    /// This plane determines the plane in which the PMI text and graphics are drawn.
    /// The plane is relative to the geometry's component space where the PMI is being created.
    core::Ptr<core::Plane> plane() const;

    /// Gets and sets the annotation point where the leader line starts.
    /// 
    /// This point must be a valid point on the annotation plane.
    /// The point is relative to the geometry's component space where the PMI is being created.
    core::Ptr<core::Point3D> annotationTextPoint() const;
    bool annotationTextPoint(const core::Ptr<core::Point3D>& value);

    /// Gets and sets the length of the leader line extension in cm.
    /// 
    /// This value extends the leader line in the direction determined by the perpendicular setting.
    /// 
    /// A positive value results in an obtuse angle between the leader line and the line to the geometry;
    /// A negative value results in an acute angle.
    double leaderLineExtension() const;
    bool leaderLineExtension(double value);

    /// Gets and sets the list of PMISegments used to define the PMI text.
    /// 
    /// The segments can be any combination of PMITextSegment, PMISymbolSegment and PMILineBreakSegment objects.
    /// 
    /// Changing this property will result in changing the displayed text of the PMI.
    std::vector<core::Ptr<PMISegment>> segments() const;
    bool segments(const std::vector<core::Ptr<PMISegment>>& value);

    /// Gets and sets whether the original graphics/geometry of the PMI should be visible.
    /// 
    /// Applicable only to PMI that has been converted.
    bool isShowImportedGeometry() const;
    bool isShowImportedGeometry(bool value);

    ADSK_FUSION_PMIINPUT_API static const char* classType();
    ADSK_FUSION_PMIINPUT_API const char* objectType() const override;
    ADSK_FUSION_PMIINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isPerpendicularLine_raw() const = 0;
    virtual bool isPerpendicularLine_raw(bool value) = 0;
    virtual core::HorizontalAlignments horizontalAlignment_raw() const = 0;
    virtual bool horizontalAlignment_raw(core::HorizontalAlignments value) = 0;
    virtual core::VerticalAlignments verticalAlignment_raw() const = 0;
    virtual bool verticalAlignment_raw(core::VerticalAlignments value) = 0;
    virtual core::Plane* plane_raw() const = 0;
    virtual core::Point3D* annotationTextPoint_raw() const = 0;
    virtual bool annotationTextPoint_raw(core::Point3D* value) = 0;
    virtual double leaderLineExtension_raw() const = 0;
    virtual bool leaderLineExtension_raw(double value) = 0;
    virtual PMISegment** segments_raw(size_t& return_size) const = 0;
    virtual bool segments_raw(PMISegment** value, size_t value_size) = 0;
    virtual bool isShowImportedGeometry_raw() const = 0;
    virtual bool isShowImportedGeometry_raw(bool value) = 0;
    virtual void placeholderPMIInput0() {}
    virtual void placeholderPMIInput1() {}
    virtual void placeholderPMIInput2() {}
    virtual void placeholderPMIInput3() {}
    virtual void placeholderPMIInput4() {}
    virtual void placeholderPMIInput5() {}
    virtual void placeholderPMIInput6() {}
    virtual void placeholderPMIInput7() {}
    virtual void placeholderPMIInput8() {}
    virtual void placeholderPMIInput9() {}
    virtual void placeholderPMIInput10() {}
    virtual void placeholderPMIInput11() {}
    virtual void placeholderPMIInput12() {}
    virtual void placeholderPMIInput13() {}
    virtual void placeholderPMIInput14() {}
    virtual void placeholderPMIInput15() {}
    virtual void placeholderPMIInput16() {}
    virtual void placeholderPMIInput17() {}
    virtual void placeholderPMIInput18() {}
    virtual void placeholderPMIInput19() {}
    virtual void placeholderPMIInput20() {}
    virtual void placeholderPMIInput21() {}
    virtual void placeholderPMIInput22() {}
    virtual void placeholderPMIInput23() {}
    virtual void placeholderPMIInput24() {}
    virtual void placeholderPMIInput25() {}
    virtual void placeholderPMIInput26() {}
    virtual void placeholderPMIInput27() {}
    virtual void placeholderPMIInput28() {}
    virtual void placeholderPMIInput29() {}
    virtual void placeholderPMIInput30() {}
    virtual void placeholderPMIInput31() {}
    virtual void placeholderPMIInput32() {}
    virtual void placeholderPMIInput33() {}
    virtual void placeholderPMIInput34() {}
    virtual void placeholderPMIInput35() {}
    virtual void placeholderPMIInput36() {}
    virtual void placeholderPMIInput37() {}
    virtual void placeholderPMIInput38() {}
    virtual void placeholderPMIInput39() {}
    virtual void placeholderPMIInput40() {}
    virtual void placeholderPMIInput41() {}
    virtual void placeholderPMIInput42() {}
    virtual void placeholderPMIInput43() {}
    virtual void placeholderPMIInput44() {}
    virtual void placeholderPMIInput45() {}
    virtual void placeholderPMIInput46() {}
    virtual void placeholderPMIInput47() {}
    virtual void placeholderPMIInput48() {}
    virtual void placeholderPMIInput49() {}
    virtual void placeholderPMIInput50() {}
    virtual void placeholderPMIInput51() {}
    virtual void placeholderPMIInput52() {}
    virtual void placeholderPMIInput53() {}
    virtual void placeholderPMIInput54() {}
    virtual void placeholderPMIInput55() {}
    virtual void placeholderPMIInput56() {}
    virtual void placeholderPMIInput57() {}
    virtual void placeholderPMIInput58() {}
    virtual void placeholderPMIInput59() {}
    virtual void placeholderPMIInput60() {}
    virtual void placeholderPMIInput61() {}
    virtual void placeholderPMIInput62() {}
    virtual void placeholderPMIInput63() {}
    virtual void placeholderPMIInput64() {}
    virtual void placeholderPMIInput65() {}
    virtual void placeholderPMIInput66() {}
    virtual void placeholderPMIInput67() {}
    virtual void placeholderPMIInput68() {}
    virtual void placeholderPMIInput69() {}
    virtual void placeholderPMIInput70() {}
    virtual void placeholderPMIInput71() {}
    virtual void placeholderPMIInput72() {}
    virtual void placeholderPMIInput73() {}
    virtual void placeholderPMIInput74() {}
    virtual void placeholderPMIInput75() {}
    virtual void placeholderPMIInput76() {}
    virtual void placeholderPMIInput77() {}
    virtual void placeholderPMIInput78() {}
    virtual void placeholderPMIInput79() {}
    virtual void placeholderPMIInput80() {}
    virtual void placeholderPMIInput81() {}
    virtual void placeholderPMIInput82() {}
    virtual void placeholderPMIInput83() {}
    virtual void placeholderPMIInput84() {}
    virtual void placeholderPMIInput85() {}
    virtual void placeholderPMIInput86() {}
    virtual void placeholderPMIInput87() {}
    virtual void placeholderPMIInput88() {}
    virtual void placeholderPMIInput89() {}
    virtual void placeholderPMIInput90() {}
    virtual void placeholderPMIInput91() {}
    virtual void placeholderPMIInput92() {}
    virtual void placeholderPMIInput93() {}
    virtual void placeholderPMIInput94() {}
    virtual void placeholderPMIInput95() {}
    virtual void placeholderPMIInput96() {}
    virtual void placeholderPMIInput97() {}
    virtual void placeholderPMIInput98() {}
    virtual void placeholderPMIInput99() {}
    virtual void placeholderPMIInput100() {}
    virtual void placeholderPMIInput101() {}
    virtual void placeholderPMIInput102() {}
    virtual void placeholderPMIInput103() {}
    virtual void placeholderPMIInput104() {}
    virtual void placeholderPMIInput105() {}
    virtual void placeholderPMIInput106() {}
    virtual void placeholderPMIInput107() {}
    virtual void placeholderPMIInput108() {}
    virtual void placeholderPMIInput109() {}
    virtual void placeholderPMIInput110() {}
    virtual void placeholderPMIInput111() {}
    virtual void placeholderPMIInput112() {}
};

// Inline wrappers

inline bool PMIInput::isPerpendicularLine() const
{
    bool res = isPerpendicularLine_raw();
    return res;
}

inline bool PMIInput::isPerpendicularLine(bool value)
{
    return isPerpendicularLine_raw(value);
}

inline core::HorizontalAlignments PMIInput::horizontalAlignment() const
{
    core::HorizontalAlignments res = horizontalAlignment_raw();
    return res;
}

inline bool PMIInput::horizontalAlignment(core::HorizontalAlignments value)
{
    return horizontalAlignment_raw(value);
}

inline core::VerticalAlignments PMIInput::verticalAlignment() const
{
    core::VerticalAlignments res = verticalAlignment_raw();
    return res;
}

inline bool PMIInput::verticalAlignment(core::VerticalAlignments value)
{
    return verticalAlignment_raw(value);
}

inline core::Ptr<core::Plane> PMIInput::plane() const
{
    core::Ptr<core::Plane> res = plane_raw();
    return res;
}

inline core::Ptr<core::Point3D> PMIInput::annotationTextPoint() const
{
    core::Ptr<core::Point3D> res = annotationTextPoint_raw();
    return res;
}

inline bool PMIInput::annotationTextPoint(const core::Ptr<core::Point3D>& value)
{
    return annotationTextPoint_raw(value.get());
}

inline double PMIInput::leaderLineExtension() const
{
    double res = leaderLineExtension_raw();
    return res;
}

inline bool PMIInput::leaderLineExtension(double value)
{
    return leaderLineExtension_raw(value);
}

inline std::vector<core::Ptr<PMISegment>> PMIInput::segments() const
{
    std::vector<core::Ptr<PMISegment>> res;
    size_t s;

    PMISegment** p= segments_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PMIInput::segments(const std::vector<core::Ptr<PMISegment>>& value)
{
    PMISegment** value_ = new PMISegment*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = segments_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool PMIInput::isShowImportedGeometry() const
{
    bool res = isShowImportedGeometry_raw();
    return res;
}

inline bool PMIInput::isShowImportedGeometry(bool value)
{
    return isShowImportedGeometry_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIINPUT_API