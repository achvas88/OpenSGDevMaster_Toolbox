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
 **     class PolygonForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPOLYGONFOREGROUNDINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGMaterial.h> // Material Class

#include "OSGPolygonForegroundBase.h"
#include "OSGPolygonForeground.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PolygonForeground
    \ingroup GrpSystemWindowForegrounds

    A foreground that renders a single polygon used the specified material, 
    see \ref PageSystemPolygonForeground for a
    description.

    The polygon material is defined by _sfMaterial, the positions by _mfPositions,
    the texture coordinates by _mfTexCoords (there must be as many texture
    coordinates as positions). The interpretation of the positions is
    controlled by _sfNormalizedX and _sfNormalizedY.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var MaterialPtr     PolygonForegroundBase::_sfMaterial
    The material used to display.
*/

/*! \var Pnt2f           PolygonForegroundBase::_mfPositions
    The vertices of the geometry to display.
*/

/*! \var Vec3f           PolygonForegroundBase::_mfTexCoords
    The texture coordinates of the geometry to display.
*/

/*! \var bool            PolygonForegroundBase::_sfNormalizedX
    Define whether the x coordinates are normalized (0-1) or pixel-based.
*/

/*! \var bool            PolygonForegroundBase::_sfNormalizedY
    Define whether the y coordinates are normalized (0-1) or pixel-based.
*/

/*! \var UInt16          PolygonForegroundBase::_sfAspectHeight
    Useful for keeping aspect ratio when rendering things like images.
*/

/*! \var UInt16          PolygonForegroundBase::_sfAspectWidth
    Useful for keeping aspect ratio when rendering things like images.
*/

/*! \var Real32          PolygonForegroundBase::_sfScale
    Scale factor for zooming.
*/

/*! \var bool            PolygonForegroundBase::_sfTile
    If true the image tiles in multi window settings.
*/


void PolygonForegroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFMaterialPtr::Description(
        SFMaterialPtr::getClassType(),
        "material",
        "The material used to display.\n",
        MaterialFieldId, MaterialFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&PolygonForegroundBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&PolygonForegroundBase::getSFMaterial));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const MFPnt2f *(PolygonForegroundBase::*GetMFPositionsF)(void) const;

    GetMFPositionsF GetMFPositions = &PolygonForegroundBase::getMFPositions;
#endif

    pDesc = new MFPnt2f::Description(
        MFPnt2f::getClassType(),
        "positions",
        "The vertices of the geometry to display.\n",
        PositionsFieldId, PositionsFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonForegroundBase::editMFPositions),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFPositions));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonForegroundBase::getMFPositions));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const MFVec3f *(PolygonForegroundBase::*GetMFTexCoordsF)(void) const;

    GetMFTexCoordsF GetMFTexCoords = &PolygonForegroundBase::getMFTexCoords;
#endif

    pDesc = new MFVec3f::Description(
        MFVec3f::getClassType(),
        "texCoords",
        "The texture coordinates of the geometry to display.\n",
        TexCoordsFieldId, TexCoordsFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonForegroundBase::editMFTexCoords),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFTexCoords));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonForegroundBase::getMFTexCoords));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(PolygonForegroundBase::*GetSFNormalizedXF)(void) const;

    GetSFNormalizedXF GetSFNormalizedX = &PolygonForegroundBase::getSFNormalizedX;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "normalizedX",
        "Define whether the x coordinates are normalized (0-1) or pixel-based.\n",
        NormalizedXFieldId, NormalizedXFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonForegroundBase::editSFNormalizedX),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFNormalizedX));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonForegroundBase::getSFNormalizedX));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(PolygonForegroundBase::*GetSFNormalizedYF)(void) const;

    GetSFNormalizedYF GetSFNormalizedY = &PolygonForegroundBase::getSFNormalizedY;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "normalizedY",
        "Define whether the y coordinates are normalized (0-1) or pixel-based.\n",
        NormalizedYFieldId, NormalizedYFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonForegroundBase::editSFNormalizedY),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFNormalizedY));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonForegroundBase::getSFNormalizedY));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt16 *(PolygonForegroundBase::*GetSFAspectHeightF)(void) const;

    GetSFAspectHeightF GetSFAspectHeight = &PolygonForegroundBase::getSFAspectHeight;
#endif

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "aspectHeight",
        "Useful for keeping aspect ratio when rendering things like images.\n",
        AspectHeightFieldId, AspectHeightFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonForegroundBase::editSFAspectHeight),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAspectHeight));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonForegroundBase::getSFAspectHeight));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt16 *(PolygonForegroundBase::*GetSFAspectWidthF)(void) const;

    GetSFAspectWidthF GetSFAspectWidth = &PolygonForegroundBase::getSFAspectWidth;
#endif

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "aspectWidth",
        "Useful for keeping aspect ratio when rendering things like images.\n",
        AspectWidthFieldId, AspectWidthFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonForegroundBase::editSFAspectWidth),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAspectWidth));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonForegroundBase::getSFAspectWidth));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(PolygonForegroundBase::*GetSFScaleF)(void) const;

    GetSFScaleF GetSFScale = &PolygonForegroundBase::getSFScale;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "scale",
        "Scale factor for zooming.\n",
        ScaleFieldId, ScaleFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonForegroundBase::editSFScale),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFScale));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonForegroundBase::getSFScale));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(PolygonForegroundBase::*GetSFTileF)(void) const;

    GetSFTileF GetSFTile = &PolygonForegroundBase::getSFTile;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "tile",
        "If true the image tiles in multi window settings.\n",
        TileFieldId, TileFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonForegroundBase::editSFTile),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFTile));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonForegroundBase::getSFTile));
#endif

    oType.addInitialDesc(pDesc);
}


PolygonForegroundBase::TypeObject PolygonForegroundBase::_type(
    PolygonForegroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &PolygonForegroundBase::createEmpty,
    PolygonForeground::initMethod,
    (InitalInsertDescFunc) &PolygonForegroundBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PolygonForeground\"\n"
    "\tparent=\"Foreground\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowForegrounds\n"
    "\n"
    "A foreground that renders a single polygon used the specified material, \n"
    "see \\ref PageSystemPolygonForeground for a\n"
    "description.\n"
    "\n"
    "The polygon material is defined by _sfMaterial, the positions by _mfPositions,\n"
    "the texture coordinates by _mfTexCoords (there must be as many texture\n"
    "coordinates as positions). The interpretation of the positions is\n"
    "controlled by _sfNormalizedX and _sfNormalizedY.\n"
    "\t<Field\n"
    "\t\tname=\"material\"\n"
    "\t\ttype=\"MaterialPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe material used to display.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"positions\"\n"
    "\t\ttype=\"Pnt2f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe vertices of the geometry to display.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"texCoords\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe texture coordinates of the geometry to display.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"normalizedX\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tDefine whether the x coordinates are normalized (0-1) or pixel-based.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"normalizedY\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tDefine whether the y coordinates are normalized (0-1) or pixel-based.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"aspectHeight\"\n"
    "\t\ttype=\"UInt16\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tUseful for keeping aspect ratio when rendering things like images.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"aspectWidth\"\n"
    "\t\ttype=\"UInt16\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tUseful for keeping aspect ratio when rendering things like images.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"scale\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tScale factor for zooming.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"tile\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tIf true the image tiles in multi window settings.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowForegrounds\n"
    "\n"
    "A foreground that renders a single polygon used the specified material, \n"
    "see \\ref PageSystemPolygonForeground for a\n"
    "description.\n"
    "\n"
    "The polygon material is defined by _sfMaterial, the positions by _mfPositions,\n"
    "the texture coordinates by _mfTexCoords (there must be as many texture\n"
    "coordinates as positions). The interpretation of the positions is\n"
    "controlled by _sfNormalizedX and _sfNormalizedY.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PolygonForegroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &PolygonForegroundBase::getType(void) const
{
    return _type;
}

UInt32 PolygonForegroundBase::getContainerSize(void) const
{
    return sizeof(PolygonForeground);
}

/*------------------------- decorator get ------------------------------*/


//! Get the PolygonForeground::_sfMaterial field.
const SFMaterialPtr *PolygonForegroundBase::getSFMaterial(void) const
{
    return &_sfMaterial;
}

MFPnt2f *PolygonForegroundBase::editMFPositions(void)
{
    editMField(PositionsFieldMask, _mfPositions);

    return &_mfPositions;
}

const MFPnt2f *PolygonForegroundBase::getMFPositions(void) const
{
    return &_mfPositions;
}

#ifdef OSG_1_GET_COMPAT
MFPnt2f             *PolygonForegroundBase::getMFPositions      (void)
{
    return this->editMFPositions      ();
}
#endif

MFVec3f *PolygonForegroundBase::editMFTexCoords(void)
{
    editMField(TexCoordsFieldMask, _mfTexCoords);

    return &_mfTexCoords;
}

const MFVec3f *PolygonForegroundBase::getMFTexCoords(void) const
{
    return &_mfTexCoords;
}

#ifdef OSG_1_GET_COMPAT
MFVec3f             *PolygonForegroundBase::getMFTexCoords      (void)
{
    return this->editMFTexCoords      ();
}
#endif

SFBool *PolygonForegroundBase::editSFNormalizedX(void)
{
    editSField(NormalizedXFieldMask);

    return &_sfNormalizedX;
}

const SFBool *PolygonForegroundBase::getSFNormalizedX(void) const
{
    return &_sfNormalizedX;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *PolygonForegroundBase::getSFNormalizedX    (void)
{
    return this->editSFNormalizedX    ();
}
#endif

SFBool *PolygonForegroundBase::editSFNormalizedY(void)
{
    editSField(NormalizedYFieldMask);

    return &_sfNormalizedY;
}

const SFBool *PolygonForegroundBase::getSFNormalizedY(void) const
{
    return &_sfNormalizedY;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *PolygonForegroundBase::getSFNormalizedY    (void)
{
    return this->editSFNormalizedY    ();
}
#endif

SFUInt16 *PolygonForegroundBase::editSFAspectHeight(void)
{
    editSField(AspectHeightFieldMask);

    return &_sfAspectHeight;
}

const SFUInt16 *PolygonForegroundBase::getSFAspectHeight(void) const
{
    return &_sfAspectHeight;
}

#ifdef OSG_1_GET_COMPAT
SFUInt16            *PolygonForegroundBase::getSFAspectHeight   (void)
{
    return this->editSFAspectHeight   ();
}
#endif

SFUInt16 *PolygonForegroundBase::editSFAspectWidth(void)
{
    editSField(AspectWidthFieldMask);

    return &_sfAspectWidth;
}

const SFUInt16 *PolygonForegroundBase::getSFAspectWidth(void) const
{
    return &_sfAspectWidth;
}

#ifdef OSG_1_GET_COMPAT
SFUInt16            *PolygonForegroundBase::getSFAspectWidth    (void)
{
    return this->editSFAspectWidth    ();
}
#endif

SFReal32 *PolygonForegroundBase::editSFScale(void)
{
    editSField(ScaleFieldMask);

    return &_sfScale;
}

const SFReal32 *PolygonForegroundBase::getSFScale(void) const
{
    return &_sfScale;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *PolygonForegroundBase::getSFScale          (void)
{
    return this->editSFScale          ();
}
#endif

SFBool *PolygonForegroundBase::editSFTile(void)
{
    editSField(TileFieldMask);

    return &_sfTile;
}

const SFBool *PolygonForegroundBase::getSFTile(void) const
{
    return &_sfTile;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *PolygonForegroundBase::getSFTile           (void)
{
    return this->editSFTile           ();
}
#endif


void PolygonForegroundBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == MaterialFieldId)
    {
        static_cast<PolygonForeground *>(this)->setMaterial(
            cast_dynamic<MaterialPtr>(pNewElement));
    }
}

void PolygonForegroundBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void PolygonForegroundBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void PolygonForegroundBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void PolygonForegroundBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void PolygonForegroundBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void PolygonForegroundBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == MaterialFieldId)
    {
        static_cast<PolygonForeground *>(this)->setMaterial(NullFC);
    }
}

/*********************************** Non-ptr code ********************************/
void PolygonForegroundBase::pushToPositions(const Pnt2f& value)
{
    editMField(PositionsFieldMask, _mfPositions);
    _mfPositions.push_back(value);
}

void PolygonForegroundBase::insertIntoPositions(UInt32                uiIndex,
                                                   const Pnt2f& value   )
{
    editMField(PositionsFieldMask, _mfPositions);

    MFPnt2f::iterator fieldIt = _mfPositions.begin();

    fieldIt += uiIndex;

    _mfPositions.insert(fieldIt, value);
}

void PolygonForegroundBase::replaceInPositions(UInt32                uiIndex,
                                                       const Pnt2f& value   )
{
    if(uiIndex >= _mfPositions.size())
        return;

    editMField(PositionsFieldMask, _mfPositions);

    _mfPositions[uiIndex] = value;
}

void PolygonForegroundBase::replaceInPositions(const Pnt2f& pOldElem,
                                                        const Pnt2f& pNewElem)
{
    Int32  elemIdx = _mfPositions.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(PositionsFieldMask, _mfPositions);

        MFPnt2f::iterator fieldIt = _mfPositions.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void PolygonForegroundBase::removeFromPositions(UInt32 uiIndex)
{
    if(uiIndex < _mfPositions.size())
    {
        editMField(PositionsFieldMask, _mfPositions);

        MFPnt2f::iterator fieldIt = _mfPositions.begin();

        fieldIt += uiIndex;
        _mfPositions.erase(fieldIt);
    }
}

void PolygonForegroundBase::removeFromPositions(const Pnt2f& value)
{
    Int32 iElemIdx = _mfPositions.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(PositionsFieldMask, _mfPositions);

        MFPnt2f::iterator fieldIt = _mfPositions.begin();

        fieldIt += iElemIdx;

        _mfPositions.erase(fieldIt);
    }
}

void PolygonForegroundBase::clearPositions(void)
{
    editMField(PositionsFieldMask, _mfPositions);

    _mfPositions.clear();
}
/*********************************** Non-ptr code ********************************/
void PolygonForegroundBase::pushToTexCoords(const Vec3f& value)
{
    editMField(TexCoordsFieldMask, _mfTexCoords);
    _mfTexCoords.push_back(value);
}

void PolygonForegroundBase::insertIntoTexCoords(UInt32                uiIndex,
                                                   const Vec3f& value   )
{
    editMField(TexCoordsFieldMask, _mfTexCoords);

    MFVec3f::iterator fieldIt = _mfTexCoords.begin();

    fieldIt += uiIndex;

    _mfTexCoords.insert(fieldIt, value);
}

void PolygonForegroundBase::replaceInTexCoords(UInt32                uiIndex,
                                                       const Vec3f& value   )
{
    if(uiIndex >= _mfTexCoords.size())
        return;

    editMField(TexCoordsFieldMask, _mfTexCoords);

    _mfTexCoords[uiIndex] = value;
}

void PolygonForegroundBase::replaceInTexCoords(const Vec3f& pOldElem,
                                                        const Vec3f& pNewElem)
{
    Int32  elemIdx = _mfTexCoords.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(TexCoordsFieldMask, _mfTexCoords);

        MFVec3f::iterator fieldIt = _mfTexCoords.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void PolygonForegroundBase::removeFromTexCoords(UInt32 uiIndex)
{
    if(uiIndex < _mfTexCoords.size())
    {
        editMField(TexCoordsFieldMask, _mfTexCoords);

        MFVec3f::iterator fieldIt = _mfTexCoords.begin();

        fieldIt += uiIndex;
        _mfTexCoords.erase(fieldIt);
    }
}

void PolygonForegroundBase::removeFromTexCoords(const Vec3f& value)
{
    Int32 iElemIdx = _mfTexCoords.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(TexCoordsFieldMask, _mfTexCoords);

        MFVec3f::iterator fieldIt = _mfTexCoords.begin();

        fieldIt += iElemIdx;

        _mfTexCoords.erase(fieldIt);
    }
}

void PolygonForegroundBase::clearTexCoords(void)
{
    editMField(TexCoordsFieldMask, _mfTexCoords);

    _mfTexCoords.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 PolygonForegroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        returnValue += _sfMaterial.getBinSize();
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        returnValue += _mfPositions.getBinSize();
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        returnValue += _mfTexCoords.getBinSize();
    }
    if(FieldBits::NoField != (NormalizedXFieldMask & whichField))
    {
        returnValue += _sfNormalizedX.getBinSize();
    }
    if(FieldBits::NoField != (NormalizedYFieldMask & whichField))
    {
        returnValue += _sfNormalizedY.getBinSize();
    }
    if(FieldBits::NoField != (AspectHeightFieldMask & whichField))
    {
        returnValue += _sfAspectHeight.getBinSize();
    }
    if(FieldBits::NoField != (AspectWidthFieldMask & whichField))
    {
        returnValue += _sfAspectWidth.getBinSize();
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        returnValue += _sfScale.getBinSize();
    }
    if(FieldBits::NoField != (TileFieldMask & whichField))
    {
        returnValue += _sfTile.getBinSize();
    }

    return returnValue;
}

void PolygonForegroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _mfPositions.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        _mfTexCoords.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NormalizedXFieldMask & whichField))
    {
        _sfNormalizedX.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NormalizedYFieldMask & whichField))
    {
        _sfNormalizedY.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AspectHeightFieldMask & whichField))
    {
        _sfAspectHeight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AspectWidthFieldMask & whichField))
    {
        _sfAspectWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TileFieldMask & whichField))
    {
        _sfTile.copyToBin(pMem);
    }
}

void PolygonForegroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _mfPositions.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        _mfTexCoords.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NormalizedXFieldMask & whichField))
    {
        _sfNormalizedX.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NormalizedYFieldMask & whichField))
    {
        _sfNormalizedY.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AspectHeightFieldMask & whichField))
    {
        _sfAspectHeight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AspectWidthFieldMask & whichField))
    {
        _sfAspectWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TileFieldMask & whichField))
    {
        _sfTile.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
PolygonForegroundPtr PolygonForegroundBase::createEmpty(void)
{
    PolygonForegroundPtr returnValue;

    newPtr<PolygonForeground>(returnValue);

    return returnValue;
}

FieldContainerPtr PolygonForegroundBase::shallowCopy(void) const
{
    PolygonForegroundPtr returnValue;

    newPtr(returnValue, dynamic_cast<const PolygonForeground *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

PolygonForegroundBase::PolygonForegroundBase(void) :
    Inherited(),
    _sfMaterial               (),
    _mfPositions              (),
    _mfTexCoords              (),
    _sfNormalizedX            (bool(true)),
    _sfNormalizedY            (bool(true)),
    _sfAspectHeight           (UInt16(0)),
    _sfAspectWidth            (UInt16(0)),
    _sfScale                  (Real32(1.0)),
    _sfTile                   (bool(true))
{
}

PolygonForegroundBase::PolygonForegroundBase(const PolygonForegroundBase &source) :
    Inherited(source),
    _sfMaterial               (),
    _mfPositions              (source._mfPositions              ),
    _mfTexCoords              (source._mfTexCoords              ),
    _sfNormalizedX            (source._sfNormalizedX            ),
    _sfNormalizedY            (source._sfNormalizedY            ),
    _sfAspectHeight           (source._sfAspectHeight           ),
    _sfAspectWidth            (source._sfAspectWidth            ),
    _sfScale                  (source._sfScale                  ),
    _sfTile                   (source._sfTile                   )
{
}

/*-------------------------- destructors ----------------------------------*/

PolygonForegroundBase::~PolygonForegroundBase(void)
{
}

void PolygonForegroundBase::onCreate(const PolygonForeground *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setMaterial(source->getMaterial());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void PolygonForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<PolygonForegroundBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void PolygonForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<PolygonForegroundBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void PolygonForegroundBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr PolygonForegroundBase::createAspectCopy(void) const
{
    PolygonForegroundPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PolygonForeground *>(this));

    return returnValue;
}
#endif

void PolygonForegroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<PolygonForeground *>(this)->setMaterial(NullFC);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfPositions.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfTexCoords.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PolygonForegroundPtr>::_type("PolygonForegroundPtr", "ForegroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PolygonForegroundPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, PolygonForegroundPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, PolygonForegroundPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
