/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class RenderOptions!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILERENDEROPTIONSINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>


#include <OSGGL.h>   // PolygonMode default header


#include "OSGRenderOptionsBase.h"
#include "OSGRenderOptions.h"

OSG_USING_NAMESPACE

// Field descriptions

/*! \var bool RenderOptionsBase::_sfStatistic
    
*/
/*! \var GLenum RenderOptionsBase::_sfPolygonMode
    
*/
/*! \var bool RenderOptionsBase::_sfTwoSidedLighting
    
*/
/*! \var bool RenderOptionsBase::_sfSpecTexLighting
    
*/
/*! \var bool RenderOptionsBase::_sfSortTrans
    
*/
/*! \var bool RenderOptionsBase::_sfZWriteTrans
    
*/
/*! \var bool RenderOptionsBase::_sfLocalLights
    
*/
/*! \var bool RenderOptionsBase::_sfCorrectTwoSidedLighting
    
*/
/*! \var bool RenderOptionsBase::_sfOcclusionCulling
    
*/
/*! \var bool RenderOptionsBase::_sfAntialiasing
    
*/
/*! \var Real32 RenderOptionsBase::_sfAntialiasingDistance
    
*/
/*! \var Real32 RenderOptionsBase::_sfAntialiasingScale
    
*/
/*! \var UInt32 RenderOptionsBase::_sfAntialiasingTrigger
    
*/
/*! \var bool RenderOptionsBase::_sfBackfaceCulling
    
*/
/*! \var bool RenderOptionsBase::_sfSmallFeatureCulling
    
*/
/*! \var Real32 RenderOptionsBase::_sfSmallFeaturePixels
    
*/
/*! \var UInt32 RenderOptionsBase::_sfSmallFeatureThreshold
    
*/

void RenderOptionsBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL; 


#ifdef OSG_1_COMPAT
    typedef const SFBool *(RenderOptionsBase::*GetSFStatisticF)(void) const;

    GetSFStatisticF GetSFStatistic = &RenderOptionsBase::getSFStatistic;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(), 
        "statistic", 
        StatisticFieldId, StatisticFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFStatistic),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFStatistic));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFStatistic));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFGLenum *(RenderOptionsBase::*GetSFPolygonModeF)(void) const;

    GetSFPolygonModeF GetSFPolygonMode = &RenderOptionsBase::getSFPolygonMode;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(), 
        "polygonMode", 
        PolygonModeFieldId, PolygonModeFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFPolygonMode),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFPolygonMode));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFPolygonMode));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(RenderOptionsBase::*GetSFTwoSidedLightingF)(void) const;

    GetSFTwoSidedLightingF GetSFTwoSidedLighting = &RenderOptionsBase::getSFTwoSidedLighting;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(), 
        "twoSidedLighting", 
        TwoSidedLightingFieldId, TwoSidedLightingFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFTwoSidedLighting),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFTwoSidedLighting));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFTwoSidedLighting));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(RenderOptionsBase::*GetSFSpecTexLightingF)(void) const;

    GetSFSpecTexLightingF GetSFSpecTexLighting = &RenderOptionsBase::getSFSpecTexLighting;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(), 
        "specTexLighting", 
        SpecTexLightingFieldId, SpecTexLightingFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFSpecTexLighting),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFSpecTexLighting));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFSpecTexLighting));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(RenderOptionsBase::*GetSFSortTransF)(void) const;

    GetSFSortTransF GetSFSortTrans = &RenderOptionsBase::getSFSortTrans;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(), 
        "sortTrans", 
        SortTransFieldId, SortTransFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFSortTrans),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFSortTrans));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFSortTrans));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(RenderOptionsBase::*GetSFZWriteTransF)(void) const;

    GetSFZWriteTransF GetSFZWriteTrans = &RenderOptionsBase::getSFZWriteTrans;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(), 
        "zWriteTrans", 
        ZWriteTransFieldId, ZWriteTransFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFZWriteTrans),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFZWriteTrans));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFZWriteTrans));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(RenderOptionsBase::*GetSFLocalLightsF)(void) const;

    GetSFLocalLightsF GetSFLocalLights = &RenderOptionsBase::getSFLocalLights;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(), 
        "localLights", 
        LocalLightsFieldId, LocalLightsFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFLocalLights),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFLocalLights));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFLocalLights));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(RenderOptionsBase::*GetSFCorrectTwoSidedLightingF)(void) const;

    GetSFCorrectTwoSidedLightingF GetSFCorrectTwoSidedLighting = &RenderOptionsBase::getSFCorrectTwoSidedLighting;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(), 
        "correctTwoSidedLighting", 
        CorrectTwoSidedLightingFieldId, CorrectTwoSidedLightingFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFCorrectTwoSidedLighting),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFCorrectTwoSidedLighting));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFCorrectTwoSidedLighting));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(RenderOptionsBase::*GetSFOcclusionCullingF)(void) const;

    GetSFOcclusionCullingF GetSFOcclusionCulling = &RenderOptionsBase::getSFOcclusionCulling;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(), 
        "occlusionCulling", 
        OcclusionCullingFieldId, OcclusionCullingFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFOcclusionCulling),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFOcclusionCulling));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFOcclusionCulling));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(RenderOptionsBase::*GetSFAntialiasingF)(void) const;

    GetSFAntialiasingF GetSFAntialiasing = &RenderOptionsBase::getSFAntialiasing;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(), 
        "antialiasing", 
        AntialiasingFieldId, AntialiasingFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFAntialiasing),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAntialiasing));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFAntialiasing));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal32 *(RenderOptionsBase::*GetSFAntialiasingDistanceF)(void) const;

    GetSFAntialiasingDistanceF GetSFAntialiasingDistance = &RenderOptionsBase::getSFAntialiasingDistance;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(), 
        "antialiasingDistance", 
        AntialiasingDistanceFieldId, AntialiasingDistanceFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFAntialiasingDistance),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAntialiasingDistance));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFAntialiasingDistance));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal32 *(RenderOptionsBase::*GetSFAntialiasingScaleF)(void) const;

    GetSFAntialiasingScaleF GetSFAntialiasingScale = &RenderOptionsBase::getSFAntialiasingScale;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(), 
        "antialiasingScale", 
        AntialiasingScaleFieldId, AntialiasingScaleFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFAntialiasingScale),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAntialiasingScale));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFAntialiasingScale));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(RenderOptionsBase::*GetSFAntialiasingTriggerF)(void) const;

    GetSFAntialiasingTriggerF GetSFAntialiasingTrigger = &RenderOptionsBase::getSFAntialiasingTrigger;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(), 
        "antialiasingTrigger", 
        AntialiasingTriggerFieldId, AntialiasingTriggerFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFAntialiasingTrigger),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAntialiasingTrigger));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFAntialiasingTrigger));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(RenderOptionsBase::*GetSFBackfaceCullingF)(void) const;

    GetSFBackfaceCullingF GetSFBackfaceCulling = &RenderOptionsBase::getSFBackfaceCulling;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(), 
        "backfaceCulling", 
        BackfaceCullingFieldId, BackfaceCullingFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFBackfaceCulling),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBackfaceCulling));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFBackfaceCulling));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(RenderOptionsBase::*GetSFSmallFeatureCullingF)(void) const;

    GetSFSmallFeatureCullingF GetSFSmallFeatureCulling = &RenderOptionsBase::getSFSmallFeatureCulling;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(), 
        "smallFeatureCulling", 
        SmallFeatureCullingFieldId, SmallFeatureCullingFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFSmallFeatureCulling),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFSmallFeatureCulling));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFSmallFeatureCulling));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal32 *(RenderOptionsBase::*GetSFSmallFeaturePixelsF)(void) const;

    GetSFSmallFeaturePixelsF GetSFSmallFeaturePixels = &RenderOptionsBase::getSFSmallFeaturePixels;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(), 
        "smallFeaturePixels", 
        SmallFeaturePixelsFieldId, SmallFeaturePixelsFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFSmallFeaturePixels),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFSmallFeaturePixels));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFSmallFeaturePixels));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(RenderOptionsBase::*GetSFSmallFeatureThresholdF)(void) const;

    GetSFSmallFeatureThresholdF GetSFSmallFeatureThreshold = &RenderOptionsBase::getSFSmallFeatureThreshold;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(), 
        "smallFeatureThreshold", 
        SmallFeatureThresholdFieldId, SmallFeatureThresholdFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderOptionsBase::editSFSmallFeatureThreshold),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFSmallFeatureThreshold));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderOptionsBase::getSFSmallFeatureThreshold));
#endif

    oType.addInitialDesc(pDesc);
}


RenderOptionsBase::TypeObject RenderOptionsBase::_type(true,
    RenderOptionsBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &RenderOptionsBase::createEmpty,
    RenderOptions::initMethod,
    (InitalInsertDescFunc) &RenderOptionsBase::classDescInserter,
    false);

/*------------------------------ get -----------------------------------*/

FieldContainerType &RenderOptionsBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &RenderOptionsBase::getType(void) const 
{
    return _type;
} 

UInt32 RenderOptionsBase::getContainerSize(void) const 
{ 
    return sizeof(RenderOptions); 
}

/*------------------------- decorator get ------------------------------*/


SFBool *RenderOptionsBase::editSFStatistic(void)
{
    editSField(StatisticFieldMask);

    return &_sfStatistic;
}

const SFBool *RenderOptionsBase::getSFStatistic(void) const
{
    return &_sfStatistic;
}

#ifdef OSG_1_COMPAT
SFBool *RenderOptionsBase::getSFStatistic(void)
{
    return this->editSFStatistic();
}
#endif

SFGLenum *RenderOptionsBase::editSFPolygonMode(void)
{
    editSField(PolygonModeFieldMask);

    return &_sfPolygonMode;
}

const SFGLenum *RenderOptionsBase::getSFPolygonMode(void) const
{
    return &_sfPolygonMode;
}

#ifdef OSG_1_COMPAT
SFGLenum *RenderOptionsBase::getSFPolygonMode(void)
{
    return this->editSFPolygonMode();
}
#endif

SFBool *RenderOptionsBase::editSFTwoSidedLighting(void)
{
    editSField(TwoSidedLightingFieldMask);

    return &_sfTwoSidedLighting;
}

const SFBool *RenderOptionsBase::getSFTwoSidedLighting(void) const
{
    return &_sfTwoSidedLighting;
}

#ifdef OSG_1_COMPAT
SFBool *RenderOptionsBase::getSFTwoSidedLighting(void)
{
    return this->editSFTwoSidedLighting();
}
#endif

SFBool *RenderOptionsBase::editSFSpecTexLighting(void)
{
    editSField(SpecTexLightingFieldMask);

    return &_sfSpecTexLighting;
}

const SFBool *RenderOptionsBase::getSFSpecTexLighting(void) const
{
    return &_sfSpecTexLighting;
}

#ifdef OSG_1_COMPAT
SFBool *RenderOptionsBase::getSFSpecTexLighting(void)
{
    return this->editSFSpecTexLighting();
}
#endif

SFBool *RenderOptionsBase::editSFSortTrans(void)
{
    editSField(SortTransFieldMask);

    return &_sfSortTrans;
}

const SFBool *RenderOptionsBase::getSFSortTrans(void) const
{
    return &_sfSortTrans;
}

#ifdef OSG_1_COMPAT
SFBool *RenderOptionsBase::getSFSortTrans(void)
{
    return this->editSFSortTrans();
}
#endif

SFBool *RenderOptionsBase::editSFZWriteTrans(void)
{
    editSField(ZWriteTransFieldMask);

    return &_sfZWriteTrans;
}

const SFBool *RenderOptionsBase::getSFZWriteTrans(void) const
{
    return &_sfZWriteTrans;
}

#ifdef OSG_1_COMPAT
SFBool *RenderOptionsBase::getSFZWriteTrans(void)
{
    return this->editSFZWriteTrans();
}
#endif

SFBool *RenderOptionsBase::editSFLocalLights(void)
{
    editSField(LocalLightsFieldMask);

    return &_sfLocalLights;
}

const SFBool *RenderOptionsBase::getSFLocalLights(void) const
{
    return &_sfLocalLights;
}

#ifdef OSG_1_COMPAT
SFBool *RenderOptionsBase::getSFLocalLights(void)
{
    return this->editSFLocalLights();
}
#endif

SFBool *RenderOptionsBase::editSFCorrectTwoSidedLighting(void)
{
    editSField(CorrectTwoSidedLightingFieldMask);

    return &_sfCorrectTwoSidedLighting;
}

const SFBool *RenderOptionsBase::getSFCorrectTwoSidedLighting(void) const
{
    return &_sfCorrectTwoSidedLighting;
}

#ifdef OSG_1_COMPAT
SFBool *RenderOptionsBase::getSFCorrectTwoSidedLighting(void)
{
    return this->editSFCorrectTwoSidedLighting();
}
#endif

SFBool *RenderOptionsBase::editSFOcclusionCulling(void)
{
    editSField(OcclusionCullingFieldMask);

    return &_sfOcclusionCulling;
}

const SFBool *RenderOptionsBase::getSFOcclusionCulling(void) const
{
    return &_sfOcclusionCulling;
}

#ifdef OSG_1_COMPAT
SFBool *RenderOptionsBase::getSFOcclusionCulling(void)
{
    return this->editSFOcclusionCulling();
}
#endif

SFBool *RenderOptionsBase::editSFAntialiasing(void)
{
    editSField(AntialiasingFieldMask);

    return &_sfAntialiasing;
}

const SFBool *RenderOptionsBase::getSFAntialiasing(void) const
{
    return &_sfAntialiasing;
}

#ifdef OSG_1_COMPAT
SFBool *RenderOptionsBase::getSFAntialiasing(void)
{
    return this->editSFAntialiasing();
}
#endif

SFReal32 *RenderOptionsBase::editSFAntialiasingDistance(void)
{
    editSField(AntialiasingDistanceFieldMask);

    return &_sfAntialiasingDistance;
}

const SFReal32 *RenderOptionsBase::getSFAntialiasingDistance(void) const
{
    return &_sfAntialiasingDistance;
}

#ifdef OSG_1_COMPAT
SFReal32 *RenderOptionsBase::getSFAntialiasingDistance(void)
{
    return this->editSFAntialiasingDistance();
}
#endif

SFReal32 *RenderOptionsBase::editSFAntialiasingScale(void)
{
    editSField(AntialiasingScaleFieldMask);

    return &_sfAntialiasingScale;
}

const SFReal32 *RenderOptionsBase::getSFAntialiasingScale(void) const
{
    return &_sfAntialiasingScale;
}

#ifdef OSG_1_COMPAT
SFReal32 *RenderOptionsBase::getSFAntialiasingScale(void)
{
    return this->editSFAntialiasingScale();
}
#endif

SFUInt32 *RenderOptionsBase::editSFAntialiasingTrigger(void)
{
    editSField(AntialiasingTriggerFieldMask);

    return &_sfAntialiasingTrigger;
}

const SFUInt32 *RenderOptionsBase::getSFAntialiasingTrigger(void) const
{
    return &_sfAntialiasingTrigger;
}

#ifdef OSG_1_COMPAT
SFUInt32 *RenderOptionsBase::getSFAntialiasingTrigger(void)
{
    return this->editSFAntialiasingTrigger();
}
#endif

SFBool *RenderOptionsBase::editSFBackfaceCulling(void)
{
    editSField(BackfaceCullingFieldMask);

    return &_sfBackfaceCulling;
}

const SFBool *RenderOptionsBase::getSFBackfaceCulling(void) const
{
    return &_sfBackfaceCulling;
}

#ifdef OSG_1_COMPAT
SFBool *RenderOptionsBase::getSFBackfaceCulling(void)
{
    return this->editSFBackfaceCulling();
}
#endif

SFBool *RenderOptionsBase::editSFSmallFeatureCulling(void)
{
    editSField(SmallFeatureCullingFieldMask);

    return &_sfSmallFeatureCulling;
}

const SFBool *RenderOptionsBase::getSFSmallFeatureCulling(void) const
{
    return &_sfSmallFeatureCulling;
}

#ifdef OSG_1_COMPAT
SFBool *RenderOptionsBase::getSFSmallFeatureCulling(void)
{
    return this->editSFSmallFeatureCulling();
}
#endif

SFReal32 *RenderOptionsBase::editSFSmallFeaturePixels(void)
{
    editSField(SmallFeaturePixelsFieldMask);

    return &_sfSmallFeaturePixels;
}

const SFReal32 *RenderOptionsBase::getSFSmallFeaturePixels(void) const
{
    return &_sfSmallFeaturePixels;
}

#ifdef OSG_1_COMPAT
SFReal32 *RenderOptionsBase::getSFSmallFeaturePixels(void)
{
    return this->editSFSmallFeaturePixels();
}
#endif

SFUInt32 *RenderOptionsBase::editSFSmallFeatureThreshold(void)
{
    editSField(SmallFeatureThresholdFieldMask);

    return &_sfSmallFeatureThreshold;
}

const SFUInt32 *RenderOptionsBase::getSFSmallFeatureThreshold(void) const
{
    return &_sfSmallFeatureThreshold;
}

#ifdef OSG_1_COMPAT
SFUInt32 *RenderOptionsBase::getSFSmallFeatureThreshold(void)
{
    return this->editSFSmallFeatureThreshold();
}
#endif



/*------------------------------ access -----------------------------------*/

UInt32 RenderOptionsBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (StatisticFieldMask & whichField))
    {
        returnValue += _sfStatistic.getBinSize();
    }
    if(FieldBits::NoField != (PolygonModeFieldMask & whichField))
    {
        returnValue += _sfPolygonMode.getBinSize();
    }
    if(FieldBits::NoField != (TwoSidedLightingFieldMask & whichField))
    {
        returnValue += _sfTwoSidedLighting.getBinSize();
    }
    if(FieldBits::NoField != (SpecTexLightingFieldMask & whichField))
    {
        returnValue += _sfSpecTexLighting.getBinSize();
    }
    if(FieldBits::NoField != (SortTransFieldMask & whichField))
    {
        returnValue += _sfSortTrans.getBinSize();
    }
    if(FieldBits::NoField != (ZWriteTransFieldMask & whichField))
    {
        returnValue += _sfZWriteTrans.getBinSize();
    }
    if(FieldBits::NoField != (LocalLightsFieldMask & whichField))
    {
        returnValue += _sfLocalLights.getBinSize();
    }
    if(FieldBits::NoField != (CorrectTwoSidedLightingFieldMask & whichField))
    {
        returnValue += _sfCorrectTwoSidedLighting.getBinSize();
    }
    if(FieldBits::NoField != (OcclusionCullingFieldMask & whichField))
    {
        returnValue += _sfOcclusionCulling.getBinSize();
    }
    if(FieldBits::NoField != (AntialiasingFieldMask & whichField))
    {
        returnValue += _sfAntialiasing.getBinSize();
    }
    if(FieldBits::NoField != (AntialiasingDistanceFieldMask & whichField))
    {
        returnValue += _sfAntialiasingDistance.getBinSize();
    }
    if(FieldBits::NoField != (AntialiasingScaleFieldMask & whichField))
    {
        returnValue += _sfAntialiasingScale.getBinSize();
    }
    if(FieldBits::NoField != (AntialiasingTriggerFieldMask & whichField))
    {
        returnValue += _sfAntialiasingTrigger.getBinSize();
    }
    if(FieldBits::NoField != (BackfaceCullingFieldMask & whichField))
    {
        returnValue += _sfBackfaceCulling.getBinSize();
    }
    if(FieldBits::NoField != (SmallFeatureCullingFieldMask & whichField))
    {
        returnValue += _sfSmallFeatureCulling.getBinSize();
    }
    if(FieldBits::NoField != (SmallFeaturePixelsFieldMask & whichField))
    {
        returnValue += _sfSmallFeaturePixels.getBinSize();
    }
    if(FieldBits::NoField != (SmallFeatureThresholdFieldMask & whichField))
    {
        returnValue += _sfSmallFeatureThreshold.getBinSize();
    }

    return returnValue;
}

void RenderOptionsBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (StatisticFieldMask & whichField))
    {
        _sfStatistic.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PolygonModeFieldMask & whichField))
    {
        _sfPolygonMode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TwoSidedLightingFieldMask & whichField))
    {
        _sfTwoSidedLighting.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpecTexLightingFieldMask & whichField))
    {
        _sfSpecTexLighting.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SortTransFieldMask & whichField))
    {
        _sfSortTrans.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ZWriteTransFieldMask & whichField))
    {
        _sfZWriteTrans.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LocalLightsFieldMask & whichField))
    {
        _sfLocalLights.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CorrectTwoSidedLightingFieldMask & whichField))
    {
        _sfCorrectTwoSidedLighting.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OcclusionCullingFieldMask & whichField))
    {
        _sfOcclusionCulling.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AntialiasingFieldMask & whichField))
    {
        _sfAntialiasing.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AntialiasingDistanceFieldMask & whichField))
    {
        _sfAntialiasingDistance.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AntialiasingScaleFieldMask & whichField))
    {
        _sfAntialiasingScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AntialiasingTriggerFieldMask & whichField))
    {
        _sfAntialiasingTrigger.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackfaceCullingFieldMask & whichField))
    {
        _sfBackfaceCulling.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SmallFeatureCullingFieldMask & whichField))
    {
        _sfSmallFeatureCulling.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SmallFeaturePixelsFieldMask & whichField))
    {
        _sfSmallFeaturePixels.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SmallFeatureThresholdFieldMask & whichField))
    {
        _sfSmallFeatureThreshold.copyToBin(pMem);
    }
}

void RenderOptionsBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (StatisticFieldMask & whichField))
    {
        _sfStatistic.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PolygonModeFieldMask & whichField))
    {
        _sfPolygonMode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TwoSidedLightingFieldMask & whichField))
    {
        _sfTwoSidedLighting.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpecTexLightingFieldMask & whichField))
    {
        _sfSpecTexLighting.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SortTransFieldMask & whichField))
    {
        _sfSortTrans.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ZWriteTransFieldMask & whichField))
    {
        _sfZWriteTrans.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LocalLightsFieldMask & whichField))
    {
        _sfLocalLights.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CorrectTwoSidedLightingFieldMask & whichField))
    {
        _sfCorrectTwoSidedLighting.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OcclusionCullingFieldMask & whichField))
    {
        _sfOcclusionCulling.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AntialiasingFieldMask & whichField))
    {
        _sfAntialiasing.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AntialiasingDistanceFieldMask & whichField))
    {
        _sfAntialiasingDistance.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AntialiasingScaleFieldMask & whichField))
    {
        _sfAntialiasingScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AntialiasingTriggerFieldMask & whichField))
    {
        _sfAntialiasingTrigger.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackfaceCullingFieldMask & whichField))
    {
        _sfBackfaceCulling.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SmallFeatureCullingFieldMask & whichField))
    {
        _sfSmallFeatureCulling.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SmallFeaturePixelsFieldMask & whichField))
    {
        _sfSmallFeaturePixels.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SmallFeatureThresholdFieldMask & whichField))
    {
        _sfSmallFeatureThreshold.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
RenderOptionsPtr RenderOptionsBase::createEmpty(void) 
{ 
    RenderOptionsPtr returnValue; 
    
    newPtr<RenderOptions>(returnValue); 

    return returnValue; 
}

FieldContainerPtr RenderOptionsBase::shallowCopy(void) const 
{ 
    RenderOptionsPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const RenderOptions *>(this)); 

    return returnValue; 
}



/*------------------------- constructors ----------------------------------*/

RenderOptionsBase::RenderOptionsBase(void) :
    Inherited(),
    _sfStatistic(bool(false)),
    _sfPolygonMode(GLenum(GL_FILL)),
    _sfTwoSidedLighting(bool(false)),
    _sfSpecTexLighting(bool(false)),
    _sfSortTrans(bool(true)),
    _sfZWriteTrans(bool(true)),
    _sfLocalLights(bool(true)),
    _sfCorrectTwoSidedLighting(bool(true)),
    _sfOcclusionCulling(bool(false)),
    _sfAntialiasing(bool(false)),
    _sfAntialiasingDistance(Real32(0.2)),
    _sfAntialiasingScale(Real32(2.0)),
    _sfAntialiasingTrigger(UInt32(0)),
    _sfBackfaceCulling(bool(false)),
    _sfSmallFeatureCulling(),
    _sfSmallFeaturePixels(),
    _sfSmallFeatureThreshold()
{
}

RenderOptionsBase::RenderOptionsBase(const RenderOptionsBase &source) :
    Inherited(source),
    _sfStatistic(source._sfStatistic),
    _sfPolygonMode(source._sfPolygonMode),
    _sfTwoSidedLighting(source._sfTwoSidedLighting),
    _sfSpecTexLighting(source._sfSpecTexLighting),
    _sfSortTrans(source._sfSortTrans),
    _sfZWriteTrans(source._sfZWriteTrans),
    _sfLocalLights(source._sfLocalLights),
    _sfCorrectTwoSidedLighting(source._sfCorrectTwoSidedLighting),
    _sfOcclusionCulling(source._sfOcclusionCulling),
    _sfAntialiasing(source._sfAntialiasing),
    _sfAntialiasingDistance(source._sfAntialiasingDistance),
    _sfAntialiasingScale(source._sfAntialiasingScale),
    _sfAntialiasingTrigger(source._sfAntialiasingTrigger),
    _sfBackfaceCulling(source._sfBackfaceCulling),
    _sfSmallFeatureCulling(source._sfSmallFeatureCulling),
    _sfSmallFeaturePixels(source._sfSmallFeaturePixels),
    _sfSmallFeatureThreshold(source._sfSmallFeatureThreshold)
{
}

/*-------------------------- destructors ----------------------------------*/

RenderOptionsBase::~RenderOptionsBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void RenderOptionsBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<RenderOptionsBase *>(&oFrom),
                   whichField, 
                   syncMode, 
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void RenderOptionsBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<RenderOptionsBase *>(&oFrom), 
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void RenderOptionsBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr RenderOptionsBase::createAspectCopy(void) const
{
    RenderOptionsPtr returnValue; 

    newAspectCopy(returnValue, 
                  dynamic_cast<const RenderOptions *>(this)); 

    return returnValue; 
}
#endif

void RenderOptionsBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


#include "OSGSField.ins"
#include "OSGMField.ins"

#if defined(OSG_TMPL_STATIC_MEMBER_NEEDS_FUNCTION_INSTANTIATION) || \
    defined(OSG_TMPL_STATIC_MEMBER_NEEDS_CLASS_INSTANTIATION   )

#include "OSGSFieldFuncs.ins"
#include "OSGMFieldFuncs.ins"
#endif

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<RenderOptionsPtr>::_type("RenderOptionsPtr", "FieldContainerAttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(RenderOptionsPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, RenderOptionsPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, RenderOptionsPtr);

OSG_END_NAMESPACE


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: $";
    static Char8 cvsid_hpp       [] = OSGRENDEROPTIONSBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGRENDEROPTIONSBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGRENDEROPTIONSFIELDS_HEADER_CVSID;
}
