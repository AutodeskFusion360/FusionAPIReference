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
#include "PMIAnnotation.h"
#include <API/XInterface/Public/Core/CoreTypeDefs.h>
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMICREATEDANNOTATION_CPP__
# define ADSK_FUSION_PMICREATEDANNOTATION_API XI_EXPORT
# else
# define ADSK_FUSION_PMICREATEDANNOTATION_API
# endif
#else
# define ADSK_FUSION_PMICREATEDANNOTATION_API XI_IMPORT
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
/// A Base class representing a PMI created in Fusion.
class PMICreatedAnnotation : public PMIAnnotation {
public:

    /// Gets and sets whether the PMI text is perpendicular to the leader line or parallel to it.
    bool isPerpendicularLine() const;
    bool isPerpendicularLine(bool value);

    /// Gets and sets the horizontal alignment of the PMI text relative to its anchor point.
    /// 
    /// This determines how the text box is positioned relative to the text placement point.
    core::HorizontalAlignments horizontalAlignment() const;
    bool horizontalAlignment(core::HorizontalAlignments value);

    /// Gets and sets the vertical alignment of the PMI text relative to its anchor point.
    /// 
    /// This determines the vertical positioning of the text box relative to the calculated text placement point.
    core::VerticalAlignments verticalAlignment() const;
    bool verticalAlignment(core::VerticalAlignments value);

    /// Gets and sets the length of the leader line extension.
    /// 
    /// This value extends the leader line in the direction determined by the perpendicular setting.
    double leaderLineExtension() const;
    bool leaderLineExtension(double value);

    /// Gets the plane of the PMI.
    core::Ptr<core::Plane> plane() const;

    /// Gets and sets the point on the annotation plane where the PMI text is anchored.
    core::Ptr<core::Point3D> annotationTextPoint() const;
    bool annotationTextPoint(const core::Ptr<core::Point3D>& value);

    /// Gets the point on the annotation plane where the leader line meets the annotated geometry.
    core::Ptr<core::Point3D> annotationTargetPoint() const;

    /// Gets and sets the list of PMISegments used to define the PMI text.
    /// 
    /// The segments can be any combination of PMITextSegment, PMISymbolSegment and PMILineBreakSegment objects.
    /// 
    /// Changing this property will result in changing the displayed text of the PMI.
    std::vector<core::Ptr<PMISegment>> segments() const;
    bool segments(const std::vector<core::Ptr<PMISegment>>& value);

    /// This is a convenience property that provides the plain-text representation of the PMI text.
    /// It iterates through the segments and concatenates their text representation.
    std::string plainText() const;

    /// Gets and sets whether the original graphics/geometry of the PMI should be visible.
    /// Only supported for PMI that has been converted from imported data.
    bool isShowImportedGeometry() const;
    bool isShowImportedGeometry(bool value);

    /// Gets whether the created PMI was converted from an imported PMI and therefore whether it
    /// has original graphics/geometry that can be shown.
    bool hasImportedGeometry() const;

    ADSK_FUSION_PMICREATEDANNOTATION_API static const char* classType();
    ADSK_FUSION_PMICREATEDANNOTATION_API const char* objectType() const override;
    ADSK_FUSION_PMICREATEDANNOTATION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMICREATEDANNOTATION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isPerpendicularLine_raw() const = 0;
    virtual bool isPerpendicularLine_raw(bool value) = 0;
    virtual core::HorizontalAlignments horizontalAlignment_raw() const = 0;
    virtual bool horizontalAlignment_raw(core::HorizontalAlignments value) = 0;
    virtual core::VerticalAlignments verticalAlignment_raw() const = 0;
    virtual bool verticalAlignment_raw(core::VerticalAlignments value) = 0;
    virtual double leaderLineExtension_raw() const = 0;
    virtual bool leaderLineExtension_raw(double value) = 0;
    virtual core::Plane* plane_raw() const = 0;
    virtual core::Point3D* annotationTextPoint_raw() const = 0;
    virtual bool annotationTextPoint_raw(core::Point3D* value) = 0;
    virtual core::Point3D* annotationTargetPoint_raw() const = 0;
    virtual PMISegment** segments_raw(size_t& return_size) const = 0;
    virtual bool segments_raw(PMISegment** value, size_t value_size) = 0;
    virtual char* plainText_raw() const = 0;
    virtual bool isShowImportedGeometry_raw() const = 0;
    virtual bool isShowImportedGeometry_raw(bool value) = 0;
    virtual bool hasImportedGeometry_raw() const = 0;
    virtual void placeholderPMICreatedAnnotation0() {}
    virtual void placeholderPMICreatedAnnotation1() {}
    virtual void placeholderPMICreatedAnnotation2() {}
    virtual void placeholderPMICreatedAnnotation3() {}
    virtual void placeholderPMICreatedAnnotation4() {}
    virtual void placeholderPMICreatedAnnotation5() {}
    virtual void placeholderPMICreatedAnnotation6() {}
    virtual void placeholderPMICreatedAnnotation7() {}
    virtual void placeholderPMICreatedAnnotation8() {}
    virtual void placeholderPMICreatedAnnotation9() {}
    virtual void placeholderPMICreatedAnnotation10() {}
    virtual void placeholderPMICreatedAnnotation11() {}
    virtual void placeholderPMICreatedAnnotation12() {}
    virtual void placeholderPMICreatedAnnotation13() {}
    virtual void placeholderPMICreatedAnnotation14() {}
    virtual void placeholderPMICreatedAnnotation15() {}
    virtual void placeholderPMICreatedAnnotation16() {}
    virtual void placeholderPMICreatedAnnotation17() {}
    virtual void placeholderPMICreatedAnnotation18() {}
    virtual void placeholderPMICreatedAnnotation19() {}
    virtual void placeholderPMICreatedAnnotation20() {}
    virtual void placeholderPMICreatedAnnotation21() {}
    virtual void placeholderPMICreatedAnnotation22() {}
    virtual void placeholderPMICreatedAnnotation23() {}
    virtual void placeholderPMICreatedAnnotation24() {}
    virtual void placeholderPMICreatedAnnotation25() {}
    virtual void placeholderPMICreatedAnnotation26() {}
    virtual void placeholderPMICreatedAnnotation27() {}
    virtual void placeholderPMICreatedAnnotation28() {}
    virtual void placeholderPMICreatedAnnotation29() {}
    virtual void placeholderPMICreatedAnnotation30() {}
    virtual void placeholderPMICreatedAnnotation31() {}
    virtual void placeholderPMICreatedAnnotation32() {}
    virtual void placeholderPMICreatedAnnotation33() {}
    virtual void placeholderPMICreatedAnnotation34() {}
    virtual void placeholderPMICreatedAnnotation35() {}
    virtual void placeholderPMICreatedAnnotation36() {}
    virtual void placeholderPMICreatedAnnotation37() {}
    virtual void placeholderPMICreatedAnnotation38() {}
    virtual void placeholderPMICreatedAnnotation39() {}
    virtual void placeholderPMICreatedAnnotation40() {}
    virtual void placeholderPMICreatedAnnotation41() {}
    virtual void placeholderPMICreatedAnnotation42() {}
    virtual void placeholderPMICreatedAnnotation43() {}
    virtual void placeholderPMICreatedAnnotation44() {}
    virtual void placeholderPMICreatedAnnotation45() {}
    virtual void placeholderPMICreatedAnnotation46() {}
    virtual void placeholderPMICreatedAnnotation47() {}
    virtual void placeholderPMICreatedAnnotation48() {}
    virtual void placeholderPMICreatedAnnotation49() {}
    virtual void placeholderPMICreatedAnnotation50() {}
    virtual void placeholderPMICreatedAnnotation51() {}
    virtual void placeholderPMICreatedAnnotation52() {}
    virtual void placeholderPMICreatedAnnotation53() {}
    virtual void placeholderPMICreatedAnnotation54() {}
    virtual void placeholderPMICreatedAnnotation55() {}
    virtual void placeholderPMICreatedAnnotation56() {}
    virtual void placeholderPMICreatedAnnotation57() {}
    virtual void placeholderPMICreatedAnnotation58() {}
    virtual void placeholderPMICreatedAnnotation59() {}
    virtual void placeholderPMICreatedAnnotation60() {}
    virtual void placeholderPMICreatedAnnotation61() {}
    virtual void placeholderPMICreatedAnnotation62() {}
    virtual void placeholderPMICreatedAnnotation63() {}
    virtual void placeholderPMICreatedAnnotation64() {}
    virtual void placeholderPMICreatedAnnotation65() {}
    virtual void placeholderPMICreatedAnnotation66() {}
    virtual void placeholderPMICreatedAnnotation67() {}
    virtual void placeholderPMICreatedAnnotation68() {}
    virtual void placeholderPMICreatedAnnotation69() {}
    virtual void placeholderPMICreatedAnnotation70() {}
    virtual void placeholderPMICreatedAnnotation71() {}
    virtual void placeholderPMICreatedAnnotation72() {}
    virtual void placeholderPMICreatedAnnotation73() {}
    virtual void placeholderPMICreatedAnnotation74() {}
    virtual void placeholderPMICreatedAnnotation75() {}
    virtual void placeholderPMICreatedAnnotation76() {}
    virtual void placeholderPMICreatedAnnotation77() {}
    virtual void placeholderPMICreatedAnnotation78() {}
    virtual void placeholderPMICreatedAnnotation79() {}
    virtual void placeholderPMICreatedAnnotation80() {}
    virtual void placeholderPMICreatedAnnotation81() {}
    virtual void placeholderPMICreatedAnnotation82() {}
    virtual void placeholderPMICreatedAnnotation83() {}
    virtual void placeholderPMICreatedAnnotation84() {}
    virtual void placeholderPMICreatedAnnotation85() {}
    virtual void placeholderPMICreatedAnnotation86() {}
    virtual void placeholderPMICreatedAnnotation87() {}
    virtual void placeholderPMICreatedAnnotation88() {}
    virtual void placeholderPMICreatedAnnotation89() {}
    virtual void placeholderPMICreatedAnnotation90() {}
    virtual void placeholderPMICreatedAnnotation91() {}
    virtual void placeholderPMICreatedAnnotation92() {}
    virtual void placeholderPMICreatedAnnotation93() {}
    virtual void placeholderPMICreatedAnnotation94() {}
    virtual void placeholderPMICreatedAnnotation95() {}
    virtual void placeholderPMICreatedAnnotation96() {}
    virtual void placeholderPMICreatedAnnotation97() {}
    virtual void placeholderPMICreatedAnnotation98() {}
    virtual void placeholderPMICreatedAnnotation99() {}
    virtual void placeholderPMICreatedAnnotation100() {}
    virtual void placeholderPMICreatedAnnotation101() {}
    virtual void placeholderPMICreatedAnnotation102() {}
    virtual void placeholderPMICreatedAnnotation103() {}
    virtual void placeholderPMICreatedAnnotation104() {}
    virtual void placeholderPMICreatedAnnotation105() {}
    virtual void placeholderPMICreatedAnnotation106() {}
    virtual void placeholderPMICreatedAnnotation107() {}
    virtual void placeholderPMICreatedAnnotation108() {}
    virtual void placeholderPMICreatedAnnotation109() {}
};

// Inline wrappers

inline bool PMICreatedAnnotation::isPerpendicularLine() const
{
    bool res = isPerpendicularLine_raw();
    return res;
}

inline bool PMICreatedAnnotation::isPerpendicularLine(bool value)
{
    return isPerpendicularLine_raw(value);
}

inline core::HorizontalAlignments PMICreatedAnnotation::horizontalAlignment() const
{
    core::HorizontalAlignments res = horizontalAlignment_raw();
    return res;
}

inline bool PMICreatedAnnotation::horizontalAlignment(core::HorizontalAlignments value)
{
    return horizontalAlignment_raw(value);
}

inline core::VerticalAlignments PMICreatedAnnotation::verticalAlignment() const
{
    core::VerticalAlignments res = verticalAlignment_raw();
    return res;
}

inline bool PMICreatedAnnotation::verticalAlignment(core::VerticalAlignments value)
{
    return verticalAlignment_raw(value);
}

inline double PMICreatedAnnotation::leaderLineExtension() const
{
    double res = leaderLineExtension_raw();
    return res;
}

inline bool PMICreatedAnnotation::leaderLineExtension(double value)
{
    return leaderLineExtension_raw(value);
}

inline core::Ptr<core::Plane> PMICreatedAnnotation::plane() const
{
    core::Ptr<core::Plane> res = plane_raw();
    return res;
}

inline core::Ptr<core::Point3D> PMICreatedAnnotation::annotationTextPoint() const
{
    core::Ptr<core::Point3D> res = annotationTextPoint_raw();
    return res;
}

inline bool PMICreatedAnnotation::annotationTextPoint(const core::Ptr<core::Point3D>& value)
{
    return annotationTextPoint_raw(value.get());
}

inline core::Ptr<core::Point3D> PMICreatedAnnotation::annotationTargetPoint() const
{
    core::Ptr<core::Point3D> res = annotationTargetPoint_raw();
    return res;
}

inline std::vector<core::Ptr<PMISegment>> PMICreatedAnnotation::segments() const
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

inline bool PMICreatedAnnotation::segments(const std::vector<core::Ptr<PMISegment>>& value)
{
    PMISegment** value_ = new PMISegment*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = segments_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline std::string PMICreatedAnnotation::plainText() const
{
    std::string res;

    char* p= plainText_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PMICreatedAnnotation::isShowImportedGeometry() const
{
    bool res = isShowImportedGeometry_raw();
    return res;
}

inline bool PMICreatedAnnotation::isShowImportedGeometry(bool value)
{
    return isShowImportedGeometry_raw(value);
}

inline bool PMICreatedAnnotation::hasImportedGeometry() const
{
    bool res = hasImportedGeometry_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMICREATEDANNOTATION_API