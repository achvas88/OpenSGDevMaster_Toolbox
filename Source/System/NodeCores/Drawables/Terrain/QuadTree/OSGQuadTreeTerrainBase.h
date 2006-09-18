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
 **     class QuadTreeTerrain
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGQUADTREETERRAINBASE_H_
#define _OSGQUADTREETERRAINBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGBaseTypes.h"

#include "OSGGeometry.h" // Parent

#include "OSGImageFields.h" // HeightData type
#include "OSGReal32Fields.h" // HeightScale type
#include "OSGReal32Fields.h" // HeightError type
#include "OSGReal32Fields.h" // HeightQuad type
#include "OSGUInt32Fields.h" // Width type
#include "OSGUInt32Fields.h" // Level type
#include "OSGReal32Fields.h" // Detail type
#include "OSGInt32Fields.h" // BorderDetail type
#include "OSGReal32Fields.h" // VertexSpacing type
#include "OSGGeoVectorPropertyFields.h" // HeightVertices type
#include "OSGBoolFields.h" // GeoMorphing type
#include "OSGPnt3fFields.h" // BoundMin type
#include "OSGPnt3fFields.h" // BoundMax type
#include "OSGPnt3fFields.h" // EyePoint type
#include "OSGReal32Fields.h" // EyeHeight type
#include "OSGBoolFields.h" // EyePointValid type
#include "OSGReal32Fields.h" // OriginX type
#include "OSGReal32Fields.h" // OriginY type
#include "OSGReal32Fields.h" // OriginTexX type
#include "OSGReal32Fields.h" // OriginTexY type
#include "OSGReal32Fields.h" // TexSpacing type
#include "OSGReal32Fields.h" // TexYSpacing type
#include "OSGBoolFields.h" // UpdateTerrain type
#include "OSGBoolFields.h" // PerPixelLighting type

#include "OSGQuadTreeTerrainFields.h"

OSG_BEGIN_NAMESPACE

class QuadTreeTerrain;

//! \brief QuadTreeTerrain Base Class.

class OSG_DRAWABLE_DLLMAPPING QuadTreeTerrainBase : public Geometry
{
  public:

    typedef Geometry Inherited;
    typedef Geometry ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<GeometryPtr, 
                              GeometryConstPtr, 
                              QuadTreeTerrain>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<GeometryPtr, 
                              GeometryConstPtr, 
                              QuadTreeTerrain>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<GeometryPtr, 
                              GeometryConstPtr,
                              QuadTreeTerrain>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<GeometryPtr, 
                              GeometryConstPtr,
                              QuadTreeTerrain>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<GeometryPtr, 
                              GeometryConstPtr,
                              QuadTreeTerrain>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<GeometryPtr, 
                              GeometryConstPtr,
                              QuadTreeTerrain>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        HeightDataFieldId = Inherited::NextFieldId,
        HeightScaleFieldId = HeightDataFieldId + 1,
        HeightErrorFieldId = HeightScaleFieldId + 1,
        HeightQuadFieldId = HeightErrorFieldId + 1,
        WidthFieldId = HeightQuadFieldId + 1,
        LevelFieldId = WidthFieldId + 1,
        DetailFieldId = LevelFieldId + 1,
        BorderDetailFieldId = DetailFieldId + 1,
        VertexSpacingFieldId = BorderDetailFieldId + 1,
        HeightVerticesFieldId = VertexSpacingFieldId + 1,
        GeoMorphingFieldId = HeightVerticesFieldId + 1,
        BoundMinFieldId = GeoMorphingFieldId + 1,
        BoundMaxFieldId = BoundMinFieldId + 1,
        EyePointFieldId = BoundMaxFieldId + 1,
        EyeHeightFieldId = EyePointFieldId + 1,
        EyePointValidFieldId = EyeHeightFieldId + 1,
        OriginXFieldId = EyePointValidFieldId + 1,
        OriginYFieldId = OriginXFieldId + 1,
        OriginTexXFieldId = OriginYFieldId + 1,
        OriginTexYFieldId = OriginTexXFieldId + 1,
        TexSpacingFieldId = OriginTexYFieldId + 1,
        TexYSpacingFieldId = TexSpacingFieldId + 1,
        UpdateTerrainFieldId = TexYSpacingFieldId + 1,
        PerPixelLightingFieldId = UpdateTerrainFieldId + 1,
        NextFieldId = PerPixelLightingFieldId + 1
    };

    static const OSG::BitVector HeightDataFieldMask = 
        (TypeTraits<BitVector>::One << HeightDataFieldId);
    static const OSG::BitVector HeightScaleFieldMask = 
        (TypeTraits<BitVector>::One << HeightScaleFieldId);
    static const OSG::BitVector HeightErrorFieldMask = 
        (TypeTraits<BitVector>::One << HeightErrorFieldId);
    static const OSG::BitVector HeightQuadFieldMask = 
        (TypeTraits<BitVector>::One << HeightQuadFieldId);
    static const OSG::BitVector WidthFieldMask = 
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector LevelFieldMask = 
        (TypeTraits<BitVector>::One << LevelFieldId);
    static const OSG::BitVector DetailFieldMask = 
        (TypeTraits<BitVector>::One << DetailFieldId);
    static const OSG::BitVector BorderDetailFieldMask = 
        (TypeTraits<BitVector>::One << BorderDetailFieldId);
    static const OSG::BitVector VertexSpacingFieldMask = 
        (TypeTraits<BitVector>::One << VertexSpacingFieldId);
    static const OSG::BitVector HeightVerticesFieldMask = 
        (TypeTraits<BitVector>::One << HeightVerticesFieldId);
    static const OSG::BitVector GeoMorphingFieldMask = 
        (TypeTraits<BitVector>::One << GeoMorphingFieldId);
    static const OSG::BitVector BoundMinFieldMask = 
        (TypeTraits<BitVector>::One << BoundMinFieldId);
    static const OSG::BitVector BoundMaxFieldMask = 
        (TypeTraits<BitVector>::One << BoundMaxFieldId);
    static const OSG::BitVector EyePointFieldMask = 
        (TypeTraits<BitVector>::One << EyePointFieldId);
    static const OSG::BitVector EyeHeightFieldMask = 
        (TypeTraits<BitVector>::One << EyeHeightFieldId);
    static const OSG::BitVector EyePointValidFieldMask = 
        (TypeTraits<BitVector>::One << EyePointValidFieldId);
    static const OSG::BitVector OriginXFieldMask = 
        (TypeTraits<BitVector>::One << OriginXFieldId);
    static const OSG::BitVector OriginYFieldMask = 
        (TypeTraits<BitVector>::One << OriginYFieldId);
    static const OSG::BitVector OriginTexXFieldMask = 
        (TypeTraits<BitVector>::One << OriginTexXFieldId);
    static const OSG::BitVector OriginTexYFieldMask = 
        (TypeTraits<BitVector>::One << OriginTexYFieldId);
    static const OSG::BitVector TexSpacingFieldMask = 
        (TypeTraits<BitVector>::One << TexSpacingFieldId);
    static const OSG::BitVector TexYSpacingFieldMask = 
        (TypeTraits<BitVector>::One << TexYSpacingFieldId);
    static const OSG::BitVector UpdateTerrainFieldMask = 
        (TypeTraits<BitVector>::One << UpdateTerrainFieldId);
    static const OSG::BitVector PerPixelLightingFieldMask = 
        (TypeTraits<BitVector>::One << PerPixelLightingFieldId);
    static const OSG::BitVector NextFieldMask = 
        (TypeTraits<BitVector>::One << NextFieldId);


    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void); 
    static UInt32              getClassTypeId (void); 
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void); 
    virtual const FieldContainerType &getType         (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

     const SFImagePtr *getSFHeightData (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFHeightScale(void);
#endif
           SFReal32 *editSFHeightScale(void);
     const SFReal32 *getSFHeightScale (void) const;

#ifdef OSG_1_COMPAT
           MFReal32 *getMFHeightError(void);
#endif
           MFReal32 *editMFHeightError(void);
     const MFReal32 *getMFHeightError (void) const;

#ifdef OSG_1_COMPAT
           MFReal32 *getMFHeightQuad(void);
#endif
           MFReal32 *editMFHeightQuad(void);
     const MFReal32 *getMFHeightQuad (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFDetail(void);
#endif
           SFReal32 *editSFDetail(void);
     const SFReal32 *getSFDetail (void) const;

#ifdef OSG_1_COMPAT
           SFInt32 *getSFBorderDetail(void);
#endif
           SFInt32 *editSFBorderDetail(void);
     const SFInt32 *getSFBorderDetail (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFVertexSpacing(void);
#endif
           SFReal32 *editSFVertexSpacing(void);
     const SFReal32 *getSFVertexSpacing (void) const;

#ifdef OSG_1_COMPAT
           SFBool *getSFGeoMorphing(void);
#endif
           SFBool *editSFGeoMorphing(void);
     const SFBool *getSFGeoMorphing (void) const;

#ifdef OSG_1_COMPAT
           SFPnt3f *getSFEyePoint(void);
#endif
           SFPnt3f *editSFEyePoint(void);
     const SFPnt3f *getSFEyePoint (void) const;

#ifdef OSG_1_COMPAT
           SFBool *getSFEyePointValid(void);
#endif
           SFBool *editSFEyePointValid(void);
     const SFBool *getSFEyePointValid (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFOriginX(void);
#endif
           SFReal32 *editSFOriginX(void);
     const SFReal32 *getSFOriginX (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFOriginY(void);
#endif
           SFReal32 *editSFOriginY(void);
     const SFReal32 *getSFOriginY (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFOriginTexX(void);
#endif
           SFReal32 *editSFOriginTexX(void);
     const SFReal32 *getSFOriginTexX (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFOriginTexY(void);
#endif
           SFReal32 *editSFOriginTexY(void);
     const SFReal32 *getSFOriginTexY (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFTexSpacing(void);
#endif
           SFReal32 *editSFTexSpacing(void);
     const SFReal32 *getSFTexSpacing (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFTexYSpacing(void);
#endif
           SFReal32 *editSFTexYSpacing(void);
     const SFReal32 *getSFTexYSpacing (void) const;

#ifdef OSG_1_COMPAT
           SFBool *getSFUpdateTerrain(void);
#endif
           SFBool *editSFUpdateTerrain(void);
     const SFBool *getSFUpdateTerrain (void) const;

#ifdef OSG_1_COMPAT
           SFBool *getSFPerPixelLighting(void);
#endif
           SFBool *editSFPerPixelLighting(void);
     const SFBool *getSFPerPixelLighting (void) const;


           ImagePtrConst getHeightData(void) const;

#ifdef OSG_1_COMPAT
           Real32 &getHeightScale(void);
#endif
           Real32 &editHeightScale(void);
     const Real32 &getHeightScale (void) const;

#ifdef OSG_1_COMPAT
           Real32 &getHeightError(const UInt32 index);
           MFReal32 &getHeightError(void);
#endif
           Real32 &editHeightError(const UInt32 index);
     const Real32 &getHeightError (const UInt32 index) const;
           MFReal32 &editHeightError(void);
     const MFReal32 &getHeightError(void) const;

#ifdef OSG_1_COMPAT
           Real32 &getHeightQuad(const UInt32 index);
           MFReal32 &getHeightQuad(void);
#endif
           Real32 &editHeightQuad(const UInt32 index);
     const Real32 &getHeightQuad (const UInt32 index) const;
           MFReal32 &editHeightQuad(void);
     const MFReal32 &getHeightQuad(void) const;

#ifdef OSG_1_COMPAT
           Real32 &getDetail(void);
#endif
           Real32 &editDetail(void);
     const Real32 &getDetail (void) const;

#ifdef OSG_1_COMPAT
           Int32 &getBorderDetail(void);
#endif
           Int32 &editBorderDetail(void);
     const Int32 &getBorderDetail (void) const;

#ifdef OSG_1_COMPAT
           Real32 &getVertexSpacing(void);
#endif
           Real32 &editVertexSpacing(void);
     const Real32 &getVertexSpacing (void) const;

#ifdef OSG_1_COMPAT
           bool &getGeoMorphing(void);
#endif
           bool &editGeoMorphing(void);
     const bool &getGeoMorphing (void) const;

#ifdef OSG_1_COMPAT
           Pnt3f &getEyePoint(void);
#endif
           Pnt3f &editEyePoint(void);
     const Pnt3f &getEyePoint (void) const;

#ifdef OSG_1_COMPAT
           bool &getEyePointValid(void);
#endif
           bool &editEyePointValid(void);
     const bool &getEyePointValid (void) const;

#ifdef OSG_1_COMPAT
           Real32 &getOriginX(void);
#endif
           Real32 &editOriginX(void);
     const Real32 &getOriginX (void) const;

#ifdef OSG_1_COMPAT
           Real32 &getOriginY(void);
#endif
           Real32 &editOriginY(void);
     const Real32 &getOriginY (void) const;

#ifdef OSG_1_COMPAT
           Real32 &getOriginTexX(void);
#endif
           Real32 &editOriginTexX(void);
     const Real32 &getOriginTexX (void) const;

#ifdef OSG_1_COMPAT
           Real32 &getOriginTexY(void);
#endif
           Real32 &editOriginTexY(void);
     const Real32 &getOriginTexY (void) const;

#ifdef OSG_1_COMPAT
           Real32 &getTexSpacing(void);
#endif
           Real32 &editTexSpacing(void);
     const Real32 &getTexSpacing (void) const;

#ifdef OSG_1_COMPAT
           Real32 &getTexYSpacing(void);
#endif
           Real32 &editTexYSpacing(void);
     const Real32 &getTexYSpacing (void) const;

#ifdef OSG_1_COMPAT
           bool &getUpdateTerrain(void);
#endif
           bool &editUpdateTerrain(void);
     const bool &getUpdateTerrain (void) const;

#ifdef OSG_1_COMPAT
           bool &getPerPixelLighting(void);
#endif
           bool &editPerPixelLighting(void);
     const bool &getPerPixelLighting (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setHeightData(ImagePtrConstArg value);
     void setHeightScale(const Real32 &value);
     void setDetail(const Real32 &value);
     void setBorderDetail(const Int32 &value);
     void setVertexSpacing(const Real32 &value);
     void setGeoMorphing(const bool &value);
     void setEyePoint(const Pnt3f &value);
     void setEyePointValid(const bool &value);
     void setOriginX(const Real32 &value);
     void setOriginY(const Real32 &value);
     void setOriginTexX(const Real32 &value);
     void setOriginTexY(const Real32 &value);
     void setTexSpacing(const Real32 &value);
     void setTexYSpacing(const Real32 &value);
     void setUpdateTerrain(const bool &value);
     void setPerPixelLighting(const bool &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    virtual void pushToField     (      FieldContainerPtrConstArg pNewElement, 
                                  const UInt32                    uiFieldId  );

    virtual void insertIntoMField(const UInt32                    uiIndex, 
                                        FieldContainerPtrConstArg pNewElement, 
                                  const UInt32                    uiFieldId  );

    virtual void replaceInMField (const UInt32                    uiIndex,
                                        FieldContainerPtrConstArg pNewElement, 
                                  const UInt32                    uiFieldId  );

    virtual void replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                        FieldContainerPtrConstArg pNewElement, 
                                  const UInt32                    uiFieldId  );

    virtual void removeFromMField(const UInt32                    uiIndex, 
                                  const UInt32                    uiFieldId  );
    
    virtual void removeFromMField(      FieldContainerPtrConstArg pElement, 
                                  const UInt32                    uiFieldId  );

    virtual void clearField      (const UInt32                    uiFieldId  );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */



    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  QuadTreeTerrainPtr create     (void); 
    static  QuadTreeTerrainPtr createEmpty(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr shallowCopy(void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFImagePtr _sfHeightData;
    SFReal32 _sfHeightScale;
    MFReal32 _mfHeightError;
    MFReal32 _mfHeightQuad;
    SFUInt32 _sfWidth;
    SFUInt32 _sfLevel;
    SFReal32 _sfDetail;
    SFInt32 _sfBorderDetail;
    SFReal32 _sfVertexSpacing;
    SFGeoVectorPropertyPtr _sfHeightVertices;
    SFBool _sfGeoMorphing;
    SFPnt3f _sfBoundMin;
    SFPnt3f _sfBoundMax;
    SFPnt3f _sfEyePoint;
    SFReal32 _sfEyeHeight;
    SFBool _sfEyePointValid;
    SFReal32 _sfOriginX;
    SFReal32 _sfOriginY;
    SFReal32 _sfOriginTexX;
    SFReal32 _sfOriginTexY;
    SFReal32 _sfTexSpacing;
    SFReal32 _sfTexYSpacing;
    SFBool _sfUpdateTerrain;
    SFBool _sfPerPixelLighting;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    QuadTreeTerrainBase(void);
    QuadTreeTerrainBase(const QuadTreeTerrainBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~QuadTreeTerrainBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const QuadTreeTerrain *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


#ifdef OSG_1_COMPAT
           SFUInt32 *getSFWidth(void);
#endif
           SFUInt32 *editSFWidth(void);
     const SFUInt32 *getSFWidth (void) const;

#ifdef OSG_1_COMPAT
           SFUInt32 *getSFLevel(void);
#endif
           SFUInt32 *editSFLevel(void);
     const SFUInt32 *getSFLevel (void) const;
     const SFGeoVectorPropertyPtr *getSFHeightVertices (void) const;

#ifdef OSG_1_COMPAT
           SFPnt3f *getSFBoundMin(void);
#endif
           SFPnt3f *editSFBoundMin(void);
     const SFPnt3f *getSFBoundMin (void) const;

#ifdef OSG_1_COMPAT
           SFPnt3f *getSFBoundMax(void);
#endif
           SFPnt3f *editSFBoundMax(void);
     const SFPnt3f *getSFBoundMax (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFEyeHeight(void);
#endif
           SFReal32 *editSFEyeHeight(void);
     const SFReal32 *getSFEyeHeight (void) const;


#ifdef OSG_1_COMPAT
           UInt32 &getWidth(void);
#endif
           UInt32 &editWidth(void);
     const UInt32 &getWidth(void) const;

#ifdef OSG_1_COMPAT
           UInt32 &getLevel(void);
#endif
           UInt32 &editLevel(void);
     const UInt32 &getLevel(void) const;

           GeoVectorPropertyPtrConst getHeightVertices(void) const;

#ifdef OSG_1_COMPAT
           Pnt3f &getBoundMin(void);
#endif
           Pnt3f &editBoundMin(void);
     const Pnt3f &getBoundMin(void) const;

#ifdef OSG_1_COMPAT
           Pnt3f &getBoundMax(void);
#endif
           Pnt3f &editBoundMax(void);
     const Pnt3f &getBoundMax(void) const;

#ifdef OSG_1_COMPAT
           Real32 &getEyeHeight(void);
#endif
           Real32 &editEyeHeight(void);
     const Real32 &getEyeHeight(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setWidth(const UInt32 &value);
     void setLevel(const UInt32 &value);
     void setHeightVertices(GeoVectorPropertyPtrConstArg value);
     void setBoundMin(const Pnt3f &value);
     void setBoundMax(const Pnt3f &value);
     void setEyeHeight(const Real32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */




    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_FIELDCONTAINERPTR
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);

            void execSync (      QuadTreeTerrainBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      QuadTreeTerrainBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

#if 0
    virtual void execBeginEditV(ConstFieldMaskArg whichField, 
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);

            void execBeginEdit (ConstFieldMaskArg whichField, 
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainerPtr createAspectCopy(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const QuadTreeTerrainBase &source);
};

typedef QuadTreeTerrainBase *QuadTreeTerrainBaseP;

/** Type specific RefPtr type for QuadTreeTerrain. */
typedef RefPtr<QuadTreeTerrainPtr> QuadTreeTerrainRefPtr;

typedef osgIF<
    QuadTreeTerrainBase::isNodeCore,

    CoredNodePtr<QuadTreeTerrain>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        QuadTreeTerrainNodePtr;

OSG_END_NAMESPACE

#define OSGQUADTREETERRAINBASE_HEADER_CVSID "@(#)$Id: $"

#endif /* _OSGQUADTREETERRAINBASE_H_ */